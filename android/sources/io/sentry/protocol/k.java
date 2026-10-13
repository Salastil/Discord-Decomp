package io.sentry.protocol;

import com.facebook.react.devsupport.StackTraceHelper;
import io.sentry.ILogger;
import io.sentry.y1;
import io.sentry.y2;
import java.util.Arrays;
import java.util.concurrent.ConcurrentHashMap;

/* loaded from: classes3.dex */
public final class k implements y1 {
    public String E;
    public String F;
    public ConcurrentHashMap G;

    /* renamed from: d, reason: collision with root package name */
    public String f11824d;

    /* renamed from: e, reason: collision with root package name */
    public Integer f11825e;

    /* renamed from: i, reason: collision with root package name */
    public String f11826i;

    /* renamed from: v, reason: collision with root package name */
    public String f11827v;

    /* renamed from: w, reason: collision with root package name */
    public Integer f11828w;

    /* renamed from: x, reason: collision with root package name */
    public String f11829x;

    /* renamed from: y, reason: collision with root package name */
    public Boolean f11830y;

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj != null && k.class == obj.getClass()) {
            k kVar = (k) obj;
            if (d9.a.k(this.f11824d, kVar.f11824d) && d9.a.k(this.f11825e, kVar.f11825e) && d9.a.k(this.f11826i, kVar.f11826i) && d9.a.k(this.f11827v, kVar.f11827v) && d9.a.k(this.f11828w, kVar.f11828w) && d9.a.k(this.f11829x, kVar.f11829x) && d9.a.k(this.f11830y, kVar.f11830y) && d9.a.k(this.E, kVar.E) && d9.a.k(this.F, kVar.F)) {
                return true;
            }
        }
        return false;
    }

    public final int hashCode() {
        return Arrays.hashCode(new Object[]{this.f11824d, this.f11825e, this.f11826i, this.f11827v, this.f11828w, this.f11829x, this.f11830y, this.E, this.F});
    }

    @Override // io.sentry.y1
    public final void serialize(y2 y2Var, ILogger iLogger) {
        y2Var.n0();
        if (this.f11824d != null) {
            y2Var.C0(StackTraceHelper.NAME_KEY).s(this.f11824d);
        }
        if (this.f11825e != null) {
            y2Var.C0(StackTraceHelper.ID_KEY).a0(this.f11825e);
        }
        if (this.f11826i != null) {
            y2Var.C0("vendor_id").s(this.f11826i);
        }
        if (this.f11827v != null) {
            y2Var.C0("vendor_name").s(this.f11827v);
        }
        if (this.f11828w != null) {
            y2Var.C0("memory_size").a0(this.f11828w);
        }
        if (this.f11829x != null) {
            y2Var.C0("api_type").s(this.f11829x);
        }
        if (this.f11830y != null) {
            y2Var.C0("multi_threaded_rendering").q0(this.f11830y);
        }
        if (this.E != null) {
            y2Var.C0("version").s(this.E);
        }
        if (this.F != null) {
            y2Var.C0("npot_support").s(this.F);
        }
        ConcurrentHashMap concurrentHashMap = this.G;
        if (concurrentHashMap != null) {
            for (String str : concurrentHashMap.keySet()) {
                com.discord.chat.bridge.botuikit.a.t(this.G, str, y2Var, str, iLogger);
            }
        }
        y2Var.O();
    }
}
