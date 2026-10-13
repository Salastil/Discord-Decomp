package com.discord.tti_measurement_view;

import kotlin.Metadata;
import kotlin.Unit;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.FunctionReferenceImpl;
import kotlin.jvm.internal.Intrinsics;

@Metadata(k = 3, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes3.dex */
public /* synthetic */ class TTIMeasurementViewManager$addEventEmitters$1 extends FunctionReferenceImpl implements Function2<TTIMeasurementView, Double, Unit> {
    public TTIMeasurementViewManager$addEventEmitters$1(Object obj) {
        super(2, obj, TTIMeasurementViewManager.class, "onMeasurement", "onMeasurement(Lcom/discord/tti_measurement_view/TTIMeasurementView;D)V", 0);
    }

    @Override // kotlin.jvm.functions.Function2
    public /* bridge */ /* synthetic */ Object invoke(Object obj, Object obj2) {
        invoke((TTIMeasurementView) obj, ((Number) obj2).doubleValue());
        return Unit.a;
    }

    public final void invoke(TTIMeasurementView p02, double d6) {
        Intrinsics.checkNotNullParameter(p02, "p0");
        ((TTIMeasurementViewManager) this.receiver).onMeasurement(p02, d6);
    }
}
