package vc;

import androidx.recyclerview.widget.h;
import qc.r;
import qc.s;
import qc.t;

/* loaded from: classes3.dex */
public final class c implements s {
    public final /* synthetic */ s a;

    /* renamed from: b, reason: collision with root package name */
    public final /* synthetic */ h f19332b;

    public c(h hVar, s sVar) {
        this.f19332b = hVar;
        this.a = sVar;
    }

    @Override // qc.s
    public final boolean d() {
        return this.a.d();
    }

    @Override // qc.s
    public final r h(long j) {
        r h6 = this.a.h(j);
        t tVar = h6.a;
        long j5 = tVar.a;
        long j7 = tVar.f16799b;
        long j10 = this.f19332b.f2401e;
        t tVar2 = new t(j5, j7 + j10);
        t tVar3 = h6.f16797b;
        return new r(tVar2, new t(tVar3.a, tVar3.f16799b + j10));
    }

    @Override // qc.s
    public final long i() {
        return this.a.i();
    }
}
