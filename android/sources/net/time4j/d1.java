package net.time4j;

import java.util.concurrent.TimeUnit;

/* loaded from: classes3.dex */
public final class d1 implements ks.d {

    /* renamed from: v, reason: collision with root package name */
    public static final d1 f15239v = new d1(t.class, t.f15314d, t.f15319x);

    /* renamed from: w, reason: collision with root package name */
    public static final d1 f15240w = new d1(TimeUnit.class, TimeUnit.DAYS, TimeUnit.NANOSECONDS);

    /* renamed from: d, reason: collision with root package name */
    public final Class f15241d;

    /* renamed from: e, reason: collision with root package name */
    public final transient Comparable f15242e;

    /* renamed from: i, reason: collision with root package name */
    public final transient Comparable f15243i;

    public d1(Class cls, Enum r22, Enum r32) {
        this.f15241d = cls;
        this.f15242e = r22;
        this.f15243i = r32;
    }

    @Override // ks.d
    public final Object a() {
        return this.f15243i;
    }

    @Override // java.util.Comparator
    public final int compare(Object obj, Object obj2) {
        Comparable comparable = (Comparable) ((ks.e) obj).d(this);
        Comparable comparable2 = (Comparable) ((ks.e) obj2).d(this);
        return this.f15241d == t.class ? comparable.compareTo(comparable2) : comparable2.compareTo(comparable);
    }

    @Override // ks.d
    public final Class getType() {
        return this.f15241d;
    }

    @Override // ks.d
    public final boolean h() {
        return false;
    }

    @Override // ks.d
    public final boolean i() {
        return false;
    }

    @Override // ks.d
    public final String name() {
        return "PRECISION";
    }

    @Override // ks.d
    public final Object v() {
        return this.f15242e;
    }

    @Override // ks.d
    public final boolean w() {
        return true;
    }
}
