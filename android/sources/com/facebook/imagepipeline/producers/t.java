package com.facebook.imagepipeline.producers;

import com.facebook.imagepipeline.image.EncodedImage;
import java.util.concurrent.CancellationException;

/* loaded from: classes3.dex */
public final class t implements j4.c {
    public final /* synthetic */ a1 a;

    /* renamed from: b, reason: collision with root package name */
    public final /* synthetic */ ProducerContext f4806b;

    /* renamed from: c, reason: collision with root package name */
    public final /* synthetic */ Consumer f4807c;

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ u f4808d;

    public t(u uVar, a1 a1Var, ProducerContext producerContext, Consumer consumer) {
        this.f4808d = uVar;
        this.a = a1Var;
        this.f4806b = producerContext;
        this.f4807c = consumer;
    }

    @Override // j4.c
    public final void a(j4.e eVar) {
        boolean z5;
        Object obj;
        u uVar = this.f4808d;
        Consumer consumer = this.f4807c;
        a1 a1Var = this.a;
        ProducerContext producerContext = this.f4806b;
        synchronized (eVar.a) {
            z5 = eVar.f12419c;
        }
        if (z5 || (eVar.d() && (eVar.c() instanceof CancellationException))) {
            a1Var.e(producerContext, "DiskCacheProducer");
            consumer.a();
            return;
        }
        if (eVar.d()) {
            a1Var.k(producerContext, "DiskCacheProducer", eVar.c(), null);
            uVar.f4817c.b(consumer, producerContext);
            return;
        }
        synchronized (eVar.a) {
            obj = eVar.f12420d;
        }
        EncodedImage encodedImage = (EncodedImage) obj;
        if (encodedImage == null) {
            a1Var.i(producerContext, "DiskCacheProducer", u.c(a1Var, producerContext, false, 0));
            uVar.f4817c.b(consumer, producerContext);
            return;
        }
        a1Var.i(producerContext, "DiskCacheProducer", u.c(a1Var, producerContext, true, encodedImage.getSize()));
        a1Var.b(producerContext, "DiskCacheProducer", true);
        producerContext.x("disk");
        consumer.c(1.0f);
        consumer.b(1, encodedImage);
        encodedImage.close();
    }
}
