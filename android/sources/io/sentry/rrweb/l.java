package io.sentry.rrweb;

import io.sentry.ILogger;
import io.sentry.y1;
import io.sentry.y2;
import java.math.BigDecimal;
import java.util.HashMap;
import java.util.concurrent.ConcurrentHashMap;

/* loaded from: classes3.dex */
public final class l extends b implements y1 {
    public ConcurrentHashMap E;
    public HashMap F;
    public ConcurrentHashMap G;
    public ConcurrentHashMap H;

    /* renamed from: i, reason: collision with root package name */
    public String f11964i;

    /* renamed from: v, reason: collision with root package name */
    public String f11965v;

    /* renamed from: w, reason: collision with root package name */
    public String f11966w;

    /* renamed from: x, reason: collision with root package name */
    public double f11967x;

    /* renamed from: y, reason: collision with root package name */
    public double f11968y;

    public l() {
        super(c.Custom);
        this.f11964i = "performanceSpan";
    }

    @Override // io.sentry.y1
    public final void serialize(y2 y2Var, ILogger iLogger) {
        y2Var.n0();
        y2Var.C0("type").o0(iLogger, this.f11942d);
        y2Var.C0("timestamp").g(this.f11943e);
        y2Var.C0("data");
        y2Var.n0();
        y2Var.C0("tag").s(this.f11964i);
        y2Var.C0("payload");
        y2Var.n0();
        if (this.f11965v != null) {
            y2Var.C0("op").s(this.f11965v);
        }
        if (this.f11966w != null) {
            y2Var.C0("description").s(this.f11966w);
        }
        y2Var.C0("startTimestamp").o0(iLogger, BigDecimal.valueOf(this.f11967x));
        y2Var.C0("endTimestamp").o0(iLogger, BigDecimal.valueOf(this.f11968y));
        if (this.E != null) {
            y2Var.C0("data").o0(iLogger, this.E);
        }
        ConcurrentHashMap concurrentHashMap = this.G;
        if (concurrentHashMap != null) {
            for (String str : concurrentHashMap.keySet()) {
                com.discord.chat.bridge.botuikit.a.t(this.G, str, y2Var, str, iLogger);
            }
        }
        y2Var.O();
        ConcurrentHashMap concurrentHashMap2 = this.H;
        if (concurrentHashMap2 != null) {
            for (String str2 : concurrentHashMap2.keySet()) {
                com.discord.chat.bridge.botuikit.a.t(this.H, str2, y2Var, str2, iLogger);
            }
        }
        y2Var.O();
        HashMap hashMap = this.F;
        if (hashMap != null) {
            for (String str3 : hashMap.keySet()) {
                Object obj = this.F.get(str3);
                y2Var.C0(str3);
                y2Var.o0(iLogger, obj);
            }
        }
        y2Var.O();
    }
}
