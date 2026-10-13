package io.sentry.protocol;

import io.sentry.ILogger;
import io.sentry.y1;
import io.sentry.y2;
import java.util.AbstractMap;
import java.util.List;
import java.util.concurrent.ConcurrentHashMap;

/* loaded from: classes3.dex */
public final class a0 implements y1 {

    /* renamed from: d, reason: collision with root package name */
    public List f11755d;

    /* renamed from: e, reason: collision with root package name */
    public AbstractMap f11756e;

    /* renamed from: i, reason: collision with root package name */
    public Boolean f11757i;

    /* renamed from: v, reason: collision with root package name */
    public z f11758v;

    /* renamed from: w, reason: collision with root package name */
    public ConcurrentHashMap f11759w;

    public a0(List list) {
        this.f11755d = list;
    }

    @Override // io.sentry.y1
    public final void serialize(y2 y2Var, ILogger iLogger) {
        y2Var.n0();
        if (this.f11755d != null) {
            y2Var.C0("frames").o0(iLogger, this.f11755d);
        }
        if (this.f11756e != null) {
            y2Var.C0("registers").o0(iLogger, this.f11756e);
        }
        if (this.f11757i != null) {
            y2Var.C0("snapshot").q0(this.f11757i);
        }
        if (this.f11758v != null) {
            y2Var.C0("instruction_addr_adjustment").o0(iLogger, this.f11758v);
        }
        ConcurrentHashMap concurrentHashMap = this.f11759w;
        if (concurrentHashMap != null) {
            for (String str : concurrentHashMap.keySet()) {
                com.discord.chat.bridge.botuikit.a.t(this.f11759w, str, y2Var, str, iLogger);
            }
        }
        y2Var.O();
    }
}
