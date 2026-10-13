package com.discord.browser_manager;

import kotlin.Unit;
import kotlin.jvm.functions.Function0;

/* loaded from: classes.dex */
public final /* synthetic */ class e implements Function0 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f3802d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ BrowserManagerModule f3803e;

    public /* synthetic */ e(BrowserManagerModule browserManagerModule, int i5) {
        this.f3802d = i5;
        this.f3803e = browserManagerModule;
    }

    @Override // kotlin.jvm.functions.Function0
    public final Object invoke() {
        Unit openTrackedCustomTab$lambda$4$lambda$3;
        Unit resumeTrackedCustomTab$lambda$6$lambda$5;
        switch (this.f3802d) {
            case 0:
                openTrackedCustomTab$lambda$4$lambda$3 = BrowserManagerModule.openTrackedCustomTab$lambda$4$lambda$3(this.f3803e);
                return openTrackedCustomTab$lambda$4$lambda$3;
            default:
                resumeTrackedCustomTab$lambda$6$lambda$5 = BrowserManagerModule.resumeTrackedCustomTab$lambda$6$lambda$5(this.f3803e);
                return resumeTrackedCustomTab$lambda$6$lambda$5;
        }
    }
}
