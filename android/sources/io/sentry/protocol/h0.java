package io.sentry.protocol;

import com.discord.notifications.renderer.NotificationRenderer;
import com.facebook.react.devsupport.StackTraceHelper;
import io.sentry.ILogger;
import io.sentry.y1;
import io.sentry.y2;
import java.util.Arrays;
import java.util.concurrent.ConcurrentHashMap;

/* loaded from: classes3.dex */
public final class h0 implements y1 {
    public ConcurrentHashMap E;

    /* renamed from: d, reason: collision with root package name */
    public String f11796d;

    /* renamed from: e, reason: collision with root package name */
    public String f11797e;

    /* renamed from: i, reason: collision with root package name */
    public String f11798i;

    /* renamed from: v, reason: collision with root package name */
    public String f11799v;

    /* renamed from: w, reason: collision with root package name */
    public String f11800w;

    /* renamed from: x, reason: collision with root package name */
    public j f11801x;

    /* renamed from: y, reason: collision with root package name */
    public ConcurrentHashMap f11802y;

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj != null && h0.class == obj.getClass()) {
            h0 h0Var = (h0) obj;
            if (d9.a.k(this.f11796d, h0Var.f11796d) && d9.a.k(this.f11797e, h0Var.f11797e) && d9.a.k(this.f11798i, h0Var.f11798i) && d9.a.k(this.f11799v, h0Var.f11799v)) {
                return true;
            }
        }
        return false;
    }

    public final int hashCode() {
        return Arrays.hashCode(new Object[]{this.f11796d, this.f11797e, this.f11798i, this.f11799v});
    }

    @Override // io.sentry.y1
    public final void serialize(y2 y2Var, ILogger iLogger) {
        y2Var.n0();
        if (this.f11796d != null) {
            y2Var.C0("email").s(this.f11796d);
        }
        if (this.f11797e != null) {
            y2Var.C0(StackTraceHelper.ID_KEY).s(this.f11797e);
        }
        if (this.f11798i != null) {
            y2Var.C0(NotificationRenderer.USERNAME).s(this.f11798i);
        }
        if (this.f11799v != null) {
            y2Var.C0("ip_address").s(this.f11799v);
        }
        if (this.f11800w != null) {
            y2Var.C0(StackTraceHelper.NAME_KEY).s(this.f11800w);
        }
        if (this.f11801x != null) {
            y2Var.C0("geo");
            this.f11801x.serialize(y2Var, iLogger);
        }
        if (this.f11802y != null) {
            y2Var.C0("data").o0(iLogger, this.f11802y);
        }
        ConcurrentHashMap concurrentHashMap = this.E;
        if (concurrentHashMap != null) {
            for (String str : concurrentHashMap.keySet()) {
                com.discord.chat.bridge.botuikit.a.t(this.E, str, y2Var, str, iLogger);
            }
        }
        y2Var.O();
    }
}
