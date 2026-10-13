package io.sentry;

import java.util.concurrent.ConcurrentHashMap;

/* loaded from: classes3.dex */
public final class d4 implements y1 {
    public int E;
    public boolean F;
    public boolean G;
    public boolean H;
    public f3 I;
    public ConcurrentHashMap J;

    /* renamed from: d, reason: collision with root package name */
    public boolean f11501d;

    /* renamed from: e, reason: collision with root package name */
    public Double f11502e;

    /* renamed from: i, reason: collision with root package name */
    public boolean f11503i;

    /* renamed from: v, reason: collision with root package name */
    public Double f11504v;

    /* renamed from: w, reason: collision with root package name */
    public String f11505w;

    /* renamed from: x, reason: collision with root package name */
    public boolean f11506x;

    /* renamed from: y, reason: collision with root package name */
    public boolean f11507y;

    public d4(v5 v5Var, f9.b bVar) {
        this.f11503i = ((Boolean) bVar.f8472d).booleanValue();
        this.f11504v = (Double) bVar.f8473e;
        this.f11501d = ((Boolean) bVar.f8475v).booleanValue();
        this.f11502e = (Double) bVar.f8476w;
        o6 internalTracesSampler = v5Var.getInternalTracesSampler();
        double c6 = io.sentry.util.j.a().c();
        Double profileSessionSampleRate = internalTracesSampler.a.getProfileSessionSampleRate();
        this.F = profileSessionSampleRate != null && profileSessionSampleRate.doubleValue() >= c6;
        this.f11505w = v5Var.getProfilingTracesDirPath();
        this.f11506x = v5Var.isProfilingEnabled();
        this.f11507y = v5Var.isContinuousProfilingEnabled();
        this.I = v5Var.getProfileLifecycle();
        this.E = v5Var.getProfilingTracesHz();
        this.G = v5Var.isEnableAppStartProfiling();
        this.H = v5Var.isStartProfilerOnAppStart();
    }

    @Override // io.sentry.y1
    public final void serialize(y2 y2Var, ILogger iLogger) {
        y2Var.n0();
        y2Var.C0("profile_sampled").o0(iLogger, Boolean.valueOf(this.f11501d));
        y2Var.C0("profile_sample_rate").o0(iLogger, this.f11502e);
        y2Var.C0("continuous_profile_sampled").o0(iLogger, Boolean.valueOf(this.F));
        y2Var.C0("trace_sampled").o0(iLogger, Boolean.valueOf(this.f11503i));
        y2Var.C0("trace_sample_rate").o0(iLogger, this.f11504v);
        y2Var.C0("profiling_traces_dir_path").o0(iLogger, this.f11505w);
        y2Var.C0("is_profiling_enabled").o0(iLogger, Boolean.valueOf(this.f11506x));
        y2Var.C0("is_continuous_profiling_enabled").o0(iLogger, Boolean.valueOf(this.f11507y));
        y2Var.C0("profile_lifecycle").o0(iLogger, this.I.name());
        y2Var.C0("profiling_traces_hz").o0(iLogger, Integer.valueOf(this.E));
        y2Var.C0("is_enable_app_start_profiling").o0(iLogger, Boolean.valueOf(this.G));
        y2Var.C0("is_start_profiler_on_app_start").o0(iLogger, Boolean.valueOf(this.H));
        ConcurrentHashMap concurrentHashMap = this.J;
        if (concurrentHashMap != null) {
            for (String str : concurrentHashMap.keySet()) {
                com.discord.chat.bridge.botuikit.a.t(this.J, str, y2Var, str, iLogger);
            }
        }
        y2Var.O();
    }
}
