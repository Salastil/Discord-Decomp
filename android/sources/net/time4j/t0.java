package net.time4j;

/* loaded from: classes3.dex */
public final class t0 implements ks.j {

    /* renamed from: d, reason: collision with root package name */
    public final String f15321d;

    /* renamed from: e, reason: collision with root package name */
    public final Class f15322e;

    /* renamed from: i, reason: collision with root package name */
    public final Enum f15323i;

    /* renamed from: v, reason: collision with root package name */
    public final int f15324v;

    public t0(String str, Class cls, Enum r32, Enum r42, int i5) {
        this.f15321d = str;
        this.f15322e = cls;
        this.f15323i = r42;
        this.f15324v = i5;
    }

    public static t0 a(c0 c0Var) {
        return new t0(c0Var.name(), c0Var.f15229d, c0Var.f15230e, c0Var.f15231i, c0Var.f15232v);
    }

    @Override // ks.j
    public final Object b(ks.e eVar, Object obj, boolean z5) {
        w0 w0Var = (w0) eVar;
        Enum r5 = (Enum) obj;
        if (r5 == null) {
            throw new IllegalArgumentException("Missing element value.");
        }
        switch (this.f15324v) {
            case 101:
                int a = ((r0) r0.class.cast(r5)).a();
                int i5 = w0Var.f15388d;
                return w0Var.f15389e == a ? w0Var : w0.z(i5, a, Math.min(tn.g.l(i5, a), (int) w0Var.f15390i), true);
            case 102:
                n1 n1Var = (n1) n1.class.cast(r5);
                w0 w0Var2 = w0.f15384v;
                if (w0Var.w() == n1Var) {
                    return w0Var;
                }
                l8.a aVar = w0.V;
                return (w0) aVar.o(w3.q.z(aVar.n(w0Var), n1Var.a() - r6.a()));
            case 103:
                return (w0) w0Var.l((((f1) f1.class.cast(r5)).ordinal() + 1) - (((w0Var.f15389e - 1) / 3) + 1), m.f15279w);
            default:
                throw new UnsupportedOperationException(this.f15321d);
        }
    }

    @Override // ks.j
    public final Object c(ks.e eVar) {
        Object b10;
        w0 w0Var = (w0) eVar;
        switch (this.f15324v) {
            case 101:
                b10 = r0.b(w0Var.f15389e);
                break;
            case 102:
                b10 = w0Var.w();
                break;
            case 103:
                int i5 = (w0Var.f15389e - 1) / 3;
                int i6 = i5 + 1;
                f1 f1Var = f1.f15249d;
                if (i6 >= 1 && i6 <= 4) {
                    b10 = f1.f15251i[i5];
                    break;
                } else {
                    throw new IllegalArgumentException(k0.d.i(i6, "Out of range: "));
                }
                break;
            default:
                throw new UnsupportedOperationException(this.f15321d);
        }
        return (Enum) this.f15322e.cast(b10);
    }

    @Override // ks.j
    public final Object d(ks.e eVar) {
        w0 w0Var = (w0) eVar;
        return (this.f15324v == 102 && w0Var.f15388d == 999999999 && w0Var.f15389e == 12 && w0Var.f15390i >= 27) ? (Enum) this.f15322e.cast(n1.f15293w) : this.f15323i;
    }
}
