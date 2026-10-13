package oa;

/* loaded from: classes3.dex */
public final class j implements k {

    /* renamed from: d, reason: collision with root package name */
    public static final j f15814d;
    public int a;

    /* renamed from: b, reason: collision with root package name */
    public boolean f15815b;

    /* renamed from: c, reason: collision with root package name */
    public boolean f15816c;

    static {
        j jVar = new j();
        jVar.a = Integer.MAX_VALUE;
        jVar.f15815b = true;
        jVar.f15816c = true;
        f15814d = jVar;
    }

    public final boolean equals(Object obj) {
        if (obj == this) {
            return true;
        }
        if (!(obj instanceof j)) {
            return false;
        }
        j jVar = (j) obj;
        return this.a == jVar.a && this.f15815b == jVar.f15815b && this.f15816c == jVar.f15816c;
    }

    public final int hashCode() {
        return (this.a ^ (this.f15815b ? 4194304 : 0)) ^ (this.f15816c ? 8388608 : 0);
    }
}
