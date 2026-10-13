package cd;

import android.media.MediaCrypto;
import android.media.MediaFormat;
import android.view.Surface;
import com.google.android.exoplayer2.Format;

/* loaded from: classes3.dex */
public final class j {
    public final o a;

    /* renamed from: b, reason: collision with root package name */
    public final MediaFormat f3436b;

    /* renamed from: c, reason: collision with root package name */
    public final Format f3437c;

    /* renamed from: d, reason: collision with root package name */
    public final Surface f3438d;

    /* renamed from: e, reason: collision with root package name */
    public final MediaCrypto f3439e;

    public j(o oVar, MediaFormat mediaFormat, Format format, Surface surface, MediaCrypto mediaCrypto) {
        this.a = oVar;
        this.f3436b = mediaFormat;
        this.f3437c = format;
        this.f3438d = surface;
        this.f3439e = mediaCrypto;
    }
}
