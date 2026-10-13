package iq;

/* loaded from: classes3.dex */
public final class l implements Comparable {

    /* renamed from: d, reason: collision with root package name */
    public final int f12229d;

    /* renamed from: e, reason: collision with root package name */
    public final i0 f12230e;

    /* renamed from: i, reason: collision with root package name */
    public final boolean f12231i;

    public l(int i5, i0 i0Var, boolean z5) {
        this.f12229d = i5;
        this.f12230e = i0Var;
        this.f12231i = z5;
    }

    @Override // java.lang.Comparable
    public final int compareTo(Object obj) {
        return this.f12229d - ((l) obj).f12229d;
    }
}
