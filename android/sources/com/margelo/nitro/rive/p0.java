package com.margelo.nitro.rive;

import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function1;

/* loaded from: classes3.dex */
public final class p0 extends lo.h implements Function1 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f6584d;

    /* renamed from: e, reason: collision with root package name */
    public int f6585e;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public /* synthetic */ p0(int i5, Continuation continuation, int i6) {
        super(i5, continuation);
        this.f6584d = i6;
    }

    @Override // lo.a
    public final Continuation create(Continuation continuation) {
        switch (this.f6584d) {
            case 0:
                return new p0(1, continuation, 0);
            default:
                return new p0(1, continuation, 1);
        }
    }

    @Override // kotlin.jvm.functions.Function1
    public final Object invoke(Object obj) {
        Continuation continuation = (Continuation) obj;
        switch (this.f6584d) {
        }
        return ((p0) create(continuation)).invokeSuspend(Unit.a);
    }

    @Override // lo.a
    public final Object invokeSuspend(Object obj) {
        Continuation continuation = null;
        switch (this.f6584d) {
            case 0:
                ko.a aVar = ko.a.f13464d;
                int i5 = this.f6585e;
                if (i5 == 0) {
                    ki.b.R(obj);
                    ur.e eVar = nr.g0.a;
                    or.d dVar = sr.q.a;
                    o0 o0Var = new o0(2, continuation, 0);
                    this.f6585e = 1;
                    if (nr.x.A(dVar, o0Var, this) == aVar) {
                        return aVar;
                    }
                } else {
                    if (i5 != 1) {
                        throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                    }
                    ki.b.R(obj);
                }
                return Unit.a;
            default:
                ko.a aVar2 = ko.a.f13464d;
                int i6 = this.f6585e;
                if (i6 == 0) {
                    ki.b.R(obj);
                    this.f6585e = 1;
                    throw null;
                }
                if (i6 != 1) {
                    throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                }
                ki.b.R(obj);
                return Unit.a;
        }
    }
}
