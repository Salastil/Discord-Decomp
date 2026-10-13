package app.rive;

import app.rive.core.CommandQueue;
import app.rive.core.ImageHandle;
import app.rive.core.ViewModelInstanceHandle;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.jvm.functions.Function3;
import kotlin.jvm.internal.FunctionReferenceImpl;
import kotlin.jvm.internal.Intrinsics;
import org.jetbrains.annotations.NotNull;

@Metadata(k = 3, mv = {1, 9, 0}, xi = 48)
/* loaded from: classes.dex */
public /* synthetic */ class ViewModelInstance$setImage$2 extends FunctionReferenceImpl implements Function3 {
    public ViewModelInstance$setImage$2(Object obj) {
        super(3, obj, CommandQueue.class, "setImageProperty", "setImageProperty-ugE2Goo(JLjava/lang/String;J)V", 0);
    }

    @Override // kotlin.jvm.functions.Function3
    public /* bridge */ /* synthetic */ Object invoke(Object obj, Object obj2, Object obj3) {
        m66invokeugE2Goo(((ViewModelInstanceHandle) obj).m235unboximpl(), (String) obj2, ((ImageHandle) obj3).m213unboximpl());
        return Unit.a;
    }

    /* renamed from: invoke-ugE2Goo, reason: not valid java name */
    public final void m66invokeugE2Goo(long j, @NotNull String p12, long j5) {
        Intrinsics.checkNotNullParameter(p12, "p1");
        ((CommandQueue) this.receiver).m175setImagePropertyugE2Goo(j, p12, j5);
    }
}
