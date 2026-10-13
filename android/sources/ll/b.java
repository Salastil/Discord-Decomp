package ll;

import android.net.ConnectivityManager;
import android.net.wifi.WifiInfo;
import android.net.wifi.WifiManager;
import android.os.Build;
import android.telephony.TelephonyManager;
import com.facebook.react.bridge.Arguments;
import com.facebook.react.bridge.ReactApplicationContext;
import com.facebook.react.bridge.WritableMap;
import com.facebook.react.modules.core.DeviceEventManagerModule;
import f0.e;
import java.math.BigInteger;
import java.net.Inet4Address;
import java.net.InetAddress;
import java.net.InterfaceAddress;
import java.net.NetworkInterface;
import java.util.Enumeration;
import java.util.Iterator;
import java.util.Locale;
import k0.d;

/* loaded from: classes3.dex */
public abstract class b {
    public final ConnectivityManager a;

    /* renamed from: b, reason: collision with root package name */
    public final WifiManager f14083b;

    /* renamed from: c, reason: collision with root package name */
    public final TelephonyManager f14084c;

    /* renamed from: d, reason: collision with root package name */
    public final ReactApplicationContext f14085d;

    /* renamed from: e, reason: collision with root package name */
    public boolean f14086e = false;

    /* renamed from: f, reason: collision with root package name */
    public int f14087f = 5;

    /* renamed from: g, reason: collision with root package name */
    public int f14088g = 0;

    /* renamed from: h, reason: collision with root package name */
    public boolean f14089h = false;

    /* renamed from: i, reason: collision with root package name */
    public Boolean f14090i;

    public b(ReactApplicationContext reactApplicationContext) {
        this.f14085d = reactApplicationContext;
        this.a = (ConnectivityManager) reactApplicationContext.getSystemService("connectivity");
        this.f14083b = (WifiManager) reactApplicationContext.getApplicationContext().getSystemService("wifi");
        this.f14084c = (TelephonyManager) reactApplicationContext.getSystemService("phone");
    }

