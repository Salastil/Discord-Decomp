package dl;

import android.os.Build;
import android.os.VibrationAttributes;
import android.os.VibrationEffect;
import android.os.Vibrator;
import android.util.Log;
import com.facebook.react.bridge.ReadableArray;
import com.facebook.react.bridge.ReadableMap;
import com.mkuczera.haptic.NativeHapticFeedbackSpec;
import java.util.ArrayList;
import java.util.Collections;
import java.util.HashMap;
import java.util.Iterator;

/* loaded from: classes3.dex */
public abstract class b {
    public static final HashMap a;

    static {
        HashMap hashMap = new HashMap();
        a = hashMap;
        int i5 = Build.VERSION.SDK_INT;
        if (i5 >= 31) {
            hashMap.put("impactLight", new c(7, 0.3f, new e(new long[]{0, 20})));
            hashMap.put("impactMedium", new c(1, 0.6f, new e(new long[]{0, 40})));
            hashMap.put("impactHeavy", new c(2, 1.0f, new e(new long[]{0, 60})));
            hashMap.put("rigid", new c(1, 0.9f, new e(new long[]{0, 30})));
            hashMap.put("soft", new c(7, 0.3f, new e(new long[]{0, 10})));
            hashMap.put("selection", new c(7, 0.4f, new e(new long[]{0, 10})));
            hashMap.put("notificationSuccess", new e(new long[]{0, 40, 60, 20}));
            hashMap.put("notificationWarning", new e(new long[]{0, 20, 60, 40}));
            hashMap.put("notificationError", new e(new long[]{0, 20, 40, 30, 40, 40}));
        } else {
            hashMap.put("impactLight", new e(new long[]{0, 20}));
            hashMap.put("impactMedium", new e(new long[]{0, 40}));
            hashMap.put("impactHeavy", new e(new long[]{0, 60}));
            hashMap.put("notificationSuccess", new e(new long[]{0, 40, 60, 20}));
            hashMap.put("notificationWarning", new e(new long[]{0, 20, 60, 40}));
            hashMap.put("notificationError", new e(new long[]{0, 20, 40, 30, 40, 40}));
            hashMap.put("rigid", new e(new long[]{0, 30}));
            hashMap.put("soft", new e(new long[]{0, 10}));
            hashMap.put("selection", new e(new long[]{0, 10}));
        }
        hashMap.put("clockTick", new e(new long[]{0, 15}));
        hashMap.put("contextClick", new e(new long[]{0, 20}));
        hashMap.put("keyboardPress", new e(new long[]{0, 20}));
        hashMap.put("keyboardRelease", new e(new long[]{0, 10}));
        hashMap.put("keyboardTap", new e(new long[]{0, 20}));
        hashMap.put("longPress", new e(new long[]{0, 40}));
        hashMap.put("textHandleMove", new e(new long[]{0, 10}));
        hashMap.put("virtualKey", new e(new long[]{0, 20}));
        hashMap.put("virtualKeyRelease", new e(new long[]{0, 10}));
        hashMap.put("confirm", new e(new long[]{0, 40, 60, 20}));
        hashMap.put("reject", new e(new long[]{0, 60, 40, 30}));
        hashMap.put("gestureStart", new e(new long[]{0, 15}));
        hashMap.put("gestureEnd", new e(new long[]{0, 20}));
        hashMap.put("segmentTick", new e(new long[]{0, 10}));
        hashMap.put("segmentFrequentTick", new e(new long[]{0, 8}));
        hashMap.put("toggleOn", new e(new long[]{0, 15, 30, 25}));
        hashMap.put("toggleOff", new e(new long[]{0, 25, 30, 15}));
        hashMap.put("dragStart", new e(new long[]{0, 15}));
        hashMap.put("gestureThresholdActivate", new e(new long[]{0, 20}));
        hashMap.put("gestureThresholdDeactivate", new e(new long[]{0, 10}));
        if (i5 >= 29) {
            hashMap.put("effectClick", new d(0));
            hashMap.put("effectDoubleClick", new d(1));
            hashMap.put("effectHeavyClick", new d(5));
            hashMap.put("effectTick", new d(2));
            return;
        }
        hashMap.put("effectClick", new e(new long[]{0, 20}));
        hashMap.put("effectDoubleClick", new e(new long[]{0, 20, 40, 20}));
        hashMap.put("effectHeavyClick", new e(new long[]{0, 50}));
        hashMap.put("effectTick", new e(new long[]{0, 15}));
    }

    public static void a(Vibrator vibrator, ReadableArray readableArray) {
        if (readableArray == null || readableArray.size() == 0) {
            return;
        }
        int size = readableArray.size();
        ArrayList arrayList = new ArrayList(size);
        for (int i5 = 0; i5 < size; i5++) {
            ReadableMap map = readableArray.getMap(i5);
            if (map != null) {
                arrayList.add(map);
            }
        }
        Collections.sort(arrayList, new com.facebook.react.uimanager.a(2));
        int size2 = arrayList.size() * 2;
        long[] jArr = new long[size2];
        int[] iArr = new int[size2];
        Iterator it = arrayList.iterator();
        int i6 = 0;
        long j = 0;
        while (it.hasNext()) {
            ReadableMap readableMap = (ReadableMap) it.next();
            if (readableMap != null) {
                long j5 = readableMap.hasKey("time") ? (long) readableMap.getDouble("time") : 0L;
                long j7 = readableMap.hasKey("duration") ? (long) readableMap.getDouble("duration") : 50L;
                int round = (int) Math.round((readableMap.hasKey("intensity") ? readableMap.getDouble("intensity") : 0.5d) * 255.0d);
                jArr[i6] = Math.max(0L, j5 - j);
                iArr[i6] = 0;
                int i10 = i6 + 1;
                jArr[i10] = j7;
                iArr[i10] = Math.max(1, Math.min(255, round));
                i6 += 2;
                j = j5 + j7;
            }
        }
        long[] jArr2 = new long[i6];
        int[] iArr2 = new int[i6];
        System.arraycopy(jArr, 0, jArr2, 0, i6);
        System.arraycopy(iArr, 0, iArr2, 0, i6);
        try {
            int i11 = Build.VERSION.SDK_INT;
            if (i11 >= 33) {
                vibrator.vibrate(VibrationEffect.createWaveform(jArr2, iArr2, -1), new VibrationAttributes.Builder().setUsage(18).build());
            } else if (i11 >= 26) {
                vibrator.vibrate(VibrationEffect.createWaveform(jArr2, iArr2, -1));
            } else {
                vibrator.vibrate(jArr2, -1);
            }
        } catch (Exception e9) {
            Log.w(NativeHapticFeedbackSpec.NAME, "vibratePattern failed", e9);
        }
    }
}
