package ls;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
/* loaded from: classes3.dex */
public final class y {

    /* renamed from: d, reason: collision with root package name */
    public static final y f14250d;

    /* renamed from: e, reason: collision with root package name */
    public static final y f14251e;

    /* renamed from: i, reason: collision with root package name */
    public static final /* synthetic */ y[] f14252i;

    static {
        y yVar = new y("FORMAT", 0);
        f14250d = yVar;
        y yVar2 = new y("STANDALONE", 1);
        f14251e = yVar2;
        f14252i = new y[]{yVar, yVar2};
    }

    public static y valueOf(String str) {
        return (y) Enum.valueOf(y.class, str);
    }

    public static y[] values() {
        return (y[]) f14252i.clone();
    }
}
