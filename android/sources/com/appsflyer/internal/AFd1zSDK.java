package com.appsflyer.internal;

import java.util.List;
import org.jetbrains.annotations.NotNull;

/* loaded from: classes.dex */
public interface AFd1zSDK {
    int AFAdRevenueData();

    boolean getCurrencyIso4217Code();

    boolean getCurrencyIso4217Code(@NotNull String... strArr);

    @NotNull
    List<AFc1cSDK> getMediationNetwork();

    void getMediationNetwork(int i5, int i6);

    String getRevenue(@NotNull Throwable th2, @NotNull String str);
}
