package com.google.android.gms.internal.play_billing;

import android.os.SystemClock;

/* loaded from: classes3.dex */
public final class k extends a2 {

    /* renamed from: b, reason: collision with root package name */
    public final /* synthetic */ int f5753b;

    @Override // com.google.android.gms.internal.play_billing.a2
    public final long d() {
        switch (this.f5753b) {
            case 0:
                return SystemClock.elapsedRealtimeNanos();
            default:
                return SystemClock.elapsedRealtime() * 1000000;
        }
    }
}
