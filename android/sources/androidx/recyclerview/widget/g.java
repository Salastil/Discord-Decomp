package androidx.recyclerview.widget;

/* loaded from: classes.dex */
public final class g implements p0 {
    public final p0 a;

    /* renamed from: b, reason: collision with root package name */
    public int f2396b = 0;

    /* renamed from: c, reason: collision with root package name */
    public int f2397c = -1;

    /* renamed from: d, reason: collision with root package name */
    public int f2398d = -1;

    /* renamed from: e, reason: collision with root package name */
    public Object f2399e = null;

    public g(p0 p0Var) {
        this.a = p0Var;
    }

    @Override // androidx.recyclerview.widget.p0
    public final void a(int i5, int i6) {
        e();
        this.a.a(i5, i6);
    }

    @Override // androidx.recyclerview.widget.p0
    public final void b(int i5, int i6) {
        int i10;
        if (this.f2396b == 1 && i5 >= (i10 = this.f2397c)) {
            int i11 = this.f2398d;
            if (i5 <= i10 + i11) {
                this.f2398d = i11 + i6;
                this.f2397c = Math.min(i5, i10);
                return;
            }
        }
        e();
        this.f2397c = i5;
        this.f2398d = i6;
        this.f2396b = 1;
    }

    @Override // androidx.recyclerview.widget.p0
    public final void c(int i5, int i6) {
        int i10;
        if (this.f2396b == 2 && (i10 = this.f2397c) >= i5 && i10 <= i5 + i6) {
            this.f2398d += i6;
            this.f2397c = i5;
        } else {
            e();
            this.f2397c = i5;
            this.f2398d = i6;
            this.f2396b = 2;
        }
    }

    @Override // androidx.recyclerview.widget.p0
    public final void d(int i5, int i6, Object obj) {
        int i10;
        int i11;
        int i12;
        if (this.f2396b == 3 && i5 <= (i11 = this.f2398d + (i10 = this.f2397c)) && (i12 = i5 + i6) >= i10 && this.f2399e == obj) {
            this.f2397c = Math.min(i5, i10);
            this.f2398d = Math.max(i11, i12) - this.f2397c;
            return;
        }
        e();
        this.f2397c = i5;
        this.f2398d = i6;
        this.f2399e = obj;
        this.f2396b = 3;
    }

    public final void e() {
        int i5 = this.f2396b;
        if (i5 == 0) {
            return;
        }
        p0 p0Var = this.a;
        if (i5 == 1) {
            p0Var.b(this.f2397c, this.f2398d);
        } else if (i5 == 2) {
            p0Var.c(this.f2397c, this.f2398d);
        } else if (i5 == 3) {
            p0Var.d(this.f2397c, this.f2398d, this.f2399e);
        }
        this.f2399e = null;
        this.f2396b = 0;
    }
}
