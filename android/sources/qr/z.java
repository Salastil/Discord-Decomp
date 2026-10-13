package qr;

import kotlin.coroutines.Continuation;

/* loaded from: classes3.dex */
public final class z extends rr.d {
    public long a;

    /* renamed from: b, reason: collision with root package name */
    public nr.j f17049b;

    @Override // rr.d
    public final boolean a(rr.b bVar) {
        x xVar = (x) bVar;
        if (this.a >= 0) {
            return false;
        }
        long j = xVar.F;
        if (j < xVar.G) {
            xVar.G = j;
        }
        this.a = j;
        return true;
    }

    @Override // rr.d
    public final Continuation[] b(rr.b bVar) {
        long j = this.a;
        this.a = -1L;
        this.f17049b = null;
        return ((x) bVar).u(j);
    }
}
