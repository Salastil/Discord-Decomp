package com.google.android.gms.internal.play_billing;

import sun.misc.Unsafe;

/* loaded from: classes3.dex */
public abstract class k3 {
    public final Unsafe a;

    public k3(Unsafe unsafe) {
        this.a = unsafe;
    }

    public abstract double a(long j, Object obj);

    public abstract float b(long j, Object obj);

    public abstract void c(Object obj, long j, boolean z5);

    public abstract void d(Object obj, long j, double d6);

    public abstract void e(Object obj, long j, float f2);

    public abstract boolean f(long j, Object obj);
}
