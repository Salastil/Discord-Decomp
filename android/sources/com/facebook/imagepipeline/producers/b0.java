package com.facebook.imagepipeline.producers;

import java.util.concurrent.Future;

/* loaded from: classes3.dex */
public final class b0 extends f {
    public final /* synthetic */ Future a;

    /* renamed from: b, reason: collision with root package name */
    public final /* synthetic */ v0 f4700b;

    public b0(Future future, v0 v0Var) {
        this.a = future;
        this.f4700b = v0Var;
    }

    @Override // com.facebook.imagepipeline.producers.f
    public final void a() {
        if (this.a.cancel(false)) {
            this.f4700b.a();
        }
    }
}
