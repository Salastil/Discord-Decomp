package ad;

/* loaded from: classes3.dex */
public final class g0 {
    public final String a;

    /* renamed from: b, reason: collision with root package name */
    public final int f365b;

    /* renamed from: c, reason: collision with root package name */
    public final int f366c;

    /* renamed from: d, reason: collision with root package name */
    public int f367d;

    /* renamed from: e, reason: collision with root package name */
    public String f368e;

    public g0(int i5, int i6) {
        this(Integer.MIN_VALUE, i5, i6);
    }

    public final void a() {
        int i5 = this.f367d;
        this.f367d = i5 == Integer.MIN_VALUE ? this.f365b : i5 + this.f366c;
        this.f368e = this.a + this.f367d;
    }

    public final void b() {
        if (this.f367d == Integer.MIN_VALUE) {
            throw new IllegalStateException("generateNewId() must be called before retrieving ids.");
        }
    }

    public g0(int i5, int i6, int i10) {
        String str;
        if (i5 != Integer.MIN_VALUE) {
            str = i5 + "/";
        } else {
            str = "";
        }
        this.a = str;
        this.f365b = i6;
        this.f366c = i10;
        this.f367d = Integer.MIN_VALUE;
        this.f368e = "";
    }
}
