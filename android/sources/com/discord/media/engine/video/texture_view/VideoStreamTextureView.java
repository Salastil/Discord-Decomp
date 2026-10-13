package com.discord.media.engine.video.texture_view;

import android.content.Context;
import android.graphics.Matrix;
import android.graphics.Point;
import android.graphics.SurfaceTexture;
import android.util.AttributeSet;
import android.view.Surface;
import android.view.TextureView;
import com.discord.logging.Log;
import com.discord.media.engine.MediaEngine;
import com.discord.media.engine.MediaEngineKt;
import com.discord.media.engine.types.Debug;
import com.discord.media.engine.types.VideoSink;
import com.discord.media.engine.video.AttachedVideoSinks;
import com.discord.misc.utilities.coroutines.AttachedViewCoroutineScope;
import com.discord.misc.utilities.coroutines.CoroutineViewUtilsKt;
import com.discord.misc.utilities.threading.ThreadUtilsKt;
import com.facebook.react.bridge.ReactContext;
import com.facebook.react.devsupport.StackTraceHelper;
import com.facebook.react.uimanager.ViewProps;
import java.util.concurrent.atomic.AtomicBoolean;
import java.util.concurrent.atomic.AtomicInteger;
import kotlin.Metadata;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.SourceDebugExtension;
import nr.g0;
import nr.x;
import org.jetbrains.annotations.NotNull;
import org.webrtc.MockBuffer;
import org.webrtc.RendererCommon;
import org.webrtc.VideoFrame;
import sr.q;

