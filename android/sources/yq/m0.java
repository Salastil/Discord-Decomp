package yq;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
/* loaded from: classes3.dex */
public final class m0 {

    /* renamed from: d, reason: collision with root package name */
    public static final /* synthetic */ m0[] f21050d;

    static {
        m0[] m0VarArr = {new m0("CHECK_ONLY_LOWER", 0), new m0("CHECK_SUBTYPE_AND_LOWER", 1), new m0("SKIP_LOWER", 2)};
        f21050d = m0VarArr;
        ki.b.p(m0VarArr);
    }

    public static m0 valueOf(String str) {
        return (m0) Enum.valueOf(m0.class, str);
    }

    public static m0[] values() {
        return (m0[]) f21050d.clone();
    }
}
