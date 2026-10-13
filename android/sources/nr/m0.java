package nr;

/* loaded from: classes3.dex */
public final class m0 extends n0 {

    /* renamed from: i, reason: collision with root package name */
    public final Runnable f15637i;

    public m0(Runnable runnable, long j) {
        super(j);
        this.f15637i = runnable;
    }

    @Override // java.lang.Runnable
    public final void run() {
        this.f15637i.run();
    }

    @Override // nr.n0
    public final String toString() {
        return super.toString() + this.f15637i;
    }
}
