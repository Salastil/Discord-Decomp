package he;

import android.view.ViewGroup;
import com.google.android.exoplayer2.ui.AspectRatioFrameLayout;

/* loaded from: classes3.dex */
public final class b implements Runnable {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f9959d;

    /* renamed from: e, reason: collision with root package name */
    public boolean f9960e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ ViewGroup f9961i;

    public /* synthetic */ b(ViewGroup viewGroup, int i5) {
        this.f9959d = i5;
        this.f9961i = viewGroup;
    }

    @Override // java.lang.Runnable
    public final void run() {
        int i5 = this.f9959d;
        ViewGroup viewGroup = this.f9961i;
        switch (i5) {
            case 0:
                this.f9960e = false;
                int i6 = AspectRatioFrameLayout.f5488v;
                ((AspectRatioFrameLayout) viewGroup).getClass();
                break;
            default:
                hk.i iVar = (hk.i) viewGroup;
                iVar.a(this.f9960e);
                iVar.postDelayed(this, iVar.O);
                break;
        }
    }
}
