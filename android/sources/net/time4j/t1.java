package net.time4j;

import java.io.InvalidObjectException;
import java.io.ObjectInputStream;
import java.io.Serializable;
import java.util.Collections;
import java.util.HashSet;
import java.util.Iterator;
import java.util.concurrent.ConcurrentHashMap;

/* loaded from: classes3.dex */
public final class t1 implements Serializable {
    public static final t1 G;
    private static final long serialVersionUID = 7794495882610436763L;
    public final transient q1 E;
    public final transient s1 F;

    /* renamed from: d, reason: collision with root package name */
    public final transient n1 f15325d;

    /* renamed from: e, reason: collision with root package name */
    public final transient int f15326e;

    /* renamed from: i, reason: collision with root package name */
    public final transient n1 f15327i;

    /* renamed from: v, reason: collision with root package name */
    public final transient n1 f15328v;

    /* renamed from: w, reason: collision with root package name */
    public final transient q1 f15329w;

    /* renamed from: x, reason: collision with root package name */
    public final transient q1 f15330x;

    /* renamed from: y, reason: collision with root package name */
    public final transient q1 f15331y;

    static {
        new ConcurrentHashMap();
        G = new t1(n1.f15289d, 4, n1.f15294x, n1.f15295y);
        Iterator it = is.c.f12272b.d(ls.s0.class).iterator();
        if (it.hasNext()) {
        }
    }

    public t1(n1 n1Var, int i5, n1 n1Var2, n1 n1Var3) {
        if (n1Var == null) {
            throw new NullPointerException("Missing first day of week.");
        }
        if (i5 < 1 || i5 > 7) {
            throw new IllegalArgumentException(k0.d.i(i5, "Minimal days in first week out of range: "));
        }
        if (n1Var2 == null) {
            throw new NullPointerException("Missing start of weekend.");
        }
        if (n1Var3 == null) {
            throw new NullPointerException("Missing end of weekend.");
        }
        this.f15325d = n1Var;
        this.f15326e = i5;
        this.f15327i = n1Var2;
        this.f15328v = n1Var3;
        q1 q1Var = new q1(this, "WEEK_OF_YEAR", 0);
        this.f15329w = q1Var;
        q1 q1Var2 = new q1(this, "WEEK_OF_MONTH", 1);
        this.f15330x = q1Var2;
        q1 q1Var3 = new q1(this, "BOUNDED_WEEK_OF_YEAR", 2);
        this.f15331y = q1Var3;
        q1 q1Var4 = new q1(this, "BOUNDED_WEEK_OF_MONTH", 3);
        this.E = q1Var4;
        s1 s1Var = new s1(this);
        this.F = s1Var;
        HashSet hashSet = new HashSet();
        hashSet.add(q1Var);
        hashSet.add(q1Var2);
        hashSet.add(s1Var);
        hashSet.add(q1Var3);
        hashSet.add(q1Var4);
        Collections.unmodifiableSet(hashSet);
    }

    private void readObject(ObjectInputStream objectInputStream) {
        throw new InvalidObjectException("Serialization proxy required.");
    }

    private Object writeReplace() {
        return new SPX(3, this);
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj instanceof t1) {
            t1 t1Var = (t1) obj;
            if (this.f15325d == t1Var.f15325d && this.f15326e == t1Var.f15326e && this.f15327i == t1Var.f15327i && this.f15328v == t1Var.f15328v) {
                return true;
            }
        }
        return false;
    }

    public final int hashCode() {
        return (this.f15326e * 37) + (this.f15325d.name().hashCode() * 17);
    }

    public final String toString() {
        StringBuilder sb2 = new StringBuilder(64);
        a3.e.v(t1.class, sb2, "[firstDayOfWeek=");
        sb2.append(this.f15325d);
        sb2.append(",minimalDaysInFirstWeek=");
        sb2.append(this.f15326e);
        sb2.append(",startOfWeekend=");
        sb2.append(this.f15327i);
        sb2.append(",endOfWeekend=");
        sb2.append(this.f15328v);
        sb2.append(']');
        return sb2.toString();
    }
}
