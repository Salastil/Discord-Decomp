package com.google.android.gms.internal.play_billing;

/* loaded from: classes3.dex */
public final class x4 {
    public Object a;

    /* renamed from: b, reason: collision with root package name */
    public z4 f5888b;

    /* renamed from: c, reason: collision with root package name */
    public a5 f5889c;

    /* renamed from: d, reason: collision with root package name */
    public boolean f5890d;

    public final void a(Object obj) {
        this.f5890d = true;
        z4 z4Var = this.f5888b;
        if (z4Var != null) {
            y4 y4Var = z4Var.f5897e;
            y4Var.getClass();
            if (obj == null) {
                obj = w4.f5876y;
            }
            if (w4.f5875x.w(y4Var, null, obj)) {
                w4.d(y4Var);
                this.a = null;
                this.f5888b = null;
                this.f5889c = null;
            }
        }
    }

    public final void finalize() {
        a5 a5Var;
        z4 z4Var = this.f5888b;
        if (z4Var != null) {
            y4 y4Var = z4Var.f5897e;
            if (!y4Var.isDone()) {
                if (w4.f5875x.w(y4Var, null, new y1(new o1("The completer object was garbage collected - this future would otherwise never complete. The tag was: ".concat(String.valueOf(this.a)), 1)))) {
                    w4.d(y4Var);
                }
            }
        }
        if (this.f5890d || (a5Var = this.f5889c) == null) {
            return;
        }
        a5Var.i(null);
    }
}
