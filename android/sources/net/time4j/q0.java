package net.time4j;

import java.io.InvalidObjectException;
import java.io.ObjectInputStream;
import java.util.Collections;
import java.util.EnumMap;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Map;
import java.util.concurrent.TimeUnit;

/* loaded from: classes3.dex */
public final class q0 extends ks.s implements is.e {
    public static final ks.r E;
    public static final q0 F;

    /* renamed from: i, reason: collision with root package name */
    public static final long f15301i;
    private static final long serialVersionUID = -3192884724477742274L;

    /* renamed from: v, reason: collision with root package name */
    public static final long f15302v;

    /* renamed from: w, reason: collision with root package name */
    public static final q0 f15303w;

    /* renamed from: x, reason: collision with root package name */
    public static final q0 f15304x;

    /* renamed from: y, reason: collision with root package name */
    public static final Map f15305y;

    /* renamed from: d, reason: collision with root package name */
    public final transient long f15306d;

    /* renamed from: e, reason: collision with root package name */
    public final transient int f15307e;

    static {
        long y5 = tn.g.y(-999999999, 1, 1);
        long y6 = tn.g.y(999999999, 12, 31);
        ks.l lVar = ks.l.UNIX;
        ks.l lVar2 = ks.l.MODIFIED_JULIAN_DATE;
        long b10 = lVar.b(y5, lVar2) * 86400;
        f15301i = b10;
        long b11 = (lVar.b(y6, lVar2) * 86400) + 86399;
        f15302v = b11;
        ns.e eVar = ns.e.f15694d;
        q0 q0Var = new q0(b10, 0, eVar);
        f15303w = q0Var;
        q0 q0Var2 = new q0(b11, 999999999, eVar);
        f15304x = q0Var2;
        new q0(63158400L, 0, eVar);
        HashSet hashSet = new HashSet();
        hashSet.add(z0.S);
        hashSet.add(z0.R);
        hashSet.add(z0.Q);
        hashSet.add(z0.P);
        hashSet.add(z0.O);
        hashSet.add(z0.N);
        hashSet.add(z0.T);
        hashSet.add(z0.U);
        Collections.unmodifiableSet(hashSet);
        HashMap hashMap = new HashMap();
        hashMap.put(z0.V, 1);
        hashMap.put(z0.W, 1);
        hashMap.put(z0.X, 1000);
        hashMap.put(z0.a0, 1000);
        hashMap.put(z0.Y, 1000000);
        hashMap.put(z0.f15401b0, 1000000);
        hashMap.put(z0.Z, 1000000000);
        hashMap.put(z0.f15402c0, 1000000000);
        Collections.unmodifiableMap(hashMap);
        EnumMap enumMap = new EnumMap(TimeUnit.class);
        enumMap.put((EnumMap) TimeUnit.DAYS, (TimeUnit) Double.valueOf(86400.0d));
        enumMap.put((EnumMap) TimeUnit.HOURS, (TimeUnit) Double.valueOf(3600.0d));
        enumMap.put((EnumMap) TimeUnit.MINUTES, (TimeUnit) Double.valueOf(60.0d));
        enumMap.put((EnumMap) TimeUnit.SECONDS, (TimeUnit) Double.valueOf(1.0d));
        enumMap.put((EnumMap) TimeUnit.MILLISECONDS, (TimeUnit) Double.valueOf(0.001d));
        enumMap.put((EnumMap) TimeUnit.MICROSECONDS, (TimeUnit) Double.valueOf(1.0E-6d));
        enumMap.put((EnumMap) TimeUnit.NANOSECONDS, (TimeUnit) Double.valueOf(1.0E-9d));
        f15305y = Collections.unmodifiableMap(enumMap);
        ks.p pVar = new ks.p(TimeUnit.class, q0.class, new j8.c(), q0Var, q0Var2, null);
        for (TimeUnit timeUnit : TimeUnit.values()) {
            p0 p0Var = new p0(timeUnit, 0);
            Map map = f15305y;
            pVar.d(timeUnit, p0Var, ((Double) map.get(timeUnit)).doubleValue(), map.keySet());
        }
        n0 n0Var = n0.f15287d;
        pVar.a(n0Var, n0Var, TimeUnit.SECONDS);
        m0 m0Var = m0.f15284d;
        pVar.a(m0Var, m0Var, TimeUnit.NANOSECONDS);
        pVar.b(d1.f15240w, new o0(0));
        pVar.f13681m = new bg.s(8);
        E = pVar.e();
        F = new q0(0L, 0, eVar);
    }

