package io.sentry.protocol;

import com.discord.jank_stats.JankRecordStore;
import io.sentry.ILogger;
import io.sentry.y1;
import io.sentry.y2;
import java.util.Arrays;
import java.util.concurrent.ConcurrentHashMap;

/* loaded from: classes3.dex */
public final class p implements y1 {
    public Long E;
    public ConcurrentHashMap F;
    public String G;
    public String H;
    public ConcurrentHashMap I;

    /* renamed from: d, reason: collision with root package name */
    public String f11853d;

    /* renamed from: e, reason: collision with root package name */
    public String f11854e;

    /* renamed from: i, reason: collision with root package name */
    public String f11855i;

    /* renamed from: v, reason: collision with root package name */
    public Object f11856v;

    /* renamed from: w, reason: collision with root package name */
    public String f11857w;

    /* renamed from: x, reason: collision with root package name */
    public ConcurrentHashMap f11858x;

    /* renamed from: y, reason: collision with root package name */
    public ConcurrentHashMap f11859y;

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj == null || p.class != obj.getClass()) {
            return false;
        }
        p pVar = (p) obj;
        return d9.a.k(this.f11853d, pVar.f11853d) && d9.a.k(this.f11854e, pVar.f11854e) && d9.a.k(this.f11855i, pVar.f11855i) && d9.a.k(this.f11857w, pVar.f11857w) && d9.a.k(this.f11858x, pVar.f11858x) && d9.a.k(this.f11859y, pVar.f11859y) && d9.a.k(this.E, pVar.E) && d9.a.k(this.G, pVar.G) && d9.a.k(this.H, pVar.H);
    }

    public final int hashCode() {
        return Arrays.hashCode(new Object[]{this.f11853d, this.f11854e, this.f11855i, this.f11857w, this.f11858x, this.f11859y, this.E, this.G, this.H});
    }

    @Override // io.sentry.y1
    public final void serialize(y2 y2Var, ILogger iLogger) {
        y2Var.n0();
        if (this.f11853d != null) {
            y2Var.C0("url").s(this.f11853d);
        }
        if (this.f11854e != null) {
            y2Var.C0("method").s(this.f11854e);
        }
        if (this.f11855i != null) {
            y2Var.C0("query_string").s(this.f11855i);
        }
        if (this.f11856v != null) {
            y2Var.C0("data").o0(iLogger, this.f11856v);
        }
        if (this.f11857w != null) {
            y2Var.C0("cookies").s(this.f11857w);
        }
        if (this.f11858x != null) {
            y2Var.C0("headers").o0(iLogger, this.f11858x);
        }
        if (this.f11859y != null) {
            y2Var.C0("env").o0(iLogger, this.f11859y);
        }
        if (this.F != null) {
            y2Var.C0(JankRecordStore.SCREEN_OTHER).o0(iLogger, this.F);
        }
        if (this.G != null) {
            y2Var.C0("fragment").o0(iLogger, this.G);
        }
        if (this.E != null) {
            y2Var.C0("body_size").o0(iLogger, this.E);
        }
        if (this.H != null) {
            y2Var.C0("api_target").o0(iLogger, this.H);
        }
        ConcurrentHashMap concurrentHashMap = this.I;
        if (concurrentHashMap != null) {
            for (String str : concurrentHashMap.keySet()) {
                com.discord.chat.bridge.botuikit.a.t(this.I, str, y2Var, str, iLogger);
            }
        }
        y2Var.O();
    }
}
