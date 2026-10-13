package app.rive;

import app.rive.core.CommandQueue;
import app.rive.runtime.kotlin.core.ViewModel;
import ki.b;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function2;
import kotlinx.coroutines.flow.FlowCollector;
import lo.d;
import lo.h;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u0000\u000e\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u000e\u0012\n\u0012\b\u0012\u0004\u0012\u00020\u00010\u00030\u0002H\u008a@"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/flow/FlowCollector;", "Lapp/rive/core/CommandQueue$PropertyUpdate;"}, k = 3, mv = {1, 9, 0}, xi = 48)
@d(c = "app.rive.ViewModelInstance$getTriggerFlow$1$1", f = "ViewModelInstance.kt", l = {}, m = "invokeSuspend")
/* loaded from: classes.dex */
public final class ViewModelInstance$getTriggerFlow$1$1 extends h implements Function2<FlowCollector, Continuation, Object> {
    final /* synthetic */ String $propertyPath;
    int label;
    final /* synthetic */ ViewModelInstance this$0;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public ViewModelInstance$getTriggerFlow$1$1(ViewModelInstance viewModelInstance, String str, Continuation continuation) {
        super(2, continuation);
        this.this$0 = viewModelInstance;
        this.$propertyPath = str;
    }

    @Override // lo.a
    @NotNull
    public final Continuation create(Object obj, @NotNull Continuation continuation) {
        return new ViewModelInstance$getTriggerFlow$1$1(this.this$0, this.$propertyPath, continuation);
    }

    @Override // lo.a
    public final Object invokeSuspend(@NotNull Object obj) {
        CommandQueue commandQueue;
        ko.a aVar = ko.a.f13464d;
        if (this.label != 0) {
            throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
        }
        b.R(obj);
        commandQueue = this.this$0.riveWorker;
        commandQueue.m179subscribeToPropertyiFQtAB8(this.this$0.getInstanceHandle(), this.$propertyPath, ViewModel.PropertyDataType.TRIGGER);
        return Unit.a;
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(@NotNull FlowCollector flowCollector, Continuation continuation) {
        return ((ViewModelInstance$getTriggerFlow$1$1) create(flowCollector, continuation)).invokeSuspend(Unit.a);
    }
}
