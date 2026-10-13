package pd;

import com.google.android.exoplayer2.Format;
import ke.d0;
import ke.w;
import qc.u;
import qc.v;

/* loaded from: classes3.dex */
public final class c implements v {
    public final int a;

    /* renamed from: b, reason: collision with root package name */
    public final Format f16348b;

    /* renamed from: c, reason: collision with root package name */
    public final qc.i f16349c = new qc.i();

    /* renamed from: d, reason: collision with root package name */
    public Format f16350d;

    /* renamed from: e, reason: collision with root package name */
    public v f16351e;

    /* renamed from: f, reason: collision with root package name */
    public long f16352f;

    public c(int i5, int i6, Format format) {
        this.a = i6;
        this.f16348b = format;
    }

    @Override // qc.v
    public final void b(long j, int i5, int i6, int i10, u uVar) {
        long j5 = this.f16352f;
        if (j5 != -9223372036854775807L && j >= j5) {
            this.f16351e = this.f16349c;
        }
        v vVar = this.f16351e;
        int i11 = d0.a;
        vVar.b(j, i5, i6, i10, uVar);
    }

    @Override // qc.v
    public final int c(ie.k kVar, int i5, boolean z5) {
        v vVar = this.f16351e;
        int i6 = d0.a;
        return vVar.a(kVar, i5, z5);
    }

    @Override // qc.v
    public final void d(int i5, w wVar) {
        v vVar = this.f16351e;
        int i6 = d0.a;
        vVar.d(i5, wVar);
    }

    @Override // qc.v
    public final void e(Format format) {
        Format format2 = this.f16348b;
        if (format2 != null) {
            format = format.c(format2);
        }
        this.f16350d = format;
        v vVar = this.f16351e;
        int i5 = d0.a;
        vVar.e(format);
    }
}
