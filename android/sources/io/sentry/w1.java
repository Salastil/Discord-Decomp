package io.sentry;

import android.graphics.Path;
import java.util.ArrayList;

/* loaded from: classes3.dex */
public final class w1 {
    public final ArrayList a;

    public w1(int i5) {
        switch (i5) {
            case 1:
                this.a = new ArrayList();
                break;
            default:
                this.a = new ArrayList();
                break;
        }
    }

    public void a(Path path) {
        ArrayList arrayList = this.a;
        for (int size = arrayList.size() - 1; size >= 0; size--) {
            n4.t tVar = (n4.t) arrayList.get(size);
            af.h0 h0Var = x4.h.a;
            if (tVar != null && !tVar.a) {
                x4.h.a(path, tVar.f14955d.k() / 100.0f, tVar.f14956e.k() / 100.0f, tVar.f14957f.k() / 360.0f);
            }
        }
    }

    public r1 b() {
        ArrayList arrayList = this.a;
        if (arrayList.isEmpty()) {
            return null;
        }
        return (r1) k0.d.f(1, arrayList);
    }

    public boolean c() {
        if (this.a.size() == 1) {
            return true;
        }
        r1 b10 = b();
        f();
        if (!(b() instanceof u1)) {
            if (!(b() instanceof s1)) {
                return false;
            }
            s1 s1Var = (s1) b();
            if (b10 == null || s1Var == null) {
                return false;
            }
            s1Var.a.add(b10.getValue());
            return false;
        }
        u1 u1Var = (u1) b();
        f();
        t1 t1Var = (t1) b();
        if (u1Var == null || b10 == null || t1Var == null) {
            return false;
        }
        t1Var.a.put(u1Var.a, b10.getValue());
        return false;
    }

    public boolean d(q1 q1Var) {
        Object e9 = q1Var.e();
        if (b() == null && e9 != null) {
            this.a.add(new v1(e9));
            return true;
        }
        if (b() instanceof u1) {
            u1 u1Var = (u1) b();
            f();
            ((t1) b()).a.put(u1Var.a, e9);
            return false;
        }
        if (!(b() instanceof s1)) {
            return false;
        }
        ((s1) b()).a.add(e9);
        return false;
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    public void e(final x1 x1Var) {
        boolean z5;
        int[] iArr = p1.a;
        io.sentry.vendor.gson.stream.a aVar = (io.sentry.vendor.gson.stream.a) x1Var.f12075e;
        int i5 = iArr[aVar.j0().ordinal()];
        ArrayList arrayList = this.a;
        switch (i5) {
            case 1:
                x1Var.c();
                arrayList.add(new s1());
                z5 = false;
                break;
            case 2:
                x1Var.g();
                z5 = c();
                break;
            case 3:
                x1Var.f();
                arrayList.add(new t1());
                z5 = false;
                break;
            case 4:
                x1Var.i();
                z5 = c();
                break;
            case 5:
                arrayList.add(new u1(aVar.R()));
                z5 = false;
                break;
            case 6:
                final int i6 = 0;
                z5 = d(new q1() { // from class: io.sentry.o1
                    @Override // io.sentry.q1
                    public final Object e() {
                        switch (i6) {
                            case 0:
                                return ((io.sentry.vendor.gson.stream.a) x1Var.f12075e).b0();
                            default:
                                return Boolean.valueOf(((io.sentry.vendor.gson.stream.a) x1Var.f12075e).A());
                        }
                    }
                });
                break;
            case 7:
                z5 = d(new cc.i(25, this, x1Var));
                break;
            case 8:
                final int i10 = 1;
                z5 = d(new q1() { // from class: io.sentry.o1
                    @Override // io.sentry.q1
                    public final Object e() {
                        switch (i10) {
                            case 0:
                                return ((io.sentry.vendor.gson.stream.a) x1Var.f12075e).b0();
                            default:
                                return Boolean.valueOf(((io.sentry.vendor.gson.stream.a) x1Var.f12075e).A());
                        }
                    }
                });
                break;
            case 9:
                aVar.V();
                z5 = d(new i7.a(8));
                break;
            case 10:
                z5 = true;
                break;
            default:
                z5 = false;
                break;
        }
        if (z5) {
            return;
        }
        e(x1Var);
    }

    public void f() {
        ArrayList arrayList = this.a;
        if (arrayList.isEmpty()) {
            return;
        }
        arrayList.remove(arrayList.size() - 1);
    }
}
