package com.facebook.imagepipeline.producers;

import com.facebook.imagepipeline.listener.RequestListener;
import java.util.Map;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class e0 implements pa.d, a1 {
    public final RequestListener a;

    /* renamed from: b, reason: collision with root package name */
    public final pa.b f4723b;

    /* renamed from: c, reason: collision with root package name */
    public final RequestListener f4724c;

    /* renamed from: d, reason: collision with root package name */
    public final pa.d f4725d;

    public e0(pa.c cVar, pa.b bVar) {
        this.a = cVar;
        this.f4723b = bVar;
        this.f4724c = cVar;
        this.f4725d = bVar;
    }

    @Override // com.facebook.imagepipeline.producers.a1
    public final void a(ProducerContext context) {
        Intrinsics.checkNotNullParameter(context, "context");
        RequestListener requestListener = this.a;
        if (requestListener != null) {
            requestListener.onProducerEvent(context.getId(), "NetworkFetchProducer", "intermediate_result");
        }
        pa.b bVar = this.f4723b;
        if (bVar != null) {
            bVar.a(context);
        }
    }

    @Override // com.facebook.imagepipeline.producers.a1
    public final void b(ProducerContext context, String str, boolean z5) {
        Intrinsics.checkNotNullParameter(context, "context");
        RequestListener requestListener = this.a;
        if (requestListener != null) {
            requestListener.onUltimateProducerReached(context.getId(), str, z5);
        }
        pa.b bVar = this.f4723b;
        if (bVar != null) {
            bVar.b(context, str, z5);
        }
    }

    @Override // com.facebook.imagepipeline.producers.a1
    public final void c(ProducerContext context, String str) {
        Intrinsics.checkNotNullParameter(context, "context");
        RequestListener requestListener = this.a;
        if (requestListener != null) {
            requestListener.onProducerStart(context.getId(), str);
        }
        pa.b bVar = this.f4723b;
        if (bVar != null) {
            bVar.c(context, str);
        }
    }

    @Override // pa.d
    public final void d(ProducerContext producerContext) {
        Intrinsics.checkNotNullParameter(producerContext, "producerContext");
        RequestListener requestListener = this.f4724c;
        if (requestListener != null) {
            requestListener.onRequestSuccess(producerContext.g(), producerContext.getId(), producerContext.r());
        }
        pa.d dVar = this.f4725d;
        if (dVar != null) {
            dVar.d(producerContext);
        }
    }

    @Override // com.facebook.imagepipeline.producers.a1
    public final void e(ProducerContext context, String str) {
        Intrinsics.checkNotNullParameter(context, "context");
        RequestListener requestListener = this.a;
        if (requestListener != null) {
            requestListener.onProducerFinishWithCancellation(context.getId(), str, null);
        }
        pa.b bVar = this.f4723b;
        if (bVar != null) {
            bVar.e(context, str);
        }
    }

    @Override // com.facebook.imagepipeline.producers.a1
    public final boolean f(ProducerContext context, String str) {
        Intrinsics.checkNotNullParameter(context, "context");
        RequestListener requestListener = this.a;
        Boolean valueOf = requestListener != null ? Boolean.valueOf(requestListener.requiresExtraMap(context.getId())) : null;
        if (!Intrinsics.areEqual(valueOf, Boolean.TRUE)) {
            pa.b bVar = this.f4723b;
            valueOf = bVar != null ? Boolean.valueOf(bVar.f(context, str)) : null;
        }
        if (valueOf != null) {
            return valueOf.booleanValue();
        }
        return false;
    }

    @Override // pa.d
    public final void g(ProducerContext producerContext, Throwable th2) {
        Intrinsics.checkNotNullParameter(producerContext, "producerContext");
        RequestListener requestListener = this.f4724c;
        if (requestListener != null) {
            requestListener.onRequestFailure(producerContext.g(), producerContext.getId(), th2, producerContext.r());
        }
        pa.d dVar = this.f4725d;
        if (dVar != null) {
            dVar.g(producerContext, th2);
        }
    }

    @Override // pa.d
    public final void h(ProducerContext producerContext) {
        Intrinsics.checkNotNullParameter(producerContext, "producerContext");
        RequestListener requestListener = this.f4724c;
        if (requestListener != null) {
            requestListener.onRequestCancellation(producerContext.getId());
        }
        pa.d dVar = this.f4725d;
        if (dVar != null) {
            dVar.h(producerContext);
        }
    }

    @Override // com.facebook.imagepipeline.producers.a1
    public final void i(ProducerContext context, String str, Map map) {
        Intrinsics.checkNotNullParameter(context, "context");
        RequestListener requestListener = this.a;
        if (requestListener != null) {
            requestListener.onProducerFinishWithSuccess(context.getId(), str, map);
        }
        pa.b bVar = this.f4723b;
        if (bVar != null) {
            bVar.i(context, str, map);
        }
    }

    @Override // pa.d
    public final void j(d1 producerContext) {
        Intrinsics.checkNotNullParameter(producerContext, "producerContext");
        RequestListener requestListener = this.f4724c;
        if (requestListener != null) {
            requestListener.onRequestStart(producerContext.f4716d, producerContext.f4719v, producerContext.f4717e, producerContext.r());
        }
        pa.d dVar = this.f4725d;
        if (dVar != null) {
            dVar.j(producerContext);
        }
    }

    @Override // com.facebook.imagepipeline.producers.a1
    public final void k(ProducerContext context, String str, Throwable th2, Map map) {
        Intrinsics.checkNotNullParameter(context, "context");
        RequestListener requestListener = this.a;
        if (requestListener != null) {
            requestListener.onProducerFinishWithFailure(context.getId(), str, th2, map);
        }
        pa.b bVar = this.f4723b;
        if (bVar != null) {
            bVar.k(context, str, th2, map);
        }
    }
}
