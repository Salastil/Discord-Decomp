package app.rive;

import app.rive.core.CommandQueue;
import ki.b;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function1;
import lo.d;
import lo.h;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010 \n\u0002\u0010\u000e\u0010\u0000\u001a\b\u0012\u0004\u0012\u00020\u00020\u0001H\u008a@"}, d2 = {"<anonymous>", "", ""}, k = 3, mv = {1, 9, 0}, xi = 48)
@d(c = "app.rive.RiveFile$getViewModelInstanceNames$2$1$1", f = "RiveFile.kt", l = {118}, m = "invokeSuspend")
/* loaded from: classes.dex */
public final class RiveFile$getViewModelInstanceNames$2$1$1 extends h implements Function1<Continuation, Object> {
    final /* synthetic */ String $viewModel;
    int label;
    final /* synthetic */ RiveFile this$0;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public RiveFile$getViewModelInstanceNames$2$1$1(RiveFile riveFile, String str, Continuation continuation) {
        super(1, continuation);
        this.this$0 = riveFile;
        this.$viewModel = str;
    }

    @Override // lo.a
    @NotNull
    public final Continuation create(@NotNull Continuation continuation) {
        return new RiveFile$getViewModelInstanceNames$2$1$1(this.this$0, this.$viewModel, continuation);
    }

    @Override // lo.a
    public final Object invokeSuspend(@NotNull Object obj) {
        ko.a aVar = ko.a.f13464d;
        int i5 = this.label;
        if (i5 != 0) {
            if (i5 != 1) {
                throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
            }
            b.R(obj);
            return obj;
        }
        b.R(obj);
        CommandQueue riveWorker = this.this$0.getRiveWorker();
        long fileHandle = this.this$0.getFileHandle();
        String str = this.$viewModel;
        this.label = 1;
        Object m155getViewModelInstanceNamesmgMojzc = riveWorker.m155getViewModelInstanceNamesmgMojzc(fileHandle, str, this);
        return m155getViewModelInstanceNamesmgMojzc == aVar ? aVar : m155getViewModelInstanceNamesmgMojzc;
    }

    @Override // kotlin.jvm.functions.Function1
    public final Object invoke(Continuation continuation) {
        return ((RiveFile$getViewModelInstanceNames$2$1$1) create(continuation)).invokeSuspend(Unit.a);
    }
}
