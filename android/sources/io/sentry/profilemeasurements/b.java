package io.sentry.profilemeasurements;

import io.sentry.ILogger;
import io.sentry.y1;
import io.sentry.y2;
import java.math.BigDecimal;
import java.math.RoundingMode;
import java.util.Arrays;
import java.util.concurrent.ConcurrentHashMap;

/* loaded from: classes3.dex */
public final class b implements y1 {

    /* renamed from: d, reason: collision with root package name */
    public ConcurrentHashMap f11737d;

    /* renamed from: e, reason: collision with root package name */
    public double f11738e;

    /* renamed from: i, reason: collision with root package name */
    public String f11739i;

    /* renamed from: v, reason: collision with root package name */
    public double f11740v;

    public b(Long l6, Number number, long j) {
        this.f11739i = l6.toString();
        this.f11740v = number.doubleValue();
        this.f11738e = j / 1.0E9d;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj == null || b.class != obj.getClass()) {
            return false;
        }
        b bVar = (b) obj;
        return d9.a.k(this.f11737d, bVar.f11737d) && this.f11739i.equals(bVar.f11739i) && this.f11740v == bVar.f11740v && this.f11738e == bVar.f11738e;
    }

    public final int hashCode() {
        return Arrays.hashCode(new Object[]{this.f11737d, this.f11739i, Double.valueOf(this.f11740v)});
    }

    @Override // io.sentry.y1
    public final void serialize(y2 y2Var, ILogger iLogger) {
        y2Var.n0();
        y2Var.C0("value").o0(iLogger, Double.valueOf(this.f11740v));
        y2Var.C0("elapsed_since_start_ns").o0(iLogger, this.f11739i);
        y2Var.C0("timestamp").o0(iLogger, BigDecimal.valueOf(this.f11738e).setScale(6, RoundingMode.DOWN));
        ConcurrentHashMap concurrentHashMap = this.f11737d;
        if (concurrentHashMap != null) {
            for (String str : concurrentHashMap.keySet()) {
                com.discord.chat.bridge.botuikit.a.t(this.f11737d, str, y2Var, str, iLogger);
            }
        }
        y2Var.O();
    }
}
