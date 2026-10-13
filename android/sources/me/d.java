package me;

import android.hardware.Sensor;
import android.hardware.SensorEvent;
import android.hardware.SensorEventListener;
import android.hardware.SensorManager;
import android.opengl.Matrix;
import android.view.Display;

/* loaded from: classes3.dex */
public final class d implements SensorEventListener {
    public final float[] a = new float[16];

    /* renamed from: b, reason: collision with root package name */
    public final float[] f14447b = new float[16];

    /* renamed from: c, reason: collision with root package name */
    public final float[] f14448c = new float[16];

    /* renamed from: d, reason: collision with root package name */
    public final float[] f14449d = new float[3];

    /* renamed from: e, reason: collision with root package name */
    public final Display f14450e;

    /* renamed from: f, reason: collision with root package name */
    public final c[] f14451f;

    /* renamed from: g, reason: collision with root package name */
    public boolean f14452g;

    public d(Display display, c... cVarArr) {
        this.f14450e = display;
        this.f14451f = cVarArr;
    }

    @Override // android.hardware.SensorEventListener
    public final void onSensorChanged(SensorEvent sensorEvent) {
        int i5;
        float[] fArr = sensorEvent.values;
        float[] fArr2 = this.a;
        SensorManager.getRotationMatrixFromVector(fArr2, fArr);
        int rotation = this.f14450e.getRotation();
        float[] fArr3 = this.f14447b;
        if (rotation != 0) {
            int i6 = 129;
            if (rotation != 1) {
                i5 = 130;
                if (rotation != 2) {
                    if (rotation != 3) {
                        throw new IllegalStateException();
                    }
                    i6 = 130;
                    i5 = 1;
                }
            } else {
                i5 = 129;
                i6 = 2;
            }
            System.arraycopy(fArr2, 0, fArr3, 0, fArr3.length);
            SensorManager.remapCoordinateSystem(fArr3, i6, i5, fArr2);
        }
        SensorManager.remapCoordinateSystem(fArr2, 1, 131, fArr3);
        float[] fArr4 = this.f14449d;
        SensorManager.getOrientation(fArr3, fArr4);
        float f2 = fArr4[2];
        Matrix.rotateM(fArr2, 0, 90.0f, 1.0f, 0.0f, 0.0f);
        boolean z5 = this.f14452g;
        float[] fArr5 = this.f14448c;
        if (!z5) {
            a3.f.e(fArr5, fArr2);
            this.f14452g = true;
        }
        System.arraycopy(fArr2, 0, fArr3, 0, fArr3.length);
        Matrix.multiplyMM(fArr2, 0, fArr3, 0, fArr5, 0);
        for (int i10 = 0; i10 < 2; i10++) {
            this.f14451f[i10].a(f2, fArr2);
        }
    }

    @Override // android.hardware.SensorEventListener
    public final void onAccuracyChanged(Sensor sensor, int i5) {
    }
}
