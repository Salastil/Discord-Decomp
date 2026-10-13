package app.rive;

import androidx.lifecycle.Lifecycle;
import androidx.lifecycle.LifecycleOwner;
import app.rive.core.CommandQueue;
import app.rive.core.FrameTicker;
import app.rive.core.FrameTickerKt;
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
@d(c = "app.rive.RememberRiveWorkerKt$rememberRiveWorkerOrNull$2", f = "rememberRiveWorker.kt", l = {104}, m = "invokeSuspend")
/* loaded from: classes.dex */
public final class RememberRiveWorkerKt$rememberRiveWorkerOrNull$2 extends h implements Function2<CoroutineScope, Continuation, Object> {
    final /* synthetic */ boolean $autoPoll;
    final /* synthetic */ LifecycleOwner $lifecycleOwner;
    final /* synthetic */ CommandQueue $worker;
    int label;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public RememberRiveWorkerKt$rememberRiveWorkerOrNull$2(CommandQueue commandQueue, boolean z5, LifecycleOwner lifecycleOwner, Continuation continuation) {
        super(2, continuation);
        this.$worker = commandQueue;
        this.$autoPoll = z5;
        this.$lifecycleOwner = lifecycleOwner;
    }

    @Override // lo.a
    @NotNull
    public final Continuation create(Object obj, @NotNull Continuation continuation) {
        return new RememberRiveWorkerKt$rememberRiveWorkerOrNull$2(this.$worker, this.$autoPoll, this.$lifecycleOwner, continuation);
    }

    @Override // lo.a
    public final Object invokeSuspend(@NotNull Object obj) {
        ko.a aVar = ko.a.f13464d;
        int i5 = this.label;
        if (i5 == 0) {
            b.R(obj);
            CommandQueue commandQueue = this.$worker;
            if (commandQueue == null || !this.$autoPoll) {
                return Unit.a;
            }
            Lifecycle lifecycle = this.$lifecycleOwner.getLifecycle();
            FrameTicker composeFrameTicker = FrameTickerKt.getComposeFrameTicker();
            this.label = 1;
            if (commandQueue.beginPolling(lifecycle, composeFrameTicker, this) == aVar) {
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
        return ((RememberRiveWorkerKt$rememberRiveWorkerOrNull$2) create(coroutineScope, continuation)).invokeSuspend(Unit.a);
    }
}
