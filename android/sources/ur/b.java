package ur;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
/* loaded from: classes3.dex */
public final class b {

    /* renamed from: d, reason: collision with root package name */
    public static final b f19080d;

    /* renamed from: e, reason: collision with root package name */
    public static final b f19081e;

    /* renamed from: i, reason: collision with root package name */
    public static final b f19082i;

    /* renamed from: v, reason: collision with root package name */
    public static final b f19083v;

    /* renamed from: w, reason: collision with root package name */
    public static final b f19084w;

    /* renamed from: x, reason: collision with root package name */
    public static final /* synthetic */ b[] f19085x;

    static {
        b bVar = new b("CPU_ACQUIRED", 0);
        f19080d = bVar;
        b bVar2 = new b("BLOCKING", 1);
        f19081e = bVar2;
        b bVar3 = new b("PARKING", 2);
        f19082i = bVar3;
        b bVar4 = new b("DORMANT", 3);
        f19083v = bVar4;
        b bVar5 = new b("TERMINATED", 4);
        f19084w = bVar5;
        b[] bVarArr = {bVar, bVar2, bVar3, bVar4, bVar5};
        f19085x = bVarArr;
        ki.b.p(bVarArr);
    }

    public static b valueOf(String str) {
        return (b) Enum.valueOf(b.class, str);
    }

    public static b[] values() {
        return (b[]) f19085x.clone();
    }
}
