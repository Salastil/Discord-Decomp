package io.sentry.rrweb;

import io.sentry.ILogger;
import io.sentry.y1;
import io.sentry.y2;
import java.util.HashMap;
import java.util.List;

/* loaded from: classes3.dex */
public final class i extends e implements y1 {

    /* renamed from: v, reason: collision with root package name */
    public int f11954v;

    /* renamed from: w, reason: collision with root package name */
    public List f11955w;

    /* renamed from: x, reason: collision with root package name */
    public HashMap f11956x;

    /* renamed from: y, reason: collision with root package name */
    public HashMap f11957y;

    public i() {
        super(d.TouchMove);
    }

    @Override // io.sentry.y1
    public final void serialize(y2 y2Var, ILogger iLogger) {
        y2Var.n0();
        y2Var.C0("type").o0(iLogger, this.f11942d);
        y2Var.C0("timestamp").g(this.f11943e);
        y2Var.C0("data");
        y2Var.n0();
        y2Var.C0("source").o0(iLogger, this.f11944i);
        List list = this.f11955w;
        if (list != null && !list.isEmpty()) {
            y2Var.C0("positions").o0(iLogger, this.f11955w);
        }
        y2Var.C0("pointerId").g(this.f11954v);
        HashMap hashMap = this.f11957y;
        if (hashMap != null) {
            for (String str : hashMap.keySet()) {
                Object obj = this.f11957y.get(str);
                y2Var.C0(str);
                y2Var.o0(iLogger, obj);
            }
        }
        y2Var.O();
        HashMap hashMap2 = this.f11956x;
        if (hashMap2 != null) {
            for (String str2 : hashMap2.keySet()) {
                Object obj2 = this.f11956x.get(str2);
                y2Var.C0(str2);
                y2Var.o0(iLogger, obj2);
            }
        }
        y2Var.O();
    }
}
