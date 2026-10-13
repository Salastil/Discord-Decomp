package com.discord.apirequestconfig;

import com.discord.apirequestconfig.DiscordApiRequestConfig;
import kotlin.jvm.functions.Function0;
import kotlinx.serialization.KSerializer;

/* loaded from: classes.dex */
public final /* synthetic */ class b implements Function0 {
    @Override // kotlin.jvm.functions.Function0
    public final Object invoke() {
        KSerializer _childSerializers$_anonymous_;
        _childSerializers$_anonymous_ = DiscordApiRequestConfig.Blob._childSerializers$_anonymous_();
        return _childSerializers$_anonymous_;
    }
}
