package bn;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
/* loaded from: classes3.dex */
public final class q {

    /* renamed from: d, reason: collision with root package name */
    public static final q f3094d;

    /* renamed from: e, reason: collision with root package name */
    public static final q f3095e;

    /* renamed from: i, reason: collision with root package name */
    public static final q f3096i;

    /* renamed from: v, reason: collision with root package name */
    public static final q f3097v;

    /* renamed from: w, reason: collision with root package name */
    public static final q f3098w;

    /* renamed from: x, reason: collision with root package name */
    public static final /* synthetic */ q[] f3099x;

    static {
        q qVar = new q("ALWAYS", 0);
        f3094d = qVar;
        q qVar2 = new q("ALWAYS_WITH_TEXT", 1);
        f3095e = qVar2;
        q qVar3 = new q("IF_ROOM", 2);
        f3096i = qVar3;
        q qVar4 = new q("IF_ROOM_WITH_TEXT", 3);
        f3097v = qVar4;
        q qVar5 = new q("NEVER", 4);
        f3098w = qVar5;
        q[] qVarArr = {qVar, qVar2, qVar3, qVar4, qVar5};
        f3099x = qVarArr;
        ki.b.p(qVarArr);
    }

    public static q valueOf(String str) {
        return (q) Enum.valueOf(q.class, str);
    }

    public static q[] values() {
        return (q[]) f3099x.clone();
    }
}
