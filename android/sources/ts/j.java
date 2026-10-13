package ts;

import java.io.Closeable;
import kotlin.jvm.internal.Intrinsics;
import okio.BufferedSink;
import okio.BufferedSource;

/* loaded from: classes3.dex */
public final class j implements Closeable {

    /* renamed from: d, reason: collision with root package name */
    public final BufferedSource f18733d;

    /* renamed from: e, reason: collision with root package name */
    public final BufferedSink f18734e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ BufferedSource f18735i;

    /* renamed from: v, reason: collision with root package name */
    public final /* synthetic */ BufferedSink f18736v;

    /* renamed from: w, reason: collision with root package name */
    public final /* synthetic */ hc.k f18737w;

    public j(BufferedSource source, BufferedSink sink, hc.k kVar) {
        this.f18735i = source;
        this.f18736v = sink;
        this.f18737w = kVar;
        Intrinsics.checkNotNullParameter(source, "source");
        Intrinsics.checkNotNullParameter(sink, "sink");
        this.f18733d = source;
        this.f18734e = sink;
    }

    @Override // java.io.Closeable, java.lang.AutoCloseable
    public final void close() {
        this.f18737w.c(true, true, null);
    }
}
