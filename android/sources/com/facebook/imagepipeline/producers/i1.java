package com.facebook.imagepipeline.producers;

import android.util.Pair;

/* loaded from: classes3.dex */
public final class i1 extends r {

    /* renamed from: c, reason: collision with root package name */
    public final /* synthetic */ j1 f4753c;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public i1(j1 j1Var, Consumer consumer) {
        super(consumer);
        this.f4753c = j1Var;
    }

    @Override // com.facebook.imagepipeline.producers.r, com.facebook.imagepipeline.producers.c
    public final void f() {
        this.f4801b.a();
        l();
    }

    @Override // com.facebook.imagepipeline.producers.r, com.facebook.imagepipeline.producers.c
    public final void g(Throwable th2) {
        this.f4801b.onFailure(th2);
        l();
    }

    @Override // com.facebook.imagepipeline.producers.c
    public final void h(int i5, Object obj) {
        this.f4801b.b(i5, obj);
        if (c.d(i5)) {
            l();
        }
    }

    public final void l() {
        Pair pair;
        synchronized (this.f4753c) {
            try {
                pair = (Pair) this.f4753c.f4759c.poll();
                if (pair == null) {
                    j1 j1Var = this.f4753c;
                    j1Var.f4758b--;
                }
            } catch (Throwable th2) {
                throw th2;
            }
        }
        if (pair != null) {
            this.f4753c.f4760d.execute(new h1(this, pair));
        }
    }
}
