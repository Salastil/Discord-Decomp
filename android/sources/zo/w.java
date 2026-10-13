package zo;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
/* loaded from: classes3.dex */
public final class w {

    /* renamed from: d, reason: collision with root package name */
    public static final w f21333d;

    /* renamed from: e, reason: collision with root package name */
    public static final w f21334e;

    /* renamed from: i, reason: collision with root package name */
    public static final w f21335i;

    /* renamed from: v, reason: collision with root package name */
    public static final /* synthetic */ w[] f21336v;

    static {
        w wVar = new w("INVARIANT", 0);
        f21333d = wVar;
        w wVar2 = new w("IN", 1);
        f21334e = wVar2;
        w wVar3 = new w("OUT", 2);
        f21335i = wVar3;
        w[] wVarArr = {wVar, wVar2, wVar3};
        f21336v = wVarArr;
        ki.b.p(wVarArr);
    }

    public static w valueOf(String str) {
        return (w) Enum.valueOf(w.class, str);
    }

    public static w[] values() {
        return (w[]) f21336v.clone();
    }
}
