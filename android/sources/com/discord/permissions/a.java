package com.discord.permissions;

import com.facebook.react.bridge.Promise;
import kotlin.Unit;
import kotlin.jvm.functions.Function1;

/* loaded from: classes.dex */
public final /* synthetic */ class a implements Function1 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f4327d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ NativePermissionManagerModule f4328e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ Promise f4329i;

    public /* synthetic */ a(NativePermissionManagerModule nativePermissionManagerModule, Promise promise, int i5) {
        this.f4327d = i5;
        this.f4328e = nativePermissionManagerModule;
        this.f4329i = promise;
    }

    @Override // kotlin.jvm.functions.Function1
    public final Object invoke(Object obj) {
        Unit requestForegroundServicePermissionScreenShareWithMic$lambda$4;
        Unit requestForegroundServicePermissionVoiceCall$lambda$3;
        Unit requestForegroundServicePermissionVoiceCall$lambda$3$lambda$1$lambda$0;
        switch (this.f4327d) {
            case 0:
                requestForegroundServicePermissionScreenShareWithMic$lambda$4 = NativePermissionManagerModule.requestForegroundServicePermissionScreenShareWithMic$lambda$4(this.f4328e, this.f4329i, (Promise) obj);
                return requestForegroundServicePermissionScreenShareWithMic$lambda$4;
            case 1:
                requestForegroundServicePermissionVoiceCall$lambda$3 = NativePermissionManagerModule.requestForegroundServicePermissionVoiceCall$lambda$3(this.f4328e, this.f4329i, (Promise) obj);
                return requestForegroundServicePermissionVoiceCall$lambda$3;
            default:
                requestForegroundServicePermissionVoiceCall$lambda$3$lambda$1$lambda$0 = NativePermissionManagerModule.requestForegroundServicePermissionVoiceCall$lambda$3$lambda$1$lambda$0(this.f4328e, this.f4329i, (Promise) obj);
                return requestForegroundServicePermissionVoiceCall$lambda$3$lambda$1$lambda$0;
        }
    }
}
