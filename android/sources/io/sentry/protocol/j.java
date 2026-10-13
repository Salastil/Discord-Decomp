package io.sentry.protocol;

import io.sentry.ILogger;
import io.sentry.y1;
import io.sentry.y2;
import java.util.concurrent.ConcurrentHashMap;

/* loaded from: classes3.dex */
public final class j implements y1 {

    /* renamed from: d, reason: collision with root package name */
    public String f11813d;

    /* renamed from: e, reason: collision with root package name */
    public String f11814e;

    /* renamed from: i, reason: collision with root package name */
    public String f11815i;

    /* renamed from: v, reason: collision with root package name */
    public ConcurrentHashMap f11816v;

    @Override // io.sentry.y1
    public final void serialize(y2 y2Var, ILogger iLogger) {
        y2Var.n0();
        if (this.f11813d != null) {
            y2Var.C0("city").s(this.f11813d);
        }
        if (this.f11814e != null) {
            y2Var.C0("country_code").s(this.f11814e);
        }
        if (this.f11815i != null) {
            y2Var.C0("region").s(this.f11815i);
        }
        ConcurrentHashMap concurrentHashMap = this.f11816v;
        if (concurrentHashMap != null) {
            for (String str : concurrentHashMap.keySet()) {
                com.discord.chat.bridge.botuikit.a.t(this.f11816v, str, y2Var, str, iLogger);
            }
        }
        y2Var.O();
    }
}
