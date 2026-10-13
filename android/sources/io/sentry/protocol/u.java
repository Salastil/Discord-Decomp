package io.sentry.protocol;

import io.sentry.ILogger;
import io.sentry.y1;
import io.sentry.y2;
import java.util.HashMap;

/* loaded from: classes3.dex */
public final class u implements y1 {

    /* renamed from: d, reason: collision with root package name */
    public String f11888d;

    /* renamed from: e, reason: collision with root package name */
    public String f11889e;

    /* renamed from: i, reason: collision with root package name */
    public String f11890i;

    /* renamed from: v, reason: collision with root package name */
    public Long f11891v;

    /* renamed from: w, reason: collision with root package name */
    public a0 f11892w;

    /* renamed from: x, reason: collision with root package name */
    public m f11893x;

    /* renamed from: y, reason: collision with root package name */
    public HashMap f11894y;

    @Override // io.sentry.y1
    public final void serialize(y2 y2Var, ILogger iLogger) {
        y2Var.n0();
        if (this.f11888d != null) {
            y2Var.C0("type").s(this.f11888d);
        }
        if (this.f11889e != null) {
            y2Var.C0("value").s(this.f11889e);
        }
        if (this.f11890i != null) {
            y2Var.C0("module").s(this.f11890i);
        }
        if (this.f11891v != null) {
            y2Var.C0("thread_id").a0(this.f11891v);
        }
        if (this.f11892w != null) {
            y2Var.C0("stacktrace").o0(iLogger, this.f11892w);
        }
        if (this.f11893x != null) {
            y2Var.C0("mechanism").o0(iLogger, this.f11893x);
        }
        HashMap hashMap = this.f11894y;
        if (hashMap != null) {
            for (String str : hashMap.keySet()) {
                y2Var.C0(str).o0(iLogger, this.f11894y.get(str));
            }
        }
        y2Var.O();
    }
}
