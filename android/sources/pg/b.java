package pg;

import android.view.View;
import android.view.ViewGroup;
import android.view.ViewPropertyAnimator;

/* loaded from: classes3.dex */
public final class b extends ta.a {

    /* renamed from: f, reason: collision with root package name */
    public final /* synthetic */ int f16392f;

    @Override // ta.a
    public final ViewPropertyAnimator A(int i5, View view) {
        switch (this.f16392f) {
            case 0:
                return view.animate().translationY(i5);
            case 1:
                return view.animate().translationX(-i5);
            default:
                return view.animate().translationX(i5);
        }
    }

    @Override // ta.a
    public final int y(View view, ViewGroup.MarginLayoutParams marginLayoutParams) {
        int measuredHeight;
        int i5;
        switch (this.f16392f) {
            case 0:
                measuredHeight = view.getMeasuredHeight();
                i5 = marginLayoutParams.bottomMargin;
                break;
            case 1:
                measuredHeight = view.getMeasuredWidth();
                i5 = marginLayoutParams.leftMargin;
                break;
            default:
                measuredHeight = view.getMeasuredWidth();
                i5 = marginLayoutParams.rightMargin;
                break;
        }
        return measuredHeight + i5;
    }

    @Override // ta.a
    public final int z() {
        switch (this.f16392f) {
            case 0:
                return 1;
            case 1:
                return 2;
            default:
                return 0;
        }
    }
}
