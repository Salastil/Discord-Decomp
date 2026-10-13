package com.google.android.gms.internal.play_billing;

import sun.misc.Unsafe;

/* loaded from: classes3.dex */
public abstract /* synthetic */ class s0 {
    public static /* synthetic */ boolean a(Unsafe unsafe, q0 q0Var, long j, Object obj, Object obj2) {
        while (!r0.a(unsafe, q0Var, j, obj, obj2)) {
            if (unsafe.getObject(q0Var, j) != obj) {
                return false;
            }
        }
        return true;
    }
}
