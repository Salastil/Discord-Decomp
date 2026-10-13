package com.google.android.exoplayer2.decoder;

import a3.e;
import android.text.TextUtils;
import com.google.android.exoplayer2.Format;
import ke.b;

/* loaded from: classes3.dex */
public final class DecoderReuseEvaluation {
    public final String a;

    /* renamed from: b, reason: collision with root package name */
    public final Format f5387b;

    /* renamed from: c, reason: collision with root package name */
    public final Format f5388c;

    /* renamed from: d, reason: collision with root package name */
    public final int f5389d;

    /* renamed from: e, reason: collision with root package name */
    public final int f5390e;

    public DecoderReuseEvaluation(String str, Format format, Format format2, int i5, int i6) {
        b.g(i5 == 0 || i6 == 0);
        if (TextUtils.isEmpty(str)) {
            throw new IllegalArgumentException();
        }
        this.a = str;
        format.getClass();
        this.f5387b = format;
        format2.getClass();
        this.f5388c = format2;
        this.f5389d = i5;
        this.f5390e = i6;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj != null && DecoderReuseEvaluation.class == obj.getClass()) {
            DecoderReuseEvaluation decoderReuseEvaluation = (DecoderReuseEvaluation) obj;
            if (this.f5389d == decoderReuseEvaluation.f5389d && this.f5390e == decoderReuseEvaluation.f5390e && this.a.equals(decoderReuseEvaluation.a) && this.f5387b.equals(decoderReuseEvaluation.f5387b) && this.f5388c.equals(decoderReuseEvaluation.f5388c)) {
                return true;
            }
        }
        return false;
    }

    public final int hashCode() {
        return this.f5388c.hashCode() + ((this.f5387b.hashCode() + e.d((((527 + this.f5389d) * 31) + this.f5390e) * 31, 31, this.a)) * 31);
    }
}
