package c4;

import android.net.ConnectivityManager;
import android.net.NetworkCapabilities;
import android.net.NetworkInfo;
import kotlin.jvm.internal.Intrinsics;
import v3.p;

/* loaded from: classes.dex */
public abstract class j {
    public static final String a;

    static {
        String f2 = p.f("NetworkStateTracker");
        Intrinsics.checkNotNullExpressionValue(f2, "tagWithPrefix(\"NetworkStateTracker\")");
        a = f2;
    }

    public static final a4.d a(ConnectivityManager connectivityManager) {
        boolean z5;
        NetworkCapabilities a10;
        Intrinsics.checkNotNullParameter(connectivityManager, "<this>");
        NetworkInfo activeNetworkInfo = connectivityManager.getActiveNetworkInfo();
        boolean z6 = activeNetworkInfo != null && activeNetworkInfo.isConnected();
        Intrinsics.checkNotNullParameter(connectivityManager, "<this>");
        try {
            a10 = f4.g.a(connectivityManager, f4.h.a(connectivityManager));
        } catch (SecurityException e9) {
            p.d().c(a, "Unable to validate active network", e9);
        }
        if (a10 != null) {
            z5 = f4.g.b(a10, 16);
            return new a4.d(z6, z5, connectivityManager.isActiveNetworkMetered(), activeNetworkInfo == null && !activeNetworkInfo.isRoaming());
        }
        z5 = false;
        return new a4.d(z6, z5, connectivityManager.isActiveNetworkMetered(), activeNetworkInfo == null && !activeNetworkInfo.isRoaming());
    }
}
