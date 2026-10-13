package io.sentry.protocol;

import io.sentry.ILogger;
import io.sentry.y1;
import io.sentry.y2;
import java.util.concurrent.ConcurrentHashMap;

/* loaded from: classes3.dex */
public final class f0 implements y1 {

    /* renamed from: d, reason: collision with root package name */
    public final String f11789d;

    /* renamed from: e, reason: collision with root package name */
    public ConcurrentHashMap f11790e;

    public f0(String str) {
        this.f11789d = str;
    }

    @Override // io.sentry.y1
    public final void serialize(y2 y2Var, ILogger iLogger) {
        y2Var.n0();
        String str = this.f11789d;
        if (str != null) {
            y2Var.C0("source").o0(iLogger, str);
        }
        ConcurrentHashMap concurrentHashMap = this.f11790e;
        if (concurrentHashMap != null) {
            for (String str2 : concurrentHashMap.keySet()) {
                com.discord.chat.bridge.botuikit.a.t(this.f11790e, str2, y2Var, str2, iLogger);
            }
        }
        y2Var.O();
    }
}
