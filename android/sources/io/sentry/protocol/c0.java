package io.sentry.protocol;

import com.facebook.react.devsupport.StackTraceHelper;
import io.sentry.ILogger;
import io.sentry.y1;
import io.sentry.y2;
import java.util.Map;
import java.util.concurrent.ConcurrentHashMap;

/* loaded from: classes3.dex */
public final class c0 implements y1 {
    public Boolean E;
    public a0 F;
    public Map G;
    public ConcurrentHashMap H;

    /* renamed from: d, reason: collision with root package name */
    public Long f11765d;

    /* renamed from: e, reason: collision with root package name */
    public Integer f11766e;

    /* renamed from: i, reason: collision with root package name */
    public String f11767i;

    /* renamed from: v, reason: collision with root package name */
    public String f11768v;

    /* renamed from: w, reason: collision with root package name */
    public Boolean f11769w;

    /* renamed from: x, reason: collision with root package name */
    public Boolean f11770x;

    /* renamed from: y, reason: collision with root package name */
    public Boolean f11771y;

    @Override // io.sentry.y1
    public final void serialize(y2 y2Var, ILogger iLogger) {
        y2Var.n0();
        if (this.f11765d != null) {
            y2Var.C0(StackTraceHelper.ID_KEY).a0(this.f11765d);
        }
        if (this.f11766e != null) {
            y2Var.C0("priority").a0(this.f11766e);
        }
        if (this.f11767i != null) {
            y2Var.C0(StackTraceHelper.NAME_KEY).s(this.f11767i);
        }
        if (this.f11768v != null) {
            y2Var.C0("state").s(this.f11768v);
        }
        if (this.f11769w != null) {
            y2Var.C0("crashed").q0(this.f11769w);
        }
        if (this.f11770x != null) {
            y2Var.C0("current").q0(this.f11770x);
        }
        if (this.f11771y != null) {
            y2Var.C0("daemon").q0(this.f11771y);
        }
        if (this.E != null) {
            y2Var.C0("main").q0(this.E);
        }
        if (this.F != null) {
            y2Var.C0("stacktrace").o0(iLogger, this.F);
        }
        if (this.G != null) {
            y2Var.C0("held_locks").o0(iLogger, this.G);
        }
        ConcurrentHashMap concurrentHashMap = this.H;
        if (concurrentHashMap != null) {
            for (String str : concurrentHashMap.keySet()) {
                com.discord.chat.bridge.botuikit.a.t(this.H, str, y2Var, str, iLogger);
            }
        }
        y2Var.O();
    }
}
