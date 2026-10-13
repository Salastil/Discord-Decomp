package jc;

import java.nio.ByteBuffer;

/* loaded from: classes3.dex */
public final class v0 extends z {

    /* renamed from: i, reason: collision with root package name */
    public int f12661i;
    public int j;
    public boolean k;

    /* renamed from: l, reason: collision with root package name */
    public int f12662l;

    /* renamed from: m, reason: collision with root package name */
    public byte[] f12663m;

    /* renamed from: n, reason: collision with root package name */
    public int f12664n;

    /* renamed from: o, reason: collision with root package name */
    public long f12665o;

    @Override // jc.z
    public final l a(l lVar) {
        if (lVar.f12574c != 2) {
            throw new m(lVar);
        }
        this.k = true;
        return (this.f12661i == 0 && this.j == 0) ? l.f12572e : lVar;
    }

    @Override // jc.z
    public final void b() {
        if (this.k) {
            this.k = false;
            int i5 = this.j;
            int i6 = this.f12694b.f12575d;
            this.f12663m = new byte[i5 * i6];
            this.f12662l = this.f12661i * i6;
        }
        this.f12664n = 0;
    }

    @Override // jc.z, jc.n
    public final ByteBuffer d() {
        int i5;
        if (super.g() && (i5 = this.f12664n) > 0) {
            k(i5).put(this.f12663m, 0, this.f12664n).flip();
            this.f12664n = 0;
        }
        return super.d();
    }

    @Override // jc.n
    public final void e(ByteBuffer byteBuffer) {
        int position = byteBuffer.position();
        int limit = byteBuffer.limit();
        int i5 = limit - position;
        if (i5 == 0) {
            return;
        }
        int min = Math.min(i5, this.f12662l);
        this.f12665o += min / this.f12694b.f12575d;
        this.f12662l -= min;
        byteBuffer.position(position + min);
        if (this.f12662l > 0) {
            return;
        }
        int i6 = i5 - min;
        int length = (this.f12664n + i6) - this.f12663m.length;
        ByteBuffer k = k(length);
        int i10 = ke.d0.i(length, 0, this.f12664n);
        k.put(this.f12663m, 0, i10);
        int i11 = ke.d0.i(length - i10, 0, i6);
        byteBuffer.limit(byteBuffer.position() + i11);
        k.put(byteBuffer);
        byteBuffer.limit(limit);
        int i12 = i6 - i11;
        int i13 = this.f12664n - i10;
        this.f12664n = i13;
        byte[] bArr = this.f12663m;
        System.arraycopy(bArr, i10, bArr, 0, i13);
        byteBuffer.get(this.f12663m, this.f12664n, i12);
        this.f12664n += i12;
        k.flip();
    }

    @Override // jc.z, jc.n
    public final boolean g() {
        return super.g() && this.f12664n == 0;
    }

    @Override // jc.z
    public final void i() {
        if (this.k) {
            if (this.f12664n > 0) {
                this.f12665o += r0 / this.f12694b.f12575d;
            }
            this.f12664n = 0;
        }
    }

    @Override // jc.z
    public final void j() {
        this.f12663m = ke.d0.f13298f;
    }
}
