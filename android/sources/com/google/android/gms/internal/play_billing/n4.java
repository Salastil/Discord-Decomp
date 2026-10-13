package com.google.android.gms.internal.play_billing;

/* loaded from: classes3.dex */
public final class n4 extends a2 {
    @Override // com.google.android.gms.internal.play_billing.a2
    public final boolean B(w4 w4Var, v4 v4Var, v4 v4Var2) {
        synchronized (w4Var) {
            try {
                if (w4Var.f5879i != v4Var) {
                    return false;
                }
                w4Var.f5879i = v4Var2;
                return true;
            } catch (Throwable th2) {
                throw th2;
            }
        }
    }

    @Override // com.google.android.gms.internal.play_billing.a2
    public final void i(v4 v4Var, v4 v4Var2) {
        v4Var.f5860b = v4Var2;
    }

    @Override // com.google.android.gms.internal.play_billing.a2
    public final void r(v4 v4Var, Thread thread) {
        v4Var.a = thread;
    }

    @Override // com.google.android.gms.internal.play_billing.a2
    public final boolean t(w4 w4Var, l2 l2Var, l2 l2Var2) {
        synchronized (w4Var) {
            try {
                if (w4Var.f5878e != l2Var) {
                    return false;
                }
                w4Var.f5878e = l2Var2;
                return true;
            } catch (Throwable th2) {
                throw th2;
            }
        }
    }

    @Override // com.google.android.gms.internal.play_billing.a2
    public final boolean w(w4 w4Var, Object obj, Object obj2) {
        synchronized (w4Var) {
            try {
                if (w4Var.f5877d != obj) {
                    return false;
                }
                w4Var.f5877d = obj2;
                return true;
            } catch (Throwable th2) {
                throw th2;
            }
        }
    }
}
