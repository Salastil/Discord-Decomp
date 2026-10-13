package wm;

import com.facebook.react.views.view.ReactViewGroup;

/* loaded from: classes3.dex */
public final class j extends ReactViewGroup implements h {

    /* renamed from: d, reason: collision with root package name */
    public g f19918d;

    /* renamed from: e, reason: collision with root package name */
    public int f19919e;

    @Override // com.facebook.react.views.view.ReactViewGroup, android.view.ViewGroup, android.view.View
    public final void onLayout(boolean z5, int i5, int i6, int i10, int i11) {
        super.onLayout(z5, i5, i6, i10, i11);
        int i12 = i11 - i6;
        if (i12 != this.f19919e) {
            this.f19919e = i12;
            g gVar = this.f19918d;
            if (gVar != null) {
                p0.a aVar = (p0.a) gVar;
                if (aVar.f16264f != i12) {
                    aVar.f16264f = i12;
                    aVar.i();
                }
            }
        }
    }

    public void setContentSizeChangeDelegate(g gVar) {
        this.f19918d = gVar;
    }
}
