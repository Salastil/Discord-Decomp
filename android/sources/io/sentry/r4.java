package io.sentry;

/* loaded from: classes3.dex */
public final class r4 {
    public boolean a;

    /* renamed from: b, reason: collision with root package name */
    public boolean f11926b;

    /* renamed from: c, reason: collision with root package name */
    public boolean f11927c;

    /* renamed from: d, reason: collision with root package name */
    public boolean f11928d;

    /* renamed from: e, reason: collision with root package name */
    public boolean f11929e;

    /* renamed from: f, reason: collision with root package name */
    public boolean f11930f;

    public final boolean a() {
        return this.f11927c;
    }

    public final boolean b() {
        return this.a;
    }

    public final boolean c() {
        return this.f11930f;
    }

    public final boolean d() {
        return this.f11928d;
    }

    public final boolean e() {
        return this.f11926b;
    }

    public final boolean f() {
        return this.f11929e;
    }

    public final void g(boolean z5) {
        this.f11927c = z5;
    }

    public final void h(boolean z5) {
        this.a = z5;
    }

    public final void i(boolean z5) {
        this.f11930f = z5;
    }

    public final void j(boolean z5) {
        this.f11928d = z5;
    }

    public final void k(boolean z5) {
        this.f11926b = z5;
    }

    public final void l(boolean z5) {
        this.f11929e = z5;
    }

    public final String toString() {
        StringBuilder sb2 = new StringBuilder("SentryFeedbackOptions{isNameRequired=");
        sb2.append(this.a);
        sb2.append(", showName=");
        sb2.append(this.f11926b);
        sb2.append(", isEmailRequired=");
        sb2.append(this.f11927c);
        sb2.append(", showEmail=");
        sb2.append(this.f11928d);
        sb2.append(", useSentryUser=");
        sb2.append(this.f11929e);
        sb2.append(", showBranding=");
        return com.discord.chat.bridge.botuikit.a.l(sb2, this.f11930f, ", formTitle='Report a Bug', submitButtonLabel='Send Bug Report', cancelButtonLabel='Cancel', nameLabel='Name', namePlaceholder='Your Name', emailLabel='Email', emailPlaceholder='your.email@example.org', isRequiredLabel=' (Required)', messageLabel='Description', messagePlaceholder='What's the bug? What did you expect?'}");
    }
}
