package y0;

import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.content.IntentFilter;

/* loaded from: classes.dex */
public abstract class a {
    public static Intent a(Context context, BroadcastReceiver broadcastReceiver, IntentFilter intentFilter, String str, int i5) {
        return ((i5 & 4) == 0 || str != null) ? context.registerReceiver(broadcastReceiver, intentFilter, str, null, 0) : context.registerReceiver(broadcastReceiver, intentFilter, b.e(context), null);
    }

    public static Intent b(Context context, BroadcastReceiver broadcastReceiver, IntentFilter intentFilter, String str, int i5) {
        return context.registerReceiver(broadcastReceiver, intentFilter, str, null, i5);
    }

    public static void c(Context context, Intent intent) {
        context.startForegroundService(intent);
    }
}
