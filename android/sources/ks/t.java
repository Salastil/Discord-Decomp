package ks;

import java.io.InvalidObjectException;
import java.io.ObjectInputStream;
import java.io.Serializable;
import net.time4j.h0;

/* loaded from: classes3.dex */
public final class t implements Serializable {
    private static final long serialVersionUID = 1564804888291509484L;
    private final long amount;
    private final Object unit;

    public t(long j, h0 h0Var) {
        if (h0Var == null) {
            throw new NullPointerException("Missing chronological unit.");
        }
        if (j < 0) {
            throw new IllegalArgumentException(k0.d.j(j, "Temporal amount must be positive or zero: "));
        }
        this.amount = j;
        this.unit = h0Var;
    }

    private void readObject(ObjectInputStream objectInputStream) {
        objectInputStream.defaultReadObject();
        if (this.unit == null || this.amount < 0) {
            throw new InvalidObjectException("Inconsistent state.");
        }
    }

    public final long a() {
        return this.amount;
    }

    public final Object b() {
        return this.unit;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj instanceof t) {
            t tVar = (t) t.class.cast(obj);
            if (this.amount == tVar.amount && this.unit.equals(tVar.unit)) {
                return true;
            }
        }
        return false;
    }

    public final int hashCode() {
        int hashCode = this.unit.hashCode() * 29;
        long j = this.amount;
        return hashCode + ((int) (j ^ (j >>> 32)));
    }

    public final String toString() {
        return "P" + this.amount + '{' + this.unit + '}';
    }
}
