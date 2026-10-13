package com.discord.bridge;

import com.discord.mobile_voice_overlay.MobileVoiceOverlayModule;
import com.facebook.react.bridge.ReactApplicationContext;
import kotlin.Metadata;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.FunctionReferenceImpl;
import kotlin.jvm.internal.Intrinsics;

@Metadata(k = 3, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public /* synthetic */ class DCDPackageList$getPackages$61 extends FunctionReferenceImpl implements Function1<ReactApplicationContext, MobileVoiceOverlayModule> {
    public static final DCDPackageList$getPackages$61 INSTANCE = new DCDPackageList$getPackages$61();

    public DCDPackageList$getPackages$61() {
        super(1, MobileVoiceOverlayModule.class, "<init>", "<init>(Lcom/facebook/react/bridge/ReactApplicationContext;)V", 0);
    }

    @Override // kotlin.jvm.functions.Function1
    public final MobileVoiceOverlayModule invoke(ReactApplicationContext p02) {
        Intrinsics.checkNotNullParameter(p02, "p0");
        return new MobileVoiceOverlayModule(p02);
    }
}