    public static String b(InetAddress inetAddress) {
        short s2;
        Iterator<InterfaceAddress> it = NetworkInterface.getByInetAddress(inetAddress).getInterfaceAddresses().iterator();
        while (true) {
            if (!it.hasNext()) {
                s2 = 0;
                break;
            }
            InterfaceAddress next = it.next();
            if (next.getAddress().getAddress().length == 4) {
                s2 = next.getNetworkPrefixLength();
                break;
            }
        }
        int i5 = (-1) << (32 - s2);
        Locale locale = Locale.US;
        return ((i5 >> 24) & 255) + "." + ((i5 >> 16) & 255) + "." + ((i5 >> 8) & 255) + "." + (i5 & 255);
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    /* JADX WARN: Code restructure failed: missing block: B:134:0x0096, code lost:
    
        if (r13.equals("ethernet") == false) goto L30;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final WritableMap a(String str) {
        String str2;
        WifiInfo connectionInfo;
        WritableMap createMap = Arguments.createMap();
        ReactApplicationContext reactApplicationContext = this.f14085d;
        int a = y0.b.a(reactApplicationContext, "android.permission.ACCESS_WIFI_STATE");
        WifiManager wifiManager = this.f14083b;
        boolean z5 = false;
        if (a == 0) {
            createMap.putBoolean("isWifiEnabled", wifiManager != null ? wifiManager.isWifiEnabled() : false);
        }
        createMap.putString("type", str != null ? str : d.b(this.f14087f));
        boolean z6 = (e.a(this.f14087f, 4) || e.a(this.f14087f, 5)) ? false : true;
        createMap.putBoolean("isConnected", z6);
        createMap.putBoolean("isInternetReachable", this.f14089h && (str == null || str.equals(d.b(this.f14087f))));
        if (str == null) {
            str = d.b(this.f14087f);
        }
        WritableMap createMap2 = Arguments.createMap();
        switch (str.hashCode()) {
            case -1419358249:
                break;
            case -916596374:
                if (str.equals("cellular")) {
                    z5 = true;
                    break;
                }
                z5 = -1;
                break;
            case 3649301:
                if (str.equals("wifi")) {
                    z5 = 2;
                    break;
                }
                z5 = -1;
                break;
            default:
                z5 = -1;
                break;
        }
        switch (z5) {
            case false:
                try {
                    Enumeration<NetworkInterface> networkInterfaces = NetworkInterface.getNetworkInterfaces();
                    while (true) {
                        if (!networkInterfaces.hasMoreElements()) {
                            break;
                        } else {
                            Enumeration<InetAddress> inetAddresses = networkInterfaces.nextElement().getInetAddresses();
                            while (inetAddresses.hasMoreElements()) {
                                InetAddress nextElement = inetAddresses.nextElement();
                                if (!nextElement.isLoopbackAddress() && (nextElement instanceof Inet4Address)) {
                                    createMap2.putString("ipAddress", nextElement.getHostAddress());
                                    createMap2.putString("subnet", b(nextElement));
                                    break;
                                }
                            }
                        }
                    }
                } catch (Exception e9) {
                    e9.printStackTrace();
                    break;
                }
                break;
            case true:
                int i5 = this.f14088g;
                if (i5 != 0) {
                    if (i5 == 1) {
                        str2 = "2g";
                    } else if (i5 == 2) {
                        str2 = "3g";
                    } else if (i5 == 3) {
                        str2 = "4g";
                    } else {
                        if (i5 != 4) {
                            throw null;
                        }
                        str2 = "5g";
                    }
                    createMap2.putString("cellularGeneration", str2);
                }
                String networkOperatorName = this.f14084c.getNetworkOperatorName();
                if (networkOperatorName != null) {
                    createMap2.putString("carrier", networkOperatorName);
                    break;
                }
                break;
            case true:
                if (y0.b.a(reactApplicationContext, "android.permission.ACCESS_WIFI_STATE") == 0 && wifiManager != null && (connectionInfo = wifiManager.getConnectionInfo()) != null) {
                    try {
                        String ssid = connectionInfo.getSSID();
                        if (ssid != null && !ssid.contains("<unknown ssid>")) {
                            createMap2.putString("ssid", ssid.replace("\"", ""));
                        }
                    } catch (Exception unused) {
                    }
                    try {
                        String bssid = connectionInfo.getBSSID();
                        if (bssid != null) {
                            createMap2.putString("bssid", bssid);
                        }
                    } catch (Exception unused2) {
                    }
                    try {
                        createMap2.putInt("strength", WifiManager.calculateSignalLevel(connectionInfo.getRssi(), 100));
                    } catch (Exception unused3) {
                    }
                    try {
                        createMap2.putInt("frequency", connectionInfo.getFrequency());
                    } catch (Exception unused4) {
                    }
                    try {
                        byte[] byteArray = BigInteger.valueOf(connectionInfo.getIpAddress()).toByteArray();
                        jf.a.j(byteArray);
                        createMap2.putString("ipAddress", InetAddress.getByAddress(byteArray).getHostAddress());
                    } catch (Exception unused5) {
                    }
                    try {
                        byte[] byteArray2 = BigInteger.valueOf(connectionInfo.getIpAddress()).toByteArray();
                        jf.a.j(byteArray2);
                        createMap2.putString("subnet", b(InetAddress.getByAddress(byteArray2)));
                    } catch (Exception unused6) {
                    }
                    try {
                        createMap2.putInt("linkSpeed", connectionInfo.getLinkSpeed());
                    } catch (Exception unused7) {
                    }
                    try {
                        if (Build.VERSION.SDK_INT >= 29) {
                            createMap2.putInt("rxLinkSpeed", connectionInfo.getRxLinkSpeedMbps());
                        }
                    } catch (Exception unused8) {
                    }
                    try {
                        if (Build.VERSION.SDK_INT >= 29) {
                            createMap2.putInt("txLinkSpeed", connectionInfo.getTxLinkSpeedMbps());
                            break;
                        }
                    } catch (Exception unused9) {
                        break;
                    }
                }
                break;
        }
        if (z6) {
            ConnectivityManager connectivityManager = this.a;
            createMap2.putBoolean("isConnectionExpensive", connectivityManager != null ? connectivityManager.isActiveNetworkMetered() : true);
        }
        createMap.putMap("details", createMap2);
        return createMap;
    }

    public final void c(int i5, int i6, boolean z5) {
        Boolean bool = this.f14090i;
        if (bool != null) {
            z5 = bool.booleanValue();
        }
        boolean z6 = i5 != this.f14087f;
        boolean z7 = i6 != this.f14088g;
        boolean z8 = z5 != this.f14089h;
        if (z6 || z7 || z8) {
            this.f14087f = i5;
            this.f14088g = i6;
            this.f14089h = z5;
            if (this.f14086e) {
                ((DeviceEventManagerModule.RCTDeviceEventEmitter) this.f14085d.getJSModule(DeviceEventManagerModule.RCTDeviceEventEmitter.class)).emit("netInfo.networkStatusDidChange", a(null));
            }
        }
    }
}
