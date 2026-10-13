package com.facebook.imagepipeline.producers;

import java.util.concurrent.Executor;

/* loaded from: classes3.dex */
public final class c1 implements z0 {
    public final Executor a;

    /* renamed from: b, reason: collision with root package name */
    public final e4.c f4710b;

    /* renamed from: c, reason: collision with root package name */
    public final z0 f4711c;

    /* renamed from: d, reason: collision with root package name */
    public final boolean f4712d;

    /* renamed from: e, reason: collision with root package name */
    public final ua.b f4713e;

    public c1(Executor executor, e4.c cVar, z0 z0Var, boolean z5, ua.b bVar) {
        executor.getClass();
        this.a = executor;
        cVar.getClass();
        this.f4710b = cVar;
        this.f4711c = z0Var;
        bVar.getClass();
        this.f4713e = bVar;
        this.f4712d = z5;
    }

    @Override // com.facebook.imagepipeline.producers.z0
    public final void b(Consumer consumer, ProducerContext producerContext) {
        this.f4711c.b(new b1(this, consumer, producerContext, this.f4712d, this.f4713e), producerContext);
    }
}
