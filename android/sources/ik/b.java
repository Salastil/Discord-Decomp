package ik;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
/* loaded from: classes3.dex */
public final class b {

    /* renamed from: d, reason: collision with root package name */
    public static final b f10937d;

    /* renamed from: e, reason: collision with root package name */
    public static final b f10938e;

    /* renamed from: i, reason: collision with root package name */
    public static final b f10939i;

    /* renamed from: v, reason: collision with root package name */
    public static final /* synthetic */ b[] f10940v;

    static {
        b bVar = new b("date", 0);
        f10937d = bVar;
        b bVar2 = new b("time", 1);
        f10938e = bVar2;
        b bVar3 = new b("datetime", 2);
        f10939i = bVar3;
        f10940v = new b[]{bVar, bVar2, bVar3};
    }

    public static b valueOf(String str) {
        return (b) Enum.valueOf(b.class, str);
    }

    public static b[] values() {
        return (b[]) f10940v.clone();
    }
}
