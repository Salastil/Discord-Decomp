package net.time4j;

/* loaded from: classes3.dex */
public final class u0 implements ks.j {

    /* renamed from: d, reason: collision with root package name */
    public final ks.d f15377d;

    /* renamed from: e, reason: collision with root package name */
    public final String f15378e;

    /* renamed from: i, reason: collision with root package name */
    public final int f15379i;

    public u0(d0 d0Var) {
        this(d0Var.f15236d, d0Var);
    }

    public static int e(w0 w0Var) {
        int i5 = ((w0Var.f15389e - 1) / 3) + 1;
        return i5 == 1 ? tn.g.p(w0Var.f15388d) ? 91 : 90 : i5 == 2 ? 91 : 92;
    }

    public static int f(w0 w0Var) {
        int i5 = 0;
        while (true) {
            int i6 = i5 + 1;
            if ((i6 * 7) + w0Var.f15390i > tn.g.l(w0Var.f15388d, w0Var.f15389e)) {
                return ((((i5 * 7) + r4) - 1) / 7) + 1;
            }
            i5 = i6;
        }
    }

    public final int a(w0 w0Var) {
        switch (this.f15379i) {
            case 14:
                return w0Var.f15388d;
            case 15:
                return w0Var.f15389e;
            case 16:
                return w0Var.f15390i;
            case 17:
                return w0Var.x();
            case 18:
                return w0.q(w0Var);
            case 19:
                return ((w0Var.f15390i - 1) / 7) + 1;
            default:
                throw new UnsupportedOperationException(this.f15378e);
        }
    }

    @Override // ks.j
    public final Object b(ks.e eVar, Object obj, boolean z5) {
        w0 w0Var = (w0) eVar;
        Integer num = (Integer) obj;
        if (num == null) {
            throw new IllegalArgumentException("Missing element value.");
        }
        int intValue = num.intValue();
        if (z5) {
            return (w0) w0Var.l(w3.q.C(intValue, a(w0Var)), (f0) w0.W.b(this.f15377d));
        }
        switch (this.f15379i) {
            case 14:
                byte b10 = w0Var.f15389e;
                return w0Var.f15388d == intValue ? w0Var : w0.z(intValue, b10, Math.min(tn.g.l(intValue, b10), (int) w0Var.f15390i), true);
            case 15:
                int i5 = w0Var.f15388d;
                return w0Var.f15389e == intValue ? w0Var : w0.z(i5, intValue, Math.min(tn.g.l(i5, intValue), (int) w0Var.f15390i), true);
            case 16:
                return w0Var.f15390i == intValue ? w0Var : w0.z(w0Var.f15388d, w0Var.f15389e, intValue, true);
            case 17:
                return w0Var.x() == intValue ? w0Var : w0.y(w0Var.f15388d, intValue);
            case 18:
                if (intValue < 1 || intValue > e(w0Var)) {
                    throw new IllegalArgumentException(k0.d.i(intValue, "Out of range: "));
                }
                return (w0) w0Var.l(intValue - w0.q(w0Var), m.E);
            case 19:
                if (z5 || (intValue >= 1 && intValue <= f(w0Var))) {
                    return (w0) w0Var.l(intValue - (((w0Var.f15390i - 1) / 7) + 1), m.f15281y);
                }
                throw new IllegalArgumentException(k0.d.i(intValue, "Out of range: "));
            default:
                throw new UnsupportedOperationException(this.f15378e);
        }
    }

    @Override // ks.j
    public final Object c(ks.e eVar) {
        return Integer.valueOf(a((w0) eVar));
    }

    @Override // ks.j
    public final Object d(ks.e eVar) {
        w0 w0Var = (w0) eVar;
        switch (this.f15379i) {
            case 14:
                return w0.f15387y;
            case 15:
                return w0.E;
            case 16:
                return Integer.valueOf(tn.g.l(w0Var.f15388d, w0Var.f15389e));
            case 17:
                return tn.g.p(w0Var.f15388d) ? w0.G : w0.F;
            case 18:
                return Integer.valueOf(e(w0Var));
            case 19:
                return Integer.valueOf(f(w0Var));
            default:
                throw new UnsupportedOperationException(this.f15378e);
        }
    }

    public u0(int i5, ks.d dVar) {
        this.f15377d = dVar;
        this.f15378e = dVar.name();
        this.f15379i = i5;
    }
}
