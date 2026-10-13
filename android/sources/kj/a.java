package kj;

import java.io.EOFException;
import jj.l;
import ke.w;
import qc.k;
import zc.e;

/* loaded from: classes3.dex */
public final class a {
    public int a;

    /* renamed from: b, reason: collision with root package name */
    public int f13401b;

    /* renamed from: c, reason: collision with root package name */
    public boolean f13402c;

    /* renamed from: d, reason: collision with root package name */
    public final Object f13403d;

    /* renamed from: e, reason: collision with root package name */
    public final Object f13404e;

    public a(nj.b bVar, l[] lVarArr, boolean z5, int i5, int i6) {
        this.f13403d = bVar;
        this.f13404e = lVarArr;
        this.f13402c = z5;
        this.a = i5;
        this.f13401b = i6;
    }

    public int a(int i5) {
        int i6;
        int i10 = 0;
        this.f13401b = 0;
        do {
            int i11 = this.f13401b;
            int i12 = i5 + i11;
            e eVar = (e) this.f13403d;
            if (i12 >= eVar.f21162c) {
                break;
            }
            int[] iArr = eVar.f21165f;
            this.f13401b = i11 + 1;
            i6 = iArr[i12];
            i10 += i6;
        } while (i6 == 255);
        return i10;
    }

    public boolean b(k kVar) {
        int i5;
        e eVar = (e) this.f13403d;
        w wVar = (w) this.f13404e;
        ke.b.k(kVar != null);
        if (this.f13402c) {
            this.f13402c = false;
            wVar.C(0);
        }
        while (!this.f13402c) {
            if (this.a < 0) {
                if (eVar.b(kVar, -1L) && eVar.a(kVar, true)) {
                    int i6 = eVar.f21163d;
                    if ((eVar.a & 1) == 1 && wVar.f13364c == 0) {
                        i6 += a(0);
                        i5 = this.f13401b;
                    } else {
                        i5 = 0;
                    }
                    try {
                        kVar.u(i6);
                        this.a = i5;
                    } catch (EOFException unused) {
                    }
                }
                return false;
            }
            int a = a(this.a);
            int i10 = this.a + this.f13401b;
            if (a > 0) {
                wVar.b(wVar.f13364c + a);
                try {
                    kVar.readFully(wVar.a, wVar.f13364c, a);
                    wVar.E(wVar.f13364c + a);
                    this.f13402c = eVar.f21165f[i10 + (-1)] != 255;
                } catch (EOFException unused2) {
                    return false;
                }
            }
            if (i10 == eVar.f21162c) {
                i10 = -1;
            }
            this.a = i10;
        }
        return true;
    }

    public a() {
        this.f13403d = new e();
        this.f13404e = new w(new byte[65025], 0);
        this.a = -1;
    }
}
