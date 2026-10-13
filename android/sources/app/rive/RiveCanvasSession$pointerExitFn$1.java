package app.rive;

import app.rive.core.CommandQueue;
import app.rive.core.StateMachineHandle;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.jvm.internal.FunctionReferenceImpl;
import kotlin.jvm.internal.Intrinsics;
import org.jetbrains.annotations.NotNull;
import to.n;

@Metadata(k = 3, mv = {1, 9, 0}, xi = 48)
/* loaded from: classes.dex */
public /* synthetic */ class RiveCanvasSession$pointerExitFn$1 extends FunctionReferenceImpl implements n {
    public RiveCanvasSession$pointerExitFn$1(Object obj) {
        super(7, obj, CommandQueue.class, "pointerExit", "pointerExit-iHGrxBs(JLapp/rive/Fit;FFIFF)V", 0);
    }

    @Override // to.n
    public /* bridge */ /* synthetic */ Object invoke(Object obj, Object obj2, Object obj3, Object obj4, Object obj5, Object obj6, Object obj7) {
        m28invokeiHGrxBs(((StateMachineHandle) obj).m226unboximpl(), (Fit) obj2, ((Number) obj3).floatValue(), ((Number) obj4).floatValue(), ((Number) obj5).intValue(), ((Number) obj6).floatValue(), ((Number) obj7).floatValue());
        return Unit.a;
    }

    /* renamed from: invoke-iHGrxBs, reason: not valid java name */
    public final void m28invokeiHGrxBs(long j, @NotNull Fit p12, float f2, float f10, int i5, float f11, float f12) {
        Intrinsics.checkNotNullParameter(p12, "p1");
        ((CommandQueue) this.receiver).m161pointerExitiHGrxBs(j, p12, f2, f10, i5, f11, f12);
    }
}
