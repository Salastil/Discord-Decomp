package com.discord.media.engine.video.texture_view;

import android.view.Surface;
import com.discord.DiscordDecoderStreamManager;
import com.discord.DiscordDecoderStreamManagerDelegate;
import com.discord.jank_stats.JankRecordStore;
import com.facebook.react.devsupport.StackTraceHelper;
import fo.l;
import fo.m;
import java.lang.ref.WeakReference;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.LinkedHashMap;
import java.util.LinkedList;
import java.util.List;
import java.util.Map;
import java.util.function.Consumer;
import kotlin.Lazy;
import kotlin.Metadata;
import kotlin.Pair;
import kotlin.Unit;
import kotlin.collections.CollectionsKt;
import kotlin.collections.h0;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.SourceDebugExtension;
import org.jetbrains.annotations.NotNull;
import org.webrtc.AndroidVideoDecoder;

@Metadata(d1 = {"\u0000d\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010%\n\u0002\u0010\u000e\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010!\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0000\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0002\n\u0002\b\u000b\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u000b\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\u0010 \n\u0002\b\b\u0018\u0000 .2\u00020\u0001:\u0002./B\u0007¢\u0006\u0004\b\u0002\u0010\u0003J\u0018\u0010\u0014\u001a\u00020\u00152\u0006\u0010\u0016\u001a\u00020\u00062\u0006\u0010\u0017\u001a\u00020\rH\u0016J\u0012\u0010\u0018\u001a\u0004\u0018\u00010\b2\u0006\u0010\u0016\u001a\u00020\u0006H\u0016J\u001e\u0010\u0019\u001a\u00020\u00152\u0006\u0010\u0016\u001a\u00020\u00062\f\u0010\u001a\u001a\b\u0012\u0004\u0012\u00020\b0\u000bH\u0016J\u001e\u0010\u001b\u001a\u00020\u00152\u0006\u0010\u0016\u001a\u00020\u00062\f\u0010\u001a\u001a\b\u0012\u0004\u0012\u00020\b0\u000bH\u0016J\u0016\u0010\u001c\u001a\u00020\u00152\u0006\u0010\u0016\u001a\u00020\u00062\u0006\u0010\u001d\u001a\u00020\bJ\u001e\u0010\u001e\u001a\u00020\u00152\u0006\u0010\u001f\u001a\u00020\u00062\u0006\u0010\u0016\u001a\u00020\u00062\u0006\u0010 \u001a\u00020!J\u0016\u0010\"\u001a\u00020\u00152\u0006\u0010\u001f\u001a\u00020\u00062\u0006\u0010\u0016\u001a\u00020\u0006J\u001e\u0010#\u001a\u00020$2\f\u0010%\u001a\b\u0012\u0004\u0012\u00020\u000f0\n2\u0006\u0010\u0016\u001a\u00020\u0006H\u0002J$\u0010&\u001a\u0010\u0012\u0004\u0012\u00020\u000f\u0012\u0004\u0012\u00020\b\u0018\u00010'2\f\u0010%\u001a\b\u0012\u0004\u0012\u00020\u000f0(H\u0002J\u0010\u0010)\u001a\u00020\u00152\u0006\u0010\u0016\u001a\u00020\u0006H\u0002J\b\u0010*\u001a\u00020\u0015H\u0002J\u0016\u0010+\u001a\u00020$2\u0006\u0010\u001f\u001a\u00020\u00062\u0006\u0010\u0016\u001a\u00020\u0006J\u0018\u0010,\u001a\u00020\u00152\u0006\u0010\u0016\u001a\u00020\u00062\u0006\u0010\u001d\u001a\u00020\bH\u0002J\b\u0010-\u001a\u00020\u0015H\u0002R \u0010\u0004\u001a\u0014\u0012\u0004\u0012\u00020\u0006\u0012\n\u0012\b\u0012\u0004\u0012\u00020\b0\u00070\u0005X\u0082\u0004¢\u0006\u0002\n\u0000R&\u0010\t\u001a\u001a\u0012\u0004\u0012\u00020\u0006\u0012\u0010\u0012\u000e\u0012\n\u0012\b\u0012\u0004\u0012\u00020\b0\u000b0\n0\u0005X\u0082\u0004¢\u0006\u0002\n\u0000R&\u0010\f\u001a\u001a\u0012\u0004\u0012\u00020\u0006\u0012\u0010\u0012\u000e\u0012\n\u0012\b\u0012\u0004\u0012\u00020\r0\u00070\n0\u0005X\u0082\u0004¢\u0006\u0002\n\u0000R \u0010\u000e\u001a\u0014\u0012\u0004\u0012\u00020\u0006\u0012\n\u0012\b\u0012\u0004\u0012\u00020\u000f0\n0\u0005X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0010\u001a\u00020\u0011X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0012\u001a\u00020\u0013X\u0082\u0004¢\u0006\u0002\n\u0000¨\u00060"}, d2 = {"Lcom/discord/media/engine/video/texture_view/StreamManager;", "Lcom/discord/DiscordDecoderStreamManagerDelegate;", "<init>", "()V", "streamConsumersRegistry", "", "", "Ljava/lang/ref/WeakReference;", "Landroid/view/Surface;", "onConsumerReadyListeners", "", "Ljava/util/function/Consumer;", "streamProducersRegistry", "Lorg/webrtc/AndroidVideoDecoder;", "streamConsumerStacks", "Lcom/discord/media/engine/video/texture_view/StreamManager$StreamConsumerData;", "lock", "", "placeholderSinks", "Lcom/discord/media/engine/video/texture_view/PlaceholderSinkPool;", "registerStreamProducer", "", "streamId", "decoder", "getStreamConsumer", "addOnConsumerReadyListener", "listener", "removeOnConsumerReadyListener", "setActiveStreamConsumer", "surface", "tryRegisterStreamConsumer", "consumerId", "consumer", "Lcom/discord/media/engine/video/texture_view/VideoStreamTextureView;", "releaseIfActiveStreamConsumer", "tryPromoteNextConsumer", "", StackTraceHelper.STACK_KEY, "topConsumerWithValidSurface", "Lkotlin/Pair;", "", "parkProducersOnPlaceholderSink", "pruneReleasedProducers", "isOnStreamConsumerStackTop", "onConsumerReady", "clearEmptyReferences", "Companion", "StreamConsumerData", "media_engine_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
@SourceDebugExtension({"SMAP\nStreamManager.kt\nKotlin\n*S Kotlin\n*F\n+ 1 StreamManager.kt\ncom/discord/media/engine/video/texture_view/StreamManager\n+ 2 Maps.kt\nkotlin/collections/MapsKt__MapsKt\n+ 3 fake.kt\nkotlin/jvm/internal/FakeKt\n+ 4 _Collections.kt\nkotlin/collections/CollectionsKt___CollectionsKt\n*L\n1#1,189:1\n384#2,7:190\n384#2,7:198\n384#2,7:207\n1#3:197\n1869#4,2:205\n1869#4,2:214\n1869#4,2:216\n1869#4,2:218\n1869#4,2:220\n*S KotlinDebug\n*F\n+ 1 StreamManager.kt\ncom/discord/media/engine/video/texture_view/StreamManager\n*L\n39#1:190,7\n67#1:198,7\n100#1:207,7\n89#1:205,2\n155#1:214,2\n159#1:216,2\n174#1:218,2\n181#1:220,2\n*E\n"})
/* loaded from: classes.dex */
public final class StreamManager implements DiscordDecoderStreamManagerDelegate {

    /* renamed from: Companion, reason: from kotlin metadata */
    @NotNull
    public static final Companion INSTANCE = new Companion(null);

    @NotNull
    private static final Lazy instance$delegate = l.b(m.f8826d, new c());

    @NotNull
    private final Map<String, WeakReference<Surface>> streamConsumersRegistry = new LinkedHashMap();

    @NotNull
    private final Map<String, List<Consumer<Surface>>> onConsumerReadyListeners = new LinkedHashMap();

    @NotNull
    private final Map<String, List<WeakReference<AndroidVideoDecoder>>> streamProducersRegistry = new LinkedHashMap();

    @NotNull
    private final Map<String, List<StreamConsumerData>> streamConsumerStacks = new LinkedHashMap();

    @NotNull
    private final Object lock = new Object();

    @NotNull
    private final PlaceholderSinkPool placeholderSinks = new PlaceholderSinkPool();

    @Metadata(d1 = {"\u0000\u001a\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0010\u0002\n\u0000\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\u0006\u0010\n\u001a\u00020\u000bR\u001b\u0010\u0004\u001a\u00020\u00058FX\u0086\u0084\u0002¢\u0006\f\n\u0004\b\b\u0010\t\u001a\u0004\b\u0006\u0010\u0007¨\u0006\f"}, d2 = {"Lcom/discord/media/engine/video/texture_view/StreamManager$Companion;", "", "<init>", "()V", "instance", "Lcom/discord/media/engine/video/texture_view/StreamManager;", "getInstance", "()Lcom/discord/media/engine/video/texture_view/StreamManager;", "instance$delegate", "Lkotlin/Lazy;", "ensureInstalled", "", "media_engine_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final class Companion {
        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }

        public final void ensureInstalled() {
            getInstance();
        }

        @NotNull
        public final StreamManager getInstance() {
            return (StreamManager) StreamManager.instance$delegate.getValue();
        }

        private Companion() {
        }
    }

    @Metadata(d1 = {"\u0000,\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\u000e\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\n\n\u0002\u0010\u000b\n\u0002\b\u0002\n\u0002\u0010\b\n\u0002\b\u0002\b\u0082\b\u0018\u00002\u00020\u0001B\u001d\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\f\u0010\u0004\u001a\b\u0012\u0004\u0012\u00020\u00060\u0005¢\u0006\u0004\b\u0007\u0010\bJ\t\u0010\r\u001a\u00020\u0003HÆ\u0003J\u000f\u0010\u000e\u001a\b\u0012\u0004\u0012\u00020\u00060\u0005HÆ\u0003J#\u0010\u000f\u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u00032\u000e\b\u0002\u0010\u0004\u001a\b\u0012\u0004\u0012\u00020\u00060\u0005HÆ\u0001J\u0013\u0010\u0010\u001a\u00020\u00112\b\u0010\u0012\u001a\u0004\u0018\u00010\u0001HÖ\u0003J\t\u0010\u0013\u001a\u00020\u0014HÖ\u0001J\t\u0010\u0015\u001a\u00020\u0003HÖ\u0001R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\t\u0010\nR\u0017\u0010\u0004\u001a\b\u0012\u0004\u0012\u00020\u00060\u0005¢\u0006\b\n\u0000\u001a\u0004\b\u000b\u0010\f¨\u0006\u0016"}, d2 = {"Lcom/discord/media/engine/video/texture_view/StreamManager$StreamConsumerData;", "", "consumerId", "", "consumer", "Ljava/lang/ref/WeakReference;", "Lcom/discord/media/engine/video/texture_view/VideoStreamTextureView;", "<init>", "(Ljava/lang/String;Ljava/lang/ref/WeakReference;)V", "getConsumerId", "()Ljava/lang/String;", "getConsumer", "()Ljava/lang/ref/WeakReference;", "component1", "component2", "copy", "equals", "", JankRecordStore.SCREEN_OTHER, "hashCode", "", "toString", "media_engine_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final /* data */ class StreamConsumerData {

        @NotNull
        private final WeakReference<VideoStreamTextureView> consumer;

        @NotNull
        private final String consumerId;

        public StreamConsumerData(@NotNull String consumerId, @NotNull WeakReference<VideoStreamTextureView> consumer) {
            Intrinsics.checkNotNullParameter(consumerId, "consumerId");
            Intrinsics.checkNotNullParameter(consumer, "consumer");
            this.consumerId = consumerId;
            this.consumer = consumer;
        }

        /* JADX WARN: Multi-variable type inference failed */
        public static /* synthetic */ StreamConsumerData copy$default(StreamConsumerData streamConsumerData, String str, WeakReference weakReference, int i5, Object obj) {
            if ((i5 & 1) != 0) {
                str = streamConsumerData.consumerId;
            }
            if ((i5 & 2) != 0) {
                weakReference = streamConsumerData.consumer;
            }
            return streamConsumerData.copy(str, weakReference);
        }

        @NotNull
        /* renamed from: component1, reason: from getter */
        public final String getConsumerId() {
            return this.consumerId;
        }

        @NotNull
        public final WeakReference<VideoStreamTextureView> component2() {
            return this.consumer;
        }

        @NotNull
        public final StreamConsumerData copy(@NotNull String consumerId, @NotNull WeakReference<VideoStreamTextureView> consumer) {
            Intrinsics.checkNotNullParameter(consumerId, "consumerId");
            Intrinsics.checkNotNullParameter(consumer, "consumer");
            return new StreamConsumerData(consumerId, consumer);
        }

        public boolean equals(Object other) {
            if (this == other) {
                return true;
            }
            if (!(other instanceof StreamConsumerData)) {
                return false;
            }
            StreamConsumerData streamConsumerData = (StreamConsumerData) other;
            return Intrinsics.areEqual(this.consumerId, streamConsumerData.consumerId) && Intrinsics.areEqual(this.consumer, streamConsumerData.consumer);
        }

        @NotNull
        public final WeakReference<VideoStreamTextureView> getConsumer() {
            return this.consumer;
        }

        @NotNull
        public final String getConsumerId() {
            return this.consumerId;
        }

        public int hashCode() {
            return this.consumer.hashCode() + (this.consumerId.hashCode() * 31);
        }

        @NotNull
        public String toString() {
            return "StreamConsumerData(consumerId=" + this.consumerId + ", consumer=" + this.consumer + ")";
        }
    }

    private final void clearEmptyReferences() {
        synchronized (this.lock) {
            try {
                int i5 = 1;
                int i6 = 0;
                this.streamConsumersRegistry.entrySet().removeIf(new d(new e(i5), i6));
                Iterator<T> it = this.streamConsumerStacks.entrySet().iterator();
                while (it.hasNext()) {
                    ((List) ((Map.Entry) it.next()).getValue()).removeIf(new d(new e(i6), i5));
                }
                int i10 = 2;
                this.streamConsumerStacks.entrySet().removeIf(new d(new e(i10), i10));
                pruneReleasedProducers();
                Unit unit = Unit.a;
            } catch (Throwable th2) {
                throw th2;
            }
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final boolean clearEmptyReferences$lambda$36$lambda$29(Map.Entry it) {
        Intrinsics.checkNotNullParameter(it, "it");
        return ((WeakReference) it.getValue()).get() == null;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final boolean clearEmptyReferences$lambda$36$lambda$30(Function1 function1, Object obj) {
        return ((Boolean) function1.invoke(obj)).booleanValue();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final boolean clearEmptyReferences$lambda$36$lambda$33$lambda$31(StreamConsumerData streamConsumerData) {
        Intrinsics.checkNotNullParameter(streamConsumerData, "<destruct>");
        return streamConsumerData.component2().get() == null;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final boolean clearEmptyReferences$lambda$36$lambda$33$lambda$32(Function1 function1, Object obj) {
        return ((Boolean) function1.invoke(obj)).booleanValue();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final boolean clearEmptyReferences$lambda$36$lambda$34(Map.Entry it) {
        Intrinsics.checkNotNullParameter(it, "it");
        return ((List) it.getValue()).isEmpty();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final boolean clearEmptyReferences$lambda$36$lambda$35(Function1 function1, Object obj) {
        return ((Boolean) function1.invoke(obj)).booleanValue();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final StreamManager instance_delegate$lambda$38() {
        StreamManager streamManager = new StreamManager();
        DiscordDecoderStreamManager.setDelegate(streamManager);
        return streamManager;
    }

    private final void onConsumerReady(String streamId, Surface surface) {
        synchronized (this.lock) {
            try {
                List<Consumer<Surface>> remove = this.onConsumerReadyListeners.remove(streamId);
                if (remove != null) {
                    Iterator<T> it = remove.iterator();
                    while (it.hasNext()) {
                        ((Consumer) it.next()).accept(surface);
                    }
                    Unit unit = Unit.a;
                }
            } catch (Throwable th2) {
                throw th2;
            }
        }
    }

    private final void parkProducersOnPlaceholderSink(String streamId) {
        List<WeakReference<AndroidVideoDecoder>> list = this.streamProducersRegistry.get(streamId);
        if (list == null) {
            return;
        }
        h0.s(list, new e(6));
        if (list.isEmpty()) {
            return;
        }
        Surface surfaceFor = this.placeholderSinks.surfaceFor(streamId);
        Iterator<T> it = list.iterator();
        while (it.hasNext()) {
            AndroidVideoDecoder androidVideoDecoder = (AndroidVideoDecoder) ((WeakReference) it.next()).get();
            if (androidVideoDecoder != null) {
                androidVideoDecoder.lambda$initDecode$0(surfaceFor);
            }
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final boolean parkProducersOnPlaceholderSink$lambda$18(WeakReference it) {
        Intrinsics.checkNotNullParameter(it, "it");
        return it.get() == null;
    }

    private final void pruneReleasedProducers() {
        Iterator<T> it = this.streamProducersRegistry.values().iterator();
        while (it.hasNext()) {
            ((List) it.next()).removeIf(new d(new e(3), 3));
        }
        this.streamProducersRegistry.entrySet().removeIf(new d(new e(4), 4));
        this.placeholderSinks.releaseWhere(new f(1, this));
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final boolean pruneReleasedProducers$lambda$22$lambda$20(WeakReference it) {
        Intrinsics.checkNotNullParameter(it, "it");
        return it.get() == null;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final boolean pruneReleasedProducers$lambda$22$lambda$21(Function1 function1, Object obj) {
        return ((Boolean) function1.invoke(obj)).booleanValue();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final boolean pruneReleasedProducers$lambda$23(Map.Entry it) {
        Intrinsics.checkNotNullParameter(it, "it");
        return ((List) it.getValue()).isEmpty();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final boolean pruneReleasedProducers$lambda$24(Function1 function1, Object obj) {
        return ((Boolean) function1.invoke(obj)).booleanValue();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final boolean pruneReleasedProducers$lambda$25(StreamManager streamManager, String streamId) {
        Intrinsics.checkNotNullParameter(streamId, "streamId");
        List<WeakReference<AndroidVideoDecoder>> list = streamManager.streamProducersRegistry.get(streamId);
        return list == null || list.isEmpty();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final boolean releaseIfActiveStreamConsumer$lambda$17$lambda$15(String str, StreamConsumerData it) {
        Intrinsics.checkNotNullParameter(it, "it");
        return Intrinsics.areEqual(it.getConsumerId(), str);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final boolean releaseIfActiveStreamConsumer$lambda$17$lambda$16(Function1 function1, Object obj) {
        return ((Boolean) function1.invoke(obj)).booleanValue();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final boolean setActiveStreamConsumer$lambda$11$lambda$10$lambda$8(WeakReference it) {
        Intrinsics.checkNotNullParameter(it, "it");
        return it.get() == null;
    }

    private final Pair<StreamConsumerData, Surface> topConsumerWithValidSurface(List<StreamConsumerData> stack) {
        int size = stack.size() - 1;
        if (size >= 0) {
            while (true) {
                int i5 = size - 1;
                VideoStreamTextureView videoStreamTextureView = stack.get(size).getConsumer().get();
                Surface validSurfaceOrNull$media_engine_release = videoStreamTextureView != null ? videoStreamTextureView.validSurfaceOrNull$media_engine_release() : null;
                if (validSurfaceOrNull$media_engine_release != null) {
                    return new Pair<>(stack.get(size), validSurfaceOrNull$media_engine_release);
                }
                if (i5 < 0) {
                    break;
                }
                size = i5;
            }
        }
        return null;
    }

    private final boolean tryPromoteNextConsumer(List<StreamConsumerData> stack, String streamId) {
        Pair<StreamConsumerData, Surface> pair = topConsumerWithValidSurface(stack);
        if (pair == null) {
            return false;
        }
        StreamConsumerData streamConsumerData = (StreamConsumerData) pair.f13474d;
        Surface surface = (Surface) pair.f13475e;
        stack.remove(streamConsumerData);
        stack.add(streamConsumerData);
        setActiveStreamConsumer(streamId, surface);
        return true;
    }

    @Override // com.discord.DiscordDecoderStreamManagerDelegate
    public void addOnConsumerReadyListener(@NotNull String streamId, @NotNull Consumer<Surface> listener) {
        Intrinsics.checkNotNullParameter(streamId, "streamId");
        Intrinsics.checkNotNullParameter(listener, "listener");
        synchronized (this.lock) {
            try {
                WeakReference<Surface> weakReference = this.streamConsumersRegistry.get(streamId);
                Surface surface = weakReference != null ? weakReference.get() : null;
                if (surface != null) {
                    listener.accept(surface);
                    Unit unit = Unit.a;
                } else {
                    Map<String, List<Consumer<Surface>>> map = this.onConsumerReadyListeners;
                    List<Consumer<Surface>> list = map.get(streamId);
                    if (list == null) {
                        list = new ArrayList<>();
                        map.put(streamId, list);
                    }
                    list.add(listener);
                }
            } catch (Throwable th2) {
                throw th2;
            }
        }
    }

    @Override // com.discord.DiscordDecoderStreamManagerDelegate
    public Surface getStreamConsumer(@NotNull String streamId) {
        Surface surface;
        Intrinsics.checkNotNullParameter(streamId, "streamId");
        synchronized (this.lock) {
            try {
                WeakReference<Surface> weakReference = this.streamConsumersRegistry.get(streamId);
                surface = weakReference != null ? weakReference.get() : null;
                if (surface == null && weakReference != null) {
                    this.streamConsumersRegistry.remove(streamId);
                }
            } catch (Throwable th2) {
                throw th2;
            }
        }
        return surface;
    }

    public final boolean isOnStreamConsumerStackTop(@NotNull String consumerId, @NotNull String streamId) {
        Intrinsics.checkNotNullParameter(consumerId, "consumerId");
        Intrinsics.checkNotNullParameter(streamId, "streamId");
        synchronized (this.lock) {
            List<StreamConsumerData> list = this.streamConsumerStacks.get(streamId);
            if (list != null && !list.isEmpty()) {
                return Intrinsics.areEqual(((StreamConsumerData) CollectionsKt.Q(list)).getConsumerId(), consumerId);
            }
            return true;
        }
    }

    @Override // com.discord.DiscordDecoderStreamManagerDelegate
    public void registerStreamProducer(@NotNull String streamId, @NotNull AndroidVideoDecoder decoder) {
        Surface surface;
        Intrinsics.checkNotNullParameter(streamId, "streamId");
        Intrinsics.checkNotNullParameter(decoder, "decoder");
        synchronized (this.lock) {
            try {
                Map<String, List<WeakReference<AndroidVideoDecoder>>> map = this.streamProducersRegistry;
                List<WeakReference<AndroidVideoDecoder>> list = map.get(streamId);
                if (list == null) {
                    list = new ArrayList<>();
                    map.put(streamId, list);
                }
                list.add(new WeakReference<>(decoder));
                pruneReleasedProducers();
                WeakReference<Surface> weakReference = this.streamConsumersRegistry.get(streamId);
                if (weakReference != null && (surface = weakReference.get()) != null) {
                    if (!surface.isValid()) {
                        surface = null;
                    }
                    if (surface != null) {
                        decoder.lambda$initDecode$0(surface);
                        Unit unit = Unit.a;
                    }
                }
            } catch (Throwable th2) {
                throw th2;
            }
        }
    }

    public final void releaseIfActiveStreamConsumer(@NotNull String consumerId, @NotNull String streamId) {
        Intrinsics.checkNotNullParameter(consumerId, "consumerId");
        Intrinsics.checkNotNullParameter(streamId, "streamId");
        synchronized (this.lock) {
            try {
                pruneReleasedProducers();
                List<StreamConsumerData> list = this.streamConsumerStacks.get(streamId);
                if (list == null) {
                    return;
                }
                boolean isOnStreamConsumerStackTop = isOnStreamConsumerStackTop(consumerId, streamId);
                list.removeIf(new d(new f(0, consumerId), 5));
                if (isOnStreamConsumerStackTop) {
                    this.streamConsumersRegistry.remove(streamId);
                    if (!tryPromoteNextConsumer(list, streamId)) {
                        parkProducersOnPlaceholderSink(streamId);
                    }
                }
                if (list.isEmpty()) {
                    this.onConsumerReadyListeners.remove(streamId);
                    this.streamConsumerStacks.remove(streamId);
                    this.streamConsumersRegistry.remove(streamId);
                    clearEmptyReferences();
                }
                Unit unit = Unit.a;
            } catch (Throwable th2) {
                throw th2;
            }
        }
    }

    @Override // com.discord.DiscordDecoderStreamManagerDelegate
    public void removeOnConsumerReadyListener(@NotNull String streamId, @NotNull Consumer<Surface> listener) {
        Intrinsics.checkNotNullParameter(streamId, "streamId");
        Intrinsics.checkNotNullParameter(listener, "listener");
        synchronized (this.lock) {
            try {
                List<Consumer<Surface>> list = this.onConsumerReadyListeners.get(streamId);
                if (list == null) {
                    return;
                }
                list.remove(listener);
                if (list.isEmpty()) {
                    this.onConsumerReadyListeners.remove(streamId);
                }
                Unit unit = Unit.a;
            } catch (Throwable th2) {
                throw th2;
            }
        }
    }

    public final void setActiveStreamConsumer(@NotNull String streamId, @NotNull Surface surface) {
        Intrinsics.checkNotNullParameter(streamId, "streamId");
        Intrinsics.checkNotNullParameter(surface, "surface");
        synchronized (this.lock) {
            try {
                this.streamConsumersRegistry.put(streamId, new WeakReference<>(surface));
                List<WeakReference<AndroidVideoDecoder>> list = this.streamProducersRegistry.get(streamId);
                if (list != null) {
                    h0.s(list, new e(5));
                    Iterator<T> it = list.iterator();
                    while (it.hasNext()) {
                        AndroidVideoDecoder androidVideoDecoder = (AndroidVideoDecoder) ((WeakReference) it.next()).get();
                        if (androidVideoDecoder != null) {
                            androidVideoDecoder.lambda$initDecode$0(surface);
                        }
                    }
                    Unit unit = Unit.a;
                }
            } catch (Throwable th2) {
                throw th2;
            }
        }
        onConsumerReady(streamId, surface);
    }

    public final void tryRegisterStreamConsumer(@NotNull String consumerId, @NotNull String streamId, @NotNull VideoStreamTextureView consumer) {
        Object obj;
        Intrinsics.checkNotNullParameter(consumerId, "consumerId");
        Intrinsics.checkNotNullParameter(streamId, "streamId");
        Intrinsics.checkNotNullParameter(consumer, "consumer");
        synchronized (this.lock) {
            try {
                Map<String, List<StreamConsumerData>> map = this.streamConsumerStacks;
                List<StreamConsumerData> list = map.get(streamId);
                if (list == null) {
                    list = new LinkedList<>();
                    map.put(streamId, list);
                }
                List<StreamConsumerData> list2 = list;
                Iterator<T> it = list2.iterator();
                while (true) {
                    if (!it.hasNext()) {
                        obj = null;
                        break;
                    } else {
                        obj = it.next();
                        if (Intrinsics.areEqual(((StreamConsumerData) obj).getConsumerId(), consumerId)) {
                            break;
                        }
                    }
                }
                if (obj == null) {
                    list2.add(new StreamConsumerData(consumerId, new WeakReference(consumer)));
                }
                Unit unit = Unit.a;
            } catch (Throwable th2) {
                throw th2;
            }
        }
    }
}
