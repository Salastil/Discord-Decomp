package th;

import android.os.Bundle;

/* loaded from: classes3.dex */
public final class l extends h {

    /* renamed from: i, reason: collision with root package name */
    public final p0 f18497i;
    public final g1 j;

    public l(m mVar, jg.g gVar, p0 p0Var, g1 g1Var) {
        super(mVar, gVar);
        this.f18497i = p0Var;
        this.j = g1Var;
    }

    @Override // th.h, uh.l
    public final void d(int i5, Bundle bundle) {
        super.d(i5, bundle);
        this.f18461g.d(x.a(bundle, this.f18497i, this.j));
    }
}
