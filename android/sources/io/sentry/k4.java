package io.sentry;

import com.discord.js_watchdog.SharedPreferencesKey;
import java.util.Date;
import java.util.HashMap;

/* loaded from: classes3.dex */
public final class k4 implements y1 {

    /* renamed from: d, reason: collision with root package name */
    public final io.sentry.protocol.v f11640d;

    /* renamed from: e, reason: collision with root package name */
    public final io.sentry.protocol.t f11641e;

    /* renamed from: i, reason: collision with root package name */
    public final n6 f11642i;

    /* renamed from: v, reason: collision with root package name */
    public Date f11643v;

    /* renamed from: w, reason: collision with root package name */
    public HashMap f11644w;

    public k4(io.sentry.protocol.v vVar, io.sentry.protocol.t tVar, n6 n6Var) {
        this.f11640d = vVar;
        this.f11641e = tVar;
        this.f11642i = n6Var;
    }

    @Override // io.sentry.y1
    public final void serialize(y2 y2Var, ILogger iLogger) {
        y2Var.n0();
        io.sentry.protocol.v vVar = this.f11640d;
        if (vVar != null) {
            y2Var.C0("event_id").o0(iLogger, vVar);
        }
        io.sentry.protocol.t tVar = this.f11641e;
        if (tVar != null) {
            y2Var.C0("sdk").o0(iLogger, tVar);
        }
        n6 n6Var = this.f11642i;
        if (n6Var != null) {
            y2Var.C0(SharedPreferencesKey.TRACE).o0(iLogger, n6Var);
        }
        if (this.f11643v != null) {
            y2Var.C0("sent_at").o0(iLogger, ki.b.F(this.f11643v));
        }
        HashMap hashMap = this.f11644w;
        if (hashMap != null) {
            for (String str : hashMap.keySet()) {
                Object obj = this.f11644w.get(str);
                y2Var.C0(str);
                y2Var.o0(iLogger, obj);
            }
        }
        y2Var.O();
    }
}
