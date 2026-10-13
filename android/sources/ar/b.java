package ar;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
/* loaded from: classes3.dex */
public final class b {

    /* renamed from: d, reason: collision with root package name */
    public static final /* synthetic */ b[] f2660d;

    static {
        b[] bVarArr = {new b("ERROR_CLASS", 0), new b("ERROR_FUNCTION", 1), new b("ERROR_SCOPE", 2), new b("ERROR_MODULE", 3), new b("ERROR_PROPERTY", 4), new b("ERROR_TYPE", 5), new b("PARENT_OF_ERROR_SCOPE", 6)};
        f2660d = bVarArr;
        ki.b.p(bVarArr);
    }

    public static b valueOf(String str) {
        return (b) Enum.valueOf(b.class, str);
    }

    public static b[] values() {
        return (b[]) f2660d.clone();
    }
}
