package fe;

/* loaded from: classes3.dex */
public final class h implements Comparable {

    /* renamed from: d, reason: collision with root package name */
    public final int f8527d;

    /* renamed from: e, reason: collision with root package name */
    public final d f8528e;

    public h(int i5, d dVar) {
        this.f8527d = i5;
        this.f8528e = dVar;
    }

    @Override // java.lang.Comparable
    public final int compareTo(Object obj) {
        return Integer.compare(this.f8527d, ((h) obj).f8527d);
    }
}
