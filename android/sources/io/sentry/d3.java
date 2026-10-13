package io.sentry;

import java.io.File;
import java.math.BigDecimal;
import java.math.RoundingMode;
import java.util.Map;
import java.util.Objects;
import java.util.concurrent.ConcurrentHashMap;

/* loaded from: classes3.dex */
public final class d3 implements y1 {
    public String E;
    public String F;
    public double G;
    public final File H;
    public io.sentry.protocol.profiling.a J;
    public ConcurrentHashMap K;

    /* renamed from: e, reason: collision with root package name */
    public io.sentry.protocol.v f11495e;

    /* renamed from: i, reason: collision with root package name */
    public io.sentry.protocol.v f11496i;

    /* renamed from: v, reason: collision with root package name */
    public io.sentry.protocol.t f11497v;

    /* renamed from: w, reason: collision with root package name */
    public final Map f11498w;

    /* renamed from: x, reason: collision with root package name */
    public String f11499x;

    /* renamed from: y, reason: collision with root package name */
    public String f11500y;
    public String I = null;

    /* renamed from: d, reason: collision with root package name */
    public io.sentry.protocol.d f11494d = null;

    public d3(io.sentry.protocol.v vVar, io.sentry.protocol.v vVar2, File file, Map map, Double d6, String str, v5 v5Var) {
        this.f11495e = vVar;
        this.f11496i = vVar2;
        this.H = file;
        this.f11498w = map;
        this.f11497v = v5Var.getSdkVersion();
        this.f11500y = v5Var.getRelease() != null ? v5Var.getRelease() : "";
        this.E = v5Var.getEnvironment();
        this.f11499x = str;
        this.F = "2";
        this.G = d6.doubleValue();
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof d3)) {
            return false;
        }
        d3 d3Var = (d3) obj;
        return Objects.equals(this.f11494d, d3Var.f11494d) && Objects.equals(this.f11495e, d3Var.f11495e) && Objects.equals(this.f11496i, d3Var.f11496i) && Objects.equals(this.f11497v, d3Var.f11497v) && Objects.equals(this.f11498w, d3Var.f11498w) && Objects.equals(this.f11499x, d3Var.f11499x) && Objects.equals(this.f11500y, d3Var.f11500y) && Objects.equals(this.E, d3Var.E) && Objects.equals(this.F, d3Var.F) && Objects.equals(this.I, d3Var.I) && Objects.equals(this.K, d3Var.K) && Objects.equals(this.J, d3Var.J);
    }

    public final int hashCode() {
        return Objects.hash(this.f11494d, this.f11495e, this.f11496i, this.f11497v, this.f11498w, this.f11499x, this.f11500y, this.E, this.F, this.I, this.J, this.K);
    }

    @Override // io.sentry.y1
    public final void serialize(y2 y2Var, ILogger iLogger) {
        y2Var.n0();
        if (this.f11494d != null) {
            y2Var.C0("debug_meta").o0(iLogger, this.f11494d);
        }
        y2Var.C0("profiler_id").o0(iLogger, this.f11495e);
        y2Var.C0("chunk_id").o0(iLogger, this.f11496i);
        if (this.f11497v != null) {
            y2Var.C0("client_sdk").o0(iLogger, this.f11497v);
        }
        Map map = this.f11498w;
        if (!map.isEmpty()) {
            String C = y2Var.C();
            y2Var.R("");
            y2Var.C0("measurements").o0(iLogger, map);
            y2Var.R(C);
        }
        y2Var.C0("platform").o0(iLogger, this.f11499x);
        y2Var.C0("release").o0(iLogger, this.f11500y);
        if (this.E != null) {
            y2Var.C0("environment").o0(iLogger, this.E);
        }
        y2Var.C0("version").o0(iLogger, this.F);
        if (this.I != null) {
            y2Var.C0("sampled_profile").o0(iLogger, this.I);
        }
        y2Var.C0("timestamp").o0(iLogger, BigDecimal.valueOf(this.G).setScale(6, RoundingMode.DOWN));
        if (this.J != null) {
            y2Var.C0("profile").o0(iLogger, this.J);
        }
        ConcurrentHashMap concurrentHashMap = this.K;
        if (concurrentHashMap != null) {
            for (String str : concurrentHashMap.keySet()) {
                y2Var.C0(str).o0(iLogger, this.K.get(str));
            }
        }
        y2Var.O();
    }
}
