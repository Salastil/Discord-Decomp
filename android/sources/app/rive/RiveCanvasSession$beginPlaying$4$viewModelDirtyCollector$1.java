package app.rive;

import a3.e;
import app.rive.core.StateMachineHandle;
import ki.b;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.functions.Function2;
import kotlinx.coroutines.CoroutineScope;
import kotlinx.coroutines.flow.FlowCollector;
import lo.d;
import lo.h;
import org.jetbrains.annotations.NotNull;
import qr.u;

@Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\u008a@"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {1, 9, 0}, xi = 48)
@d(c = "app.rive.RiveCanvasSession$beginPlaying$4$viewModelDirtyCollector$1", f = "RiveCanvasSession.kt", l = {360}, m = "invokeSuspend")
/* loaded from: classes.dex */
public final class RiveCanvasSession$beginPlaying$4$viewModelDirtyCollector$1 extends h implements Function2<CoroutineScope, Continuation, Object> {
    int label;
    final /* synthetic */ RiveCanvasSession this$0;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public RiveCanvasSession$beginPlaying$4$viewModelDirtyCollector$1(RiveCanvasSession riveCanvasSession, Continuation continuation) {
        super(2, continuation);
        this.this$0 = riveCanvasSession;
    }

    @Override // lo.a
    @NotNull
    public final Continuation create(Object obj, @NotNull Continuation continuation) {
        return new RiveCanvasSession$beginPlaying$4$viewModelDirtyCollector$1(this.this$0, continuation);
    }

    @Override // lo.a
    public final Object invokeSuspend(@NotNull Object obj) {
        ViewModelInstance viewModelInstance;
        ko.a aVar = ko.a.f13464d;
        int i5 = this.label;
        if (i5 == 0) {
            b.R(obj);
            viewModelInstance = this.this$0.viewModelInstance;
            u dirtyFlow = viewModelInstance.getDirtyFlow();
            final RiveCanvasSession riveCanvasSession = this.this$0;
            FlowCollector flowCollector = new FlowCollector() { // from class: app.rive.RiveCanvasSession$beginPlaying$4$viewModelDirtyCollector$1.1
                @Override // kotlinx.coroutines.flow.FlowCollector
                public final Object emit(@NotNull Unit unit, @NotNull Continuation continuation) {
                    final RiveCanvasSession riveCanvasSession2 = RiveCanvasSession.this;
                    RiveLog.INSTANCE.getLogger().v("Rive/CanvasSession", new Function0<String>() { // from class: app.rive.RiveCanvasSession.beginPlaying.4.viewModelDirtyCollector.1.1.1
                        {
                            super(0);
                        }

                        @Override // kotlin.jvm.functions.Function0
                        @NotNull
                        public final String invoke() {
                            return e.k("View model instance dirty, unsettling ", StateMachineHandle.m225toStringimpl(RiveCanvasSession.this.stateMachine.getStateMachineHandle()));
                        }
                    });
                    RiveCanvasSession.this.settled = false;
                    return Unit.a;
                }
            };
            this.label = 1;
            if (dirtyFlow.collect(flowCollector, this) == aVar) {
                return aVar;
            }
        } else {
            if (i5 != 1) {
                throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
            }
            b.R(obj);
        }
        throw new fo.h();
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(@NotNull CoroutineScope coroutineScope, Continuation continuation) {
        return ((RiveCanvasSession$beginPlaying$4$viewModelDirtyCollector$1) create(coroutineScope, continuation)).invokeSuspend(Unit.a);
    }
}
