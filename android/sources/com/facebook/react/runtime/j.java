package com.facebook.react.runtime;

import com.facebook.react.runtime.internal.bolts.Continuation;
import com.facebook.react.runtime.internal.bolts.Task;
import kotlin.jvm.functions.Function1;

/* loaded from: classes3.dex */
public final /* synthetic */ class j implements Continuation {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f5023d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Object f5024e;

    public /* synthetic */ j(int i5, Object obj) {
        this.f5023d = i5;
        this.f5024e = obj;
    }

    @Override // com.facebook.react.runtime.internal.bolts.Continuation
    public final Object then(Task task) {
        Void destroy$lambda$10;
        Task orCreateStartTask$lambda$30$lambda$29;
        switch (this.f5023d) {
            case 0:
                destroy$lambda$10 = ReactHostImpl.destroy$lambda$10((Function1) this.f5024e, task);
                return destroy$lambda$10;
            default:
                orCreateStartTask$lambda$30$lambda$29 = ReactHostImpl.getOrCreateStartTask$lambda$30$lambda$29((Exception) this.f5024e, task);
                return orCreateStartTask$lambda$30$lambda$29;
        }
    }
}
