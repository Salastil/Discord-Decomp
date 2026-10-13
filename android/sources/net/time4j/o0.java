package net.time4j;

import java.util.concurrent.TimeUnit;

/* loaded from: classes3.dex */
public final class o0 implements ks.j {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f15296d;

    public /* synthetic */ o0(int i5) {
        this.f15296d = i5;
    }

    public static t a(z0 z0Var) {
        int i5 = z0Var.f15414v;
        return i5 != 0 ? i5 % 1000000 == 0 ? t.f15317v : i5 % 1000 == 0 ? t.f15318w : t.f15319x : z0Var.f15413i != 0 ? t.f15316i : z0Var.f15412e != 0 ? t.f15315e : t.f15314d;
    }

    /* JADX WARN: Code restructure failed: missing block: B:13:0x0041, code lost:
    
        if (((tn.g.p(r3) ? 366 : 365) + net.time4j.v1.m(r3 + 1)) <= r2) goto L21;
     */
    @Override // ks.j
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final Object b(ks.e eVar, Object obj, boolean z5) {
        q0 s2;
        switch (this.f15296d) {
            case 0:
                q0 q0Var = (q0) eVar;
                TimeUnit timeUnit = (TimeUnit) obj;
                if (timeUnit == null) {
                    throw new IllegalArgumentException("Missing precision.");
                }
                int i5 = l0.f15270c[timeUnit.ordinal()];
                ns.e eVar2 = ns.e.f15694d;
                switch (i5) {
                    case 1:
                        return q0.s(w3.q.m(86400, q0Var.f15306d) * 86400, 0, eVar2);
                    case 2:
                        return q0.s(w3.q.m(3600, q0Var.f15306d) * 3600, 0, eVar2);
                    case 3:
                        return q0.s(w3.q.m(60, q0Var.f15306d) * 60, 0, eVar2);
                    case 4:
                        s2 = q0.s(q0Var.f15306d, 0, eVar2);
                        break;
                    case 5:
                        s2 = q0.s(q0Var.f15306d, (q0Var.r() / 1000000) * 1000000, eVar2);
                        break;
                    case 6:
                        s2 = q0.s(q0Var.f15306d, (q0Var.r() / 1000) * 1000, eVar2);
                        break;
                    case 7:
                        return q0Var;
                    default:
                        throw new UnsupportedOperationException(timeUnit.name());
                }
                if (((q0Var.f15307e >>> 30) != 0 && ns.c.F.e()) && ns.c.F.e()) {
                    ns.e eVar3 = ns.e.f15694d;
                    long j = s2.f15306d;
                    ns.e eVar4 = ns.e.f15695e;
                    if (j < 63072000) {
                        throw new UnsupportedOperationException("Cannot calculate SI-duration before 1972-01-01.");
                    }
                    if (1 != 0) {
                        try {
                            q0 q0Var2 = ns.c.F.e() ? new q0(w3.q.z(s2.q(), 1L), s2.r(), eVar4) : q0.s(w3.q.z(j, 1L), s2.r(), eVar3);
                            if (1 >= 0 || q0Var2.f15306d >= 63072000) {
                                return q0Var2;
                            }
                            throw new UnsupportedOperationException("Cannot calculate SI-duration before 1972-01-01.");
                        } catch (IllegalArgumentException e9) {
                            ArithmeticException arithmeticException = new ArithmeticException("Result beyond boundaries of time axis.");
                            arithmeticException.initCause(e9);
                            throw arithmeticException;
                        }
                    }
                }
                return s2;
            case 1:
                w0 w0Var = (w0) obj;
                if (w0Var != null) {
                    return w0Var;
                }
                throw new IllegalArgumentException("Missing date value.");
            case 2:
                z0 z0Var = (z0) eVar;
                k0 k0Var = (k0) obj;
                int i6 = z0Var.f15411d;
                if (i6 == 24) {
                    i6 = 0;
                }
                if (k0Var == null) {
                    throw new IllegalArgumentException("Missing am/pm-value.");
                }
                if (k0Var == k0.f15265d) {
                    if (i6 >= 12) {
                        i6 -= 12;
                    }
                } else if (k0Var == k0.f15266e && i6 < 12) {
                    i6 += 12;
                }
                return z0.y(i6, z0Var.f15412e, z0Var.f15413i, z0Var.f15414v, true);
            case 3:
                z0 z0Var2 = (z0) eVar;
                t tVar = (t) obj;
                if (tVar == null) {
                    throw new IllegalArgumentException("Missing precision value.");
                }
                int ordinal = tVar.ordinal();
                t a = a(z0Var2);
                int i10 = z0Var2.f15414v;
                byte b10 = z0Var2.f15413i;
                byte b11 = z0Var2.f15412e;
                byte b12 = z0Var2.f15411d;
                if (ordinal >= a.ordinal()) {
                    return z0Var2;
                }
                int ordinal2 = tVar.ordinal();
                if (ordinal2 == 0) {
                    return z0.x(b12);
                }
                if (ordinal2 == 1) {
                    return b11 == 0 ? z0.x(b12) : new z0(b12, b11, 0, 0, true);
                }
                if (ordinal2 == 2) {
                    return (b11 | b10) == 0 ? z0.x(b12) : new z0(b12, b11, b10, 0, true);
                }
                if (ordinal2 == 3) {
                    return z0.y(b12, b11, b10, (i10 / 1000000) * 1000000, true);
                }
                if (ordinal2 == 4) {
                    return z0.y(b12, b11, b10, (i10 / 1000) * 1000, true);
                }
                if (ordinal2 == 5) {
                    return z0Var2;
                }
                throw new UnsupportedOperationException(tVar.name());
            case 4:
                z0 z0Var3 = (z0) obj;
                if (z0Var3 != null) {
                    return z0Var3;
                }
                throw new IllegalArgumentException("Missing time value.");
            default:
                Integer num = (Integer) obj;
                if (num == null) {
                    throw new IllegalArgumentException("Missing element value.");
                }
                u uVar = w0.J;
                w0 w0Var2 = (w0) eVar.d(uVar);
                int intValue = num.intValue();
                int m5 = v1.m(intValue);
                int x5 = w0Var2.x();
                int i11 = w0Var2.f15388d;
                int m6 = v1.m(i11);
                int i12 = 1;
                if (m6 <= x5) {
                    int i13 = ((x5 - m6) / 7) + 1;
                    if (i13 >= 53) {
                        break;
                    }
                    i12 = i13;
                } else {
                    i12 = 1 + ((((tn.g.p(i11 + (-1)) ? 366 : 365) + x5) - v1.m(i11 - 1)) / 7);
                }
                long b13 = ks.l.UNIX.b(tn.g.y(intValue, 1, 1), ks.l.MODIFIED_JULIAN_DATE) + (m5 - 1) + ((i12 - 1) * 7) + (w0Var2.w().b(t1.G) - 1);
                if (i12 == 53) {
                    if (((v1.m(intValue + 1) + (tn.g.p(intValue) ? 366 : 365)) - m5) / 7 < 53) {
                        b13 -= 7;
                    }
                }
                return eVar.h(uVar, (w0) w0.V.o(b13 - 730));
        }
    }

