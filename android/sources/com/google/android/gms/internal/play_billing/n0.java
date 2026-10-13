package com.google.android.gms.internal.play_billing;

/* loaded from: classes3.dex */
public final class n0 extends a2 {
    @Override // com.google.android.gms.internal.play_billing.a2
    public final boolean A(b1 b1Var, k0 k0Var, k0 k0Var2) {
        synchronized (b1Var) {
            try {
                if (b1Var.f5810e != k0Var) {
                    return false;
                }
                b1Var.f5810e = k0Var2;
                return true;
            } catch (Throwable th2) {
                throw th2;
            }
        }
    }

    @Override // com.google.android.gms.internal.play_billing.a2
    public final boolean E(q0 q0Var, Object obj, Object obj2) {
        synchronized (q0Var) {
            try {
                if (q0Var.f5809d != obj) {
                    return false;
                }
                q0Var.f5809d = obj2;
                return true;
            } catch (Throwable th2) {
                throw th2;
            }
        }
    }

    @Override // com.google.android.gms.internal.play_billing.a2
    public final boolean G(q0 q0Var, p0 p0Var, p0 p0Var2) {
        synchronized (q0Var) {
            try {
                if (q0Var.f5811i != p0Var) {
                    return false;
                }
                q0Var.f5811i = p0Var2;
                return true;
            } catch (Throwable th2) {
                throw th2;
            }
        }
    }

    @Override // com.google.android.gms.internal.play_billing.a2
    public final k0 e(b1 b1Var) {
        k0 k0Var;
        k0 k0Var2 = k0.f5754d;
        synchronized (b1Var) {
            try {
                k0Var = b1Var.f5810e;
                if (k0Var != k0Var2) {
                    b1Var.f5810e = k0Var2;
                }
            } catch (Throwable th2) {
                throw th2;
            }
        }
        return k0Var;
    }

    @Override // com.google.android.gms.internal.play_billing.a2
    public final p0 o(b1 b1Var) {
        p0 p0Var;
        p0 p0Var2 = p0.f5800c;
        synchronized (b1Var) {
            try {
                p0Var = b1Var.f5811i;
                if (p0Var != p0Var2) {
                    b1Var.f5811i = p0Var2;
                }
            } catch (Throwable th2) {
                throw th2;
            }
        }
        return p0Var;
    }

    @Override // com.google.android.gms.internal.play_billing.a2
    public final void s(p0 p0Var, p0 p0Var2) {
        p0Var.f5801b = p0Var2;
    }

    @Override // com.google.android.gms.internal.play_billing.a2
    public final void v(p0 p0Var, Thread thread) {
        p0Var.a = thread;
    }
}
