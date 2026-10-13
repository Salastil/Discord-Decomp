package com.facebook.imagepipeline.producers;

import com.facebook.common.references.CloseableReference;
import com.facebook.imagepipeline.bitmaps.PlatformBitmapFactory;
import com.facebook.imagepipeline.image.ImageInfo;
import com.facebook.imagepipeline.request.Postprocessor;
import java.util.Map;
import java.util.concurrent.Executor;

/* loaded from: classes3.dex */
public final class y0 extends r {

    /* renamed from: c, reason: collision with root package name */
    public final a1 f4837c;

    /* renamed from: d, reason: collision with root package name */
    public final ProducerContext f4838d;

    /* renamed from: e, reason: collision with root package name */
    public final Postprocessor f4839e;

    /* renamed from: f, reason: collision with root package name */
    public boolean f4840f;

    /* renamed from: g, reason: collision with root package name */
    public CloseableReference f4841g;

    /* renamed from: h, reason: collision with root package name */
    public int f4842h;

    /* renamed from: i, reason: collision with root package name */
    public boolean f4843i;
    public boolean j;
    public final /* synthetic */ x0 k;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public y0(x0 x0Var, Consumer consumer, a1 a1Var, Postprocessor postprocessor, ProducerContext producerContext) {
        super(consumer);
        this.k = x0Var;
        this.f4841g = null;
        this.f4842h = 0;
        this.f4843i = false;
        this.j = false;
        this.f4837c = a1Var;
        this.f4839e = postprocessor;
        this.f4838d = producerContext;
        producerContext.i(new o(6, this));
    }

    public static void l(y0 y0Var, CloseableReference closeableReference, int i5) {
        Postprocessor postprocessor = y0Var.f4839e;
        ProducerContext producerContext = y0Var.f4838d;
        a1 a1Var = y0Var.f4837c;
        if (!CloseableReference.t(closeableReference)) {
            throw new IllegalArgumentException();
        }
        if (!(((oa.c) closeableReference.q()) instanceof oa.d)) {
            y0Var.n(i5, closeableReference);
            return;
        }
        a1Var.c(producerContext, "PostprocessorProducer");
        s8.b bVar = null;
        Map a = null;
        try {
            try {
                s8.b o6 = y0Var.o((oa.c) closeableReference.q());
                try {
                    if (a1Var.f(producerContext, "PostprocessorProducer")) {
                        a = o8.e.a("Postprocessor", postprocessor.getName());
                    }
                    a1Var.i(producerContext, "PostprocessorProducer", a);
                    y0Var.n(i5, o6);
                    CloseableReference.l(o6);
                } catch (Throwable th2) {
                    th = th2;
                    bVar = o6;
                    CloseableReference.l(bVar);
                    throw th;
                }
            } catch (Exception e9) {
                a1Var.k(producerContext, "PostprocessorProducer", e9, !a1Var.f(producerContext, "PostprocessorProducer") ? null : o8.e.a("Postprocessor", postprocessor.getName()));
                if (y0Var.m()) {
                    y0Var.f4801b.onFailure(e9);
                }
            }
        } catch (Throwable th3) {
            th = th3;
        }
    }

    @Override // com.facebook.imagepipeline.producers.r, com.facebook.imagepipeline.producers.c
    public final void f() {
        if (m()) {
            this.f4801b.a();
        }
    }

    @Override // com.facebook.imagepipeline.producers.r, com.facebook.imagepipeline.producers.c
    public final void g(Throwable th2) {
        if (m()) {
            this.f4801b.onFailure(th2);
        }
    }

    @Override // com.facebook.imagepipeline.producers.c
    public final void h(int i5, Object obj) {
        CloseableReference closeableReference = (CloseableReference) obj;
        if (!CloseableReference.t(closeableReference)) {
            if (c.d(i5)) {
                n(i5, null);
                return;
            }
            return;
        }
        synchronized (this) {
            try {
                if (this.f4840f) {
                    return;
                }
                CloseableReference closeableReference2 = this.f4841g;
                this.f4841g = CloseableReference.g(closeableReference);
                this.f4842h = i5;
                this.f4843i = true;
                boolean p3 = p();
                CloseableReference.l(closeableReference2);
                if (p3) {
                    ((Executor) this.k.f4832d).execute(new a3.h(11, this));
                }
            } catch (Throwable th2) {
                throw th2;
            }
        }
    }

    public final boolean m() {
        synchronized (this) {
            try {
                if (this.f4840f) {
                    return false;
                }
                CloseableReference closeableReference = this.f4841g;
                this.f4841g = null;
                this.f4840f = true;
                CloseableReference.l(closeableReference);
                return true;
            } catch (Throwable th2) {
                throw th2;
            }
        }
    }

    /* JADX WARN: Code restructure failed: missing block: B:7:0x000a, code lost:
    
        if (r1 != false) goto L12;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void n(int i5, CloseableReference closeableReference) {
        boolean d6 = c.d(i5);
        if (!d6) {
            synchronized (this) {
                boolean z5 = this.f4840f;
            }
        }
        if (!d6 || !m()) {
            return;
        }
        this.f4801b.b(i5, closeableReference);
    }

    public final s8.b o(oa.c cVar) {
        ImageInfo imageInfo = (oa.d) cVar;
        oa.g gVar = (oa.g) imageInfo;
        CloseableReference process = this.f4839e.process(gVar.f15806w, (PlatformBitmapFactory) this.k.f4831c);
        int i5 = gVar.f15808y;
        int i6 = gVar.E;
        try {
            oa.k G = cVar.G();
            int i10 = oa.g.F;
            oa.g gVar2 = new oa.g(process, G, i5, i6);
            gVar2.q(((oa.a) imageInfo).f15801d);
            s8.b A = CloseableReference.A(gVar2);
            process.close();
            return A;
        } catch (Throwable th2) {
            CloseableReference.l(process);
            throw th2;
        }
    }

    public final synchronized boolean p() {
        if (this.f4840f || !this.f4843i || this.j || !CloseableReference.t(this.f4841g)) {
            return false;
        }
        this.j = true;
        return true;
    }
}
