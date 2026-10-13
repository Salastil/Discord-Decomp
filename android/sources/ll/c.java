package ll;

import android.net.Network;
import android.net.NetworkCapabilities;
import android.net.NetworkInfo;
import android.os.Build;
import android.os.Handler;
import android.os.Looper;
import c4.h;
import com.facebook.react.bridge.ReactApplicationContext;
import io.sentry.android.core.h1;

/* loaded from: classes3.dex */
public final class c extends b {
    public final h j;
    public Network k;

    /* renamed from: l, reason: collision with root package name */
    public NetworkCapabilities f14091l;

    public c(ReactApplicationContext reactApplicationContext) {
        super(reactApplicationContext);
        this.k = null;
        this.f14091l = null;
        this.j = new h(1, this);
    }

    public final void d(int i5) {
        new Handler(Looper.getMainLooper()).postDelayed(new h1(21, this), i5);
    }

    public final void e() {
        boolean z5;
        Network network = this.k;
        NetworkCapabilities networkCapabilities = this.f14091l;
        int i5 = 0;
        int i6 = 4;
        if (networkCapabilities != null) {
            int i10 = networkCapabilities.hasTransport(2) ? 1 : networkCapabilities.hasTransport(0) ? 2 : networkCapabilities.hasTransport(3) ? 3 : networkCapabilities.hasTransport(1) ? 6 : networkCapabilities.hasTransport(4) ? 8 : 5;
            NetworkInfo networkInfo = null;
            if (network != null) {
                try {
                    networkInfo = this.a.getNetworkInfo(network);
                } catch (SecurityException unused) {
                }
            }
            z5 = networkCapabilities.hasCapability(12) && networkCapabilities.hasCapability(16) && !(Build.VERSION.SDK_INT >= 28 ? networkCapabilities.hasCapability(21) ^ true : network != null && networkInfo != null && !networkInfo.getDetailedState().equals(NetworkInfo.DetailedState.CONNECTED));
            if (networkCapabilities.hasTransport(4)) {
                z5 = z5 && networkCapabilities.getLinkDownstreamBandwidthKbps() != 0;
            }
            if (network != null && i10 == 2 && z5 && networkInfo != null) {
                int subtype = networkInfo.getSubtype();
                if (subtype != 20) {
                    switch (subtype) {
                        case 1:
                        case 2:
                        case 4:
                        case 7:
                        case 11:
                            i5 = 1;
                            break;
                        case 3:
                        case 5:
                        case 6:
                        case 8:
                        case 9:
                        case 10:
                        case 12:
                        case 14:
                            i5 = 2;
                            break;
                        case 13:
                        case 15:
                            i5 = 3;
                            break;
                    }
                } else {
                    i5 = 4;
                }
            }
            i6 = i10;
        } else {
            z5 = false;
        }
        c(i6, i5, z5);
    }
}
