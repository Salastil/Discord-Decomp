package jq;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
/* loaded from: classes3.dex */
public final class n {

    /* renamed from: d, reason: collision with root package name */
    public static final n f13084d;

    /* renamed from: e, reason: collision with root package name */
    public static final n f13085e;

    /* renamed from: i, reason: collision with root package name */
    public static final /* synthetic */ n[] f13086i;

    static {
        n nVar = new n("RENDER_OVERRIDE", 0);
        f13084d = nVar;
        n nVar2 = new n("RENDER_OPEN", 1);
        f13085e = nVar2;
        n[] nVarArr = {nVar, nVar2, new n("RENDER_OPEN_OVERRIDE", 2)};
        f13086i = nVarArr;
        ki.b.p(nVarArr);
    }

    public static n valueOf(String str) {
        return (n) Enum.valueOf(n.class, str);
    }

    public static n[] values() {
        return (n[]) f13086i.clone();
    }
}
