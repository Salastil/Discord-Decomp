package io.sentry;

import java.util.Arrays;
import java.util.concurrent.ConcurrentHashMap;

/* loaded from: classes3.dex */
public final class e3 implements y1 {

    /* renamed from: d, reason: collision with root package name */
    public io.sentry.protocol.v f11530d;

    /* renamed from: e, reason: collision with root package name */
    public ConcurrentHashMap f11531e;

    public e3(io.sentry.protocol.v vVar) {
        this.f11530d = vVar;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj instanceof e3) {
            return this.f11530d.equals(((e3) obj).f11530d);
        }
        return false;
    }

    public final int hashCode() {
        return Arrays.hashCode(new Object[]{this.f11530d});
    }

    @Override // io.sentry.y1
    public final void serialize(y2 y2Var, ILogger iLogger) {
        y2Var.n0();
        y2Var.C0("profiler_id").o0(iLogger, this.f11530d);
        ConcurrentHashMap concurrentHashMap = this.f11531e;
        if (concurrentHashMap != null) {
            for (String str : concurrentHashMap.keySet()) {
                y2Var.C0(str).o0(iLogger, this.f11531e.get(str));
            }
        }
        y2Var.O();
    }
}
