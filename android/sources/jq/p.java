package jq;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
/* loaded from: classes3.dex */
public final class p {

    /* renamed from: d, reason: collision with root package name */
    public static final p f13091d;

    /* renamed from: e, reason: collision with root package name */
    public static final p f13092e;

    /* renamed from: i, reason: collision with root package name */
    public static final /* synthetic */ p[] f13093i;

    static {
        p pVar = new p("PRETTY", 0);
        p pVar2 = new p("DEBUG", 1);
        f13091d = pVar2;
        p pVar3 = new p("NONE", 2);
        f13092e = pVar3;
        p[] pVarArr = {pVar, pVar2, pVar3};
        f13093i = pVarArr;
        ki.b.p(pVarArr);
    }

    public static p valueOf(String str) {
        return (p) Enum.valueOf(p.class, str);
    }

    public static p[] values() {
        return (p[]) f13093i.clone();
    }
}
