package app.rive;

import a3.e;
import android.os.Trace;
import androidx.lifecycle.Lifecycle;
import androidx.lifecycle.LifecycleOwner;
import androidx.lifecycle.k0;
import app.rive.core.ArtboardHandle;
import app.rive.core.CommandQueue;
import app.rive.core.RiveSurface;
import app.rive.core.StateMachineHandle;
import ki.b;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.Ref;
import kotlin.jvm.internal.SourceDebugExtension;
import kotlin.time.Duration;
import kotlinx.coroutines.CoroutineScope;
import lo.d;
import lo.h;
import lr.c;
import nr.x;
import org.jetbrains.annotations.NotNull;
import u.l;

@Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\u008a@"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {1, 9, 0}, xi = 48)
@d(c = "app.rive.RiveKt$Rive$7", f = "Rive.kt", l = {333}, m = "invokeSuspend")
@SourceDebugExtension({"SMAP\nRive.kt\nKotlin\n*S Kotlin\n*F\n+ 1 Rive.kt\napp/rive/RiveKt$Rive$7\n+ 2 RiveLog.kt\napp/rive/RiveLog\n+ 3 Tracing.kt\napp/rive/core/TracingKt\n*L\n1#1,521:1\n57#2:522\n57#2:523\n57#2:533\n12#3,3:524\n12#3,6:527\n12#3,6:534\n16#3,2:540\n*S KotlinDebug\n*F\n+ 1 Rive.kt\napp/rive/RiveKt$Rive$7\n*L\n302#1:522\n306#1:523\n317#1:533\n310#1:524,3\n311#1:527,6\n320#1:534,6\n310#1:540,2\n*E\n"})
/* loaded from: classes.dex */
public final class RiveKt$Rive$7 extends h implements Function2<CoroutineScope, Continuation, Object> {
    final /* synthetic */ long $artboardHandle;
    final /* synthetic */ int $backgroundColor;
    final /* synthetic */ Fit $fit;
    final /* synthetic */ l $isSettled$delegate;
    final /* synthetic */ LifecycleOwner $lifecycleOwner;
    final /* synthetic */ boolean $playing;
    final /* synthetic */ CommandQueue $riveWorker;
    final /* synthetic */ long $stateMachineHandle;
    final /* synthetic */ StateMachine $stateMachineToUse;
    final /* synthetic */ l $surface$delegate;
    private /* synthetic */ Object L$0;
    int label;

    @Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\u008a@"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {1, 9, 0}, xi = 48)
    @d(c = "app.rive.RiveKt$Rive$7$4", f = "Rive.kt", l = {340}, m = "invokeSuspend")
    @SourceDebugExtension({"SMAP\nRive.kt\nKotlin\n*S Kotlin\n*F\n+ 1 Rive.kt\napp/rive/RiveKt$Rive$7$4\n+ 2 RiveLog.kt\napp/rive/RiveLog\n+ 3 Tracing.kt\napp/rive/core/TracingKt\n*L\n1#1,521:1\n57#2:522\n57#2:532\n57#2:547\n12#3,3:523\n12#3,6:526\n12#3,6:533\n12#3,6:539\n16#3,2:545\n*S KotlinDebug\n*F\n+ 1 Rive.kt\napp/rive/RiveKt$Rive$7$4\n*L\n334#1:522\n354#1:532\n376#1:547\n347#1:523,3\n350#1:526,6\n358#1:533,6\n361#1:539,6\n347#1:545,2\n*E\n"})
    /* renamed from: app.rive.RiveKt$Rive$7$4, reason: invalid class name */
    public static final class AnonymousClass4 extends h implements Function2<CoroutineScope, Continuation, Object> {
        final /* synthetic */ long $artboardHandle;
        final /* synthetic */ int $backgroundColor;
        final /* synthetic */ Fit $fit;
        final /* synthetic */ l $isSettled$delegate;
        final /* synthetic */ CommandQueue $riveWorker;
        final /* synthetic */ long $stateMachineHandle;
        final /* synthetic */ l $surface$delegate;
        private /* synthetic */ Object L$0;
        Object L$1;
        Object L$2;
        int label;

        /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
        public AnonymousClass4(long j, long j5, l lVar, l lVar2, CommandQueue commandQueue, Fit fit, int i5, Continuation continuation) {
            super(2, continuation);
            this.$artboardHandle = j;
            this.$stateMachineHandle = j5;
            this.$isSettled$delegate = lVar;
            this.$surface$delegate = lVar2;
            this.$riveWorker = commandQueue;
            this.$fit = fit;
            this.$backgroundColor = i5;
        }

