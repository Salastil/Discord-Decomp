package com.discord.browser_manager;

import com.facebook.react.bridge.ReactApplicationContext;
import com.facebook.react.runtime.ReactHostImpl;
import com.facebook.react.runtime.ReactInstance;
import com.facebook.react.runtime.internal.bolts.Task;
import ds.o;
import java.io.Serializable;
import kotlin.Unit;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.Ref;
import kotlinx.coroutines.Job;
import nr.r0;
import nr.x;

/* loaded from: classes.dex */
public final /* synthetic */ class b implements Function2 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f3792d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Serializable f3793e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ Object f3794i;

    /* renamed from: v, reason: collision with root package name */
    public final /* synthetic */ Object f3795v;

    /* renamed from: w, reason: collision with root package name */
    public final /* synthetic */ Object f3796w;

    public /* synthetic */ b(Object obj, Serializable serializable, Object obj2, Object obj3, int i5) {
        this.f3792d = i5;
        this.f3794i = obj;
        this.f3793e = serializable;
        this.f3795v = obj2;
        this.f3796w = obj3;
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r8v6, types: [T, nr.l1] */
    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(Object obj, Object obj2) {
        Unit openPlayStoreInline$lambda$4;
        ReactInstance createReactInstanceUnwrapper$lambda$50;
        switch (this.f3792d) {
            case 0:
                openPlayStoreInline$lambda$4 = BrowserManager.openPlayStoreInline$lambda$4((ReactApplicationContext) this.f3794i, (String) this.f3793e, (Function1) this.f3795v, (Function1) this.f3796w, (Unit) obj, (Throwable) obj2);
                return openPlayStoreInline$lambda$4;
            case 1:
                createReactInstanceUnwrapper$lambda$50 = ReactHostImpl.createReactInstanceUnwrapper$lambda$50((ReactHostImpl) this.f3794i, (String) this.f3793e, (String) this.f3795v, (String) this.f3796w, (Task) obj, (String) obj2);
                return createReactInstanceUnwrapper$lambda$50;
            default:
                Ref.ObjectRef objectRef = (Ref.ObjectRef) this.f3794i;
                Ref.ObjectRef objectRef2 = (Ref.ObjectRef) this.f3793e;
                Ref.ObjectRef objectRef3 = (Ref.ObjectRef) this.f3795v;
                o oVar = (o) this.f3796w;
                objectRef.element = obj;
                objectRef2.element = obj2;
                Job job = (Job) objectRef3.element;
                if (job == null || job.isCompleted()) {
                    objectRef3.element = x.t(r0.f15654d, null, new qb.c(oVar, objectRef, objectRef2, null), 3);
                }
                return Unit.a;
        }
    }
}
