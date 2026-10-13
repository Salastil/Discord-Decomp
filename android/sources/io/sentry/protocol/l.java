package io.sentry.protocol;

import io.sentry.ILogger;
import io.sentry.y1;
import io.sentry.y2;
import java.util.AbstractMap;
import java.util.HashMap;
import java.util.concurrent.ConcurrentHashMap;

/* loaded from: classes3.dex */
public final class l implements y1 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f11831d = 1;

    /* renamed from: e, reason: collision with root package name */
    public String f11832e;

    /* renamed from: i, reason: collision with root package name */
    public Object f11833i;

    /* renamed from: v, reason: collision with root package name */
    public AbstractMap f11834v;

    public /* synthetic */ l() {
    }

    @Override // io.sentry.y1
    public final void serialize(y2 y2Var, ILogger iLogger) {
        switch (this.f11831d) {
            case 0:
                y2Var.n0();
                y2Var.C0("value").a0((Number) this.f11833i);
                String str = this.f11832e;
                if (str != null) {
                    y2Var.C0("unit").s(str);
                }
                ConcurrentHashMap concurrentHashMap = (ConcurrentHashMap) this.f11834v;
                if (concurrentHashMap != null) {
                    for (String str2 : concurrentHashMap.keySet()) {
                        com.discord.chat.bridge.botuikit.a.t((ConcurrentHashMap) this.f11834v, str2, y2Var, str2, iLogger);
                    }
                }
                y2Var.O();
                break;
            default:
                y2Var.n0();
                y2Var.C0("type").o0(iLogger, this.f11832e);
                y2Var.C0("value").o0(iLogger, this.f11833i);
                HashMap hashMap = (HashMap) this.f11834v;
                if (hashMap != null) {
                    for (String str3 : hashMap.keySet()) {
                        y2Var.C0(str3).o0(iLogger, ((HashMap) this.f11834v).get(str3));
                    }
                }
                y2Var.O();
                break;
        }
    }

    public l(Number number, String str) {
        this.f11833i = number;
        this.f11832e = str;
    }
}
