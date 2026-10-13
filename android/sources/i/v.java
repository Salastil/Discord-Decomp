package i;

import android.content.Context;
import android.content.IntentFilter;
import android.location.Location;
import android.location.LocationManager;
import android.os.PowerManager;
import android.util.Log;
import com.discord.misc.utilities.logThrottle.LogThrottleSingleton;
import java.util.Calendar;

/* loaded from: classes.dex */
public final class v extends gh.s {

    /* renamed from: c, reason: collision with root package name */
    public final /* synthetic */ int f10359c = 0;

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ androidx.appcompat.app.a f10360d;

    /* renamed from: e, reason: collision with root package name */
    public final Object f10361e;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public v(androidx.appcompat.app.a aVar, e4.m mVar) {
        super(aVar);
        this.f10360d = aVar;
        this.f10361e = mVar;
    }

    @Override // gh.s
    public final IntentFilter e() {
        switch (this.f10359c) {
            case 0:
                IntentFilter intentFilter = new IntentFilter();
                intentFilter.addAction("android.os.action.POWER_SAVE_MODE_CHANGED");
                return intentFilter;
            default:
                IntentFilter intentFilter2 = new IntentFilter();
                intentFilter2.addAction("android.intent.action.TIME_SET");
                intentFilter2.addAction("android.intent.action.TIMEZONE_CHANGED");
                intentFilter2.addAction("android.intent.action.TIME_TICK");
                return intentFilter2;
        }
    }

    @Override // gh.s
    public final int f() {
        Location location;
        boolean z5;
        long j;
        Location location2;
        switch (this.f10359c) {
            case 0:
                return r.a((PowerManager) this.f10361e) ? 2 : 1;
            default:
                e4.m mVar = (e4.m) this.f10361e;
                g0 g0Var = (g0) mVar.f7965v;
                LocationManager locationManager = (LocationManager) mVar.f7964i;
                if (g0Var.f10314b > System.currentTimeMillis()) {
                    z5 = g0Var.a;
                } else {
                    Context context = (Context) mVar.f7963e;
                    Location location3 = null;
                    if (y0.d.a(context, "android.permission.ACCESS_COARSE_LOCATION") == 0) {
                        try {
                        } catch (Exception e9) {
                            Log.d("TwilightManager", "Failed to get last known location", e9);
                        }
                        if (locationManager.isProviderEnabled("network")) {
                            location2 = locationManager.getLastKnownLocation("network");
                            location = location2;
                        }
                        location2 = null;
                        location = location2;
                    } else {
                        location = null;
                    }
                    if (y0.d.a(context, "android.permission.ACCESS_FINE_LOCATION") == 0) {
                        try {
                            if (locationManager.isProviderEnabled("gps")) {
                                location3 = locationManager.getLastKnownLocation("gps");
                            }
                        } catch (Exception e10) {
                            Log.d("TwilightManager", "Failed to get last known location", e10);
                        }
                    }
                    if (location3 == null || location == null ? location3 != null : location3.getTime() > location.getTime()) {
                        location = location3;
                    }
                    if (location != null) {
                        long currentTimeMillis = System.currentTimeMillis();
                        if (f0.f10311d == null) {
                            f0.f10311d = new f0();
                        }
                        f0 f0Var = f0.f10311d;
                        f0Var.a(location.getLatitude(), location.getLongitude(), currentTimeMillis - 86400000);
                        f0Var.a(location.getLatitude(), location.getLongitude(), currentTimeMillis);
                        z5 = f0Var.f10313c == 1;
                        long j5 = f0Var.f10312b;
                        long j7 = f0Var.a;
                        f0Var.a(location.getLatitude(), location.getLongitude(), currentTimeMillis + 86400000);
                        long j10 = f0Var.f10312b;
                        if (j5 == -1 || j7 == -1) {
                            j = currentTimeMillis + 43200000;
                        } else {
                            if (currentTimeMillis > j7) {
                                j5 = j10;
                            } else if (currentTimeMillis > j5) {
                                j5 = j7;
                            }
                            j = j5 + LogThrottleSingleton.RATE_LIMIT_ONE_MINUTE;
                        }
                        g0Var.a = z5;
                        g0Var.f10314b = j;
                    } else {
                        Log.i("TwilightManager", "Could not get last known location. This is probably because the app does not have any location permissions. Falling back to hardcoded sunrise/sunset values.");
                        int i5 = Calendar.getInstance().get(11);
                        if (i5 < 6 || i5 >= 22) {
                            z5 = true;
                        }
                    }
                }
                return z5 ? 2 : 1;
        }
    }

    @Override // gh.s
    public final void j() {
        switch (this.f10359c) {
            case 0:
                this.f10360d.F(true, true);
                break;
            default:
                this.f10360d.F(true, true);
                break;
        }
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public v(androidx.appcompat.app.a aVar, Context context) {
        super(aVar);
        this.f10360d = aVar;
        this.f10361e = (PowerManager) context.getApplicationContext().getSystemService("power");
    }
}
