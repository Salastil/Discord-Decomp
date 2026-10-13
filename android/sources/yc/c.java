package yc;

import ke.w;

/* loaded from: classes3.dex */
public final class c {
    public final int a;

    /* renamed from: b, reason: collision with root package name */
    public int f20763b;

    /* renamed from: c, reason: collision with root package name */
    public int f20764c;

    /* renamed from: d, reason: collision with root package name */
    public long f20765d;

    /* renamed from: e, reason: collision with root package name */
    public final boolean f20766e;

    /* renamed from: f, reason: collision with root package name */
    public final w f20767f;

    /* renamed from: g, reason: collision with root package name */
    public final w f20768g;

    /* renamed from: h, reason: collision with root package name */
    public int f20769h;

    /* renamed from: i, reason: collision with root package name */
    public int f20770i;

    public c(w wVar, w wVar2, boolean z5) {
        this.f20768g = wVar;
        this.f20767f = wVar2;
        this.f20766e = z5;
        wVar2.F(12);
        this.a = wVar2.x();
        wVar.F(12);
        this.f20770i = wVar.x();
        w3.q.f("first_chunk must be 1", wVar.g() == 1);
        this.f20763b = -1;
    }

    public final boolean a() {
        int i5 = this.f20763b + 1;
        this.f20763b = i5;
        if (i5 == this.a) {
            return false;
        }
        boolean z5 = this.f20766e;
        w wVar = this.f20767f;
        this.f20765d = z5 ? wVar.y() : wVar.v();
        if (this.f20763b == this.f20769h) {
            w wVar2 = this.f20768g;
            this.f20764c = wVar2.x();
            wVar2.G(4);
            int i6 = this.f20770i - 1;
            this.f20770i = i6;
            this.f20769h = i6 > 0 ? wVar2.x() - 1 : -1;
        }
        return true;
    }
}
