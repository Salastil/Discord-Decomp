package jc;

import java.nio.ByteBuffer;
import java.nio.ByteOrder;
import java.nio.ShortBuffer;

/* loaded from: classes3.dex */
public final class s0 implements n {

    /* renamed from: b, reason: collision with root package name */
    public int f12640b;

    /* renamed from: c, reason: collision with root package name */
    public float f12641c;

    /* renamed from: d, reason: collision with root package name */
    public float f12642d;

    /* renamed from: e, reason: collision with root package name */
    public l f12643e;

    /* renamed from: f, reason: collision with root package name */
    public l f12644f;

    /* renamed from: g, reason: collision with root package name */
    public l f12645g;

    /* renamed from: h, reason: collision with root package name */
    public l f12646h;

    /* renamed from: i, reason: collision with root package name */
    public boolean f12647i;
    public r0 j;
    public ByteBuffer k;

    /* renamed from: l, reason: collision with root package name */
    public ShortBuffer f12648l;

    /* renamed from: m, reason: collision with root package name */
    public ByteBuffer f12649m;

    /* renamed from: n, reason: collision with root package name */
    public long f12650n;

    /* renamed from: o, reason: collision with root package name */
    public long f12651o;

    /* renamed from: p, reason: collision with root package name */
    public boolean f12652p;

    @Override // jc.n
    public final boolean c() {
        if (this.f12644f.a != -1) {
            return Math.abs(this.f12641c - 1.0f) >= 1.0E-4f || Math.abs(this.f12642d - 1.0f) >= 1.0E-4f || this.f12644f.a != this.f12643e.a;
        }
        return false;
    }

    @Override // jc.n
    public final ByteBuffer d() {
        r0 r0Var = this.j;
        if (r0Var != null) {
            int i5 = r0Var.f12619b;
            int i6 = r0Var.f12628m * i5 * 2;
            if (i6 > 0) {
                if (this.k.capacity() < i6) {
                    ByteBuffer order = ByteBuffer.allocateDirect(i6).order(ByteOrder.nativeOrder());
                    this.k = order;
                    this.f12648l = order.asShortBuffer();
                } else {
                    this.k.clear();
                    this.f12648l.clear();
                }
                ShortBuffer shortBuffer = this.f12648l;
                int min = Math.min(shortBuffer.remaining() / i5, r0Var.f12628m);
                int i10 = min * i5;
                shortBuffer.put(r0Var.f12627l, 0, i10);
                int i11 = r0Var.f12628m - min;
                r0Var.f12628m = i11;
                short[] sArr = r0Var.f12627l;
                System.arraycopy(sArr, i10, sArr, 0, i11 * i5);
                this.f12651o += i6;
                this.k.limit(i6);
                this.f12649m = this.k;
            }
        }
        ByteBuffer byteBuffer = this.f12649m;
        this.f12649m = n.a;
        return byteBuffer;
    }

    @Override // jc.n
    public final void e(ByteBuffer byteBuffer) {
        if (byteBuffer.hasRemaining()) {
            r0 r0Var = this.j;
            r0Var.getClass();
            ShortBuffer asShortBuffer = byteBuffer.asShortBuffer();
            int remaining = byteBuffer.remaining();
            this.f12650n += remaining;
            int remaining2 = asShortBuffer.remaining();
            int i5 = r0Var.f12619b;
            int i6 = remaining2 / i5;
            short[] c6 = r0Var.c(r0Var.j, r0Var.k, i6);
            r0Var.j = c6;
            asShortBuffer.get(c6, r0Var.k * i5, ((i6 * i5) * 2) / 2);
            r0Var.k += i6;
            r0Var.f();
            byteBuffer.position(byteBuffer.position() + remaining);
        }
    }

    @Override // jc.n
    public final void f() {
        r0 r0Var = this.j;
        if (r0Var != null) {
            int i5 = r0Var.k;
            float f2 = r0Var.f12620c;
            float f10 = r0Var.f12621d;
            int i6 = r0Var.f12628m + ((int) ((((i5 / (f2 / f10)) + r0Var.f12630o) / (r0Var.f12622e * f10)) + 0.5f));
            short[] sArr = r0Var.j;
            int i10 = r0Var.f12625h * 2;
            r0Var.j = r0Var.c(sArr, i5, i10 + i5);
            int i11 = 0;
            while (true) {
                int i12 = r0Var.f12619b;
                if (i11 >= i10 * i12) {
                    break;
                }
                r0Var.j[(i12 * i5) + i11] = 0;
                i11++;
            }
            r0Var.k = i10 + r0Var.k;
            r0Var.f();
            if (r0Var.f12628m > i6) {
                r0Var.f12628m = i6;
            }
            r0Var.k = 0;
            r0Var.f12633r = 0;
            r0Var.f12630o = 0;
        }
        this.f12652p = true;
    }

    @Override // jc.n
    public final void flush() {
        if (c()) {
            l lVar = this.f12643e;
            this.f12645g = lVar;
            l lVar2 = this.f12644f;
            this.f12646h = lVar2;
            if (this.f12647i) {
                this.j = new r0(lVar.a, lVar.f12573b, this.f12641c, this.f12642d, lVar2.a);
            } else {
                r0 r0Var = this.j;
                if (r0Var != null) {
                    r0Var.k = 0;
                    r0Var.f12628m = 0;
                    r0Var.f12630o = 0;
                    r0Var.f12631p = 0;
                    r0Var.f12632q = 0;
                    r0Var.f12633r = 0;
                    r0Var.f12634s = 0;
                    r0Var.f12635t = 0;
                    r0Var.f12636u = 0;
                    r0Var.f12637v = 0;
                }
            }
        }
        this.f12649m = n.a;
        this.f12650n = 0L;
        this.f12651o = 0L;
        this.f12652p = false;
    }

    @Override // jc.n
    public final boolean g() {
        if (!this.f12652p) {
            return false;
        }
        r0 r0Var = this.j;
        return r0Var == null || (r0Var.f12628m * r0Var.f12619b) * 2 == 0;
    }

    @Override // jc.n
    public final l h(l lVar) {
        if (lVar.f12574c != 2) {
            throw new m(lVar);
        }
        int i5 = this.f12640b;
        if (i5 == -1) {
            i5 = lVar.a;
        }
        this.f12643e = lVar;
        l lVar2 = new l(i5, lVar.f12573b, 2);
        this.f12644f = lVar2;
        this.f12647i = true;
        return lVar2;
    }

    @Override // jc.n
    public final void reset() {
        this.f12641c = 1.0f;
        this.f12642d = 1.0f;
        l lVar = l.f12572e;
        this.f12643e = lVar;
        this.f12644f = lVar;
        this.f12645g = lVar;
        this.f12646h = lVar;
        ByteBuffer byteBuffer = n.a;
        this.k = byteBuffer;
        this.f12648l = byteBuffer.asShortBuffer();
        this.f12649m = byteBuffer;
        this.f12640b = -1;
        this.f12647i = false;
        this.j = null;
        this.f12650n = 0L;
        this.f12651o = 0L;
        this.f12652p = false;
    }
}
