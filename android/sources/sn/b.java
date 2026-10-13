package sn;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
/* loaded from: classes3.dex */
public final class b {

    /* renamed from: d, reason: collision with root package name */
    public static final b f18070d;

    /* renamed from: e, reason: collision with root package name */
    public static final b f18071e;

    /* renamed from: i, reason: collision with root package name */
    public static final /* synthetic */ b[] f18072i;

    static {
        b bVar = new b("OnErrorDiscard", 0);
        f18070d = bVar;
        b bVar2 = new b("OnErrorRecover", 1);
        f18071e = bVar2;
        f18072i = new b[]{bVar, bVar2};
    }

    public static b valueOf(String str) {
        return (b) Enum.valueOf(b.class, str);
    }

    public static b[] values() {
        return (b[]) f18072i.clone();
    }
}
