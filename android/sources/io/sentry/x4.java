package io.sentry;

import java.util.HashMap;
import java.util.Map;

/* loaded from: classes3.dex */
public final class x4 implements y1 {
    public HashMap E;

    /* renamed from: d, reason: collision with root package name */
    public io.sentry.protocol.v f12081d;

    /* renamed from: e, reason: collision with root package name */
    public k6 f12082e;

    /* renamed from: i, reason: collision with root package name */
    public Double f12083i;

    /* renamed from: v, reason: collision with root package name */
    public String f12084v;

    /* renamed from: w, reason: collision with root package name */
    public z4 f12085w;

    /* renamed from: x, reason: collision with root package name */
    public Integer f12086x;

    /* renamed from: y, reason: collision with root package name */
    public Map f12087y;

    @Override // io.sentry.y1
    public final void serialize(y2 y2Var, ILogger iLogger) {
        y2Var.n0();
        y2Var.C0("timestamp").o0(iLogger, ki.b.m(this.f12083i));
        y2Var.C0("trace_id").o0(iLogger, this.f12081d);
        if (this.f12082e != null) {
            y2Var.C0("span_id").o0(iLogger, this.f12082e);
        }
        y2Var.C0("body").s(this.f12084v);
        y2Var.C0("level").o0(iLogger, this.f12085w);
        if (this.f12086x != null) {
            y2Var.C0("severity_number").o0(iLogger, this.f12086x);
        }
        if (this.f12087y != null) {
            y2Var.C0("attributes").o0(iLogger, this.f12087y);
        }
        HashMap hashMap = this.E;
        if (hashMap != null) {
            for (String str : hashMap.keySet()) {
                y2Var.C0(str).o0(iLogger, this.E.get(str));
            }
        }
        y2Var.O();
    }
}
