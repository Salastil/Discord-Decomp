package l4;

import java.lang.ref.WeakReference;

/* loaded from: classes.dex */
public final class g implements y {
    public final /* synthetic */ int a;

    /* renamed from: b, reason: collision with root package name */
    public final WeakReference f13732b;

    public g(h hVar, int i5) {
        this.a = i5;
        switch (i5) {
            case 1:
                this.f13732b = new WeakReference(hVar);
                break;
            default:
                this.f13732b = new WeakReference(hVar);
                break;
        }
    }

    @Override // l4.y
    public final void onResult(Object obj) {
        switch (this.a) {
            case 0:
                Throwable th2 = (Throwable) obj;
                h hVar = (h) this.f13732b.get();
                if (hVar != null) {
                    int i5 = hVar.f13736v;
                    if (i5 != 0) {
                        hVar.setImageResource(i5);
                    }
                    y yVar = hVar.f13735i;
                    if (yVar == null) {
                        yVar = h.K;
                    }
                    yVar.onResult(th2);
                    break;
                }
                break;
            default:
                i iVar = (i) obj;
                h hVar2 = (h) this.f13732b.get();
                if (hVar2 != null) {
                    hVar2.setComposition(iVar);
                    break;
                }
                break;
        }
    }
}
