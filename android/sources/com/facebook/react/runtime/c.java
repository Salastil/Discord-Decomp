package com.facebook.react.runtime;

import com.facebook.react.runtime.internal.bolts.Task;
import java.util.concurrent.Callable;

/* loaded from: classes3.dex */
public final /* synthetic */ class c implements Callable {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f4990d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ ReactHostImpl f4991e;

    public /* synthetic */ c(ReactHostImpl reactHostImpl, int i5) {
        this.f4990d = i5;
        this.f4991e = reactHostImpl;
    }

    @Override // java.util.concurrent.Callable
    public final Object call() {
        Task waitThenCallGetOrCreateReactInstanceTask;
        Task orCreateStartTask;
        switch (this.f4990d) {
            case 0:
                waitThenCallGetOrCreateReactInstanceTask = this.f4991e.waitThenCallGetOrCreateReactInstanceTask();
                return waitThenCallGetOrCreateReactInstanceTask;
            default:
                orCreateStartTask = this.f4991e.getOrCreateStartTask();
                return orCreateStartTask;
        }
    }
}
