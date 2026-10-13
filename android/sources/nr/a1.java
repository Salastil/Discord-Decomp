package nr;

import kotlin.coroutines.Continuation;

/* loaded from: classes3.dex */
public final class a1 extends j {
    public final e1 F;

    public a1(Continuation continuation, e1 e1Var) {
        super(1, continuation);
        this.F = e1Var;
    }

    @Override // nr.j
    public final Throwable q(e1 e1Var) {
        Throwable d6;
        e1 e1Var2 = this.F;
        e1Var2.getClass();
        Object obj = e1.f15614d.get(e1Var2);
        return (!(obj instanceof c1) || (d6 = ((c1) obj).d()) == null) ? obj instanceof q ? ((q) obj).a : e1Var.x() : d6;
    }

    @Override // nr.j
    public final String z() {
        return "AwaitContinuation";
    }
}
