package app.rive;

import a3.e;
import android.os.Trace;
import androidx.lifecycle.Lifecycle;
import androidx.lifecycle.k0;
import app.rive.core.ArtboardHandle;
import app.rive.core.CloseOnce;
import app.rive.core.FrameTicker;
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

@Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\u008a@"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {1, 9, 0}, xi = 48)
@d(c = "app.rive.RiveCanvasSession$beginPlaying$4$renderLoop$1", f = "RiveCanvasSession.kt", l = {394}, m = "invokeSuspend")
/* loaded from: classes.dex */
public final class RiveCanvasSession$beginPlaying$4$renderLoop$1 extends h implements Function2<CoroutineScope, Continuation, Object> {
    final /* synthetic */ Lifecycle $lifecycle;
    final /* synthetic */ FrameTicker $ticker;
    int label;
    final /* synthetic */ RiveCanvasSession this$0;

    @Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\u008a@"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {1, 9, 0}, xi = 48)
    @d(c = "app.rive.RiveCanvasSession$beginPlaying$4$renderLoop$1$1", f = "RiveCanvasSession.kt", l = {403}, m = "invokeSuspend")
    @SourceDebugExtension({"SMAP\nRiveCanvasSession.kt\nKotlin\n*S Kotlin\n*F\n+ 1 RiveCanvasSession.kt\napp/rive/RiveCanvasSession$beginPlaying$4$renderLoop$1$1\n+ 2 RiveLog.kt\napp/rive/RiveLog\n*L\n1#1,607:1\n57#2:608\n57#2:609\n*S KotlinDebug\n*F\n+ 1 RiveCanvasSession.kt\napp/rive/RiveCanvasSession$beginPlaying$4$renderLoop$1$1\n*L\n395#1:608\n448#1:609\n*E\n"})
    /* renamed from: app.rive.RiveCanvasSession$beginPlaying$4$renderLoop$1$1, reason: invalid class name */
    public static final class AnonymousClass1 extends h implements Function2<CoroutineScope, Continuation, Object> {
        final /* synthetic */ FrameTicker $ticker;
        private /* synthetic */ Object L$0;
        Object L$1;
        Object L$2;
        int label;
        final /* synthetic */ RiveCanvasSession this$0;

        /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
        public AnonymousClass1(RiveCanvasSession riveCanvasSession, FrameTicker frameTicker, Continuation continuation) {
            super(2, continuation);
            this.this$0 = riveCanvasSession;
            this.$ticker = frameTicker;
        }

        @Override // lo.a
        @NotNull
        public final Continuation create(Object obj, @NotNull Continuation continuation) {
            AnonymousClass1 anonymousClass1 = new AnonymousClass1(this.this$0, this.$ticker, continuation);
            anonymousClass1.L$0 = obj;
            return anonymousClass1;
        }

