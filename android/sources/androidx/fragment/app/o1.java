package androidx.fragment.app;

import android.graphics.Rect;
import android.transition.Transition;

/* loaded from: classes.dex */
public final class o1 extends Transition.EpicenterCallback {
    public final /* synthetic */ int a;

    /* renamed from: b, reason: collision with root package name */
    public final /* synthetic */ Rect f2067b;

    public /* synthetic */ o1(int i5, Rect rect) {
        this.a = i5;
        this.f2067b = rect;
    }

    @Override // android.transition.Transition.EpicenterCallback
    public final Rect onGetEpicenter(Transition transition) {
        switch (this.a) {
            case 0:
                return this.f2067b;
            default:
                Rect rect = this.f2067b;
                if (rect == null || rect.isEmpty()) {
                    return null;
                }
                return rect;
        }
    }
}
