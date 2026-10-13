package okhttp3;

import et.y;
import java.io.File;
import kotlin.jvm.internal.Intrinsics;
import okio.BufferedSink;

/* loaded from: classes3.dex */
public final class b extends RequestBody {
    public final /* synthetic */ MediaType a;

    /* renamed from: b, reason: collision with root package name */
    public final /* synthetic */ File f16099b;

    public b(MediaType mediaType, File file) {
        this.a = mediaType;
        this.f16099b = file;
    }

    @Override // okhttp3.RequestBody
    public final long contentLength() {
        return this.f16099b.length();
    }

    @Override // okhttp3.RequestBody
    public final MediaType contentType() {
        return this.a;
    }

    @Override // okhttp3.RequestBody
    public final void writeTo(BufferedSink sink) {
        Intrinsics.checkNotNullParameter(sink, "sink");
        et.c l6 = y.l(this.f16099b);
        try {
            sink.J(l6);
            l6.close();
        } finally {
        }
    }
}
