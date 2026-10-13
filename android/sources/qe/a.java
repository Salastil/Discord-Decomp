package qe;

import android.content.BroadcastReceiver;
import android.content.Context;
import androidx.annotation.NonNull;
import bf.t;
import com.google.android.gms.internal.gtm.zzfs;

/* loaded from: classes3.dex */
public abstract class a extends BroadcastReceiver {
    static Boolean zza;

    public static boolean zzb(@NonNull Context context) {
        t.g(context);
        Boolean bool = zza;
        if (bool != null) {
            return bool.booleanValue();
        }
        boolean zzi = zzfs.zzi(context, "com.google.android.gms.analytics.CampaignTrackingReceiver", true);
        zza = Boolean.valueOf(zzi);
        return zzi;
    }
}
