package com.facebook.react.runtime.internal.bolts;

import java.util.concurrent.Executor;
import kotlin.Unit;

/* loaded from: classes3.dex */
public final /* synthetic */ class a implements Continuation {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f5011d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ TaskCompletionSource f5012e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ Continuation f5013i;

    /* renamed from: v, reason: collision with root package name */
    public final /* synthetic */ Executor f5014v;

    public /* synthetic */ a(TaskCompletionSource taskCompletionSource, Continuation continuation, Executor executor, int i5) {
        this.f5011d = i5;
        this.f5012e = taskCompletionSource;
        this.f5013i = continuation;
        this.f5014v = executor;
    }

    @Override // com.facebook.react.runtime.internal.bolts.Continuation
    public final Object then(Task task) {
        Unit continueWithTask$lambda$11$lambda$10;
        Unit continueWith$lambda$9$lambda$8;
        switch (this.f5011d) {
            case 0:
                continueWithTask$lambda$11$lambda$10 = Task.continueWithTask$lambda$11$lambda$10(this.f5012e, this.f5013i, this.f5014v, task);
                return continueWithTask$lambda$11$lambda$10;
            default:
                continueWith$lambda$9$lambda$8 = Task.continueWith$lambda$9$lambda$8(this.f5012e, this.f5013i, this.f5014v, task);
                return continueWith$lambda$9$lambda$8;
        }
    }
}
