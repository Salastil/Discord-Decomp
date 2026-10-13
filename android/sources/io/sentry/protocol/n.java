package io.sentry.protocol;

import io.sentry.ILogger;
import io.sentry.y1;
import io.sentry.y2;
import java.util.List;
import java.util.concurrent.ConcurrentHashMap;

/* loaded from: classes3.dex */
public final class n implements y1 {

    /* renamed from: d, reason: collision with root package name */
    public String f11842d;

    /* renamed from: e, reason: collision with root package name */
    public String f11843e;

    /* renamed from: i, reason: collision with root package name */
    public List f11844i;

    /* renamed from: v, reason: collision with root package name */
    public ConcurrentHashMap f11845v;

    @Override // io.sentry.y1
    public final void serialize(y2 y2Var, ILogger iLogger) {
        y2Var.n0();
        if (this.f11842d != null) {
            y2Var.C0("formatted").s(this.f11842d);
        }
        if (this.f11843e != null) {
            y2Var.C0("message").s(this.f11843e);
        }
        List list = this.f11844i;
        if (list != null && !list.isEmpty()) {
            y2Var.C0("params").o0(iLogger, this.f11844i);
        }
        ConcurrentHashMap concurrentHashMap = this.f11845v;
        if (concurrentHashMap != null) {
            for (String str : concurrentHashMap.keySet()) {
                com.discord.chat.bridge.botuikit.a.t(this.f11845v, str, y2Var, str, iLogger);
            }
        }
        y2Var.O();
    }
}
