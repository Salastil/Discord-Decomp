package xf;

import af.v;
import android.content.Context;
import android.content.IntentFilter;
import android.os.Build;

/* loaded from: classes3.dex */
public abstract class c extends y0.b {
    public static void g(Context context, v vVar, IntentFilter intentFilter) {
        int i5 = Build.VERSION.SDK_INT;
        if (i5 >= 33) {
            context.registerReceiver(vVar, intentFilter, i5 >= 33 ? 2 : 0);
        } else {
            context.registerReceiver(vVar, intentFilter);
        }
    }
}
