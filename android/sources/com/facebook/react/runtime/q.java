package com.facebook.react.runtime;

import com.facebook.react.runtime.internal.bolts.Continuation;
import com.facebook.react.runtime.internal.bolts.Task;

/* loaded from: classes3.dex */
public final /* synthetic */ class q implements Continuation {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f5042d;

    public /* synthetic */ q(int i5) {
        this.f5042d = i5;
    }

    @Override // com.facebook.react.runtime.internal.bolts.Continuation
    public final Object then(Task task) {
        ReactInstance orCreateReactInstanceTask$lambda$45$lambda$44;
        Task makeVoid$lambda$7;
        switch (this.f5042d) {
            case 0:
                orCreateReactInstanceTask$lambda$45$lambda$44 = ReactHostImpl.getOrCreateReactInstanceTask$lambda$45$lambda$44(task);
                return orCreateReactInstanceTask$lambda$45$lambda$44;
            default:
                makeVoid$lambda$7 = Task.makeVoid$lambda$7(task);
                return makeVoid$lambda$7;
        }
    }
}
