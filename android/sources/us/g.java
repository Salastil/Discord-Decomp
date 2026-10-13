package us;

import et.r;
import java.util.regex.Pattern;
import kotlin.jvm.internal.Intrinsics;
import okhttp3.MediaType;
import okhttp3.ResponseBody;
import okio.BufferedSource;

/* loaded from: classes3.dex */
public final class g extends ResponseBody {

    /* renamed from: d, reason: collision with root package name */
    public final String f19121d;

    /* renamed from: e, reason: collision with root package name */
    public final long f19122e;

    /* renamed from: i, reason: collision with root package name */
    public final r f19123i;

    public g(String str, long j, r source) {
        Intrinsics.checkNotNullParameter(source, "source");
        this.f19121d = str;
        this.f19122e = j;
        this.f19123i = source;
    }

    @Override // okhttp3.ResponseBody
    public final long contentLength() {
        return this.f19122e;
    }

    @Override // okhttp3.ResponseBody
    public final MediaType contentType() {
        String str = this.f19121d;
        if (str == null) {
            return null;
        }
        Pattern pattern = MediaType.f16040d;
        return e4.f.D(str);
    }

    @Override // okhttp3.ResponseBody
    public final BufferedSource source() {
        return this.f19123i;
    }
}
