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
@d(c = "app.rive.Artboard$stateMachineNamesCache$1", f = "Artboard.kt", l = {74}, m = "invokeSuspend")
/* loaded from: classes.dex */
public final class Artboard$stateMachineNamesCache$1 extends h implements Function1<Continuation, Object> {
    int label;
    final /* synthetic */ Artboard this$0;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public Artboard$stateMachineNamesCache$1(Artboard artboard, Continuation continuation) {
        super(1, continuation);
        this.this$0 = artboard;
    }

    @Override // lo.a
    @NotNull
    public final Continuation create(@NotNull Continuation continuation) {
        return new Artboard$stateMachineNamesCache$1(this.this$0, continuation);
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
        long artboardHandle = this.this$0.getArtboardHandle();
        this.label = 1;
        Object m153getStateMachineNamesb88yb0A = riveWorker.m153getStateMachineNamesb88yb0A(artboardHandle, this);
        return m153getStateMachineNamesb88yb0A == aVar ? aVar : m153getStateMachineNamesb88yb0A;
    }

    @Override // kotlin.jvm.functions.Function1
    public final Object invoke(Continuation continuation) {
        return ((Artboard$stateMachineNamesCache$1) create(continuation)).invokeSuspend(Unit.a);
    }
}
