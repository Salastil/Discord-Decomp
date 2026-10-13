package com.facebook.react.runtime.internal.bolts;

import com.facebook.react.runtime.internal.bolts.Task;
import kotlin.Unit;

/* loaded from: classes3.dex */
public final /* synthetic */ class c implements Continuation {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f5017d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ TaskCompletionSource f5018e;

    public /* synthetic */ c(TaskCompletionSource taskCompletionSource, int i5) {
        this.f5017d = i5;
        this.f5018e = taskCompletionSource;
    }

    @Override // com.facebook.react.runtime.internal.bolts.Continuation
    public final Object then(Task task) {
        Unit completeAfterTask$lambda$5$lambda$4;
        Unit call$lambda$2$lambda$0;
        switch (this.f5017d) {
            case 0:
                completeAfterTask$lambda$5$lambda$4 = Task.Companion.completeAfterTask$lambda$5$lambda$4(this.f5018e, task);
                return completeAfterTask$lambda$5$lambda$4;
            default:
                call$lambda$2$lambda$0 = Task.Companion.call$lambda$2$lambda$0(this.f5018e, task);
                return call$lambda$2$lambda$0;
        }
    }
}