        @Override // lo.a
        public final Object invokeSuspend(@NotNull Object obj) {
            final Ref.LongRef longRef;
            final Ref.BooleanRef booleanRef;
            CoroutineScope coroutineScope;
            CloseOnce closeOnce;
            ko.a aVar = ko.a.f13464d;
            int i5 = this.label;
            if (i5 == 0) {
                b.R(obj);
                CoroutineScope coroutineScope2 = (CoroutineScope) this.L$0;
                final RiveCanvasSession riveCanvasSession = this.this$0;
                RiveLog.INSTANCE.getLogger().d("Rive/CanvasSession", new Function0<String>() { // from class: app.rive.RiveCanvasSession.beginPlaying.4.renderLoop.1.1.1
                    {
                        super(0);
                    }

                    @Override // kotlin.jvm.functions.Function0
                    @NotNull
                    public final String invoke() {
                        return e.l("Starting drawing with ", ArtboardHandle.m109toStringimpl(RiveCanvasSession.this.artboard.getArtboardHandle()), " and ", StateMachineHandle.m225toStringimpl(RiveCanvasSession.this.stateMachine.getStateMachineHandle()));
                    }
                });
                longRef = new Ref.LongRef();
                booleanRef = new Ref.BooleanRef();
                coroutineScope = coroutineScope2;
            } else {
                if (i5 != 1) {
                    throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                }
                booleanRef = (Ref.BooleanRef) this.L$2;
                longRef = (Ref.LongRef) this.L$1;
                coroutineScope = (CoroutineScope) this.L$0;
                b.R(obj);
            }
            while (x.s(coroutineScope)) {
                closeOnce = this.this$0.closer;
                if (closeOnce.getClosed()) {
                    break;
                }
                FrameTicker frameTicker = this.$ticker;
                final RiveCanvasSession riveCanvasSession2 = this.this$0;
                Function1<Long, Unit> function1 = new Function1<Long, Unit>() { // from class: app.rive.RiveCanvasSession.beginPlaying.4.renderLoop.1.1.2
                    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
                    {
                        super(1);
                    }

                    @Override // kotlin.jvm.functions.Function1
                    public /* bridge */ /* synthetic */ Object invoke(Object obj2) {
                        invoke(((Number) obj2).longValue());
                        return Unit.a;
                    }

                    public final void invoke(long j) {
                        CloseOnce closeOnce2;
                        HardwareRenderBuffer hardwareRenderBuffer;
                        boolean z5;
                        Fit fit;
                        int i6;
                        closeOnce2 = RiveCanvasSession.this.closer;
                        if (closeOnce2.getClosed()) {
                            return;
                        }
                        Ref.LongRef longRef2 = longRef;
                        long j5 = longRef2.element;
                        long j7 = j5 != 0 ? j - j5 : 0L;
                        longRef2.element = j;
                        RiveCanvasSession riveCanvasSession3 = RiveCanvasSession.this;
                        Ref.BooleanRef booleanRef2 = booleanRef;
                        Trace.beginSection("Rive/Frame");
                        try {
                            hardwareRenderBuffer = riveCanvasSession3.renderBuffer;
                            if (hardwareRenderBuffer == null) {
                                if (!booleanRef2.element) {
                                    RiveLog.INSTANCE.getLogger().w("Rive/CanvasSession", new Function0<String>() { // from class: app.rive.RiveCanvasSession$beginPlaying$4$renderLoop$1$1$2$1$1
                                        @Override // kotlin.jvm.functions.Function0
                                        @NotNull
                                        public final String invoke() {
                                            return "No render buffer available; call setRegion(...) with a valid size before beginPlaying.";
                                        }
                                    });
                                    booleanRef2.element = true;
                                }
                                Trace.beginSection("Rive/Frame/NoBuffer");
                                try {
                                    Unit unit = Unit.a;
                                    Trace.endSection();
                                    Unit unit2 = Unit.a;
                                } finally {
                                }
                            }
                            booleanRef2.element = false;
                            z5 = riveCanvasSession3.settled;
                            if (!z5) {
                                Trace.beginSection("Rive/Frame/Advance");
                                try {
                                    StateMachine stateMachine = riveCanvasSession3.stateMachine;
                                    lr.a aVar2 = Duration.f13595e;
                                    stateMachine.m52advanceLRDsOJo(c.h(j7, lr.d.f14210e));
                                    Unit unit3 = Unit.a;
                                    Trace.endSection();
                                    Trace.beginSection("Rive/Frame/Draw");
                                    try {
                                        Artboard artboard = riveCanvasSession3.artboard;
                                        StateMachine stateMachine2 = riveCanvasSession3.stateMachine;
                                        fit = riveCanvasSession3.fit;
                                        i6 = riveCanvasSession3.clearColor;
                                        hardwareRenderBuffer.render(artboard, stateMachine2, fit, i6);
                                        Trace.endSection();
                                    } finally {
                                    }
                                } finally {
                                }
                            }
                            Unit unit22 = Unit.a;
                        } catch (Throwable th2) {
                            throw th2;
                        }
                    }
                };
                this.L$0 = coroutineScope;
                this.L$1 = longRef;
                this.L$2 = booleanRef;
                this.label = 1;
                if (frameTicker.withFrame(function1, this) == aVar) {
                    return aVar;
                }
            }
            final RiveCanvasSession riveCanvasSession3 = this.this$0;
            RiveLog.INSTANCE.getLogger().d("Rive/CanvasSession", new Function0<String>() { // from class: app.rive.RiveCanvasSession.beginPlaying.4.renderLoop.1.1.3
                {
                    super(0);
                }

                @Override // kotlin.jvm.functions.Function0
                @NotNull
                public final String invoke() {
                    return e.l("Ending drawing with ", ArtboardHandle.m109toStringimpl(RiveCanvasSession.this.artboard.getArtboardHandle()), " and ", StateMachineHandle.m225toStringimpl(RiveCanvasSession.this.stateMachine.getStateMachineHandle()));
                }
            });
            return Unit.a;
        }

        @Override // kotlin.jvm.functions.Function2
        public final Object invoke(@NotNull CoroutineScope coroutineScope, Continuation continuation) {
            return ((AnonymousClass1) create(coroutineScope, continuation)).invokeSuspend(Unit.a);
        }
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public RiveCanvasSession$beginPlaying$4$renderLoop$1(Lifecycle lifecycle, RiveCanvasSession riveCanvasSession, FrameTicker frameTicker, Continuation continuation) {
        super(2, continuation);
        this.$lifecycle = lifecycle;
        this.this$0 = riveCanvasSession;
        this.$ticker = frameTicker;
    }

    @Override // lo.a
    @NotNull
    public final Continuation create(Object obj, @NotNull Continuation continuation) {
        return new RiveCanvasSession$beginPlaying$4$renderLoop$1(this.$lifecycle, this.this$0, this.$ticker, continuation);
    }

    @Override // lo.a
    public final Object invokeSuspend(@NotNull Object obj) {
        ko.a aVar = ko.a.f13464d;
        int i5 = this.label;
        if (i5 == 0) {
            b.R(obj);
            Lifecycle lifecycle = this.$lifecycle;
            Lifecycle.State state = Lifecycle.State.f2141w;
            AnonymousClass1 anonymousClass1 = new AnonymousClass1(this.this$0, this.$ticker, null);
            this.label = 1;
            if (k0.a(lifecycle, state, anonymousClass1, this) == aVar) {
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
        return ((RiveCanvasSession$beginPlaying$4$renderLoop$1) create(coroutineScope, continuation)).invokeSuspend(Unit.a);
    }
}
