package mq;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
/* loaded from: classes3.dex */
public final class n {

    /* renamed from: d, reason: collision with root package name */
    public static final /* synthetic */ n[] f14580d;

    static {
        n[] nVarArr = {new n("COMMON_SUPER_TYPE", 0), new n("INTERSECTION_TYPE", 1)};
        f14580d = nVarArr;
        ki.b.p(nVarArr);
    }

    public static n valueOf(String str) {
        return (n) Enum.valueOf(n.class, str);
    }

    public static n[] values() {
        return (n[]) f14580d.clone();
    }
}
