package io.sentry;

/* loaded from: classes3.dex */
public final class o6 {
    public final v5 a;

    public o6(v5 v5Var) {
        this.a = v5Var;
    }

    public final f9.b a(e4.l lVar) {
        Double d6 = (Double) lVar.f7960i;
        p6 p6Var = (p6) lVar.f7959e;
        f9.b bVar = p6Var.f11613v;
        if (bVar != null) {
            return e4.f.d(bVar);
        }
        v5 v5Var = this.a;
        v5Var.getProfilesSampler();
        Double profilesSampleRate = v5Var.getProfilesSampleRate();
        Boolean valueOf = Boolean.valueOf(profilesSampleRate != null && profilesSampleRate.doubleValue() >= d6.doubleValue());
        v5Var.getTracesSampler();
        f9.b bVar2 = p6Var.O;
        if (bVar2 != null) {
            return e4.f.d(bVar2);
        }
        Double tracesSampleRate = v5Var.getTracesSampleRate();
        Double valueOf2 = tracesSampleRate == null ? null : Double.valueOf(tracesSampleRate.doubleValue() / Math.pow(2.0d, v5Var.getBackpressureMonitor().a()));
        if (valueOf2 == null) {
            Boolean bool = Boolean.FALSE;
            return new f9.b(bool, (Double) null, d6, bool, (Double) null);
        }
        boolean z5 = false;
        if (valueOf2.doubleValue() >= d6.doubleValue()) {
            z5 = true;
        }
        return new f9.b(Boolean.valueOf(z5), valueOf2, d6, valueOf, profilesSampleRate);
    }
}
