package io.sentry.protocol;

import io.sentry.ILogger;
import io.sentry.y1;
import io.sentry.y2;
import java.util.HashMap;

/* loaded from: classes3.dex */
public final class s implements y1 {

    /* renamed from: d, reason: collision with root package name */
    public String f11878d;

    /* renamed from: e, reason: collision with root package name */
    public Integer f11879e;

    /* renamed from: i, reason: collision with root package name */
    public Integer f11880i;

    /* renamed from: v, reason: collision with root package name */
    public Integer f11881v;

    /* renamed from: w, reason: collision with root package name */
    public HashMap f11882w;

    @Override // io.sentry.y1
    public final void serialize(y2 y2Var, ILogger iLogger) {
        y2Var.n0();
        if (this.f11878d != null) {
            y2Var.C0("sdk_name").s(this.f11878d);
        }
        if (this.f11879e != null) {
            y2Var.C0("version_major").a0(this.f11879e);
        }
        if (this.f11880i != null) {
            y2Var.C0("version_minor").a0(this.f11880i);
        }
        if (this.f11881v != null) {
            y2Var.C0("version_patchlevel").a0(this.f11881v);
        }
        HashMap hashMap = this.f11882w;
        if (hashMap != null) {
            for (String str : hashMap.keySet()) {
                y2Var.C0(str).o0(iLogger, this.f11882w.get(str));
            }
        }
        y2Var.O();
    }
}
