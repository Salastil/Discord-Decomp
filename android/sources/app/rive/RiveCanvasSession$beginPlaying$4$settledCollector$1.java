package app.rive;

import app.rive.core.CommandQueue;
import app.rive.core.StateMachineHandle;
import ki.b;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.SourceDebugExtension;
import kotlinx.coroutines.CoroutineScope;
import kotlinx.coroutines.flow.Flow;
import kotlinx.coroutines.flow.FlowCollector;
import lo.c;
import lo.d;
import lo.h;
import org.jetbrains.annotations.NotNull;
import qr.u;

@Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\u008a@"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {1, 9, 0}, xi = 48)
@d(c = "app.rive.RiveCanvasSession$beginPlaying$4$settledCollector$1", f = "RiveCanvasSession.kt", l = {348}, m = "invokeSuspend")
@SourceDebugExtension({"SMAP\nRiveCanvasSession.kt\nKotlin\n*S Kotlin\n*F\n+ 1 RiveCanvasSession.kt\napp/rive/RiveCanvasSession$beginPlaying$4$settledCollector$1\n+ 2 Transform.kt\nkotlinx/coroutines/flow/FlowKt__TransformKt\n+ 3 Emitters.kt\nkotlinx/coroutines/flow/FlowKt__EmittersKt\n+ 4 SafeCollector.common.kt\nkotlinx/coroutines/flow/internal/SafeCollector_commonKt\n*L\n1#1,607:1\n17#2:608\n19#2:612\n46#3:609\n51#3:611\n105#4:610\n*S KotlinDebug\n*F\n+ 1 RiveCanvasSession.kt\napp/rive/RiveCanvasSession$beginPlaying$4$settledCollector$1\n*L\n347#1:608\n347#1:612\n347#1:609\n347#1:611\n347#1:610\n*E\n"})
/* loaded from: classes.dex */
public final class RiveCanvasSession$beginPlaying$4$settledCollector$1 extends h implements Function2<CoroutineScope, Continuation, Object> {
    int label;
    final /* synthetic */ RiveCanvasSession this$0;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public RiveCanvasSession$beginPlaying$4$settledCollector$1(RiveCanvasSession riveCanvasSession, Continuation continuation) {
        super(2, continuation);
        this.this$0 = riveCanvasSession;
    }

    @Override // lo.a
    @NotNull
    public final Continuation create(Object obj, @NotNull Continuation continuation) {
        return new RiveCanvasSession$beginPlaying$4$settledCollector$1(this.this$0, continuation);
    }

