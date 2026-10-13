package h5;

import android.hardware.Camera;

/* loaded from: classes.dex */
public final class o {
    public final Camera a;

    /* renamed from: b, reason: collision with root package name */
    public final n f9549b;

    /* renamed from: c, reason: collision with root package name */
    public final q f9550c;

    /* renamed from: d, reason: collision with root package name */
    public final q f9551d;

    /* renamed from: e, reason: collision with root package name */
    public final q f9552e;

    /* renamed from: f, reason: collision with root package name */
    public final int f9553f;

    /* renamed from: g, reason: collision with root package name */
    public final boolean f9554g;

    /* renamed from: h, reason: collision with root package name */
    public final boolean f9555h;

    /* renamed from: i, reason: collision with root package name */
    public final boolean f9556i;

    public o(Camera camera, Camera.CameraInfo cameraInfo, n nVar, q qVar, q qVar2, q qVar3, int i5, boolean z5, boolean z6) {
        this.a = camera;
        this.f9549b = nVar;
        this.f9550c = qVar;
        this.f9551d = qVar2;
        this.f9552e = qVar3;
        this.f9553f = i5;
        this.f9554g = cameraInfo.facing == 1;
        this.f9555h = z5;
        this.f9556i = z6;
    }
}
