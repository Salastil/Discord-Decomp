package com.margelo.nitro.rive;

import kotlin.coroutines.Continuation;

/* loaded from: classes3.dex */
public final class e1 extends lo.c {

    /* renamed from: d, reason: collision with root package name */
    public /* synthetic */ Object f6557d;

    /* renamed from: e, reason: collision with root package name */
    public int f6558e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ f1 f6559i;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public e1(f1 f1Var, Continuation continuation) {
        super(continuation);
        this.f6559i = f1Var;
    }

    @Override // lo.a
    public final Object invokeSuspend(Object obj) {
        this.f6557d = obj;
        this.f6558e |= Integer.MIN_VALUE;
        return this.f6559i.emit(null, this);
    }
}
