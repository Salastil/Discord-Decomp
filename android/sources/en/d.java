package en;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
/* loaded from: classes3.dex */
public final class d {

    /* renamed from: d, reason: collision with root package name */
    public static final d f8168d;

    /* renamed from: e, reason: collision with root package name */
    public static final d f8169e;

    /* renamed from: i, reason: collision with root package name */
    public static final /* synthetic */ d[] f8170i;

    static {
        d dVar = new d("DETACHED", 0);
        f8168d = dVar;
        d dVar2 = new d("ATTACHED", 1);
        f8169e = dVar2;
        d[] dVarArr = {dVar, dVar2};
        f8170i = dVarArr;
        ki.b.p(dVarArr);
    }

    public static d valueOf(String str) {
        return (d) Enum.valueOf(d.class, str);
    }

    public static d[] values() {
        return (d[]) f8170i.clone();
    }
}
