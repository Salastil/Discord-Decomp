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

@Metadata(d1 = {"\u0000\u0006\n\u0000\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001H\u008a@"}, d2 = {"<anonymous>", "Lapp/rive/core/DefaultViewModelInfo;"}, k = 3, mv = {1, 9, 0}, xi = 48)
@d(c = "app.rive.RiveFile$getDefaultViewModelInfo$2$1$1", f = "RiveFile.kt", l = {158}, m = "invokeSuspend")
/* loaded from: classes.dex */
public final class RiveFile$getDefaultViewModelInfo$2$1$1 extends h implements Function1<Continuation, Object> {
    final /* synthetic */ Artboard $artboard;
    int label;
    final /* synthetic */ RiveFile this$0;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public RiveFile$getDefaultViewModelInfo$2$1$1(RiveFile riveFile, Artboard artboard, Continuation continuation) {
        super(1, continuation);
        this.this$0 = riveFile;
        this.$artboard = artboard;
    }

    @Override // lo.a
    @NotNull
    public final Continuation create(@NotNull Continuation continuation) {
        return new RiveFile$getDefaultViewModelInfo$2$1$1(this.this$0, this.$artboard, continuation);
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
        long artboardHandle = this.$artboard.getArtboardHandle();
        this.label = 1;
        Object m148getDefaultViewModelInfotl3utA8 = riveWorker.m148getDefaultViewModelInfotl3utA8(fileHandle, artboardHandle, this);
        return m148getDefaultViewModelInfotl3utA8 == aVar ? aVar : m148getDefaultViewModelInfotl3utA8;
    }

    @Override // kotlin.jvm.functions.Function1
    public final Object invoke(Continuation continuation) {
        return ((RiveFile$getDefaultViewModelInfo$2$1$1) create(continuation)).invokeSuspend(Unit.a);
    }
}
