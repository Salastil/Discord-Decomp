package jc;

import java.nio.ByteBuffer;

/* loaded from: classes3.dex */
public final class t0 extends z {

    /* renamed from: i, reason: collision with root package name */
    public static final int f12656i = Float.floatToIntBits(Float.NaN);

    @Override // jc.z
    public final l a(l lVar) {
        int i5 = lVar.f12574c;
        if (i5 == 536870912 || i5 == 805306368 || i5 == 4) {
            return i5 != 4 ? new l(lVar.a, lVar.f12573b, 4) : l.f12572e;
        }
        throw new m(lVar);
    }

    @Override // jc.n
    public final void e(ByteBuffer byteBuffer) {
        ByteBuffer k;
        int position = byteBuffer.position();
        int limit = byteBuffer.limit();
        int i5 = limit - position;
        int i6 = this.f12694b.f12574c;
        int i10 = f12656i;
        if (i6 == 536870912) {
            k = k((i5 / 3) * 4);
            while (position < limit) {
                int floatToIntBits = Float.floatToIntBits((float) ((((byteBuffer.get(position) & 255) << 8) | ((byteBuffer.get(position + 1) & 255) << 16) | ((byteBuffer.get(position + 2) & 255) << 24)) * 4.656612875245797E-10d));
                if (floatToIntBits == i10) {
                    floatToIntBits = Float.floatToIntBits(0.0f);
                }
                k.putInt(floatToIntBits);
                position += 3;
            }
        } else {
            if (i6 != 805306368) {
                throw new IllegalStateException();
            }
            k = k(i5);
            while (position < limit) {
                int floatToIntBits2 = Float.floatToIntBits((float) (((byteBuffer.get(position) & 255) | ((byteBuffer.get(position + 1) & 255) << 8) | ((byteBuffer.get(position + 2) & 255) << 16) | ((byteBuffer.get(position + 3) & 255) << 24)) * 4.656612875245797E-10d));
                if (floatToIntBits2 == i10) {
                    floatToIntBits2 = Float.floatToIntBits(0.0f);
                }
                k.putInt(floatToIntBits2);
                position += 4;
            }
        }
        byteBuffer.position(byteBuffer.limit());
        k.flip();
    }
}
