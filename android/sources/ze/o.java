package ze;

/* loaded from: classes3.dex */
public final class o extends UnsupportedOperationException {

    /* renamed from: d, reason: collision with root package name */
    public final ye.d f21216d;

    public o(ye.d dVar) {
        this.f21216d = dVar;
    }

    @Override // java.lang.Throwable
    public final String getMessage() {
        return "Missing ".concat(String.valueOf(this.f21216d));
    }
}