    @Override // lo.a
    public final Object invokeSuspend(@NotNull Object obj) {
        CommandQueue commandQueue;
        ko.a aVar = ko.a.f13464d;
        int i5 = this.label;
        if (i5 == 0) {
            b.R(obj);
            commandQueue = this.this$0.riveWorker;
            final u settledFlow = commandQueue.getSettledFlow();
            final RiveCanvasSession riveCanvasSession = this.this$0;
            Flow flow = new Flow() { // from class: app.rive.RiveCanvasSession$beginPlaying$4$settledCollector$1$invokeSuspend$$inlined$filter$1

                @Metadata(d1 = {"\u0000\f\n\u0002\b\u0003\n\u0002\u0010\u0002\n\u0002\b\u0003\u0010\u0006\u001a\u00020\u0003\"\u0004\b\u0000\u0010\u0000\"\u0004\b\u0001\u0010\u00012\u0006\u0010\u0002\u001a\u00028\u0000H\u008a@¢\u0006\u0004\b\u0004\u0010\u0005"}, d2 = {"T", "R", "value", "", "emit", "(Ljava/lang/Object;Lkotlin/coroutines/Continuation;)Ljava/lang/Object;", "<anonymous>"}, k = 3, mv = {1, 9, 0})
                @SourceDebugExtension({"SMAP\nEmitters.kt\nKotlin\n*S Kotlin\n*F\n+ 1 Emitters.kt\nkotlinx/coroutines/flow/FlowKt__EmittersKt$unsafeTransform$1$1\n+ 2 Transform.kt\nkotlinx/coroutines/flow/FlowKt__TransformKt\n+ 3 RiveCanvasSession.kt\napp/rive/RiveCanvasSession$beginPlaying$4$settledCollector$1\n*L\n1#1,218:1\n18#2:219\n19#2:221\n347#3:220\n*E\n"})
                /* renamed from: app.rive.RiveCanvasSession$beginPlaying$4$settledCollector$1$invokeSuspend$$inlined$filter$1$2, reason: invalid class name */
                public static final class AnonymousClass2<T> implements FlowCollector {
                    final /* synthetic */ FlowCollector $this_unsafeFlow;
                    final /* synthetic */ RiveCanvasSession this$0;

                    @Metadata(k = 3, mv = {1, 9, 0}, xi = 48)
                    @d(c = "app.rive.RiveCanvasSession$beginPlaying$4$settledCollector$1$invokeSuspend$$inlined$filter$1$2", f = "RiveCanvasSession.kt", l = {219}, m = "emit")
                    @SourceDebugExtension({"SMAP\nEmitters.kt\nKotlin\n*S Kotlin\n*F\n+ 1 Emitters.kt\nkotlinx/coroutines/flow/FlowKt__EmittersKt$unsafeTransform$1$1$emit$1\n*L\n1#1,218:1\n*E\n"})
                    /* renamed from: app.rive.RiveCanvasSession$beginPlaying$4$settledCollector$1$invokeSuspend$$inlined$filter$1$2$1, reason: invalid class name */
                    public static final class AnonymousClass1 extends c {
                        Object L$0;
                        Object L$1;
                        int label;
                        /* synthetic */ Object result;

                        public AnonymousClass1(Continuation continuation) {
                            super(continuation);
                        }

                        @Override // lo.a
                        public final Object invokeSuspend(@NotNull Object obj) {
                            this.result = obj;
                            this.label |= Integer.MIN_VALUE;
                            return AnonymousClass2.this.emit(null, this);
                        }
                    }

                    public AnonymousClass2(FlowCollector flowCollector, RiveCanvasSession riveCanvasSession) {
                        this.$this_unsafeFlow = flowCollector;
                        this.this$0 = riveCanvasSession;
                    }

                    /* JADX WARN: Removed duplicated region for block: B:15:0x002f  */
                    /* JADX WARN: Removed duplicated region for block: B:8:0x0021  */
                    @Override // kotlinx.coroutines.flow.FlowCollector
                    /*
                        Code decompiled incorrectly, please refer to instructions dump.
                    */
                    public final Object emit(Object obj, @NotNull Continuation continuation) {
                        AnonymousClass1 anonymousClass1;
                        int i5;
                        if (continuation instanceof AnonymousClass1) {
                            anonymousClass1 = (AnonymousClass1) continuation;
                            int i6 = anonymousClass1.label;
                            if ((i6 & Integer.MIN_VALUE) != 0) {
                                anonymousClass1.label = i6 - Integer.MIN_VALUE;
                                Object obj2 = anonymousClass1.result;
                                ko.a aVar = ko.a.f13464d;
                                i5 = anonymousClass1.label;
                                if (i5 != 0) {
                                    b.R(obj2);
                                    FlowCollector flowCollector = this.$this_unsafeFlow;
                                    if (((StateMachineHandle) obj).m226unboximpl() == this.this$0.stateMachine.getStateMachineHandle()) {
                                        anonymousClass1.label = 1;
                                        if (flowCollector.emit(obj, anonymousClass1) == aVar) {
                                            return aVar;
                                        }
                                    }
                                } else {
                                    if (i5 != 1) {
                                        throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                                    }
                                    b.R(obj2);
                                }
                                return Unit.a;
                            }
                        }
                        anonymousClass1 = new AnonymousClass1(continuation);
                        Object obj22 = anonymousClass1.result;
                        ko.a aVar2 = ko.a.f13464d;
                        i5 = anonymousClass1.label;
                        if (i5 != 0) {
                        }
                        return Unit.a;
                    }
                }

                @Override // kotlinx.coroutines.flow.Flow
                public Object collect(@NotNull FlowCollector flowCollector, @NotNull Continuation continuation) {
                    Object collect = Flow.this.collect(new AnonymousClass2(flowCollector, riveCanvasSession), continuation);
                    return collect == ko.a.f13464d ? collect : Unit.a;
                }
            };
            final RiveCanvasSession riveCanvasSession2 = this.this$0;
            FlowCollector flowCollector = new FlowCollector() { // from class: app.rive.RiveCanvasSession$beginPlaying$4$settledCollector$1.2
                @Override // kotlinx.coroutines.flow.FlowCollector
                public /* bridge */ /* synthetic */ Object emit(Object obj2, Continuation continuation) {
                    return m25emitOFH3VyA(((StateMachineHandle) obj2).m226unboximpl(), continuation);
                }

                /* renamed from: emit-OFH3VyA, reason: not valid java name */
                public final Object m25emitOFH3VyA(long j, @NotNull Continuation continuation) {
                    final RiveCanvasSession riveCanvasSession3 = RiveCanvasSession.this;
                    RiveLog.INSTANCE.getLogger().v("Rive/CanvasSession", new Function0<String>() { // from class: app.rive.RiveCanvasSession.beginPlaying.4.settledCollector.1.2.1
                        {
                            super(0);
                        }

                        @Override // kotlin.jvm.functions.Function0
                        @NotNull
                        public final String invoke() {
                            return s4.h.f("State machine ", StateMachineHandle.m225toStringimpl(RiveCanvasSession.this.stateMachine.getStateMachineHandle()), " is settled");
                        }
                    });
                    RiveCanvasSession.this.settled = true;
                    return Unit.a;
                }
            };
            this.label = 1;
            if (flow.collect(flowCollector, this) == aVar) {
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
        return ((RiveCanvasSession$beginPlaying$4$settledCollector$1) create(coroutineScope, continuation)).invokeSuspend(Unit.a);
    }
}
