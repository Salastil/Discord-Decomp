package io.sentry.rrweb;

import io.sentry.ILogger;
import io.sentry.y1;
import io.sentry.y2;
import java.util.HashMap;

/* loaded from: classes3.dex */
public final class k extends b implements y1 {

    /* renamed from: i, reason: collision with root package name */
    public String f11962i;

    /* renamed from: v, reason: collision with root package name */
    public HashMap f11963v;

    @Override // io.sentry.y1
    public final void serialize(y2 y2Var, ILogger iLogger) {
        y2Var.n0();
        y2Var.C0("type").o0(iLogger, this.f11942d);
        y2Var.C0("timestamp").g(this.f11943e);
        y2Var.C0("data");
        y2Var.n0();
        y2Var.C0("tag").s(this.f11962i);
        y2Var.C0("payload");
        y2Var.n0();
        HashMap hashMap = this.f11963v;
        if (hashMap != null) {
            for (String str : hashMap.keySet()) {
                Object obj = hashMap.get(str);
                y2Var.C0(str);
                y2Var.o0(iLogger, obj);
            }
        }
        y2Var.O();
        y2Var.O();
        y2Var.O();
    }
}
