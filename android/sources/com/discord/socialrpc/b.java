package com.discord.socialrpc;

import kotlin.Unit;
import kotlin.jvm.functions.Function1;
import kotlinx.serialization.json.JsonBuilder;
import kotlinx.serialization.json.JsonObjectBuilder;

/* loaded from: classes.dex */
public final /* synthetic */ class b implements Function1 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f4375d;

    public /* synthetic */ b(int i5) {
        this.f4375d = i5;
    }

    @Override // kotlin.jvm.functions.Function1
    public final Object invoke(Object obj) {
        Unit json$lambda$2;
        Unit json$lambda$0;
        Unit json$lambda$02;
        Unit sendReady$lambda$16$lambda$15$lambda$14;
        switch (this.f4375d) {
            case 0:
                json$lambda$2 = SocialRpcHttp.json$lambda$2((JsonBuilder) obj);
                return json$lambda$2;
            case 1:
                json$lambda$0 = SocialRpcNetworkConfig.json$lambda$0((JsonBuilder) obj);
                return json$lambda$0;
            case 2:
                json$lambda$02 = SocialRpcSessionManager.json$lambda$0((JsonBuilder) obj);
                return json$lambda$02;
            default:
                sendReady$lambda$16$lambda$15$lambda$14 = SocialRpcSessionManager.sendReady$lambda$16$lambda$15$lambda$14((JsonObjectBuilder) obj);
                return sendReady$lambda$16$lambda$15$lambda$14;
        }
    }
}
