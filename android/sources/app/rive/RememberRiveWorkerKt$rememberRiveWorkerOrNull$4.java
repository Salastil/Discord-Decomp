package app.rive;

import app.rive.core.CommandQueue;
import kotlin.Metadata;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.Lambda;
import kotlin.jvm.internal.SourceDebugExtension;
import org.jetbrains.annotations.NotNull;
import u.f;
import u.g;

@Metadata(d1 = {"\u0000\f\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\u0010\u0004\u001a\u00020\u0001*\u00020\u0000H\n¢\u0006\u0004\b\u0002\u0010\u0003"}, d2 = {"Lu/g;", "Lu/f;", "invoke", "(Lu/g;)Lu/f;", "<anonymous>"}, k = 3, mv = {1, 9, 0})
@SourceDebugExtension({"SMAP\nrememberRiveWorker.kt\nKotlin\n*S Kotlin\n*F\n+ 1 rememberRiveWorker.kt\napp/rive/RememberRiveWorkerKt$rememberRiveWorkerOrNull$4\n+ 2 Effects.kt\nandroidx/compose/runtime/DisposableEffectScope\n*L\n1#1,137:1\n66#2,5:138\n66#2,5:143\n*S KotlinDebug\n*F\n+ 1 rememberRiveWorker.kt\napp/rive/RememberRiveWorkerKt$rememberRiveWorkerOrNull$4\n*L\n128#1:138,5\n130#1:143,5\n*E\n"})
/* loaded from: classes.dex */
public final class RememberRiveWorkerKt$rememberRiveWorkerOrNull$4 extends Lambda implements Function1<g, f> {
    final /* synthetic */ CommandQueue $worker;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public RememberRiveWorkerKt$rememberRiveWorkerOrNull$4(CommandQueue commandQueue) {
        super(1);
        this.$worker = commandQueue;
    }

    @Override // kotlin.jvm.functions.Function1
    @NotNull
    public final f invoke(@NotNull g DisposableEffect) {
        Intrinsics.checkNotNullParameter(DisposableEffect, "$this$DisposableEffect");
        final CommandQueue commandQueue = this.$worker;
        return commandQueue == null ? new f() { // from class: app.rive.RememberRiveWorkerKt$rememberRiveWorkerOrNull$4$invoke$$inlined$onDispose$1
            public void dispose() {
            }
        } : new f() { // from class: app.rive.RememberRiveWorkerKt$rememberRiveWorkerOrNull$4$invoke$$inlined$onDispose$2
            public void dispose() {
                CommandQueue.this.release(RememberRiveWorkerKt.RIVE_WORKER_TAG, "Compose dispose");
            }
        };
    }
}
