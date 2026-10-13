package zm;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
/* loaded from: classes3.dex */
public final class i {

    /* renamed from: d, reason: collision with root package name */
    public static final i f21298d;

    /* renamed from: e, reason: collision with root package name */
    public static final i f21299e;

    /* renamed from: i, reason: collision with root package name */
    public static final i f21300i;

    /* renamed from: v, reason: collision with root package name */
    public static final /* synthetic */ i[] f21301v;

    static {
        i iVar = new i("SMALL", 0);
        f21298d = iVar;
        i iVar2 = new i("MEDIUM", 1);
        f21299e = iVar2;
        i iVar3 = new i("LARGE", 2);
        f21300i = iVar3;
        i[] iVarArr = {iVar, iVar2, iVar3};
        f21301v = iVarArr;
        ki.b.p(iVarArr);
    }

    public static i valueOf(String str) {
        return (i) Enum.valueOf(i.class, str);
    }

    public static i[] values() {
        return (i[]) f21301v.clone();
    }
}
