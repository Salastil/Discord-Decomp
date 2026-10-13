package cc;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
/* loaded from: classes3.dex */
public final class d {

    /* renamed from: d, reason: collision with root package name */
    public static final d f3370d;

    /* renamed from: e, reason: collision with root package name */
    public static final d f3371e;

    /* renamed from: i, reason: collision with root package name */
    public static final d f3372i;

    /* renamed from: v, reason: collision with root package name */
    public static final /* synthetic */ d[] f3373v;

    static {
        d dVar = new d("NETWORK_UNMETERED", 0);
        f3370d = dVar;
        d dVar2 = new d("DEVICE_IDLE", 1);
        f3371e = dVar2;
        d dVar3 = new d("DEVICE_CHARGING", 2);
        f3372i = dVar3;
        f3373v = new d[]{dVar, dVar2, dVar3};
    }

    public static d valueOf(String str) {
        return (d) Enum.valueOf(d.class, str);
    }

    public static d[] values() {
        return (d[]) f3373v.clone();
    }
}
