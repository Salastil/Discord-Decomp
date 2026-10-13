package c4;

import android.net.ConnectivityManager;
import android.net.LinkProperties;
import android.net.Network;
import android.net.NetworkCapabilities;
import androidx.recyclerview.widget.h0;
import kotlin.jvm.internal.Intrinsics;
import v3.p;

/* loaded from: classes.dex */
public final class h extends ConnectivityManager.NetworkCallback {
    public final /* synthetic */ int a;

    /* renamed from: b, reason: collision with root package name */
    public final /* synthetic */ Object f3308b;

    public /* synthetic */ h(int i5, Object obj) {
        this.a = i5;
        this.f3308b = obj;
    }

    @Override // android.net.ConnectivityManager.NetworkCallback
    public void onAvailable(Network network) {
        switch (this.a) {
            case 1:
                ll.c cVar = (ll.c) this.f3308b;
                cVar.k = network;
                cVar.d(h0.DEFAULT_SWIPE_ANIMATION_DURATION);
                break;
            default:
                super.onAvailable(network);
                break;
        }
    }

    @Override // android.net.ConnectivityManager.NetworkCallback
    public final void onCapabilitiesChanged(Network network, NetworkCapabilities capabilities) {
        switch (this.a) {
            case 0:
                Intrinsics.checkNotNullParameter(network, "network");
                Intrinsics.checkNotNullParameter(capabilities, "capabilities");
                p.d().a(j.a, "Network capabilities changed: " + capabilities);
                i iVar = (i) this.f3308b;
                iVar.b(j.a(iVar.f3309f));
                break;
            default:
                ll.c cVar = (ll.c) this.f3308b;
                cVar.k = network;
                cVar.f14091l = capabilities;
                cVar.e();
                break;
        }
    }

    @Override // android.net.ConnectivityManager.NetworkCallback
    public void onLinkPropertiesChanged(Network network, LinkProperties linkProperties) {
        switch (this.a) {
            case 1:
                ll.c cVar = (ll.c) this.f3308b;
                if (cVar.k != null) {
                    cVar.k = network;
                }
                cVar.d(h0.DEFAULT_SWIPE_ANIMATION_DURATION);
                break;
            default:
                super.onLinkPropertiesChanged(network, linkProperties);
                break;
        }
    }

    @Override // android.net.ConnectivityManager.NetworkCallback
    public void onLosing(Network network, int i5) {
        switch (this.a) {
            case 1:
                ll.c cVar = (ll.c) this.f3308b;
                cVar.k = network;
                cVar.e();
                break;
            default:
                super.onLosing(network, i5);
                break;
        }
    }

    @Override // android.net.ConnectivityManager.NetworkCallback
    public final void onLost(Network network) {
        switch (this.a) {
            case 0:
                Intrinsics.checkNotNullParameter(network, "network");
                p.d().a(j.a, "Network connection lost");
                i iVar = (i) this.f3308b;
                iVar.b(j.a(iVar.f3309f));
                break;
            default:
                ll.c cVar = (ll.c) this.f3308b;
                cVar.k = null;
                cVar.f14091l = null;
                cVar.e();
                break;
        }
    }

    @Override // android.net.ConnectivityManager.NetworkCallback
    public void onUnavailable() {
        switch (this.a) {
            case 1:
                ll.c cVar = (ll.c) this.f3308b;
                cVar.k = null;
                cVar.f14091l = null;
                cVar.e();
                break;
            default:
                super.onUnavailable();
                break;
        }
    }
}
