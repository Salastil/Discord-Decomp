package aq;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
/* loaded from: classes3.dex */
public final class c {

    /* renamed from: d, reason: collision with root package name */
    public static final c f2621d;

    /* renamed from: e, reason: collision with root package name */
    public static final c f2622e;

    /* renamed from: i, reason: collision with root package name */
    public static final c f2623i;

    /* renamed from: v, reason: collision with root package name */
    public static final /* synthetic */ c[] f2624v;

    static {
        c cVar = new c("PROPERTY", 0);
        f2621d = cVar;
        c cVar2 = new c("BACKING_FIELD", 1);
        f2622e = cVar2;
        c cVar3 = new c("DELEGATE_FIELD", 2);
        f2623i = cVar3;
        c[] cVarArr = {cVar, cVar2, cVar3};
        f2624v = cVarArr;
        ki.b.p(cVarArr);
    }

    public static c valueOf(String str) {
        return (c) Enum.valueOf(c.class, str);
    }

    public static c[] values() {
        return (c[]) f2624v.clone();
    }
}
