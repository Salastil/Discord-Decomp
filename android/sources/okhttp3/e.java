package okhttp3;

import okio.BufferedSource;

/* loaded from: classes3.dex */
public final class e extends ResponseBody {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ MediaType f16104d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ long f16105e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ BufferedSource f16106i;

    public e(MediaType mediaType, long j, BufferedSource bufferedSource) {
        this.f16104d = mediaType;
        this.f16105e = j;
        this.f16106i = bufferedSource;
    }

    @Override // okhttp3.ResponseBody
    public final long contentLength() {
        return this.f16105e;
    }

    @Override // okhttp3.ResponseBody
    public final MediaType contentType() {
        return this.f16104d;
    }

    @Override // okhttp3.ResponseBody
    public final BufferedSource source() {
        return this.f16106i;
    }
}
