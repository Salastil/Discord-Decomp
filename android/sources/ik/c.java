package ik;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
/* loaded from: classes3.dex */
public final class c {
    public static final /* synthetic */ c[] E;

    /* renamed from: d, reason: collision with root package name */
    public static final c f10941d;

    /* renamed from: e, reason: collision with root package name */
    public static final c f10942e;

    /* renamed from: i, reason: collision with root package name */
    public static final c f10943i;

    /* renamed from: v, reason: collision with root package name */
    public static final c f10944v;

    /* renamed from: w, reason: collision with root package name */
    public static final c f10945w;

    /* renamed from: x, reason: collision with root package name */
    public static final c f10946x;

    /* renamed from: y, reason: collision with root package name */
    public static final c f10947y;

    static {
        c cVar = new c("DAY", 0);
        f10941d = cVar;
        c cVar2 = new c("DATE", 1);
        f10942e = cVar2;
        c cVar3 = new c("MONTH", 2);
        f10943i = cVar3;
        c cVar4 = new c("YEAR", 3);
        f10944v = cVar4;
        c cVar5 = new c("HOUR", 4);
        f10945w = cVar5;
        c cVar6 = new c("MINUTE", 5);
        f10946x = cVar6;
        c cVar7 = new c("AM_PM", 6);
        f10947y = cVar7;
        E = new c[]{cVar, cVar2, cVar3, cVar4, cVar5, cVar6, cVar7};
    }

    public static c valueOf(String str) {
        return (c) Enum.valueOf(c.class, str);
    }

    public static c[] values() {
        return (c[]) E.clone();
    }
}
