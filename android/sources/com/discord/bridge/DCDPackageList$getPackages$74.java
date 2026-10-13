package com.discord.bridge;

import com.discord.media.engine.MediaEngineModule;
import com.facebook.react.bridge.ReactApplicationContext;
import kotlin.Metadata;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.FunctionReferenceImpl;
import kotlin.jvm.internal.Intrinsics;

@Metadata(k = 3, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public /* synthetic */ class DCDPackageList$getPackages$74 extends FunctionReferenceImpl implements Function1<ReactApplicationContext, MediaEngineModule> {
    public static final DCDPackageList$getPackages$74 INSTANCE = new DCDPackageList$getPackages$74();

    public DCDPackageList$getPackages$74() {
        super(1, MediaEngineModule.class, "<init>", "<init>(Lcom/facebook/react/bridge/ReactApplicationContext;)V", 0);
    }

    @Override // kotlin.jvm.functions.Function1
    public final MediaEngineModule invoke(ReactApplicationContext p02) {
        Intrinsics.checkNotNullParameter(p02, "p0");
        return new MediaEngineModule(p02);
    }
}
