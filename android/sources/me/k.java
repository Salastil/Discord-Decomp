package me;

import android.content.Context;
import android.graphics.SurfaceTexture;
import android.hardware.Sensor;
import android.hardware.SensorManager;
import android.opengl.GLSurfaceView;
import android.os.Handler;
import android.os.Looper;
import android.view.Surface;
import android.view.View;
import android.view.WindowManager;
import io.sentry.android.core.h1;
import java.util.concurrent.CopyOnWriteArrayList;
import ke.d0;
import le.o;

/* loaded from: classes3.dex */
public final class k extends GLSurfaceView {
    public static final /* synthetic */ int I = 0;
    public Surface E;
    public boolean F;
    public boolean G;
    public boolean H;

    /* renamed from: d, reason: collision with root package name */
    public final CopyOnWriteArrayList f14479d;

    /* renamed from: e, reason: collision with root package name */
    public final SensorManager f14480e;

    /* renamed from: i, reason: collision with root package name */
    public final Sensor f14481i;

    /* renamed from: v, reason: collision with root package name */
    public final d f14482v;

    /* renamed from: w, reason: collision with root package name */
    public final Handler f14483w;

    /* renamed from: x, reason: collision with root package name */
    public final i f14484x;

    /* renamed from: y, reason: collision with root package name */
    public SurfaceTexture f14485y;

    public k(Context context) {
        super(context, null);
        this.f14479d = new CopyOnWriteArrayList();
        this.f14483w = new Handler(Looper.getMainLooper());
        Object systemService = context.getSystemService("sensor");
        systemService.getClass();
        SensorManager sensorManager = (SensorManager) systemService;
        this.f14480e = sensorManager;
        Sensor defaultSensor = d0.a >= 18 ? sensorManager.getDefaultSensor(15) : null;
        this.f14481i = defaultSensor == null ? sensorManager.getDefaultSensor(11) : defaultSensor;
        i iVar = new i();
        this.f14484x = iVar;
        j jVar = new j(this, iVar);
        View.OnTouchListener lVar = new l(context, jVar);
        WindowManager windowManager = (WindowManager) context.getSystemService("window");
        windowManager.getClass();
        this.f14482v = new d(windowManager.getDefaultDisplay(), lVar, jVar);
        this.F = true;
        setEGLContextClientVersion(2);
        setRenderer(jVar);
        setOnTouchListener(lVar);
    }

    public final void a() {
        boolean z5 = this.F && this.G;
        Sensor sensor = this.f14481i;
        if (sensor == null || z5 == this.H) {
            return;
        }
        d dVar = this.f14482v;
        SensorManager sensorManager = this.f14480e;
        if (z5) {
            sensorManager.registerListener(dVar, sensor, 0);
        } else {
            sensorManager.unregisterListener(dVar);
        }
        this.H = z5;
    }

    public a getCameraMotionListener() {
        return this.f14484x;
    }

    public o getVideoFrameMetadataListener() {
        return this.f14484x;
    }

    public Surface getVideoSurface() {
        return this.E;
    }

    @Override // android.opengl.GLSurfaceView, android.view.SurfaceView, android.view.View
    public final void onDetachedFromWindow() {
        super.onDetachedFromWindow();
        this.f14483w.post(new h1(23, this));
    }

    @Override // android.opengl.GLSurfaceView
    public final void onPause() {
        this.G = false;
        a();
        super.onPause();
    }

    @Override // android.opengl.GLSurfaceView
    public final void onResume() {
        super.onResume();
        this.G = true;
        a();
    }

    public void setDefaultStereoMode(int i5) {
        this.f14484x.H = i5;
    }

    public void setUseSensorRotation(boolean z5) {
        this.F = z5;
        a();
    }
}
