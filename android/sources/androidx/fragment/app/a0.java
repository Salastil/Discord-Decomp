package androidx.fragment.app;

/* loaded from: classes.dex */
public final class a0 implements Runnable {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f1959d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Fragment f1960e;

    public /* synthetic */ a0(Fragment fragment, int i5) {
        this.f1959d = i5;
        this.f1960e = fragment;
    }

    @Override // java.lang.Runnable
    public final void run() {
        switch (this.f1959d) {
            case 0:
                this.f1960e.startPostponedEnterTransition();
                break;
            default:
                this.f1960e.callStartTransitionListener(false);
                break;
        }
    }
}