        @Override // lo.a
        @NotNull
        public final Continuation create(Object obj, @NotNull Continuation continuation) {
            AnonymousClass4 anonymousClass4 = new AnonymousClass4(this.$artboardHandle, this.$stateMachineHandle, this.$isSettled$delegate, this.$surface$delegate, this.$riveWorker, this.$fit, this.$backgroundColor, continuation);
            anonymousClass4.L$0 = obj;
            return anonymousClass4;
        }

        /* JADX WARN: Removed duplicated region for block: B:16:0x00dd  */
        /* JADX WARN: Removed duplicated region for block: B:19:0x00e0  */
        /* JADX WARN: Removed duplicated region for block: B:22:0x0057  */
        /* JADX WARN: Removed duplicated region for block: B:25:0x00f3  */
        /* JADX WARN: Removed duplicated region for block: B:31:0x00a2 A[Catch: all -> 0x009b, TryCatch #2 {all -> 0x009b, blocks: (B:7:0x0089, B:9:0x008f, B:12:0x0096, B:13:0x00d4, B:29:0x009e, B:30:0x00a1, B:31:0x00a2, B:33:0x00a8, B:34:0x00b7, B:37:0x00c2, B:41:0x00d1, B:44:0x00e6, B:45:0x00e9, B:48:0x00eb, B:49:0x00ee, B:40:0x00ce, B:36:0x00bd, B:11:0x0094), top: B:6:0x0089, inners: #0, #1, #3 }] */
        /* JADX WARN: Removed duplicated region for block: B:9:0x008f A[Catch: all -> 0x009b, TRY_LEAVE, TryCatch #2 {all -> 0x009b, blocks: (B:7:0x0089, B:9:0x008f, B:12:0x0096, B:13:0x00d4, B:29:0x009e, B:30:0x00a1, B:31:0x00a2, B:33:0x00a8, B:34:0x00b7, B:37:0x00c2, B:41:0x00d1, B:44:0x00e6, B:45:0x00e9, B:48:0x00eb, B:49:0x00ee, B:40:0x00ce, B:36:0x00bd, B:11:0x0094), top: B:6:0x0089, inners: #0, #1, #3 }] */
        /* JADX WARN: Unsupported multi-entry loop pattern (BACK_EDGE: B:23:0x006d -> B:5:0x0070). Please report as a decompilation issue!!! */
        @Override // lo.a
        /*
            Code decompiled incorrectly, please refer to instructions dump.
        */
        public final Object invokeSuspend(@NotNull Object obj) {
            final Ref.LongRef longRef;
            CoroutineScope coroutineScope;
            boolean Rive$lambda$1;
            RiveSurface Rive$lambda$4;
            int i5;
            ko.a aVar = ko.a.f13464d;
            int i6 = this.label;
            int i10 = 1;
            if (i6 == 0) {
                b.R(obj);
                CoroutineScope coroutineScope2 = (CoroutineScope) this.L$0;
                final long j = this.$artboardHandle;
                final long j5 = this.$stateMachineHandle;
                RiveLog.INSTANCE.getLogger().d("Rive/UI/Draw", new Function0<String>() { // from class: app.rive.RiveKt.Rive.7.4.1
                    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
                    {
                        super(0);
                    }

                    @Override // kotlin.jvm.functions.Function0
                    @NotNull
                    public final String invoke() {
                        return e.l("Starting drawing with ", ArtboardHandle.m109toStringimpl(j), " and ", StateMachineHandle.m225toStringimpl(j5));
                    }
                });
                longRef = new Ref.LongRef();
                lr.a aVar2 = Duration.f13595e;
                longRef.element = c.g(0, lr.d.f14210e);
                coroutineScope = coroutineScope2;
                if (x.s(coroutineScope)) {
                }
            } else {
                if (i6 != 1) {
                    throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                }
                Ref.BooleanRef booleanRef = (Ref.BooleanRef) this.L$2;
                longRef = (Ref.LongRef) this.L$1;
                coroutineScope = (CoroutineScope) this.L$0;
                b.R(obj);
                Object L = obj;
                long j7 = ((Duration) L).f13598d;
                l lVar = this.$isSettled$delegate;
                l lVar2 = this.$surface$delegate;
                CommandQueue commandQueue = this.$riveWorker;
                long j10 = this.$stateMachineHandle;
                long j11 = this.$artboardHandle;
                Fit fit = this.$fit;
                ko.a aVar3 = aVar;
                int i11 = this.$backgroundColor;
                Trace.beginSection("Rive/Frame");
                try {
                    Rive$lambda$1 = RiveKt.Rive$lambda$1(lVar);
                    if (Rive$lambda$1) {
                        Trace.beginSection("Rive/Frame/SettledSkip");
                        try {
                            Unit unit = Unit.a;
                            Trace.endSection();
                            i5 = 1;
                            Unit unit2 = Unit.a;
                            Trace.endSection();
                            if (!booleanRef.element) {
                            }
                        } finally {
                        }
                    } else {
                        Rive$lambda$4 = RiveKt.Rive$lambda$4(lVar2);
                        if (Rive$lambda$4 == null) {
                            RiveLog.INSTANCE.getLogger().d("Rive/UI/Draw", new Function0<String>() { // from class: app.rive.RiveKt$Rive$7$4$2$2
                                @Override // kotlin.jvm.functions.Function0
                                @NotNull
                                public final String invoke() {
                                    return "Surface was released during draw, stopping draw loop";
                                }
                            });
                            i5 = 1;
                            booleanRef.element = true;
                        } else {
                            i5 = 1;
                            Trace.beginSection("Rive/Frame/Advance");
                            try {
                                try {
                                    commandQueue.m123advanceStateMachineDDXDRQI(j10, j7);
                                    Unit unit3 = Unit.a;
                                    Trace.endSection();
                                    Trace.beginSection("Rive/Frame/Draw");
                                    commandQueue.m142drawOcc3x_Y(j11, j10, Rive$lambda$4, fit, i11);
                                } finally {
                                }
                            } finally {
                            }
                        }
                        Unit unit22 = Unit.a;
                        Trace.endSection();
                        if (!booleanRef.element) {
                            return Unit.a;
                        }
                        i10 = i5;
                        aVar = aVar3;
                    }
                    if (x.s(coroutineScope)) {
                        booleanRef = new Ref.BooleanRef();
                        Function1<Long, Duration> function1 = new Function1<Long, Duration>() { // from class: app.rive.RiveKt$Rive$7$4$deltaTime$1
                            {
                                super(1);
                            }

                            @Override // kotlin.jvm.functions.Function1
                            public /* synthetic */ Object invoke(Object obj2) {
                                return new Duration(m42invoke5sfh64U(((Number) obj2).longValue()));
                            }

                            /* renamed from: invoke-5sfh64U, reason: not valid java name */
                            public final long m42invoke5sfh64U(long j12) {
                                lr.a aVar4 = Duration.f13595e;
                                lr.d dVar = lr.d.f14210e;
                                long h6 = c.h(j12, dVar);
                                long g6 = Ref.LongRef.this.element == c.g(0, dVar) ? c.g(0, dVar) : Duration.i(h6, Duration.m(Ref.LongRef.this.element));
                                Ref.LongRef.this.element = h6;
                                return g6;
                            }
                        };
                        this.L$0 = coroutineScope;
                        this.L$1 = longRef;
                        this.L$2 = booleanRef;
                        this.label = i10;
                        L = ta.a.L(function1, this);
                        if (L == aVar) {
                            return aVar;
                        }
                        long j72 = ((Duration) L).f13598d;
                        l lVar3 = this.$isSettled$delegate;
                        l lVar22 = this.$surface$delegate;
                        CommandQueue commandQueue2 = this.$riveWorker;
                        long j102 = this.$stateMachineHandle;
                        long j112 = this.$artboardHandle;
                        Fit fit2 = this.$fit;
                        ko.a aVar32 = aVar;
                        int i112 = this.$backgroundColor;
                        Trace.beginSection("Rive/Frame");
                        Rive$lambda$1 = RiveKt.Rive$lambda$1(lVar3);
                        if (Rive$lambda$1) {
                        }
                        if (x.s(coroutineScope)) {
                            final long j12 = this.$artboardHandle;
                            final long j13 = this.$stateMachineHandle;
                            RiveLog.INSTANCE.getLogger().d("Rive/UI/Draw", new Function0<String>() { // from class: app.rive.RiveKt.Rive.7.4.3
                                /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
                                {
                                    super(0);
                                }

                                @Override // kotlin.jvm.functions.Function0
                                @NotNull
                                public final String invoke() {
                                    return e.l("Ending drawing with ", ArtboardHandle.m109toStringimpl(j12), " and ", StateMachineHandle.m225toStringimpl(j13));
                                }
                            });
                            return Unit.a;
                        }
                    }
                } catch (Throwable th2) {
                    throw th2;
                }
            }
        }

