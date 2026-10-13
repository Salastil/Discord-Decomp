package v3;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
/* loaded from: classes.dex */
public final class x {

    /* renamed from: d, reason: collision with root package name */
    public static final x f19221d;

    /* renamed from: e, reason: collision with root package name */
    public static final x f19222e;

    /* renamed from: i, reason: collision with root package name */
    public static final /* synthetic */ x[] f19223i;

    static {
        x xVar = new x("RUN_AS_NON_EXPEDITED_WORK_REQUEST", 0);
        f19221d = xVar;
        x xVar2 = new x("DROP_WORK_REQUEST", 1);
        f19222e = xVar2;
        f19223i = new x[]{xVar, xVar2};
    }

    public static x valueOf(String str) {
        return (x) Enum.valueOf(x.class, str);
    }

    public static x[] values() {
        return (x[]) f19223i.clone();
    }
}
