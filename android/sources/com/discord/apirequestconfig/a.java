package com.discord.apirequestconfig;

import kotlin.Unit;
import kotlin.jvm.functions.Function1;
import kotlinx.serialization.json.JsonBuilder;

/* loaded from: classes.dex */
public final /* synthetic */ class a implements Function1 {
    @Override // kotlin.jvm.functions.Function1
    public final Object invoke(Object obj) {
        Unit json$lambda$0;
        json$lambda$0 = DiscordApiRequestConfig.json$lambda$0((JsonBuilder) obj);
        return json$lambda$0;
    }
}
