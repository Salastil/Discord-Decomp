package com.discord.appreview;

import com.discord.permissions.NativePermissionManagerModule;
import com.facebook.react.bridge.Promise;
import kotlin.Unit;
import kotlin.jvm.functions.Function0;

/* loaded from: classes.dex */
public final /* synthetic */ class a implements Function0 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f3758d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Promise f3759e;

    public /* synthetic */ a(Promise promise, int i5) {
        this.f3758d = i5;
        this.f3759e = promise;
    }

    @Override // kotlin.jvm.functions.Function0
    public final Object invoke() {
        Unit requestRating$lambda$0;
        Unit requestForegroundServicePermissionVoiceCall$lambda$3$lambda$2;
        switch (this.f3758d) {
            case 0:
                requestRating$lambda$0 = AppRatingRequestModule.requestRating$lambda$0(this.f3759e);
                return requestRating$lambda$0;
            default:
                requestForegroundServicePermissionVoiceCall$lambda$3$lambda$2 = NativePermissionManagerModule.requestForegroundServicePermissionVoiceCall$lambda$3$lambda$2(this.f3759e);
                return requestForegroundServicePermissionVoiceCall$lambda$3$lambda$2;
        }
    }
}
