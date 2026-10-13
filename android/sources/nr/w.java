package nr;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
/* loaded from: classes3.dex */
public final class w {

    /* renamed from: d, reason: collision with root package name */
    public static final w f15668d;

    /* renamed from: e, reason: collision with root package name */
    public static final w f15669e;

    /* renamed from: i, reason: collision with root package name */
    public static final w f15670i;

    /* renamed from: v, reason: collision with root package name */
    public static final w f15671v;

    /* renamed from: w, reason: collision with root package name */
    public static final /* synthetic */ w[] f15672w;

    static {
        w wVar = new w("DEFAULT", 0);
        f15668d = wVar;
        w wVar2 = new w("LAZY", 1);
        f15669e = wVar2;
        w wVar3 = new w("ATOMIC", 2);
        f15670i = wVar3;
        w wVar4 = new w("UNDISPATCHED", 3);
        f15671v = wVar4;
        w[] wVarArr = {wVar, wVar2, wVar3, wVar4};
        f15672w = wVarArr;
        ki.b.p(wVarArr);
    }

    public static w valueOf(String str) {
        return (w) Enum.valueOf(w.class, str);
    }

    public static w[] values() {
        return (w[]) f15672w.clone();
    }
}
