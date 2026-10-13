package com.facebook.react.runtime.internal.bolts;

/* loaded from: classes3.dex */
public final /* synthetic */ class b implements Continuation {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f5015d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Continuation f5016e;

    public /* synthetic */ b(Continuation continuation, int i5) {
        this.f5015d = i5;
        this.f5016e = continuation;
    }

    @Override // com.facebook.react.runtime.internal.bolts.Continuation
    public final Object then(Task task) {
        Task onSuccess$lambda$12;
        Task onSuccessTask$lambda$13;
        switch (this.f5015d) {
            case 0:
                onSuccess$lambda$12 = Task.onSuccess$lambda$12(this.f5016e, task);
                return onSuccess$lambda$12;
            default:
                onSuccessTask$lambda$13 = Task.onSuccessTask$lambda$13(this.f5016e, task);
                return onSuccessTask$lambda$13;
        }
    }
}
