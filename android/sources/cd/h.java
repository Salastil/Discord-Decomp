package cd;

import java.nio.ByteBuffer;

/* loaded from: classes3.dex */
public final class h extends mc.f {
    public long F;
    public int G;
    public int H;

    @Override // mc.f
    public final void f() {
        super.f();
        this.G = 0;
    }

    public final boolean k(mc.f fVar) {
        ByteBuffer byteBuffer;
        ke.b.g(!fVar.c(1073741824));
        ke.b.g(!fVar.c(268435456));
        ke.b.g(!fVar.c(4));
        int i5 = this.G;
        if (i5 > 0) {
            if (i5 >= this.H || fVar.c(Integer.MIN_VALUE) != c(Integer.MIN_VALUE)) {
                return false;
            }
            ByteBuffer byteBuffer2 = fVar.f14436v;
            if (byteBuffer2 != null && (byteBuffer = this.f14436v) != null) {
                if (byteBuffer2.remaining() + byteBuffer.position() > 3072000) {
                    return false;
                }
            }
        }
        int i6 = this.G;
        this.G = i6 + 1;
        if (i6 == 0) {
            this.f14438x = fVar.f14438x;
            if (fVar.c(1)) {
                this.f14426e = 1;
            }
        }
        if (fVar.c(Integer.MIN_VALUE)) {
            this.f14426e = Integer.MIN_VALUE;
        }
        ByteBuffer byteBuffer3 = fVar.f14436v;
        if (byteBuffer3 != null) {
            h(byteBuffer3.remaining());
            this.f14436v.put(byteBuffer3);
        }
        this.F = fVar.f14438x;
        return true;
    }
}
