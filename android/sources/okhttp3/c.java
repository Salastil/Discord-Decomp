package okhttp3;

import kotlin.jvm.internal.Intrinsics;
import okio.BufferedSink;
import okio.ByteString;

/* loaded from: classes3.dex */
public final class c extends RequestBody {
    public final /* synthetic */ MediaType a;

    /* renamed from: b, reason: collision with root package name */
    public final /* synthetic */ ByteString f16100b;

    public c(MediaType mediaType, ByteString byteString) {
        this.a = mediaType;
        this.f16100b = byteString;
    }

    @Override // okhttp3.RequestBody
    public final long contentLength() {
        return this.f16100b.c();
    }

    @Override // okhttp3.RequestBody
    public final MediaType contentType() {
        return this.a;
    }

    @Override // okhttp3.RequestBody
    public final void writeTo(BufferedSink sink) {
        Intrinsics.checkNotNullParameter(sink, "sink");
        sink.a0(this.f16100b);
    }
}
