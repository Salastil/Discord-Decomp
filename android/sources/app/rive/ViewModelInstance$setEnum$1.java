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
public /* synthetic */ class ViewModelInstance$setEnum$1 extends FunctionReferenceImpl implements Function3 {
    public ViewModelInstance$setEnum$1(Object obj) {
        super(3, obj, CommandQueue.class, "setEnumProperty", "setEnumProperty-iFQtAB8(JLjava/lang/String;Ljava/lang/String;)V", 0);
    }

    @Override // kotlin.jvm.functions.Function3
    public /* bridge */ /* synthetic */ Object invoke(Object obj, Object obj2, Object obj3) {
        m65invokeiFQtAB8(((ViewModelInstanceHandle) obj).m235unboximpl(), (String) obj2, (String) obj3);
        return Unit.a;
    }

    /* renamed from: invoke-iFQtAB8, reason: not valid java name */
    public final void m65invokeiFQtAB8(long j, @NotNull String p12, @NotNull String p22) {
        Intrinsics.checkNotNullParameter(p12, "p1");
        Intrinsics.checkNotNullParameter(p22, "p2");
        ((CommandQueue) this.receiver).m174setEnumPropertyiFQtAB8(j, p12, p22);
    }
}
