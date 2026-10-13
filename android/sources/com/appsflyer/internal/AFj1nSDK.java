package com.appsflyer.internal;

import android.hardware.Sensor;
import android.hardware.SensorEvent;
import android.hardware.SensorEventListener;
import android.os.Looper;
import androidx.annotation.NonNull;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import java.util.Map;
import java.util.concurrent.ConcurrentHashMap;
import java.util.concurrent.Executor;
import java.util.concurrent.ExecutorService;

/* loaded from: classes.dex */
public final class AFj1nSDK implements SensorEventListener {

    @NonNull
    private final String AFAdRevenueData;

    @NonNull
    private final Executor component1;
    private long component3;
    private double getCurrencyIso4217Code;

    @NonNull
    private final String getMediationNetwork;
    private final int getMonetizationNetwork;
    private final int getRevenue;
    private final float[][] component2 = new float[2][];
    private final long[] areAllFieldsValid = new long[2];

    public AFj1nSDK(Sensor sensor, @NonNull ExecutorService executorService) {
        int type = sensor.getType();
        this.getRevenue = type;
        String name = sensor.getName();
        name = name == null ? "" : name;
        this.AFAdRevenueData = name;
        String vendor = sensor.getVendor();
        String str = vendor != null ? vendor : "";
        this.getMediationNetwork = str;
        this.getMonetizationNetwork = str.hashCode() + ((name.hashCode() + ((type + 31) * 31)) * 31);
        this.component1 = executorService;
    }

    @NonNull
    private Map<String, Object> AFAdRevenueData() {
        ConcurrentHashMap concurrentHashMap = new ConcurrentHashMap(7);
        concurrentHashMap.put("sT", Integer.valueOf(this.getRevenue));
        concurrentHashMap.put("sN", this.AFAdRevenueData);
        concurrentHashMap.put("sV", this.getMediationNetwork);
        float[] fArr = this.component2[0];
        if (fArr != null) {
            concurrentHashMap.put("sVS", getMediationNetwork(fArr));
        }
        float[] fArr2 = this.component2[1];
        if (fArr2 != null) {
            concurrentHashMap.put("sVE", getMediationNetwork(fArr2));
        }
        return concurrentHashMap;
    }

    /* JADX INFO: Access modifiers changed from: private */
    /* renamed from: F_, reason: merged with bridge method [inline-methods] */
    public void G_(SensorEvent sensorEvent) {
        long j = sensorEvent.timestamp;
        float[] fArr = sensorEvent.values;
        long currentTimeMillis = System.currentTimeMillis();
        float[][] fArr2 = this.component2;
        float[] fArr3 = fArr2[0];
        if (fArr3 == null) {
            fArr2[0] = Arrays.copyOf(fArr, fArr.length);
            this.areAllFieldsValid[0] = currentTimeMillis;
            return;
        }
        float[] fArr4 = fArr2[1];
        if (fArr4 == null) {
            float[] copyOf = Arrays.copyOf(fArr, fArr.length);
            this.component2[1] = copyOf;
            this.areAllFieldsValid[1] = currentTimeMillis;
            this.getCurrencyIso4217Code = getMonetizationNetwork(fArr3, copyOf);
            return;
        }
        if (50000000 <= j - this.component3) {
            this.component3 = j;
            if (Arrays.equals(fArr4, fArr)) {
                this.areAllFieldsValid[1] = currentTimeMillis;
                return;
            }
            double monetizationNetwork = getMonetizationNetwork(fArr3, fArr);
            if (monetizationNetwork > this.getCurrencyIso4217Code) {
                this.component2[1] = Arrays.copyOf(fArr, fArr.length);
                this.areAllFieldsValid[1] = currentTimeMillis;
                this.getCurrencyIso4217Code = monetizationNetwork;
            }
        }
    }

    @NonNull
    private static List<Float> getMediationNetwork(@NonNull float[] fArr) {
        ArrayList arrayList = new ArrayList(fArr.length);
        for (float f2 : fArr) {
            arrayList.add(Float.valueOf(f2));
        }
        return arrayList;
    }

    private static double getMonetizationNetwork(@NonNull float[] fArr, @NonNull float[] fArr2) {
        int min = Math.min(fArr.length, fArr2.length);
        double d6 = 0.0d;
        for (int i5 = 0; i5 < min; i5++) {
            d6 += StrictMath.pow(fArr[i5] - fArr2[i5], 2.0d);
        }
        return Math.sqrt(d6);
    }

    public final boolean equals(Object obj) {
        if (obj == this) {
            return true;
        }
        if (!(obj instanceof AFj1nSDK)) {
            return false;
        }
        AFj1nSDK aFj1nSDK = (AFj1nSDK) obj;
        return getMediationNetwork(aFj1nSDK.getRevenue, aFj1nSDK.AFAdRevenueData, aFj1nSDK.getMediationNetwork);
    }

    public final void getCurrencyIso4217Code(@NonNull Map<AFj1nSDK, Map<String, Object>> map, boolean z5) {
        if (!getMediationNetwork()) {
            if (map.containsKey(this)) {
                return;
            }
            map.put(this, AFAdRevenueData());
            return;
        }
        map.put(this, AFAdRevenueData());
        if (z5) {
            int length = this.component2.length;
            for (int i5 = 0; i5 < length; i5++) {
                this.component2[i5] = null;
            }
            int length2 = this.areAllFieldsValid.length;
            for (int i6 = 0; i6 < length2; i6++) {
                this.areAllFieldsValid[i6] = 0;
            }
            this.getCurrencyIso4217Code = 0.0d;
            this.component3 = 0L;
        }
    }

    public final int hashCode() {
        return this.getMonetizationNetwork;
    }

    @Override // android.hardware.SensorEventListener
    public final void onAccuracyChanged(Sensor sensor, int i5) {
    }

    @Override // android.hardware.SensorEventListener
    public final void onSensorChanged(SensorEvent sensorEvent) {
        if (Looper.myLooper() == Looper.getMainLooper()) {
            this.component1.execute(new h(2, this, sensorEvent));
        } else {
            G_(sensorEvent);
        }
    }

    private boolean getMediationNetwork(int i5, @NonNull String str, @NonNull String str2) {
        return this.getRevenue == i5 && this.AFAdRevenueData.equals(str) && this.getMediationNetwork.equals(str2);
    }

    private boolean getMediationNetwork() {
        return this.component2[0] != null;
    }
}
