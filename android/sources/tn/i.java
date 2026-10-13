package tn;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
/* loaded from: classes3.dex */
public final class i {

    /* renamed from: d, reason: collision with root package name */
    public static final i f18671d;

    /* renamed from: e, reason: collision with root package name */
    public static final i f18672e;

    /* renamed from: i, reason: collision with root package name */
    public static final i f18673i;

    /* renamed from: v, reason: collision with root package name */
    public static final /* synthetic */ i[] f18674v;

    static {
        i iVar = new i("OFF", 0);
        f18671d = iVar;
        i iVar2 = new i("ADDITIVE", 1);
        f18672e = iVar2;
        i iVar3 = new i("MAXIMUM", 2);
        f18673i = iVar3;
        i[] iVarArr = {iVar, iVar2, iVar3};
        f18674v = iVarArr;
        ki.b.p(iVarArr);
    }

    public static i valueOf(String str) {
        return (i) Enum.valueOf(i.class, str);
    }

    public static i[] values() {
        return (i[]) f18674v.clone();
    }
}