        @Override // kotlin.jvm.functions.Function2
        public final Object invoke(@NotNull CoroutineScope coroutineScope, Continuation continuation) {
            return ((AnonymousClass4) create(coroutineScope, continuation)).invokeSuspend(Unit.a);
        }
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public RiveKt$Rive$7(boolean z5, LifecycleOwner lifecycleOwner, l lVar, StateMachine stateMachine, CommandQueue commandQueue, long j, long j5, Fit fit, int i5, l lVar2, Continuation continuation) {
        super(2, continuation);
        this.$playing = z5;
        this.$lifecycleOwner = lifecycleOwner;
        this.$surface$delegate = lVar;
        this.$stateMachineToUse = stateMachine;
        this.$riveWorker = commandQueue;
        this.$artboardHandle = j;
        this.$stateMachineHandle = j5;
        this.$fit = fit;
        this.$backgroundColor = i5;
        this.$isSettled$delegate = lVar2;
    }

    @Override // lo.a
    @NotNull
    public final Continuation create(Object obj, @NotNull Continuation continuation) {
        RiveKt$Rive$7 riveKt$Rive$7 = new RiveKt$Rive$7(this.$playing, this.$lifecycleOwner, this.$surface$delegate, this.$stateMachineToUse, this.$riveWorker, this.$artboardHandle, this.$stateMachineHandle, this.$fit, this.$backgroundColor, this.$isSettled$delegate, continuation);
        riveKt$Rive$7.L$0 = obj;
        return riveKt$Rive$7;
    }

