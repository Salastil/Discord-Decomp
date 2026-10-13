package zp;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
/* loaded from: classes3.dex */
public final class e {

    /* renamed from: d, reason: collision with root package name */
    public static final e f21348d;

    /* renamed from: e, reason: collision with root package name */
    public static final e f21349e;

    /* renamed from: i, reason: collision with root package name */
    public static final /* synthetic */ e[] f21350i;

    static {
        e eVar = new e("READ_ONLY", 0);
        f21348d = eVar;
        e eVar2 = new e("MUTABLE", 1);
        f21349e = eVar2;
        e[] eVarArr = {eVar, eVar2};
        f21350i = eVarArr;
        ki.b.p(eVarArr);
    }

    public static e valueOf(String str) {
        return (e) Enum.valueOf(e.class, str);
    }

    public static e[] values() {
        return (e[]) f21350i.clone();
    }
}
