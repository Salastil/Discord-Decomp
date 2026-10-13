package com.facebook.react.modules.debug;

/* loaded from: classes3.dex */
public final /* synthetic */ class b implements Runnable {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f4976d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ FpsDebugFrameCallback f4977e;

    public /* synthetic */ b(FpsDebugFrameCallback fpsDebugFrameCallback, int i5) {
        this.f4976d = i5;
        this.f4977e = fpsDebugFrameCallback;
    }

    @Override // java.lang.Runnable
    public final void run() {
        switch (this.f4976d) {
            case 0:
                FpsDebugFrameCallback.start$lambda$0(this.f4977e);
                break;
            default:
                FpsDebugFrameCallback.stop$lambda$1(this.f4977e);
                break;
        }
    }
}
