package com.appsflyer.internal;

import kotlin.jvm.internal.Intrinsics;
import org.jetbrains.annotations.NotNull;

/* loaded from: classes.dex */
public final class AFg1ySDK {
    final int AFAdRevenueData;
    final int getCurrencyIso4217Code;

    @NotNull
    final String getMediationNetwork;
    final int getMonetizationNetwork;
    final int getRevenue;

    public AFg1ySDK(int i5, int i6, int i10, int i11, @NotNull String str) {
        Intrinsics.checkNotNullParameter(str, "");
        this.getCurrencyIso4217Code = i5;
        this.AFAdRevenueData = i6;
        this.getMonetizationNetwork = i10;
        this.getRevenue = i11;
        this.getMediationNetwork = str;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof AFg1ySDK)) {
            return false;
        }
        AFg1ySDK aFg1ySDK = (AFg1ySDK) obj;
        return this.getCurrencyIso4217Code == aFg1ySDK.getCurrencyIso4217Code && this.AFAdRevenueData == aFg1ySDK.AFAdRevenueData && this.getMonetizationNetwork == aFg1ySDK.getMonetizationNetwork && this.getRevenue == aFg1ySDK.getRevenue && Intrinsics.areEqual(this.getMediationNetwork, aFg1ySDK.getMediationNetwork);
    }

    public final int hashCode() {
        return this.getMediationNetwork.hashCode() + com.discord.chat.bridge.botuikit.a.u(this.getRevenue, com.discord.chat.bridge.botuikit.a.u(this.getMonetizationNetwork, com.discord.chat.bridge.botuikit.a.u(this.AFAdRevenueData, Integer.hashCode(this.getCurrencyIso4217Code) * 31, 31), 31), 31);
    }

    @NotNull
    public final String toString() {
        int i5 = this.getCurrencyIso4217Code;
        int i6 = this.AFAdRevenueData;
        int i10 = this.getMonetizationNetwork;
        int i11 = this.getRevenue;
        String str = this.getMediationNetwork;
        StringBuilder q5 = a3.e.q(i5, "CmpTcfData(policyVersion=", i6, ", gdprApplies=", ", cmpSdkId=");
        a3.e.y(q5, i10, ", cmpSdkVersion=", i11, ", tcString=");
        return com.discord.chat.bridge.botuikit.a.j(q5, str, ")");
    }
}
