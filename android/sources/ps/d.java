package ps;

import et.y;
import java.util.regex.Pattern;
import kotlin.jvm.internal.Intrinsics;
import okhttp3.MediaType;
import okhttp3.ResponseBody;
import okio.BufferedSource;
import okio.Source;

/* loaded from: classes3.dex */
public final class d extends ResponseBody {

    /* renamed from: d, reason: collision with root package name */
    public final rs.e f16527d;

    /* renamed from: e, reason: collision with root package name */
    public final String f16528e;

    /* renamed from: i, reason: collision with root package name */
    public final String f16529i;

    /* renamed from: v, reason: collision with root package name */
    public final et.r f16530v;

    public d(rs.e snapshot, String str, String str2) {
        Intrinsics.checkNotNullParameter(snapshot, "snapshot");
        this.f16527d = snapshot;
        this.f16528e = str;
        this.f16529i = str2;
        this.f16530v = y.d(new c((Source) snapshot.f17647i.get(1), this));
    }

    @Override // okhttp3.ResponseBody
    public final long contentLength() {
        String str = this.f16529i;
        if (str == null) {
            return -1L;
        }
        byte[] bArr = qs.b.a;
        Intrinsics.checkNotNullParameter(str, "<this>");
        try {
            return Long.parseLong(str);
        } catch (NumberFormatException unused) {
            return -1L;
        }
    }

    @Override // okhttp3.ResponseBody
    public final MediaType contentType() {
        String str = this.f16528e;
        if (str == null) {
            return null;
        }
        Pattern pattern = MediaType.f16040d;
        return e4.f.D(str);
    }

    @Override // okhttp3.ResponseBody
    public final BufferedSource source() {
        return this.f16530v;
    }
}
