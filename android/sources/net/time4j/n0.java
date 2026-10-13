package net.time4j;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
/* loaded from: classes3.dex */
public final class n0 implements ks.d, ks.j {

    /* renamed from: d, reason: collision with root package name */
    public static final n0 f15287d;

    /* renamed from: e, reason: collision with root package name */
    public static final /* synthetic */ n0[] f15288e;

    static {
        n0 n0Var = new n0("POSIX_TIME", 0);
        f15287d = n0Var;
        f15288e = new n0[]{n0Var};
    }

    public static n0 valueOf(String str) {
        return (n0) Enum.valueOf(n0.class, str);
    }

    public static n0[] values() {
        return (n0[]) f15288e.clone();
    }

    @Override // ks.d
    public final Object a() {
        return Long.valueOf(q0.f15302v);
    }

    @Override // ks.j
    public final Object b(ks.e eVar, Object obj, boolean z5) {
        q0 q0Var = (q0) eVar;
        Long l6 = (Long) obj;
        if (l6 != null) {
            return q0.s(l6.longValue(), q0Var.r(), ns.e.f15694d);
        }
        throw new IllegalArgumentException("Missing elapsed seconds.");
    }

    @Override // ks.j
    public final Object c(ks.e eVar) {
        return Long.valueOf(((q0) eVar).f15306d);
    }

    @Override // java.util.Comparator
    public final int compare(Object obj, Object obj2) {
        return ((Long) ((ks.e) obj).d(this)).compareTo((Long) ((ks.e) obj2).d(this));
    }

    @Override // ks.j
    public final Object d(ks.e eVar) {
        return Long.valueOf(q0.f15302v);
    }

    @Override // ks.d
    public final Class getType() {
        return Long.class;
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
    public final Object v() {
        return Long.valueOf(q0.f15301i);
    }

    @Override // ks.d
    public final boolean w() {
        return false;
    }
}
