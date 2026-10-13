package com.discord.bridge;

import com.discord.react_strings.I18nModule;
import com.facebook.react.bridge.ReactApplicationContext;
import kotlin.Metadata;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.FunctionReferenceImpl;
import kotlin.jvm.internal.Intrinsics;

@Metadata(k = 3, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public /* synthetic */ class DCDPackageList$getPackages$53 extends FunctionReferenceImpl implements Function1<ReactApplicationContext, I18nModule> {
    public static final DCDPackageList$getPackages$53 INSTANCE = new DCDPackageList$getPackages$53();

    public DCDPackageList$getPackages$53() {
        super(1, I18nModule.class, "<init>", "<init>(Lcom/facebook/react/bridge/ReactApplicationContext;)V", 0);
    }

    @Override // kotlin.jvm.functions.Function1
    public final I18nModule invoke(ReactApplicationContext p02) {
        Intrinsics.checkNotNullParameter(p02, "p0");
        return new I18nModule(p02);
    }
}
