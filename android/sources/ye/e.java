package ye;

import android.R;
import android.app.Activity;
import android.app.AlertDialog;
import android.app.Notification;
import android.app.NotificationChannel;
import android.app.NotificationManager;
import android.app.PendingIntent;
import android.content.Context;
import android.content.DialogInterface;
import android.content.pm.PackageManager;
import android.content.res.Resources;
import android.util.Log;
import android.util.TypedValue;
import androidx.core.app.NotificationCompat$Builder;
import androidx.fragment.app.FragmentActivity;
import androidx.fragment.app.FragmentManager;
import bf.t;
import com.google.android.gms.common.api.GoogleApiActivity;
import x0.y;

/* loaded from: classes3.dex */
public class e extends f {

    /* renamed from: c, reason: collision with root package name */
    public static final Object f20917c = new Object();

    /* renamed from: d, reason: collision with root package name */
    public static final e f20918d = new e();

    public static AlertDialog e(Activity activity, int i5, bf.o oVar, DialogInterface.OnCancelListener onCancelListener) {
        if (i5 == 0) {
            return null;
        }
        TypedValue typedValue = new TypedValue();
        activity.getTheme().resolveAttribute(R.attr.alertDialogTheme, typedValue, true);
        AlertDialog.Builder builder = "Theme.Dialog.Alert".equals(activity.getResources().getResourceEntryName(typedValue.resourceId)) ? new AlertDialog.Builder(activity, 5) : null;
        if (builder == null) {
            builder = new AlertDialog.Builder(activity);
        }
        builder.setMessage(bf.l.b(activity, i5));
        if (onCancelListener != null) {
            builder.setOnCancelListener(onCancelListener);
        }
        Resources resources = activity.getResources();
        String string = i5 != 1 ? i5 != 2 ? i5 != 3 ? resources.getString(R.string.ok) : resources.getString(com.discord.R.string.common_google_play_services_enable_button) : resources.getString(com.discord.R.string.common_google_play_services_update_button) : resources.getString(com.discord.R.string.common_google_play_services_install_button);
        if (string != null) {
            if (oVar == null) {
                oVar = null;
            }
            builder.setPositiveButton(string, oVar);
        }
        String c6 = bf.l.c(activity, i5);
        if (c6 != null) {
            builder.setTitle(c6);
        }
        Log.w("GoogleApiAvailability", k0.d.i(i5, "Creating dialog for Google Play services availability issue. ConnectionResult="), new IllegalArgumentException());
        return builder.create();
    }

    public static void f(Activity activity, AlertDialog alertDialog, String str, DialogInterface.OnCancelListener onCancelListener) {
        try {
            if (activity instanceof FragmentActivity) {
                FragmentManager supportFragmentManager = ((FragmentActivity) activity).getSupportFragmentManager();
                k kVar = new k();
                t.h(alertDialog, "Cannot display null dialog");
                alertDialog.setOnCancelListener(null);
                alertDialog.setOnDismissListener(null);
                kVar.f20925d = alertDialog;
                if (onCancelListener != null) {
                    kVar.f20926e = onCancelListener;
                }
                kVar.show(supportFragmentManager, str);
                return;
            }
        } catch (NoClassDefFoundError unused) {
        }
        android.app.FragmentManager fragmentManager = activity.getFragmentManager();
        c cVar = new c();
        t.h(alertDialog, "Cannot display null dialog");
        alertDialog.setOnCancelListener(null);
        alertDialog.setOnDismissListener(null);
        cVar.f20910d = alertDialog;
        if (onCancelListener != null) {
            cVar.f20911e = onCancelListener;
        }
        cVar.show(fragmentManager, str);
    }

    public final void d(GoogleApiActivity googleApiActivity, int i5, GoogleApiActivity googleApiActivity2) {
        AlertDialog e9 = e(googleApiActivity, i5, bf.o.b(googleApiActivity, super.a(googleApiActivity, "d", i5), 2), googleApiActivity2);
        if (e9 == null) {
            return;
        }
        f(googleApiActivity, e9, "GooglePlayServicesErrorDialog", googleApiActivity2);
    }