    /* JADX WARN: Finally extract failed */
    @Override // lo.a
    public final Object invokeSuspend(@NotNull Object obj) {
        RiveSurface Rive$lambda$4;
        RiveSurface Rive$lambda$42;
        ko.a aVar = ko.a.f13464d;
        int i5 = this.label;
        if (i5 == 0) {
            b.R(obj);
            Rive$lambda$4 = RiveKt.Rive$lambda$4(this.$surface$delegate);
            if (Rive$lambda$4 == null) {
                RiveLog.INSTANCE.getLogger().d("Rive/UI/Draw", new Function0<String>() { // from class: app.rive.RiveKt$Rive$7.1
                    @Override // kotlin.jvm.functions.Function0
                    @NotNull
                    public final String invoke() {
                        return "Surface is null, skipping drawing";
                    }
                });
                return Unit.a;
            }
            if (!this.$playing) {
                AnonymousClass2 anonymousClass2 = new Function0<String>() { // from class: app.rive.RiveKt$Rive$7.2
                    @Override // kotlin.jvm.functions.Function0
                    @NotNull
                    public final String invoke() {
                        return "Playing is false. Advancing by 0, drawing once, and skipping advancement loop.";
                    }
                };
                RiveLog riveLog = RiveLog.INSTANCE;
                riveLog.getLogger().d("Rive/UI/Draw", anonymousClass2);
                StateMachine stateMachine = this.$stateMachineToUse;
                l lVar = this.$surface$delegate;
                CommandQueue commandQueue = this.$riveWorker;
                long j = this.$artboardHandle;
                long j5 = this.$stateMachineHandle;
                Fit fit = this.$fit;
                int i6 = this.$backgroundColor;
                Trace.beginSection("Rive/Frame");
                try {
                    Trace.beginSection("Rive/Frame/Advance");
                    try {
                        lr.a aVar2 = Duration.f13595e;
                        stateMachine.m52advanceLRDsOJo(c.g(0, lr.d.f14210e));
                        Unit unit = Unit.a;
                        Trace.endSection();
                        Rive$lambda$42 = RiveKt.Rive$lambda$4(lVar);
                        if (Rive$lambda$42 == null) {
                            riveLog.getLogger().d("Rive/UI/Draw", new Function0<String>() { // from class: app.rive.RiveKt$Rive$7$3$drawSurface$1$1
                                @Override // kotlin.jvm.functions.Function0
                                @NotNull
                                public final String invoke() {
                                    return "Surface was released before draw, skipping frame";
                                }
                            });
                        } else {
                            Trace.beginSection("Rive/Frame/Draw");
                            try {
                                commandQueue.m142drawOcc3x_Y(j, j5, Rive$lambda$42, fit, i6);
                            } catch (Throwable th2) {
                                throw th2;
                            }
                        }
                        Trace.endSection();
                        return Unit.a;
                    } finally {
                        Trace.endSection();
                    }
                } catch (Throwable th3) {
                    throw th3;
                }
            }
            Lifecycle lifecycle = this.$lifecycleOwner.getLifecycle();
            Lifecycle.State state = Lifecycle.State.f2141w;
            AnonymousClass4 anonymousClass4 = new AnonymousClass4(this.$artboardHandle, this.$stateMachineHandle, this.$isSettled$delegate, this.$surface$delegate, this.$riveWorker, this.$fit, this.$backgroundColor, null);
            this.label = 1;
            if (k0.a(lifecycle, state, anonymousClass4, this) == aVar) {
                return aVar;
            }
        } else {
            if (i5 != 1) {
                throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
            }
            b.R(obj);
        }
        return Unit.a;
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(@NotNull CoroutineScope coroutineScope, Continuation continuation) {
        return ((RiveKt$Rive$7) create(coroutineScope, continuation)).invokeSuspend(Unit.a);
    }
}
