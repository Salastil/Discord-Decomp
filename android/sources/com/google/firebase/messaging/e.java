package com.google.firebase.messaging;

import android.app.Notification;
import android.app.NotificationChannel;
import android.app.NotificationManager;
import android.app.PendingIntent;
import android.content.Intent;
import android.content.pm.ApplicationInfo;
import android.content.pm.PackageManager;
import android.content.res.Resources;
import android.graphics.Color;
import android.graphics.drawable.AdaptiveIconDrawable;
import android.media.RingtoneManager;
import android.net.Uri;
import android.os.Build;
import android.os.Bundle;
import android.os.SystemClock;
import android.text.TextUtils;
import android.util.Log;
import androidx.core.app.NotificationCompat$Builder;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import java.util.concurrent.atomic.AtomicInteger;
import org.json.JSONArray;
import org.json.JSONException;

/* loaded from: classes3.dex */
public abstract class e {
    public static final AtomicInteger a = new AtomicInteger((int) SystemClock.elapsedRealtime());

    /* JADX WARN: Can't wrap try/catch for region: R(73:0|1|(3:2|3|(1:5))|224|7|8|(3:200|201|(71:203|(64:205|(1:207)|11|(1:13)|14|(1:16)|17|(55:19|(1:186)|23|(1:25)|26|(1:28)(2:176|(1:181)(1:180))|29|(1:31)|32|(1:34)(5:164|(1:166)|167|(1:169)(1:175)|(1:171)(2:172|(1:174)))|35|(1:37)(6:146|(4:149|(2:157|158)(1:155)|156|147)|159|160|(1:162)|163)|38|(1:40)(1:145)|(1:42)|43|(37:141|142|(1:49)|50|(1:52)|53|(31:132|(1:136)|(1:57)|58|(27:127|(1:131)|(1:62)|63|(23:124|(1:126)|(1:67)|68|(19:120|121|(1:72)|73|(3:110|111|(16:113|(1:115)|116|(1:77)|78|(4:95|96|97|(2:99|(10:101|(1:82)|83|(1:85)|86|(1:88)|89|(1:91)|92|93)(2:102|103))(2:104|105))|80|(0)|83|(0)|86|(0)|89|(0)|92|93)(2:117|118))|75|(0)|78|(0)|80|(0)|83|(0)|86|(0)|89|(0)|92|93)|70|(0)|73|(0)|75|(0)|78|(0)|80|(0)|83|(0)|86|(0)|89|(0)|92|93)|65|(0)|68|(0)|70|(0)|73|(0)|75|(0)|78|(0)|80|(0)|83|(0)|86|(0)|89|(0)|92|93)|60|(0)|63|(0)|65|(0)|68|(0)|70|(0)|73|(0)|75|(0)|78|(0)|80|(0)|83|(0)|86|(0)|89|(0)|92|93)|55|(0)|58|(0)|60|(0)|63|(0)|65|(0)|68|(0)|70|(0)|73|(0)|75|(0)|78|(0)|80|(0)|83|(0)|86|(0)|89|(0)|92|93)|45|(37:137|138|(0)|50|(0)|53|(0)|55|(0)|58|(0)|60|(0)|63|(0)|65|(0)|68|(0)|70|(0)|73|(0)|75|(0)|78|(0)|80|(0)|83|(0)|86|(0)|89|(0)|92|93)|47|(0)|50|(0)|53|(0)|55|(0)|58|(0)|60|(0)|63|(0)|65|(0)|68|(0)|70|(0)|73|(0)|75|(0)|78|(0)|80|(0)|83|(0)|86|(0)|89|(0)|92|93)|187|(2:195|196)|(1:194)|23|(0)|26|(0)(0)|29|(0)|32|(0)(0)|35|(0)(0)|38|(0)(0)|(0)|43|(0)|45|(0)|47|(0)|50|(0)|53|(0)|55|(0)|58|(0)|60|(0)|63|(0)|65|(0)|68|(0)|70|(0)|73|(0)|75|(0)|78|(0)|80|(0)|83|(0)|86|(0)|89|(0)|92|93)|208|(67:210|(1:212)|11|(0)|14|(0)|17|(0)|187|(1:189)|195|196|(1:192)|194|23|(0)|26|(0)(0)|29|(0)|32|(0)(0)|35|(0)(0)|38|(0)(0)|(0)|43|(0)|45|(0)|47|(0)|50|(0)|53|(0)|55|(0)|58|(0)|60|(0)|63|(0)|65|(0)|68|(0)|70|(0)|73|(0)|75|(0)|78|(0)|80|(0)|83|(0)|86|(0)|89|(0)|92|93)(1:220)|213|(3:215|(1:217)(1:219)|218)|11|(0)|14|(0)|17|(0)|187|(0)|195|196|(0)|194|23|(0)|26|(0)(0)|29|(0)|32|(0)(0)|35|(0)(0)|38|(0)(0)|(0)|43|(0)|45|(0)|47|(0)|50|(0)|53|(0)|55|(0)|58|(0)|60|(0)|63|(0)|65|(0)|68|(0)|70|(0)|73|(0)|75|(0)|78|(0)|80|(0)|83|(0)|86|(0)|89|(0)|92|93))|10|11|(0)|14|(0)|17|(0)|187|(0)|195|196|(0)|194|23|(0)|26|(0)(0)|29|(0)|32|(0)(0)|35|(0)(0)|38|(0)(0)|(0)|43|(0)|45|(0)|47|(0)|50|(0)|53|(0)|55|(0)|58|(0)|60|(0)|63|(0)|65|(0)|68|(0)|70|(0)|73|(0)|75|(0)|78|(0)|80|(0)|83|(0)|86|(0)|89|(0)|92|93) */
    /* JADX WARN: Code restructure failed: missing block: B:198:0x0163, code lost:
    
        r0 = move-exception;
     */
    /* JADX WARN: Code restructure failed: missing block: B:199:0x0164, code lost:
    
        android.util.Log.w("FirebaseMessaging", "Couldn't get own application info: " + r0);
     */
    /* JADX WARN: Code restructure failed: missing block: B:6:0x001a, code lost:
    
        if (r0 != null) goto L7;
     */
    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Removed duplicated region for block: B:110:0x0437 A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:120:0x03f5 A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:124:0x03c4  */
    /* JADX WARN: Removed duplicated region for block: B:127:0x038f  */
    /* JADX WARN: Removed duplicated region for block: B:132:0x0357  */
    /* JADX WARN: Removed duplicated region for block: B:137:0x0311 A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:13:0x00e7  */
    /* JADX WARN: Removed duplicated region for block: B:141:0x02ea A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:145:0x02ac  */
    /* JADX WARN: Removed duplicated region for block: B:146:0x0247  */
    /* JADX WARN: Removed duplicated region for block: B:164:0x0204  */
    /* JADX WARN: Removed duplicated region for block: B:16:0x00f9  */
    /* JADX WARN: Removed duplicated region for block: B:176:0x019e  */
    /* JADX WARN: Removed duplicated region for block: B:189:0x0156  */
    /* JADX WARN: Removed duplicated region for block: B:192:0x0175  */
    /* JADX WARN: Removed duplicated region for block: B:19:0x011a  */
    /* JADX WARN: Removed duplicated region for block: B:25:0x018f  */
    /* JADX WARN: Removed duplicated region for block: B:28:0x019c  */
    /* JADX WARN: Removed duplicated region for block: B:31:0x01d0  */
    /* JADX WARN: Removed duplicated region for block: B:34:0x01f6  */
    /* JADX WARN: Removed duplicated region for block: B:37:0x0245  */
    /* JADX WARN: Removed duplicated region for block: B:40:0x02aa  */
    /* JADX WARN: Removed duplicated region for block: B:42:0x02da  */
    /* JADX WARN: Removed duplicated region for block: B:49:0x0322  */
    /* JADX WARN: Removed duplicated region for block: B:52:0x0345  */
    /* JADX WARN: Removed duplicated region for block: B:57:0x037d  */
    /* JADX WARN: Removed duplicated region for block: B:62:0x03b4  */
    /* JADX WARN: Removed duplicated region for block: B:67:0x03e3  */
    /* JADX WARN: Removed duplicated region for block: B:72:0x0423  */
    /* JADX WARN: Removed duplicated region for block: B:77:0x0470  */
    /* JADX WARN: Removed duplicated region for block: B:82:0x04ed  */
    /* JADX WARN: Removed duplicated region for block: B:85:0x0504  */
    /* JADX WARN: Removed duplicated region for block: B:88:0x050e  */
    /* JADX WARN: Removed duplicated region for block: B:91:0x0522  */
    /* JADX WARN: Removed duplicated region for block: B:95:0x0482  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static h a(FirebaseMessagingService firebaseMessagingService, gj.c cVar) {
        Bundle bundle;
        String string;
        String packageName;
        PackageManager packageManager;
        String M;
        String M2;
        String O;
        int i5;
        String O2;
        Uri defaultUri;
        String O3;
        Intent launchIntentForPackage;
        PendingIntent activity;
        PendingIntent broadcast;
        String O4;
        Integer valueOf;
        String O5;
        Integer H;
        Integer H2;
        Integer H3;
        String O6;
        Long valueOf2;
        JSONArray K;
        long[] jArr;
        JSONArray K2;
        int[] iArr;
        String O7;
        int i6;
        try {
            ApplicationInfo applicationInfo = firebaseMessagingService.getPackageManager().getApplicationInfo(firebaseMessagingService.getPackageName(), IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT);
            if (applicationInfo != null) {
                bundle = applicationInfo.metaData;
            }
        } catch (PackageManager.NameNotFoundException e9) {
            Log.w("FirebaseMessaging", "Couldn't get own application info: " + e9);
        }
        bundle = Bundle.EMPTY;
        Bundle bundle2 = bundle;
        String O8 = cVar.O("gcm.n.android_channel_id");
        if (Build.VERSION.SDK_INT >= 26) {
            if (firebaseMessagingService.getPackageManager().getApplicationInfo(firebaseMessagingService.getPackageName(), 0).targetSdkVersion >= 26) {
                NotificationManager notificationManager = (NotificationManager) firebaseMessagingService.getSystemService(NotificationManager.class);
                if (!TextUtils.isEmpty(O8)) {
                    if (notificationManager.getNotificationChannel(O8) == null) {
                        Log.w("FirebaseMessaging", "Notification Channel requested (" + O8 + ") has not been created by the app. Manifest configuration, or default, value will be used.");
                    }
                    packageName = firebaseMessagingService.getPackageName();
                    Resources resources = firebaseMessagingService.getResources();
                    packageManager = firebaseMessagingService.getPackageManager();
                    NotificationCompat$Builder notificationCompat$Builder = new NotificationCompat$Builder(firebaseMessagingService, O8);
                    M = cVar.M(resources, packageName, "gcm.n.title");
                    if (!TextUtils.isEmpty(M)) {
                        notificationCompat$Builder.f1450e = NotificationCompat$Builder.e(M);
                    }
                    M2 = cVar.M(resources, packageName, "gcm.n.body");
                    if (!TextUtils.isEmpty(M2)) {
                        notificationCompat$Builder.f1451f = NotificationCompat$Builder.e(M2);
                        x0.y yVar = new x0.y(0);
                        yVar.f20239f = NotificationCompat$Builder.e(M2);
                        notificationCompat$Builder.j(yVar);
                    }
                    O = cVar.O("gcm.n.icon");
                    if (!TextUtils.isEmpty(O)) {
                        i5 = resources.getIdentifier(O, "drawable", packageName);
                        if ((i5 == 0 || !b(resources, i5)) && ((i5 = resources.getIdentifier(O, "mipmap", packageName)) == 0 || !b(resources, i5))) {
                            Log.w("FirebaseMessaging", "Icon resource " + O + " not found. Notification will use default icon.");
                        }
                        notificationCompat$Builder.N.icon = i5;
                        O2 = cVar.O("gcm.n.sound2");
                        if (TextUtils.isEmpty(O2)) {
                            O2 = cVar.O("gcm.n.sound");
                        }
                        if (TextUtils.isEmpty(O2)) {
                            defaultUri = null;
                        } else if ("default".equals(O2) || resources.getIdentifier(O2, "raw", packageName) == 0) {
                            defaultUri = RingtoneManager.getDefaultUri(2);
                        } else {
                            defaultUri = Uri.parse("android.resource://" + packageName + "/raw/" + O2);
                        }
                        if (defaultUri != null) {
                            Notification notification = notificationCompat$Builder.N;
                            notification.sound = defaultUri;
                            notification.audioStreamType = -1;
                            notification.audioAttributes = x0.c0.a(x0.c0.e(x0.c0.c(x0.c0.b(), 4), 5));
                        }
                        O3 = cVar.O("gcm.n.click_action");
                        if (TextUtils.isEmpty(O3)) {
                            String O9 = cVar.O("gcm.n.link_android");
                            if (TextUtils.isEmpty(O9)) {
                                O9 = cVar.O("gcm.n.link");
                            }
                            Uri parse = !TextUtils.isEmpty(O9) ? Uri.parse(O9) : null;
                            if (parse != null) {
                                launchIntentForPackage = new Intent("android.intent.action.VIEW");
                                launchIntentForPackage.setPackage(packageName);
                                launchIntentForPackage.setData(parse);
                            } else {
                                launchIntentForPackage = packageManager.getLaunchIntentForPackage(packageName);
                                if (launchIntentForPackage == null) {
                                    Log.w("FirebaseMessaging", "No activity found to launch app");
                                }
                            }
                        } else {
                            launchIntentForPackage = new Intent(O3);
                            launchIntentForPackage.setPackage(packageName);
                            launchIntentForPackage.setFlags(268435456);
                        }
                        AtomicInteger atomicInteger = a;
                        if (launchIntentForPackage == null) {
                            activity = null;
                        } else {
                            launchIntentForPackage.addFlags(67108864);
                            Bundle bundle3 = (Bundle) cVar.f9329e;
                            Bundle bundle4 = new Bundle(bundle3);
                            for (String str : bundle3.keySet()) {
                                if (str.startsWith("google.c.") || str.startsWith("gcm.n.") || str.startsWith("gcm.notification.")) {
                                    bundle4.remove(str);
                                }
                            }
                            launchIntentForPackage.putExtras(bundle4);
                            if (cVar.F("google.c.a.e")) {
                                launchIntentForPackage.putExtra("gcm.n.analytics_data", cVar.T());
                            }
                            activity = PendingIntent.getActivity(firebaseMessagingService, atomicInteger.incrementAndGet(), launchIntentForPackage, 1140850688);
                        }
                        notificationCompat$Builder.f1453h = activity;
                        broadcast = !cVar.F("google.c.a.e") ? null : PendingIntent.getBroadcast(firebaseMessagingService, atomicInteger.incrementAndGet(), new Intent("com.google.android.c2dm.intent.RECEIVE").setPackage(firebaseMessagingService.getPackageName()).putExtra("wrapped_intent", new Intent("com.google.firebase.messaging.NOTIFICATION_DISMISS").putExtras(cVar.T())), 1140850688);
                        if (broadcast != null) {
                            notificationCompat$Builder.N.deleteIntent = broadcast;
                        }
                        O4 = cVar.O("gcm.n.color");
                        if (!TextUtils.isEmpty(O4)) {
                            try {
                                valueOf = Integer.valueOf(Color.parseColor(O4));
                            } catch (IllegalArgumentException unused) {
                                Log.w("FirebaseMessaging", "Color is invalid: " + O4 + ". Notification will use default color.");
                            }
                            if (valueOf != null) {
                                notificationCompat$Builder.D = valueOf.intValue();
                            }
                            notificationCompat$Builder.g(16, !cVar.F("gcm.n.sticky"));
                            notificationCompat$Builder.f1468y = cVar.F("gcm.n.local_only");
                            O5 = cVar.O("gcm.n.ticker");
                            if (O5 != null) {
                                notificationCompat$Builder.N.tickerText = NotificationCompat$Builder.e(O5);
                            }
                            H = cVar.H("gcm.n.notification_priority");
                            if (H != null) {
                                if (H.intValue() < -2 || H.intValue() > 2) {
                                    Log.w("FirebaseMessaging", "notificationPriority is invalid " + H + ". Skipping setting notificationPriority.");
                                }
                                if (H != null) {
                                    notificationCompat$Builder.f1456m = H.intValue();
                                }
                                H2 = cVar.H("gcm.n.visibility");
                                if (H2 != null) {
                                    if (H2.intValue() < -1 || H2.intValue() > 1) {
                                        Log.w("NotificationParams", "visibility is invalid: " + H2 + ". Skipping setting visibility.");
                                    }
                                    if (H2 != null) {
                                        notificationCompat$Builder.E = H2.intValue();
                                    }
                                    H3 = cVar.H("gcm.n.notification_count");
                                    if (H3 != null) {
                                        if (H3.intValue() < 0) {
                                            Log.w("FirebaseMessaging", "notificationCount is invalid: " + H3 + ". Skipping setting notificationCount.");
                                        }
                                        if (H3 != null) {
                                            notificationCompat$Builder.f1455l = H3.intValue();
                                        }
                                        O6 = cVar.O("gcm.n.event_time");
                                        if (!TextUtils.isEmpty(O6)) {
                                            try {
                                                valueOf2 = Long.valueOf(Long.parseLong(O6));
                                            } catch (NumberFormatException unused2) {
                                                Log.w("NotificationParams", "Couldn't parse value of " + gj.c.U("gcm.n.event_time") + "(" + O6 + ") into a long");
                                            }
                                            if (valueOf2 != null) {
                                                notificationCompat$Builder.f1457n = true;
                                                notificationCompat$Builder.N.when = valueOf2.longValue();
                                            }
                                            K = cVar.K("gcm.n.vibrate_timings");
                                            if (K != null) {
                                                try {
                                                } catch (NumberFormatException | JSONException unused3) {
                                                    Log.w("NotificationParams", "User defined vibrateTimings is invalid: " + K + ". Skipping setting vibrateTimings.");
                                                }
                                                if (K.length() <= 1) {
                                                    throw new JSONException("vibrateTimings have invalid length");
                                                }
                                                int length = K.length();
                                                jArr = new long[length];
                                                for (int i10 = 0; i10 < length; i10++) {
                                                    jArr[i10] = K.optLong(i10);
                                                }
                                                if (jArr != null) {
                                                    notificationCompat$Builder.N.vibrate = jArr;
                                                }
                                                K2 = cVar.K("gcm.n.light_settings");
                                                if (K2 != null) {
                                                    int[] iArr2 = new int[3];
                                                    try {
                                                    } catch (IllegalArgumentException e10) {
                                                        Log.w("NotificationParams", "LightSettings is invalid: " + K2 + ". " + e10.getMessage() + ". Skipping setting LightSettings");
                                                    } catch (JSONException unused4) {
                                                        Log.w("NotificationParams", "LightSettings is invalid: " + K2 + ". Skipping setting LightSettings");
                                                    }
                                                    if (K2.length() != 3) {
                                                        throw new JSONException("lightSettings don't have all three fields");
                                                    }
                                                    int parseColor = Color.parseColor(K2.optString(0));
                                                    if (parseColor == -16777216) {
                                                        throw new IllegalArgumentException("Transparent color is invalid");
                                                    }
                                                    iArr2[0] = parseColor;
                                                    iArr2[1] = K2.optInt(1);
                                                    iArr2[2] = K2.optInt(2);
                                                    iArr = iArr2;
                                                    if (iArr != null) {
                                                        notificationCompat$Builder.i(iArr[0], iArr[1], iArr[2]);
                                                    }
                                                    boolean F = cVar.F("gcm.n.default_sound");
                                                    boolean z5 = F;
                                                    if (cVar.F("gcm.n.default_vibrate_timings")) {
                                                        z5 = (F ? 1 : 0) | 2;
                                                    }
                                                    int i11 = z5;
                                                    if (cVar.F("gcm.n.default_light_settings")) {
                                                        i11 = (z5 ? 1 : 0) | 4;
                                                    }
                                                    notificationCompat$Builder.f(i11);
                                                    O7 = cVar.O("gcm.n.tag");
                                                    if (TextUtils.isEmpty(O7)) {
                                                        O7 = "FCM-Notification:" + SystemClock.uptimeMillis();
                                                    }
                                                    return new h(notificationCompat$Builder, O7);
                                                }
                                                iArr = null;
                                                if (iArr != null) {
                                                }
                                                boolean F2 = cVar.F("gcm.n.default_sound");
                                                boolean z52 = F2;
                                                if (cVar.F("gcm.n.default_vibrate_timings")) {
                                                }
                                                int i112 = z52;
                                                if (cVar.F("gcm.n.default_light_settings")) {
                                                }
                                                notificationCompat$Builder.f(i112);
                                                O7 = cVar.O("gcm.n.tag");
                                                if (TextUtils.isEmpty(O7)) {
                                                }
                                                return new h(notificationCompat$Builder, O7);
                                            }
                                            jArr = null;
                                            if (jArr != null) {
                                            }
                                            K2 = cVar.K("gcm.n.light_settings");
                                            if (K2 != null) {
                                            }
                                            iArr = null;
                                            if (iArr != null) {
                                            }
                                            boolean F22 = cVar.F("gcm.n.default_sound");
                                            boolean z522 = F22;
                                            if (cVar.F("gcm.n.default_vibrate_timings")) {
                                            }
                                            int i1122 = z522;
                                            if (cVar.F("gcm.n.default_light_settings")) {
                                            }
                                            notificationCompat$Builder.f(i1122);
                                            O7 = cVar.O("gcm.n.tag");
                                            if (TextUtils.isEmpty(O7)) {
                                            }
                                            return new h(notificationCompat$Builder, O7);
                                        }
                                        valueOf2 = null;
                                        if (valueOf2 != null) {
                                        }
                                        K = cVar.K("gcm.n.vibrate_timings");
                                        if (K != null) {
                                        }
                                        jArr = null;
                                        if (jArr != null) {
                                        }
                                        K2 = cVar.K("gcm.n.light_settings");
                                        if (K2 != null) {
                                        }
                                        iArr = null;
                                        if (iArr != null) {
                                        }
                                        boolean F222 = cVar.F("gcm.n.default_sound");
                                        boolean z5222 = F222;
                                        if (cVar.F("gcm.n.default_vibrate_timings")) {
                                        }
                                        int i11222 = z5222;
                                        if (cVar.F("gcm.n.default_light_settings")) {
                                        }
                                        notificationCompat$Builder.f(i11222);
                                        O7 = cVar.O("gcm.n.tag");
                                        if (TextUtils.isEmpty(O7)) {
                                        }
                                        return new h(notificationCompat$Builder, O7);
                                    }
                                    H3 = null;
                                    if (H3 != null) {
                                    }
                                    O6 = cVar.O("gcm.n.event_time");
                                    if (!TextUtils.isEmpty(O6)) {
                                    }
                                    valueOf2 = null;
                                    if (valueOf2 != null) {
                                    }
                                    K = cVar.K("gcm.n.vibrate_timings");
                                    if (K != null) {
                                    }
                                    jArr = null;
                                    if (jArr != null) {
                                    }
                                    K2 = cVar.K("gcm.n.light_settings");
                                    if (K2 != null) {
                                    }
                                    iArr = null;
                                    if (iArr != null) {
                                    }
                                    boolean F2222 = cVar.F("gcm.n.default_sound");
                                    boolean z52222 = F2222;
                                    if (cVar.F("gcm.n.default_vibrate_timings")) {
                                    }
                                    int i112222 = z52222;
                                    if (cVar.F("gcm.n.default_light_settings")) {
                                    }
                                    notificationCompat$Builder.f(i112222);
                                    O7 = cVar.O("gcm.n.tag");
                                    if (TextUtils.isEmpty(O7)) {
                                    }
                                    return new h(notificationCompat$Builder, O7);
                                }
                                H2 = null;
                                if (H2 != null) {
                                }
                                H3 = cVar.H("gcm.n.notification_count");
                                if (H3 != null) {
                                }
                                H3 = null;
                                if (H3 != null) {
                                }
                                O6 = cVar.O("gcm.n.event_time");
                                if (!TextUtils.isEmpty(O6)) {
                                }
                                valueOf2 = null;
                                if (valueOf2 != null) {
                                }
                                K = cVar.K("gcm.n.vibrate_timings");
                                if (K != null) {
                                }
                                jArr = null;
                                if (jArr != null) {
                                }
                                K2 = cVar.K("gcm.n.light_settings");
                                if (K2 != null) {
                                }
                                iArr = null;
                                if (iArr != null) {
                                }
                                boolean F22222 = cVar.F("gcm.n.default_sound");
                                boolean z522222 = F22222;
                                if (cVar.F("gcm.n.default_vibrate_timings")) {
                                }
                                int i1122222 = z522222;
                                if (cVar.F("gcm.n.default_light_settings")) {
                                }
                                notificationCompat$Builder.f(i1122222);
                                O7 = cVar.O("gcm.n.tag");
                                if (TextUtils.isEmpty(O7)) {
                                }
                                return new h(notificationCompat$Builder, O7);
                            }
                            H = null;
                            if (H != null) {
                            }
                            H2 = cVar.H("gcm.n.visibility");
                            if (H2 != null) {
                            }
                            H2 = null;
                            if (H2 != null) {
                            }
                            H3 = cVar.H("gcm.n.notification_count");
                            if (H3 != null) {
                            }
                            H3 = null;
                            if (H3 != null) {
                            }
                            O6 = cVar.O("gcm.n.event_time");
                            if (!TextUtils.isEmpty(O6)) {
                            }
                            valueOf2 = null;
                            if (valueOf2 != null) {
                            }
                            K = cVar.K("gcm.n.vibrate_timings");
                            if (K != null) {
                            }
                            jArr = null;
                            if (jArr != null) {
                            }
                            K2 = cVar.K("gcm.n.light_settings");
                            if (K2 != null) {
                            }
                            iArr = null;
                            if (iArr != null) {
                            }
                            boolean F222222 = cVar.F("gcm.n.default_sound");
                            boolean z5222222 = F222222;
                            if (cVar.F("gcm.n.default_vibrate_timings")) {
                            }
                            int i11222222 = z5222222;
                            if (cVar.F("gcm.n.default_light_settings")) {
                            }
                            notificationCompat$Builder.f(i11222222);
                            O7 = cVar.O("gcm.n.tag");
                            if (TextUtils.isEmpty(O7)) {
                            }
                            return new h(notificationCompat$Builder, O7);
                        }
                        i6 = bundle2.getInt("com.google.firebase.messaging.default_notification_color", 0);
                        if (i6 != 0) {
                            try {
                                valueOf = Integer.valueOf(firebaseMessagingService.getColor(i6));
                            } catch (Resources.NotFoundException unused5) {
                                Log.w("FirebaseMessaging", "Cannot find the color resource referenced in AndroidManifest.");
                            }
                            if (valueOf != null) {
                            }
                            notificationCompat$Builder.g(16, !cVar.F("gcm.n.sticky"));
                            notificationCompat$Builder.f1468y = cVar.F("gcm.n.local_only");
                            O5 = cVar.O("gcm.n.ticker");
                            if (O5 != null) {
                            }
                            H = cVar.H("gcm.n.notification_priority");
                            if (H != null) {
                            }
                            H = null;
                            if (H != null) {
                            }
                            H2 = cVar.H("gcm.n.visibility");
                            if (H2 != null) {
                            }
                            H2 = null;
                            if (H2 != null) {
                            }
                            H3 = cVar.H("gcm.n.notification_count");
                            if (H3 != null) {
                            }
                            H3 = null;
                            if (H3 != null) {
                            }
                            O6 = cVar.O("gcm.n.event_time");
                            if (!TextUtils.isEmpty(O6)) {
                            }
                            valueOf2 = null;
                            if (valueOf2 != null) {
                            }
                            K = cVar.K("gcm.n.vibrate_timings");
                            if (K != null) {
                            }
                            jArr = null;
                            if (jArr != null) {
                            }
                            K2 = cVar.K("gcm.n.light_settings");
                            if (K2 != null) {
                            }
                            iArr = null;
                            if (iArr != null) {
                            }
                            boolean F2222222 = cVar.F("gcm.n.default_sound");
                            boolean z52222222 = F2222222;
                            if (cVar.F("gcm.n.default_vibrate_timings")) {
                            }
                            int i112222222 = z52222222;
                            if (cVar.F("gcm.n.default_light_settings")) {
                            }
                            notificationCompat$Builder.f(i112222222);
                            O7 = cVar.O("gcm.n.tag");
                            if (TextUtils.isEmpty(O7)) {
                            }
                            return new h(notificationCompat$Builder, O7);
                        }
                        valueOf = null;
                        if (valueOf != null) {
                        }
                        notificationCompat$Builder.g(16, !cVar.F("gcm.n.sticky"));
                        notificationCompat$Builder.f1468y = cVar.F("gcm.n.local_only");
                        O5 = cVar.O("gcm.n.ticker");
                        if (O5 != null) {
                        }
                        H = cVar.H("gcm.n.notification_priority");
                        if (H != null) {
                        }
                        H = null;
                        if (H != null) {
                        }
                        H2 = cVar.H("gcm.n.visibility");
                        if (H2 != null) {
                        }
                        H2 = null;
                        if (H2 != null) {
                        }
                        H3 = cVar.H("gcm.n.notification_count");
                        if (H3 != null) {
                        }
                        H3 = null;
                        if (H3 != null) {
                        }
                        O6 = cVar.O("gcm.n.event_time");
                        if (!TextUtils.isEmpty(O6)) {
                        }
                        valueOf2 = null;
                        if (valueOf2 != null) {
                        }
                        K = cVar.K("gcm.n.vibrate_timings");
                        if (K != null) {
                        }
                        jArr = null;
                        if (jArr != null) {
                        }
                        K2 = cVar.K("gcm.n.light_settings");
                        if (K2 != null) {
                        }
                        iArr = null;
                        if (iArr != null) {
                        }
                        boolean F22222222 = cVar.F("gcm.n.default_sound");
                        boolean z522222222 = F22222222;
                        if (cVar.F("gcm.n.default_vibrate_timings")) {
                        }
                        int i1122222222 = z522222222;
                        if (cVar.F("gcm.n.default_light_settings")) {
                        }
                        notificationCompat$Builder.f(i1122222222);
                        O7 = cVar.O("gcm.n.tag");
                        if (TextUtils.isEmpty(O7)) {
                        }
                        return new h(notificationCompat$Builder, O7);
                    }
                    i5 = bundle2.getInt("com.google.firebase.messaging.default_notification_icon", 0);
                    if (i5 != 0 || !b(resources, i5)) {
                        i5 = packageManager.getApplicationInfo(packageName, 0).icon;
                    }
                    if (i5 != 0 || !b(resources, i5)) {
                        i5 = 17301651;
                    }
                    notificationCompat$Builder.N.icon = i5;
                    O2 = cVar.O("gcm.n.sound2");
                    if (TextUtils.isEmpty(O2)) {
                    }
                    if (TextUtils.isEmpty(O2)) {
                    }
                    if (defaultUri != null) {
                    }
                    O3 = cVar.O("gcm.n.click_action");
                    if (TextUtils.isEmpty(O3)) {
                    }
                    AtomicInteger atomicInteger2 = a;
                    if (launchIntentForPackage == null) {
                    }
                    notificationCompat$Builder.f1453h = activity;
                    if (!cVar.F("google.c.a.e")) {
                    }
                    if (broadcast != null) {
                    }
                    O4 = cVar.O("gcm.n.color");
                    if (!TextUtils.isEmpty(O4)) {
                    }
                    i6 = bundle2.getInt("com.google.firebase.messaging.default_notification_color", 0);
                    if (i6 != 0) {
                    }
                    valueOf = null;
                    if (valueOf != null) {
                    }
                    notificationCompat$Builder.g(16, !cVar.F("gcm.n.sticky"));
                    notificationCompat$Builder.f1468y = cVar.F("gcm.n.local_only");
                    O5 = cVar.O("gcm.n.ticker");
                    if (O5 != null) {
                    }
                    H = cVar.H("gcm.n.notification_priority");
                    if (H != null) {
                    }
                    H = null;
                    if (H != null) {
                    }
                    H2 = cVar.H("gcm.n.visibility");
                    if (H2 != null) {
                    }
                    H2 = null;
                    if (H2 != null) {
                    }
                    H3 = cVar.H("gcm.n.notification_count");
                    if (H3 != null) {
                    }
                    H3 = null;
                    if (H3 != null) {
                    }
                    O6 = cVar.O("gcm.n.event_time");
                    if (!TextUtils.isEmpty(O6)) {
                    }
                    valueOf2 = null;
                    if (valueOf2 != null) {
                    }
                    K = cVar.K("gcm.n.vibrate_timings");
                    if (K != null) {
                    }
                    jArr = null;
                    if (jArr != null) {
                    }
                    K2 = cVar.K("gcm.n.light_settings");
                    if (K2 != null) {
                    }
                    iArr = null;
                    if (iArr != null) {
                    }
                    boolean F222222222 = cVar.F("gcm.n.default_sound");
                    boolean z5222222222 = F222222222;
                    if (cVar.F("gcm.n.default_vibrate_timings")) {
                    }
                    int i11222222222 = z5222222222;
                    if (cVar.F("gcm.n.default_light_settings")) {
                    }
                    notificationCompat$Builder.f(i11222222222);
                    O7 = cVar.O("gcm.n.tag");
                    if (TextUtils.isEmpty(O7)) {
                    }
                    return new h(notificationCompat$Builder, O7);
                }
                O8 = bundle2.getString("com.google.firebase.messaging.default_notification_channel_id");
                if (!TextUtils.isEmpty(O8)) {
                    if (notificationManager.getNotificationChannel(O8) == null) {
                        Log.w("FirebaseMessaging", "Notification Channel set in AndroidManifest.xml has not been created by the app. Default value will be used.");
                    }
                    packageName = firebaseMessagingService.getPackageName();
                    Resources resources2 = firebaseMessagingService.getResources();
                    packageManager = firebaseMessagingService.getPackageManager();
                    NotificationCompat$Builder notificationCompat$Builder2 = new NotificationCompat$Builder(firebaseMessagingService, O8);
                    M = cVar.M(resources2, packageName, "gcm.n.title");
                    if (!TextUtils.isEmpty(M)) {
                    }
                    M2 = cVar.M(resources2, packageName, "gcm.n.body");
                    if (!TextUtils.isEmpty(M2)) {
                    }
                    O = cVar.O("gcm.n.icon");
                    if (!TextUtils.isEmpty(O)) {
                    }
                    i5 = bundle2.getInt("com.google.firebase.messaging.default_notification_icon", 0);
                    if (i5 != 0) {
                    }
                    i5 = packageManager.getApplicationInfo(packageName, 0).icon;
                    if (i5 != 0) {
                    }
                    i5 = 17301651;
                    notificationCompat$Builder2.N.icon = i5;
                    O2 = cVar.O("gcm.n.sound2");
                    if (TextUtils.isEmpty(O2)) {
                    }
                    if (TextUtils.isEmpty(O2)) {
                    }
                    if (defaultUri != null) {
                    }
                    O3 = cVar.O("gcm.n.click_action");
                    if (TextUtils.isEmpty(O3)) {
                    }
                    AtomicInteger atomicInteger22 = a;
                    if (launchIntentForPackage == null) {
                    }
                    notificationCompat$Builder2.f1453h = activity;
                    if (!cVar.F("google.c.a.e")) {
                    }
                    if (broadcast != null) {
                    }
                    O4 = cVar.O("gcm.n.color");
                    if (!TextUtils.isEmpty(O4)) {
                    }
                    i6 = bundle2.getInt("com.google.firebase.messaging.default_notification_color", 0);
                    if (i6 != 0) {
                    }
                    valueOf = null;
                    if (valueOf != null) {
                    }
                    notificationCompat$Builder2.g(16, !cVar.F("gcm.n.sticky"));
                    notificationCompat$Builder2.f1468y = cVar.F("gcm.n.local_only");
                    O5 = cVar.O("gcm.n.ticker");
                    if (O5 != null) {
                    }
                    H = cVar.H("gcm.n.notification_priority");
                    if (H != null) {
                    }
                    H = null;
                    if (H != null) {
                    }
                    H2 = cVar.H("gcm.n.visibility");
                    if (H2 != null) {
                    }
                    H2 = null;
                    if (H2 != null) {
                    }
                    H3 = cVar.H("gcm.n.notification_count");
                    if (H3 != null) {
                    }
                    H3 = null;
                    if (H3 != null) {
                    }
                    O6 = cVar.O("gcm.n.event_time");
                    if (!TextUtils.isEmpty(O6)) {
                    }
                    valueOf2 = null;
                    if (valueOf2 != null) {
                    }
                    K = cVar.K("gcm.n.vibrate_timings");
                    if (K != null) {
                    }
                    jArr = null;
                    if (jArr != null) {
                    }
                    K2 = cVar.K("gcm.n.light_settings");
                    if (K2 != null) {
                    }
                    iArr = null;
                    if (iArr != null) {
                    }
                    boolean F2222222222 = cVar.F("gcm.n.default_sound");
                    boolean z52222222222 = F2222222222;
                    if (cVar.F("gcm.n.default_vibrate_timings")) {
                    }
                    int i112222222222 = z52222222222;
                    if (cVar.F("gcm.n.default_light_settings")) {
                    }
                    notificationCompat$Builder2.f(i112222222222);
                    O7 = cVar.O("gcm.n.tag");
                    if (TextUtils.isEmpty(O7)) {
                    }
                    return new h(notificationCompat$Builder2, O7);
                }
                Log.w("FirebaseMessaging", "Missing Default Notification Channel metadata in AndroidManifest. Default value will be used.");
                O8 = "fcm_fallback_notification_channel";
                if (notificationManager.getNotificationChannel("fcm_fallback_notification_channel") == null) {
                    int identifier = firebaseMessagingService.getResources().getIdentifier("fcm_fallback_notification_channel_label", "string", firebaseMessagingService.getPackageName());
                    if (identifier == 0) {
                        Log.e("FirebaseMessaging", "String resource \"fcm_fallback_notification_channel_label\" is not found. Using default string channel name.");
                        string = "Misc";
                    } else {
                        string = firebaseMessagingService.getString(identifier);
                    }
                    notificationManager.createNotificationChannel(new NotificationChannel("fcm_fallback_notification_channel", string, 3));
                }
                packageName = firebaseMessagingService.getPackageName();
                Resources resources22 = firebaseMessagingService.getResources();
                packageManager = firebaseMessagingService.getPackageManager();
                NotificationCompat$Builder notificationCompat$Builder22 = new NotificationCompat$Builder(firebaseMessagingService, O8);
                M = cVar.M(resources22, packageName, "gcm.n.title");
                if (!TextUtils.isEmpty(M)) {
                }
                M2 = cVar.M(resources22, packageName, "gcm.n.body");
                if (!TextUtils.isEmpty(M2)) {
                }
                O = cVar.O("gcm.n.icon");
                if (!TextUtils.isEmpty(O)) {
                }
                i5 = bundle2.getInt("com.google.firebase.messaging.default_notification_icon", 0);
                if (i5 != 0) {
                }
                i5 = packageManager.getApplicationInfo(packageName, 0).icon;
                if (i5 != 0) {
                }
                i5 = 17301651;
                notificationCompat$Builder22.N.icon = i5;
                O2 = cVar.O("gcm.n.sound2");
                if (TextUtils.isEmpty(O2)) {
                }
                if (TextUtils.isEmpty(O2)) {
                }
                if (defaultUri != null) {
                }
                O3 = cVar.O("gcm.n.click_action");
                if (TextUtils.isEmpty(O3)) {
                }
                AtomicInteger atomicInteger222 = a;
                if (launchIntentForPackage == null) {
                }
                notificationCompat$Builder22.f1453h = activity;
                if (!cVar.F("google.c.a.e")) {
                }
                if (broadcast != null) {
                }
                O4 = cVar.O("gcm.n.color");
                if (!TextUtils.isEmpty(O4)) {
                }
                i6 = bundle2.getInt("com.google.firebase.messaging.default_notification_color", 0);
                if (i6 != 0) {
                }
                valueOf = null;
                if (valueOf != null) {
                }
                notificationCompat$Builder22.g(16, !cVar.F("gcm.n.sticky"));
                notificationCompat$Builder22.f1468y = cVar.F("gcm.n.local_only");
                O5 = cVar.O("gcm.n.ticker");
                if (O5 != null) {
                }
                H = cVar.H("gcm.n.notification_priority");
                if (H != null) {
                }
                H = null;
                if (H != null) {
                }
                H2 = cVar.H("gcm.n.visibility");
                if (H2 != null) {
                }
                H2 = null;
                if (H2 != null) {
                }
                H3 = cVar.H("gcm.n.notification_count");
                if (H3 != null) {
                }
                H3 = null;
                if (H3 != null) {
                }
                O6 = cVar.O("gcm.n.event_time");
                if (!TextUtils.isEmpty(O6)) {
                }
                valueOf2 = null;
                if (valueOf2 != null) {
                }
                K = cVar.K("gcm.n.vibrate_timings");
                if (K != null) {
                }
                jArr = null;
                if (jArr != null) {
                }
                K2 = cVar.K("gcm.n.light_settings");
                if (K2 != null) {
                }
                iArr = null;
                if (iArr != null) {
                }
                boolean F22222222222 = cVar.F("gcm.n.default_sound");
                boolean z522222222222 = F22222222222;
                if (cVar.F("gcm.n.default_vibrate_timings")) {
                }
                int i1122222222222 = z522222222222;
                if (cVar.F("gcm.n.default_light_settings")) {
                }
                notificationCompat$Builder22.f(i1122222222222);
                O7 = cVar.O("gcm.n.tag");
                if (TextUtils.isEmpty(O7)) {
                }
                return new h(notificationCompat$Builder22, O7);
            }
        }
        O8 = null;
        packageName = firebaseMessagingService.getPackageName();
        Resources resources222 = firebaseMessagingService.getResources();
        packageManager = firebaseMessagingService.getPackageManager();
        NotificationCompat$Builder notificationCompat$Builder222 = new NotificationCompat$Builder(firebaseMessagingService, O8);
        M = cVar.M(resources222, packageName, "gcm.n.title");
        if (!TextUtils.isEmpty(M)) {
        }
        M2 = cVar.M(resources222, packageName, "gcm.n.body");
        if (!TextUtils.isEmpty(M2)) {
        }
        O = cVar.O("gcm.n.icon");
        if (!TextUtils.isEmpty(O)) {
        }
        i5 = bundle2.getInt("com.google.firebase.messaging.default_notification_icon", 0);
        if (i5 != 0) {
        }
        i5 = packageManager.getApplicationInfo(packageName, 0).icon;
        if (i5 != 0) {
        }
        i5 = 17301651;
        notificationCompat$Builder222.N.icon = i5;
        O2 = cVar.O("gcm.n.sound2");
        if (TextUtils.isEmpty(O2)) {
        }
        if (TextUtils.isEmpty(O2)) {
        }
        if (defaultUri != null) {
        }
        O3 = cVar.O("gcm.n.click_action");
        if (TextUtils.isEmpty(O3)) {
        }
        AtomicInteger atomicInteger2222 = a;
        if (launchIntentForPackage == null) {
        }
        notificationCompat$Builder222.f1453h = activity;
        if (!cVar.F("google.c.a.e")) {
        }
        if (broadcast != null) {
        }
        O4 = cVar.O("gcm.n.color");
        if (!TextUtils.isEmpty(O4)) {
        }
        i6 = bundle2.getInt("com.google.firebase.messaging.default_notification_color", 0);
        if (i6 != 0) {
        }
        valueOf = null;
        if (valueOf != null) {
        }
        notificationCompat$Builder222.g(16, !cVar.F("gcm.n.sticky"));
        notificationCompat$Builder222.f1468y = cVar.F("gcm.n.local_only");
        O5 = cVar.O("gcm.n.ticker");
        if (O5 != null) {
        }
        H = cVar.H("gcm.n.notification_priority");
        if (H != null) {
        }
        H = null;
        if (H != null) {
        }
        H2 = cVar.H("gcm.n.visibility");
        if (H2 != null) {
        }
        H2 = null;
        if (H2 != null) {
        }
        H3 = cVar.H("gcm.n.notification_count");
        if (H3 != null) {
        }
        H3 = null;
        if (H3 != null) {
        }
        O6 = cVar.O("gcm.n.event_time");
        if (!TextUtils.isEmpty(O6)) {
        }
        valueOf2 = null;
        if (valueOf2 != null) {
        }
        K = cVar.K("gcm.n.vibrate_timings");
        if (K != null) {
        }
        jArr = null;
        if (jArr != null) {
        }
        K2 = cVar.K("gcm.n.light_settings");
        if (K2 != null) {
        }
        iArr = null;
        if (iArr != null) {
        }
        boolean F222222222222 = cVar.F("gcm.n.default_sound");
        boolean z5222222222222 = F222222222222;
        if (cVar.F("gcm.n.default_vibrate_timings")) {
        }
        int i11222222222222 = z5222222222222;
        if (cVar.F("gcm.n.default_light_settings")) {
        }
        notificationCompat$Builder222.f(i11222222222222);
        O7 = cVar.O("gcm.n.tag");
        if (TextUtils.isEmpty(O7)) {
        }
        return new h(notificationCompat$Builder222, O7);
    }

    public static boolean b(Resources resources, int i5) {
        if (Build.VERSION.SDK_INT != 26) {
            return true;
        }
        try {
            if (!(resources.getDrawable(i5, null) instanceof AdaptiveIconDrawable)) {
                return true;
            }
            Log.e("FirebaseMessaging", "Adaptive icons cannot be used in notifications. Ignoring icon id: " + i5);
            return false;
        } catch (Resources.NotFoundException unused) {
            Log.e("FirebaseMessaging", "Couldn't find resource " + i5 + ", treating it as an invalid icon");
            return false;
        }
    }
}
