package net.time4j;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
/* loaded from: classes3.dex */
public final class m0 implements ks.d, ks.j {

    /* renamed from: d, reason: collision with root package name */
    public static final m0 f15284d;

    /* renamed from: e, reason: collision with root package name */
    public static final /* synthetic */ m0[] f15285e;

    static {
        m0 m0Var = new m0("FRACTION", 0);
        f15284d = m0Var;
        f15285e = new m0[]{m0Var};
    }

    public static m0 valueOf(String str) {
        return (m0) Enum.valueOf(m0.class, str);
    }

    public static m0[] values() {
        return (m0[]) f15285e.clone();
    }

    @Override // ks.d
    public final /* bridge */ /* synthetic */ Object a() {
        return 999999999;
    }

    @Override // ks.j
    public final Object b(ks.e eVar, Object obj, boolean z5) {
        int t5;
        long j;
        q0 q0Var = (q0) eVar;
        Integer num = (Integer) obj;
        if (num == null) {
            throw new IllegalArgumentException("Missing fraction value.");
        }
        if (!ns.c.F.e()) {
            return q0.s(q0Var.f15306d, num.intValue(), ns.e.f15694d);
        }
        long j5 = q0Var.f15306d;
        ns.e eVar2 = ns.e.f15695e;
        int ordinal = eVar2.ordinal();
        if (ordinal != 0) {
            if (ordinal == 1) {
                j5 = q0Var.q();
            } else if (ordinal == 2) {
                if (q0Var.q() < 0) {
                    double r5 = (q0Var.r() / 1.0E9d) + ns.e.a(q0Var.p()) + (j5 - 63072000);
                    long floor = (long) Math.floor(r5);
                    if (Double.compare(1.0E9d - ((r5 - floor) * 1.0E9d), 1.0d) < 0) {
                        floor++;
                        t5 = 0;
                    } else {
                        t5 = q0.t(r5, floor);
                    }
                    long j7 = floor - (-441763168);
                    if (t5 - 184000000 < 0) {
                        j7 = floor - (-441763167);
                    }
                    j5 = j7;
                } else {
                    j5 = q0Var.q() + 441763210;
                }
                if (j5 < 0) {
                    throw new IllegalArgumentException("TAI not supported before 1958-01-01: " + q0Var);
                }
            } else if (ordinal == 3) {
                long q5 = q0Var.q();
                ns.c cVar = ns.c.F;
                if (cVar.j(q5) < 315964800) {
                    throw new IllegalArgumentException("GPS not supported before 1980-01-06: " + q0Var);
                }
                if (!cVar.e()) {
                    q5 += 9;
                }
                j5 = q5 - 252892809;
            } else if (ordinal != 4) {
                if (ordinal != 5) {
                    throw new UnsupportedOperationException("Not yet implemented: " + eVar2);
                }
                if (j5 < 63072000) {
                    j5 -= 63072000;
                } else {
                    double r7 = ((q0Var.r() / 1.0E9d) + (q0Var.q() + 42.184d)) - ns.e.a(q0Var.p());
                    long floor2 = (long) Math.floor(r7);
                    if (Double.compare(1.0E9d - ((r7 - floor2) * 1.0E9d), 1.0d) < 0) {
                        r7 = floor2 + 1;
                    }
                    j5 = (long) Math.floor(r7);
                }
            } else if (j5 < 63072000) {
                double r10 = (q0Var.r() / 1.0E9d) + ns.e.a(q0Var.p()) + (j5 - 63072000);
                j = (long) Math.floor(r10);
                if (Double.compare(1.0E9d - ((r10 - j) * 1.0E9d), 1.0d) < 0) {
                    j5 = j + 1;
                }
                j5 = j;
            } else {
                long q6 = q0Var.q();
                j = 42 + q6;
                if (q0Var.r() + 184000000 >= 1000000000) {
                    j5 = q6 + 43;
                }
                j5 = j;
            }
        }
        return q0.s(j5, num.intValue(), eVar2);
    }

    @Override // ks.j
    public final Object c(ks.e eVar) {
        return Integer.valueOf(((q0) eVar).r());
    }

    @Override // java.util.Comparator
    public final int compare(Object obj, Object obj2) {
        return ((Integer) ((ks.e) obj).d(this)).compareTo((Integer) ((ks.e) obj2).d(this));
    }

    @Override // ks.j
    public final /* bridge */ /* synthetic */ Object d(ks.e eVar) {
        return 999999999;
    }

    @Override // ks.d
    public final Class getType() {
        return Integer.class;
    }

    @Override // ks.d
    public final boolean h() {
        return false;
    }

    @Override // ks.d
    public final boolean i() {
        return false;
    }

    @Override // ks.d
    public final /* bridge */ /* synthetic */ Object v() {
        return 0;
    }

    @Override // ks.d
    public final boolean w() {
        return false;
    }
}
