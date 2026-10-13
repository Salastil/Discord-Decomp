package com.discord.browser_manager;

import com.facebook.react.bridge.Promise;
import kotlin.Unit;
import kotlin.jvm.functions.Function1;

/* loaded from: classes.dex */
public final /* synthetic */ class d implements Function1 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f3798d = 1;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ BrowserManagerModule f3799e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ BrowserManagerModule$openPlayStoreInline$listener$1 f3800i;

    /* renamed from: v, reason: collision with root package name */
    public final /* synthetic */ Promise f3801v;

    public /* synthetic */ d(BrowserManagerModule browserManagerModule, BrowserManagerModule$openPlayStoreInline$listener$1 browserManagerModule$openPlayStoreInline$listener$1, Promise promise) {
        this.f3799e = browserManagerModule;
        this.f3800i = browserManagerModule$openPlayStoreInline$listener$1;
        this.f3801v = promise;
    }

    @Override // kotlin.jvm.functions.Function1
    public final Object invoke(Object obj) {
        Unit openPlayStoreInline$lambda$7;
        Unit openPlayStoreInline$lambda$8;
        switch (this.f3798d) {
            case 0:
                openPlayStoreInline$lambda$7 = BrowserManagerModule.openPlayStoreInline$lambda$7(this.f3801v, this.f3799e, this.f3800i, ((Boolean) obj).booleanValue());
                return openPlayStoreInline$lambda$7;
            default:
                openPlayStoreInline$lambda$8 = BrowserManagerModule.openPlayStoreInline$lambda$8(this.f3799e, this.f3800i, this.f3801v, (Exception) obj);
                return openPlayStoreInline$lambda$8;
        }
    }

    public /* synthetic */ d(Promise promise, BrowserManagerModule browserManagerModule, BrowserManagerModule$openPlayStoreInline$listener$1 browserManagerModule$openPlayStoreInline$listener$1) {
        this.f3801v = promise;
        this.f3799e = browserManagerModule;
        this.f3800i = browserManagerModule$openPlayStoreInline$listener$1;
    }
}
