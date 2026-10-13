package rg;

import android.view.MotionEvent;
import android.view.View;
import fh.p;

/* loaded from: classes3.dex */
public abstract class e extends p {
    @Override // fh.p
    public int getMaxItemCount() {
        return 6;
    }

    @Override // android.widget.FrameLayout, android.view.View
    public final void onMeasure(int i5, int i6) {
        int i10;
        int suggestedMinimumHeight = getSuggestedMinimumHeight();
        if (View.MeasureSpec.getMode(i6) == 1073741824 || suggestedMinimumHeight <= 0) {
            i10 = i6;
        } else {
            i10 = View.MeasureSpec.makeMeasureSpec(Math.max(View.MeasureSpec.getSize(i6), getPaddingBottom() + getPaddingTop() + suggestedMinimumHeight), Integer.MIN_VALUE);
        }
        super.onMeasure(i5, i10);
        if (View.MeasureSpec.getMode(i6) != 1073741824) {
            setMeasuredDimension(getMeasuredWidth(), Math.max(getMeasuredHeight(), getPaddingBottom() + getPaddingTop() + getSuggestedMinimumHeight()));
        }
    }

    @Override // android.view.View
    public final boolean onTouchEvent(MotionEvent motionEvent) {
        super.onTouchEvent(motionEvent);
        return true;
    }

    public void setItemHorizontalTranslationEnabled(boolean z5) {
        b bVar = (b) getMenuView();
        if (bVar.C0 != z5) {
            bVar.setItemHorizontalTranslationEnabled(z5);
            getPresenter().a(false);
        }
    }

    @Deprecated
    public void setOnNavigationItemReselectedListener(c cVar) {
        setOnItemReselectedListener(cVar);
    }

    @Deprecated
    public void setOnNavigationItemSelectedListener(d dVar) {
        setOnItemSelectedListener(dVar);
    }
}