    public q0(int i5, long j) {
        m(j);
        this.f15306d = j;
        this.f15307e = i5;
    }

    public static void m(long j) {
        if (j > f15302v || j < f15301i) {
            throw new IllegalArgumentException(k0.d.j(j, "UNIX time (UT) out of supported range: "));
        }
    }

    public static void o(int i5, int i6, StringBuilder sb2) {
        int i10 = 1;
        for (int i11 = 0; i11 < i6 - 1; i11++) {
            i10 *= 10;
        }
        while (i5 < i10 && i10 >= 10) {
            sb2.append('0');
            i10 /= 10;
        }
        sb2.append(String.valueOf(i5));
    }

    private void readObject(ObjectInputStream objectInputStream) {
        throw new InvalidObjectException("Serialization proxy required.");
    }

    public static q0 s(long j, int i5, ns.e eVar) {
        return (j == 0 && i5 == 0 && eVar == ns.e.f15694d) ? F : new q0(j, i5, eVar);
    }

    public static int t(double d6, long j) {
        try {
            return (int) ((d6 * 1.0E9d) - w3.q.B(j, 1000000000L));
        } catch (ArithmeticException unused) {
            return (int) ((d6 - j) * 1.0E9d);
        }
    }

    private Object writeReplace() {
        return new SPX(4, this);
    }

