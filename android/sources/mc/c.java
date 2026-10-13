package mc;

import android.media.MediaCodec;
import ke.d0;

/* loaded from: classes3.dex */
public final class c {
    public byte[] a;

    /* renamed from: b, reason: collision with root package name */
    public byte[] f14427b;

    /* renamed from: c, reason: collision with root package name */
    public int f14428c;

    /* renamed from: d, reason: collision with root package name */
    public int[] f14429d;

    /* renamed from: e, reason: collision with root package name */
    public int[] f14430e;

    /* renamed from: f, reason: collision with root package name */
    public int f14431f;

    /* renamed from: g, reason: collision with root package name */
    public int f14432g;

    /* renamed from: h, reason: collision with root package name */
    public int f14433h;

    /* renamed from: i, reason: collision with root package name */
    public final MediaCodec.CryptoInfo f14434i;
    public final e4.c j;

    public c() {
        MediaCodec.CryptoInfo cryptoInfo = new MediaCodec.CryptoInfo();
        this.f14434i = cryptoInfo;
        this.j = d0.a >= 24 ? new e4.c(cryptoInfo) : null;
    }
}
