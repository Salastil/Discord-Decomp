package com.discord.media.engine.video.texture_view;

import android.media.Image;
import android.media.ImageReader;
import android.os.Handler;
import android.os.HandlerThread;
import android.view.Surface;
import java.util.Iterator;
import java.util.LinkedHashMap;
import java.util.Map;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.SourceDebugExtension;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u0000D\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010%\n\u0002\u0010\u000e\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\u0010\u000b\n\u0002\b\u0007\b\u0000\u0018\u0000 \u001c2\u00020\u0001:\u0001\u001cB\u0007¢\u0006\u0004\b\u0002\u0010\u0003J\u000e\u0010\r\u001a\u00020\u000e2\u0006\u0010\u000f\u001a\u00020\u0006J\u0010\u0010\u0010\u001a\u0004\u0018\u00010\u000e2\u0006\u0010\u000f\u001a\u00020\u0006J\u000e\u0010\u0011\u001a\u00020\u00122\u0006\u0010\u000f\u001a\u00020\u0006J\u001a\u0010\u0013\u001a\u00020\u00122\u0012\u0010\u0014\u001a\u000e\u0012\u0004\u0012\u00020\u0006\u0012\u0004\u0012\u00020\u00160\u0015J\b\u0010\u0017\u001a\u00020\u000bH\u0002J\b\u0010\u0018\u001a\u00020\u0007H\u0002J\u0010\u0010\u0019\u001a\u00020\u00122\u0006\u0010\u001a\u001a\u00020\u0007H\u0002J\b\u0010\u001b\u001a\u00020\u0012H\u0002R\u001a\u0010\u0004\u001a\u000e\u0012\u0004\u0012\u00020\u0006\u0012\u0004\u0012\u00020\u00070\u0005X\u0082\u0004¢\u0006\u0002\n\u0000R\u0010\u0010\b\u001a\u0004\u0018\u00010\tX\u0082\u000e¢\u0006\u0002\n\u0000R\u0010\u0010\n\u001a\u0004\u0018\u00010\u000bX\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\f\u001a\u00020\u0001X\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006\u001d"}, d2 = {"Lcom/discord/media/engine/video/texture_view/PlaceholderSinkPool;", "", "<init>", "()V", "sinks", "", "", "Landroid/media/ImageReader;", "thread", "Landroid/os/HandlerThread;", "handler", "Landroid/os/Handler;", "lock", "surfaceFor", "Landroid/view/Surface;", "streamId", "surfaceIfPresent", "release", "", "releaseWhere", "predicate", "Lkotlin/Function1;", "", "ensureDrainHandler", "createReader", "closeReader", "reader", "stopThreadIfIdle", "Companion", "media_engine_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
@SourceDebugExtension({"SMAP\nPlaceholderSinkPool.kt\nKotlin\n*S Kotlin\n*F\n+ 1 PlaceholderSinkPool.kt\ncom/discord/media/engine/video/texture_view/PlaceholderSinkPool\n+ 2 Maps.kt\nkotlin/collections/MapsKt__MapsKt\n+ 3 fake.kt\nkotlin/jvm/internal/FakeKt\n*L\n1#1,95:1\n384#2,7:96\n1#3:103\n*S KotlinDebug\n*F\n+ 1 PlaceholderSinkPool.kt\ncom/discord/media/engine/video/texture_view/PlaceholderSinkPool\n*L\n29#1:96,7\n*E\n"})
/* loaded from: classes.dex */
public final class PlaceholderSinkPool {
    private static final int MAX_IMAGES = 3;
    private static final int SIZE = 16;
    private Handler handler;
    private HandlerThread thread;

    @NotNull
    private final Map<String, ImageReader> sinks = new LinkedHashMap();

    @NotNull
    private final Object lock = new Object();

    private final void closeReader(final ImageReader reader) {
        Handler handler = this.handler;
        if (handler != null) {
            handler.post(new Runnable() { // from class: com.discord.media.engine.video.texture_view.b
                @Override // java.lang.Runnable
                public final void run() {
                    reader.close();
                }
            });
        } else {
            reader.close();
        }
    }

    private final ImageReader createReader() {
        ImageReader newInstance = ImageReader.newInstance(16, 16, 34, 3);
        Intrinsics.checkNotNullExpressionValue(newInstance, "newInstance(...)");
        newInstance.setOnImageAvailableListener(new a(), ensureDrainHandler());
        return newInstance;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void createReader$lambda$9(ImageReader imageReader) {
        try {
            Image acquireLatestImage = imageReader.acquireLatestImage();
            if (acquireLatestImage != null) {
                acquireLatestImage.close();
            }
        } catch (IllegalStateException unused) {
        }
    }

    private final Handler ensureDrainHandler() {
        Handler handler = this.handler;
        if (handler != null) {
            return handler;
        }
        HandlerThread handlerThread = new HandlerThread("SdrPlaceholderSink");
        handlerThread.start();
        this.thread = handlerThread;
        HandlerThread handlerThread2 = this.thread;
        Intrinsics.checkNotNull(handlerThread2);
        Handler handler2 = new Handler(handlerThread2.getLooper());
        this.handler = handler2;
        return handler2;
    }

    private final void stopThreadIfIdle() {
        if (this.sinks.isEmpty()) {
            HandlerThread handlerThread = this.thread;
            if (handlerThread != null) {
                handlerThread.quitSafely();
            }
            this.thread = null;
            this.handler = null;
        }
    }

    public final void release(@NotNull String streamId) {
        Intrinsics.checkNotNullParameter(streamId, "streamId");
        synchronized (this.lock) {
            try {
                ImageReader remove = this.sinks.remove(streamId);
                if (remove != null) {
                    closeReader(remove);
                }
                stopThreadIfIdle();
                Unit unit = Unit.a;
            } catch (Throwable th2) {
                throw th2;
            }
        }
    }

    public final void releaseWhere(@NotNull Function1<? super String, Boolean> predicate) {
        Intrinsics.checkNotNullParameter(predicate, "predicate");
        synchronized (this.lock) {
            try {
                Iterator<Map.Entry<String, ImageReader>> it = this.sinks.entrySet().iterator();
                while (it.hasNext()) {
                    Map.Entry<String, ImageReader> next = it.next();
                    if (((Boolean) predicate.invoke(next.getKey())).booleanValue()) {
                        closeReader(next.getValue());
                        it.remove();
                    }
                }
                stopThreadIfIdle();
                Unit unit = Unit.a;
            } catch (Throwable th2) {
                throw th2;
            }
        }
    }

    @NotNull
    public final Surface surfaceFor(@NotNull String streamId) {
        Surface surface;
        Intrinsics.checkNotNullParameter(streamId, "streamId");
        synchronized (this.lock) {
            try {
                Map<String, ImageReader> map = this.sinks;
                ImageReader imageReader = map.get(streamId);
                if (imageReader == null) {
                    imageReader = createReader();
                    map.put(streamId, imageReader);
                }
                surface = imageReader.getSurface();
            } catch (Throwable th2) {
                throw th2;
            }
        }
        Intrinsics.checkNotNullExpressionValue(surface, "synchronized(...)");
        return surface;
    }

    public final Surface surfaceIfPresent(@NotNull String streamId) {
        Surface surface;
        Intrinsics.checkNotNullParameter(streamId, "streamId");
        synchronized (this.lock) {
            ImageReader imageReader = this.sinks.get(streamId);
            surface = imageReader != null ? imageReader.getSurface() : null;
        }
        return surface;
    }
}
