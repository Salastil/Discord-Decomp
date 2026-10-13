package androidx.appcompat.widget;

/* loaded from: classes.dex */
public final class d implements Runnable {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f939d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ ActionBarOverlayLayout f940e;

    public /* synthetic */ d(ActionBarOverlayLayout actionBarOverlayLayout, int i5) {
        this.f939d = i5;
        this.f940e = actionBarOverlayLayout;
    }

    @Override // java.lang.Runnable
    public final void run() {
        switch (this.f939d) {
            case 0:
                ActionBarOverlayLayout actionBarOverlayLayout = this.f940e;
                actionBarOverlayLayout.b();
                actionBarOverlayLayout.T = actionBarOverlayLayout.f843v.animate().translationY(0.0f).setListener(actionBarOverlayLayout.U);
                break;
            default:
                ActionBarOverlayLayout actionBarOverlayLayout2 = this.f940e;
                actionBarOverlayLayout2.b();
                actionBarOverlayLayout2.T = actionBarOverlayLayout2.f843v.animate().translationY(-actionBarOverlayLayout2.f843v.getHeight()).setListener(actionBarOverlayLayout2.U);
                break;
        }
    }
}
