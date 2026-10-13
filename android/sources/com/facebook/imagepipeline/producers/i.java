package com.facebook.imagepipeline.producers;

import com.facebook.cache.common.CacheKey;
import com.facebook.common.references.CloseableReference;

/* loaded from: classes3.dex */
public final class i extends r {

    /* renamed from: c, reason: collision with root package name */
    public final /* synthetic */ int f4747c = 1;

    /* renamed from: d, reason: collision with root package name */
    public final CacheKey f4748d;

    /* renamed from: e, reason: collision with root package name */
    public final boolean f4749e;

    /* renamed from: f, reason: collision with root package name */
    public final Object f4750f;

    public i(Consumer consumer, CacheKey cacheKey, ha.i iVar, boolean z5) {
        super(consumer);
        this.f4748d = cacheKey;
        this.f4750f = iVar;
        this.f4749e = z5;
    }

    @Override // com.facebook.imagepipeline.producers.c
    public final void h(int i5, Object obj) {
        CloseableReference q5;
        CloseableReference closeableReference;
        switch (this.f4747c) {
            case 0:
                CloseableReference closeableReference2 = (CloseableReference) obj;
                ha.i iVar = ((j) this.f4750f).a;
                try {
                    ta.a.D();
                    boolean d6 = c.d(i5);
                    Consumer consumer = this.f4801b;
                    if (closeableReference2 == null) {
                        if (d6) {
                            consumer.b(i5, null);
                        }
                    } else if (((oa.c) closeableReference2.q()).h0() || c.k(i5, 8)) {
                        consumer.b(i5, closeableReference2);
                    } else {
                        CacheKey cacheKey = this.f4748d;
                        if (!d6 && (closeableReference = iVar.get(cacheKey)) != null) {
                            try {
                                oa.k G = ((oa.c) closeableReference2.q()).G();
                                oa.k G2 = ((oa.c) closeableReference.q()).G();
                                if (((oa.j) G2).f15816c || ((oa.j) G2).a >= ((oa.j) G).a) {
                                    consumer.b(i5, closeableReference);
                                    closeableReference.close();
                                }
                            } finally {
                                closeableReference.close();
                            }
                        }
                        q5 = this.f4749e ? iVar.q(cacheKey, closeableReference2) : null;
                        if (d6) {
                            try {
                                consumer.c(1.0f);
                            } catch (Throwable th2) {
                                throw th2;
                            }
                        }
                        if (q5 != null) {
                            closeableReference2 = q5;
                        }
                        consumer.b(i5, closeableReference2);
                        CloseableReference.l(q5);
                    }
                    return;
                } finally {
                    ta.a.D();
                }
            default:
                CloseableReference closeableReference3 = (CloseableReference) obj;
                Consumer consumer2 = this.f4801b;
                if (closeableReference3 == null) {
                    if (c.d(i5)) {
                        consumer2.b(i5, null);
                        return;
                    }
                    return;
                } else {
                    if (c.e(i5)) {
                        return;
                    }
                    q5 = this.f4749e ? ((ha.i) this.f4750f).q(this.f4748d, closeableReference3) : null;
                    try {
                        consumer2.c(1.0f);
                        if (q5 != null) {
                            closeableReference3 = q5;
                        }
                        consumer2.b(i5, closeableReference3);
                        return;
                    } finally {
                        CloseableReference.l(q5);
                    }
                }
        }
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public i(j jVar, Consumer consumer, CacheKey cacheKey, boolean z5) {
        super(consumer);
        this.f4750f = jVar;
        this.f4748d = cacheKey;
        this.f4749e = z5;
    }
}
