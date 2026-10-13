package com.google.firebase.messaging;

import android.content.Context;
import java.util.concurrent.Executor;

/* loaded from: classes3.dex */
public final /* synthetic */ class n implements ni.e {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f6247d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ ni.q f6248e;

    public /* synthetic */ n(ni.q qVar, int i5) {
        this.f6247d = i5;
        this.f6248e = qVar;
    }

    @Override // ni.e
    public final Object g(am.f fVar) {
        FirebaseMessaging lambda$getComponents$0;
        switch (this.f6247d) {
            case 0:
                lambda$getComponents$0 = FirebaseMessagingRegistrar.lambda$getComponents$0(this.f6248e, fVar);
                return lambda$getComponents$0;
            default:
                return new wi.c((Context) fVar.b(Context.class), ((ki.g) fVar.b(ki.g.class)).c(), fVar.h(ni.q.a(wi.d.class)), fVar.e(gj.b.class), (Executor) fVar.c(this.f6248e));
        }
    }
}
