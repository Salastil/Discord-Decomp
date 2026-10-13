package io.sentry.protocol;

import io.sentry.ILogger;
import io.sentry.y1;
import io.sentry.y2;
import java.util.concurrent.ConcurrentHashMap;

/* loaded from: classes3.dex */
public final class r implements y1 {

    /* renamed from: d, reason: collision with root package name */
    public String f11872d;

    /* renamed from: e, reason: collision with root package name */
    public ConcurrentHashMap f11873e;

    /* renamed from: i, reason: collision with root package name */
    public Integer f11874i;

    /* renamed from: v, reason: collision with root package name */
    public Long f11875v;

    /* renamed from: w, reason: collision with root package name */
    public Object f11876w;

    /* renamed from: x, reason: collision with root package name */
    public ConcurrentHashMap f11877x;

    @Override // io.sentry.y1
    public final void serialize(y2 y2Var, ILogger iLogger) {
        y2Var.n0();
        if (this.f11872d != null) {
            y2Var.C0("cookies").s(this.f11872d);
        }
        if (this.f11873e != null) {
            y2Var.C0("headers").o0(iLogger, this.f11873e);
        }
        if (this.f11874i != null) {
            y2Var.C0("status_code").o0(iLogger, this.f11874i);
        }
        if (this.f11875v != null) {
            y2Var.C0("body_size").o0(iLogger, this.f11875v);
        }
        if (this.f11876w != null) {
            y2Var.C0("data").o0(iLogger, this.f11876w);
        }
        ConcurrentHashMap concurrentHashMap = this.f11877x;
        if (concurrentHashMap != null) {
            for (String str : concurrentHashMap.keySet()) {
                com.discord.chat.bridge.botuikit.a.t(this.f11877x, str, y2Var, str, iLogger);
            }
        }
        y2Var.O();
    }
}
