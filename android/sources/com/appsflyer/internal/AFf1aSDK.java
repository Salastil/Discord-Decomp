package com.appsflyer.internal;

import kotlin.jvm.internal.Intrinsics;
import org.jetbrains.annotations.NotNull;

/* loaded from: classes.dex */
public final class AFf1aSDK {
    public final long getCurrencyIso4217Code;
    public final boolean getMediationNetwork;

    @NotNull
    public final String getMonetizationNetwork;

    public AFf1aSDK(@NotNull String str, long j, boolean z5) {
        Intrinsics.checkNotNullParameter(str, "");
        this.getMonetizationNetwork = str;
        this.getCurrencyIso4217Code = j;
        this.getMediationNetwork = z5;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof AFf1aSDK)) {
            return false;
        }
        AFf1aSDK aFf1aSDK = (AFf1aSDK) obj;
        return Intrinsics.areEqual(this.getMonetizationNetwork, aFf1aSDK.getMonetizationNetwork) && this.getCurrencyIso4217Code == aFf1aSDK.getCurrencyIso4217Code && this.getMediationNetwork == aFf1aSDK.getMediationNetwork;
    }

    /* JADX WARN: Multi-variable type inference failed */
    public final int hashCode() {
        int g6 = com.discord.chat.bridge.botuikit.a.g(this.getCurrencyIso4217Code, this.getMonetizationNetwork.hashCode() * 31, 31);
        boolean z5 = this.getMediationNetwork;
        int i5 = z5;
        if (z5 != 0) {
            i5 = 1;
        }
        return g6 + i5;
    }

    @NotNull
    public final String toString() {
        return "AFUninstallToken(token=" + this.getMonetizationNetwork + ", receivedTime=" + this.getCurrencyIso4217Code + ", isQueued=" + this.getMediationNetwork + ")";
    }
}
