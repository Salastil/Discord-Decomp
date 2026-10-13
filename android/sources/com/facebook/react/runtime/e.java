package com.facebook.react.runtime;

import com.facebook.react.runtime.internal.bolts.Continuation;
import com.facebook.react.runtime.internal.bolts.Task;
import kotlin.jvm.functions.Function2;

/* loaded from: classes3.dex */
public final /* synthetic */ class e implements Continuation {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f4995d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ ReactHostImpl f4996e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ Function2 f4997i;

    /* renamed from: v, reason: collision with root package name */
    public final /* synthetic */ String f4998v;

    public /* synthetic */ e(ReactHostImpl reactHostImpl, Function2 function2, String str, int i5) {
        this.f4995d = i5;
        this.f4996e = reactHostImpl;
        this.f4997i = function2;
        this.f4998v = str;
    }

    @Override // com.facebook.react.runtime.internal.bolts.Continuation
    public final Object then(Task task) {
        Task orCreateReloadTask$lambda$52;
        Task orCreateDestroyTask$lambda$61;
        Task orCreateDestroyTask$lambda$64;
        switch (this.f4995d) {
            case 0:
                orCreateReloadTask$lambda$52 = ReactHostImpl.getOrCreateReloadTask$lambda$52(this.f4996e, "getOrCreateReloadTask()", this.f4997i, this.f4998v, task);
                return orCreateReloadTask$lambda$52;
            case 1:
                orCreateDestroyTask$lambda$61 = ReactHostImpl.getOrCreateDestroyTask$lambda$61(this.f4996e, "getOrCreateDestroyTask()", this.f4997i, this.f4998v, task);
                return orCreateDestroyTask$lambda$61;
            default:
                orCreateDestroyTask$lambda$64 = ReactHostImpl.getOrCreateDestroyTask$lambda$64(this.f4997i, this.f4996e, "getOrCreateDestroyTask()", this.f4998v, task);
                return orCreateDestroyTask$lambda$64;
        }
    }

    public /* synthetic */ e(Function2 function2, ReactHostImpl reactHostImpl, String str) {
        this.f4995d = 2;
        this.f4997i = function2;
        this.f4996e = reactHostImpl;
        this.f4998v = str;
    }
}
