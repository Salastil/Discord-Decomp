package io.sentry.rrweb;

import io.sentry.ILogger;
import io.sentry.SentryLevel;
import io.sentry.y1;
import io.sentry.y2;
import java.math.BigDecimal;
import java.util.HashMap;
import java.util.concurrent.ConcurrentHashMap;

/* loaded from: classes3.dex */
public final class a extends b implements y1 {
    public SentryLevel E;
    public ConcurrentHashMap F;
    public HashMap G;
    public ConcurrentHashMap H;
    public ConcurrentHashMap I;

    /* renamed from: i, reason: collision with root package name */
    public String f11937i;

    /* renamed from: v, reason: collision with root package name */
    public double f11938v;

    /* renamed from: w, reason: collision with root package name */
    public String f11939w;

    /* renamed from: x, reason: collision with root package name */
    public String f11940x;

    /* renamed from: y, reason: collision with root package name */
    public String f11941y;

    public a() {
        super(c.Custom);
        this.f11937i = "breadcrumb";
    }

    @Override // io.sentry.y1
    public final void serialize(y2 y2Var, ILogger iLogger) {
        y2Var.n0();
        y2Var.C0("type").o0(iLogger, this.f11942d);
        y2Var.C0("timestamp").g(this.f11943e);
        y2Var.C0("data");
        y2Var.n0();
        y2Var.C0("tag").s(this.f11937i);
        y2Var.C0("payload");
        y2Var.n0();
        if (this.f11939w != null) {
            y2Var.C0("type").s(this.f11939w);
        }
        y2Var.C0("timestamp").o0(iLogger, BigDecimal.valueOf(this.f11938v));
        if (this.f11940x != null) {
            y2Var.C0("category").s(this.f11940x);
        }
        if (this.f11941y != null) {
            y2Var.C0("message").s(this.f11941y);
        }
        if (this.E != null) {
            y2Var.C0("level").o0(iLogger, this.E);
        }
        if (this.F != null) {
            y2Var.C0("data").o0(iLogger, this.F);
        }
        ConcurrentHashMap concurrentHashMap = this.H;
        if (concurrentHashMap != null) {
            for (String str : concurrentHashMap.keySet()) {
                com.discord.chat.bridge.botuikit.a.t(this.H, str, y2Var, str, iLogger);
            }
        }
        y2Var.O();
        ConcurrentHashMap concurrentHashMap2 = this.I;
        if (concurrentHashMap2 != null) {
            for (String str2 : concurrentHashMap2.keySet()) {
                com.discord.chat.bridge.botuikit.a.t(this.I, str2, y2Var, str2, iLogger);
            }
        }
        y2Var.O();
        HashMap hashMap = this.G;
        if (hashMap != null) {
            for (String str3 : hashMap.keySet()) {
                Object obj = this.G.get(str3);
                y2Var.C0(str3);
                y2Var.o0(iLogger, obj);
            }
        }
        y2Var.O();
    }
}
