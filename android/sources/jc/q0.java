package jc;

import java.nio.ByteBuffer;

/* loaded from: classes3.dex */
public final class q0 extends z {

    /* renamed from: i, reason: collision with root package name */
    public final long f12608i = 150000;
    public final long j = 20000;
    public final short k = 1024;

    /* renamed from: l, reason: collision with root package name */
    public int f12609l;

    /* renamed from: m, reason: collision with root package name */
    public boolean f12610m;

    /* renamed from: n, reason: collision with root package name */
    public byte[] f12611n;

    /* renamed from: o, reason: collision with root package name */
    public byte[] f12612o;

    /* renamed from: p, reason: collision with root package name */
    public int f12613p;

    /* renamed from: q, reason: collision with root package name */
    public int f12614q;

    /* renamed from: r, reason: collision with root package name */
    public int f12615r;

    /* renamed from: s, reason: collision with root package name */
    public boolean f12616s;

    /* renamed from: t, reason: collision with root package name */
    public long f12617t;

    public q0() {
        byte[] bArr = ke.d0.f13298f;
        this.f12611n = bArr;
        this.f12612o = bArr;
    }

    @Override // jc.z
    public final l a(l lVar) {
        if (lVar.f12574c == 2) {
            return this.f12610m ? lVar : l.f12572e;
        }
        throw new m(lVar);
    }

    @Override // jc.z
    public final void b() {
        if (this.f12610m) {
            l lVar = this.f12694b;
            int i5 = lVar.f12575d;
            this.f12609l = i5;
            int i6 = lVar.a;
            int i10 = ((int) ((this.f12608i * i6) / 1000000)) * i5;
            if (this.f12611n.length != i10) {
                this.f12611n = new byte[i10];
            }
            int i11 = ((int) ((this.j * i6) / 1000000)) * i5;
            this.f12615r = i11;
            if (this.f12612o.length != i11) {
                this.f12612o = new byte[i11];
            }
        }
        this.f12613p = 0;
        this.f12617t = 0L;
        this.f12614q = 0;
        this.f12616s = false;
    }

    @Override // jc.z, jc.n
    public final boolean c() {
        return this.f12610m;
    }

    @Override // jc.n
    public final void e(ByteBuffer byteBuffer) {
        int position;
        while (byteBuffer.hasRemaining() && !this.f12699g.hasRemaining()) {
            int i5 = this.f12613p;
            if (i5 == 0) {
                int limit = byteBuffer.limit();
                byteBuffer.limit(Math.min(limit, byteBuffer.position() + this.f12611n.length));
                int limit2 = byteBuffer.limit() - 2;
                while (true) {
                    if (limit2 < byteBuffer.position()) {
                        position = byteBuffer.position();
                        break;
                    } else {
                        if (Math.abs((int) byteBuffer.getShort(limit2)) > this.k) {
                            int i6 = this.f12609l;
                            position = ((limit2 / i6) * i6) + i6;
                            break;
                        }
                        limit2 -= 2;
                    }
                }
                if (position == byteBuffer.position()) {
                    this.f12613p = 1;
                } else {
                    byteBuffer.limit(position);
                    int remaining = byteBuffer.remaining();
                    k(remaining).put(byteBuffer).flip();
                    if (remaining > 0) {
                        this.f12616s = true;
                    }
                }
                byteBuffer.limit(limit);
            } else if (i5 == 1) {
                int limit3 = byteBuffer.limit();
                int l6 = l(byteBuffer);
                int position2 = l6 - byteBuffer.position();
                byte[] bArr = this.f12611n;
                int length = bArr.length;
                int i10 = this.f12614q;
                int i11 = length - i10;
                if (l6 >= limit3 || position2 >= i11) {
                    int min = Math.min(position2, i11);
                    byteBuffer.limit(byteBuffer.position() + min);
                    byteBuffer.get(this.f12611n, this.f12614q, min);
                    int i12 = this.f12614q + min;
                    this.f12614q = i12;
                    byte[] bArr2 = this.f12611n;
                    if (i12 == bArr2.length) {
                        if (this.f12616s) {
                            m(bArr2, this.f12615r);
                            this.f12617t += (this.f12614q - (this.f12615r * 2)) / this.f12609l;
                        } else {
                            this.f12617t += (i12 - this.f12615r) / this.f12609l;
                        }
                        n(byteBuffer, this.f12611n, this.f12614q);
                        this.f12614q = 0;
                        this.f12613p = 2;
                    }
                    byteBuffer.limit(limit3);
                } else {
                    m(bArr, i10);
                    this.f12614q = 0;
                    this.f12613p = 0;
                }
            } else {
                if (i5 != 2) {
                    throw new IllegalStateException();
                }
                int limit4 = byteBuffer.limit();
                int l7 = l(byteBuffer);
                byteBuffer.limit(l7);
                this.f12617t += byteBuffer.remaining() / this.f12609l;
                n(byteBuffer, this.f12612o, this.f12615r);
                if (l7 < limit4) {
                    m(this.f12612o, this.f12615r);
                    this.f12613p = 0;
                    byteBuffer.limit(limit4);
                }
            }
        }
    }

    @Override // jc.z
    public final void i() {
        int i5 = this.f12614q;
        if (i5 > 0) {
            m(this.f12611n, i5);
        }
        if (this.f12616s) {
            return;
        }
        this.f12617t += this.f12615r / this.f12609l;
    }

    @Override // jc.z
    public final void j() {
        this.f12610m = false;
        this.f12615r = 0;
        byte[] bArr = ke.d0.f13298f;
        this.f12611n = bArr;
        this.f12612o = bArr;
    }

    public final int l(ByteBuffer byteBuffer) {
        for (int position = byteBuffer.position(); position < byteBuffer.limit(); position += 2) {
            if (Math.abs((int) byteBuffer.getShort(position)) > this.k) {
                int i5 = this.f12609l;
                return (position / i5) * i5;
            }
        }
        return byteBuffer.limit();
    }

    public final void m(byte[] bArr, int i5) {
        k(i5).put(bArr, 0, i5).flip();
        if (i5 > 0) {
            this.f12616s = true;
        }
    }

    public final void n(ByteBuffer byteBuffer, byte[] bArr, int i5) {
        int min = Math.min(byteBuffer.remaining(), this.f12615r);
        int i6 = this.f12615r - min;
        System.arraycopy(bArr, i5 - i6, this.f12612o, 0, i6);
        byteBuffer.position(byteBuffer.limit() - min);
        byteBuffer.get(this.f12612o, i6, min);
    }
}
