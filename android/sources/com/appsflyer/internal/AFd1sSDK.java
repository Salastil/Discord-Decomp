package com.appsflyer.internal;

import kotlin.Pair;
import kotlin.jvm.internal.Intrinsics;
import org.jetbrains.annotations.NotNull;

/* loaded from: classes.dex */
public final class AFd1sSDK {
    public static boolean getCurrencyIso4217Code(@NotNull String str, @NotNull String str2) {
        Intrinsics.checkNotNullParameter(str, "");
        Intrinsics.checkNotNullParameter(str2, "");
        int mediationNetwork = AFk1zSDK.getMediationNetwork(str);
        int mediationNetwork2 = AFk1zSDK.getMediationNetwork(str2);
        Pair<Integer, Integer> currencyIso4217Code = AFd1rSDK.getCurrencyIso4217Code(str2);
        Pair<Integer, Integer> monetizationNetwork = AFd1rSDK.getMonetizationNetwork(str2);
        return (mediationNetwork2 == -1 || currencyIso4217Code != null) ? monetizationNetwork != null ? ((Number) monetizationNetwork.f13474d).intValue() <= mediationNetwork && mediationNetwork <= ((Number) monetizationNetwork.f13475e).intValue() : currencyIso4217Code != null && ((Number) currencyIso4217Code.f13474d).intValue() <= mediationNetwork && mediationNetwork <= ((Number) currencyIso4217Code.f13475e).intValue() : mediationNetwork2 == mediationNetwork;
    }
}
