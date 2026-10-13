package io.sentry;

import java.util.AbstractMap;
import java.util.HashMap;
import java.util.List;

/* loaded from: classes3.dex */
public abstract class f4 {
    public String E;
    public io.sentry.protocol.h0 F;
    public transient Throwable G;
    public String H;
    public String I;
    public List J;
    public io.sentry.protocol.d K;
    public AbstractMap L;

    /* renamed from: d, reason: collision with root package name */
    public io.sentry.protocol.v f11543d;

    /* renamed from: e, reason: collision with root package name */
    public final io.sentry.protocol.c f11544e;

    /* renamed from: i, reason: collision with root package name */
    public io.sentry.protocol.t f11545i;

    /* renamed from: v, reason: collision with root package name */
    public io.sentry.protocol.p f11546v;

    /* renamed from: w, reason: collision with root package name */
    public AbstractMap f11547w;

    /* renamed from: x, reason: collision with root package name */
    public String f11548x;

    /* renamed from: y, reason: collision with root package name */
    public String f11549y;

    public f4(io.sentry.protocol.v vVar) {
        this.f11544e = new io.sentry.protocol.c();
        this.f11543d = vVar;
    }

    public final Throwable a() {
        Throwable th2 = this.G;
        return th2 instanceof io.sentry.exception.a ? ((io.sentry.exception.a) th2).f11533e : th2;
    }

    public final void b(Object obj, String str) {
        if (this.L == null) {
            this.L = new HashMap();
        }
        if (str == null) {
            return;
        }
        if (obj != null) {
            this.L.put(str, obj);
            return;
        }
        AbstractMap abstractMap = this.L;
        if (abstractMap != null) {
            abstractMap.remove(str);
        }
    }

    public final void c(String str, String str2) {
        if (this.f11547w == null) {
            this.f11547w = new HashMap();
        }
        if (str == null) {
            return;
        }
        if (str2 != null) {
            this.f11547w.put(str, str2);
            return;
        }
        AbstractMap abstractMap = this.f11547w;
        if (abstractMap != null) {
            abstractMap.remove(str);
        }
    }

    public f4() {
        this(new io.sentry.protocol.v());
    }
}
