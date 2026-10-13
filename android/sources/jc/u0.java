package jc;

import java.nio.ByteBuffer;

/* loaded from: classes3.dex */
public final class u0 extends z {
    @Override // jc.z
    public final l a(l lVar) {
        int i5 = lVar.f12574c;
        if (i5 == 3 || i5 == 2 || i5 == 268435456 || i5 == 536870912 || i5 == 805306368 || i5 == 4) {
            return i5 != 2 ? new l(lVar.a, lVar.f12573b, 2) : l.f12572e;
        }
        throw new m(lVar);
    }

    /* JADX WARN: Removed duplicated region for block: B:13:0x0038  */
    /* JADX WARN: Removed duplicated region for block: B:33:0x00ae A[ADDED_TO_REGION, LOOP:4: B:33:0x00ae->B:34:0x00b0, LOOP_START, PHI: r0
      0x00ae: PHI (r0v1 int) = (r0v0 int), (r0v2 int) binds: [B:12:0x0036, B:34:0x00b0] A[DONT_GENERATE, DONT_INLINE]] */
    @Override // jc.n
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void e(ByteBuffer byteBuffer) {
        int i5;
        int position = byteBuffer.position();
        int limit = byteBuffer.limit();
        int i6 = limit - position;
        int i10 = this.f12694b.f12574c;
        if (i10 != 3) {
            if (i10 != 4) {
                if (i10 != 268435456) {
                    if (i10 == 536870912) {
                        i6 /= 3;
                    } else if (i10 != 805306368) {
                        throw new IllegalStateException();
                    }
                }
                ByteBuffer k = k(i6);
                i5 = this.f12694b.f12574c;
                if (i5 == 3) {
                    while (position < limit) {
                        k.put((byte) 0);
                        k.put((byte) ((byteBuffer.get(position) & 255) - 128));
                        position++;
                    }
                } else if (i5 == 4) {
                    while (position < limit) {
                        short h6 = (short) (ke.d0.h(byteBuffer.getFloat(position), -1.0f, 1.0f) * 32767.0f);
                        k.put((byte) (h6 & 255));
                        k.put((byte) ((h6 >> 8) & 255));
                        position += 4;
                    }
                } else if (i5 == 268435456) {
                    while (position < limit) {
                        k.put(byteBuffer.get(position + 1));
                        k.put(byteBuffer.get(position));
                        position += 2;
                    }
                } else if (i5 == 536870912) {
                    while (position < limit) {
                        k.put(byteBuffer.get(position + 1));
                        k.put(byteBuffer.get(position + 2));
                        position += 3;
                    }
                } else {
                    if (i5 != 805306368) {
                        throw new IllegalStateException();
                    }
                    while (position < limit) {
                        k.put(byteBuffer.get(position + 2));
                        k.put(byteBuffer.get(position + 3));
                        position += 4;
                    }
                }
                byteBuffer.position(byteBuffer.limit());
                k.flip();
            }
            i6 /= 2;
            ByteBuffer k5 = k(i6);
            i5 = this.f12694b.f12574c;
            if (i5 == 3) {
            }
            byteBuffer.position(byteBuffer.limit());
            k5.flip();
        }
        i6 *= 2;
        ByteBuffer k52 = k(i6);
        i5 = this.f12694b.f12574c;
        if (i5 == 3) {
        }
        byteBuffer.position(byteBuffer.limit());
        k52.flip();
    }
}
