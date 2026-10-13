package com.google.android.gms.ads.identifier;

/* loaded from: classes3.dex */
public final class AdvertisingIdClient$Info {
    public final String a;

    /* renamed from: b, reason: collision with root package name */
    public final boolean f5614b;

    public AdvertisingIdClient$Info(String str, boolean z5) {
        this.a = str;
        this.f5614b = z5;
    }

    public final String toString() {
        String str = this.a;
        StringBuilder sb2 = new StringBuilder(String.valueOf(str).length() + 7);
        sb2.append("{");
        sb2.append(str);
        sb2.append("}");
        sb2.append(this.f5614b);
        return sb2.toString();
    }
}
