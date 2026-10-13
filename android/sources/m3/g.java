package m3;

import a5.k0;
import android.graphics.Rect;

/* loaded from: classes.dex */
public final class g extends k0 {

    /* renamed from: b, reason: collision with root package name */
    public final /* synthetic */ int f14349b;

    /* renamed from: c, reason: collision with root package name */
    public final /* synthetic */ Rect f14350c;

    public /* synthetic */ g(int i5, Rect rect) {
        this.f14349b = i5;
        this.f14350c = rect;
    }

    @Override // a5.k0
    public final Rect I() {
        switch (this.f14349b) {
            case 0:
                return this.f14350c;
            default:
                Rect rect = this.f14350c;
                if (rect.isEmpty()) {
                    return null;
                }
                return rect;
        }
    }
}
