package com.horcrux.svg;

import java.util.ArrayList;

/* loaded from: classes3.dex */
public final class m0 {

    /* renamed from: d, reason: collision with root package name */
    public static ArrayList f6386d;

    /* renamed from: e, reason: collision with root package name */
    public static int f6387e;

    /* renamed from: f, reason: collision with root package name */
    public static k0 f6388f;

    /* renamed from: g, reason: collision with root package name */
    public static k0 f6389g;

    /* renamed from: h, reason: collision with root package name */
    public static k0 f6390h;

    /* renamed from: i, reason: collision with root package name */
    public static k0 f6391i;
    public final int a;

    /* renamed from: b, reason: collision with root package name */
    public final k0 f6392b;

    /* renamed from: c, reason: collision with root package name */
    public final double f6393c;

    public m0(int i5, k0 k0Var, double d6) {
        this.a = i5;
        this.f6392b = k0Var;
        this.f6393c = d6;
    }

    public static double a(int i5) {
        k0 k0Var = f6390h;
        double atan2 = Math.atan2(k0Var.f6381b, k0Var.a) * 57.29577951308232d;
        k0 k0Var2 = f6391i;
        double atan22 = Math.atan2(k0Var2.f6381b, k0Var2.a) * 57.29577951308232d;
        int b10 = f0.e.b(i5);
        if (b10 == 0) {
            return atan22;
        }
        if (b10 != 1) {
            if (b10 != 2) {
                return 0.0d;
            }
            return atan2;
        }
        if (Math.abs(atan2 - atan22) > 180.0d) {
            atan2 += 360.0d;
        }
        return (atan2 + atan22) / 2.0d;
    }

    public static boolean b(k0 k0Var) {
        return k0Var.a == 0.0d && k0Var.f6381b == 0.0d;
    }

    public static k0 c(k0 k0Var, k0 k0Var2) {
        return new k0(k0Var2.a - k0Var.a, k0Var2.f6381b - k0Var.f6381b);
    }
}
