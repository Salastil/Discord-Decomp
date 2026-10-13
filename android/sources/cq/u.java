package cq;

/* loaded from: classes3.dex */
public final class u extends iq.j {

    /* renamed from: v, reason: collision with root package name */
    public int f7254v;

    /* renamed from: w, reason: collision with root package name */
    public int f7255w;

    @Override // iq.i
    public final iq.a c() {
        v vVar = new v(this);
        int i5 = (this.f7254v & 1) != 1 ? 0 : 1;
        vVar.f7265v = this.f7255w;
        vVar.f7264i = i5;
        if (vVar.b()) {
            return vVar;
        }
        throw new ai.k();
    }

    public final Object clone() {
        u uVar = new u();
        v vVar = new v(this);
        int i5 = (this.f7254v & 1) != 1 ? 0 : 1;
        vVar.f7265v = this.f7255w;
        vVar.f7264i = i5;
        uVar.g(vVar);
        return uVar;
    }

    /* JADX WARN: Removed duplicated region for block: B:16:0x001b  */
    @Override // iq.i
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final iq.i d(iq.e eVar, iq.g gVar) {
        v vVar = null;
        try {
            try {
                v.E.getClass();
                g(new v(eVar, gVar));
                return this;
            } catch (iq.q e9) {
                v vVar2 = (v) e9.f12236d;
                try {
                    throw e9;
                } catch (Throwable th2) {
                    th = th2;
                    vVar = vVar2;
                    if (vVar != null) {
                        g(vVar);
                    }
                    throw th;
                }
            }
        } catch (Throwable th3) {
            th = th3;
            if (vVar != null) {
            }
            throw th;
        }
    }

    @Override // iq.i
    public final /* bridge */ /* synthetic */ iq.i e(iq.n nVar) {
        g((v) nVar);
        return this;
    }

    public final void g(v vVar) {
        if (vVar == v.f7262y) {
            return;
        }
        if ((vVar.f7264i & 1) == 1) {
            int i5 = vVar.f7265v;
            this.f7254v = 1 | this.f7254v;
            this.f7255w = i5;
        }
        f(vVar);
        this.f12211d = this.f12211d.b(vVar.f7263e);
    }
}
