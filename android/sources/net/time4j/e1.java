package net.time4j;

import java.util.Collections;
import java.util.HashSet;
import java.util.Locale;
import java.util.concurrent.ConcurrentHashMap;

/* loaded from: classes3.dex */
public final class e1 {

    /* renamed from: b, reason: collision with root package name */
    public static final ls.h f15247b;

    /* renamed from: c, reason: collision with root package name */
    public static final ConcurrentHashMap f15248c;
    public final Locale a;

    static {
        ls.h hVar = null;
        int i5 = 0;
        for (ls.h hVar2 : is.c.f12272b.d(ls.h.class)) {
            int length = hVar2.b().length;
            if (length >= i5) {
                hVar = hVar2;
                i5 = length;
            }
        }
        if (hVar == null) {
            hVar = ls.h.a;
        }
        f15247b = hVar;
        f15248c = new ConcurrentHashMap();
        h0[] h0VarArr = {m.f15278v, m.f15280x, m.f15281y, m.E, t.f15314d, t.f15315e, t.f15316i};
        HashSet hashSet = new HashSet();
        Collections.addAll(hashSet, h0VarArr);
        hashSet.add(t.f15319x);
        Collections.unmodifiableSet(hashSet);
    }

    public e1(Locale locale, is.d dVar) {
        if (dVar == null) {
            throw new NullPointerException("Missing reference clock.");
        }
        ls.e0.a(locale);
        this.a = locale;
    }
}
