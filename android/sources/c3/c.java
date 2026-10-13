package c3;

import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public final class c implements Comparable {

    /* renamed from: d, reason: collision with root package name */
    public final int f3291d;

    /* renamed from: e, reason: collision with root package name */
    public final int f3292e;

    /* renamed from: i, reason: collision with root package name */
    public final String f3293i;

    /* renamed from: v, reason: collision with root package name */
    public final String f3294v;

    public c(int i5, int i6, String from, String to2) {
        Intrinsics.checkNotNullParameter(from, "from");
        Intrinsics.checkNotNullParameter(to2, "to");
        this.f3291d = i5;
        this.f3292e = i6;
        this.f3293i = from;
        this.f3294v = to2;
    }

    @Override // java.lang.Comparable
    public final int compareTo(Object obj) {
        c other = (c) obj;
        Intrinsics.checkNotNullParameter(other, "other");
        int i5 = this.f3291d - other.f3291d;
        return i5 == 0 ? this.f3292e - other.f3292e : i5;
    }
}
