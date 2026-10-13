package io.sentry.protocol;

import com.facebook.react.devsupport.StackTraceHelper;
import io.sentry.ILogger;
import io.sentry.y1;
import io.sentry.y2;
import java.util.concurrent.ConcurrentHashMap;

/* loaded from: classes3.dex */
public final class x implements y1 {

    /* renamed from: d, reason: collision with root package name */
    public String f11900d;

    /* renamed from: e, reason: collision with root package name */
    public String f11901e;

    /* renamed from: i, reason: collision with root package name */
    public String f11902i;

    /* renamed from: v, reason: collision with root package name */
    public ConcurrentHashMap f11903v;

    @Override // io.sentry.y1
    public final void serialize(y2 y2Var, ILogger iLogger) {
        y2Var.n0();
        if (this.f11900d != null) {
            y2Var.C0(StackTraceHelper.NAME_KEY).s(this.f11900d);
        }
        if (this.f11901e != null) {
            y2Var.C0("version").s(this.f11901e);
        }
        if (this.f11902i != null) {
            y2Var.C0("raw_description").s(this.f11902i);
        }
        ConcurrentHashMap concurrentHashMap = this.f11903v;
        if (concurrentHashMap != null) {
            for (String str : concurrentHashMap.keySet()) {
                com.discord.chat.bridge.botuikit.a.t(this.f11903v, str, y2Var, str, iLogger);
            }
        }
        y2Var.O();
    }
}
