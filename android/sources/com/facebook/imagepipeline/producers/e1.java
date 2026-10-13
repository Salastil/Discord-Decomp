package com.facebook.imagepipeline.producers;

import java.util.Map;
import java.util.concurrent.atomic.AtomicInteger;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public abstract class e1 implements Runnable {

    /* renamed from: d, reason: collision with root package name */
    public final AtomicInteger f4726d;

    /* renamed from: e, reason: collision with root package name */
    public final Consumer f4727e;

    /* renamed from: i, reason: collision with root package name */
    public final a1 f4728i;

    /* renamed from: v, reason: collision with root package name */
    public final ProducerContext f4729v;

    /* renamed from: w, reason: collision with root package name */
    public final String f4730w;

    public e1(Consumer consumer, a1 producerListener, ProducerContext producerContext, String producerName) {
        Intrinsics.checkNotNullParameter(consumer, "consumer");
        Intrinsics.checkNotNullParameter(producerListener, "producerListener");
        Intrinsics.checkNotNullParameter(producerContext, "producerContext");
        Intrinsics.checkNotNullParameter(producerName, "producerName");
        this.f4726d = new AtomicInteger(0);
        this.f4727e = consumer;
        this.f4728i = producerListener;
        this.f4729v = producerContext;
        this.f4730w = producerName;
        producerListener.c(producerContext, producerName);
    }

    public final void a() {
        if (this.f4726d.compareAndSet(0, 2)) {
            e();
        }
    }

    public abstract void b(Object obj);

    public Map c(Object obj) {
        return null;
    }

    public abstract Object d();

    public void e() {
        a1 a1Var = this.f4728i;
        ProducerContext producerContext = this.f4729v;
        String str = this.f4730w;
        a1Var.f(producerContext, str);
        a1Var.e(producerContext, str);
        this.f4727e.a();
    }

    public void f(Exception e9) {
        Intrinsics.checkNotNullParameter(e9, "e");
        a1 a1Var = this.f4728i;
        ProducerContext producerContext = this.f4729v;
        String str = this.f4730w;
        a1Var.f(producerContext, str);
        a1Var.k(producerContext, str, e9, null);
        this.f4727e.onFailure(e9);
    }

    public void g(Object obj) {
        a1 a1Var = this.f4728i;
        ProducerContext producerContext = this.f4729v;
        String str = this.f4730w;
        a1Var.i(producerContext, str, a1Var.f(producerContext, str) ? c(obj) : null);
        this.f4727e.b(1, obj);
    }

    @Override // java.lang.Runnable
    public final void run() {
        AtomicInteger atomicInteger = this.f4726d;
        if (atomicInteger.compareAndSet(0, 1)) {
            try {
                Object d6 = d();
                atomicInteger.set(3);
                try {
                    g(d6);
                } finally {
                    b(d6);
                }
            } catch (Exception e9) {
                atomicInteger.set(4);
                f(e9);
            }
        }
    }
}
