package hc;

import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import com.google.android.exoplayer2.Format;
import com.google.android.exoplayer2.trackselection.DefaultTrackSelector;
import kotlin.jvm.internal.LongCompanionObject;

/* loaded from: classes3.dex */
public abstract class e implements k1 {
    public nd.q0 E;
    public Format[] F;
    public long G;
    public boolean I;
    public boolean J;
    public DefaultTrackSelector K;

    /* renamed from: e, reason: collision with root package name */
    public final int f9659e;

    /* renamed from: v, reason: collision with root package name */
    public o1 f9661v;

    /* renamed from: w, reason: collision with root package name */
    public int f9662w;

    /* renamed from: x, reason: collision with root package name */
    public ic.c0 f9663x;

    /* renamed from: y, reason: collision with root package name */
    public int f9664y;

    /* renamed from: d, reason: collision with root package name */
    public final Object f9658d = new Object();

    /* renamed from: i, reason: collision with root package name */
    public final e4.l f9660i = new e4.l(10);
    public long H = Long.MIN_VALUE;

    public e(int i5) {
        this.f9659e = i5;
    }

    public static int e(int i5, int i6, int i10) {
        return i5 | i6 | i10 | IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
    }

    /* JADX WARN: Removed duplicated region for block: B:11:0x0025  */
    /* JADX WARN: Removed duplicated region for block: B:15:0x0027  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final com.google.android.exoplayer2.c f(Exception exc, Format format, boolean z5, int i5) {
        int i6;
        if (format != null && !this.J) {
            this.J = true;
            try {
                i6 = y(format) & 7;
            } catch (com.google.android.exoplayer2.c unused) {
            } finally {
                this.J = false;
            }
            return new com.google.android.exoplayer2.c(1, exc, i5, h(), this.f9662w, format, format != null ? 4 : i6, z5);
        }
        i6 = 4;
        return new com.google.android.exoplayer2.c(1, exc, i5, h(), this.f9662w, format, format != null ? 4 : i6, z5);
    }

    public ke.n g() {
        return null;
    }

    public abstract String h();

    public final boolean i() {
        return this.H == Long.MIN_VALUE;
    }

    public abstract boolean j();

    public abstract boolean k();

    public abstract void l();

    public abstract void n(long j, boolean z5);

    public abstract void s(Format[] formatArr, long j, long j5);

    public final int t(e4.l lVar, mc.f fVar, int i5) {
        nd.q0 q0Var = this.E;
        q0Var.getClass();
        int f2 = q0Var.f(lVar, fVar, i5);
        if (f2 == -4) {
            if (fVar.c(4)) {
                this.H = Long.MIN_VALUE;
                return this.I ? -4 : -3;
            }
            long j = fVar.f14438x + this.G;
            fVar.f14438x = j;
            this.H = Math.max(this.H, j);
            return f2;
        }
        if (f2 == -5) {
            Format format = (Format) lVar.f7960i;
            format.getClass();
            long j5 = format.M;
            if (j5 != LongCompanionObject.MAX_VALUE) {
                f0 a = format.a();
                a.f9681o = j5 + this.G;
                lVar.f7960i = new Format(a);
            }
        }
        return f2;
    }

    public abstract void u(long j, long j5);

    public final void v(Format[] formatArr, nd.q0 q0Var, long j, long j5) {
        ke.b.k(!this.I);
        this.E = q0Var;
        if (this.H == Long.MIN_VALUE) {
            this.H = j;
        }
        this.F = formatArr;
        this.G = j5;
        s(formatArr, j, j5);
    }

    public final void w() {
        ke.b.k(this.f9664y == 0);
        this.f9660i.u();
        p();
    }

    public abstract int y(Format format);

    public int z() {
        return 0;
    }

    public void o() {
    }

    public void p() {
    }

    public void q() {
    }

    public void r() {
    }

    @Override // hc.k1
    public void c(int i5, Object obj) {
    }

    public void m(boolean z5, boolean z6) {
    }

    public void x(float f2, float f10) {
    }
}
