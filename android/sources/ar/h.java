package ar;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
/* loaded from: classes3.dex */
public final class h {

    /* renamed from: e, reason: collision with root package name */
    public static final h f2668e;

    /* renamed from: i, reason: collision with root package name */
    public static final h f2669i;

    /* renamed from: v, reason: collision with root package name */
    public static final h f2670v;

    /* renamed from: w, reason: collision with root package name */
    public static final h f2671w;

    /* renamed from: x, reason: collision with root package name */
    public static final h f2672x;

    /* renamed from: y, reason: collision with root package name */
    public static final /* synthetic */ h[] f2673y;

    /* renamed from: d, reason: collision with root package name */
    public final String f2674d;

    static {
        h hVar = new h("CAPTURED_TYPE_SCOPE", 0, "No member resolution should be done on captured type, it used only during constraint system resolution");
        f2668e = hVar;
        h hVar2 = new h("INTEGER_LITERAL_TYPE_SCOPE", 1, "Scope for integer literal type (%s)");
        f2669i = hVar2;
        h hVar3 = new h("ERASED_RECEIVER_TYPE_SCOPE", 2, "Error scope for erased receiver type");
        h hVar4 = new h("SCOPE_FOR_ABBREVIATION_TYPE", 3, "Scope for abbreviation %s");
        f2670v = hVar4;
        h hVar5 = new h("STUB_TYPE_SCOPE", 4, "Scope for stub type %s");
        h hVar6 = new h("NON_CLASSIFIER_SUPER_TYPE_SCOPE", 5, "A scope for common supertype which is not a normal classifier");
        h hVar7 = new h("ERROR_TYPE_SCOPE", 6, "Scope for error type %s");
        f2671w = hVar7;
        h hVar8 = new h("UNSUPPORTED_TYPE_SCOPE", 7, "Scope for unsupported type %s");
        h hVar9 = new h("SCOPE_FOR_ERROR_CLASS", 8, "Error scope for class %s with arguments: %s");
        f2672x = hVar9;
        h[] hVarArr = {hVar, hVar2, hVar3, hVar4, hVar5, hVar6, hVar7, hVar8, hVar9, new h("SCOPE_FOR_ERROR_RESOLUTION_CANDIDATE", 9, "Error resolution candidate for call %s")};
        f2673y = hVarArr;
        ki.b.p(hVarArr);
    }

    public h(String str, int i5, String str2) {
        this.f2674d = str2;
    }

    public static h valueOf(String str) {
        return (h) Enum.valueOf(h.class, str);
    }

    public static h[] values() {
        return (h[]) f2673y.clone();
    }
}
