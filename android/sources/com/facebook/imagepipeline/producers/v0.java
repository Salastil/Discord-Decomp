package com.facebook.imagepipeline.producers;

import com.facebook.imagepipeline.producers.NetworkFetcher;
import java.io.InputStream;

/* loaded from: classes3.dex */
public final class v0 implements NetworkFetcher.Callback {
    public final /* synthetic */ FetchState a;

    /* renamed from: b, reason: collision with root package name */
    public final /* synthetic */ w0 f4824b;

    public v0(w0 w0Var, FetchState fetchState) {
        this.f4824b = w0Var;
        this.a = fetchState;
    }

    @Override // com.facebook.imagepipeline.producers.NetworkFetcher.Callback
    public final void a() {
        FetchState fetchState = this.a;
        fetchState.f4691b.C().e(fetchState.f4691b, "NetworkFetchProducer");
        fetchState.a.a();
    }

    @Override // com.facebook.imagepipeline.producers.NetworkFetcher.Callback
    public final void b(InputStream inputStream, int i5) {
        qa.r rVar;
        ta.a.D();
        w0 w0Var = this.f4824b;
        e4.c cVar = w0Var.a;
        qa.n nVar = w0Var.f4827b;
        if (i5 > 0) {
            cVar.getClass();
            rVar = new qa.r((qa.p) cVar.f7939e, i5);
        } else {
            cVar.getClass();
            qa.p pVar = (qa.p) cVar.f7939e;
            rVar = new qa.r(pVar, pVar.G[0]);
        }
        byte[] bArr = (byte[]) nVar.get(16384);
        while (true) {
            try {
                int read = inputStream.read(bArr);
                FetchState fetchState = this.a;
                if (read < 0) {
                    w0Var.f4828c.onFetchCompletion(fetchState, rVar.f16715i);
                    w0Var.c(rVar, fetchState);
                    nVar.release(bArr);
                    rVar.close();
                    ta.a.D();
                    return;
                }
                if (read > 0) {
                    rVar.write(bArr, 0, read);
                    w0Var.d(rVar, fetchState);
                    fetchState.a.c(i5 > 0 ? rVar.f16715i / i5 : 1.0f - ((float) Math.exp((-r5) / 50000.0d)));
                }
            } catch (Throwable th2) {
                nVar.release(bArr);
                rVar.close();
                throw th2;
            }
        }
    }

    @Override // com.facebook.imagepipeline.producers.NetworkFetcher.Callback
    public final void onFailure(Exception exc) {
        FetchState fetchState = this.a;
        a1 C = fetchState.f4691b.C();
        ProducerContext producerContext = fetchState.f4691b;
        C.k(producerContext, "NetworkFetchProducer", exc, null);
        producerContext.C().b(producerContext, "NetworkFetchProducer", false);
        producerContext.x("network");
        fetchState.a.onFailure(exc);
    }
}
