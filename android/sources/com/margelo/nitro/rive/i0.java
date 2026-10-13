package com.margelo.nitro.rive;

import app.rive.runtime.kotlin.fonts.FontFallbackStrategy;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function1;

/* loaded from: classes3.dex */
public final class i0 extends lo.h implements Function1 {
    @Override // lo.a
    public final Continuation create(Continuation continuation) {
        return new i0(1, continuation);
    }

    @Override // kotlin.jvm.functions.Function1
    public final Object invoke(Object obj) {
        return ((i0) create((Continuation) obj)).invokeSuspend(Unit.a);
    }

    @Override // lo.a
    public final Object invokeSuspend(Object obj) {
        ko.a aVar = ko.a.f13464d;
        ki.b.R(obj);
        FontFallbackStrategy.INSTANCE.setStylePicker(new h0());
        g0.a(HybridRiveFontConfig.Companion);
        return Unit.a;
    }
}
