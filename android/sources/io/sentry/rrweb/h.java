package io.sentry.rrweb;

import com.facebook.react.devsupport.StackTraceHelper;
import io.sentry.ILogger;
import io.sentry.y1;
import io.sentry.y2;
import java.util.HashMap;

/* loaded from: classes3.dex */
public final class h implements y1 {

    /* renamed from: d, reason: collision with root package name */
    public int f11949d;

    /* renamed from: e, reason: collision with root package name */
    public float f11950e;

    /* renamed from: i, reason: collision with root package name */
    public float f11951i;

    /* renamed from: v, reason: collision with root package name */
    public long f11952v;

    /* renamed from: w, reason: collision with root package name */
    public HashMap f11953w;

    @Override // io.sentry.y1
    public final void serialize(y2 y2Var, ILogger iLogger) {
        y2Var.n0();
        y2Var.C0(StackTraceHelper.ID_KEY).g(this.f11949d);
        y2Var.C0("x").m(this.f11950e);
        y2Var.C0("y").m(this.f11951i);
        y2Var.C0("timeOffset").g(this.f11952v);
        HashMap hashMap = this.f11953w;
        if (hashMap != null) {
            for (String str : hashMap.keySet()) {
                Object obj = this.f11953w.get(str);
                y2Var.C0(str);
                y2Var.o0(iLogger, obj);
            }
        }
        y2Var.O();
    }
}
