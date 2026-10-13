package com.facebook.react.runtime;

import com.facebook.react.runtime.internal.bolts.Continuation;
import com.facebook.react.runtime.internal.bolts.Task;

/* loaded from: classes3.dex */
public final /* synthetic */ class b implements Continuation {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f4988d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ ReactHostImpl f4989e;

    public /* synthetic */ b(ReactHostImpl reactHostImpl, int i5) {
        this.f4988d = i5;
        this.f4989e = reactHostImpl;
    }

    @Override // com.facebook.react.runtime.internal.bolts.Continuation
    public final Object then(Task task) {
        Task _get_jsBundleLoader_$lambda$46;
        Task reload$lambda$8$lambda$7;
        Task orCreateStartTask$lambda$30;
        switch (this.f4988d) {
            case 0:
                _get_jsBundleLoader_$lambda$46 = ReactHostImpl._get_jsBundleLoader_$lambda$46(this.f4989e, task);
                return _get_jsBundleLoader_$lambda$46;
            case 1:
                reload$lambda$8$lambda$7 = ReactHostImpl.reload$lambda$8$lambda$7(this.f4989e, task);
                return reload$lambda$8$lambda$7;
            default:
                orCreateStartTask$lambda$30 = ReactHostImpl.getOrCreateStartTask$lambda$30(this.f4989e, task);
                return orCreateStartTask$lambda$30;
        }
    }
}
