package com.google.android.gms.internal.play_billing;

/* loaded from: classes3.dex */
public abstract class d2 implements Cloneable {

    /* renamed from: d, reason: collision with root package name */
    public final e2 f5727d;

    /* renamed from: e, reason: collision with root package name */
    public e2 f5728e;

    public d2(e2 e2Var) {
        this.f5727d = e2Var;
        if (e2Var.h()) {
            throw new IllegalArgumentException("Default instance must be immutable.");
        }
        this.f5728e = e2Var.n();
    }

    public final e2 a() {
        e2 b10 = b();
        b10.getClass();
        if (e2.i(b10, true)) {
            return b10;
        }
        throw new f3();
    }

    public final e2 b() {
        if (!this.f5728e.h()) {
            return this.f5728e;
        }
        this.f5728e.q();
        return this.f5728e;
    }

    public final void c() {
        if (this.f5728e.h()) {
            return;
        }
        d();
    }

    public final Object clone() {
        d2 d2Var = (d2) this.f5727d.j(5);
        d2Var.f5728e = b();
        return d2Var;
    }

    public final void d() {
        e2 n6 = this.f5727d.n();
        v2.f5858b.a(n6.getClass()).f(n6, this.f5728e);
        this.f5728e = n6;
    }
}
