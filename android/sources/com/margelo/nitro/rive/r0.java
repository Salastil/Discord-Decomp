package com.margelo.nitro.rive;

import kotlin.Unit;
import kotlin.jvm.functions.Function0;

/* loaded from: classes3.dex */
public final /* synthetic */ class r0 implements Function0 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f6590d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ HybridRiveView f6591e;

    public /* synthetic */ r0(HybridRiveView hybridRiveView, int i5) {
        this.f6590d = i5;
        this.f6591e = hybridRiveView;
    }

    @Override // kotlin.jvm.functions.Function0
    public final Object invoke() {
        Unit removeEventListeners$lambda$10;
        Unit pause$lambda$7;
        Unit play$lambda$6;
        Unit afterUpdate$lambda$11;
        Unit reset$lambda$8;
        switch (this.f6590d) {
            case 0:
                removeEventListeners$lambda$10 = HybridRiveView.removeEventListeners$lambda$10(this.f6591e);
                return removeEventListeners$lambda$10;
            case 1:
                pause$lambda$7 = HybridRiveView.pause$lambda$7(this.f6591e);
                return pause$lambda$7;
            case 2:
                play$lambda$6 = HybridRiveView.play$lambda$6(this.f6591e);
                return play$lambda$6;
            case 3:
                afterUpdate$lambda$11 = HybridRiveView.afterUpdate$lambda$11(this.f6591e);
                return afterUpdate$lambda$11;
            default:
                reset$lambda$8 = HybridRiveView.reset$lambda$8(this.f6591e);
                return reset$lambda$8;
        }
    }
}
