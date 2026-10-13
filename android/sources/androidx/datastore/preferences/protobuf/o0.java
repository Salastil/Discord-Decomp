package androidx.datastore.preferences.protobuf;

/* loaded from: classes.dex */
public final class o0 implements w0 {
    public final a a;

    /* renamed from: b, reason: collision with root package name */
    public final f1 f1799b;

    /* renamed from: c, reason: collision with root package name */
    public final m f1800c;

    public o0(f1 f1Var, m mVar, a aVar) {
        this.f1799b = f1Var;
        mVar.getClass();
        this.f1800c = mVar;
        this.a = aVar;
    }

    @Override // androidx.datastore.preferences.protobuf.w0
    public final void a(Object obj) {
        this.f1799b.getClass();
        ((t) obj).unknownFields.f1740e = false;
        this.f1800c.getClass();
        a3.e.w(obj);
        throw null;
    }

    @Override // androidx.datastore.preferences.protobuf.w0
    public final boolean b(Object obj) {
        this.f1800c.getClass();
        a3.e.w(obj);
        throw null;
    }

    @Override // androidx.datastore.preferences.protobuf.w0
    public final Object c() {
        return ((r) ((t) this.a).d(5)).b();
    }

    @Override // androidx.datastore.preferences.protobuf.w0
    public final void d(Object obj, f0 f0Var) {
        this.f1800c.getClass();
        a3.e.w(obj);
        throw null;
    }

    @Override // androidx.datastore.preferences.protobuf.w0
    public final int e(a aVar) {
        this.f1799b.getClass();
        e1 e1Var = ((t) aVar).unknownFields;
        int i5 = e1Var.f1739d;
        if (i5 != -1) {
            return i5;
        }
        int i6 = 0;
        for (int i10 = 0; i10 < e1Var.a; i10++) {
            int i11 = e1Var.f1737b[i10] >>> 3;
            i6 += j.r(3, (f) e1Var.f1738c[i10]) + j.z(i11) + j.y(2) + (j.y(1) * 2);
        }
        e1Var.f1739d = i6;
        return i6;
    }

    @Override // androidx.datastore.preferences.protobuf.w0
    public final void f(t tVar, t tVar2) {
        x0.w(this.f1799b, tVar, tVar2);
    }

    @Override // androidx.datastore.preferences.protobuf.w0
    public final int g(t tVar) {
        this.f1799b.getClass();
        return tVar.unknownFields.hashCode();
    }

    @Override // androidx.datastore.preferences.protobuf.w0
    public final boolean h(t tVar, t tVar2) {
        this.f1799b.getClass();
        return tVar.unknownFields.equals(tVar2.unknownFields);
    }

    @Override // androidx.datastore.preferences.protobuf.w0
    public final void i(Object obj, h hVar, l lVar) {
        this.f1799b.getClass();
        t tVar = (t) obj;
        if (tVar.unknownFields == e1.f1736f) {
            tVar.unknownFields = e1.b();
        }
        this.f1800c.getClass();
        obj.getClass();
        throw new ClassCastException();
    }
}
