package com.discord.tti_manager;

import com.facebook.react.bridge.Promise;
import kotlin.Unit;
import kotlin.jvm.functions.Function1;

/* loaded from: classes3.dex */
public final /* synthetic */ class b implements Function1 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f4389d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ TTIManagerModule f4390e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ Promise f4391i;

    public /* synthetic */ b(TTIManagerModule tTIManagerModule, Promise promise, int i5) {
        this.f4389d = i5;
        this.f4390e = tTIManagerModule;
        this.f4391i = promise;
    }

    @Override // kotlin.jvm.functions.Function1
    public final Object invoke(Object obj) {
        Unit appStartType$lambda$0;
        Unit appFirstVisibleTimestamp$lambda$2;
        Long l6 = (Long) obj;
        switch (this.f4389d) {
            case 0:
                appStartType$lambda$0 = TTIManagerModule.getAppStartType$lambda$0(this.f4390e, this.f4391i, l6.longValue());
                return appStartType$lambda$0;
            default:
                appFirstVisibleTimestamp$lambda$2 = TTIManagerModule.getAppFirstVisibleTimestamp$lambda$2(this.f4390e, this.f4391i, l6.longValue());
                return appFirstVisibleTimestamp$lambda$2;
        }
    }
}
