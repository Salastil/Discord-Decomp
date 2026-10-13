package io.sentry.clientreport;

import io.sentry.ILogger;
import io.sentry.y1;
import io.sentry.y2;
import java.util.HashMap;

/* loaded from: classes3.dex */
public final class e implements y1 {

    /* renamed from: d, reason: collision with root package name */
    public final String f11466d;

    /* renamed from: e, reason: collision with root package name */
    public final String f11467e;

    /* renamed from: i, reason: collision with root package name */
    public final Long f11468i;

    /* renamed from: v, reason: collision with root package name */
    public HashMap f11469v;

    public e(Long l6, String str, String str2) {
        this.f11466d = str;
        this.f11467e = str2;
        this.f11468i = l6;
    }

    @Override // io.sentry.y1
    public final void serialize(y2 y2Var, ILogger iLogger) {
        y2Var.n0();
        y2Var.C0("reason").s(this.f11466d);
        y2Var.C0("category").s(this.f11467e);
        y2Var.C0("quantity").a0(this.f11468i);
        HashMap hashMap = this.f11469v;
        if (hashMap != null) {
            for (String str : hashMap.keySet()) {
                y2Var.C0(str).o0(iLogger, this.f11469v.get(str));
            }
        }
        y2Var.O();
    }

    public final String toString() {
        return "DiscardedEvent{reason='" + this.f11466d + "', category='" + this.f11467e + "', quantity=" + this.f11468i + '}';
    }
}
