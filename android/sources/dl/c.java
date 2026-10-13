package dl;

import android.os.Build;
import android.os.VibrationAttributes;
import android.os.VibrationEffect;
import android.os.Vibrator;
import android.util.Log;
import com.mkuczera.haptic.NativeHapticFeedbackSpec;

/* loaded from: classes3.dex */
public final class c implements a {
    public final int a;

    /* renamed from: b, reason: collision with root package name */
    public final float f7606b;

    /* renamed from: c, reason: collision with root package name */
    public final e f7607c;

    public c(int i5, float f2, e eVar) {
        this.a = i5;
        this.f7606b = f2;
        this.f7607c = eVar;
    }

    @Override // dl.a
    public final void a(Vibrator vibrator) {
        int i5 = this.a;
        int i6 = Build.VERSION.SDK_INT;
        if (i6 < 31) {
            return;
        }
        try {
            if (vibrator.hasVibrator() && vibrator.arePrimitivesSupported(i5)[0]) {
                VibrationEffect compose = VibrationEffect.startComposition().addPrimitive(i5, this.f7606b).compose();
                if (i6 >= 33) {
                    vibrator.vibrate(compose, new VibrationAttributes.Builder().setUsage(18).build());
                    return;
                } else {
                    vibrator.vibrate(compose);
                    return;
                }
            }
        } catch (Exception e9) {
            Log.w(NativeHapticFeedbackSpec.NAME, "VibrateWithComposition failed", e9);
        }
        this.f7607c.a(vibrator);
    }
}
