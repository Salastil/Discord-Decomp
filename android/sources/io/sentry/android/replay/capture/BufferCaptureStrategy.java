package io.sentry.android.replay.capture;

import a3.e;
import android.annotation.TargetApi;
import android.graphics.Bitmap;
import android.view.MotionEvent;
import hc.m;
import io.sentry.IScope;
import io.sentry.SentryLevel;
import io.sentry.android.replay.ReplayCache;
import io.sentry.android.replay.ScreenshotRecorderConfig;
import io.sentry.android.replay.capture.CaptureStrategy;
import io.sentry.android.replay.util.ReplayRunnable;
import io.sentry.android.replay.util.SamplingKt;
import io.sentry.protocol.v;
import io.sentry.transport.f;
import io.sentry.util.i;
import io.sentry.v5;
import io.sentry.w5;
import io.sentry.x0;
import java.io.File;
import java.util.ArrayList;
import java.util.Date;
import java.util.List;
import java.util.concurrent.ScheduledExecutorService;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.collections.c0;
import kotlin.collections.h0;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.Ref;
import kotlin.jvm.internal.SourceDebugExtension;
import m3.n;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u0000\u009a\u0001\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0010!\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\t\n\u0002\b\u0003\n\u0002\u0010\u000e\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0006\n\u0002\u0010\u000b\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u000b\b\u0001\u0018\u0000 E2\u00020\u0001:\u0001EBI\u0012\u0006\u0010\u0003\u001a\u00020\u0002\u0012\b\u0010\u0005\u001a\u0004\u0018\u00010\u0004\u0012\u0006\u0010\u0007\u001a\u00020\u0006\u0012\u0006\u0010\t\u001a\u00020\b\u0012\u0006\u0010\u000b\u001a\u00020\n\u0012\u0016\b\u0002\u0010\u000f\u001a\u0010\u0012\u0004\u0012\u00020\r\u0012\u0004\u0012\u00020\u000e\u0018\u00010\f¢\u0006\u0004\b\u0010\u0010\u0011J\u0019\u0010\u0015\u001a\u00020\u00142\b\u0010\u0013\u001a\u0004\u0018\u00010\u0012H\u0002¢\u0006\u0004\b\u0015\u0010\u0016J\u0019\u0010\u0019\u001a\u00020\u0014*\b\u0012\u0004\u0012\u00020\u00180\u0017H\u0002¢\u0006\u0004\b\u0019\u0010\u001aJ!\u0010\u001d\u001a\u00020\u0014*\b\u0012\u0004\u0012\u00020\u00180\u00172\u0006\u0010\u001c\u001a\u00020\u001bH\u0002¢\u0006\u0004\b\u001d\u0010\u001eJ+\u0010#\u001a\u00020\u00142\u0006\u0010 \u001a\u00020\u001f2\u0012\u0010\"\u001a\u000e\u0012\u0004\u0012\u00020!\u0012\u0004\u0012\u00020\u00140\fH\u0002¢\u0006\u0004\b#\u0010$J\u000f\u0010%\u001a\u00020\u0014H\u0016¢\u0006\u0004\b%\u0010&J\u000f\u0010'\u001a\u00020\u0014H\u0016¢\u0006\u0004\b'\u0010&J+\u0010,\u001a\u00020\u00142\u0006\u0010)\u001a\u00020(2\u0012\u0010+\u001a\u000e\u0012\u0004\u0012\u00020*\u0012\u0004\u0012\u00020\u00140\fH\u0016¢\u0006\u0004\b,\u0010-J3\u00102\u001a\u00020\u00142\b\u0010/\u001a\u0004\u0018\u00010.2\u0018\u00101\u001a\u0014\u0012\u0004\u0012\u00020\u000e\u0012\u0004\u0012\u00020\u001b\u0012\u0004\u0012\u00020\u001400H\u0016¢\u0006\u0004\b2\u00103J\u0017\u00106\u001a\u00020\u00142\u0006\u00105\u001a\u000204H\u0016¢\u0006\u0004\b6\u00107J\u000f\u00109\u001a\u000208H\u0016¢\u0006\u0004\b9\u0010:J\u0017\u0010=\u001a\u00020\u00142\u0006\u0010<\u001a\u00020;H\u0016¢\u0006\u0004\b=\u0010>R\u0014\u0010\u0003\u001a\u00020\u00028\u0002X\u0082\u0004¢\u0006\u0006\n\u0004\b\u0003\u0010?R\u0016\u0010\u0005\u001a\u0004\u0018\u00010\u00048\u0002X\u0082\u0004¢\u0006\u0006\n\u0004\b\u0005\u0010@R\u0014\u0010\u0007\u001a\u00020\u00068\u0002X\u0082\u0004¢\u0006\u0006\n\u0004\b\u0007\u0010AR\u0014\u0010\t\u001a\u00020\b8\u0002X\u0082\u0004¢\u0006\u0006\n\u0004\b\t\u0010BR\u001a\u0010C\u001a\b\u0012\u0004\u0012\u00020\u00180\u00178\u0002X\u0082\u0004¢\u0006\u0006\n\u0004\bC\u0010D¨\u0006F"}, d2 = {"Lio/sentry/android/replay/capture/BufferCaptureStrategy;", "Lio/sentry/android/replay/capture/BaseCaptureStrategy;", "Lio/sentry/v5;", "options", "Lio/sentry/x0;", "scopes", "Lio/sentry/transport/f;", "dateProvider", "Lio/sentry/util/i;", "random", "Ljava/util/concurrent/ScheduledExecutorService;", "executor", "Lkotlin/Function1;", "Lio/sentry/protocol/v;", "Lio/sentry/android/replay/ReplayCache;", "replayCacheProvider", "<init>", "(Lio/sentry/v5;Lio/sentry/x0;Lio/sentry/transport/f;Lio/sentry/util/i;Ljava/util/concurrent/ScheduledExecutorService;Lkotlin/jvm/functions/Function1;)V", "Ljava/io/File;", "file", "", "deleteFile", "(Ljava/io/File;)V", "", "Lio/sentry/android/replay/capture/CaptureStrategy$ReplaySegment$Created;", "capture", "(Ljava/util/List;)V", "", "bufferLimit", "rotate", "(Ljava/util/List;J)V", "", "taskName", "Lio/sentry/android/replay/capture/CaptureStrategy$ReplaySegment;", "onSegmentCreated", "createCurrentSegment", "(Ljava/lang/String;Lkotlin/jvm/functions/Function1;)V", "pause", "()V", "stop", "", "isTerminating", "Ljava/util/Date;", "onSegmentSent", "captureReplay", "(ZLkotlin/jvm/functions/Function1;)V", "Landroid/graphics/Bitmap;", "bitmap", "Lkotlin/Function2;", "store", "onScreenshotRecorded", "(Landroid/graphics/Bitmap;Lkotlin/jvm/functions/Function2;)V", "Lio/sentry/android/replay/ScreenshotRecorderConfig;", "recorderConfig", "onConfigurationChanged", "(Lio/sentry/android/replay/ScreenshotRecorderConfig;)V", "Lio/sentry/android/replay/capture/CaptureStrategy;", "convert", "()Lio/sentry/android/replay/capture/CaptureStrategy;", "Landroid/view/MotionEvent;", "event", "onTouchEvent", "(Landroid/view/MotionEvent;)V", "Lio/sentry/v5;", "Lio/sentry/x0;", "Lio/sentry/transport/f;", "Lio/sentry/util/i;", "bufferedSegments", "Ljava/util/List;", "Companion", "sentry-android-replay_release"}, k = 1, mv = {1, 9, 0}, xi = 48)
@TargetApi(26)
@SourceDebugExtension({"SMAP\nBufferCaptureStrategy.kt\nKotlin\n*S Kotlin\n*F\n+ 1 BufferCaptureStrategy.kt\nio/sentry/android/replay/capture/BufferCaptureStrategy\n+ 2 _Collections.kt\nkotlin/collections/CollectionsKt___CollectionsKt\n*L\n1#1,250:1\n1864#2,3:251\n*S KotlinDebug\n*F\n+ 1 BufferCaptureStrategy.kt\nio/sentry/android/replay/capture/BufferCaptureStrategy\n*L\n209#1:251,3\n*E\n"})
/* loaded from: classes3.dex */
public final class BufferCaptureStrategy extends BaseCaptureStrategy {
    private static final long ENVELOPE_PROCESSING_DELAY = 100;

