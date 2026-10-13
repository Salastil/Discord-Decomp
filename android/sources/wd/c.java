package wd;

import af.k;
import java.util.ArrayDeque;
import java.util.List;
import kotlin.jvm.internal.LongCompanionObject;

/* loaded from: classes3.dex */
public final class c extends mc.g implements e {

    /* renamed from: v, reason: collision with root package name */
    public e f19809v;

    /* renamed from: w, reason: collision with root package name */
    public long f19810w;

    /* renamed from: x, reason: collision with root package name */
    public final /* synthetic */ int f19811x;

    /* renamed from: y, reason: collision with root package name */
    public Object f19812y;

    public /* synthetic */ c() {
        this.f19811x = 2;
    }

    @Override // wd.e
    public final int A() {
        e eVar = this.f19809v;
        eVar.getClass();
        return eVar.A();
    }

    @Override // wd.e
    public final int d(long j) {
        e eVar = this.f19809v;
        eVar.getClass();
        return eVar.d(j - this.f19810w);
    }

    @Override // mc.g
    public final void f() {
        switch (this.f19811x) {
            case 0:
                ArrayDeque arrayDeque = (ArrayDeque) ((k) this.f19812y).f564b;
                ke.b.k(arrayDeque.size() < 2);
                ke.b.g(!arrayDeque.contains(this));
                this.f14426e = 0;
                this.f19809v = null;
                arrayDeque.addFirst(this);
                return;
            case 1:
                d dVar = (d) this.f19812y;
                synchronized (dVar.f19813b) {
                    this.f14426e = 0;
                    this.f19809v = null;
                    mc.g[] gVarArr = dVar.f19817f;
                    int i5 = dVar.f19819h;
                    dVar.f19819h = i5 + 1;
                    gVarArr[i5] = this;
                    if (!dVar.f19814c.isEmpty() && dVar.f19819h > 0) {
                        dVar.f19813b.notify();
                    }
                }
                return;
            default:
                xd.h hVar = (xd.h) ((ni.a) this.f19812y).f15479e;
                this.f14426e = 0;
                this.f19809v = null;
                hVar.f20393b.add(this);
                return;
        }
    }

    public final void g(long j, e eVar, long j5) {
        this.f14440i = j;
        this.f19809v = eVar;
        if (j5 != LongCompanionObject.MAX_VALUE) {
            j = j5;
        }
        this.f19810w = j;
    }

    @Override // wd.e
    public final long i(int i5) {
        e eVar = this.f19809v;
        eVar.getClass();
        return eVar.i(i5) + this.f19810w;
    }

    @Override // wd.e
    public final List q(long j) {
        e eVar = this.f19809v;
        eVar.getClass();
        return eVar.q(j - this.f19810w);
    }

    public /* synthetic */ c(f fVar, int i5) {
        this.f19811x = i5;
        this.f19812y = fVar;
    }
}
