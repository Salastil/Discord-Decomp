package io.sentry.protocol.profiling;

import io.sentry.ILogger;
import io.sentry.y1;
import io.sentry.y2;
import java.math.BigDecimal;
import java.math.RoundingMode;
import java.util.HashMap;

/* loaded from: classes3.dex */
public final class b implements y1 {

    /* renamed from: d, reason: collision with root package name */
    public double f11865d;

    /* renamed from: e, reason: collision with root package name */
    public int f11866e;

    /* renamed from: i, reason: collision with root package name */
    public String f11867i;

    /* renamed from: v, reason: collision with root package name */
    public HashMap f11868v;

    @Override // io.sentry.y1
    public final void serialize(y2 y2Var, ILogger iLogger) {
        y2Var.n0();
        y2Var.C0("timestamp").o0(iLogger, BigDecimal.valueOf(this.f11865d).setScale(6, RoundingMode.DOWN));
        y2Var.C0("stack_id").o0(iLogger, Integer.valueOf(this.f11866e));
        if (this.f11867i != null) {
            y2Var.C0("thread_id").o0(iLogger, this.f11867i);
        }
        HashMap hashMap = this.f11868v;
        if (hashMap != null) {
            for (String str : hashMap.keySet()) {
                y2Var.C0(str).o0(iLogger, this.f11868v.get(str));
            }
        }
        y2Var.O();
    }
}
