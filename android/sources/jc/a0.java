package jc;

import java.nio.ByteBuffer;

/* loaded from: classes3.dex */
public final class a0 extends z {

    /* renamed from: i, reason: collision with root package name */
    public int[] f12509i;
    public int[] j;

    @Override // jc.z
    public final l a(l lVar) {
        int[] iArr = this.f12509i;
        if (iArr == null) {
            return l.f12572e;
        }
        int i5 = lVar.f12574c;
        int i6 = lVar.f12573b;
        if (i5 != 2) {
            throw new m(lVar);
        }
        boolean z5 = i6 != iArr.length;
        int i10 = 0;
        while (i10 < iArr.length) {
            int i11 = iArr[i10];
            if (i11 >= i6) {
                throw new m(lVar);
            }
            z5 |= i11 != i10;
            i10++;
        }
        return z5 ? new l(lVar.a, iArr.length, 2) : l.f12572e;
    }

    @Override // jc.z
    public final void b() {
        this.j = this.f12509i;
    }

    @Override // jc.n
    public final void e(ByteBuffer byteBuffer) {
        int[] iArr = this.j;
        iArr.getClass();
        int position = byteBuffer.position();
        int limit = byteBuffer.limit();
        ByteBuffer k = k(((limit - position) / this.f12694b.f12575d) * this.f12695c.f12575d);
        while (position < limit) {
            for (int i5 : iArr) {
                k.putShort(byteBuffer.getShort((i5 * 2) + position));
            }
            position += this.f12694b.f12575d;
        }
        byteBuffer.position(limit);
        k.flip();
    }

    @Override // jc.z
    public final void j() {
        this.j = null;
        this.f12509i = null;
    }
}
