package okhttp3;

import kotlin.jvm.internal.Intrinsics;
import okio.BufferedSink;

/* loaded from: classes3.dex */
public final class d extends RequestBody {
    public final /* synthetic */ MediaType a;

    /* renamed from: b, reason: collision with root package name */
    public final /* synthetic */ int f16101b;

    /* renamed from: c, reason: collision with root package name */
    public final /* synthetic */ byte[] f16102c;

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f16103d;

    public d(MediaType mediaType, byte[] bArr, int i5, int i6) {
        this.a = mediaType;
        this.f16101b = i5;
        this.f16102c = bArr;
        this.f16103d = i6;
    }

    @Override // okhttp3.RequestBody
    public final long contentLength() {
        return this.f16101b;
    }

    @Override // okhttp3.RequestBody
    public final MediaType contentType() {
        return this.a;
    }

    @Override // okhttp3.RequestBody
    public final void writeTo(BufferedSink sink) {
        Intrinsics.checkNotNullParameter(sink, "sink");
        sink.write(this.f16102c, this.f16103d, this.f16101b);
    }
}
