package com.facebook.imagepipeline.producers;

import android.util.Pair;
import java.io.Closeable;
import java.util.HashMap;

/* loaded from: classes3.dex */
public abstract class u0 implements z0 {
    public final HashMap a = new HashMap();

    /* renamed from: b, reason: collision with root package name */
    public final z0 f4818b;

    /* renamed from: c, reason: collision with root package name */
    public final String f4819c;

    /* renamed from: d, reason: collision with root package name */
    public final String f4820d;

    public u0(z0 z0Var, String str, String str2) {
        this.f4818b = z0Var;
        this.f4819c = str;
        this.f4820d = str2;
    }

    @Override // com.facebook.imagepipeline.producers.z0
    public final void b(Consumer consumer, ProducerContext producerContext) {
        t0 t0Var;
        int i5;
        boolean z5;
        try {
            ta.a.D();
            producerContext.C().c(producerContext, this.f4819c);
            Pair d6 = d(producerContext);
            do {
                synchronized (this) {
                    synchronized (this) {
                        t0Var = (t0) this.a.get(d6);
                    }
                }
                i5 = 1;
                if (t0Var == null) {
                    synchronized (this) {
                        t0Var = new t0(this, d6);
                        this.a.put(d6, t0Var);
                        z5 = true;
                    }
                } else {
                    z5 = false;
                }
            } while (!t0Var.a(consumer, producerContext));
            if (z5) {
                if (!producerContext.r()) {
                    i5 = 2;
                }
                t0Var.i(i5);
            }
        } finally {
            ta.a.D();
        }
    }

    public abstract Closeable c(Closeable closeable);

    public abstract Pair d(ProducerContext producerContext);

    public final synchronized void e(Object obj, t0 t0Var) {
        if (this.a.get(obj) == t0Var) {
            this.a.remove(obj);
        }
    }
}
