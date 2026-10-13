package net.time4j;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
/* loaded from: classes3.dex */
public final class c implements ks.d {

    /* renamed from: d, reason: collision with root package name */
    public static final c f15227d;

    /* renamed from: e, reason: collision with root package name */
    public static final /* synthetic */ c[] f15228e;

    static {
        c cVar = new c("AM_PM_OF_DAY", 0);
        f15227d = cVar;
        f15228e = new c[]{cVar};
    }

    public static c valueOf(String str) {
        return (c) Enum.valueOf(c.class, str);
    }

    public static c[] values() {
        return (c[]) f15228e.clone();
    }

    @Override // ks.d
    public final /* bridge */ /* synthetic */ Object a() {
        return k0.f15266e;
    }

    @Override // java.util.Comparator
    public final int compare(Object obj, Object obj2) {
        return ((k0) ((ks.e) obj).d(this)).compareTo((k0) ((ks.e) obj2).d(this));
    }

    @Override // ks.d
    public final Class getType() {
        return k0.class;
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
        return k0.f15265d;
    }

    @Override // ks.d
    public final boolean w() {
        return true;
    }
}
