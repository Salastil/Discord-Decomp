package app.rive;

import app.rive.core.CommandQueue;
import ki.b;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function2;
import kotlinx.coroutines.CoroutineScope;
import lo.d;
import lo.h;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\u008a@"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {1, 9, 0}, xi = 48)
@d(c = "app.rive.RememberRiveWorkerKt$rememberRiveWorkerOrNull$1", f = "rememberRiveWorker.kt", l = {}, m = "invokeSuspend")
/* loaded from: classes.dex */
public final class RememberRiveWorkerKt$rememberRiveWorkerOrNull$1 extends h implements Function2<CoroutineScope, Continuation, Object> {
    final /* synthetic */ boolean $tracingEnabled;
    final /* synthetic */ CommandQueue $worker;
    int label;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public RememberRiveWorkerKt$rememberRiveWorkerOrNull$1(CommandQueue commandQueue, boolean z5, Continuation continuation) {
        super(2, continuation);
        this.$worker = commandQueue;
        this.$tracingEnabled = z5;
    }

    @Override // lo.a
    @NotNull
    public final Continuation create(Object obj, @NotNull Continuation continuation) {
        return new RememberRiveWorkerKt$rememberRiveWorkerOrNull$1(this.$worker, this.$tracingEnabled, continuation);
    }

    @Override // lo.a
    public final Object invokeSuspend(@NotNull Object obj) {
        ko.a aVar = ko.a.f13464d;
        if (this.label != 0) {
            throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
        }
        b.R(obj);
        CommandQueue commandQueue = this.$worker;
        if (commandQueue == null) {
            return Unit.a;
        }
        commandQueue.setTracingEnabled(this.$tracingEnabled);
        return Unit.a;
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(@NotNull CoroutineScope coroutineScope, Continuation continuation) {
        return ((RememberRiveWorkerKt$rememberRiveWorkerOrNull$1) create(coroutineScope, continuation)).invokeSuspend(Unit.a);
    }
}
