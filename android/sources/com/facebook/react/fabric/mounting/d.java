package com.facebook.react.fabric.mounting;

/* loaded from: classes3.dex */
public final /* synthetic */ class d implements Runnable {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f4966d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ SurfaceMountingManager f4967e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ int f4968i;

    public /* synthetic */ d(SurfaceMountingManager surfaceMountingManager, int i5, int i6) {
        this.f4966d = i6;
        this.f4967e = surfaceMountingManager;
        this.f4968i = i5;
    }

    @Override // java.lang.Runnable
    public final void run() {
        switch (this.f4966d) {
            case 0:
                SurfaceMountingManager.markViewInTransition$lambda$6(this.f4967e, this.f4968i);
                break;
            default:
                SurfaceMountingManager.addViewAt$lambda$8(this.f4967e, this.f4968i);
                break;
        }
    }
}
