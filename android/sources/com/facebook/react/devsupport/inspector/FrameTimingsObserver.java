package com.facebook.react.devsupport.inspector;

import android.graphics.Bitmap;
import android.os.Build;
import android.os.Handler;
import android.os.Looper;
import android.os.Process;
import android.view.FrameMetrics;
import android.view.PixelCopy;
import android.view.View;
import android.view.Window;
import com.discord.jank_stats.JankRecordStore;
import com.facebook.react.devsupport.inspector.FrameTimingsObserver;
import com.facebook.react.uimanager.ViewProps;
import java.io.ByteArrayOutputStream;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.Executors;
import java.util.concurrent.atomic.AtomicBoolean;
import java.util.concurrent.atomic.AtomicReference;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;
import kotlinx.coroutines.CoroutineDispatcher;
import nr.g0;
import nr.q0;
import nr.x;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u0000v\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\u0010\u000b\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0010\u0002\n\u0002\b\u0003\n\u0002\u0010\t\n\u0002\b\u0004\n\u0002\u0010\b\n\u0002\b\u0002\n\u0002\u0010\u0012\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0006\n\u0002\u0018\u0002\n\u0002\b\u0006\n\u0002\u0018\u0002\n\u0002\b\u0006\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0018\u0002\n\u0002\b\u0005\b\u0001\u0018\u0000 ?2\u00020\u0001:\u0002@?B#\u0012\u0006\u0010\u0003\u001a\u00020\u0002\u0012\u0012\u0010\u0007\u001a\u000e\u0012\u0004\u0012\u00020\u0005\u0012\u0004\u0012\u00020\u00060\u0004¢\u0006\u0004\b\b\u0010\tJ\u001f\u0010\r\u001a\u00020\u00062\u0006\u0010\u000b\u001a\u00020\n2\u0006\u0010\f\u001a\u00020\nH\u0002¢\u0006\u0004\b\r\u0010\u000eJ9\u0010\u0014\u001a\u00020\u00062\u0006\u0010\u0010\u001a\u00020\u000f2\u0006\u0010\u0011\u001a\u00020\u000f2\u0006\u0010\u000b\u001a\u00020\n2\u0006\u0010\f\u001a\u00020\n2\b\u0010\u0013\u001a\u0004\u0018\u00010\u0012H\u0002¢\u0006\u0004\b\u0014\u0010\u0015J\u0017\u0010\u0018\u001a\u00020\u00062\u0006\u0010\u0017\u001a\u00020\u0016H\u0002¢\u0006\u0004\b\u0018\u0010\u0019JE\u0010\u001b\u001a\u00020\u00062\u0006\u0010\u0010\u001a\u00020\u000f2\u0006\u0010\u0011\u001a\u00020\u000f2\u0006\u0010\u000b\u001a\u00020\n2\u0006\u0010\f\u001a\u00020\n2\u0014\u0010\u001a\u001a\u0010\u0012\u0006\u0012\u0004\u0018\u00010\u0016\u0012\u0004\u0012\u00020\u00060\u0004H\u0002¢\u0006\u0004\b\u001b\u0010\u001cJ\u0019\u0010\u001f\u001a\u0004\u0018\u00010\u00122\u0006\u0010\u001e\u001a\u00020\u001dH\u0002¢\u0006\u0004\b\u001f\u0010 J\r\u0010!\u001a\u00020\u0006¢\u0006\u0004\b!\u0010\"J\r\u0010#\u001a\u00020\u0006¢\u0006\u0004\b#\u0010\"J\u0017\u0010&\u001a\u00020\u00062\b\u0010%\u001a\u0004\u0018\u00010$¢\u0006\u0004\b&\u0010'R\u0014\u0010\u0003\u001a\u00020\u00028\u0002X\u0082\u0004¢\u0006\u0006\n\u0004\b\u0003\u0010(R \u0010\u0007\u001a\u000e\u0012\u0004\u0012\u00020\u0005\u0012\u0004\u0012\u00020\u00060\u00048\u0002X\u0082\u0004¢\u0006\u0006\n\u0004\b\u0007\u0010)R\u0014\u0010*\u001a\u00020\u00028\u0002X\u0082\u0004¢\u0006\u0006\n\u0004\b*\u0010(R\u0014\u0010,\u001a\u00020+8\u0002X\u0082\u0004¢\u0006\u0006\n\u0004\b,\u0010-R\u0014\u0010/\u001a\u00020.8\u0002X\u0082\u0004¢\u0006\u0006\n\u0004\b/\u00100R\u001c\u00102\u001a\n\u0012\u0006\u0012\u0004\u0018\u00010\u0016018\u0002X\u0082\u0004¢\u0006\u0006\n\u0004\b2\u00103R\u0016\u00104\u001a\u00020\u000f8\u0002@\u0002X\u0082\u000e¢\u0006\u0006\n\u0004\b4\u00105R\u0014\u00107\u001a\u0002068\u0002X\u0082\u0004¢\u0006\u0006\n\u0004\b7\u00108R\u0016\u00109\u001a\u00020\u00028\u0002@\u0002X\u0082\u000e¢\u0006\u0006\n\u0004\b9\u0010(R\u0018\u0010:\u001a\u0004\u0018\u00010$8\u0002@\u0002X\u0082\u000e¢\u0006\u0006\n\u0004\b:\u0010;R\u0014\u0010=\u001a\u00020<8\u0002X\u0082\u0004¢\u0006\u0006\n\u0004\b=\u0010>¨\u0006A"}, d2 = {"Lcom/facebook/react/devsupport/inspector/FrameTimingsObserver;", "", "", "screenshotsEnabled", "Lkotlin/Function1;", "Lcom/facebook/react/devsupport/inspector/FrameTimingSequence;", "", "onFrameTimingSequence", "<init>", "(ZLkotlin/jvm/functions/Function1;)V", "", "beginTimestamp", "endTimestamp", "emitFrameTiming", "(JJ)V", "", "frameId", "threadId", "", "screenshot", "emitFrameEvent", "(IIJJ[B)V", "Lcom/facebook/react/devsupport/inspector/FrameTimingsObserver$FrameData;", "frameData", "encodeFrame", "(Lcom/facebook/react/devsupport/inspector/FrameTimingsObserver$FrameData;)V", "callback", "captureScreenshot", "(IIJJLkotlin/jvm/functions/Function1;)V", "Landroid/graphics/Bitmap;", "bitmap", "encodeScreenshot", "(Landroid/graphics/Bitmap;)[B", ViewProps.START, "()V", "stop", "Landroid/view/Window;", "window", "setCurrentWindow", "(Landroid/view/Window;)V", "Z", "Lkotlin/jvm/functions/Function1;", "isSupported", "Landroid/os/Handler;", "mainHandler", "Landroid/os/Handler;", "Lkotlinx/coroutines/CoroutineDispatcher;", "encodingDispatcher", "Lkotlinx/coroutines/CoroutineDispatcher;", "Ljava/util/concurrent/atomic/AtomicReference;", "lastFrameBuffer", "Ljava/util/concurrent/atomic/AtomicReference;", "frameCounter", "I", "Ljava/util/concurrent/atomic/AtomicBoolean;", "encodingInProgress", "Ljava/util/concurrent/atomic/AtomicBoolean;", "isTracing", "currentWindow", "Landroid/view/Window;", "Landroid/view/Window$OnFrameMetricsAvailableListener;", "frameMetricsListener", "Landroid/view/Window$OnFrameMetricsAvailableListener;", "Companion", "FrameData", "ReactAndroid_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes3.dex */
public final class FrameTimingsObserver {
    private static final int SCREENSHOT_OUTPUT_SIZE_HINT = 65536;
    private static final int SCREENSHOT_QUALITY = 80;
    private static final float SCREENSHOT_SCALE_FACTOR = 1.0f;
    private volatile Window currentWindow;