    @Override // ks.j
    public final Object c(ks.e eVar) {
        switch (this.f15296d) {
            case 0:
                q0 q0Var = (q0) eVar;
                int r5 = q0Var.r();
                if (r5 != 0) {
                    return r5 % 1000000 == 0 ? TimeUnit.MILLISECONDS : r5 % 1000 == 0 ? TimeUnit.MICROSECONDS : TimeUnit.NANOSECONDS;
                }
                long j = q0Var.f15306d;
                return w3.q.o(86400, j) == 0 ? TimeUnit.DAYS : w3.q.o(3600, j) == 0 ? TimeUnit.HOURS : w3.q.o(60, j) == 0 ? TimeUnit.MINUTES : TimeUnit.SECONDS;
            case 1:
                return (w0) eVar;
            case 2:
                byte b10 = ((z0) eVar).f15411d;
                if (b10 < 0 || b10 > 24) {
                    throw new IllegalArgumentException(k0.d.i(b10, "Hour of day out of range: "));
                }
                return (b10 < 12 || b10 == 24) ? k0.f15265d : k0.f15266e;
            case 3:
                return a((z0) eVar);
            case 4:
                return (z0) eVar;
            default:
                w0 w0Var = (w0) eVar.d(w0.J);
                int i5 = w0Var.f15388d;
                int x5 = w0Var.x();
                int i6 = w0Var.f15388d;
                int m5 = v1.m(i6);
                if (m5 > x5) {
                    i5--;
                } else if (((x5 - m5) / 7) + 1 >= 53) {
                    if ((tn.g.p(i6) ? 366 : 365) + v1.m(i6 + 1) <= x5) {
                        i5++;
                    }
                }
                return Integer.valueOf(i5);
        }
    }

    @Override // ks.j
    public final Object d(ks.e eVar) {
        switch (this.f15296d) {
            case 0:
                return TimeUnit.NANOSECONDS;
            case 1:
                return w0.f15385w;
            case 2:
                return k0.f15266e;
            case 3:
                return t.f15319x;
            case 4:
                return z0.K;
            default:
                v1.f15381e.getClass();
                return w0.f15387y;
        }
    }
}
