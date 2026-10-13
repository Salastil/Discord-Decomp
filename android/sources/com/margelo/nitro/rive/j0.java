package com.margelo.nitro.rive;

import app.rive.runtime.kotlin.fonts.FontFallbackStrategy;
import java.util.Map;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function1;

/* loaded from: classes3.dex */
public final class j0 extends lo.h implements Function1 {
    @Override // lo.a
    public final Continuation create(Continuation continuation) {
        return new j0(1, continuation);
    }

    @Override // kotlin.jvm.functions.Function1
    public final Object invoke(Object obj) {
        return ((j0) create((Continuation) obj)).invokeSuspend(Unit.a);
    }

    @Override // lo.a
    public final Object invokeSuspend(Object obj) {
        Map map;
        Map map2;
        ko.a aVar = ko.a.f13464d;
        ki.b.R(obj);
        map = HybridRiveFontConfig.fontsByWeight;
        synchronized (map) {
            map2 = HybridRiveFontConfig.fontsByWeight;
            map2.clear();
            Unit unit = Unit.a;
        }
        FontFallbackStrategy.INSTANCE.setStylePicker(null);
        g0.a(HybridRiveFontConfig.Companion);
        return Unit.a;
    }
}
