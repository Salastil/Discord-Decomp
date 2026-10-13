package com.appsflyer.internal;

import android.text.TextUtils;
import com.appsflyer.AppsFlyerLib;
import java.util.Map;
import kotlin.Metadata;
import kotlin.Pair;
import kotlin.collections.v0;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u0000$\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0010\u000e\n\u0000\n\u0002\u0010$\n\u0000\n\u0002\u0010\u0012\n\u0002\b\u0002\n\u0002\u0010\u000b\n\u0002\b\u0004\u0018\u0000 \r2\u00020\u0001:\u0001\rBE\b\u0002\u0012\u0006\u0010\u0003\u001a\u00020\u0002\u0012\u0012\u0010\u0005\u001a\u000e\u0012\u0004\u0012\u00020\u0002\u0012\u0004\u0012\u00020\u00020\u0004\u0012\n\b\u0002\u0010\u0007\u001a\u0004\u0018\u00010\u0006\u0012\b\b\u0002\u0010\b\u001a\u00020\u0002\u0012\b\b\u0002\u0010\n\u001a\u00020\t¢\u0006\u0004\b\u000b\u0010\f"}, d2 = {"Lcom/appsflyer/internal/AFd1hSDK;", "Lcom/appsflyer/internal/AFd1dSDK;", "", "p0", "", "p1", "", "p2", "p3", "", "p4", "<init>", "(Ljava/lang/String;Ljava/util/Map;[BLjava/lang/String;Z)V", "AFa1tSDK"}, k = 1, mv = {1, 8, 0}, xi = 48)
/* loaded from: classes.dex */
public final class AFd1hSDK extends AFd1dSDK {

    /* renamed from: AFa1tSDK, reason: from kotlin metadata */
    @NotNull
    public static final Companion INSTANCE = new Companion(null);

    @Metadata(d1 = {"\u0000\u0014\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0002\n\u0002\u0010\u000e\n\u0002\b\t\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J=\u0010\n\u001a\u0006*\u00020\u00040\u00042\u0006\u0010\u0005\u001a\u00020\u00042\u0006\u0010\u0006\u001a\u00020\u00042\b\u0010\u0007\u001a\u0004\u0018\u00010\u00042\u0006\u0010\b\u001a\u00020\u00042\u0006\u0010\t\u001a\u00020\u0004H\u0007¢\u0006\u0004\b\n\u0010\u000bJ)\u0010\f\u001a\u00020\u00042\u0006\u0010\u0005\u001a\u00020\u00042\b\u0010\u0006\u001a\u0004\u0018\u00010\u00042\u0006\u0010\u0007\u001a\u00020\u0004H\u0002¢\u0006\u0004\b\f\u0010\r"}, d2 = {"Lcom/appsflyer/internal/AFd1hSDK$AFa1tSDK;", "", "<init>", "()V", "", "p0", "p1", "p2", "p3", "p4", "AFAdRevenueData", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", "getMediationNetwork", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;"}, k = 1, mv = {1, 8, 0}, xi = 48)
    /* renamed from: com.appsflyer.internal.AFd1hSDK$AFa1tSDK, reason: from kotlin metadata */
    public static final class Companion {
        private Companion() {
        }

        public static String AFAdRevenueData(@NotNull String p02, @NotNull String p12, String p22, @NotNull String p3, @NotNull String p42) {
            Intrinsics.checkNotNullParameter(p02, "");
            Intrinsics.checkNotNullParameter(p12, "");
            Intrinsics.checkNotNullParameter(p3, "");
            Intrinsics.checkNotNullParameter(p42, "");
            return AFj1bSDK.getRevenue(TextUtils.join("\u2063", new String[]{p42, p22, p02 + p12}), p3);
        }

        public static String getMediationNetwork(String p02, String p12, String p22) {
            return String.format(AFd1lSDK.getRevenue, AppsFlyerLib.getInstance().getHostPrefix(), AFa1uSDK.getMonetizationNetwork().getHostName()) + p02 + p22 + "?device_id=" + p12;
        }

        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }
    }

    public /* synthetic */ AFd1hSDK(String str, Map map, byte[] bArr, String str2, boolean z5, int i5, DefaultConstructorMarker defaultConstructorMarker) {
        this(str, map, (i5 & 4) != 0 ? null : bArr, (i5 & 8) != 0 ? "GET" : str2, (i5 & 16) != 0 ? false : z5);
    }

    @NotNull
    public static final AFd1hSDK AFAdRevenueData(@NotNull String str, String str2, @NotNull String str3, @NotNull String str4) {
        Intrinsics.checkNotNullParameter(str, "");
        Intrinsics.checkNotNullParameter(str3, "");
        Intrinsics.checkNotNullParameter(str4, "");
        String mediationNetwork = Companion.getMediationNetwork(str, str2, str3);
        String valueOf = String.valueOf(System.currentTimeMillis());
        AFd1hSDK aFd1hSDK = new AFd1hSDK(mediationNetwork, v0.g(new Pair("Connection", "close"), new Pair("af_request_epoch_ms", valueOf), new Pair("af_sig", Companion.AFAdRevenueData(str, str3, str2, str4, valueOf))), null, null, false, 28, null);
        aFd1hSDK.component3 = 10000;
        return aFd1hSDK;
    }

    private AFd1hSDK(String str, Map<String, String> map, byte[] bArr, String str2, boolean z5) {
        super(str, bArr, str2, map, z5);
    }
}
