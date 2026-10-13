package c4;

import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.content.IntentFilter;
import android.content.res.Configuration;
import android.net.ConnectivityManager;
import android.net.NetworkInfo;
import android.os.Parcelable;
import android.util.Log;
import com.facebook.react.bridge.Arguments;
import com.facebook.react.bridge.ReactContext;
import com.facebook.react.bridge.WritableMap;
import com.facebook.react.modules.core.DeviceEventManagerModule;
import com.google.firebase.messaging.FirebaseMessaging;
import com.google.firebase.messaging.u;
import gh.s;
import ke.d0;
import ke.t;
import kotlin.jvm.internal.Intrinsics;
import uh.n;
import v3.p;

/* loaded from: classes.dex */
public final class d extends BroadcastReceiver {
    public final /* synthetic */ int a;

    /* renamed from: b, reason: collision with root package name */
    public Object f3303b;

    public void a() {
        if (Log.isLoggable("FirebaseMessaging", 3)) {
            Log.d("FirebaseMessaging", "Connectivity change received registered");
        }
        ((u) this.f3303b).f6270i.f6191b.registerReceiver(this, new IntentFilter("android.net.conn.CONNECTIVITY_CHANGE"));
    }

    /* JADX WARN: Failed to restore switch over string. Please report as a decompilation issue
    java.lang.NullPointerException: Cannot invoke "java.util.List.iterator()" because the return value of "jadx.core.dex.visitors.regions.SwitchOverStringVisitor$SwitchData.getNewCases()" is null
    	at jadx.core.dex.visitors.regions.SwitchOverStringVisitor.restoreSwitchOverString(SwitchOverStringVisitor.java:109)
    	at jadx.core.dex.visitors.regions.SwitchOverStringVisitor.visitRegion(SwitchOverStringVisitor.java:66)
    	at jadx.core.dex.visitors.regions.DepthRegionTraversal.traverseIterativeStepInternal(DepthRegionTraversal.java:77)
    	at jadx.core.dex.visitors.regions.DepthRegionTraversal.traverseIterativeStepInternal(DepthRegionTraversal.java:82)
     */
    @Override // android.content.BroadcastReceiver
    public final void onReceive(Context context, Intent intent) {
        switch (this.a) {
            case 0:
                Intrinsics.checkNotNullParameter(context, "context");
                Intrinsics.checkNotNullParameter(intent, "intent");
                a aVar = (a) this.f3303b;
                switch (aVar.f3302g) {
                    case 0:
                        Intrinsics.checkNotNullParameter(intent, "intent");
                        String action = intent.getAction();
                        if (action != null) {
                            p.d().a(b.a, "Received ".concat(action));
                            switch (action.hashCode()) {
                                case -1886648615:
                                    if (action.equals("android.intent.action.ACTION_POWER_DISCONNECTED")) {
                                        aVar.b(Boolean.FALSE);
                                        break;
                                    }
                                    break;
                                case -54942926:
                                    if (action.equals("android.os.action.DISCHARGING")) {
                                        aVar.b(Boolean.FALSE);
                                        break;
                                    }
                                    break;
                                case 948344062:
                                    if (action.equals("android.os.action.CHARGING")) {
                                        aVar.b(Boolean.TRUE);
                                        break;
                                    }
                                    break;
                                case 1019184907:
                                    if (action.equals("android.intent.action.ACTION_POWER_CONNECTED")) {
                                        aVar.b(Boolean.TRUE);
                                        break;
                                    }
                                    break;
                            }
                        }
                        break;
                    case 1:
                        Intrinsics.checkNotNullParameter(intent, "intent");
                        if (intent.getAction() != null) {
                            p.d().a(c.a, "Received " + intent.getAction());
                            String action2 = intent.getAction();
                            if (action2 != null) {
                                int hashCode = action2.hashCode();
                                if (hashCode == -1980154005) {
                                    if (action2.equals("android.intent.action.BATTERY_OKAY")) {
                                        aVar.b(Boolean.TRUE);
                                        break;
                                    }
                                } else if (hashCode == 490310653 && action2.equals("android.intent.action.BATTERY_LOW")) {
                                    aVar.b(Boolean.FALSE);
                                    break;
                                }
                            }
                        }
                        break;
                    default:
                        Intrinsics.checkNotNullParameter(intent, "intent");
                        if (intent.getAction() != null) {
                            p.d().a(k.a, "Received " + intent.getAction());
                            String action3 = intent.getAction();
                            if (action3 != null) {
                                int hashCode2 = action3.hashCode();
                                if (hashCode2 == -1181163412) {
                                    if (action3.equals("android.intent.action.DEVICE_STORAGE_LOW")) {
                                        aVar.b(Boolean.FALSE);
                                        break;
                                    }
                                } else if (hashCode2 == -730838620 && action3.equals("android.intent.action.DEVICE_STORAGE_OK")) {
                                    aVar.b(Boolean.TRUE);
                                    break;
                                }
                            }
                        }
                        break;
                }
            case 1:
                u uVar = (u) this.f3303b;
                if (uVar != null && uVar.a()) {
                    if (Log.isLoggable("FirebaseMessaging", 3)) {
                        Log.d("FirebaseMessaging", "Connectivity changed. Starting background sync.");
                    }
                    u uVar2 = (u) this.f3303b;
                    uVar2.f6270i.getClass();
                    FirebaseMessaging.b(uVar2, 0L);
                    ((u) this.f3303b).f6270i.f6191b.unregisterReceiver(this);
                    this.f3303b = null;
                    break;
                }
                break;
            case 2:
                ((s) this.f3303b).j();
                break;
            case 3:
                if (!isInitialStickyBroadcast()) {
                    jc.j.a((jc.j) this.f3303b, jc.f.b(context, intent));
                    break;
                }
                break;
            case 4:
                ke.u uVar3 = (ke.u) this.f3303b;
                ConnectivityManager connectivityManager = (ConnectivityManager) context.getSystemService("connectivity");
                int i5 = 0;
                if (connectivityManager != null) {
                    try {
                        NetworkInfo activeNetworkInfo = connectivityManager.getActiveNetworkInfo();
                        if (activeNetworkInfo != null && activeNetworkInfo.isConnected()) {
                            int type = activeNetworkInfo.getType();
                            if (type != 0) {
                                if (type != 1) {
                                    if (type != 4 && type != 5) {
                                        if (type != 6) {
                                            i5 = type != 9 ? 8 : 7;
                                        }
                                        i5 = 5;
                                    }
                                }
                                i5 = 2;
                            }
                            switch (activeNetworkInfo.getSubtype()) {
                                case 1:
                                case 2:
                                    i5 = 3;
                                    break;
                                case 3:
                                case 4:
                                case 5:
                                case 6:
                                case 7:
                                case 8:
                                case 9:
                                case 10:
                                case 11:
                                case 12:
                                case 14:
                                case 15:
                                case 17:
                                    i5 = 4;
                                    break;
                                case 13:
                                    i5 = 5;
                                    break;
                                case 16:
                                case 19:
                                default:
                                    i5 = 6;
                                    break;
                                case 18:
                                    i5 = 2;
                                    break;
                                case 20:
                                    if (d0.a >= 29) {
                                        i5 = 9;
                                        break;
                                    }
                                    break;
                            }
                        } else {
                            i5 = 1;
                        }
                    } catch (SecurityException unused) {
                    }
                }
                if (d0.a >= 31 && i5 == 5) {
                    t.a(context, uVar3);
                    break;
                } else {
                    ke.u.a(uVar3, i5);
                    break;
                }
                break;
            case 5:
                Intrinsics.checkNotNullParameter(context, "context");
                Intrinsics.checkNotNullParameter(intent, "intent");
                Parcelable parcelableExtra = intent.getParcelableExtra("newConfig");
                Intrinsics.checkNotNull(parcelableExtra);
                int i6 = ((Configuration) parcelableExtra).orientation;
                ReactContext reactContext = ((rb.b) this.f3303b).f17183d;
                Intrinsics.checkNotNullParameter(reactContext, "reactContext");
                if (reactContext.hasActiveReactInstance()) {
                    String str = i6 == 1 ? "PORTRAIT" : "LANDSCAPE";
                    WritableMap createMap = Arguments.createMap();
                    createMap.putString("orientation", str);
                    ((DeviceEventManagerModule.RCTDeviceEventEmitter) reactContext.getJSModule(DeviceEventManagerModule.RCTDeviceEventEmitter.class)).emit("orientationDidChange", createMap);
                    break;
                }
                break;
            default:
                ((n) this.f3303b).b(intent);
                break;
        }
    }

    public /* synthetic */ d(int i5, Object obj) {
        this.a = i5;
        this.f3303b = obj;
    }
}
