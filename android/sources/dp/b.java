package dp;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
/* loaded from: classes3.dex */
public final class b {

    /* renamed from: d, reason: collision with root package name */
    public static final b f7635d;

    /* renamed from: e, reason: collision with root package name */
    public static final b f7636e;

    /* renamed from: i, reason: collision with root package name */
    public static final /* synthetic */ b[] f7637i;

    static {
        b bVar = new b("JAVA", 0);
        f7635d = bVar;
        b bVar2 = new b("KOTLIN", 1);
        f7636e = bVar2;
        b[] bVarArr = {bVar, bVar2};
        f7637i = bVarArr;
        ki.b.p(bVarArr);
    }

    public static b valueOf(String str) {
        return (b) Enum.valueOf(b.class, str);
    }

    public static b[] values() {
        return (b[]) f7637i.clone();
    }
}
