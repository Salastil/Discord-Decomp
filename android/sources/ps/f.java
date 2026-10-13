package ps;

import okio.Sink;

/* loaded from: classes3.dex */
public final class f extends et.h {

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ g f16540e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ s9.a f16541i;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public f(g gVar, s9.a aVar, Sink sink) {
        super(sink);
        this.f16540e = gVar;
        this.f16541i = aVar;
    }

    @Override // et.h, okio.Sink, java.io.Closeable, java.lang.AutoCloseable
    public final void close() {
        g gVar = this.f16540e;
        s9.a aVar = this.f16541i;
        synchronized (gVar) {
            if (aVar.a) {
                return;
            }
            aVar.a = true;
            super.close();
            ((a3.f) this.f16541i.f17827b).d();
        }
    }
}
