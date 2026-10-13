package nr;

import kotlin.Result;
import kotlin.jvm.functions.Function1;

/* loaded from: classes3.dex */
public final class j0 extends z0 {

    /* renamed from: w, reason: collision with root package name */
    public final /* synthetic */ int f15629w;

    /* renamed from: x, reason: collision with root package name */
    public final Object f15630x;

    public /* synthetic */ j0(int i5, Object obj) {
        this.f15629w = i5;
        this.f15630x = obj;
    }

    @Override // nr.z0
    public final boolean j() {
        switch (this.f15629w) {
        }
        return false;
    }

    @Override // nr.z0
    public final void k(Throwable th2) {
        int i5 = this.f15629w;
        Object obj = this.f15630x;
        switch (i5) {
            case 0:
                ((i0) obj).dispose();
                break;
            case 1:
                ((Function1) obj).invoke(th2);
                break;
            default:
                a1 a1Var = (a1) obj;
                e1 i6 = i();
                i6.getClass();
                Object obj2 = e1.f15614d.get(i6);
                if (!(obj2 instanceof q)) {
                    fo.q qVar = Result.f13476e;
                    a1Var.resumeWith(x.z(obj2));
                    break;
                } else {
                    fo.q qVar2 = Result.f13476e;
                    a1Var.resumeWith(ki.b.i(((q) obj2).a));
                    break;
                }
        }
    }
}
