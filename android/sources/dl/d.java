package dl;

import android.os.Build;
import android.os.VibrationEffect;
import android.os.Vibrator;
import android.util.Log;
import com.mkuczera.haptic.NativeHapticFeedbackSpec;

/* loaded from: classes3.dex */
public final class d implements a {
    public final int a;

    public d(int i5) {
        this.a = i5;
    }

    @Override // dl.a
    public final void a(Vibrator vibrator) {
        if (Build.VERSION.SDK_INT < 29) {
            return;
        }
        try {
            if (vibrator.hasVibrator()) {
                vibrator.vibrate(VibrationEffect.createPredefined(this.a));
            }
        } catch (Exception e9) {
            Log.w(NativeHapticFeedbackSpec.NAME, "VibrateWithCreatePredefined failed", e9);
        }
    }
}
