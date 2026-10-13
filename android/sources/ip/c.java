package ip;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
/* loaded from: classes3.dex */
public final class c {

    /* renamed from: d, reason: collision with root package name */
    public static final c f12123d;

    /* renamed from: e, reason: collision with root package name */
    public static final c f12124e;

    /* renamed from: i, reason: collision with root package name */
    public static final c f12125i;

    /* renamed from: v, reason: collision with root package name */
    public static final c f12126v;

    /* renamed from: w, reason: collision with root package name */
    public static final /* synthetic */ c[] f12127w;

    static {
        c cVar = new c("DECLARATION", 0);
        f12123d = cVar;
        c cVar2 = new c("FAKE_OVERRIDE", 1);
        f12124e = cVar2;
        c cVar3 = new c("DELEGATION", 2);
        f12125i = cVar3;
        c cVar4 = new c("SYNTHESIZED", 3);
        f12126v = cVar4;
        f12127w = new c[]{cVar, cVar2, cVar3, cVar4};
    }

    public static c valueOf(String str) {
        return (c) Enum.valueOf(c.class, str);
    }

    public static c[] values() {
        return (c[]) f12127w.clone();
    }
}
