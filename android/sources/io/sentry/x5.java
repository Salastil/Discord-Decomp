package io.sentry;

import java.io.File;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Date;
import java.util.HashMap;
import java.util.List;

/* loaded from: classes3.dex */
public final class x5 extends f4 implements y1 {
    public File M;
    public int Q;
    public Date S;
    public HashMap W;
    public io.sentry.protocol.v P = new io.sentry.protocol.v();
    public String N = "replay_event";
    public w5 O = w5.SESSION;
    public List U = new ArrayList();
    public List V = new ArrayList();
    public List T = new ArrayList();
    public Date R = ki.b.r();

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj != null && x5.class == obj.getClass()) {
            x5 x5Var = (x5) obj;
            if (this.Q == x5Var.Q && d9.a.k(this.N, x5Var.N) && this.O == x5Var.O && d9.a.k(this.P, x5Var.P) && d9.a.k(this.T, x5Var.T) && d9.a.k(this.U, x5Var.U) && d9.a.k(this.V, x5Var.V)) {
                return true;
            }
        }
        return false;
    }

    public final int hashCode() {
        return Arrays.hashCode(new Object[]{this.N, this.O, this.P, Integer.valueOf(this.Q), this.T, this.U, this.V});
    }

    @Override // io.sentry.y1
    public final void serialize(y2 y2Var, ILogger iLogger) {
        y2Var.n0();
        y2Var.C0("type").s(this.N);
        y2Var.C0("replay_type").o0(iLogger, this.O);
        y2Var.C0("segment_id").g(this.Q);
        y2Var.C0("timestamp").o0(iLogger, this.R);
        if (this.P != null) {
            y2Var.C0("replay_id").o0(iLogger, this.P);
        }
        if (this.S != null) {
            y2Var.C0("replay_start_timestamp").o0(iLogger, this.S);
        }
        if (this.T != null) {
            y2Var.C0("urls").o0(iLogger, this.T);
        }
        if (this.U != null) {
            y2Var.C0("error_ids").o0(iLogger, this.U);
        }
        if (this.V != null) {
            y2Var.C0("trace_ids").o0(iLogger, this.V);
        }
        nf.e.z(this, y2Var, iLogger);
        HashMap hashMap = this.W;
        if (hashMap != null) {
            for (String str : hashMap.keySet()) {
                y2Var.C0(str).o0(iLogger, this.W.get(str));
            }
        }
        y2Var.O();
    }
}
