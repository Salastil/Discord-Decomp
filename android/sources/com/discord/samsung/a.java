package com.discord.samsung;

import java.util.function.Function;
import kotlin.Unit;

/* loaded from: classes.dex */
public final /* synthetic */ class a implements Function {
    public final /* synthetic */ int a;

    /* renamed from: b, reason: collision with root package name */
    public final /* synthetic */ SamsungModule f4367b;

    public /* synthetic */ a(SamsungModule samsungModule, int i5) {
        this.a = i5;
        this.f4367b = samsungModule;
    }

    @Override // java.util.function.Function
    public final Object apply(Object obj) {
        Unit accountUrlAndAuthCode$lambda$1;
        Unit handleAuthResult$lambda$2;
        Unit showConnectionDisclaimer$lambda$0;
        switch (this.a) {
            case 0:
                accountUrlAndAuthCode$lambda$1 = SamsungModule.getAccountUrlAndAuthCode$lambda$1(this.f4367b, (Throwable) obj);
                return accountUrlAndAuthCode$lambda$1;
            case 1:
                handleAuthResult$lambda$2 = SamsungModule.handleAuthResult$lambda$2(this.f4367b, (Throwable) obj);
                return handleAuthResult$lambda$2;
            default:
                showConnectionDisclaimer$lambda$0 = SamsungModule.showConnectionDisclaimer$lambda$0(this.f4367b, (Throwable) obj);
                return showConnectionDisclaimer$lambda$0;
        }
    }
}
