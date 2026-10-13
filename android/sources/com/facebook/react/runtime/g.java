package com.facebook.react.runtime;

import com.facebook.react.runtime.ReactHostImpl;
import com.facebook.react.runtime.internal.bolts.Continuation;
import com.facebook.react.runtime.internal.bolts.Task;

/* loaded from: classes3.dex */
public final /* synthetic */ class g implements Continuation {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f5002d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ ReactHostImpl f5003e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ String f5004i;

    public /* synthetic */ g(ReactHostImpl reactHostImpl, String str, int i5) {
        this.f5002d = i5;
        this.f5003e = reactHostImpl;
        this.f5004i = str;
    }

    @Override // com.facebook.react.runtime.internal.bolts.Continuation
    public final Object then(Task task) {
        Task orCreateReloadTask$lambda$58;
        Task reload$lambda$8$lambda$6$lambda$5;
        Void orCreateDestroyTask$lambda$66;
        ReactHostImpl.CreationResult orCreateReactInstanceTask$lambda$45$lambda$41;
        switch (this.f5002d) {
            case 0:
                orCreateReloadTask$lambda$58 = ReactHostImpl.getOrCreateReloadTask$lambda$58(this.f5003e, "getOrCreateReloadTask()", this.f5004i, task);
                return orCreateReloadTask$lambda$58;
            case 1:
                reload$lambda$8$lambda$6$lambda$5 = ReactHostImpl.reload$lambda$8$lambda$6$lambda$5(this.f5003e, this.f5004i, task);
                return reload$lambda$8$lambda$6$lambda$5;
            case 2:
                orCreateDestroyTask$lambda$66 = ReactHostImpl.getOrCreateDestroyTask$lambda$66(this.f5003e, "getOrCreateDestroyTask()", this.f5004i, task);
                return orCreateDestroyTask$lambda$66;
            default:
                orCreateReactInstanceTask$lambda$45$lambda$41 = ReactHostImpl.getOrCreateReactInstanceTask$lambda$45$lambda$41(this.f5003e, this.f5004i, task);
                return orCreateReactInstanceTask$lambda$45$lambda$41;
        }
    }
}
