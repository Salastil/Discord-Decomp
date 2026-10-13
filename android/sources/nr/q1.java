package nr;

/* loaded from: classes3.dex */
public final class q1 extends sr.t implements Runnable {

    /* renamed from: w, reason: collision with root package name */
    public final long f15653w;

    public q1(long j, lo.c cVar) {
        super(cVar, cVar.getContext());
        this.f15653w = j;
    }

    @Override // nr.e1
    public final String W() {
        return super.W() + "(timeMillis=" + this.f15653w + ')';
    }

    @Override // java.lang.Runnable
    public final void run() {
        x.n(this.f15590i);
        y(new p1("Timed out waiting for " + this.f15653w + " ms", this));
    }
}
