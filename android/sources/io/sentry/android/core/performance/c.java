package io.sentry.android.core.performance;

/* loaded from: classes3.dex */
public final class c implements Comparable {

    /* renamed from: d, reason: collision with root package name */
    public final g f11285d = new g();

    /* renamed from: e, reason: collision with root package name */
    public final g f11286e = new g();

    @Override // java.lang.Comparable
    public final int compareTo(Object obj) {
        c cVar = (c) obj;
        int compare = Long.compare(this.f11285d.f11298i, cVar.f11285d.f11298i);
        return compare == 0 ? Long.compare(this.f11286e.f11298i, cVar.f11286e.f11298i) : compare;
    }
}
