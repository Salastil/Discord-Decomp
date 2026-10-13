package net.time4j.tz.model;

import java.io.Serializable;

/* loaded from: classes3.dex */
public abstract class o implements net.time4j.tz.j, Serializable {

    /* renamed from: d, reason: collision with root package name */
    public static final /* synthetic */ int f15375d = 0;

    static {
        System.getProperty("line.separator");
    }

    public static long a(int i5) {
        return (System.currentTimeMillis() / 1000) + ((long) (i5 * 3.1556952E7d));
    }

    @Override // net.time4j.tz.j
    public final boolean isEmpty() {
        return false;
    }
}
