package com.google.android.gms.internal.play_billing;

import java.util.concurrent.ConcurrentHashMap;

/* loaded from: classes3.dex */
public final class v2 {

    /* renamed from: b, reason: collision with root package name */
    public static final v2 f5858b = new v2();
    public final ConcurrentHashMap a = new ConcurrentHashMap();

    public final y2 a(Class cls) {
        y2 v5;
        ConcurrentHashMap concurrentHashMap = this.a;
        Object obj = concurrentHashMap.get(cls);
        if (obj != null) {
            return (y2) obj;
        }
        a aVar = z2.a;
        if (!e2.class.isAssignableFrom(cls)) {
            int i5 = r1.a;
        }
        int i6 = r1.a;
        if (!e2.class.isAssignableFrom(cls)) {
            throw new IllegalArgumentException("Unsupported message type: ".concat(cls.getName()));
        }
        try {
            x2 x2Var = (x2) e2.m(cls.asSubclass(e2.class)).j(3);
            if ((x2Var.f5887d & 2) == 2) {
                v5 = new u2(z2.a, x2Var.a);
            } else {
                v5 = t2.v(x2Var, z2.a, x2Var.a() + (-1) != 1 ? a2.a : null);
            }
            y2 y2Var = (y2) concurrentHashMap.putIfAbsent(cls, v5);
            return y2Var != null ? y2Var : v5;
        } catch (Exception e9) {
            throw new RuntimeException("Unable to get message info for ".concat(cls.getName()), e9);
        }
    }
}
