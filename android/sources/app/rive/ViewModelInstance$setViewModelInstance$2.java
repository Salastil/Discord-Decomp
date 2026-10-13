package app.rive;

import app.rive.core.CommandQueue;
import app.rive.core.ViewModelInstanceHandle;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.jvm.functions.Function3;
import kotlin.jvm.internal.FunctionReferenceImpl;
import kotlin.jvm.internal.Intrinsics;
import org.jetbrains.annotations.NotNull;

@Metadata(k = 3, mv = {1, 9, 0}, xi = 48)
/* loaded from: classes.dex */
public /* synthetic */ class ViewModelInstance$setViewModelInstance$2 extends FunctionReferenceImpl implements Function3 {
    public ViewModelInstance$setViewModelInstance$2(Object obj) {
        super(3, obj, CommandQueue.class, "setViewModelInstanceProperty", "setViewModelInstanceProperty-Y8k3COA(JLjava/lang/String;J)V", 0);
    }

    @Override // kotlin.jvm.functions.Function3
    public /* bridge */ /* synthetic */ Object invoke(Object obj, Object obj2, Object obj3) {
        m69invokeY8k3COA(((ViewModelInstanceHandle) obj).m235unboximpl(), (String) obj2, ((ViewModelInstanceHandle) obj3).m235unboximpl());
        return Unit.a;
    }

    /* renamed from: invoke-Y8k3COA, reason: not valid java name */
    public final void m69invokeY8k3COA(long j, @NotNull String p12, long j5) {
        Intrinsics.checkNotNullParameter(p12, "p1");
        ((CommandQueue) this.receiver).m178setViewModelInstancePropertyY8k3COA(j, p12, j5);
    }
}
