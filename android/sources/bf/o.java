package bf;

import android.app.Activity;
import android.content.ActivityNotFoundException;
import android.content.DialogInterface;
import android.content.Intent;
import android.os.Build;
import android.util.Log;
import androidx.annotation.NonNull;

/* loaded from: classes3.dex */
public abstract class o implements DialogInterface.OnClickListener {
    public static o b(Activity activity, Intent intent, int i5) {
        return new m(activity, intent, i5);
    }

    public static o c(@NonNull af.f fVar, Intent intent, int i5) {
        return new n(intent, fVar);
    }

    public abstract void a();

    @Override // android.content.DialogInterface.OnClickListener
    public final void onClick(DialogInterface dialogInterface, int i5) {
        try {
            try {
                a();
            } catch (ActivityNotFoundException e9) {
                Log.e("DialogRedirect", true == Build.FINGERPRINT.contains("generic") ? "Failed to start resolution intent. This may occur when resolving Google Play services connection issues on emulators with Google APIs but not Google Play Store." : "Failed to start resolution intent.", e9);
            }
        } finally {
            dialogInterface.dismiss();
        }
    }
}
