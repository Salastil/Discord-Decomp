package io.sentry.protocol;

import io.sentry.ILogger;
import io.sentry.y1;
import io.sentry.y2;
import java.util.Arrays;
import java.util.concurrent.ConcurrentHashMap;

/* loaded from: classes3.dex */
public final class g implements y1 {

    /* renamed from: d, reason: collision with root package name */
    public String f11791d;

    /* renamed from: e, reason: collision with root package name */
    public boolean f11792e;

    /* renamed from: i, reason: collision with root package name */
    public ConcurrentHashMap f11793i;

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj != null && g.class == obj.getClass()) {
            g gVar = (g) obj;
            if (d9.a.k(this.f11791d, gVar.f11791d) && d9.a.k(Boolean.valueOf(this.f11792e), Boolean.valueOf(gVar.f11792e))) {
                return true;
            }
        }
        return false;
    }

    public final int hashCode() {
        return Arrays.hashCode(new Object[]{this.f11791d, Boolean.valueOf(this.f11792e)});
    }

    @Override // io.sentry.y1
    public final void serialize(y2 y2Var, ILogger iLogger) {
        y2Var.n0();
        y2Var.C0("flag").s(this.f11791d);
        y2Var.C0("result").H(this.f11792e);
        ConcurrentHashMap concurrentHashMap = this.f11793i;
        if (concurrentHashMap != null) {
            for (String str : concurrentHashMap.keySet()) {
                y2Var.C0(str).o0(iLogger, this.f11793i.get(str));
            }
        }
        y2Var.O();
    }
}
