package com.facebook.react.devsupport;

/* loaded from: classes3.dex */
public final /* synthetic */ class f implements Runnable {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f4901d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Object f4902e;

    public /* synthetic */ f(int i5, Object obj) {
        this.f4901d = i5;
        this.f4902e = obj;
    }

    @Override // java.lang.Runnable
    public final void run() {
        switch (this.f4901d) {
            case 0:
                ((DefaultDevLoadingViewImplementation) this.f4902e).hideInternal();
                break;
            case 1:
                ((DoubleTapReloadRecognizer) this.f4902e).doRefresh = false;
                break;
            case 2:
                PausedInDebuggerOverlayDialogManager.hidePausedInDebuggerOverlay$lambda$4((PausedInDebuggerOverlayDialogManager) this.f4902e);
                break;
            default:
                ((RedBoxDialogSurfaceDelegate) this.f4902e).show();
                break;
        }
    }
}
