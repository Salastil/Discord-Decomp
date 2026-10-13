package hc;

/* loaded from: classes3.dex */
public final class w0 {
    public final nd.s a;

    /* renamed from: b, reason: collision with root package name */
    public final long f9930b;

    /* renamed from: c, reason: collision with root package name */
    public final long f9931c;

    /* renamed from: d, reason: collision with root package name */
    public final long f9932d;

    /* renamed from: e, reason: collision with root package name */
    public final long f9933e;

    /* renamed from: f, reason: collision with root package name */
    public final boolean f9934f;

    /* renamed from: g, reason: collision with root package name */
    public final boolean f9935g;

    /* renamed from: h, reason: collision with root package name */
    public final boolean f9936h;

    /* renamed from: i, reason: collision with root package name */
    public final boolean f9937i;

    public w0(nd.s sVar, long j, long j5, long j7, long j10, boolean z5, boolean z6, boolean z7, boolean z8) {
        boolean z10 = true;
        ke.b.g(!z8 || z6);
        ke.b.g(!z7 || z6);
        if (z5 && (z6 || z7 || z8)) {
            z10 = false;
        }
        ke.b.g(z10);
        this.a = sVar;
        this.f9930b = j;
        this.f9931c = j5;
        this.f9932d = j7;
        this.f9933e = j10;
        this.f9934f = z5;
        this.f9935g = z6;
        this.f9936h = z7;
        this.f9937i = z8;
    }

    public final w0 a(long j) {
        if (j == this.f9931c) {
            return this;
        }
        return new w0(this.a, this.f9930b, j, this.f9932d, this.f9933e, this.f9934f, this.f9935g, this.f9936h, this.f9937i);
    }

    public final w0 b(long j) {
        if (j == this.f9930b) {
            return this;
        }
        return new w0(this.a, j, this.f9931c, this.f9932d, this.f9933e, this.f9934f, this.f9935g, this.f9936h, this.f9937i);
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj != null && w0.class == obj.getClass()) {
            w0 w0Var = (w0) obj;
            if (this.f9930b == w0Var.f9930b && this.f9931c == w0Var.f9931c && this.f9932d == w0Var.f9932d && this.f9933e == w0Var.f9933e && this.f9934f == w0Var.f9934f && this.f9935g == w0Var.f9935g && this.f9936h == w0Var.f9936h && this.f9937i == w0Var.f9937i && ke.d0.a(this.a, w0Var.a)) {
                return true;
            }
        }
        return false;
    }

    public final int hashCode() {
        return ((((((((((((((((this.a.hashCode() + 527) * 31) + ((int) this.f9930b)) * 31) + ((int) this.f9931c)) * 31) + ((int) this.f9932d)) * 31) + ((int) this.f9933e)) * 31) + (this.f9934f ? 1 : 0)) * 31) + (this.f9935g ? 1 : 0)) * 31) + (this.f9936h ? 1 : 0)) * 31) + (this.f9937i ? 1 : 0);
    }
}
