package com.discord.socialrpc;

import com.discord.socialrpc.SocialRpcHttp;
import com.discord.socialrpc.SocialRpcNetworkConfig;
import kotlin.jvm.functions.Function0;
import kotlinx.serialization.KSerializer;

/* loaded from: classes.dex */
public final /* synthetic */ class c implements Function0 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f4376d;

    public /* synthetic */ c(int i5) {
        this.f4376d = i5;
    }

    @Override // kotlin.jvm.functions.Function0
    public final Object invoke() {
        KSerializer _childSerializers$_anonymous_;
        KSerializer _childSerializers$_anonymous_2;
        switch (this.f4376d) {
            case 0:
                _childSerializers$_anonymous_ = SocialRpcHttp.SessionUpdate._childSerializers$_anonymous_();
                return _childSerializers$_anonymous_;
            default:
                _childSerializers$_anonymous_2 = SocialRpcNetworkConfig.Blob._childSerializers$_anonymous_();
                return _childSerializers$_anonymous_2;
        }
    }
}
