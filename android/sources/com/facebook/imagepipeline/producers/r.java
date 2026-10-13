package com.facebook.imagepipeline.producers;

import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public abstract class r extends c {

    /* renamed from: b, reason: collision with root package name */
    public final Consumer f4801b;

    public r(Consumer consumer) {
        Intrinsics.checkNotNullParameter(consumer, "consumer");
        this.f4801b = consumer;
    }

    @Override // com.facebook.imagepipeline.producers.c
    public void f() {
        this.f4801b.a();
    }

    @Override // com.facebook.imagepipeline.producers.c
    public void g(Throwable t5) {
        Intrinsics.checkNotNullParameter(t5, "t");
        this.f4801b.onFailure(t5);
    }

    @Override // com.facebook.imagepipeline.producers.c
    public void i(float f2) {
        this.f4801b.c(f2);
    }
}
