package qd;

import com.google.android.exoplayer2.Format;
import e4.r;
import ke.d0;
import nd.q0;

/* loaded from: classes3.dex */
public final class n implements q0 {

    /* renamed from: d, reason: collision with root package name */
    public final Format f16861d;

    /* renamed from: i, reason: collision with root package name */
    public long[] f16863i;

    /* renamed from: v, reason: collision with root package name */
    public boolean f16864v;

    /* renamed from: w, reason: collision with root package name */
    public rd.g f16865w;

    /* renamed from: x, reason: collision with root package name */
    public boolean f16866x;

    /* renamed from: y, reason: collision with root package name */
    public int f16867y;

    /* renamed from: e, reason: collision with root package name */
    public final r f16862e = new r(9);
    public long E = -9223372036854775807L;

    public n(rd.g gVar, Format format, boolean z5) {
        this.f16861d = format;
        this.f16865w = gVar;
        this.f16863i = gVar.f17238b;
        a(gVar, z5);
    }

    public final void a(rd.g gVar, boolean z5) {
        int i5 = this.f16867y;
        long j = -9223372036854775807L;
        long j5 = i5 == 0 ? -9223372036854775807L : this.f16863i[i5 - 1];
        this.f16864v = z5;
        this.f16865w = gVar;
        long[] jArr = gVar.f17238b;
        this.f16863i = jArr;
        long j7 = this.E;
        if (j7 == -9223372036854775807L) {
            if (j5 != -9223372036854775807L) {
                this.f16867y = d0.b(jArr, j5, false);
            }
        } else {
            int b10 = d0.b(jArr, j7, true);
            this.f16867y = b10;
            if (this.f16864v && b10 == this.f16863i.length) {
                j = j7;
            }
            this.E = j;
        }
    }

    @Override // nd.q0
    public final int c(long j) {
        int max = Math.max(this.f16867y, d0.b(this.f16863i, j, true));
        int i5 = max - this.f16867y;
        this.f16867y = max;
        return i5;
    }

    @Override // nd.q0
    public final int f(e4.l lVar, mc.f fVar, int i5) {
        int i6 = this.f16867y;
        boolean z5 = i6 == this.f16863i.length;
        if (z5 && !this.f16864v) {
            fVar.f14426e = 4;
            return -4;
        }
        if ((i5 & 2) != 0 || !this.f16866x) {
            lVar.f7960i = this.f16861d;
            this.f16866x = true;
            return -5;
        }
        if (z5) {
            return -3;
        }
        if ((i5 & 1) == 0) {
            this.f16867y = i6 + 1;
        }
        if ((i5 & 4) == 0) {
            byte[] i10 = this.f16862e.i(this.f16865w.a[i6]);
            fVar.h(i10.length);
            fVar.f14436v.put(i10);
        }
        fVar.f14438x = this.f16863i[i6];
        fVar.f14426e = 1;
        return -4;
    }

    @Override // nd.q0
    public final boolean isReady() {
        return true;
    }

    @Override // nd.q0
    public final void b() {
    }
}
