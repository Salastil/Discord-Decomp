package hq;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
/* loaded from: classes3.dex */
public final class i {

    /* renamed from: d, reason: collision with root package name */
    public static final i f10238d;

    /* renamed from: e, reason: collision with root package name */
    public static final i f10239e;

    /* renamed from: i, reason: collision with root package name */
    public static final i f10240i;

    /* renamed from: v, reason: collision with root package name */
    public static final /* synthetic */ i[] f10241v;

    static {
        i iVar = new i("BEGINNING", 0);
        f10238d = iVar;
        i iVar2 = new i("MIDDLE", 1);
        f10239e = iVar2;
        i iVar3 = new i("AFTER_DOT", 2);
        f10240i = iVar3;
        i[] iVarArr = {iVar, iVar2, iVar3};
        f10241v = iVarArr;
        ki.b.p(iVarArr);
    }

    public static i valueOf(String str) {
        return (i) Enum.valueOf(i.class, str);
    }

    public static i[] values() {
        return (i[]) f10241v.clone();
    }
}
