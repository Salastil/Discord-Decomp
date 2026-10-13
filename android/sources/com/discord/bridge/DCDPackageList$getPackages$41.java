package com.discord.bridge;

import com.discord.audio.AudioManagerModule;
import com.facebook.react.bridge.NativeModule;
import com.facebook.react.bridge.ReactApplicationContext;
import kotlin.Metadata;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.FunctionReferenceImpl;
import kotlin.jvm.internal.Intrinsics;

@Metadata(k = 3, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public /* synthetic */ class DCDPackageList$getPackages$41 extends FunctionReferenceImpl implements Function1<ReactApplicationContext, NativeModule> {
    public DCDPackageList$getPackages$41(Object obj) {
        super(1, obj, AudioManagerModule.Companion.class, "create", "create(Lcom/facebook/react/bridge/ReactApplicationContext;)Lcom/facebook/react/bridge/NativeModule;", 0);
    }

    @Override // kotlin.jvm.functions.Function1
    public final NativeModule invoke(ReactApplicationContext p02) {
        Intrinsics.checkNotNullParameter(p02, "p0");
        return ((AudioManagerModule.Companion) this.receiver).create(p02);
    }
}
