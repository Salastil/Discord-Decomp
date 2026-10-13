package io.sentry.protocol;

import io.sentry.ILogger;
import io.sentry.h6;
import io.sentry.i6;
import io.sentry.k6;
import io.sentry.l6;
import io.sentry.y1;
import io.sentry.y2;
import java.math.BigDecimal;
import java.math.RoundingMode;
import java.util.Map;
import java.util.concurrent.ConcurrentHashMap;

/* loaded from: classes3.dex */
public final class y implements y1 {
    public final l6 E;
    public final String F;
    public final Map G;
    public Map H;
    public final Map I;
    public ConcurrentHashMap J;

    /* renamed from: d, reason: collision with root package name */
    public final Double f11904d;

    /* renamed from: e, reason: collision with root package name */
    public final Double f11905e;

    /* renamed from: i, reason: collision with root package name */
    public final v f11906i;

    /* renamed from: v, reason: collision with root package name */
    public final k6 f11907v;

    /* renamed from: w, reason: collision with root package name */
    public final k6 f11908w;

    /* renamed from: x, reason: collision with root package name */
    public final String f11909x;

    /* renamed from: y, reason: collision with root package name */
    public final String f11910y;

    public y(Double d6, Double d7, v vVar, k6 k6Var, k6 k6Var2, String str, String str2, l6 l6Var, String str3, Map map, Map map2, Map map3) {
        this.f11904d = d6;
        this.f11905e = d7;
        this.f11906i = vVar;
        this.f11907v = k6Var;
        this.f11908w = k6Var2;
        this.f11909x = str;
        this.f11910y = str2;
        this.E = l6Var;
        this.F = str3;
        this.G = map;
        this.I = map2;
        this.H = map3;
    }

    @Override // io.sentry.y1
    public final void serialize(y2 y2Var, ILogger iLogger) {
        y2Var.n0();
        y2 C0 = y2Var.C0("start_timestamp");
        BigDecimal valueOf = BigDecimal.valueOf(this.f11904d.doubleValue());
        RoundingMode roundingMode = RoundingMode.DOWN;
        C0.o0(iLogger, valueOf.setScale(6, roundingMode));
        Double d6 = this.f11905e;
        if (d6 != null) {
            y2Var.C0("timestamp").o0(iLogger, BigDecimal.valueOf(d6.doubleValue()).setScale(6, roundingMode));
        }
        y2Var.C0("trace_id").o0(iLogger, this.f11906i);
        y2Var.C0("span_id").o0(iLogger, this.f11907v);
        k6 k6Var = this.f11908w;
        if (k6Var != null) {
            y2Var.C0("parent_span_id").o0(iLogger, k6Var);
        }
        y2Var.C0("op").s(this.f11909x);
        String str = this.f11910y;
        if (str != null) {
            y2Var.C0("description").s(str);
        }
        l6 l6Var = this.E;
        if (l6Var != null) {
            y2Var.C0("status").o0(iLogger, l6Var);
        }
        String str2 = this.F;
        if (str2 != null) {
            y2Var.C0("origin").o0(iLogger, str2);
        }
        Map map = this.G;
        if (!map.isEmpty()) {
            y2Var.C0("tags").o0(iLogger, map);
        }
        if (this.H != null) {
            y2Var.C0("data").o0(iLogger, this.H);
        }
        Map map2 = this.I;
        if (!map2.isEmpty()) {
            y2Var.C0("measurements").o0(iLogger, map2);
        }
        ConcurrentHashMap concurrentHashMap = this.J;
        if (concurrentHashMap != null) {
            for (String str3 : concurrentHashMap.keySet()) {
                com.discord.chat.bridge.botuikit.a.t(this.J, str3, y2Var, str3, iLogger);
            }
        }
        y2Var.O();
    }

    public y(h6 h6Var) {
        ConcurrentHashMap concurrentHashMap = h6Var.j;
        i6 i6Var = h6Var.f11590c;
        this.f11910y = i6Var.f11615x;
        this.f11909x = i6Var.f11614w;
        this.f11907v = i6Var.f11611e;
        this.f11908w = i6Var.f11612i;
        this.f11906i = i6Var.f11610d;
        this.E = i6Var.f11616y;
        this.F = i6Var.F;
        ConcurrentHashMap r5 = ys.l.r(i6Var.E);
        this.G = r5 == null ? new ConcurrentHashMap() : r5;
        ConcurrentHashMap r7 = ys.l.r(h6Var.k);
        this.I = r7 == null ? new ConcurrentHashMap() : r7;
        this.f11905e = h6Var.f11589b == null ? null : Double.valueOf(h6Var.a.c(r2) / 1.0E9d);
        this.f11904d = Double.valueOf(h6Var.a.d() / 1.0E9d);
        this.H = concurrentHashMap;
        i6Var.K.h();
    }
}
