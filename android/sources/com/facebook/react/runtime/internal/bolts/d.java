package com.facebook.react.runtime.internal.bolts;

import com.facebook.react.runtime.internal.bolts.Task;

/* loaded from: classes3.dex */
public final /* synthetic */ class d implements Runnable {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f5019d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Continuation f5020e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ Task f5021i;

    /* renamed from: v, reason: collision with root package name */
    public final /* synthetic */ TaskCompletionSource f5022v;

    public /* synthetic */ d(Continuation continuation, Task task, TaskCompletionSource taskCompletionSource, int i5) {
        this.f5019d = i5;
        this.f5020e = continuation;
        this.f5021i = task;
        this.f5022v = taskCompletionSource;
    }

    @Override // java.lang.Runnable
    public final void run() {
        switch (this.f5019d) {
            case 0:
                Task.Companion.completeImmediately$lambda$3(this.f5020e, this.f5021i, this.f5022v);
                break;
            default:
                Task.Companion.completeAfterTask$lambda$5(this.f5020e, this.f5021i, this.f5022v);
                break;
        }
    }
}
