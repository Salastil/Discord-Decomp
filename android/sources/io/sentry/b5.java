package io.sentry;

import com.facebook.react.devsupport.StackTraceHelper;
import java.util.HashMap;
import java.util.Map;

/* loaded from: classes3.dex */
public final class b5 implements y1 {
    public Map E;
    public HashMap F;

    /* renamed from: d, reason: collision with root package name */
    public io.sentry.protocol.v f11396d;

    /* renamed from: e, reason: collision with root package name */
    public k6 f11397e;

    /* renamed from: i, reason: collision with root package name */
    public Double f11398i;

    /* renamed from: v, reason: collision with root package name */
    public String f11399v;

    /* renamed from: w, reason: collision with root package name */
    public String f11400w;

    /* renamed from: x, reason: collision with root package name */
    public String f11401x;

    /* renamed from: y, reason: collision with root package name */
    public Double f11402y;

    @Override // io.sentry.y1
    public final void serialize(y2 y2Var, ILogger iLogger) {
        y2Var.n0();
        y2Var.C0("timestamp").o0(iLogger, ki.b.m(this.f11398i));
        y2Var.C0("type").s(this.f11401x);
        y2Var.C0(StackTraceHelper.NAME_KEY).s(this.f11399v);
        y2Var.C0("value").a0(this.f11402y);
        y2Var.C0("trace_id").o0(iLogger, this.f11396d);
        if (this.f11397e != null) {
            y2Var.C0("span_id").o0(iLogger, this.f11397e);
        }
        if (this.f11400w != null) {
            y2Var.C0("unit").o0(iLogger, this.f11400w);
        }
        if (this.E != null) {
            y2Var.C0("attributes").o0(iLogger, this.E);
        }
        HashMap hashMap = this.F;
        if (hashMap != null) {
            for (String str : hashMap.keySet()) {
                y2Var.C0(str).o0(iLogger, this.F.get(str));
            }
        }
        y2Var.O();
    }
}
