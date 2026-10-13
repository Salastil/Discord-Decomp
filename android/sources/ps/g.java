package ps;

import java.io.Closeable;
import java.io.File;
import java.io.Flushable;
import kotlin.jvm.internal.Intrinsics;
import okhttp3.Request;

/* loaded from: classes3.dex */
public final class g implements Closeable, Flushable {

    /* renamed from: d, reason: collision with root package name */
    public final rs.g f16542d;

    public g(File directory, long j) {
        Intrinsics.checkNotNullParameter(directory, "directory");
        Intrinsics.checkNotNullParameter(directory, "directory");
        xs.a fileSystem = xs.a.a;
        Intrinsics.checkNotNullParameter(fileSystem, "fileSystem");
        this.f16542d = new rs.g(directory, j, ss.c.f18141h);
    }

    public final void c(Request request) {
        Intrinsics.checkNotNullParameter(request, "request");
        rs.g gVar = this.f16542d;
        String key = m3.n.p0(request.a);
        synchronized (gVar) {
            Intrinsics.checkNotNullParameter(key, "key");
            gVar.l();
            gVar.c();
            rs.g.Q(key);
            rs.d dVar = (rs.d) gVar.E.get(key);
            if (dVar == null) {
                return;
            }
            gVar.C(dVar);
            if (gVar.f17656x <= gVar.f17652e) {
                gVar.K = false;
            }
        }
    }

    @Override // java.io.Closeable, java.lang.AutoCloseable
    public final void close() {
        this.f16542d.close();
    }

    @Override // java.io.Flushable
    public final void flush() {
        this.f16542d.flush();
    }
}
