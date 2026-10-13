package okhttp3;

import io.sentry.hints.j;
import java.util.ArrayList;
import java.util.UUID;
import kotlin.jvm.internal.Intrinsics;
import okio.ByteString;
import ps.r;

/* loaded from: classes3.dex */
public final class MultipartBody$Builder {
    public final ByteString a;

    /* renamed from: b, reason: collision with root package name */
    public MediaType f16044b;

    /* renamed from: c, reason: collision with root package name */
    public final ArrayList f16045c;

    public MultipartBody$Builder() {
        String boundary = UUID.randomUUID().toString();
        Intrinsics.checkNotNullExpressionValue(boundary, "randomUUID().toString()");
        Intrinsics.checkNotNullParameter(boundary, "boundary");
        ByteString byteString = ByteString.f16115v;
        this.a = j.D(boundary);
        this.f16044b = a.f16092e;
        this.f16045c = new ArrayList();
    }

    public final void a(Headers headers, RequestBody body) {
        Intrinsics.checkNotNullParameter(body, "body");
        Intrinsics.checkNotNullParameter(body, "body");
        if (headers.a("Content-Type") != null) {
            throw new IllegalArgumentException("Unexpected header: Content-Type");
        }
        if (headers.a("Content-Length") != null) {
            throw new IllegalArgumentException("Unexpected header: Content-Length");
        }
        r part = new r(headers, body);
        Intrinsics.checkNotNullParameter(part, "part");
        this.f16045c.add(part);
    }
}
