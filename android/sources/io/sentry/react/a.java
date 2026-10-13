package io.sentry.react;

import io.sentry.Breadcrumb;
import io.sentry.Hint;
import io.sentry.IScope;
import io.sentry.g5;
import io.sentry.r3;

/* loaded from: classes3.dex */
public final /* synthetic */ class a implements g5, r3 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f11932d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ String f11933e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ String f11934i;

    public /* synthetic */ a(String str, String str2, int i5) {
        this.f11932d = i5;
        this.f11933e = str;
        this.f11934i = str2;
    }

    @Override // io.sentry.g5
    public Breadcrumb execute(Breadcrumb breadcrumb, Hint hint) {
        Breadcrumb lambda$getSentryAndroidOptions$2;
        lambda$getSentryAndroidOptions$2 = RNSentryModuleImpl.lambda$getSentryAndroidOptions$2(this.f11933e, this.f11934i, breadcrumb, hint);
        return lambda$getSentryAndroidOptions$2;
    }

    @Override // io.sentry.r3
    public void h(IScope iScope) {
        switch (this.f11932d) {
            case 1:
                iScope.j(this.f11933e, this.f11934i);
                break;
            default:
                iScope.f(this.f11933e, this.f11934i);
                break;
        }
    }
}
