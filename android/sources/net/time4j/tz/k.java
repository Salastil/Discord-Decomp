package net.time4j.tz;

import java.io.InvalidObjectException;
import java.io.ObjectInputStream;
import java.io.Serializable;
import java.util.HashMap;

/* loaded from: classes3.dex */
public final class k implements l, Serializable {

    /* renamed from: i, reason: collision with root package name */
    public static final HashMap f15342i = new HashMap();
    private static final long serialVersionUID = 1790434289322009750L;

    /* renamed from: d, reason: collision with root package name */
    public final transient int f15343d;

    /* renamed from: e, reason: collision with root package name */
    public final transient int f15344e;

    static {
        for (int i5 : f0.e.c(3)) {
            for (int i6 : f0.e.c(2)) {
                f15342i.put(Integer.valueOf(f0.e.b(i6) + (f0.e.b(i5) * 2)), new k(i5, i6));
            }
        }
    }

    public k(int i5, int i6) {
        this.f15343d = i5;
        this.f15344e = i6;
    }

    public static k a(int i5, int i6) {
        return (k) f15342i.get(Integer.valueOf(f0.e.b(i6) + (f0.e.b(i5) * 2)));
    }

    private void readObject(ObjectInputStream objectInputStream) {
        throw new InvalidObjectException("Serialization proxy required.");
    }

    private Object writeReplace() {
        return new SPX(13, this);
    }

    public final String toString() {
        StringBuilder sb2 = new StringBuilder(32);
        a3.e.v(k.class, sb2, ":[gap=");
        int i5 = this.f15343d;
        sb2.append(i5 != 1 ? i5 != 2 ? i5 != 3 ? "null" : "ABORT" : "NEXT_VALID_TIME" : "PUSH_FORWARD");
        sb2.append(",overlap=");
        int i6 = this.f15344e;
        sb2.append(i6 != 1 ? i6 != 2 ? "null" : "LATER_OFFSET" : "EARLIER_OFFSET");
        sb2.append(']');
        return sb2.toString();
    }
}
