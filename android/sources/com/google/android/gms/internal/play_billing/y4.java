package com.google.android.gms.internal.play_billing;

/* loaded from: classes3.dex */
public final class y4 extends w4 {
    public final /* synthetic */ z4 E;

    public y4(z4 z4Var) {
        this.E = z4Var;
    }

    @Override // com.google.android.gms.internal.play_billing.w4
    public final String c() {
        x4 x4Var = (x4) this.E.f5896d.get();
        return x4Var == null ? "Completer object has been garbage collected, future will fail soon" : s4.h.f("tag=[", String.valueOf(x4Var.a), "]");
    }
}
