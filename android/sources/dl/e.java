package dl;

import android.os.Build;
import android.os.VibrationAttributes;
import android.os.VibrationEffect;
import android.os.Vibrator;
import android.util.Log;
import com.mkuczera.haptic.NativeHapticFeedbackSpec;

/* loaded from: classes3.dex */
public final class e implements a {
    public final long[] a;

    public e(long[] jArr) {
        this.a = jArr;
    }

    @Override // dl.a
    public final void a(Vibrator vibrator) {
        try {
            if (vibrator.hasVibrator()) {
                int i5 = Build.VERSION.SDK_INT;
                long[] jArr = this.a;
                if (i5 >= 33) {
                    vibrator.vibrate(VibrationEffect.createWaveform(jArr, -1), new VibrationAttributes.Builder().setUsage(18).build());
                } else if (i5 >= 26) {
                    vibrator.vibrate(VibrationEffect.createWaveform(jArr, -1));
                } else {
                    vibrator.vibrate(jArr, -1);
                }
            }
        } catch (Exception e9) {
            Log.w(NativeHapticFeedbackSpec.NAME, "VibrateWithDuration failed", e9);
        }
    }
}
