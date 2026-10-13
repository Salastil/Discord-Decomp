package ll;

import a3.h;
import a5.j0;
import android.content.Context;
import android.os.Build;
import android.os.Handler;
import com.facebook.react.bridge.ReactApplicationContext;
import com.reactnativecommunity.netinfo.NetInfoModule;

/* loaded from: classes3.dex */
public final class a {

    /* renamed from: b, reason: collision with root package name */
    public final Context f14078b;

    /* renamed from: c, reason: collision with root package name */
    public final NetInfoModule f14079c;

    /* renamed from: e, reason: collision with root package name */
    public Handler f14081e;
    public final j0 a = new j0(this);

    /* renamed from: d, reason: collision with root package name */
    public final h f14080d = new h(26, this);

    /* renamed from: f, reason: collision with root package name */
    public boolean f14082f = false;

    public a(ReactApplicationContext reactApplicationContext, NetInfoModule netInfoModule) {
        this.f14078b = reactApplicationContext;
        this.f14079c = netInfoModule;
    }

    public static boolean a() {
        if (!Build.MANUFACTURER.equals("Amazon")) {
            return false;
        }
        String str = Build.MODEL;
        return str.startsWith("AF") || str.startsWith("KF");
    }
}
