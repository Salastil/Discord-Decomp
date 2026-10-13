package gp;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
/* loaded from: classes3.dex */
public final class d {

    /* renamed from: d, reason: collision with root package name */
    public static final wi.d f9426d;

    /* renamed from: e, reason: collision with root package name */
    public static final /* synthetic */ d[] f9427e;

    static {
        d[] dVarArr = {new d("Function", 0), new d("SuspendFunction", 1), new d("KFunction", 2), new d("KSuspendFunction", 3), new d("UNKNOWN", 4)};
        f9427e = dVarArr;
        ki.b.p(dVarArr);
        f9426d = new wi.d(7);
    }

    public static d valueOf(String str) {
        return (d) Enum.valueOf(d.class, str);
    }

    public static d[] values() {
        return (d[]) f9427e.clone();
    }
}
