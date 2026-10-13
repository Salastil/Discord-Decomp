package io.sentry.protocol;

import io.sentry.ILogger;
import io.sentry.y1;
import io.sentry.y2;
import java.util.Arrays;
import java.util.concurrent.ConcurrentHashMap;

/* loaded from: classes3.dex */
public final class e0 implements y1 {

    /* renamed from: d, reason: collision with root package name */
    public String[] f11775d;

    /* renamed from: e, reason: collision with root package name */
    public ConcurrentHashMap f11776e;

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj == null || e0.class != obj.getClass()) {
            return false;
        }
        return Arrays.equals(this.f11775d, ((e0) obj).f11775d);
    }

    public final int hashCode() {
        return Arrays.hashCode(this.f11775d);
    }

    @Override // io.sentry.y1
    public final void serialize(y2 y2Var, ILogger iLogger) {
        y2Var.n0();
        if (this.f11775d != null) {
            y2Var.C0("active_profiles").o0(iLogger, this.f11775d);
        }
        ConcurrentHashMap concurrentHashMap = this.f11776e;
        if (concurrentHashMap != null) {
            for (String str : concurrentHashMap.keySet()) {
                com.discord.chat.bridge.botuikit.a.t(this.f11776e, str, y2Var, str, iLogger);
            }
        }
        y2Var.O();
    }
}
