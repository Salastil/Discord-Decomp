package io.sentry;

/* loaded from: classes3.dex */
public final class p6 extends i6 {
    public static final io.sentry.protocol.g0 P = io.sentry.protocol.g0.CUSTOM;
    public String M;
    public io.sentry.protocol.g0 N;
    public f9.b O;

    public p6(String str, String str2) {
        this(str, io.sentry.protocol.g0.CUSTOM, str2, null);
    }

    public static p6 b(e4.m mVar) {
        mVar.getClass();
        c cVar = (c) mVar.f7965v;
        Double d6 = cVar.f11413c;
        p6 p6Var = new p6((io.sentry.protocol.v) mVar.f7963e, (k6) mVar.f7964i, "default", (k6) null);
        p6Var.M = "<unlabeled transaction>";
        p6Var.O = null;
        p6Var.N = P;
        p6Var.J = io.sentry.config.a.n(cVar, null, null, null);
        return p6Var;
    }

    public p6(String str, io.sentry.protocol.g0 g0Var, String str2, f9.b bVar) {
        super(new io.sentry.protocol.v(), new k6(), str2, null);
        d9.a.L(str, "name is required");
        this.M = str;
        this.N = g0Var;
        a(bVar);
        this.J = io.sentry.config.a.n(null, bVar == null ? null : (Boolean) bVar.f8472d, bVar == null ? null : (Double) bVar.f8473e, bVar == null ? null : (Double) bVar.f8474i);
    }
}
