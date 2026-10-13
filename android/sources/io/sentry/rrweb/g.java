package io.sentry.rrweb;

import com.facebook.react.devsupport.StackTraceHelper;
import io.sentry.ILogger;
import io.sentry.y1;
import io.sentry.y2;
import java.util.HashMap;

/* loaded from: classes3.dex */
public final class g extends e implements y1 {
    public int E;
    public int F;
    public HashMap G;
    public HashMap H;

    /* renamed from: v, reason: collision with root package name */
    public f f11945v;

    /* renamed from: w, reason: collision with root package name */
    public int f11946w;

    /* renamed from: x, reason: collision with root package name */
    public float f11947x;

    /* renamed from: y, reason: collision with root package name */
    public float f11948y;

    public g() {
        super(d.MouseInteraction);
        this.E = 2;
    }

    @Override // io.sentry.y1
    public final void serialize(y2 y2Var, ILogger iLogger) {
        y2Var.n0();
        y2Var.C0("type").o0(iLogger, this.f11942d);
        y2Var.C0("timestamp").g(this.f11943e);
        y2Var.C0("data");
        y2Var.n0();
        y2Var.C0("source").o0(iLogger, this.f11944i);
        y2Var.C0("type").o0(iLogger, this.f11945v);
        y2Var.C0(StackTraceHelper.ID_KEY).g(this.f11946w);
        y2Var.C0("x").m(this.f11947x);
        y2Var.C0("y").m(this.f11948y);
        y2Var.C0("pointerType").g(this.E);
        y2Var.C0("pointerId").g(this.F);
        HashMap hashMap = this.H;
        if (hashMap != null) {
            for (String str : hashMap.keySet()) {
                Object obj = this.H.get(str);
                y2Var.C0(str);
                y2Var.o0(iLogger, obj);
            }
        }
        y2Var.O();
        HashMap hashMap2 = this.G;
        if (hashMap2 != null) {
            for (String str2 : hashMap2.keySet()) {
                Object obj2 = this.G.get(str2);
                y2Var.C0(str2);
                y2Var.o0(iLogger, obj2);
            }
        }
        y2Var.O();
    }
}
