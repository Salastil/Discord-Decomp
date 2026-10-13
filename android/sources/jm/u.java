package jm;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
/* loaded from: classes3.dex */
public final class u {

    /* renamed from: d, reason: collision with root package name */
    public static final u f12946d;

    /* renamed from: e, reason: collision with root package name */
    public static final u f12947e;

    /* renamed from: i, reason: collision with root package name */
    public static final u f12948i;

    /* renamed from: v, reason: collision with root package name */
    public static final u f12949v;

    /* renamed from: w, reason: collision with root package name */
    public static final /* synthetic */ u[] f12950w;

    static {
        u uVar = new u("NONE", 0);
        f12946d = uVar;
        u uVar2 = new u("BOX_NONE", 1);
        f12947e = uVar2;
        u uVar3 = new u("BOX_ONLY", 2);
        f12948i = uVar3;
        u uVar4 = new u("AUTO", 3);
        f12949v = uVar4;
        u[] uVarArr = {uVar, uVar2, uVar3, uVar4};
        f12950w = uVarArr;
        ki.b.p(uVarArr);
    }

    public static u valueOf(String str) {
        return (u) Enum.valueOf(u.class, str);
    }

    public static u[] values() {
        return (u[]) f12950w.clone();
    }
}
