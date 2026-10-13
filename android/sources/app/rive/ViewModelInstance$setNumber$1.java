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
public /* synthetic */ class ViewModelInstance$setNumber$1 extends FunctionReferenceImpl implements Function3 {
    public ViewModelInstance$setNumber$1(Object obj) {
        super(3, obj, CommandQueue.class, "setNumberProperty", "setNumberProperty-iFQtAB8(JLjava/lang/String;F)V", 0);
    }

    @Override // kotlin.jvm.functions.Function3
    public /* bridge */ /* synthetic */ Object invoke(Object obj, Object obj2, Object obj3) {
        m67invokeiFQtAB8(((ViewModelInstanceHandle) obj).m235unboximpl(), (String) obj2, ((Number) obj3).floatValue());
        return Unit.a;
    }

    /* renamed from: invoke-iFQtAB8, reason: not valid java name */
    public final void m67invokeiFQtAB8(long j, @NotNull String p12, float f2) {
        Intrinsics.checkNotNullParameter(p12, "p1");
        ((CommandQueue) this.receiver).m176setNumberPropertyiFQtAB8(j, p12, f2);
    }
}
