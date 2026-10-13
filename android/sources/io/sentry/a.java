package io.sentry;

import com.reactnativecommunity.clipboard.ClipboardModule;

/* loaded from: classes3.dex */
public final class a {
    public final byte[] a;

    /* renamed from: b, reason: collision with root package name */
    public final io.sentry.protocol.i0 f10996b;

    /* renamed from: c, reason: collision with root package name */
    public final com.facebook.react.runtime.o f10997c;

    /* renamed from: d, reason: collision with root package name */
    public final String f10998d;

    /* renamed from: e, reason: collision with root package name */
    public final String f10999e;

    /* renamed from: f, reason: collision with root package name */
    public final String f11000f;

    public a(byte[] bArr) {
        this.a = bArr;
        this.f10996b = null;
        this.f10997c = null;
        this.f10998d = "thread-dump.txt";
        this.f10999e = "text/plain";
        this.f11000f = "event.attachment";
    }

    public a(io.sentry.protocol.i0 i0Var) {
        this.a = null;
        this.f10996b = i0Var;
        this.f10997c = null;
        this.f10998d = "view-hierarchy.json";
        this.f10999e = "application/json";
        this.f11000f = "event.view_hierarchy";
    }

    public a(com.facebook.react.runtime.o oVar) {
        this.a = null;
        this.f10996b = null;
        this.f10997c = oVar;
        this.f10998d = "screenshot.png";
        this.f10999e = ClipboardModule.MIMETYPE_PNG;
        this.f11000f = "event.attachment";
    }
}
