package ad;

import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;

/* loaded from: classes3.dex */
public final class c0 implements h0 {
    public final b0 a;

    /* renamed from: b, reason: collision with root package name */
    public final ke.w f303b = new ke.w(32);

    /* renamed from: c, reason: collision with root package name */
    public int f304c;

    /* renamed from: d, reason: collision with root package name */
    public int f305d;

    /* renamed from: e, reason: collision with root package name */
    public boolean f306e;

    /* renamed from: f, reason: collision with root package name */
    public boolean f307f;

    public c0(b0 b0Var) {
        this.a = b0Var;
    }

    @Override // ad.h0
    public final void a() {
        this.f307f = true;
    }

    @Override // ad.h0
    public final void b(ke.b0 b0Var, qc.l lVar, g0 g0Var) {
        this.a.b(b0Var, lVar, g0Var);
        this.f307f = true;
    }

    @Override // ad.h0
    public final void c(int i5, ke.w wVar) {
        boolean z5 = (i5 & 1) != 0;
        int u5 = z5 ? wVar.f13363b + wVar.u() : -1;
        if (this.f307f) {
            if (!z5) {
                return;
            }
            this.f307f = false;
            wVar.F(u5);
            this.f305d = 0;
        }
        while (wVar.a() > 0) {
            int i6 = this.f305d;
            ke.w wVar2 = this.f303b;
            if (i6 < 3) {
                if (i6 == 0) {
                    int u6 = wVar.u();
                    wVar.F(wVar.f13363b - 1);
                    if (u6 == 255) {
                        this.f307f = true;
                        return;
                    }
                }
                int min = Math.min(wVar.a(), 3 - this.f305d);
                wVar.e(wVar2.a, this.f305d, min);
                int i10 = this.f305d + min;
                this.f305d = i10;
                if (i10 == 3) {
                    wVar2.F(0);
                    wVar2.E(3);
                    wVar2.G(1);
                    int u10 = wVar2.u();
                    int u11 = wVar2.u();
                    this.f306e = (u10 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT) != 0;
                    int i11 = (((u10 & 15) << 8) | u11) + 3;
                    this.f304c = i11;
                    byte[] bArr = wVar2.a;
                    if (bArr.length < i11) {
                        wVar2.b(Math.min(4098, Math.max(i11, bArr.length * 2)));
                    }
                }
            } else {
                int min2 = Math.min(wVar.a(), this.f304c - this.f305d);
                wVar.e(wVar2.a, this.f305d, min2);
                int i12 = this.f305d + min2;
                this.f305d = i12;
                int i13 = this.f304c;
                if (i12 != i13) {
                    continue;
                } else {
                    if (!this.f306e) {
                        wVar2.E(i13);
                    } else {
                        if (ke.d0.l(0, i13, -1, wVar2.a) != 0) {
                            this.f307f = true;
                            return;
                        }
                        wVar2.E(this.f304c - 4);
                    }
                    wVar2.F(0);
                    this.a.c(wVar2);
                    this.f305d = 0;
                }
            }
        }
    }
}
