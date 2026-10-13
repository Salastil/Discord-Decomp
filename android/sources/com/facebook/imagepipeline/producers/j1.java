package com.facebook.imagepipeline.producers;

import android.util.Pair;
import java.util.concurrent.ConcurrentLinkedQueue;
import java.util.concurrent.Executor;

/* loaded from: classes3.dex */
public final class j1 implements z0 {
    public final c1 a;

    /* renamed from: b, reason: collision with root package name */
    public int f4758b;

    /* renamed from: c, reason: collision with root package name */
    public final ConcurrentLinkedQueue f4759c;

    /* renamed from: d, reason: collision with root package name */
    public final Executor f4760d;

    public j1(Executor executor, c1 c1Var) {
        executor.getClass();
        this.f4760d = executor;
        this.a = c1Var;
        this.f4759c = new ConcurrentLinkedQueue();
        this.f4758b = 0;
    }

    @Override // com.facebook.imagepipeline.producers.z0
    public final void b(Consumer consumer, ProducerContext producerContext) {
        boolean z5;
        producerContext.C().c(producerContext, "ThrottlingProducer");
        synchronized (this) {
            try {
                int i5 = this.f4758b;
                z5 = true;
                if (i5 >= 5) {
                    this.f4759c.add(Pair.create(consumer, producerContext));
                } else {
                    this.f4758b = i5 + 1;
                    z5 = false;
                }
            } catch (Throwable th2) {
                throw th2;
            }
        }
        if (z5) {
            return;
        }
        producerContext.C().i(producerContext, "ThrottlingProducer", null);
        this.a.b(new i1(this, consumer), producerContext);
    }
}
