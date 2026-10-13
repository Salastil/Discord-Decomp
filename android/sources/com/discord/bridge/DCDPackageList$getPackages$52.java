package com.discord.bridge;

import com.discord.file_manager.FileModule;
import com.facebook.react.bridge.ReactApplicationContext;
import kotlin.Metadata;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.FunctionReferenceImpl;
import kotlin.jvm.internal.Intrinsics;

@Metadata(k = 3, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public /* synthetic */ class DCDPackageList$getPackages$52 extends FunctionReferenceImpl implements Function1<ReactApplicationContext, FileModule> {
    public static final DCDPackageList$getPackages$52 INSTANCE = new DCDPackageList$getPackages$52();

    public DCDPackageList$getPackages$52() {
        super(1, FileModule.class, "<init>", "<init>(Lcom/facebook/react/bridge/ReactApplicationContext;)V", 0);
    }

    @Override // kotlin.jvm.functions.Function1
    public final FileModule invoke(ReactApplicationContext p02) {
        Intrinsics.checkNotNullParameter(p02, "p0");
        return new FileModule(p02);
    }
}
