package io.sentry.protocol;

import io.sentry.ILogger;
import io.sentry.y1;
import io.sentry.y2;
import java.util.Arrays;
import java.util.List;
import java.util.concurrent.ConcurrentHashMap;

/* loaded from: classes3.dex */
public final class h implements y1 {

    /* renamed from: d, reason: collision with root package name */
    public final List f11794d;

    /* renamed from: e, reason: collision with root package name */
    public ConcurrentHashMap f11795e;

    public h(List list) {
        this.f11794d = list;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj == null || h.class != obj.getClass()) {
            return false;
        }
        return d9.a.k(this.f11794d, ((h) obj).f11794d);
    }

    public final int hashCode() {
        return Arrays.hashCode(new Object[]{this.f11794d});
    }

    @Override // io.sentry.y1
    public final void serialize(y2 y2Var, ILogger iLogger) {
        y2Var.n0();
        y2Var.C0("values").o0(iLogger, this.f11794d);
        ConcurrentHashMap concurrentHashMap = this.f11795e;
        if (concurrentHashMap != null) {
            for (String str : concurrentHashMap.keySet()) {
                y2Var.C0(str).o0(iLogger, this.f11795e.get(str));
            }
        }
        y2Var.O();
    }
}
