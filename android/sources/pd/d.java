package pd;

import android.util.SparseArray;
import com.google.android.exoplayer2.Format;
import qc.s;
import qc.v;

/* loaded from: classes3.dex */
public final class d implements qc.l {
    public static final qc.m G = new qc.m();
    public s E;
    public Format[] F;

    /* renamed from: d, reason: collision with root package name */
    public final qc.j f16353d;

    /* renamed from: e, reason: collision with root package name */
    public final int f16354e;

    /* renamed from: i, reason: collision with root package name */
    public final Format f16355i;

    /* renamed from: v, reason: collision with root package name */
    public final SparseArray f16356v = new SparseArray();

    /* renamed from: w, reason: collision with root package name */
    public boolean f16357w;

    /* renamed from: x, reason: collision with root package name */
    public e4.c f16358x;

    /* renamed from: y, reason: collision with root package name */
    public long f16359y;

    public d(qc.j jVar, int i5, Format format) {
        this.f16353d = jVar;
        this.f16354e = i5;
        this.f16355i = format;
    }

    public final void a(e4.c cVar, long j, long j5) {
        this.f16358x = cVar;
        this.f16359y = j5;
        boolean z5 = this.f16357w;
        qc.j jVar = this.f16353d;
        if (!z5) {
            jVar.a(this);
            if (j != -9223372036854775807L) {
                jVar.g(0L, j);
            }
            this.f16357w = true;
            return;
        }
        if (j == -9223372036854775807L) {
            j = 0;
        }
        jVar.g(0L, j);
        int i5 = 0;
        while (true) {
            SparseArray sparseArray = this.f16356v;
            if (i5 >= sparseArray.size()) {
                return;
            }
            c cVar2 = (c) sparseArray.valueAt(i5);
            if (cVar == null) {
                cVar2.f16351e = cVar2.f16349c;
            } else {
                cVar2.f16352f = j5;
                v c12 = cVar.c1(cVar2.a);
                cVar2.f16351e = c12;
                Format format = cVar2.f16350d;
                if (format != null) {
                    c12.e(format);
                }
            }
            i5++;
        }
    }

    @Override // qc.l
    public final void c(s sVar) {
        this.E = sVar;
    }

    @Override // qc.l
    public final void r() {
        SparseArray sparseArray = this.f16356v;
        Format[] formatArr = new Format[sparseArray.size()];
        for (int i5 = 0; i5 < sparseArray.size(); i5++) {
            Format format = ((c) sparseArray.valueAt(i5)).f16350d;
            ke.b.l(format);
            formatArr[i5] = format;
        }
        this.F = formatArr;
    }

    @Override // qc.l
    public final v y(int i5, int i6) {
        SparseArray sparseArray = this.f16356v;
        c cVar = (c) sparseArray.get(i5);
        if (cVar == null) {
            ke.b.k(this.F == null);
            cVar = new c(i5, i6, i6 == this.f16354e ? this.f16355i : null);
            e4.c cVar2 = this.f16358x;
            long j = this.f16359y;
            if (cVar2 == null) {
                cVar.f16351e = cVar.f16349c;
            } else {
                cVar.f16352f = j;
                v c12 = cVar2.c1(i6);
                cVar.f16351e = c12;
                Format format = cVar.f16350d;
                if (format != null) {
                    c12.e(format);
                }
            }
            sparseArray.put(i5, cVar);
        }
        return cVar;
    }
}
