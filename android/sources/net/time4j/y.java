package net.time4j;

import java.io.InvalidObjectException;
import java.math.BigDecimal;

/* loaded from: classes3.dex */
public final class y extends ks.a {
    private static final long serialVersionUID = -4837430960549551204L;

    /* renamed from: d, reason: collision with root package name */
    public final transient BigDecimal f15398d;

    public y(String str, BigDecimal bigDecimal) {
        super(str);
        this.f15398d = bigDecimal;
    }

    private Object readResolve() {
        Object obj = z0.h0.get(name());
        if (obj != null) {
            return obj;
        }
        throw new InvalidObjectException(name());
    }

    @Override // ks.d
    public final Object a() {
        return this.f15398d;
    }

    @Override // ks.d
    public final Class getType() {
        return BigDecimal.class;
    }

    @Override // ks.d
    public final boolean i() {
        return false;
    }

    @Override // ks.a
    public final boolean l() {
        return true;
    }

    @Override // ks.d
    public final Object v() {
        return BigDecimal.ZERO;
    }

    @Override // ks.d
    public final boolean w() {
        return true;
    }
}
