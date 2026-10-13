package wd;

import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import h5.m;
import java.nio.ByteBuffer;
import java.util.ArrayDeque;

/* loaded from: classes3.dex */
public abstract class d implements f, mc.d {
    public final m a;

    /* renamed from: f, reason: collision with root package name */
    public final mc.g[] f19817f;

    /* renamed from: h, reason: collision with root package name */
    public int f19819h;

    /* renamed from: i, reason: collision with root package name */
    public mc.f f19820i;
    public g j;
    public boolean k;

    /* renamed from: l, reason: collision with root package name */
    public boolean f19821l;

    /* renamed from: b, reason: collision with root package name */
    public final Object f19813b = new Object();

    /* renamed from: c, reason: collision with root package name */
    public final ArrayDeque f19814c = new ArrayDeque();

    /* renamed from: d, reason: collision with root package name */
    public final ArrayDeque f19815d = new ArrayDeque();

    /* renamed from: e, reason: collision with root package name */
    public final mc.f[] f19816e = new i[2];

    /* renamed from: g, reason: collision with root package name */
    public int f19818g = 2;

    public d() {
        c[] cVarArr = new c[2];
        int i5 = 0;
        while (true) {
            if (i5 >= this.f19818g) {
                break;
            }
            this.f19816e[i5] = new i(1);
            i5++;
        }
        this.f19817f = cVarArr;
        this.f19819h = 2;
        for (int i6 = 0; i6 < this.f19819h; i6++) {
            this.f19817f[i6] = new c(this, 1);
        }
        m mVar = new m(this);
        this.a = mVar;
        mVar.start();
        int i10 = this.f19818g;
        mc.f[] fVarArr = this.f19816e;
        ke.b.k(i10 == fVarArr.length);
        for (mc.f fVar : fVarArr) {
            fVar.h(IntBufferBatchMountItem.INSTRUCTION_UPDATE_OVERFLOW_INSET);
        }
    }

    @Override // mc.d
    public final Object b() {
        synchronized (this.f19813b) {
            try {
                g gVar = this.j;
                if (gVar != null) {
                    throw gVar;
                }
                if (this.f19815d.isEmpty()) {
                    return null;
                }
                return (mc.g) this.f19815d.removeFirst();
            } catch (Throwable th2) {
                throw th2;
            }
        }
    }

    @Override // mc.d
    public final Object c() {
        mc.f fVar;
        synchronized (this.f19813b) {
            try {
                g gVar = this.j;
                if (gVar != null) {
                    throw gVar;
                }
                ke.b.k(this.f19820i == null);
                int i5 = this.f19818g;
                if (i5 == 0) {
                    fVar = null;
                } else {
                    mc.f[] fVarArr = this.f19816e;
                    int i6 = i5 - 1;
                    this.f19818g = i6;
                    fVar = fVarArr[i6];
                }
                this.f19820i = fVar;
            } catch (Throwable th2) {
                throw th2;
            }
        }
        return fVar;
    }

    @Override // mc.d
    public final void d(i iVar) {
        synchronized (this.f19813b) {
            try {
                g gVar = this.j;
                if (gVar != null) {
                    throw gVar;
                }
                ke.b.g(iVar == this.f19820i);
                this.f19814c.addLast(iVar);
                if (!this.f19814c.isEmpty() && this.f19819h > 0) {
                    this.f19813b.notify();
                }
                this.f19820i = null;
            } catch (Throwable th2) {
                throw th2;
            }
        }
    }

    public abstract e e(byte[] bArr, int i5, boolean z5);

    public final g f(mc.f fVar, mc.g gVar, boolean z5) {
        i iVar = (i) fVar;
        c cVar = (c) gVar;
        try {
            ByteBuffer byteBuffer = iVar.f14436v;
            byteBuffer.getClass();
            cVar.g(iVar.f14438x, e(byteBuffer.array(), byteBuffer.limit(), z5), iVar.F);
            cVar.f14426e &= Integer.MAX_VALUE;
            return null;
        } catch (g e9) {
            return e9;
        }
    }

    @Override // mc.d
    public final void flush() {
        synchronized (this.f19813b) {
            try {
                this.k = true;
                mc.f fVar = this.f19820i;
                if (fVar != null) {
                    fVar.f();
                    mc.f[] fVarArr = this.f19816e;
                    int i5 = this.f19818g;
                    this.f19818g = i5 + 1;
                    fVarArr[i5] = fVar;
                    this.f19820i = null;
                }
                while (!this.f19814c.isEmpty()) {
                    mc.f fVar2 = (mc.f) this.f19814c.removeFirst();
                    fVar2.f();
                    mc.f[] fVarArr2 = this.f19816e;
                    int i6 = this.f19818g;
                    this.f19818g = i6 + 1;
                    fVarArr2[i6] = fVar2;
                }
                while (!this.f19815d.isEmpty()) {
                    ((mc.g) this.f19815d.removeFirst()).f();
                }
            } catch (Throwable th2) {
                throw th2;
            }
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:26:0x0087 A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:51:0x007a  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final boolean g() {
        g gVar;
        g gVar2;
        synchronized (this.f19813b) {
            while (!this.f19821l) {
                try {
                    if (!this.f19814c.isEmpty() && this.f19819h > 0) {
                        break;
                    }
                    this.f19813b.wait();
                } finally {
                }
            }
            if (this.f19821l) {
                return false;
            }
            mc.f fVar = (mc.f) this.f19814c.removeFirst();
            mc.g[] gVarArr = this.f19817f;
            int i5 = this.f19819h - 1;
            this.f19819h = i5;
            mc.g gVar3 = gVarArr[i5];
            boolean z5 = this.k;
            this.k = false;
            if (fVar.c(4)) {
                gVar3.a(4);
            } else {
                if (fVar.c(Integer.MIN_VALUE)) {
                    gVar3.a(Integer.MIN_VALUE);
                }
                if (fVar.c(134217728)) {
                    gVar3.a(134217728);
                }
                try {
                    gVar2 = f(fVar, gVar3, z5);
                } catch (OutOfMemoryError e9) {
                    gVar = new g("Unexpected decode error", e9);
                    gVar2 = gVar;
                    if (gVar2 != null) {
                    }
                    synchronized (this.f19813b) {
                    }
                } catch (RuntimeException e10) {
                    gVar = new g("Unexpected decode error", e10);
                    gVar2 = gVar;
                    if (gVar2 != null) {
                    }
                    synchronized (this.f19813b) {
                    }
                }
                if (gVar2 != null) {
                    synchronized (this.f19813b) {
                        this.j = gVar2;
                    }
                    return false;
                }
            }
            synchronized (this.f19813b) {
                try {
                    if (this.k) {
                        gVar3.f();
                    } else if (gVar3.c(Integer.MIN_VALUE)) {
                        gVar3.f();
                    } else {
                        this.f19815d.addLast(gVar3);
                    }
                    fVar.f();
                    mc.f[] fVarArr = this.f19816e;
                    int i6 = this.f19818g;
                    this.f19818g = i6 + 1;
                    fVarArr[i6] = fVar;
                } finally {
                }
            }
            return true;
        }
    }

    @Override // mc.d
    public final void release() {
        synchronized (this.f19813b) {
            this.f19821l = true;
            this.f19813b.notify();
        }
        try {
            this.a.join();
        } catch (InterruptedException unused) {
            Thread.currentThread().interrupt();
        }
    }

    @Override // wd.f
    public final void a(long j) {
    }
}
