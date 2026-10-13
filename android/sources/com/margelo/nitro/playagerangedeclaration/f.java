package com.margelo.nitro.playagerangedeclaration;

import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function1;

/* loaded from: classes3.dex */
public final class f extends lo.h implements Function1 {
    @Override // lo.a
    public final Continuation create(Continuation continuation) {
        return new f(1, continuation);
    }

    @Override // kotlin.jvm.functions.Function1
    public final Object invoke(Object obj) {
        return ((f) create((Continuation) obj)).invokeSuspend(Unit.a);
    }

    @Override // lo.a
    public final Object invokeSuspend(Object obj) {
        ko.a aVar = ko.a.f13464d;
        ki.b.R(obj);
        return new DeclaredAgeRangeResult(false, null, null, null, null);
    }
}