    @Override // ks.e
    public final ks.r e() {
        return E;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj instanceof q0) {
            q0 q0Var = (q0) obj;
            if (this.f15306d != q0Var.f15306d) {
                return false;
            }
            if (ns.c.F.e()) {
                return this.f15307e == q0Var.f15307e;
            }
            if (r() == q0Var.r()) {
                return true;
            }
        }
        return false;
    }

    public final int hashCode() {
        long j = this.f15306d;
        return (r() * 37) + (((int) (j ^ (j >>> 32))) * 19);
    }

    @Override // ks.s
    public final ks.r j() {
        return E;
    }

    @Override // ks.s
    /* renamed from: n, reason: merged with bridge method [inline-methods] and merged with bridge method [inline-methods] */
    public final int i(q0 q0Var) {
        int r5;
        long q5 = q();
        long q6 = q0Var.q();
        if (q5 < q6) {
            return -1;
        }
        if (q5 <= q6 && (r5 = r() - q0Var.r()) <= 0) {
            return r5 < 0 ? -1 : 0;
        }
        return 1;
    }

    public final w0 p() {
        return w0.B(w3.q.m(86400, this.f15306d), ks.l.UNIX);
    }

    public final long q() {
        ns.c cVar = ns.c.F;
        boolean e9 = cVar.e();
        long j = this.f15306d;
        if (!e9) {
            return j - 63072000;
        }
        long b10 = cVar.b(j);
        return (this.f15307e >>> 30) != 0 ? b10 + 1 : b10;
    }

    public final int r() {
        return this.f15307e & (-1073741825);
    }

    public final String toString() {
        w0 p3 = p();
        int o6 = w3.q.o(86400, this.f15306d);
        int i5 = o6 / 60;
        int i6 = i5 / 60;
        int i10 = i5 % 60;
        int i11 = o6 % 60;
        ns.c cVar = ns.c.F;
        long q5 = q();
        int i12 = 0;
        if (q5 > 0) {
            ns.b[] d6 = cVar.d();
            int i13 = 0;
            while (true) {
                if (i13 >= d6.length) {
                    break;
                }
                ns.b bVar = d6[i13];
                if (q5 > bVar.d()) {
                    break;
                }
                long d7 = bVar.d() - bVar.b();
                if (q5 > d7) {
                    i12 = (int) (q5 - d7);
                    break;
                }
                i13++;
            }
        } else {
            cVar.getClass();
        }
        int r5 = r();
        StringBuilder sb2 = new StringBuilder(50);
        sb2.append(p3);
        sb2.append('T');
        o(i6, 2, sb2);
        sb2.append(':');
        o(i10, 2, sb2);
        sb2.append(':');
        o(i11 + i12, 2, sb2);
        if (r5 > 0) {
            sb2.append(',');
            o(r5, 9, sb2);
        }
        sb2.append('Z');
        return sb2.toString();
    }

    public q0(long j, int i5, ns.e eVar) {
        long j5;
        long floor;
        long b10;
        long j7 = j;
        int i6 = i5;
        if (eVar == ns.e.f15694d) {
            this.f15306d = j7;
            this.f15307e = i6;
        } else {
            ns.c cVar = ns.c.F;
            if (cVar.e()) {
                if (eVar == ns.e.f15695e) {
                    j5 = 0;
                } else {
                    j5 = 0;
                    if (eVar == ns.e.f15696i) {
                        if (j7 < 0) {
                            throw new IllegalArgumentException(k0.d.j(j7, "TAI not supported before 1958-01-01: "));
                        }
                        if (j7 < 441763200) {
                            long z5 = w3.q.z(j7, -441763168L);
                            int y5 = w3.q.y(i6, 184000000);
                            if (y5 >= 1000000000) {
                                z5 = w3.q.z(z5, 1L);
                                y5 = w3.q.C(y5, 1000000000);
                            }
                            double d6 = (y5 / 1.0E9d) + z5;
                            double a = d6 - ns.e.a(w0.B(w3.q.m(86400, (long) (d6 - 42.184d)), ks.l.UTC));
                            floor = (long) Math.floor(a);
                            i6 = t(a, floor);
                        } else {
                            floor = w3.q.D(j7, 441763210L);
                        }
                    } else if (eVar == ns.e.f15697v) {
                        long z6 = w3.q.z(j7, 252892809L);
                        if (z6 < 252892809) {
                            throw new IllegalArgumentException(k0.d.j(j7, "GPS not supported before 1980-01-06: "));
                        }
                        floor = z6;
                    } else if (eVar == ns.e.f15698w) {
                        if (j7 >= 42 && (j7 != 42 || i6 >= 184000000)) {
                            j7 = w3.q.D(j7, 42L);
                            i6 = w3.q.C(i6, 184000000);
                            if (i6 < 0) {
                                j7 = w3.q.D(j7, 1L);
                                i6 = w3.q.y(i6, 1000000000);
                            }
                        } else {
                            double d7 = (i6 / 1.0E9d) + j7;
                            double a10 = d7 - ns.e.a(w0.B(w3.q.m(86400, (long) (d7 - 42.184d)), ks.l.UTC));
                            floor = (long) Math.floor(a10);
                            i6 = t(a10, floor);
                        }
                    } else {
                        if (eVar != ns.e.f15699x) {
                            throw new UnsupportedOperationException("Not yet implemented: " + eVar.name());
                        }
                        if (j7 >= 0) {
                            double a11 = (ns.e.a(w0.B(w3.q.m(86400, j7), ks.l.UTC)) + ((i6 / 1.0E9d) + j7)) - 42.184d;
                            floor = (long) Math.floor(a11);
                            i6 = t(a11, floor);
                        }
                    }
                    long j10 = cVar.j(floor);
                    b10 = floor - cVar.b(j10);
                    this.f15306d = j10;
                    if (b10 != j5 || j10 == f15302v) {
                        this.f15307e = i6;
                    } else if (b10 == 1) {
                        this.f15307e = 1073741824 | i6;
                    } else {
                        throw new IllegalStateException(a3.e.g(j7, "Cannot handle leap shift of ", "."));
                    }
                }
                floor = j7;
                long j102 = cVar.j(floor);
                b10 = floor - cVar.b(j102);
                this.f15306d = j102;
                if (b10 != j5) {
                }
                this.f15307e = i6;
            } else {
                throw new IllegalStateException("Leap seconds are not supported by configuration.");
            }
        }
        m(this.f15306d);
        if (i6 >= 1000000000 || i6 < 0) {
            throw new IllegalArgumentException(k0.d.i(i6, "Nanosecond out of range: "));
        }
    }

    @Override // ks.e
    public final ks.e f() {
        return this;
    }
}
