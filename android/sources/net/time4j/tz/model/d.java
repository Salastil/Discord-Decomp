package net.time4j.tz.model;

import net.time4j.p0;
import net.time4j.t;
import net.time4j.v;
import net.time4j.z0;

/* loaded from: classes3.dex */
public abstract class d {

    /* renamed from: d, reason: collision with root package name */
    public final transient long f15361d;

    /* renamed from: e, reason: collision with root package name */
    public final transient z0 f15362e;

    /* renamed from: i, reason: collision with root package name */
    public final transient l f15363i;

    /* renamed from: v, reason: collision with root package name */
    public final transient int f15364v;

    public d(int i5, l lVar, int i6) {
        v vVar;
        if (lVar == null) {
            throw new NullPointerException("Missing offset indicator.");
        }
        if (i6 != Integer.MAX_VALUE && (i6 < -64800 || i6 > 64800)) {
            throw new IllegalArgumentException(k0.d.i(i6, "DST out of range: "));
        }
        if (i5 == 86400) {
            this.f15361d = 0L;
            this.f15362e = z0.K;
        } else {
            z0 z0Var = z0.J;
            long j = i5;
            if (j != 0) {
                z0Var.getClass();
            } else if (z0Var.f15411d < 24) {
                vVar = new v(0L, z0Var);
                this.f15361d = vVar.a();
                this.f15362e = vVar.b();
            }
            vVar = (v) p0.b(v.class, t.f15316i, z0Var, j);
            this.f15361d = vVar.a();
            this.f15362e = vVar.b();
        }
        this.f15363i = lVar;
        this.f15364v = i6 == Integer.MAX_VALUE ? 0 : i6;
    }

    public abstract int a();
}
