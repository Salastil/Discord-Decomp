package okhttp3;

import e4.f;
import java.util.List;
import java.util.regex.Pattern;
import kotlin.jvm.internal.Intrinsics;
import okio.Buffer;
import okio.BufferedSink;
import okio.ByteString;
import ps.r;

/* loaded from: classes3.dex */
public final class a extends RequestBody {

    /* renamed from: e, reason: collision with root package name */
    public static final MediaType f16092e;

    /* renamed from: f, reason: collision with root package name */
    public static final byte[] f16093f;

    /* renamed from: g, reason: collision with root package name */
    public static final byte[] f16094g;

    /* renamed from: h, reason: collision with root package name */
    public static final byte[] f16095h;
    public final ByteString a;

    /* renamed from: b, reason: collision with root package name */
    public final List f16096b;

    /* renamed from: c, reason: collision with root package name */
    public final MediaType f16097c;

    /* renamed from: d, reason: collision with root package name */
    public long f16098d;

    static {
        Pattern pattern = MediaType.f16040d;
        f16092e = f.s("multipart/mixed");
        f.s("multipart/alternative");
        f.s("multipart/digest");
        f.s("multipart/parallel");
        f.s("multipart/form-data");
        f16093f = new byte[]{58, 32};
        f16094g = new byte[]{13, 10};
        f16095h = new byte[]{45, 45};
    }

    public a(ByteString boundaryByteString, MediaType type, List parts) {
        Intrinsics.checkNotNullParameter(boundaryByteString, "boundaryByteString");
        Intrinsics.checkNotNullParameter(type, "type");
        Intrinsics.checkNotNullParameter(parts, "parts");
        this.a = boundaryByteString;
        this.f16096b = parts;
        Pattern pattern = MediaType.f16040d;
        this.f16097c = f.s(type + "; boundary=" + boundaryByteString.k());
        this.f16098d = -1L;
    }

    /* JADX WARN: Multi-variable type inference failed */
    public final long a(BufferedSink bufferedSink, boolean z5) {
        Buffer buffer;
        BufferedSink bufferedSink2;
        if (z5) {
            bufferedSink2 = new Buffer();
            buffer = bufferedSink2;
        } else {
            buffer = 0;
            bufferedSink2 = bufferedSink;
        }
        List list = this.f16096b;
        int size = list.size();
        long j = 0;
        int i5 = 0;
        while (true) {
            ByteString byteString = this.a;
            byte[] bArr = f16095h;
            byte[] bArr2 = f16094g;
            if (i5 >= size) {
                Intrinsics.checkNotNull(bufferedSink2);
                bufferedSink2.write(bArr);
                bufferedSink2.a0(byteString);
                bufferedSink2.write(bArr);
                bufferedSink2.write(bArr2);
                if (!z5) {
                    return j;
                }
                Intrinsics.checkNotNull(buffer);
                long j5 = j + buffer.f16114e;
                buffer.c();
                return j5;
            }
            int i6 = i5 + 1;
            r rVar = (r) list.get(i5);
            Headers headers = rVar.a;
            RequestBody requestBody = rVar.f16578b;
            Intrinsics.checkNotNull(bufferedSink2);
            bufferedSink2.write(bArr);
            bufferedSink2.a0(byteString);
            bufferedSink2.write(bArr2);
            int size2 = headers.size();
            for (int i10 = 0; i10 < size2; i10++) {
                bufferedSink2.B(headers.b(i10)).write(f16093f).B(headers.h(i10)).write(bArr2);
            }
            MediaType contentType = requestBody.contentType();
            if (contentType != null) {
                bufferedSink2.B("Content-Type: ").B(contentType.a).write(bArr2);
            }
            long contentLength = requestBody.contentLength();
            if (contentLength != -1) {
                bufferedSink2.B("Content-Length: ").f0(contentLength).write(bArr2);
            } else if (z5) {
                Intrinsics.checkNotNull(buffer);
                buffer.c();
                return -1L;
            }
            bufferedSink2.write(bArr2);
            if (z5) {
                j += contentLength;
            } else {
                requestBody.writeTo(bufferedSink2);
            }
            bufferedSink2.write(bArr2);
            i5 = i6;
        }
    }

    @Override // okhttp3.RequestBody
    public final long contentLength() {
        long j = this.f16098d;
        if (j != -1) {
            return j;
        }
        long a = a(null, true);
        this.f16098d = a;
        return a;
    }

    @Override // okhttp3.RequestBody
    public final MediaType contentType() {
        return this.f16097c;
    }

    @Override // okhttp3.RequestBody
    public final void writeTo(BufferedSink sink) {
        Intrinsics.checkNotNullParameter(sink, "sink");
        a(sink, false);
    }
}
