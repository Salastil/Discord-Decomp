package zc;

import hc.g1;
import java.io.EOFException;
import ke.w;
import qc.k;

/* loaded from: classes3.dex */
public final class e {
    public int a;

    /* renamed from: b, reason: collision with root package name */
    public long f21161b;

    /* renamed from: c, reason: collision with root package name */
    public int f21162c;

    /* renamed from: d, reason: collision with root package name */
    public int f21163d;

    /* renamed from: e, reason: collision with root package name */
    public int f21164e;

    /* renamed from: f, reason: collision with root package name */
    public final int[] f21165f = new int[255];

    /* renamed from: g, reason: collision with root package name */
    public final w f21166g = new w(255);

    public final boolean a(k kVar, boolean z5) {
        boolean z6;
        boolean z7;
        this.a = 0;
        this.f21161b = 0L;
        this.f21162c = 0;
        this.f21163d = 0;
        this.f21164e = 0;
        w wVar = this.f21166g;
        wVar.C(27);
        try {
            z6 = kVar.j(wVar.a, 0, 27, z5);
        } catch (EOFException e9) {
            if (!z5) {
                throw e9;
            }
            z6 = false;
        }
        if (z6 && wVar.v() == 1332176723) {
            if (wVar.u() == 0) {
                this.a = wVar.u();
                this.f21161b = wVar.j();
                wVar.l();
                wVar.l();
                wVar.l();
                int u5 = wVar.u();
                this.f21162c = u5;
                this.f21163d = u5 + 27;
                wVar.C(u5);
                try {
                    z7 = kVar.j(wVar.a, 0, this.f21162c, z5);
                } catch (EOFException e10) {
                    if (!z5) {
                        throw e10;
                    }
                    z7 = false;
                }
                if (z7) {
                    for (int i5 = 0; i5 < this.f21162c; i5++) {
                        int u6 = wVar.u();
                        this.f21165f[i5] = u6;
                        this.f21164e += u6;
                    }
                    return true;
                }
            } else if (!z5) {
                throw g1.c("unsupported bit stream revision");
            }
        }
        return false;
    }

    public final boolean b(k kVar, long j) {
        boolean z5;
        ke.b.g(kVar.getPosition() == kVar.k());
        w wVar = this.f21166g;
        wVar.C(4);
        while (true) {
            if (j != -1 && kVar.getPosition() + 4 >= j) {
                break;
            }
            try {
                z5 = kVar.j(wVar.a, 0, 4, true);
            } catch (EOFException unused) {
                z5 = false;
            }
            if (!z5) {
                break;
            }
            wVar.F(0);
            if (wVar.v() == 1332176723) {
                kVar.t();
                return true;
            }
            kVar.u(1);
        }
        do {
            if (j != -1 && kVar.getPosition() >= j) {
                break;
            }
        } while (kVar.D() != -1);
        return false;
    }
}