    @NotNull
    private static final String TAG = "BufferCaptureStrategy";

    @NotNull
    private final List<CaptureStrategy.ReplaySegment.Created> bufferedSegments;

    @NotNull
    private final f dateProvider;

    @NotNull
    private final v5 options;

    @NotNull
    private final i random;
    private final x0 scopes;
    public static final int $stable = 8;

    public /* synthetic */ BufferCaptureStrategy(v5 v5Var, x0 x0Var, f fVar, i iVar, ScheduledExecutorService scheduledExecutorService, Function1 function1, int i5, DefaultConstructorMarker defaultConstructorMarker) {
        this(v5Var, x0Var, fVar, iVar, scheduledExecutorService, (i5 & 32) != 0 ? null : function1);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final void capture(List<CaptureStrategy.ReplaySegment.Created> list) {
        CaptureStrategy.ReplaySegment.Created created = (CaptureStrategy.ReplaySegment.Created) h0.t(list);
        while (created != null) {
            CaptureStrategy.ReplaySegment.Created.capture$default(created, this.scopes, null, 2, null);
            created = (CaptureStrategy.ReplaySegment.Created) h0.t(list);
            Thread.sleep(100L);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void captureReplay$lambda$1(BufferCaptureStrategy bufferCaptureStrategy, IScope it) {
        Intrinsics.checkNotNullParameter(it, "it");
        it.k(bufferCaptureStrategy.getCurrentReplayId());
    }

    private final void createCurrentSegment(String taskName, Function1<? super CaptureStrategy.ReplaySegment, Unit> onSegmentCreated) {
        Date s2;
        Long firstFrameTimestamp$sentry_android_replay_release;
        ScreenshotRecorderConfig recorderConfig$sentry_android_replay_release = getRecorderConfig$sentry_android_replay_release();
        if (recorderConfig$sentry_android_replay_release == null) {
            this.options.getLogger().u(SentryLevel.DEBUG, e.k("Recorder config is not set, not creating segment for task: ", taskName), new Object[0]);
            return;
        }
        long j = this.options.getSessionReplay().f12110i;
        long g6 = this.dateProvider.g();
        ReplayCache cache = getCache();
        if (cache == null || (firstFrameTimestamp$sentry_android_replay_release = cache.firstFrameTimestamp$sentry_android_replay_release()) == null || (s2 = ki.b.s(firstFrameTimestamp$sentry_android_replay_release.longValue())) == null) {
            s2 = ki.b.s(g6 - j);
        }
        Intrinsics.checkNotNull(s2);
        getReplayExecutor().submit(new ReplayRunnable(e.k("BufferCaptureStrategy.", taskName), new a(this, g6 - s2.getTime(), s2, getCurrentReplayId(), recorderConfig$sentry_android_replay_release, onSegmentCreated, 0)));
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void createCurrentSegment$lambda$5(BufferCaptureStrategy bufferCaptureStrategy, long j, Date date, v vVar, ScreenshotRecorderConfig screenshotRecorderConfig, Function1 function1) {
        function1.invoke(BaseCaptureStrategy.createSegmentInternal$default(bufferCaptureStrategy, j, date, vVar, bufferCaptureStrategy.getCurrentSegment(), screenshotRecorderConfig.getRecordingHeight(), screenshotRecorderConfig.getRecordingWidth(), screenshotRecorderConfig.getFrameRate(), screenshotRecorderConfig.getBitRate(), null, null, null, null, null, 7936, null));
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final void deleteFile(File file) {
        if (file == null) {
            return;
        }
        try {
            if (file.delete()) {
                return;
            }
            this.options.getLogger().u(SentryLevel.ERROR, "Failed to delete replay segment: %s", file.getAbsolutePath());
        } catch (Throwable th2) {
            this.options.getLogger().i(SentryLevel.ERROR, th2, "Failed to delete replay segment: %s", file.getAbsolutePath());
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void onScreenshotRecorded$lambda$2(BufferCaptureStrategy bufferCaptureStrategy, Function2 function2, long j) {
        ReplayCache cache = bufferCaptureStrategy.getCache();
        if (cache != null) {
            function2.invoke(cache, Long.valueOf(j));
        }
        long g6 = bufferCaptureStrategy.dateProvider.g() - bufferCaptureStrategy.options.getSessionReplay().f12110i;
        ReplayCache cache2 = bufferCaptureStrategy.getCache();
        bufferCaptureStrategy.setScreenAtStart(cache2 != null ? cache2.rotate$sentry_android_replay_release(g6) : null);
        bufferCaptureStrategy.rotate(bufferCaptureStrategy.bufferedSegments, g6);
    }

    private final void rotate(List<CaptureStrategy.ReplaySegment.Created> list, final long j) {
        final Ref.BooleanRef booleanRef = new Ref.BooleanRef();
        h0.s(list, new Function1<CaptureStrategy.ReplaySegment.Created, Boolean>() { // from class: io.sentry.android.replay.capture.BufferCaptureStrategy$rotate$1
            /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
            {
                super(1);
            }

            @Override // kotlin.jvm.functions.Function1
            public final Boolean invoke(CaptureStrategy.ReplaySegment.Created it) {
                Intrinsics.checkNotNullParameter(it, "it");
                if (it.getReplay().R.getTime() >= j) {
                    return Boolean.FALSE;
                }
                this.setCurrentSegment(r0.getCurrentSegment() - 1);
                this.deleteFile(it.getReplay().M);
                booleanRef.element = true;
                return Boolean.TRUE;
            }
        });
        if (booleanRef.element) {
            int i5 = 0;
            for (Object obj : list) {
                int i6 = i5 + 1;
                if (i5 < 0) {
                    c0.k();
                    throw null;
                }
                ((CaptureStrategy.ReplaySegment.Created) obj).setSegmentId(i5);
                i5 = i6;
            }
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void stop$lambda$0(File file, BufferCaptureStrategy bufferCaptureStrategy) {
        n.G(file);
        bufferCaptureStrategy.setCurrentSegment(-1);
    }

    @Override // io.sentry.android.replay.capture.CaptureStrategy
    public void captureReplay(boolean isTerminating, @NotNull final Function1<? super Date, Unit> onSegmentSent) {
        Intrinsics.checkNotNullParameter(onSegmentSent, "onSegmentSent");
        if (!SamplingKt.sample(this.random, this.options.getSessionReplay().f12103b)) {
            this.options.getLogger().u(SentryLevel.INFO, "Replay wasn't sampled by onErrorSampleRate, not capturing for event", new Object[0]);
            return;
        }
        x0 x0Var = this.scopes;
        if (x0Var != null) {
            x0Var.q(null, new m(18, this));
        }
        if (!isTerminating) {
            createCurrentSegment("capture_replay", new Function1<CaptureStrategy.ReplaySegment, Unit>() { // from class: io.sentry.android.replay.capture.BufferCaptureStrategy$captureReplay$2
                /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
                /* JADX WARN: Multi-variable type inference failed */
                {
                    super(1);
                }

                @Override // kotlin.jvm.functions.Function1
                public /* bridge */ /* synthetic */ Object invoke(Object obj) {
                    invoke((CaptureStrategy.ReplaySegment) obj);
                    return Unit.a;
                }

                public final void invoke(CaptureStrategy.ReplaySegment segment) {
                    List list;
                    x0 x0Var2;
                    Intrinsics.checkNotNullParameter(segment, "segment");
                    BufferCaptureStrategy bufferCaptureStrategy = BufferCaptureStrategy.this;
                    list = bufferCaptureStrategy.bufferedSegments;
                    bufferCaptureStrategy.capture(list);
                    if (segment instanceof CaptureStrategy.ReplaySegment.Created) {
                        CaptureStrategy.ReplaySegment.Created created = (CaptureStrategy.ReplaySegment.Created) segment;
                        x0Var2 = BufferCaptureStrategy.this.scopes;
                        CaptureStrategy.ReplaySegment.Created.capture$default(created, x0Var2, null, 2, null);
                        Function1<Date, Unit> function1 = onSegmentSent;
                        Date date = created.getReplay().R;
                        Intrinsics.checkNotNullExpressionValue(date, "getTimestamp(...)");
                        function1.invoke(date);
                    }
                }
            });
        } else {
            getIsTerminating().set(true);
            this.options.getLogger().u(SentryLevel.DEBUG, "Not capturing replay for crashed event, will be captured on next launch", new Object[0]);
        }
    }

    @Override // io.sentry.android.replay.capture.CaptureStrategy
    @NotNull
    public CaptureStrategy convert() {
        if (getIsTerminating().get()) {
            this.options.getLogger().u(SentryLevel.DEBUG, "Not converting to session mode, because the process is about to terminate", new Object[0]);
            return this;
        }
        SessionCaptureStrategy sessionCaptureStrategy = new SessionCaptureStrategy(this.options, this.scopes, this.dateProvider, getReplayExecutor(), null, 16, null);
        sessionCaptureStrategy.setRecorderConfig$sentry_android_replay_release(getRecorderConfig$sentry_android_replay_release());
        sessionCaptureStrategy.start(getCurrentSegment(), getCurrentReplayId(), w5.BUFFER);
        return sessionCaptureStrategy;
    }

    @Override // io.sentry.android.replay.capture.BaseCaptureStrategy, io.sentry.android.replay.capture.CaptureStrategy
    public void onConfigurationChanged(@NotNull ScreenshotRecorderConfig recorderConfig) {
        Intrinsics.checkNotNullParameter(recorderConfig, "recorderConfig");
        createCurrentSegment("configuration_changed", new Function1<CaptureStrategy.ReplaySegment, Unit>() { // from class: io.sentry.android.replay.capture.BufferCaptureStrategy$onConfigurationChanged$1
            {
                super(1);
            }

            @Override // kotlin.jvm.functions.Function1
            public /* bridge */ /* synthetic */ Object invoke(Object obj) {
                invoke((CaptureStrategy.ReplaySegment) obj);
                return Unit.a;
            }

            public final void invoke(CaptureStrategy.ReplaySegment segment) {
                List list;
                Intrinsics.checkNotNullParameter(segment, "segment");
                if (segment instanceof CaptureStrategy.ReplaySegment.Created) {
                    list = BufferCaptureStrategy.this.bufferedSegments;
                    list.add(segment);
                    BufferCaptureStrategy bufferCaptureStrategy = BufferCaptureStrategy.this;
                    bufferCaptureStrategy.setCurrentSegment(bufferCaptureStrategy.getCurrentSegment() + 1);
                }
            }
        });
        super.onConfigurationChanged(recorderConfig);
    }

    @Override // io.sentry.android.replay.capture.CaptureStrategy
    public void onScreenshotRecorded(Bitmap bitmap, @NotNull Function2<? super ReplayCache, ? super Long, Unit> store) {
        Intrinsics.checkNotNullParameter(store, "store");
        getReplayExecutor().submit(new ReplayRunnable("BufferCaptureStrategy.add_frame", new app.rive.core.a(this, store, this.dateProvider.g(), 3)));
    }

    @Override // io.sentry.android.replay.capture.BaseCaptureStrategy, io.sentry.android.replay.capture.CaptureStrategy
    public void onTouchEvent(@NotNull MotionEvent event) {
        Intrinsics.checkNotNullParameter(event, "event");
        super.onTouchEvent(event);
        CaptureStrategy.Companion.rotateEvents$sentry_android_replay_release$default(CaptureStrategy.INSTANCE, getCurrentEvents(), this.dateProvider.g() - this.options.getSessionReplay().f12110i, null, 4, null);
    }

    @Override // io.sentry.android.replay.capture.BaseCaptureStrategy, io.sentry.android.replay.capture.CaptureStrategy
    public void pause() {
        createCurrentSegment("pause", new Function1<CaptureStrategy.ReplaySegment, Unit>() { // from class: io.sentry.android.replay.capture.BufferCaptureStrategy$pause$1
            {
                super(1);
            }

            @Override // kotlin.jvm.functions.Function1
            public /* bridge */ /* synthetic */ Object invoke(Object obj) {
                invoke((CaptureStrategy.ReplaySegment) obj);
                return Unit.a;
            }

            public final void invoke(CaptureStrategy.ReplaySegment segment) {
                List list;
                Intrinsics.checkNotNullParameter(segment, "segment");
                if (segment instanceof CaptureStrategy.ReplaySegment.Created) {
                    list = BufferCaptureStrategy.this.bufferedSegments;
                    list.add(segment);
                    BufferCaptureStrategy bufferCaptureStrategy = BufferCaptureStrategy.this;
                    bufferCaptureStrategy.setCurrentSegment(bufferCaptureStrategy.getCurrentSegment() + 1);
                }
            }
        });
        super.pause();
    }

    @Override // io.sentry.android.replay.capture.BaseCaptureStrategy, io.sentry.android.replay.capture.CaptureStrategy
    public void stop() {
        ReplayCache cache = getCache();
        getReplayExecutor().submit(new ReplayRunnable("BufferCaptureStrategy.stop", new com.mkuczera.haptic.a(18, cache != null ? cache.getReplayCacheDir$sentry_android_replay_release() : null, this)));
        super.stop();
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public BufferCaptureStrategy(@NotNull v5 options, x0 x0Var, @NotNull f dateProvider, @NotNull i random, @NotNull ScheduledExecutorService executor, Function1<? super v, ReplayCache> function1) {
        super(options, x0Var, dateProvider, executor, function1);
        Intrinsics.checkNotNullParameter(options, "options");
        Intrinsics.checkNotNullParameter(dateProvider, "dateProvider");
        Intrinsics.checkNotNullParameter(random, "random");
        Intrinsics.checkNotNullParameter(executor, "executor");
        this.options = options;
        this.scopes = x0Var;
        this.dateProvider = dateProvider;
        this.random = random;
        this.bufferedSegments = new ArrayList();
    }
}
