package net.time4j;

import java.io.Serializable;

/* loaded from: classes3.dex */
public final class m1 extends ks.b implements f0, Serializable {

    /* renamed from: d, reason: collision with root package name */
    public static final m1 f15286d = new m1();
    private static final long serialVersionUID = -4981215347844372171L;

    private Object readResolve() {
        return f15286d;
    }

    @Override // net.time4j.h0
    public final char a() {
        return 'Y';
    }

    @Override // ks.h
    public final boolean b() {
        return true;
    }

    @Override // ks.b
    public final ks.u c(ks.r rVar) {
        if (rVar.e(w0.J)) {
            return v1.f15380d;
        }
        return null;
    }

    @Override // ks.h
    public final double getLength() {
        m.f15278v.getClass();
        return 3.1556952E7d;
    }

    public final String toString() {
        return "WEEK_BASED_YEARS";
    }
}
