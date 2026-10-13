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
public /* synthetic */ class ViewModelInstance$setBoolean$1 extends FunctionReferenceImpl implements Function3 {
    public ViewModelInstance$setBoolean$1(Object obj) {
        super(3, obj, CommandQueue.class, "setBooleanProperty", "setBooleanProperty-iFQtAB8(JLjava/lang/String;Z)V", 0);
    }

    @Override // kotlin.jvm.functions.Function3
    public /* bridge */ /* synthetic */ Object invoke(Object obj, Object obj2, Object obj3) {
        m63invokeiFQtAB8(((ViewModelInstanceHandle) obj).m235unboximpl(), (String) obj2, ((Boolean) obj3).booleanValue());
        return Unit.a;
    }

    /* renamed from: invoke-iFQtAB8, reason: not valid java name */
    public final void m63invokeiFQtAB8(long j, @NotNull String p12, boolean z5) {
        Intrinsics.checkNotNullParameter(p12, "p1");
        ((CommandQueue) this.receiver).m172setBooleanPropertyiFQtAB8(j, p12, z5);
    }
}
