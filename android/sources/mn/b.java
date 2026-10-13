package mn;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
/* loaded from: classes3.dex */
public final class b {

    /* renamed from: d, reason: collision with root package name */
    public static final b f14555d;

    /* renamed from: e, reason: collision with root package name */
    public static final b f14556e;

    /* renamed from: i, reason: collision with root package name */
    public static final b f14557i;

    /* renamed from: v, reason: collision with root package name */
    public static final /* synthetic */ b[] f14558v;

    static {
        b bVar = new b("ALL", 0);
        f14555d = bVar;
        b bVar2 = new b("SYSTEM", 1);
        f14556e = bVar2;
        b bVar3 = new b("INTERFACE", 2);
        f14557i = bVar3;
        b[] bVarArr = {bVar, bVar2, bVar3};
        f14558v = bVarArr;
        ki.b.p(bVarArr);
    }

    public static b valueOf(String str) {
        return (b) Enum.valueOf(b.class, str);
    }

    public static b[] values() {
        return (b[]) f14558v.clone();
    }
}
