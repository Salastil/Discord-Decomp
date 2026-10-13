package io.sentry;

import com.discord.jank_stats.JankScreenContext;
import com.facebook.react.devsupport.StackTraceHelper;
import java.util.Arrays;
import java.util.concurrent.ConcurrentHashMap;

/* loaded from: classes3.dex */
public final class h3 implements y1 {
    public ConcurrentHashMap E;

    /* renamed from: d, reason: collision with root package name */
    public String f11579d;

    /* renamed from: e, reason: collision with root package name */
    public String f11580e;

    /* renamed from: i, reason: collision with root package name */
    public String f11581i;

    /* renamed from: v, reason: collision with root package name */
    public Long f11582v;

    /* renamed from: w, reason: collision with root package name */
    public Long f11583w;

    /* renamed from: x, reason: collision with root package name */
    public Long f11584x;

    /* renamed from: y, reason: collision with root package name */
    public Long f11585y;

    public h3(f1 f1Var, Long l6, Long l7) {
        this.f11579d = f1Var.k().toString();
        this.f11580e = f1Var.o().f11610d.toString();
        this.f11581i = f1Var.getName().isEmpty() ? JankScreenContext.UNKNOWN_SCREEN : f1Var.getName();
        this.f11582v = l6;
        this.f11584x = l7;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj == null || h3.class != obj.getClass()) {
            return false;
        }
        h3 h3Var = (h3) obj;
        return this.f11579d.equals(h3Var.f11579d) && this.f11580e.equals(h3Var.f11580e) && this.f11581i.equals(h3Var.f11581i) && this.f11582v.equals(h3Var.f11582v) && this.f11584x.equals(h3Var.f11584x) && d9.a.k(this.f11585y, h3Var.f11585y) && d9.a.k(this.f11583w, h3Var.f11583w) && d9.a.k(this.E, h3Var.E);
    }

    public final int hashCode() {
        return Arrays.hashCode(new Object[]{this.f11579d, this.f11580e, this.f11581i, this.f11582v, this.f11583w, this.f11584x, this.f11585y, this.E});
    }

    @Override // io.sentry.y1
    public final void serialize(y2 y2Var, ILogger iLogger) {
        y2Var.n0();
        y2Var.C0(StackTraceHelper.ID_KEY).o0(iLogger, this.f11579d);
        y2Var.C0("trace_id").o0(iLogger, this.f11580e);
        y2Var.C0(StackTraceHelper.NAME_KEY).o0(iLogger, this.f11581i);
        y2Var.C0("relative_start_ns").o0(iLogger, this.f11582v);
        y2Var.C0("relative_end_ns").o0(iLogger, this.f11583w);
        y2Var.C0("relative_cpu_start_ms").o0(iLogger, this.f11584x);
        y2Var.C0("relative_cpu_end_ms").o0(iLogger, this.f11585y);
        ConcurrentHashMap concurrentHashMap = this.E;
        if (concurrentHashMap != null) {
            for (String str : concurrentHashMap.keySet()) {
                com.discord.chat.bridge.botuikit.a.t(this.E, str, y2Var, str, iLogger);
            }
        }
        y2Var.O();
    }
}
