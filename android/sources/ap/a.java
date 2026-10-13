package ap;

/* loaded from: classes3.dex */
public final class a extends Exception {

    /* renamed from: e, reason: collision with root package name */
    public static final /* synthetic */ int f2599e = 0;

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f2600d;

    @Override // java.lang.Throwable
    public synchronized Throwable fillInStackTrace() {
        switch (this.f2600d) {
            case 7:
                synchronized (this) {
                }
                return this;
            default:
                return super.fillInStackTrace();
        }
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public /* synthetic */ a(int i5, String str, Throwable th2) {
        super(str, th2);
        this.f2600d = i5;
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public /* synthetic */ a(String str, int i5) {
        super(str);
        this.f2600d = i5;
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public /* synthetic */ a(Throwable th2) {
        super(th2);
        this.f2600d = 0;
    }
}
