package com.google.android.exoplayer2.audio;

import hc.g;
import ke.d0;
import u4.b;

/* loaded from: classes3.dex */
public final class AudioAttributes implements g {

    /* renamed from: y, reason: collision with root package name */
    public static final AudioAttributes f5336y = new AudioAttributes(0, 0, 1, 1, 0);

    /* renamed from: d, reason: collision with root package name */
    public final int f5337d;

    /* renamed from: e, reason: collision with root package name */
    public final int f5338e;

    /* renamed from: i, reason: collision with root package name */
    public final int f5339i;

    /* renamed from: v, reason: collision with root package name */
    public final int f5340v;

    /* renamed from: w, reason: collision with root package name */
    public final int f5341w;

    /* renamed from: x, reason: collision with root package name */
    public b f5342x;

    static {
        int i5 = d0.a;
        Integer.toString(0, 36);
        Integer.toString(1, 36);
        Integer.toString(2, 36);
        Integer.toString(3, 36);
        Integer.toString(4, 36);
    }

    public AudioAttributes(int i5, int i6, int i10, int i11, int i12) {
        this.f5337d = i5;
        this.f5338e = i6;
        this.f5339i = i10;
        this.f5340v = i11;
        this.f5341w = i12;
    }

    public final b a() {
        if (this.f5342x == null) {
            this.f5342x = new b(this);
        }
        return this.f5342x;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj != null && AudioAttributes.class == obj.getClass()) {
            AudioAttributes audioAttributes = (AudioAttributes) obj;
            if (this.f5337d == audioAttributes.f5337d && this.f5338e == audioAttributes.f5338e && this.f5339i == audioAttributes.f5339i && this.f5340v == audioAttributes.f5340v && this.f5341w == audioAttributes.f5341w) {
                return true;
            }
        }
        return false;
    }

    public final int hashCode() {
        return ((((((((527 + this.f5337d) * 31) + this.f5338e) * 31) + this.f5339i) * 31) + this.f5340v) * 31) + this.f5341w;
    }
}
