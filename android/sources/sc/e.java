package sc;

import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import ke.d0;
import qc.r;
import qc.t;
import qc.v;

/* loaded from: classes3.dex */
public final class e {
    public final v a;

    /* renamed from: b, reason: collision with root package name */
    public final int f17848b;

    /* renamed from: c, reason: collision with root package name */
    public final int f17849c;

    /* renamed from: d, reason: collision with root package name */
    public final long f17850d;

    /* renamed from: e, reason: collision with root package name */
    public final int f17851e;

    /* renamed from: f, reason: collision with root package name */
    public int f17852f;

    /* renamed from: g, reason: collision with root package name */
    public int f17853g;

    /* renamed from: h, reason: collision with root package name */
    public int f17854h;

    /* renamed from: i, reason: collision with root package name */
    public int f17855i;
    public int j;
    public long[] k;

    /* renamed from: l, reason: collision with root package name */
    public int[] f17856l;

    public e(int i5, int i6, long j, int i10, v vVar) {
        boolean z5 = true;
        if (i6 != 1 && i6 != 2) {
            z5 = false;
        }
        ke.b.g(z5);
        this.f17850d = j;
        this.f17851e = i10;
        this.a = vVar;
        int i11 = (((i5 % 10) + 48) << 8) | ((i5 / 10) + 48);
        this.f17848b = (i6 == 2 ? 1667497984 : 1651965952) | i11;
        this.f17849c = i6 == 2 ? i11 | 1650720768 : -1;
        this.k = new long[IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING];
        this.f17856l = new int[IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING];
    }

    public final t a(int i5) {
        return new t(((this.f17850d * 1) / this.f17851e) * this.f17856l[i5], this.k[i5]);
    }

    public final r b(long j) {
        int i5 = (int) (j / ((this.f17850d * 1) / this.f17851e));
        int d6 = d0.d(this.f17856l, i5, true, true);
        if (this.f17856l[d6] == i5) {
            t a = a(d6);
            return new r(a, a);
        }
        t a10 = a(d6);
        int i6 = d6 + 1;
        return i6 < this.k.length ? new r(a10, a(i6)) : new r(a10, a10);
    }
}
