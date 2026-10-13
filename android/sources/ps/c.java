package ps;

import okio.Source;

/* loaded from: classes3.dex */
public final class c extends et.i {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ Source f16525d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ d f16526e;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public c(Source source, d dVar) {
        super(source);
        this.f16525d = source;
        this.f16526e = dVar;
    }

    @Override // et.i, java.io.Closeable, java.lang.AutoCloseable
    public final void close() {
        this.f16526e.f16527d.close();
        super.close();
    }
}
