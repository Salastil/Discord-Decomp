package ur;

/* loaded from: classes3.dex */
public final class e extends h {

    /* renamed from: v, reason: collision with root package name */
    public static final e f19095v;

    static {
        int i5 = k.f19101c;
        int i6 = k.f19102d;
        long j = k.f19103e;
        String str = k.a;
        e eVar = new e();
        eVar.f19096i = new c(j, str, i5, i6);
        f19095v = eVar;
    }

    @Override // java.io.Closeable, java.lang.AutoCloseable
    public final void close() {
        throw new UnsupportedOperationException("Dispatchers.Default cannot be closed");
    }

    @Override // kotlinx.coroutines.CoroutineDispatcher
    public final String toString() {
        return "Dispatchers.Default";
    }
}
