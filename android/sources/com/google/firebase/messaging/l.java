package com.google.firebase.messaging;

/* loaded from: classes3.dex */
public final /* synthetic */ class l implements jg.d {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f6244d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ FirebaseMessaging f6245e;

    public /* synthetic */ l(FirebaseMessaging firebaseMessaging, int i5) {
        this.f6244d = i5;
        this.f6245e = firebaseMessaging;
    }

    @Override // jg.d
    public final void onSuccess(Object obj) {
        boolean z5;
        switch (this.f6244d) {
            case 0:
                y yVar = (y) obj;
                if (!this.f6245e.f6194e.m() || yVar.f6288h.a() == null) {
                    return;
                }
                synchronized (yVar) {
                    z5 = yVar.f6287g;
                }
                if (z5) {
                    return;
                }
                yVar.f(0L);
                return;
            default:
                FirebaseMessaging firebaseMessaging = this.f6245e;
                xe.a aVar = (xe.a) obj;
                ha.l lVar = FirebaseMessaging.k;
                firebaseMessaging.getClass();
                if (aVar != null) {
                    com.facebook.imagepipeline.nativecode.b.s(aVar.f20398d);
                    firebaseMessaging.e();
                    return;
                }
                return;
        }
    }
}
