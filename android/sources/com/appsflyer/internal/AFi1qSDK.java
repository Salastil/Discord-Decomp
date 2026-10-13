package com.appsflyer.internal;

import android.content.Context;
import android.net.ConnectivityManager;
import android.net.Network;
import android.net.NetworkCapabilities;
import android.net.NetworkInfo;
import com.appsflyer.AFLogger;
import com.discord.jank_stats.JankScreenContext;
import java.util.ArrayList;
import java.util.Iterator;
import kotlin.collections.x;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.SourceDebugExtension;
import kotlin.sequences.Sequence;
import kr.s;
import org.jetbrains.annotations.NotNull;

@SourceDebugExtension({"SMAP\nNetworkDataCollectorApi21.kt\nKotlin\n*S Kotlin\n*F\n+ 1 NetworkDataCollectorApi21.kt\ncom/appsflyer/internal/network/NetworkDataCollectorApi21\n+ 2 _Sequences.kt\nkotlin/sequences/SequencesKt___SequencesKt\n+ 3 fake.kt\nkotlin/jvm/internal/FakeKt\n+ 4 _Arrays.kt\nkotlin/collections/ArraysKt___ArraysKt\n+ 5 _Collections.kt\nkotlin/collections/CollectionsKt___CollectionsKt\n*L\n1#1,46:1\n179#2,2:47\n1#3:49\n1#3:60\n11653#4,9:50\n13579#4:59\n13580#4:61\n11662#4:62\n1747#5,3:63\n*S KotlinDebug\n*F\n+ 1 NetworkDataCollectorApi21.kt\ncom/appsflyer/internal/network/NetworkDataCollectorApi21\n*L\n17#1:47,2\n31#1:60\n31#1:50,9\n31#1:59\n31#1:61\n31#1:62\n33#1:63,3\n*E\n"})
/* loaded from: classes.dex */
public final class AFi1qSDK extends AFi1pSDK {
    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public AFi1qSDK(@NotNull Context context) {
        super(context);
        Intrinsics.checkNotNullParameter(context, "");
    }

    private static boolean w_(NetworkCapabilities networkCapabilities) {
        return (networkCapabilities == null || !networkCapabilities.hasTransport(4) || networkCapabilities.hasCapability(15)) ? false : true;
    }

    @Override // com.appsflyer.internal.AFi1pSDK
    @NotNull
    public final String getCurrencyIso4217Code() {
        Network[] allNetworks;
        Sequence o6;
        Object obj;
        ConnectivityManager connectivityManager = this.AFAdRevenueData;
        if (connectivityManager == null || (allNetworks = connectivityManager.getAllNetworks()) == null || (o6 = x.o(allNetworks)) == null) {
            return JankScreenContext.UNKNOWN_SCREEN;
        }
        kr.d dVar = new kr.d(s.o(o6, new Function1<Network, NetworkInfo>() { // from class: com.appsflyer.internal.AFi1qSDK.4
            {
                super(1);
            }

            @Override // kotlin.jvm.functions.Function1
            /* renamed from: x_, reason: merged with bridge method [inline-methods] */
            public final NetworkInfo invoke(Network network) {
                ConnectivityManager connectivityManager2 = AFi1qSDK.this.AFAdRevenueData;
                Intrinsics.checkNotNull(connectivityManager2);
                return connectivityManager2.getNetworkInfo(network);
            }
        }));
        while (true) {
            if (!dVar.hasNext()) {
                obj = null;
                break;
            }
            obj = dVar.next();
            if (AFi1pSDK.v_((NetworkInfo) obj)) {
                break;
            }
        }
        NetworkInfo networkInfo = (NetworkInfo) obj;
        if (networkInfo == null) {
            return JankScreenContext.UNKNOWN_SCREEN;
        }
        int type = networkInfo.getType();
        return type != 0 ? type != 1 ? JankScreenContext.UNKNOWN_SCREEN : "WIFI" : "MOBILE";
    }

    @Override // com.appsflyer.internal.AFi1pSDK
    public final boolean getRevenue() {
        Network[] allNetworks;
        try {
            ConnectivityManager connectivityManager = this.AFAdRevenueData;
            if (connectivityManager == null || (allNetworks = connectivityManager.getAllNetworks()) == null) {
                return false;
            }
            ArrayList arrayList = new ArrayList();
            for (Network network : allNetworks) {
                ConnectivityManager connectivityManager2 = this.AFAdRevenueData;
                Intrinsics.checkNotNull(connectivityManager2);
                NetworkCapabilities networkCapabilities = connectivityManager2.getNetworkCapabilities(network);
                if (networkCapabilities != null) {
                    arrayList.add(networkCapabilities);
                }
            }
            if (arrayList.isEmpty()) {
                return false;
            }
            Iterator it = arrayList.iterator();
            while (it.hasNext()) {
                if (w_((NetworkCapabilities) it.next())) {
                    return true;
                }
            }
            return false;
        } catch (Exception e9) {
            AFLogger.afErrorLog("Failed collecting ivc data", e9);
            return false;
        }
    }
}
