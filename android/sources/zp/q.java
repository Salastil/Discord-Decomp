package zp;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
/* loaded from: classes3.dex */
public final class q {

    /* renamed from: d, reason: collision with root package name */
    public static final q f21377d;

    /* renamed from: e, reason: collision with root package name */
    public static final q f21378e;

    /* renamed from: i, reason: collision with root package name */
    public static final q f21379i;

    /* renamed from: v, reason: collision with root package name */
    public static final /* synthetic */ q[] f21380v;

    static {
        q qVar = new q("FLEXIBLE_LOWER", 0);
        f21377d = qVar;
        q qVar2 = new q("FLEXIBLE_UPPER", 1);
        f21378e = qVar2;
        q qVar3 = new q("INFLEXIBLE", 2);
        f21379i = qVar3;
        q[] qVarArr = {qVar, qVar2, qVar3};
        f21380v = qVarArr;
        ki.b.p(qVarArr);
    }

    public static q valueOf(String str) {
        return (q) Enum.valueOf(q.class, str);
    }

    public static q[] values() {
        return (q[]) f21380v.clone();
    }
}
