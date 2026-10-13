package com.google.android.exoplayer2;

import fi.c0;
import fi.e0;
import fi.r0;
import hc.t1;
import ke.d0;

/* loaded from: classes3.dex */
public final class Tracks implements hc.g {

    /* renamed from: e, reason: collision with root package name */
    public static final Tracks f5299e;

    /* renamed from: d, reason: collision with root package name */
    public final e0 f5300d;

    static {
        c0 c0Var = e0.f8656e;
        f5299e = new Tracks(r0.f8704w);
        int i5 = d0.a;
        Integer.toString(0, 36);
    }

    public Tracks(r0 r0Var) {
        this.f5300d = e0.k(r0Var);
    }

    public final boolean a(int i5) {
        int i6 = 0;
        while (true) {
            e0 e0Var = this.f5300d;
            if (i6 >= e0Var.size()) {
                return false;
            }
            t1 t1Var = (t1) e0Var.get(i6);
            boolean[] zArr = t1Var.f9891w;
            int length = zArr.length;
            int i10 = 0;
            while (true) {
                if (i10 >= length) {
                    break;
                }
                if (!zArr[i10]) {
                    i10++;
                } else if (t1Var.f9888e.f15210i == i5) {
                    return true;
                }
            }
            i6++;
        }
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj == null || Tracks.class != obj.getClass()) {
            return false;
        }
        return this.f5300d.equals(((Tracks) obj).f5300d);
    }

    public final int hashCode() {
        return this.f5300d.hashCode();
    }
}
