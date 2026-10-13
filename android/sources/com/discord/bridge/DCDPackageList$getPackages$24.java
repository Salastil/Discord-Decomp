package com.discord.bridge;

import com.discord.sounds.SoundManagerModule;
import com.facebook.react.bridge.ReactApplicationContext;
import kotlin.Metadata;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.FunctionReferenceImpl;
import kotlin.jvm.internal.Intrinsics;

@Metadata(k = 3, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public /* synthetic */ class DCDPackageList$getPackages$24 extends FunctionReferenceImpl implements Function1<ReactApplicationContext, SoundManagerModule> {
    public static final DCDPackageList$getPackages$24 INSTANCE = new DCDPackageList$getPackages$24();

    public DCDPackageList$getPackages$24() {
        super(1, SoundManagerModule.class, "<init>", "<init>(Lcom/facebook/react/bridge/ReactApplicationContext;)V", 0);
    }

    @Override // kotlin.jvm.functions.Function1
    public final SoundManagerModule invoke(ReactApplicationContext p02) {
        Intrinsics.checkNotNullParameter(p02, "p0");
        return new SoundManagerModule(p02);
    }
}
