package io.sentry.protocol;

import io.sentry.ILogger;
import io.sentry.y1;
import io.sentry.y2;
import java.util.HashMap;
import java.util.List;

/* loaded from: classes3.dex */
public final class i0 implements y1 {

    /* renamed from: d, reason: collision with root package name */
    public final String f11810d;

    /* renamed from: e, reason: collision with root package name */
    public final List f11811e;

    /* renamed from: i, reason: collision with root package name */
    public HashMap f11812i;

    public i0(String str, List list) {
        this.f11810d = str;
        this.f11811e = list;
    }

    @Override // io.sentry.y1
    public final void serialize(y2 y2Var, ILogger iLogger) {
        y2Var.n0();
        String str = this.f11810d;
        if (str != null) {
            y2Var.C0("rendering_system").s(str);
        }
        List list = this.f11811e;
        if (list != null) {
            y2Var.C0("windows").o0(iLogger, list);
        }
        HashMap hashMap = this.f11812i;
        if (hashMap != null) {
            for (String str2 : hashMap.keySet()) {
                y2Var.C0(str2).o0(iLogger, this.f11812i.get(str2));
            }
        }
        y2Var.O();
    }
}
