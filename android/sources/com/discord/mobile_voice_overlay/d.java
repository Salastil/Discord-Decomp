package com.discord.mobile_voice_overlay;

import kotlin.Unit;
import kotlin.jvm.functions.Function0;

/* loaded from: classes.dex */
public final /* synthetic */ class d implements Function0 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f4293d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ MobileVoiceOverlayModule f4294e;

    public /* synthetic */ d(MobileVoiceOverlayModule mobileVoiceOverlayModule, int i5) {
        this.f4293d = i5;
        this.f4294e = mobileVoiceOverlayModule;
    }

    @Override // kotlin.jvm.functions.Function0
    public final Object invoke() {
        MobileVoiceOverlay mobileVoiceOverlay_delegate$lambda$2;
        Unit mobileVoiceOverlay_delegate$lambda$2$lambda$0;
        switch (this.f4293d) {
            case 0:
                mobileVoiceOverlay_delegate$lambda$2 = MobileVoiceOverlayModule.mobileVoiceOverlay_delegate$lambda$2(this.f4294e);
                return mobileVoiceOverlay_delegate$lambda$2;
            default:
                mobileVoiceOverlay_delegate$lambda$2$lambda$0 = MobileVoiceOverlayModule.mobileVoiceOverlay_delegate$lambda$2$lambda$0(this.f4294e);
                return mobileVoiceOverlay_delegate$lambda$2$lambda$0;
        }
    }
}
