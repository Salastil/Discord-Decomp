package com.google.android.gms.internal.play_billing;

import java.util.logging.Level;
import java.util.logging.Logger;

/* loaded from: classes3.dex */
public abstract class q0 extends c1 implements y0 {

    /* renamed from: v, reason: collision with root package name */
    public static final Object f5805v = new Object();

    /* renamed from: w, reason: collision with root package name */
    public static final x0 f5806w = new x0(b1.class);

    /* renamed from: x, reason: collision with root package name */
    public static final boolean f5807x;

    /* renamed from: y, reason: collision with root package name */
    public static final a2 f5808y;

    /* renamed from: d, reason: collision with root package name */
    public volatile Object f5809d;

    /* renamed from: e, reason: collision with root package name */
    public volatile k0 f5810e;

    /* renamed from: i, reason: collision with root package name */
    public volatile p0 f5811i;

    static {
        boolean z5;
        a2 n0Var;
        Throwable th2;
        Throwable th3;
        try {
            z5 = Boolean.parseBoolean(System.getProperty("guava.concurrent.generate_cancellation_cause", "false"));
        } catch (SecurityException unused) {
            z5 = false;
        }
        f5807x = z5;
        String property = System.getProperty("java.runtime.name", "");
        Throwable th4 = null;
        if (property == null || property.contains("Android")) {
            try {
                n0Var = new o0();
            } catch (Error | Exception e9) {
                try {
                    n0Var = new m0();
                } catch (Error | Exception e10) {
                    th4 = e10;
                    n0Var = new n0();
                }
                th2 = th4;
                th3 = e9;
            }
        } else {
            try {
                n0Var = new m0();
            } catch (NoClassDefFoundError unused2) {
                n0Var = new n0();
            }
        }
        th2 = null;
        th3 = null;
        f5808y = n0Var;
        if (th2 != null) {
            x0 x0Var = f5806w;
            Logger a = x0Var.a();
            Level level = Level.SEVERE;
            a.logp(level, "com.google.common.util.concurrent.AbstractFutureState", "<clinit>", "UnsafeAtomicHelper is broken!", th3);
            x0Var.a().logp(level, "com.google.common.util.concurrent.AbstractFutureState", "<clinit>", "AtomicReferenceFieldUpdaterAtomicHelper is broken!", th2);
        }
    }

    public final void d(p0 p0Var) {
        p0Var.a = null;
        while (true) {
            p0 p0Var2 = this.f5811i;
            if (p0Var2 != p0.f5800c) {
                p0 p0Var3 = null;
                while (p0Var2 != null) {
                    p0 p0Var4 = p0Var2.f5801b;
                    if (p0Var2.a != null) {
                        p0Var3 = p0Var2;
                    } else if (p0Var3 != null) {
                        p0Var3.f5801b = p0Var4;
                        if (p0Var3.a == null) {
                            break;
                        }
                    } else if (!f5808y.G(this, p0Var2, p0Var4)) {
                        break;
                    }
                    p0Var2 = p0Var4;
                }
                return;
            }
            return;
        }
    }
}
