package td;

/* loaded from: classes3.dex */
public abstract class g implements Comparable {
    public final String E;
    public final long F;
    public final long G;
    public final boolean H;

    /* renamed from: d, reason: collision with root package name */
    public final String f18284d;

    /* renamed from: e, reason: collision with root package name */
    public final f f18285e;

    /* renamed from: i, reason: collision with root package name */
    public final long f18286i;

    /* renamed from: v, reason: collision with root package name */
    public final int f18287v;

    /* renamed from: w, reason: collision with root package name */
    public final long f18288w;

    /* renamed from: x, reason: collision with root package name */
    public final nc.i f18289x;

    /* renamed from: y, reason: collision with root package name */
    public final String f18290y;

    public g(String str, f fVar, long j, int i5, long j5, nc.i iVar, String str2, String str3, long j7, long j10, boolean z5) {
        this.f18284d = str;
        this.f18285e = fVar;
        this.f18286i = j;
        this.f18287v = i5;
        this.f18288w = j5;
        this.f18289x = iVar;
        this.f18290y = str2;
        this.E = str3;
        this.F = j7;
        this.G = j10;
        this.H = z5;
    }

    @Override // java.lang.Comparable
    public final int compareTo(Object obj) {
        Long l6 = (Long) obj;
        long longValue = l6.longValue();
        long j = this.f18288w;
        if (j > longValue) {
            return 1;
        }
        return j < l6.longValue() ? -1 : 0;
    }
}
