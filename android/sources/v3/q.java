package v3;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
/* loaded from: classes.dex */
public final class q {

    /* renamed from: d, reason: collision with root package name */
    public static final q f19212d;

    /* renamed from: e, reason: collision with root package name */
    public static final q f19213e;

    /* renamed from: i, reason: collision with root package name */
    public static final q f19214i;

    /* renamed from: v, reason: collision with root package name */
    public static final q f19215v;

    /* renamed from: w, reason: collision with root package name */
    public static final q f19216w;

    /* renamed from: x, reason: collision with root package name */
    public static final q f19217x;

    /* renamed from: y, reason: collision with root package name */
    public static final /* synthetic */ q[] f19218y;

    static {
        q qVar = new q("NOT_REQUIRED", 0);
        f19212d = qVar;
        q qVar2 = new q("CONNECTED", 1);
        f19213e = qVar2;
        q qVar3 = new q("UNMETERED", 2);
        f19214i = qVar3;
        q qVar4 = new q("NOT_ROAMING", 3);
        f19215v = qVar4;
        q qVar5 = new q("METERED", 4);
        f19216w = qVar5;
        q qVar6 = new q("TEMPORARILY_UNMETERED", 5);
        f19217x = qVar6;
        f19218y = new q[]{qVar, qVar2, qVar3, qVar4, qVar5, qVar6};
    }

    public static q valueOf(String str) {
        return (q) Enum.valueOf(q.class, str);
    }

    public static q[] values() {
        return (q[]) f19218y.clone();
    }
}
