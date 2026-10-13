package com.facebook.react.runtime;

import com.facebook.react.runtime.internal.bolts.Continuation;
import com.facebook.react.runtime.internal.bolts.Task;
import kotlin.jvm.functions.Function1;

/* loaded from: classes3.dex */
public final /* synthetic */ class m implements Continuation {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f5030d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ ReactHostImpl f5031e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ String f5032i;

    /* renamed from: v, reason: collision with root package name */
    public final /* synthetic */ Object f5033v;

    public /* synthetic */ m(ReactHostImpl reactHostImpl, String str, Object obj, int i5) {
        this.f5030d = i5;
        this.f5031e = reactHostImpl;
        this.f5032i = str;
        this.f5033v = obj;
    }

    @Override // com.facebook.react.runtime.internal.bolts.Continuation
    public final Object then(Task task) {
        Boolean callWithExistingReactInstance$lambda$32;
        Void callAfterGetOrCreateReactInstance$lambda$33;
        Task destroy$lambda$12$lambda$11;
        switch (this.f5030d) {
            case 0:
                callWithExistingReactInstance$lambda$32 = ReactHostImpl.callWithExistingReactInstance$lambda$32(this.f5031e, this.f5032i, (Function1) this.f5033v, task);
                return callWithExistingReactInstance$lambda$32;
            case 1:
                callAfterGetOrCreateReactInstance$lambda$33 = ReactHostImpl.callAfterGetOrCreateReactInstance$lambda$33(this.f5031e, this.f5032i, (Function1) this.f5033v, task);
                return callAfterGetOrCreateReactInstance$lambda$33;
            default:
                destroy$lambda$12$lambda$11 = ReactHostImpl.destroy$lambda$12$lambda$11(this.f5031e, this.f5032i, (Exception) this.f5033v, task);
                return destroy$lambda$12$lambda$11;
        }
    }
}
