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
public /* synthetic */ class ViewModelInstance$setColor$1 extends FunctionReferenceImpl implements Function3 {
    public ViewModelInstance$setColor$1(Object obj) {
        super(3, obj, CommandQueue.class, "setColorProperty", "setColorProperty-iFQtAB8(JLjava/lang/String;I)V", 0);
    }

    @Override // kotlin.jvm.functions.Function3
    public /* bridge */ /* synthetic */ Object invoke(Object obj, Object obj2, Object obj3) {
        m64invokeiFQtAB8(((ViewModelInstanceHandle) obj).m235unboximpl(), (String) obj2, ((Number) obj3).intValue());
        return Unit.a;
    }

    /* renamed from: invoke-iFQtAB8, reason: not valid java name */
    public final void m64invokeiFQtAB8(long j, @NotNull String p12, int i5) {
        Intrinsics.checkNotNullParameter(p12, "p1");
        ((CommandQueue) this.receiver).m173setColorPropertyiFQtAB8(j, p12, i5);
    }
}
