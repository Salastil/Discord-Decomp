package com.google.android.gms.internal.play_billing;

/* loaded from: classes3.dex */
public final class u {
    public final Object a;

    /* renamed from: b, reason: collision with root package name */
    public final Object f5846b;

    /* renamed from: c, reason: collision with root package name */
    public final Object f5847c;

    public u(Object obj, Object obj2, Object obj3) {
        this.a = obj;
        this.f5846b = obj2;
        this.f5847c = obj3;
    }

    public final IllegalArgumentException a() {
        Object obj = this.a;
        String valueOf = String.valueOf(obj);
        String valueOf2 = String.valueOf(this.f5846b);
        return new IllegalArgumentException(a3.e.n(a3.e.t("Multiple entries with same key: ", valueOf, "=", valueOf2, " and "), String.valueOf(obj), "=", String.valueOf(this.f5847c)));
    }
}