    @NotNull
    private final CoroutineDispatcher encodingDispatcher;

    @NotNull
    private final AtomicBoolean encodingInProgress;
    private int frameCounter;

    @NotNull
    private final Window.OnFrameMetricsAvailableListener frameMetricsListener;
    private final boolean isSupported;
    private volatile boolean isTracing;

    @NotNull
    private final AtomicReference<FrameData> lastFrameBuffer;

    @NotNull
    private final Handler mainHandler;

    @NotNull
    private final Function1<FrameTimingSequence, Unit> onFrameTimingSequence;
    private final boolean screenshotsEnabled;

    @Metadata(d1 = {"\u0000.\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\b\n\u0002\b\u0002\n\u0002\u0010\t\n\u0002\b\u0012\n\u0002\u0010\u000b\n\u0002\b\u0003\n\u0002\u0010\u000e\n\u0000\b\u0082\b\u0018\u00002\u00020\u0001B/\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005\u0012\u0006\u0010\u0006\u001a\u00020\u0005\u0012\u0006\u0010\u0007\u001a\u00020\b\u0012\u0006\u0010\t\u001a\u00020\b¢\u0006\u0004\b\n\u0010\u000bJ\t\u0010\u0014\u001a\u00020\u0003HÆ\u0003J\t\u0010\u0015\u001a\u00020\u0005HÆ\u0003J\t\u0010\u0016\u001a\u00020\u0005HÆ\u0003J\t\u0010\u0017\u001a\u00020\bHÆ\u0003J\t\u0010\u0018\u001a\u00020\bHÆ\u0003J;\u0010\u0019\u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u00032\b\b\u0002\u0010\u0004\u001a\u00020\u00052\b\b\u0002\u0010\u0006\u001a\u00020\u00052\b\b\u0002\u0010\u0007\u001a\u00020\b2\b\b\u0002\u0010\t\u001a\u00020\bHÆ\u0001J\u0013\u0010\u001a\u001a\u00020\u001b2\b\u0010\u001c\u001a\u0004\u0018\u00010\u0001HÖ\u0003J\t\u0010\u001d\u001a\u00020\u0005HÖ\u0001J\t\u0010\u001e\u001a\u00020\u001fHÖ\u0001R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\f\u0010\rR\u0011\u0010\u0004\u001a\u00020\u0005¢\u0006\b\n\u0000\u001a\u0004\b\u000e\u0010\u000fR\u0011\u0010\u0006\u001a\u00020\u0005¢\u0006\b\n\u0000\u001a\u0004\b\u0010\u0010\u000fR\u0011\u0010\u0007\u001a\u00020\b¢\u0006\b\n\u0000\u001a\u0004\b\u0011\u0010\u0012R\u0011\u0010\t\u001a\u00020\b¢\u0006\b\n\u0000\u001a\u0004\b\u0013\u0010\u0012¨\u0006 "}, d2 = {"Lcom/facebook/react/devsupport/inspector/FrameTimingsObserver$FrameData;", "", "bitmap", "Landroid/graphics/Bitmap;", "frameId", "", "threadId", "beginTimestamp", "", "endTimestamp", "<init>", "(Landroid/graphics/Bitmap;IIJJ)V", "getBitmap", "()Landroid/graphics/Bitmap;", "getFrameId", "()I", "getThreadId", "getBeginTimestamp", "()J", "getEndTimestamp", "component1", "component2", "component3", "component4", "component5", "copy", "equals", "", JankRecordStore.SCREEN_OTHER, "hashCode", "toString", "", "ReactAndroid_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final /* data */ class FrameData {
        private final long beginTimestamp;

        @NotNull
        private final Bitmap bitmap;
        private final long endTimestamp;
        private final int frameId;
        private final int threadId;

        public FrameData(@NotNull Bitmap bitmap, int i5, int i6, long j, long j5) {
            Intrinsics.checkNotNullParameter(bitmap, "bitmap");
            this.bitmap = bitmap;
            this.frameId = i5;
            this.threadId = i6;
            this.beginTimestamp = j;
            this.endTimestamp = j5;
        }

        public static /* synthetic */ FrameData copy$default(FrameData frameData, Bitmap bitmap, int i5, int i6, long j, long j5, int i10, Object obj) {
            if ((i10 & 1) != 0) {
                bitmap = frameData.bitmap;
            }
            if ((i10 & 2) != 0) {
                i5 = frameData.frameId;
            }
            if ((i10 & 4) != 0) {
                i6 = frameData.threadId;
            }
            if ((i10 & 8) != 0) {
                j = frameData.beginTimestamp;
            }
            if ((i10 & 16) != 0) {
                j5 = frameData.endTimestamp;
            }
            long j7 = j5;
            int i11 = i6;
            return frameData.copy(bitmap, i5, i11, j, j7);
        }

        @NotNull
        /* renamed from: component1, reason: from getter */
        public final Bitmap getBitmap() {
            return this.bitmap;
        }

        /* renamed from: component2, reason: from getter */
        public final int getFrameId() {
            return this.frameId;
        }

        /* renamed from: component3, reason: from getter */
        public final int getThreadId() {
            return this.threadId;
        }

        /* renamed from: component4, reason: from getter */
        public final long getBeginTimestamp() {
            return this.beginTimestamp;
        }

        /* renamed from: component5, reason: from getter */
        public final long getEndTimestamp() {
            return this.endTimestamp;
        }

        @NotNull
        public final FrameData copy(@NotNull Bitmap bitmap, int frameId, int threadId, long beginTimestamp, long endTimestamp) {
            Intrinsics.checkNotNullParameter(bitmap, "bitmap");
            return new FrameData(bitmap, frameId, threadId, beginTimestamp, endTimestamp);
        }

        public boolean equals(Object other) {
            if (this == other) {
                return true;
            }
            if (!(other instanceof FrameData)) {
                return false;
            }
            FrameData frameData = (FrameData) other;
            return Intrinsics.areEqual(this.bitmap, frameData.bitmap) && this.frameId == frameData.frameId && this.threadId == frameData.threadId && this.beginTimestamp == frameData.beginTimestamp && this.endTimestamp == frameData.endTimestamp;
        }

        public final long getBeginTimestamp() {
            return this.beginTimestamp;
        }

        @NotNull
        public final Bitmap getBitmap() {
            return this.bitmap;
        }

        public final long getEndTimestamp() {
            return this.endTimestamp;
        }

        public final int getFrameId() {
            return this.frameId;
        }

        public final int getThreadId() {
            return this.threadId;
        }

        public int hashCode() {
            return Long.hashCode(this.endTimestamp) + com.discord.chat.bridge.botuikit.a.g(this.beginTimestamp, com.discord.chat.bridge.botuikit.a.u(this.threadId, com.discord.chat.bridge.botuikit.a.u(this.frameId, this.bitmap.hashCode() * 31, 31), 31), 31);
        }

        @NotNull
        public String toString() {
            return "FrameData(bitmap=" + this.bitmap + ", frameId=" + this.frameId + ", threadId=" + this.threadId + ", beginTimestamp=" + this.beginTimestamp + ", endTimestamp=" + this.endTimestamp + ")";
        }
    }

    /* JADX WARN: Multi-variable type inference failed */
    public FrameTimingsObserver(boolean z5, @NotNull Function1<? super FrameTimingSequence, Unit> onFrameTimingSequence) {
        Intrinsics.checkNotNullParameter(onFrameTimingSequence, "onFrameTimingSequence");
        this.screenshotsEnabled = z5;
        this.onFrameTimingSequence = onFrameTimingSequence;
        this.isSupported = true;
        this.mainHandler = new Handler(Looper.getMainLooper());
        ExecutorService newSingleThreadExecutor = Executors.newSingleThreadExecutor();
        Intrinsics.checkNotNullExpressionValue(newSingleThreadExecutor, "newSingleThreadExecutor(...)");
        this.encodingDispatcher = new q0(newSingleThreadExecutor);
        this.lastFrameBuffer = new AtomicReference<>(null);
        this.encodingInProgress = new AtomicBoolean(false);
        this.frameMetricsListener = new com.discord.jank_stats.a(1, this);
    }

    private final void captureScreenshot(final int frameId, final int threadId, final long beginTimestamp, final long endTimestamp, final Function1<? super FrameData, Unit> callback) {
        if (Build.VERSION.SDK_INT < 26) {
            callback.invoke(null);
            return;
        }
        Window window = this.currentWindow;
        if (window == null) {
            callback.invoke(null);
            return;
        }
        View decorView = window.getDecorView();
        Intrinsics.checkNotNullExpressionValue(decorView, "getDecorView(...)");
        final Bitmap createBitmap = Bitmap.createBitmap(decorView.getWidth(), decorView.getHeight(), Bitmap.Config.ARGB_8888);
        Intrinsics.checkNotNullExpressionValue(createBitmap, "createBitmap(...)");
        PixelCopy.request(window, createBitmap, new PixelCopy.OnPixelCopyFinishedListener() { // from class: com.facebook.react.devsupport.inspector.b
            @Override // android.view.PixelCopy.OnPixelCopyFinishedListener
            public final void onPixelCopyFinished(int i5) {
                FrameTimingsObserver.captureScreenshot$lambda$2(Function1.this, createBitmap, frameId, threadId, beginTimestamp, endTimestamp, i5);
            }
        }, this.mainHandler);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void captureScreenshot$lambda$2(Function1 function1, Bitmap bitmap, int i5, int i6, long j, long j5, int i10) {
        if (i10 == 0) {
            function1.invoke(new FrameData(bitmap, i5, i6, j, j5));
        } else {
            bitmap.recycle();
            function1.invoke(null);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final void emitFrameEvent(int frameId, int threadId, long beginTimestamp, long endTimestamp, byte[] screenshot) {
        x.t(x.b(g0.a), null, new FrameTimingsObserver$emitFrameEvent$1(this, frameId, threadId, beginTimestamp, endTimestamp, screenshot, null), 3);
    }

    private final void emitFrameTiming(final long beginTimestamp, final long endTimestamp) {
        final int i5 = this.frameCounter;
        this.frameCounter = i5 + 1;
        final int myTid = Process.myTid();
        if (this.screenshotsEnabled) {
            captureScreenshot(i5, myTid, beginTimestamp, endTimestamp, new Function1() { // from class: com.facebook.react.devsupport.inspector.a
                @Override // kotlin.jvm.functions.Function1
                public final Object invoke(Object obj) {
                    Unit emitFrameTiming$lambda$1;
                    emitFrameTiming$lambda$1 = FrameTimingsObserver.emitFrameTiming$lambda$1(FrameTimingsObserver.this, i5, myTid, beginTimestamp, endTimestamp, (FrameTimingsObserver.FrameData) obj);
                    return emitFrameTiming$lambda$1;
                }
            });
        } else {
            emitFrameEvent(i5, myTid, beginTimestamp, endTimestamp, null);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit emitFrameTiming$lambda$1(FrameTimingsObserver frameTimingsObserver, int i5, int i6, long j, long j5, FrameData frameData) {
        if (frameData == null) {
            frameTimingsObserver.emitFrameEvent(i5, i6, j, j5, null);
        } else if (frameTimingsObserver.encodingInProgress.compareAndSet(false, true)) {
            frameTimingsObserver.encodeFrame(frameData);
        } else {
            FrameData andSet = frameTimingsObserver.lastFrameBuffer.getAndSet(frameData);
            if (andSet != null) {
                frameTimingsObserver.emitFrameEvent(andSet.getFrameId(), andSet.getThreadId(), andSet.getBeginTimestamp(), andSet.getEndTimestamp(), null);
                andSet.getBitmap().recycle();
            }
        }
        return Unit.a;
    }

    private final void encodeFrame(FrameData frameData) {
        x.t(x.b(this.encodingDispatcher), null, new FrameTimingsObserver$encodeFrame$1(this, frameData, null), 3);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final byte[] encodeScreenshot(Bitmap bitmap) {
        Throwable th2;
        Bitmap bitmap2;
        try {
            Window window = this.currentWindow;
            if (window == null) {
                return null;
            }
            int width = bitmap.getWidth();
            int height = bitmap.getHeight();
            float f2 = window.getContext().getResources().getDisplayMetrics().density;
            bitmap2 = Bitmap.createScaledBitmap(bitmap, (int) ((width / f2) * 1.0f), (int) ((height / f2) * 1.0f), true);
            try {
                Bitmap.CompressFormat compressFormat = Build.VERSION.SDK_INT >= 30 ? Bitmap.CompressFormat.WEBP_LOSSY : Bitmap.CompressFormat.JPEG;
                ByteArrayOutputStream byteArrayOutputStream = new ByteArrayOutputStream(65536);
                try {
                    bitmap2.compress(compressFormat, SCREENSHOT_QUALITY, byteArrayOutputStream);
                    byte[] byteArray = byteArrayOutputStream.toByteArray();
                    byteArrayOutputStream.close();
                    bitmap2.recycle();
                    return byteArray;
                } finally {
                }
            } catch (Exception unused) {
                if (bitmap2 != null) {
                    bitmap2.recycle();
                }
                return null;
            } catch (Throwable th3) {
                th2 = th3;
                if (bitmap2 != null) {
                    bitmap2.recycle();
                }
                throw th2;
            }
        } catch (Exception unused2) {
            bitmap2 = null;
        } catch (Throwable th4) {
            th2 = th4;
            bitmap2 = null;
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void frameMetricsListener$lambda$0(FrameTimingsObserver frameTimingsObserver, Window window, FrameMetrics frameMetrics, int i5) {
        if (frameTimingsObserver.isTracing) {
            long metric = frameMetrics.getMetric(11);
            frameTimingsObserver.emitFrameTiming(metric, frameMetrics.getMetric(8) + metric);
        }
    }

    public final void setCurrentWindow(Window window) {
        Window window2;
        if (!this.isSupported || this.currentWindow == window) {
            return;
        }
        Window window3 = this.currentWindow;
        if (window3 != null) {
            window3.removeOnFrameMetricsAvailableListener(this.frameMetricsListener);
        }
        this.currentWindow = window;
        if (!this.isTracing || (window2 = this.currentWindow) == null) {
            return;
        }
        window2.addOnFrameMetricsAvailableListener(this.frameMetricsListener, this.mainHandler);
    }

    public final void start() {
        if (this.isSupported) {
            this.frameCounter = 0;
            this.encodingInProgress.set(false);
            this.lastFrameBuffer.set(null);
            this.isTracing = true;
            long nanoTime = System.nanoTime();
            emitFrameTiming(nanoTime, nanoTime);
            Window window = this.currentWindow;
            if (window != null) {
                window.addOnFrameMetricsAvailableListener(this.frameMetricsListener, this.mainHandler);
            }
        }
    }

    public final void stop() {
        Bitmap bitmap;
        if (this.isSupported) {
            this.isTracing = false;
            Window window = this.currentWindow;
            if (window != null) {
                window.removeOnFrameMetricsAvailableListener(this.frameMetricsListener);
            }
            this.mainHandler.removeCallbacksAndMessages(null);
            FrameData andSet = this.lastFrameBuffer.getAndSet(null);
            if (andSet == null || (bitmap = andSet.getBitmap()) == null) {
                return;
            }
            bitmap.recycle();
        }
    }
}
