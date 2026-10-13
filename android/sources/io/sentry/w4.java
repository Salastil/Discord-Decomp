package io.sentry;

import java.util.Arrays;
import java.util.concurrent.ConcurrentHashMap;

/* loaded from: classes3.dex */
public final class w4 implements y1 {

    /* renamed from: d, reason: collision with root package name */
    public int f12068d;

    /* renamed from: e, reason: collision with root package name */
    public String f12069e;

    /* renamed from: i, reason: collision with root package name */
    public String f12070i;

    /* renamed from: v, reason: collision with root package name */
    public String f12071v;

    /* renamed from: w, reason: collision with root package name */
    public Long f12072w;

    /* renamed from: x, reason: collision with root package name */
    public ConcurrentHashMap f12073x;

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj == null || w4.class != obj.getClass()) {
            return false;
        }
        return d9.a.k(this.f12069e, ((w4) obj).f12069e);
    }

    public final int hashCode() {
        return Arrays.hashCode(new Object[]{this.f12069e});
    }

    @Override // io.sentry.y1
    public final void serialize(y2 y2Var, ILogger iLogger) {
        y2Var.n0();
        y2Var.C0("type").g(this.f12068d);
        if (this.f12069e != null) {
            y2Var.C0("address").s(this.f12069e);
        }
        if (this.f12070i != null) {
            y2Var.C0("package_name").s(this.f12070i);
        }
        if (this.f12071v != null) {
            y2Var.C0("class_name").s(this.f12071v);
        }
        if (this.f12072w != null) {
            y2Var.C0("thread_id").a0(this.f12072w);
        }
        ConcurrentHashMap concurrentHashMap = this.f12073x;
        if (concurrentHashMap != null) {
            for (String str : concurrentHashMap.keySet()) {
                com.discord.chat.bridge.botuikit.a.t(this.f12073x, str, y2Var, str, iLogger);
            }
        }
        y2Var.O();
    }
}
