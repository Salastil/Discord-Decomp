package com.facebook.react.runtime;

import com.facebook.react.runtime.internal.bolts.Continuation;
import com.facebook.react.runtime.internal.bolts.Task;
import kotlin.jvm.functions.Function2;

/* loaded from: classes3.dex */
public final /* synthetic */ class f implements Continuation {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f4999d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Function2 f5000e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ ReactHostImpl f5001i;

    public /* synthetic */ f(Function2 function2, ReactHostImpl reactHostImpl, int i5) {
        this.f4999d = i5;
        this.f5000e = function2;
        this.f5001i = reactHostImpl;
    }

    @Override // com.facebook.react.runtime.internal.bolts.Continuation
    public final Object then(Task task) {
        Task orCreateReloadTask$lambda$53;
        Task orCreateReloadTask$lambda$55;
        Task orCreateReloadTask$lambda$56;
        Task orCreateReloadTask$lambda$57;
        Task orCreateDestroyTask$lambda$63;
        Task orCreateDestroyTask$lambda$65;
        switch (this.f4999d) {
            case 0:
                orCreateReloadTask$lambda$53 = ReactHostImpl.getOrCreateReloadTask$lambda$53(this.f5000e, this.f5001i, "getOrCreateReloadTask()", task);
                return orCreateReloadTask$lambda$53;
            case 1:
                orCreateReloadTask$lambda$55 = ReactHostImpl.getOrCreateReloadTask$lambda$55(this.f5000e, this.f5001i, "getOrCreateReloadTask()", task);
                return orCreateReloadTask$lambda$55;
            case 2:
                orCreateReloadTask$lambda$56 = ReactHostImpl.getOrCreateReloadTask$lambda$56(this.f5000e, this.f5001i, "getOrCreateReloadTask()", task);
                return orCreateReloadTask$lambda$56;
            case 3:
                orCreateReloadTask$lambda$57 = ReactHostImpl.getOrCreateReloadTask$lambda$57(this.f5000e, this.f5001i, "getOrCreateReloadTask()", task);
                return orCreateReloadTask$lambda$57;
            case 4:
                orCreateDestroyTask$lambda$63 = ReactHostImpl.getOrCreateDestroyTask$lambda$63(this.f5000e, this.f5001i, "getOrCreateDestroyTask()", task);
                return orCreateDestroyTask$lambda$63;
            default:
                orCreateDestroyTask$lambda$65 = ReactHostImpl.getOrCreateDestroyTask$lambda$65(this.f5000e, this.f5001i, "getOrCreateDestroyTask()", task);
                return orCreateDestroyTask$lambda$65;
        }
    }
}
