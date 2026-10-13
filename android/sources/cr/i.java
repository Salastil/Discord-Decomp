package cr;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
/* loaded from: classes3.dex */
public final class i {

    /* renamed from: e, reason: collision with root package name */
    public static final i f7318e;

    /* renamed from: i, reason: collision with root package name */
    public static final i f7319i;

    /* renamed from: v, reason: collision with root package name */
    public static final i f7320v;

    /* renamed from: w, reason: collision with root package name */
    public static final /* synthetic */ i[] f7321w;

    /* renamed from: d, reason: collision with root package name */
    public final String f7322d;

    static {
        i iVar = new i("IN", 0, "in");
        f7318e = iVar;
        i iVar2 = new i("OUT", 1, "out");
        f7319i = iVar2;
        i iVar3 = new i("INV", 2, "");
        f7320v = iVar3;
        i[] iVarArr = {iVar, iVar2, iVar3};
        f7321w = iVarArr;
        ki.b.p(iVarArr);
    }

    public i(String str, int i5, String str2) {
        this.f7322d = str2;
    }

    public static i valueOf(String str) {
        return (i) Enum.valueOf(i.class, str);
    }

    public static i[] values() {
        return (i[]) f7321w.clone();
    }

    @Override // java.lang.Enum
    public final String toString() {
        return this.f7322d;
    }
}
