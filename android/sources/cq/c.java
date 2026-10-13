package cq;

import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;

/* loaded from: classes3.dex */
public final class c extends iq.i implements iq.u {
    public int E;
    public int F;
    public h G;
    public List H;
    public int I;
    public int J;

    /* renamed from: e, reason: collision with root package name */
    public int f7028e;

    /* renamed from: i, reason: collision with root package name */
    public d f7029i;

    /* renamed from: v, reason: collision with root package name */
    public long f7030v;

    /* renamed from: w, reason: collision with root package name */
    public float f7031w;

    /* renamed from: x, reason: collision with root package name */
    public double f7032x;

    /* renamed from: y, reason: collision with root package name */
    public int f7033y;

    public static c g() {
        c cVar = new c();
        cVar.f7029i = d.BYTE;
        cVar.G = h.f7106y;
        cVar.H = Collections.EMPTY_LIST;
        return cVar;
    }

    @Override // iq.i
    public final iq.a c() {
        e f2 = f();
        if (f2.b()) {
            return f2;
        }
        throw new ai.k();
    }

    public final Object clone() {
        c g6 = g();
        g6.h(f());
        return g6;
    }

    /* JADX WARN: Removed duplicated region for block: B:16:0x001b  */
    @Override // iq.i
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final iq.i d(iq.e eVar, iq.g gVar) {
        e eVar2 = null;
        try {
            try {
                e.N.getClass();
                h(new e(eVar, gVar));
                return this;
            } catch (iq.q e9) {
                e eVar3 = (e) e9.f12236d;
                try {
                    throw e9;
                } catch (Throwable th2) {
                    th = th2;
                    eVar2 = eVar3;
                    if (eVar2 != null) {
                        h(eVar2);
                    }
                    throw th;
                }
            }
        } catch (Throwable th3) {
            th = th3;
            if (eVar2 != null) {
            }
            throw th;
        }
    }

    @Override // iq.i
    public final /* bridge */ /* synthetic */ iq.i e(iq.n nVar) {
        h((e) nVar);
        return this;
    }

    public final e f() {
        e eVar = new e(this);
        int i5 = this.f7028e;
        int i6 = (i5 & 1) != 1 ? 0 : 1;
        eVar.f7059i = this.f7029i;
        if ((i5 & 2) == 2) {
            i6 |= 2;
        }
        eVar.f7060v = this.f7030v;
        if ((i5 & 4) == 4) {
            i6 |= 4;
        }
        eVar.f7061w = this.f7031w;
        if ((i5 & 8) == 8) {
            i6 |= 8;
        }
        eVar.f7062x = this.f7032x;
        if ((i5 & 16) == 16) {
            i6 |= 16;
        }
        eVar.f7063y = this.f7033y;
        if ((i5 & 32) == 32) {
            i6 |= 32;
        }
        eVar.E = this.E;
        if ((i5 & 64) == 64) {
            i6 |= 64;
        }
        eVar.F = this.F;
        if ((i5 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT) == 128) {
            i6 |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        }
        eVar.G = this.G;
        if ((i5 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER) == 256) {
            this.H = Collections.unmodifiableList(this.H);
            this.f7028e &= -257;
        }
        eVar.H = this.H;
        if ((i5 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING) == 512) {
            i6 |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER;
        }
        eVar.I = this.I;
        if ((i5 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_OVERFLOW_INSET) == 1024) {
            i6 |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING;
        }
        eVar.J = this.J;
        eVar.f7058e = i6;
        return eVar;
    }

    public final void h(e eVar) {
        h hVar;
        if (eVar == e.M) {
            return;
        }
        if ((eVar.f7058e & 1) == 1) {
            d dVar = eVar.f7059i;
            dVar.getClass();
            this.f7028e = 1 | this.f7028e;
            this.f7029i = dVar;
        }
        int i5 = eVar.f7058e;
        if ((i5 & 2) == 2) {
            long j = eVar.f7060v;
            this.f7028e |= 2;
            this.f7030v = j;
        }
        if ((i5 & 4) == 4) {
            float f2 = eVar.f7061w;
            this.f7028e = 4 | this.f7028e;
            this.f7031w = f2;
        }
        if ((i5 & 8) == 8) {
            double d6 = eVar.f7062x;
            this.f7028e |= 8;
            this.f7032x = d6;
        }
        if ((i5 & 16) == 16) {
            int i6 = eVar.f7063y;
            this.f7028e = 16 | this.f7028e;
            this.f7033y = i6;
        }
        if ((i5 & 32) == 32) {
            int i10 = eVar.E;
            this.f7028e = 32 | this.f7028e;
            this.E = i10;
        }
        if ((i5 & 64) == 64) {
            int i11 = eVar.F;
            this.f7028e = 64 | this.f7028e;
            this.F = i11;
        }
        if ((i5 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT) == 128) {
            h hVar2 = eVar.G;
            if ((this.f7028e & IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT) != 128 || (hVar = this.G) == h.f7106y) {
                this.G = hVar2;
            } else {
                g gVar = new g(0);
                gVar.f7096v = Collections.EMPTY_LIST;
                gVar.j(hVar);
                gVar.j(hVar2);
                this.G = gVar.f();
            }
            this.f7028e |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        }
        if (!eVar.H.isEmpty()) {
            if (this.H.isEmpty()) {
                this.H = eVar.H;
                this.f7028e &= -257;
            } else {
                if ((this.f7028e & IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER) != 256) {
                    this.H = new ArrayList(this.H);
                    this.f7028e |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER;
                }
                this.H.addAll(eVar.H);
            }
        }
        int i12 = eVar.f7058e;
        if ((i12 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER) == 256) {
            int i13 = eVar.I;
            this.f7028e |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING;
            this.I = i13;
        }
        if ((i12 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING) == 512) {
            int i14 = eVar.J;
            this.f7028e |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_OVERFLOW_INSET;
            this.J = i14;
        }
        this.f12211d = this.f12211d.b(eVar.f7057d);
    }
}
