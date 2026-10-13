package app.rive;

import ki.b;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function2;
import kotlinx.coroutines.CompletableDeferred;
import kotlinx.coroutines.CoroutineScope;
import kotlinx.coroutines.Job;
import lo.d;
import lo.h;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\u008a@"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {1, 9, 0}, xi = 48)
@d(c = "app.rive.RiveCanvasSession$beginPlaying$4$closeWatcher$1", f = "RiveCanvasSession.kt", l = {457}, m = "invokeSuspend")
/* loaded from: classes.dex */
public final class RiveCanvasSession$beginPlaying$4$closeWatcher$1 extends h implements Function2<CoroutineScope, Continuation, Object> {
    final /* synthetic */ Job $renderLoop;
    int label;
    final /* synthetic */ RiveCanvasSession this$0;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public RiveCanvasSession$beginPlaying$4$closeWatcher$1(RiveCanvasSession riveCanvasSession, Job job, Continuation continuation) {
        super(2, continuation);
        this.this$0 = riveCanvasSession;
        this.$renderLoop = job;
    }

    @Override // lo.a
    @NotNull
    public final Continuation create(Object obj, @NotNull Continuation continuation) {
        return new RiveCanvasSession$beginPlaying$4$closeWatcher$1(this.this$0, this.$renderLoop, continuation);
    }

    @Override // lo.a
    public final Object invokeSuspend(@NotNull Object obj) {
        CompletableDeferred completableDeferred;
        ko.a aVar = ko.a.f13464d;
        int i5 = this.label;
        if (i5 == 0) {
            b.R(obj);
            completableDeferred = this.this$0.closeSignal;
            this.label = 1;
            if (completableDeferred.A(this) == aVar) {
                return aVar;
            }
        } else {
            if (i5 != 1) {
                throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
            }
            b.R(obj);
        }
        this.$renderLoop.f(null);
        return Unit.a;
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(@NotNull CoroutineScope coroutineScope, Continuation continuation) {
        return ((RiveCanvasSession$beginPlaying$4$closeWatcher$1) create(coroutineScope, continuation)).invokeSuspend(Unit.a);
    }
}
