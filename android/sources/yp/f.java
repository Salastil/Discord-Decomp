package yp;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
/* loaded from: classes3.dex */
public final class f {

    /* renamed from: d, reason: collision with root package name */
    public static final /* synthetic */ f[] f21006d;

    static {
        f[] fVarArr = {new f("SOURCE", 0), new f("BINARY", 1)};
        f21006d = fVarArr;
        ki.b.p(fVarArr);
    }

    public static f valueOf(String str) {
        return (f) Enum.valueOf(f.class, str);
    }

    public static f[] values() {
        return (f[]) f21006d.clone();
    }
}
