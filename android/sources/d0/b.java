package d0;

/* loaded from: classes.dex */
public abstract class b {
    public static final long a;

    /* renamed from: b, reason: collision with root package name */
    public static final long f7346b;

    /* renamed from: c, reason: collision with root package name */
    public static final long f7347c;

    /* renamed from: d, reason: collision with root package name */
    public static final long f7348d;

    /* renamed from: e, reason: collision with root package name */
    public static final /* synthetic */ int f7349e = 0;

    static {
        long j = 3;
        long j5 = j << 32;
        a = (0 & 4294967295L) | j5;
        f7346b = (1 & 4294967295L) | j5;
        f7347c = j5 | (2 & 4294967295L);
        f7348d = (j & 4294967295L) | (4 << 32);
    }

    public static final boolean a(long j, long j5) {
        return j == j5;
    }
}
