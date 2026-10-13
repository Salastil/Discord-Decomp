package com.facebook.imagepipeline.producers;

import com.facebook.imagepipeline.core.ImagePipelineConfig;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class f1 implements z0 {
    public final /* synthetic */ int a = 1;

    /* renamed from: b, reason: collision with root package name */
    public final z0 f4733b;

    /* renamed from: c, reason: collision with root package name */
    public final Object f4734c;

    public f1(z0 inputProducer, g1 threadHandoffProducerQueue) {
        Intrinsics.checkNotNullParameter(inputProducer, "inputProducer");
        Intrinsics.checkNotNullParameter(threadHandoffProducerQueue, "threadHandoffProducerQueue");
        this.f4733b = inputProducer;
        this.f4734c = threadHandoffProducerQueue;
    }

    @Override // com.facebook.imagepipeline.producers.z0
    public final void b(Consumer consumer, ProducerContext context) {
        switch (this.a) {
            case 0:
                Intrinsics.checkNotNullParameter(consumer, "consumer");
                Intrinsics.checkNotNullParameter(context, "context");
                ta.a.D();
                a1 C = context.C();
                ((ImagePipelineConfig) context.l()).f4622u.getClass();
                n0 runnable = new n0(consumer, C, context, this);
                context.i(new r0(runnable, this));
                g1 g1Var = (g1) this.f4734c;
                synchronized (g1Var) {
                    Intrinsics.checkNotNullParameter(runnable, "runnable");
                    g1Var.a.execute(runnable);
                }
                return;
            default:
                ((c1) this.f4733b).b(new k(this, consumer, context), context);
                return;
        }
    }

    public f1(c1 c1Var, j1 j1Var) {
        this.f4733b = c1Var;
        this.f4734c = j1Var;
    }
}
