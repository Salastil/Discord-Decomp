package io.sentry.protocol;

import com.facebook.react.devsupport.StackTraceHelper;
import io.sentry.ILogger;
import io.sentry.y1;
import io.sentry.y2;
import java.util.Arrays;
import java.util.concurrent.ConcurrentHashMap;

/* loaded from: classes3.dex */
public final class b implements y1 {

    /* renamed from: d, reason: collision with root package name */
    public String f11760d;

    /* renamed from: e, reason: collision with root package name */
    public String f11761e;

    /* renamed from: i, reason: collision with root package name */
    public ConcurrentHashMap f11762i;

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj != null && b.class == obj.getClass()) {
            b bVar = (b) obj;
            if (d9.a.k(this.f11760d, bVar.f11760d) && d9.a.k(this.f11761e, bVar.f11761e)) {
                return true;
            }
        }
        return false;
    }

    public final int hashCode() {
        return Arrays.hashCode(new Object[]{this.f11760d, this.f11761e});
    }

    @Override // io.sentry.y1
    public final void serialize(y2 y2Var, ILogger iLogger) {
        y2Var.n0();
        if (this.f11760d != null) {
            y2Var.C0(StackTraceHelper.NAME_KEY).s(this.f11760d);
        }
        if (this.f11761e != null) {
            y2Var.C0("version").s(this.f11761e);
        }
        ConcurrentHashMap concurrentHashMap = this.f11762i;
        if (concurrentHashMap != null) {
            for (String str : concurrentHashMap.keySet()) {
                com.discord.chat.bridge.botuikit.a.t(this.f11762i, str, y2Var, str, iLogger);
            }
        }
        y2Var.O();
    }
}
