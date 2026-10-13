package ad;

import androidx.recyclerview.widget.RecyclerView;
import com.google.android.exoplayer2.Format;
import jc.o0;

/* loaded from: classes3.dex */
public final class u implements i {
    public final ke.w a;

    /* renamed from: b, reason: collision with root package name */
    public final o0 f493b;

    /* renamed from: c, reason: collision with root package name */
    public final String f494c;

    /* renamed from: d, reason: collision with root package name */
    public qc.v f495d;

    /* renamed from: e, reason: collision with root package name */
    public String f496e;

    /* renamed from: f, reason: collision with root package name */
    public int f497f = 0;

    /* renamed from: g, reason: collision with root package name */
    public int f498g;

    /* renamed from: h, reason: collision with root package name */
    public boolean f499h;

    /* renamed from: i, reason: collision with root package name */
    public boolean f500i;
    public long j;
    public int k;

    /* renamed from: l, reason: collision with root package name */
    public long f501l;

    public u(String str) {
        ke.w wVar = new ke.w(4);
        this.a = wVar;
        wVar.a[0] = -1;
        this.f493b = new o0();
        this.f501l = -9223372036854775807L;
        this.f494c = str;
    }

    @Override // ad.i
    public final void a() {
        this.f497f = 0;
        this.f498g = 0;
        this.f500i = false;
        this.f501l = -9223372036854775807L;
    }

    @Override // ad.i
    public final void c(ke.w wVar) {
        ke.b.l(this.f495d);
        while (wVar.a() > 0) {
            int i5 = this.f497f;
            ke.w wVar2 = this.a;
            if (i5 == 0) {
                byte[] bArr = wVar.a;
                int i6 = wVar.f13363b;
                int i10 = wVar.f13364c;
                while (true) {
                    if (i6 >= i10) {
                        wVar.F(i10);
                        break;
                    }
                    byte b10 = bArr[i6];
                    boolean z5 = (b10 & 255) == 255;
                    boolean z6 = this.f500i && (b10 & 224) == 224;
                    this.f500i = z5;
                    if (z6) {
                        wVar.F(i6 + 1);
                        this.f500i = false;
                        wVar2.a[1] = bArr[i6];
                        this.f498g = 2;
                        this.f497f = 1;
                        break;
                    }
                    i6++;
                }
            } else if (i5 == 1) {
                int min = Math.min(wVar.a(), 4 - this.f498g);
                wVar.e(wVar2.a, this.f498g, min);
                int i11 = this.f498g + min;
                this.f498g = i11;
                if (i11 >= 4) {
                    wVar2.F(0);
                    int g6 = wVar2.g();
                    o0 o0Var = this.f493b;
                    if (o0Var.d(g6)) {
                        this.k = o0Var.f12592b;
                        if (!this.f499h) {
                            int i12 = o0Var.f12593c;
                            this.j = (o0Var.f12596f * 1000000) / i12;
                            hc.f0 f0Var = new hc.f0();
                            f0Var.a = this.f496e;
                            f0Var.k = (String) o0Var.f12597g;
                            f0Var.f9678l = RecyclerView.ItemAnimator.FLAG_APPEARED_IN_PRE_LAYOUT;
                            f0Var.f9690x = o0Var.f12594d;
                            f0Var.f9691y = i12;
                            f0Var.f9671c = this.f494c;
                            this.f495d.e(new Format(f0Var));
                            this.f499h = true;
                        }
                        wVar2.F(0);
                        this.f495d.d(4, wVar2);
                        this.f497f = 2;
                    } else {
                        this.f498g = 0;
                        this.f497f = 1;
                    }
                }
            } else {
                if (i5 != 2) {
                    throw new IllegalStateException();
                }
                int min2 = Math.min(wVar.a(), this.k - this.f498g);
                this.f495d.d(min2, wVar);
                int i13 = this.f498g + min2;
                this.f498g = i13;
                int i14 = this.k;
                if (i13 >= i14) {
                    long j = this.f501l;
                    if (j != -9223372036854775807L) {
                        this.f495d.b(j, 1, i14, 0, null);
                        this.f501l += this.j;
                    }
                    this.f498g = 0;
                    this.f497f = 0;
                }
            }
        }
    }

    @Override // ad.i
    public final void d(qc.l lVar, g0 g0Var) {
        g0Var.a();
        g0Var.b();
        this.f496e = g0Var.f368e;
        g0Var.b();
        this.f495d = lVar.y(g0Var.f367d, 1);
    }

    @Override // ad.i
    public final void f(int i5, long j) {
        if (j != -9223372036854775807L) {
            this.f501l = j;
        }
    }

    @Override // ad.i
    public final void e() {
    }
}
