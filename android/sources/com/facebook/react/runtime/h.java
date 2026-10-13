package com.facebook.react.runtime;

import com.facebook.react.bridge.queue.QueueThreadExceptionHandler;
import com.facebook.react.runtime.BridgelessAtomicRef;
import com.facebook.react.runtime.internal.bolts.Task;

/* loaded from: classes3.dex */
public final /* synthetic */ class h implements QueueThreadExceptionHandler, BridgelessAtomicRef.Provider {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ ReactHostImpl f5005d;

    public /* synthetic */ h(ReactHostImpl reactHostImpl) {
        this.f5005d = reactHostImpl;
    }

    @Override // com.facebook.react.runtime.BridgelessAtomicRef.Provider
    public Object get() {
        Task orCreateReactInstanceTask$lambda$45;
        orCreateReactInstanceTask$lambda$45 = ReactHostImpl.getOrCreateReactInstanceTask$lambda$45(this.f5005d, "getOrCreateReactInstanceTask()");
        return orCreateReactInstanceTask$lambda$45;
    }

    @Override // com.facebook.react.bridge.queue.QueueThreadExceptionHandler
    public void handleException(Exception exc) {
        ReactHostImpl.getOrCreateReactInstanceTask$lambda$45$lambda$41$lambda$39(this.f5005d, exc);
    }
}
