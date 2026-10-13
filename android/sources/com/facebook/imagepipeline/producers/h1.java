package com.facebook.imagepipeline.producers;

import android.util.Pair;

/* loaded from: classes3.dex */
public final class h1 implements Runnable {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ Pair f4745d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ i1 f4746e;

    public h1(i1 i1Var, Pair pair) {
        this.f4746e = i1Var;
        this.f4745d = pair;
    }

    @Override // java.lang.Runnable
    public final void run() {
        j1 j1Var = this.f4746e.f4753c;
        Pair pair = this.f4745d;
        Consumer consumer = (Consumer) pair.first;
        ProducerContext producerContext = (ProducerContext) pair.second;
        producerContext.C().i(producerContext, "ThrottlingProducer", null);
        j1Var.a.b(new i1(j1Var, consumer), producerContext);
    }
}
