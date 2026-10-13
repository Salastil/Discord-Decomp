package net.time4j;

import java.io.Serializable;

/* loaded from: classes3.dex */
public final class s0 extends ks.b implements f0, Serializable {
    private static final long serialVersionUID = 1988843503875912054L;
    private final int policy;
    private final m unit;

    public s0(m mVar, int i5) {
        this.unit = mVar;
        this.policy = i5;
    }

    @Override // net.time4j.h0
    public final char a() {
        return (char) 0;
    }

    @Override // ks.h
    public final boolean b() {
        return true;
    }

    @Override // ks.b
    public final ks.u c(ks.r rVar) {
        if (rVar.e(w0.J)) {
            return new l(this.unit, this.policy);
        }
        return null;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj instanceof s0) {
            s0 s0Var = (s0) obj;
            if (this.unit == s0Var.unit && this.policy == s0Var.policy) {
                return true;
            }
        }
        return false;
    }

    @Override // ks.h
    public final double getLength() {
        return this.unit.getLength();
    }

    public final int hashCode() {
        return (this.policy * 37) + (this.unit.hashCode() * 23);
    }

    public final String toString() {
        StringBuilder sb2 = new StringBuilder();
        sb2.append(this.unit.a());
        sb2.append('-');
        switch (this.policy) {
            case 1:
                sb2.append("NEXT_VALID_DATE");
                break;
            case 2:
                sb2.append("END_OF_MONTH");
                break;
            case 3:
                sb2.append("CARRY_OVER");
                break;
            case 4:
                sb2.append("UNLESS_INVALID");
                break;
            case 5:
                sb2.append("KEEPING_LAST_DATE");
                break;
            case 6:
                sb2.append("JODA_METRIC");
                break;
            default:
                sb2.append("PREVIOUS_VALID_DATE");
                break;
        }
        return sb2.toString();
    }
}
