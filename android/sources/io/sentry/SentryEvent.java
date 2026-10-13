package io.sentry;

import java.util.AbstractMap;
import java.util.ArrayList;
import java.util.Date;
import java.util.Iterator;
import java.util.List;
import java.util.concurrent.ConcurrentHashMap;

/* loaded from: classes3.dex */
public final class SentryEvent extends f4 implements y1 {
    public Date M;
    public io.sentry.protocol.n N;
    public String O;
    public e6 P;
    public e6 Q;
    public SentryLevel R;
    public String S;
    public List T;
    public ConcurrentHashMap U;
    public AbstractMap V;

    public SentryEvent(Throwable th2) {
        this();
        this.G = th2;
    }

    public final ArrayList d() {
        e6 e6Var = this.Q;
        if (e6Var == null) {
            return null;
        }
        return e6Var.a;
    }

    public final io.sentry.protocol.u e() {
        Boolean bool;
        e6 e6Var = this.Q;
        if (e6Var == null) {
            return null;
        }
        Iterator it = e6Var.a.iterator();
        while (it.hasNext()) {
            io.sentry.protocol.u uVar = (io.sentry.protocol.u) it.next();
            io.sentry.protocol.m mVar = uVar.f11893x;
            if (mVar != null && (bool = mVar.f11838v) != null && !bool.booleanValue()) {
                return uVar;
            }
        }
        return null;
    }

    public final boolean f() {
        e6 e6Var = this.Q;
        return (e6Var == null || e6Var.a.isEmpty()) ? false : true;
    }

    @Override // io.sentry.y1
    public final void serialize(y2 y2Var, ILogger iLogger) {
        y2Var.n0();
        y2Var.C0("timestamp").o0(iLogger, this.M);
        if (this.N != null) {
            y2Var.C0("message").o0(iLogger, this.N);
        }
        if (this.O != null) {
            y2Var.C0("logger").s(this.O);
        }
        e6 e6Var = this.P;
        if (e6Var != null && !e6Var.a.isEmpty()) {
            y2Var.C0("threads");
            y2Var.n0();
            y2Var.C0("values").o0(iLogger, this.P.a);
            y2Var.O();
        }
        e6 e6Var2 = this.Q;
        if (e6Var2 != null && !e6Var2.a.isEmpty()) {
            y2Var.C0("exception");
            y2Var.n0();
            y2Var.C0("values").o0(iLogger, this.Q.a);
            y2Var.O();
        }
        if (this.R != null) {
            y2Var.C0("level").o0(iLogger, this.R);
        }
        if (this.S != null) {
            y2Var.C0("transaction").s(this.S);
        }
        if (this.T != null) {
            y2Var.C0("fingerprint").o0(iLogger, this.T);
        }
        if (this.V != null) {
            y2Var.C0("modules").o0(iLogger, this.V);
        }
        nf.e.z(this, y2Var, iLogger);
        ConcurrentHashMap concurrentHashMap = this.U;
        if (concurrentHashMap != null) {
            for (String str : concurrentHashMap.keySet()) {
                com.discord.chat.bridge.botuikit.a.t(this.U, str, y2Var, str, iLogger);
            }
        }
        y2Var.O();
    }

    /* JADX WARN: Illegal instructions before constructor call */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public SentryEvent() {
        super(r0);
        io.sentry.protocol.v vVar = new io.sentry.protocol.v();
        Date r5 = ki.b.r();
        this.M = r5;
    }
}
