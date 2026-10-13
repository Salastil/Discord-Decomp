package io.sentry.protocol;

import io.sentry.ILogger;
import io.sentry.w4;
import io.sentry.y1;
import io.sentry.y2;
import java.util.List;
import java.util.Map;
import java.util.Objects;
import java.util.concurrent.ConcurrentHashMap;

/* loaded from: classes3.dex */
public final class SentryStackFrame implements y1 {
    public Integer E;
    public String F;
    public String G;
    public Boolean H;
    public String I;
    public Boolean J;
    public String K;
    public String L;
    public String M;
    public String N;
    public String O;
    public String P;
    public ConcurrentHashMap Q;
    public String R;
    public w4 S;

    /* renamed from: d, reason: collision with root package name */
    public List f11741d;

    /* renamed from: e, reason: collision with root package name */
    public List f11742e;

    /* renamed from: i, reason: collision with root package name */
    public Map f11743i;

    /* renamed from: v, reason: collision with root package name */
    public String f11744v;

    /* renamed from: w, reason: collision with root package name */
    public String f11745w;

    /* renamed from: x, reason: collision with root package name */
    public String f11746x;

    /* renamed from: y, reason: collision with root package name */
    public Integer f11747y;

    public final boolean equals(Object obj) {
        if (obj == null || SentryStackFrame.class != obj.getClass()) {
            return false;
        }
        SentryStackFrame sentryStackFrame = (SentryStackFrame) obj;
        return Objects.equals(this.f11741d, sentryStackFrame.f11741d) && Objects.equals(this.f11742e, sentryStackFrame.f11742e) && Objects.equals(this.f11743i, sentryStackFrame.f11743i) && Objects.equals(this.f11744v, sentryStackFrame.f11744v) && Objects.equals(this.f11745w, sentryStackFrame.f11745w) && Objects.equals(this.f11746x, sentryStackFrame.f11746x) && Objects.equals(this.f11747y, sentryStackFrame.f11747y) && Objects.equals(this.E, sentryStackFrame.E) && Objects.equals(this.F, sentryStackFrame.F) && Objects.equals(this.G, sentryStackFrame.G) && Objects.equals(this.H, sentryStackFrame.H) && Objects.equals(this.I, sentryStackFrame.I) && Objects.equals(this.J, sentryStackFrame.J) && Objects.equals(this.K, sentryStackFrame.K) && Objects.equals(this.L, sentryStackFrame.L) && Objects.equals(this.M, sentryStackFrame.M) && Objects.equals(this.N, sentryStackFrame.N) && Objects.equals(this.O, sentryStackFrame.O) && Objects.equals(this.P, sentryStackFrame.P) && Objects.equals(this.Q, sentryStackFrame.Q) && Objects.equals(this.R, sentryStackFrame.R) && Objects.equals(this.S, sentryStackFrame.S);
    }

    public final int hashCode() {
        return Objects.hash(this.f11741d, this.f11742e, this.f11743i, null, this.f11744v, this.f11745w, this.f11746x, this.f11747y, this.E, this.F, this.G, this.H, this.I, this.J, this.K, this.L, this.M, this.N, this.O, this.P, this.Q, this.R, this.S);
    }

    @Override // io.sentry.y1
    public final void serialize(y2 y2Var, ILogger iLogger) {
        y2Var.n0();
        if (this.f11744v != null) {
            y2Var.C0("filename").s(this.f11744v);
        }
        if (this.f11745w != null) {
            y2Var.C0("function").s(this.f11745w);
        }
        if (this.f11746x != null) {
            y2Var.C0("module").s(this.f11746x);
        }
        if (this.f11747y != null) {
            y2Var.C0("lineno").a0(this.f11747y);
        }
        if (this.E != null) {
            y2Var.C0("colno").a0(this.E);
        }
        if (this.F != null) {
            y2Var.C0("abs_path").s(this.F);
        }
        if (this.G != null) {
            y2Var.C0("context_line").s(this.G);
        }
        if (this.H != null) {
            y2Var.C0("in_app").q0(this.H);
        }
        if (this.I != null) {
            y2Var.C0("package").s(this.I);
        }
        if (this.J != null) {
            y2Var.C0("native").q0(this.J);
        }
        if (this.K != null) {
            y2Var.C0("platform").s(this.K);
        }
        if (this.L != null) {
            y2Var.C0("image_addr").s(this.L);
        }
        if (this.M != null) {
            y2Var.C0("symbol_addr").s(this.M);
        }
        if (this.N != null) {
            y2Var.C0("instruction_addr").s(this.N);
        }
        if (this.O != null) {
            y2Var.C0("addr_mode").s(this.O);
        }
        if (this.R != null) {
            y2Var.C0("raw_function").s(this.R);
        }
        if (this.P != null) {
            y2Var.C0("symbol").s(this.P);
        }
        if (this.S != null) {
            y2Var.C0("lock").o0(iLogger, this.S);
        }
        List list = this.f11741d;
        if (list != null && !list.isEmpty()) {
            y2Var.C0("pre_context").o0(iLogger, this.f11741d);
        }
        List list2 = this.f11742e;
        if (list2 != null && !list2.isEmpty()) {
            y2Var.C0("post_context").o0(iLogger, this.f11742e);
        }
        Map map = this.f11743i;
        if (map != null && !map.isEmpty()) {
            y2Var.C0("vars").o0(iLogger, this.f11743i);
        }
        ConcurrentHashMap concurrentHashMap = this.Q;
        if (concurrentHashMap != null) {
            for (String str : concurrentHashMap.keySet()) {
                com.discord.chat.bridge.botuikit.a.t(this.Q, str, y2Var, str, iLogger);
            }
        }
        y2Var.O();
    }
}
