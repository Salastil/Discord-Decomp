package com.swmansion.reanimated.sensor;

import android.util.Log;
import com.facebook.react.bridge.ReactApplicationContext;
import com.swmansion.reanimated.nativeProxy.SensorSetter;
import java.lang.ref.WeakReference;
import java.util.HashMap;

/* loaded from: classes3.dex */
public class ReanimatedSensorContainer {
    private final WeakReference<ReactApplicationContext> reactContext;
    private int nextSensorId = 0;
    private final HashMap<Integer, ReanimatedSensor> sensors = new HashMap<>();

    public ReanimatedSensorContainer(WeakReference<ReactApplicationContext> weakReference) {
        this.reactContext = weakReference;
    }

    public int registerSensor(ReanimatedSensorType reanimatedSensorType, int i5, SensorSetter sensorSetter) {
        ReanimatedSensor reanimatedSensor = new ReanimatedSensor(this.reactContext, reanimatedSensorType, i5, sensorSetter);
        if (!reanimatedSensor.initialize()) {
            return -1;
        }
        int i6 = this.nextSensorId;
        this.nextSensorId = i6 + 1;
        this.sensors.put(Integer.valueOf(i6), reanimatedSensor);
        return i6;
    }

    public void unregisterSensor(int i5) {
        ReanimatedSensor reanimatedSensor = this.sensors.get(Integer.valueOf(i5));
        if (reanimatedSensor == null) {
            Log.e("Reanimated", "Tried to unregister nonexistent sensor");
        } else {
            reanimatedSensor.cancel();
            this.sensors.remove(Integer.valueOf(i5));
        }
    }
}