@Metadata(d1 = {"\u0000x\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u000e\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\b\n\u0002\b\u0004\n\u0002\u0010\t\n\u0000\n\u0002\u0010\u000b\n\u0002\b\u0005\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\b\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u0002\n\u0002\b\u0011\n\u0002\u0018\u0002\n\u0002\b\u0013\u0018\u0000 U2\u00020\u00012\u00020\u00022\u00020\u0003:\u0001UB\u001d\b\u0007\u0012\u0006\u0010\u0004\u001a\u00020\u0005\u0012\n\b\u0002\u0010\u0006\u001a\u0004\u0018\u00010\u0007¢\u0006\u0004\b\b\u0010\tJ\u0018\u00100\u001a\u0002012\u0006\u00102\u001a\u00020\u00162\u0006\u00103\u001a\u00020\u0016H\u0014J0\u00104\u001a\u0002012\u0006\u00105\u001a\u00020\u001d2\u0006\u00106\u001a\u00020\u00162\u0006\u00107\u001a\u00020\u00162\u0006\u00108\u001a\u00020\u00162\u0006\u00109\u001a\u00020\u0016H\u0014J\b\u0010:\u001a\u000201H\u0002J\b\u0010;\u001a\u000201H\u0016J \u0010<\u001a\u0002012\u0006\u0010=\u001a\u00020\u00162\u0006\u0010>\u001a\u00020\u00162\u0006\u0010?\u001a\u00020\u0016H\u0016J\b\u0010@\u001a\u000201H\u0016J\u0018\u0010A\u001a\u0002012\u0006\u0010B\u001a\u00020C2\u0006\u0010D\u001a\u00020\u001dH\u0016J\u0010\u0010E\u001a\u0002012\u0006\u0010B\u001a\u00020CH\u0002J\u0018\u0010F\u001a\u0002012\u0006\u0010G\u001a\u00020\u000b2\u0006\u0010H\u001a\u00020\u0003H\u0007J\b\u0010I\u001a\u000201H\u0007J\u001c\u0010J\u001a\u0002012\b\u0010G\u001a\u0004\u0018\u00010\u000b2\b\u0010H\u001a\u0004\u0018\u00010\u0003H\u0002J\u0010\u0010K\u001a\u0002012\u0006\u0010H\u001a\u00020\u0003H\u0002J\u0017\u0010L\u001a\u0002012\b\u0010G\u001a\u0004\u0018\u00010\u000bH\u0000¢\u0006\u0002\bMJ\b\u0010N\u001a\u000201H\u0002J\b\u0010O\u001a\u000201H\u0002J\u000f\u0010P\u001a\u0004\u0018\u00010%H\u0000¢\u0006\u0002\bQJ\b\u0010R\u001a\u00020\u000bH\u0016J\u0006\u0010S\u001a\u000201J\b\u0010T\u001a\u000201H\u0002R\u0011\u0010\n\u001a\u00020\u000b¢\u0006\b\n\u0000\u001a\u0004\b\f\u0010\rR\u000e\u0010\u000e\u001a\u00020\u000fX\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0010\u001a\u00020\u0011X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0012\u001a\u00020\u0013X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0014\u001a\u00020\u0003X\u0082.¢\u0006\u0002\n\u0000R\u000e\u0010\u0015\u001a\u00020\u0016X\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\u0017\u001a\u00020\u0016X\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\u0018\u001a\u00020\u0016X\u0082\u000e¢\u0006\u0002\n\u0000R\u0010\u0010\u0019\u001a\u0004\u0018\u00010\u000bX\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\u001a\u001a\u00020\u001bX\u0082\u000e¢\u0006\u0002\n\u0000R\u001a\u0010\u001c\u001a\u00020\u001dX\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\u001e\u0010\u001f\"\u0004\b \u0010!R\u000e\u0010\"\u001a\u00020#X\u0082\u0004¢\u0006\u0002\n\u0000R\u001c\u0010$\u001a\u0004\u0018\u00010%X\u0080\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b&\u0010'\"\u0004\b(\u0010)R\u000e\u0010*\u001a\u00020\u0016X\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010+\u001a\u00020\u0016X\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010,\u001a\u00020\u0016X\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010-\u001a\u00020.X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010/\u001a\u00020.X\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006V"}, d2 = {"Lcom/discord/media/engine/video/texture_view/VideoStreamTextureView;", "Landroid/view/TextureView;", "Lcom/discord/media/engine/types/VideoSink;", "Lorg/webrtc/RendererCommon$RendererEvents;", "context", "Landroid/content/Context;", "attrs", "Landroid/util/AttributeSet;", "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;)V", StackTraceHelper.NAME_KEY, "", "getName", "()Ljava/lang/String;", "videoLayoutMeasure", "Lorg/webrtc/RendererCommon$VideoLayoutMeasure;", "mediaEngine", "Lcom/discord/media/engine/MediaEngine;", "eglRenderer", "Lcom/discord/media/engine/video/texture_view/TextureViewEglRenderer;", "rendererEvents", "rotatedFrameWidth", "", "rotatedFrameHeight", "rotatedFrameRotation", "currentStreamId", "startRenderingTimestampNs", "", "useSurfaceDirectRenderer", "", "getUseSurfaceDirectRenderer", "()Z", "setUseSurfaceDirectRenderer", "(Z)V", "cachedAttachedScope", "Lcom/discord/misc/utilities/coroutines/AttachedViewCoroutineScope;", "surface", "Landroid/view/Surface;", "getSurface$media_engine_release", "()Landroid/view/Surface;", "setSurface$media_engine_release", "(Landroid/view/Surface;)V", "lastRenderedRotation", "lastRenderedWidth", "lastRenderedHeight", "hasRenderedFirstFrame", "Ljava/util/concurrent/atomic/AtomicBoolean;", "needsDimensionReset", "onMeasure", "", "widthSpec", "heightSpec", "onLayout", "changed", ViewProps.LEFT, ViewProps.TOP, ViewProps.RIGHT, ViewProps.BOTTOM, "updateSurfaceSize", "onFirstFrameRendered", "onFrameResolutionChanged", "videoWidth", "videoHeight", ViewProps.ROTATION, "requestLayout", "onFrame", "frame", "Lorg/webrtc/VideoFrame;", "mirror", "updateFrameDimensionsAndReportEvents", "startRenderingStream", "streamId", "events", "reset", "attachToStream", "init", "initSurface", "initSurface$media_engine_release", "resetSurface", "releaseSurface", "validSurfaceOrNull", "validSurfaceOrNull$media_engine_release", "toString", "clearSurfaceDirectVideoTransform", "applySurfaceDirectCoverTransform", "Companion", "media_engine_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
@SourceDebugExtension({"SMAP\nVideoStreamTextureView.kt\nKotlin\n*S Kotlin\n*F\n+ 1 VideoStreamTextureView.kt\ncom/discord/media/engine/video/texture_view/VideoStreamTextureView\n+ 2 Debug.kt\ncom/discord/media/engine/types/Debug\n+ 3 ThreadUtils.kt\ncom/discord/misc/utilities/threading/ThreadUtilsKt\n+ 4 fake.kt\nkotlin/jvm/internal/FakeKt\n*L\n1#1,421:1\n38#2,4:422\n38#2,4:426\n38#2,4:435\n44#2,7:439\n38#2,4:446\n58#2,4:455\n38#2,4:459\n38#2,4:463\n44#2,7:472\n17#3,5:430\n17#3,5:450\n17#3,5:467\n17#3,5:480\n1#4:479\n*S KotlinDebug\n*F\n+ 1 VideoStreamTextureView.kt\ncom/discord/media/engine/video/texture_view/VideoStreamTextureView\n*L\n150#1:422,4\n162#1:426,4\n175#1:435,4\n187#1:439,7\n201#1:446,4\n216#1:455,4\n278#1:459,4\n291#1:463,4\n345#1:472,7\n173#1:430,5\n206#1:450,5\n299#1:467,5\n373#1:480,5\n*E\n"})
/* loaded from: classes.dex */
public final class VideoStreamTextureView extends TextureView implements VideoSink, RendererCommon.RendererEvents {

    @NotNull
    private static final String TAG = "VideoStreamTextureView";

    @NotNull
    private final AttachedViewCoroutineScope cachedAttachedScope;
    private String currentStreamId;

    @NotNull
    private final TextureViewEglRenderer eglRenderer;

    @NotNull
    private final AtomicBoolean hasRenderedFirstFrame;
    private int lastRenderedHeight;
    private int lastRenderedRotation;
    private int lastRenderedWidth;

    @NotNull
    private final MediaEngine mediaEngine;

    @NotNull
    private final String name;

    @NotNull
    private final AtomicBoolean needsDimensionReset;
    private RendererCommon.RendererEvents rendererEvents;
    private int rotatedFrameHeight;
    private int rotatedFrameRotation;
    private int rotatedFrameWidth;
    private long startRenderingTimestampNs;
    private volatile Surface surface;
    private boolean useSurfaceDirectRenderer;

    @NotNull
    private final RendererCommon.VideoLayoutMeasure videoLayoutMeasure;

    /* renamed from: Companion, reason: from kotlin metadata */
    @NotNull
    public static final Companion INSTANCE = new Companion(null);

    @NotNull
    private static final AtomicInteger count = new AtomicInteger();

    @NotNull
    private static final AtomicInteger liveCount = new AtomicInteger();

    @Metadata(d1 = {"\u0000\"\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\u000e\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003R\u000e\u0010\u0004\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\u0006\u001a\u00020\u0007X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\b\u001a\u00020\u0007X\u0082\u0004¢\u0006\u0002\n\u0000R\u0014\u0010\t\u001a\u00020\n8@X\u0080\u0004¢\u0006\u0006\u001a\u0004\b\u000b\u0010\f¨\u0006\r"}, d2 = {"Lcom/discord/media/engine/video/texture_view/VideoStreamTextureView$Companion;", "", "<init>", "()V", "TAG", "", "count", "Ljava/util/concurrent/atomic/AtomicInteger;", "liveCount", "streamManager", "Lcom/discord/media/engine/video/texture_view/StreamManager;", "getStreamManager$media_engine_release", "()Lcom/discord/media/engine/video/texture_view/StreamManager;", "media_engine_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final class Companion {
        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }

        @NotNull
        public final StreamManager getStreamManager$media_engine_release() {
            return StreamManager.INSTANCE.getInstance();
        }

        private Companion() {
        }
    }

    /* JADX WARN: 'this' call moved to the top of the method (can break code semantics) */
    /* JADX WARN: Multi-variable type inference failed */
    public VideoStreamTextureView(@NotNull Context context) {
        this(context, null, 2, 0 == true ? 1 : 0);
        Intrinsics.checkNotNullParameter(context, "context");
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final void applySurfaceDirectCoverTransform() {
        if (this.useSurfaceDirectRenderer) {
            boolean z5 = this.rotatedFrameWidth > 0 && this.rotatedFrameHeight > 0;
            boolean z6 = getMeasuredWidth() > 0 && getMeasuredHeight() > 0;
            if (!z5 || !z6) {
                setTransform(new Matrix());
                return;
            }
            float measuredWidth = getMeasuredWidth();
            float measuredHeight = getMeasuredHeight();
            int i5 = this.rotatedFrameRotation;
            boolean z7 = i5 == 90 || i5 == 270;
            float f2 = z7 ? this.rotatedFrameHeight : this.rotatedFrameWidth;
            float f10 = z7 ? this.rotatedFrameWidth : this.rotatedFrameHeight;
            float max = Math.max(measuredWidth / this.rotatedFrameWidth, measuredHeight / this.rotatedFrameHeight);
            Matrix matrix = new Matrix();
            matrix.setScale(f2 / measuredWidth, f10 / measuredHeight);
            float f11 = f2 / 2.0f;
            float f12 = f10 / 2.0f;
            matrix.postRotate(i5, f11, f12);
            matrix.postScale(max, max, f11, f12);
            matrix.postTranslate((measuredWidth - f2) / 2.0f, (measuredHeight - f10) / 2.0f);
            setTransform(matrix);
        }
    }

    private final void attachToStream(String streamId, RendererCommon.RendererEvents events) {
        if (!ThreadUtilsKt.isOnMainThread()) {
            throw new IllegalStateException(com.discord.chat.bridge.botuikit.a.h("Expected to be on android main thread. Current: ", Thread.currentThread()).toString());
        }
        String str = this.currentStreamId;
        if (str != null) {
            Log.i$default(Log.INSTANCE, getName(), k0.d.i(liveCount.decrementAndGet(), "Releasing, liveCount now "), (Throwable) null, 4, (Object) null);
            if (getUseSurfaceDirectRenderer()) {
                resetSurface();
            } else {
                this.eglRenderer.release();
            }
            if (AttachedVideoSinks.INSTANCE.removeSink(this.mediaEngine, this, str)) {
                this.mediaEngine.activeSinksChanged$media_engine_release(str, false);
            }
            this.currentStreamId = null;
            if (getUseSurfaceDirectRenderer()) {
                clearSurfaceDirectVideoTransform();
            }
        }
        if (streamId != null) {
            this.currentStreamId = streamId;
            initSurface$media_engine_release(streamId);
            try {
            } catch (RuntimeException e9) {
                Log.INSTANCE.e(getName(), "Couldn't init EGLRenderer for stream", e9);
            }
            if (events == null) {
                throw new IllegalArgumentException("Required value was null.");
            }
            init(events);
            if (AttachedVideoSinks.INSTANCE.addSink(this.mediaEngine, this, streamId)) {
                this.mediaEngine.activeSinksChanged$media_engine_release(streamId, true);
            }
            if (getUseSurfaceDirectRenderer() && isAvailable()) {
                updateSurfaceSize();
            }
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final void init(RendererCommon.RendererEvents events) {
        System.nanoTime();
        this.rendererEvents = events;
        this.rotatedFrameWidth = 0;
        this.rotatedFrameHeight = 0;
        this.rotatedFrameRotation = 0;
        this.hasRenderedFirstFrame.set(false);
        this.needsDimensionReset.set(true);
        if (!this.useSurfaceDirectRenderer) {
            this.eglRenderer.initialize(events);
        }
        Log.i$default(Log.INSTANCE, TAG, "initialized, liveCount now " + liveCount.incrementAndGet() + ", surface direct renderer: " + this.useSurfaceDirectRenderer, (Throwable) null, 4, (Object) null);
        Debug debug = Debug.INSTANCE;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final void releaseSurface() {
        Surface surface = this.surface;
        if (surface != null) {
            surface.release();
        }
        this.surface = null;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final void resetSurface() {
        String str;
        if (this.useSurfaceDirectRenderer && (str = this.currentStreamId) != null) {
            INSTANCE.getStreamManager$media_engine_release().releaseIfActiveStreamConsumer(this.name, str);
        }
    }

    private final void updateFrameDimensionsAndReportEvents(VideoFrame frame) {
        if (this.needsDimensionReset.compareAndSet(true, false)) {
            this.lastRenderedWidth = 0;
            this.lastRenderedHeight = 0;
            this.lastRenderedRotation = -1;
        }
        if (this.lastRenderedWidth == frame.getRotatedWidth() && this.lastRenderedHeight == frame.getRotatedHeight() && this.lastRenderedRotation == frame.getRotation()) {
            return;
        }
        this.lastRenderedWidth = frame.getRotatedWidth();
        this.lastRenderedHeight = frame.getRotatedHeight();
        this.lastRenderedRotation = frame.getRotation();
        RendererCommon.RendererEvents rendererEvents = this.rendererEvents;
        if (rendererEvents == null) {
            Intrinsics.throwUninitializedPropertyAccessException("rendererEvents");
            rendererEvents = null;
        }
        rendererEvents.onFrameResolutionChanged(frame.getBuffer().getWidth(), frame.getBuffer().getHeight(), frame.getRotation());
        int rotatedWidth = frame.getRotatedWidth();
        int rotatedHeight = frame.getRotatedHeight();
        int rotation = frame.getRotation();
        AttachedViewCoroutineScope attachedViewCoroutineScope = this.cachedAttachedScope;
        ur.e eVar = g0.a;
        x.t(attachedViewCoroutineScope, q.a, new VideoStreamTextureView$updateFrameDimensionsAndReportEvents$1(this, rotatedWidth, rotatedHeight, rotation, null), 2);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final void updateSurfaceSize() {
        if (!ThreadUtilsKt.isOnMainThread()) {
            throw new IllegalStateException(com.discord.chat.bridge.botuikit.a.h("Expected to be on android main thread. Current: ", Thread.currentThread()).toString());
        }
        if (isAvailable()) {
            Debug debug = Debug.INSTANCE;
            getName();
            SurfaceTexture surfaceTexture = getSurfaceTexture();
            Intrinsics.checkNotNull(surfaceTexture);
            surfaceTexture.setDefaultBufferSize(getMeasuredWidth(), getMeasuredHeight());
            applySurfaceDirectCoverTransform();
        }
    }

    public final void clearSurfaceDirectVideoTransform() {
        if (!ThreadUtilsKt.isOnMainThread()) {
            throw new IllegalStateException(com.discord.chat.bridge.botuikit.a.h("Expected to be on android main thread. Current: ", Thread.currentThread()).toString());
        }
        setTransform(new Matrix());
    }

    @NotNull
    public final String getName() {
        return this.name;
    }

    /* renamed from: getSurface$media_engine_release, reason: from getter */
    public final Surface getSurface() {
        return this.surface;
    }

    public final boolean getUseSurfaceDirectRenderer() {
        return this.useSurfaceDirectRenderer;
    }

    public final void initSurface$media_engine_release(String streamId) {
        Surface surface;
        if (!this.useSurfaceDirectRenderer || streamId == null || (surface = this.surface) == null) {
            return;
        }
        Companion companion = INSTANCE;
        companion.getStreamManager$media_engine_release().tryRegisterStreamConsumer(this.name, streamId, this);
        if (companion.getStreamManager$media_engine_release().isOnStreamConsumerStackTop(this.name, streamId)) {
            companion.getStreamManager$media_engine_release().setActiveStreamConsumer(streamId, surface);
        }
    }

    @Override // org.webrtc.RendererCommon.RendererEvents
    public void onFirstFrameRendered() {
        Debug debug = Debug.INSTANCE;
        RendererCommon.RendererEvents rendererEvents = this.rendererEvents;
        if (rendererEvents == null) {
            Intrinsics.throwUninitializedPropertyAccessException("rendererEvents");
            rendererEvents = null;
        }
        rendererEvents.onFirstFrameRendered();
    }

    @Override // com.discord.media.engine.types.VideoSink
    public void onFrame(@NotNull VideoFrame frame, boolean mirror) {
        Intrinsics.checkNotNullParameter(frame, "frame");
        if (this.useSurfaceDirectRenderer) {
            updateFrameDimensionsAndReportEvents(frame);
        } else {
            if (frame.getBuffer() instanceof MockBuffer) {
                return;
            }
            this.eglRenderer.onFrame(frame, mirror);
        }
    }

    @Override // org.webrtc.RendererCommon.RendererEvents
    public void onFrameResolutionChanged(int videoWidth, int videoHeight, int rotation) {
        int i5 = (rotation == 0 || rotation == 180) ? videoWidth : videoHeight;
        int i6 = (rotation == 0 || rotation == 180) ? videoHeight : videoWidth;
        Debug debug = Debug.INSTANCE;
        RendererCommon.RendererEvents rendererEvents = this.rendererEvents;
        if (rendererEvents == null) {
            Intrinsics.throwUninitializedPropertyAccessException("rendererEvents");
            rendererEvents = null;
        }
        rendererEvents.onFrameResolutionChanged(videoWidth, videoHeight, rotation);
        if (!ThreadUtilsKt.isOnMainThread()) {
            throw new IllegalStateException(com.discord.chat.bridge.botuikit.a.h("Expected to be on android main thread. Current: ", Thread.currentThread()).toString());
        }
        this.rotatedFrameWidth = i5;
        this.rotatedFrameHeight = i6;
        this.rotatedFrameRotation = rotation;
        updateSurfaceSize();
        requestLayout();
    }

    @Override // android.view.View
    public void onLayout(boolean changed, int left, int top, int right, int bottom) {
        if (changed) {
            float f2 = (right - left) / (bottom - top);
            if (Float.isNaN(f2)) {
                return;
            }
            Debug debug = Debug.INSTANCE;
            if (!this.useSurfaceDirectRenderer) {
                this.eglRenderer.setLayoutAspectRatio(f2);
            }
            updateSurfaceSize();
        }
    }

    @Override // android.view.View
    public void onMeasure(int widthSpec, int heightSpec) {
        Point measure = this.videoLayoutMeasure.measure(widthSpec, heightSpec, this.rotatedFrameWidth, this.rotatedFrameHeight);
        if (this.rotatedFrameWidth != 0 || this.rotatedFrameHeight != 0) {
            Debug debug = Debug.INSTANCE;
        }
        setMeasuredDimension(measure.x, measure.y);
    }

    @Override // android.view.View
    public void requestLayout() {
        Debug debug = Debug.INSTANCE;
        super.requestLayout();
    }

    public final void reset() {
        Debug debug = Debug.INSTANCE;
        this.startRenderingTimestampNs = 0L;
        attachToStream(null, null);
    }

    public final void setSurface$media_engine_release(Surface surface) {
        this.surface = surface;
    }

    public final void setUseSurfaceDirectRenderer(boolean z5) {
        this.useSurfaceDirectRenderer = z5;
    }

    public final void startRenderingStream(@NotNull String streamId, @NotNull RendererCommon.RendererEvents events) {
        Intrinsics.checkNotNullParameter(streamId, "streamId");
        Intrinsics.checkNotNullParameter(events, "events");
        Debug debug = Debug.INSTANCE;
        this.startRenderingTimestampNs = System.nanoTime();
        attachToStream(streamId, events);
    }

    @Override // android.view.View
    @NotNull
    public String toString() {
        return this.name + " (currentStreamId=" + this.currentStreamId + ")";
    }

    public final Surface validSurfaceOrNull$media_engine_release() {
        Surface surface = this.surface;
        if (surface == null || !surface.isValid()) {
            return null;
        }
        return surface;
    }

    public /* synthetic */ VideoStreamTextureView(Context context, AttributeSet attributeSet, int i5, DefaultConstructorMarker defaultConstructorMarker) {
        this(context, (i5 & 2) != 0 ? null : attributeSet);
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public VideoStreamTextureView(@NotNull Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
        Intrinsics.checkNotNullParameter(context, "context");
        String i5 = k0.d.i(count.incrementAndGet(), "VideoStreamTextureView-");
        this.name = i5;
        this.videoLayoutMeasure = new RendererCommon.VideoLayoutMeasure();
        this.mediaEngine = MediaEngineKt.getMediaEngine((ReactContext) context);
        this.eglRenderer = new TextureViewEglRenderer(i5);
        this.cachedAttachedScope = CoroutineViewUtilsKt.getAttachedScope(this);
        this.lastRenderedRotation = -1;
        this.hasRenderedFirstFrame = new AtomicBoolean(false);
        this.needsDimensionReset = new AtomicBoolean(false);
        setSurfaceTextureListener(new TextureView.SurfaceTextureListener() { // from class: com.discord.media.engine.video.texture_view.VideoStreamTextureView.1
            private long startNs = System.nanoTime();
            private int surfaceTextureCount;

            @Override // android.view.TextureView.SurfaceTextureListener
            public void onSurfaceTextureAvailable(SurfaceTexture surfaceTexture, int width, int height) {
                Intrinsics.checkNotNullParameter(surfaceTexture, "surfaceTexture");
                Debug debug = Debug.INSTANCE;
                VideoStreamTextureView.this.getName();
                VideoStreamTextureView.this.updateSurfaceSize();
                if (!VideoStreamTextureView.this.getUseSurfaceDirectRenderer()) {
                    VideoStreamTextureView.this.eglRenderer.onSurfaceTextureAvailable(surfaceTexture, width, height);
                    return;
                }
                VideoStreamTextureView.this.setSurface$media_engine_release(new Surface(surfaceTexture));
                VideoStreamTextureView videoStreamTextureView = VideoStreamTextureView.this;
                videoStreamTextureView.initSurface$media_engine_release(videoStreamTextureView.currentStreamId);
            }

            @Override // android.view.TextureView.SurfaceTextureListener
            public boolean onSurfaceTextureDestroyed(SurfaceTexture surface) {
                Intrinsics.checkNotNullParameter(surface, "surface");
                System.nanoTime();
                if (!VideoStreamTextureView.this.getUseSurfaceDirectRenderer()) {
                    boolean onSurfaceTextureDestroyed = VideoStreamTextureView.this.eglRenderer.onSurfaceTextureDestroyed(surface);
                    Debug debug = Debug.INSTANCE;
                    VideoStreamTextureView.this.getName();
                    return onSurfaceTextureDestroyed;
                }
                VideoStreamTextureView.this.resetSurface();
                VideoStreamTextureView.this.releaseSurface();
                Debug debug2 = Debug.INSTANCE;
                VideoStreamTextureView.this.getName();
                return true;
            }

            @Override // android.view.TextureView.SurfaceTextureListener
            public void onSurfaceTextureSizeChanged(SurfaceTexture surface, int width, int height) {
                Intrinsics.checkNotNullParameter(surface, "surface");
                Debug debug = Debug.INSTANCE;
                VideoStreamTextureView.this.getName();
                if (VideoStreamTextureView.this.getUseSurfaceDirectRenderer()) {
                    VideoStreamTextureView.this.updateSurfaceSize();
                } else {
                    VideoStreamTextureView.this.eglRenderer.onSurfaceTextureSizeChanged(surface, width, height);
                }
            }

            @Override // android.view.TextureView.SurfaceTextureListener
            public void onSurfaceTextureUpdated(SurfaceTexture surface) {
                Intrinsics.checkNotNullParameter(surface, "surface");
                if (!VideoStreamTextureView.this.getUseSurfaceDirectRenderer()) {
                    VideoStreamTextureView.this.eglRenderer.onSurfaceTextureUpdated(surface);
                    return;
                }
                if (VideoStreamTextureView.this.rendererEvents == null || !VideoStreamTextureView.this.hasRenderedFirstFrame.compareAndSet(false, true)) {
                    return;
                }
                RendererCommon.RendererEvents rendererEvents = VideoStreamTextureView.this.rendererEvents;
                if (rendererEvents == null) {
                    Intrinsics.throwUninitializedPropertyAccessException("rendererEvents");
                    rendererEvents = null;
                }
                rendererEvents.onFirstFrameRendered();
            }
        });
    }
}
