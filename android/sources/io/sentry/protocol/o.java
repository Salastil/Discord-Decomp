package io.sentry.protocol;

import com.facebook.react.devsupport.StackTraceHelper;
import io.sentry.ILogger;
import io.sentry.y1;
import io.sentry.y2;
import java.util.Arrays;
import java.util.concurrent.ConcurrentHashMap;

/* loaded from: classes3.dex */
public final class o implements y1 {

    /* renamed from: d, reason: collision with root package name */
    public String f11846d;

    /* renamed from: e, reason: collision with root package name */
    public String f11847e;

    /* renamed from: i, reason: collision with root package name */
    public String f11848i;

    /* renamed from: v, reason: collision with root package name */
    public String f11849v;

    /* renamed from: w, reason: collision with root package name */
    public String f11850w;

    /* renamed from: x, reason: collision with root package name */
    public Boolean f11851x;

    /* renamed from: y, reason: collision with root package name */
    public ConcurrentHashMap f11852y;

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj != null && o.class == obj.getClass()) {
            o oVar = (o) obj;
            if (d9.a.k(this.f11846d, oVar.f11846d) && d9.a.k(this.f11847e, oVar.f11847e) && d9.a.k(this.f11848i, oVar.f11848i) && d9.a.k(this.f11849v, oVar.f11849v) && d9.a.k(this.f11850w, oVar.f11850w) && d9.a.k(this.f11851x, oVar.f11851x)) {
                return true;
            }
        }
        return false;
    }

    public final int hashCode() {
        return Arrays.hashCode(new Object[]{this.f11846d, this.f11847e, this.f11848i, this.f11849v, this.f11850w, this.f11851x});
    }

    @Override // io.sentry.y1
    public final void serialize(y2 y2Var, ILogger iLogger) {
        y2Var.n0();
        if (this.f11846d != null) {
            y2Var.C0(StackTraceHelper.NAME_KEY).s(this.f11846d);
        }
        if (this.f11847e != null) {
            y2Var.C0("version").s(this.f11847e);
        }
        if (this.f11848i != null) {
            y2Var.C0("raw_description").s(this.f11848i);
        }
        if (this.f11849v != null) {
            y2Var.C0("build").s(this.f11849v);
        }
        if (this.f11850w != null) {
            y2Var.C0("kernel_version").s(this.f11850w);
        }
        if (this.f11851x != null) {
            y2Var.C0("rooted").q0(this.f11851x);
        }
        ConcurrentHashMap concurrentHashMap = this.f11852y;
        if (concurrentHashMap != null) {
            for (String str : concurrentHashMap.keySet()) {
                com.discord.chat.bridge.botuikit.a.t(this.f11852y, str, y2Var, str, iLogger);
            }
        }
        y2Var.O();
    }
}