    public final void g(Context context, int i5, PendingIntent pendingIntent) {
        int i6;
        Log.w("GoogleApiAvailability", s4.h.e(i5, "GMS core API Availability. ConnectionResult=", ", tag=null"), new IllegalArgumentException());
        if (i5 == 18) {
            new l(this, context).sendEmptyMessageDelayed(1, 120000L);
            return;
        }
        if (pendingIntent == null) {
            if (i5 == 6) {
                Log.w("GoogleApiAvailability", "Missing resolution for ConnectionResult.RESOLUTION_REQUIRED. Call GoogleApiAvailability#showErrorNotification(Context, ConnectionResult) instead.");
                return;
            }
            return;
        }
        String e9 = i5 == 6 ? bf.l.e(context, "common_google_play_services_resolution_required_title") : bf.l.c(context, i5);
        if (e9 == null) {
            e9 = context.getResources().getString(com.discord.R.string.common_google_play_services_notification_ticker);
        }
        String d6 = (i5 == 6 || i5 == 19) ? bf.l.d(context, "common_google_play_services_resolution_required_text", bf.l.a(context)) : bf.l.b(context, i5);
        Resources resources = context.getResources();
        Object systemService = context.getSystemService("notification");
        t.g(systemService);
        NotificationManager notificationManager = (NotificationManager) systemService;
        NotificationCompat$Builder notificationCompat$Builder = new NotificationCompat$Builder(context, (String) null);
        notificationCompat$Builder.f1468y = true;
        notificationCompat$Builder.g(16, true);
        notificationCompat$Builder.f1450e = NotificationCompat$Builder.e(e9);
        y yVar = new y(0);
        yVar.f20239f = NotificationCompat$Builder.e(d6);
        notificationCompat$Builder.j(yVar);
        PackageManager packageManager = context.getPackageManager();
        if (gf.c.f9234b == null) {
            gf.c.f9234b = Boolean.valueOf(packageManager.hasSystemFeature("android.hardware.type.watch"));
        }
        if (gf.c.f9234b.booleanValue()) {
            notificationCompat$Builder.N.icon = context.getApplicationInfo().icon;
            notificationCompat$Builder.f1456m = 2;
            if (gf.c.d(context)) {
                notificationCompat$Builder.a(2131230898, pendingIntent, resources.getString(com.discord.R.string.common_open_on_phone));
            } else {
                notificationCompat$Builder.f1453h = pendingIntent;
            }
        } else {
            notificationCompat$Builder.N.icon = R.drawable.stat_sys_warning;
            notificationCompat$Builder.N.tickerText = NotificationCompat$Builder.e(resources.getString(com.discord.R.string.common_google_play_services_notification_ticker));
            notificationCompat$Builder.N.when = System.currentTimeMillis();
            notificationCompat$Builder.f1453h = pendingIntent;
            notificationCompat$Builder.f1451f = NotificationCompat$Builder.e(d6);
        }
        if (gf.c.c()) {
            if (!gf.c.c()) {
                throw new IllegalStateException();
            }
            synchronized (f20917c) {
            }
            NotificationChannel notificationChannel = notificationManager.getNotificationChannel("com.google.android.gms.availability");
            String string = context.getResources().getString(com.discord.R.string.common_google_play_services_notification_channel_name);
            if (notificationChannel == null) {
                notificationManager.createNotificationChannel(new NotificationChannel("com.google.android.gms.availability", string, 4));
            } else if (!string.contentEquals(notificationChannel.getName())) {
                notificationChannel.setName(string);
                notificationManager.createNotificationChannel(notificationChannel);
            }
            notificationCompat$Builder.G = "com.google.android.gms.availability";
        }
        Notification c6 = notificationCompat$Builder.c();
        if (i5 == 1 || i5 == 2 || i5 == 3) {
            i.a.set(false);
            i6 = 10436;
        } else {
            i6 = 39789;
        }
        notificationManager.notify(i6, c6);
    }

    public final void h(Activity activity, af.f fVar, int i5, DialogInterface.OnCancelListener onCancelListener) {
        AlertDialog e9 = e(activity, i5, bf.o.c(fVar, super.a(activity, "d", i5), 2), onCancelListener);
        if (e9 == null) {
            return;
        }
        f(activity, e9, "GooglePlayServicesErrorDialog", onCancelListener);
    }
}
