package io.sentry.clientreport;

import io.sentry.ILogger;
import io.sentry.y1;
import io.sentry.y2;
import java.util.ArrayList;
import java.util.Date;
import java.util.HashMap;

/* loaded from: classes3.dex */
public final class b implements y1 {

    /* renamed from: d, reason: collision with root package name */
    public final Date f11462d;

    /* renamed from: e, reason: collision with root package name */
    public final ArrayList f11463e;

    /* renamed from: i, reason: collision with root package name */
    public HashMap f11464i;

    public b(Date date, ArrayList arrayList) {
        this.f11462d = date;
        this.f11463e = arrayList;
    }

    @Override // io.sentry.y1
    public final void serialize(y2 y2Var, ILogger iLogger) {
        y2Var.n0();
        y2Var.C0("timestamp").s(ki.b.F(this.f11462d));
        y2Var.C0("discarded_events").o0(iLogger, this.f11463e);
        HashMap hashMap = this.f11464i;
        if (hashMap != null) {
            for (String str : hashMap.keySet()) {
                y2Var.C0(str).o0(iLogger, this.f11464i.get(str));
            }
        }
        y2Var.O();
    }
}
