package jc;

import com.google.android.exoplayer2.Format;

/* loaded from: classes3.dex */
public final class t extends Exception {

    /* renamed from: d, reason: collision with root package name */
    public final int f12653d;

    /* renamed from: e, reason: collision with root package name */
    public final boolean f12654e;

    /* renamed from: i, reason: collision with root package name */
    public final Format f12655i;

    public t(int i5, Format format, boolean z5) {
        super(k0.d.i(i5, "AudioTrack write failed: "));
        this.f12654e = z5;
        this.f12653d = i5;
        this.f12655i = format;
    }
}
