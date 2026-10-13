package nr;

import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class d implements i {

    /* renamed from: d, reason: collision with root package name */
    public final c[] f15605d;

    public d(c[] cVarArr) {
        this.f15605d = cVarArr;
    }

    public final void a() {
        for (c cVar : this.f15605d) {
            i0 i0Var = cVar.f15598x;
            if (i0Var == null) {
                Intrinsics.throwUninitializedPropertyAccessException("handle");
                i0Var = null;
            }
            i0Var.dispose();
        }
    }

    @Override // nr.i
    public final void b(Throwable th2) {
        a();
    }

    public final String toString() {
        return "DisposeHandlersOnCancel[" + this.f15605d + ']';
    }
}
