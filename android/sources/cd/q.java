package cd;

import com.google.android.exoplayer2.Format;

/* loaded from: classes3.dex */
public final class q extends Exception {

    /* renamed from: d, reason: collision with root package name */
    public final String f3448d;

    /* renamed from: e, reason: collision with root package name */
    public final boolean f3449e;

    /* renamed from: i, reason: collision with root package name */
    public final o f3450i;

    /* renamed from: v, reason: collision with root package name */
    public final String f3451v;

    public q(Format format, w wVar, boolean z5, int i5) {
        this("Decoder init failed: [" + i5 + "], " + format, wVar, format.I, z5, null, "com.google.android.exoplayer2.mediacodec.MediaCodecRenderer_" + (i5 < 0 ? "neg_" : "") + Math.abs(i5));
    }

    public q(String str, Throwable th2, String str2, boolean z5, o oVar, String str3) {
        super(str, th2);
        this.f3448d = str2;
        this.f3449e = z5;
        this.f3450i = oVar;
        this.f3451v = str3;
    }
}
