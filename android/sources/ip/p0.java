package ip;

/* loaded from: classes3.dex */
public final class p0 implements sq.d, o0 {

    /* renamed from: e, reason: collision with root package name */
    public static final p0 f12153e = new p0(0);

    /* renamed from: i, reason: collision with root package name */
    public static final p0 f12154i = new p0(1);

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f12155d;

    public /* synthetic */ p0(int i5) {
        this.f12155d = i5;
    }

    @Override // sq.d
    public yq.y getType() {
        switch (this.f12155d) {
            case 2:
                throw new IllegalStateException("This method should not be called");
            case 3:
                throw new IllegalStateException("This method should not be called");
            default:
                throw new IllegalStateException("This method should not be called");
        }
    }

    public String toString() {
        switch (this.f12155d) {
            case 7:
                return "NO_SOURCE";
            default:
                return super.toString();
        }
    }

    @Override // ip.o0
    public void c() {
    }
}
