package com.google.android.gms.internal.play_billing;

import java.util.concurrent.ScheduledFuture;
import java.util.concurrent.TimeUnit;

/* loaded from: classes3.dex */
public final class z0 implements Runnable {

    /* renamed from: d, reason: collision with root package name */
    public b1 f5895d;

    @Override // java.lang.Runnable
    public final void run() {
        y0 y0Var;
        j0 j0Var;
        b1 b1Var = this.f5895d;
        if (b1Var == null || (y0Var = b1Var.E) == null) {
            return;
        }
        this.f5895d = null;
        if (y0Var.isDone()) {
            Object obj = b1Var.f5809d;
            if (obj == null) {
                if (y0Var.isDone()) {
                    if (q0.f5808y.E(b1Var, null, b1.h(y0Var))) {
                        b1.j(b1Var);
                        return;
                    }
                    return;
                }
                h0 h0Var = new h0(b1Var, y0Var);
                if (q0.f5808y.E(b1Var, null, h0Var)) {
                    try {
                        y0Var.b(h0Var, u0.f5848d);
                        return;
                    } catch (Throwable th2) {
                        try {
                            j0Var = new j0(th2);
                        } catch (Error | Exception unused) {
                            j0Var = j0.f5752b;
                        }
                        q0.f5808y.E(b1Var, h0Var, j0Var);
                        return;
                    }
                }
                obj = b1Var.f5809d;
            }
            if (obj instanceof g0) {
                y0Var.cancel(((g0) obj).a);
                return;
            }
            return;
        }
        try {
            ScheduledFuture scheduledFuture = b1Var.F;
            b1Var.F = null;
            String str = "Timed out";
            if (scheduledFuture != null) {
                try {
                    long abs = Math.abs(scheduledFuture.getDelay(TimeUnit.MILLISECONDS));
                    if (abs > 10) {
                        str = "Timed out (timeout delayed by " + abs + " ms after scheduled time)";
                    }
                } catch (Throwable th3) {
                    if (q0.f5808y.E(b1Var, null, new j0(new a1(str)))) {
                        b1.j(b1Var);
                    }
                    throw th3;
                }
            }
            if (q0.f5808y.E(b1Var, null, new j0(new a1(str + ": " + y0Var.toString())))) {
                b1.j(b1Var);
            }
        } finally {
            y0Var.cancel(true);
        }
    }
}
