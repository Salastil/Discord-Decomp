package net.time4j;

import java.util.Iterator;

/* loaded from: classes3.dex */
public final class i1 implements is.d {
    public static final ns.d a;

    /* renamed from: b, reason: collision with root package name */
    public static final boolean f15257b;

    /* renamed from: c, reason: collision with root package name */
    public static final i1 f15258c;

    static {
        ns.d dVar;
        String property = System.getProperty("java.vm.name");
        Iterator it = is.c.f12272b.d(ns.d.class).iterator();
        while (true) {
            if (!it.hasNext()) {
                dVar = null;
                break;
            } else {
                dVar = (ns.d) it.next();
                if (property.equals(dVar.b())) {
                    break;
                }
            }
        }
        if (dVar == null) {
            dVar = new h1();
        }
        a = dVar;
        f15257b = Boolean.getBoolean("net.time4j.systemclock.nanoTime");
        a();
        f15258c = new i1();
        a();
    }

    public static long a() {
        long currentTimeMillis = System.currentTimeMillis();
        long j = 0;
        int i5 = 0;
        while (i5 < 10) {
            j = f15257b ? System.nanoTime() : a.a();
            long currentTimeMillis2 = System.currentTimeMillis();
            if (currentTimeMillis == currentTimeMillis2) {
                break;
            }
            i5++;
            currentTimeMillis = currentTimeMillis2;
        }
        return w3.q.D(w3.q.B(ns.c.F.b(w3.q.m(1000, currentTimeMillis)), 1000000000L) + (w3.q.o(1000, currentTimeMillis) * 1000000), j);
    }
}
