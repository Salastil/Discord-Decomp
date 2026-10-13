package m3;

import android.view.View;
import android.view.ViewGroup;

/* loaded from: classes.dex */
public final class m extends zo.c0 {
    public final /* synthetic */ int a;

    public /* synthetic */ m(int i5) {
        this.a = i5;
    }

    @Override // m3.o
    public final float a(View view, ViewGroup viewGroup) {
        switch (this.a) {
            case 0:
                break;
            case 1:
                if (viewGroup.getLayoutDirection() != 1) {
                    break;
                } else {
                    break;
                }
            case 2:
                break;
            default:
                if (viewGroup.getLayoutDirection() != 1) {
                    break;
                } else {
                    break;
                }
        }
        return view.getTranslationX() + viewGroup.getWidth();
    }
}
