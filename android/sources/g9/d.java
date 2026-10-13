package g9;

import android.graphics.drawable.Animatable;
import com.facebook.drawee.span.DraweeSpanStringBuilder;

/* loaded from: classes3.dex */
public final class d extends f {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f9138d = 0;

    public /* synthetic */ d() {
    }

    @Override // g9.f, com.facebook.drawee.controller.ControllerListener
    public final void onFinalImageSet(String str, Object obj, Animatable animatable) {
        switch (this.f9138d) {
            case 0:
                if (animatable != null) {
                    animatable.start();
                    break;
                }
                break;
            default:
                break;
        }
    }

    public d(DraweeSpanStringBuilder draweeSpanStringBuilder, k9.a aVar, int i5) {
    }
}
