package me;

import com.google.android.exoplayer2.Format;
import java.nio.ByteBuffer;
import ke.d0;
import ke.w;

/* loaded from: classes3.dex */
public final class b extends hc.e {
    public final mc.f L;
    public final w M;
    public long N;
    public a O;
    public long P;

    public b() {
        super(6);
        this.L = new mc.f(1);
        this.M = new w();
    }

    @Override // hc.e, hc.k1
    public final void c(int i5, Object obj) {
        if (i5 == 8) {
            this.O = (a) obj;
        }
    }

    @Override // hc.e
    public final String h() {
        return "CameraMotionRenderer";
    }

    @Override // hc.e
    public final boolean j() {
        return i();
    }

    @Override // hc.e
    public final boolean k() {
        return true;
    }

    @Override // hc.e
    public final void l() {
        a aVar = this.O;
        if (aVar != null) {
            aVar.b();
        }
    }

    @Override // hc.e
    public final void n(long j, boolean z5) {
        this.P = Long.MIN_VALUE;
        a aVar = this.O;
        if (aVar != null) {
            aVar.b();
        }
    }

    @Override // hc.e
    public final void s(Format[] formatArr, long j, long j5) {
        this.N = j5;
    }

    @Override // hc.e
    public final void u(long j, long j5) {
        float[] fArr;
        while (!i() && this.P < 100000 + j) {
            mc.f fVar = this.L;
            fVar.f();
            e4.l lVar = this.f9660i;
            lVar.u();
            if (t(lVar, fVar, 0) != -4 || fVar.c(4)) {
                return;
            }
            this.P = fVar.f14438x;
            if (this.O != null && !fVar.c(Integer.MIN_VALUE)) {
                fVar.j();
                ByteBuffer byteBuffer = fVar.f14436v;
                int i5 = d0.a;
                if (byteBuffer.remaining() != 16) {
                    fArr = null;
                } else {
                    byte[] array = byteBuffer.array();
                    int limit = byteBuffer.limit();
                    w wVar = this.M;
                    wVar.D(array, limit);
                    wVar.F(byteBuffer.arrayOffset() + 4);
                    float[] fArr2 = new float[3];
                    for (int i6 = 0; i6 < 3; i6++) {
                        fArr2[i6] = Float.intBitsToFloat(wVar.i());
                    }
                    fArr = fArr2;
                }
                if (fArr != null) {
                    this.O.a(this.P - this.N, fArr);
                }
            }
        }
    }

    @Override // hc.e
    public final int y(Format format) {
        return "application/x-camera-motion".equals(format.I) ? hc.e.e(4, 0, 0) : hc.e.e(0, 0, 0);
    }
}
