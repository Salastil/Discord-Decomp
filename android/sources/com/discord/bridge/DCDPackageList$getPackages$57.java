package com.discord.bridge;

import com.discord.key_commands.KeyCommandsModule;
import com.facebook.react.bridge.ReactApplicationContext;
import kotlin.Metadata;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.FunctionReferenceImpl;
import kotlin.jvm.internal.Intrinsics;

@Metadata(k = 3, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public /* synthetic */ class DCDPackageList$getPackages$57 extends FunctionReferenceImpl implements Function1<ReactApplicationContext, KeyCommandsModule> {
    public static final DCDPackageList$getPackages$57 INSTANCE = new DCDPackageList$getPackages$57();

    public DCDPackageList$getPackages$57() {
        super(1, KeyCommandsModule.class, "<init>", "<init>(Lcom/facebook/react/bridge/ReactApplicationContext;)V", 0);
    }

    @Override // kotlin.jvm.functions.Function1
    public final KeyCommandsModule invoke(ReactApplicationContext p02) {
        Intrinsics.checkNotNullParameter(p02, "p0");
        return new KeyCommandsModule(p02);
    }
}
