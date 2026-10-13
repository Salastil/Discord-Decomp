package pr;

import java.util.concurrent.atomic.AtomicReferenceFieldUpdater;
import kotlin.Result;
import kotlin.jvm.internal.Intrinsics;
import nr.v1;
import nr.x;

/* loaded from: classes3.dex */
public final class c implements v1 {

    /* renamed from: d, reason: collision with root package name */
    public Object f16471d = j.f16502p;

    /* renamed from: e, reason: collision with root package name */
    public nr.j f16472e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ h f16473i;

    public c(h hVar) {
        this.f16473i = hVar;
    }

    @Override // nr.v1
    public final void a(sr.u uVar, int i5) {
        nr.j jVar = this.f16472e;
        if (jVar != null) {
            jVar.a(uVar, i5);
        }
    }

    public final Object b(qr.g frame) {
        o oVar;
        o oVar2;
        Object obj = this.f16471d;
        boolean z5 = true;
        if (obj == j.f16502p || obj == j.f16498l) {
            AtomicReferenceFieldUpdater atomicReferenceFieldUpdater = h.f16487y;
            h hVar = this.f16473i;
            o oVar3 = (o) atomicReferenceFieldUpdater.get(hVar);
            while (!hVar.z()) {
                long andIncrement = h.f16483i.getAndIncrement(hVar);
                long j = j.f16490b;
                long j5 = andIncrement / j;
                int i5 = (int) (andIncrement % j);
                if (oVar3.f18127i != j5) {
                    o s2 = hVar.s(j5, oVar3);
                    if (s2 == null) {
                        continue;
                    } else {
                        oVar = s2;
                    }
                } else {
                    oVar = oVar3;
                }
                Object J = hVar.J(oVar, i5, andIncrement, null);
                a5.h hVar2 = j.f16499m;
                if (J == hVar2) {
                    throw new IllegalStateException("unreachable");
                }
                a5.h hVar3 = j.f16501o;
                if (J != hVar3) {
                    if (J != j.f16500n) {
                        oVar.a();
                        this.f16471d = J;
                        return Boolean.valueOf(z5);
                    }
                    nr.j p3 = x.p(ko.f.b(frame));
                    try {
                        this.f16472e = p3;
                    } catch (Throwable th2) {
                        th = th2;
                    }
                    try {
                        Object J2 = hVar.J(oVar, i5, andIncrement, this);
                        if (J2 == hVar2) {
                            a(oVar, i5);
                        } else {
                            if (J2 == hVar3) {
                                if (andIncrement < hVar.w()) {
                                    oVar.a();
                                }
                                o oVar4 = (o) h.f16487y.get(hVar);
                                while (true) {
                                    if (hVar.z()) {
                                        nr.j jVar = this.f16472e;
                                        Intrinsics.checkNotNull(jVar);
                                        this.f16472e = null;
                                        this.f16471d = j.f16498l;
                                        Throwable t5 = hVar.t();
                                        if (t5 == null) {
                                            fo.q qVar = Result.f13476e;
                                            jVar.resumeWith(Boolean.FALSE);
                                        } else {
                                            fo.q qVar2 = Result.f13476e;
                                            jVar.resumeWith(ki.b.i(t5));
                                        }
                                    } else {
                                        long andIncrement2 = h.f16483i.getAndIncrement(hVar);
                                        long j7 = j.f16490b;
                                        long j10 = andIncrement2 / j7;
                                        int i6 = (int) (andIncrement2 % j7);
                                        if (oVar4.f18127i != j10) {
                                            oVar2 = hVar.s(j10, oVar4);
                                            if (oVar2 == null) {
                                            }
                                        } else {
                                            oVar2 = oVar4;
                                        }
                                        Object J3 = hVar.J(oVar2, i6, andIncrement2, this);
                                        if (J3 == j.f16499m) {
                                            a(oVar2, i6);
                                            break;
                                        }
                                        if (J3 == j.f16501o) {
                                            if (andIncrement2 < hVar.w()) {
                                                oVar2.a();
                                            }
                                            oVar4 = oVar2;
                                        } else {
                                            if (J3 == j.f16500n) {
                                                throw new IllegalStateException("unexpected");
                                            }
                                            oVar2.a();
                                            this.f16471d = J3;
                                            this.f16472e = null;
                                        }
                                    }
                                }
                            } else {
                                oVar.a();
                                this.f16471d = J2;
                                this.f16472e = null;
                            }
                            p3.j(Boolean.TRUE, null);
                        }
                        Object r5 = p3.r();
                        if (r5 == ko.a.f13464d) {
                            Intrinsics.checkNotNullParameter(frame, "frame");
                        }
                        return r5;
                    } catch (Throwable th3) {
                        th = th3;
                        Throwable th4 = th;
                        p3.A();
                        throw th4;
                    }
                }
                if (andIncrement < hVar.w()) {
                    oVar.a();
                }
                oVar3 = oVar;
            }
            this.f16471d = j.f16498l;
            Throwable t10 = hVar.t();
            if (t10 != null) {
                int i10 = sr.v.a;
                throw t10;
            }
            z5 = false;
        }
        return Boolean.valueOf(z5);
    }
}
