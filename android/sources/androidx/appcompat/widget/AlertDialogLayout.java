package androidx.appcompat.widget;

import android.content.Context;
import android.graphics.drawable.Drawable;
import android.util.AttributeSet;
import android.view.Gravity;
import android.view.View;
import android.view.ViewGroup;
import android.widget.LinearLayout;
import com.discord.R;
import java.util.WeakHashMap;

/* loaded from: classes.dex */
public class AlertDialogLayout extends y1 {
    public AlertDialogLayout(Context context, AttributeSet attributeSet) {
        super(context, attributeSet, 0);
    }

    public static int j(View view) {
        WeakHashMap weakHashMap = androidx.core.view.s0.a;
        int minimumHeight = view.getMinimumHeight();
        if (minimumHeight > 0) {
            return minimumHeight;
        }
        if (view instanceof ViewGroup) {
            ViewGroup viewGroup = (ViewGroup) view;
            if (viewGroup.getChildCount() == 1) {
                return j(viewGroup.getChildAt(0));
            }
        }
        return 0;
    }

    /* JADX WARN: Removed duplicated region for block: B:25:0x009e  */
    @Override // androidx.appcompat.widget.y1, android.view.ViewGroup, android.view.View
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void onLayout(boolean z5, int i5, int i6, int i10, int i11) {
        int i12;
        int i13;
        int i14;
        int paddingLeft = getPaddingLeft();
        int i15 = i10 - i5;
        int paddingRight = i15 - getPaddingRight();
        int paddingRight2 = (i15 - paddingLeft) - getPaddingRight();
        int measuredHeight = getMeasuredHeight();
        int childCount = getChildCount();
        int gravity = getGravity();
        int i16 = gravity & 112;
        int i17 = gravity & 8388615;
        int paddingTop = i16 != 16 ? i16 != 80 ? getPaddingTop() : ((getPaddingTop() + i11) - i6) - measuredHeight : (((i11 - i6) - measuredHeight) / 2) + getPaddingTop();
        Drawable dividerDrawable = getDividerDrawable();
        int intrinsicHeight = dividerDrawable == null ? 0 : dividerDrawable.getIntrinsicHeight();
        for (int i18 = 0; i18 < childCount; i18++) {
            View childAt = getChildAt(i18);
            if (childAt != null && childAt.getVisibility() != 8) {
                int measuredWidth = childAt.getMeasuredWidth();
                int measuredHeight2 = childAt.getMeasuredHeight();
                x1 x1Var = (x1) childAt.getLayoutParams();
                int i19 = ((LinearLayout.LayoutParams) x1Var).gravity;
                if (i19 < 0) {
                    i19 = i17;
                }
                int absoluteGravity = Gravity.getAbsoluteGravity(i19, getLayoutDirection()) & 7;
                if (absoluteGravity == 1) {
                    i12 = ((paddingRight2 - measuredWidth) / 2) + paddingLeft + ((LinearLayout.LayoutParams) x1Var).leftMargin;
                    i13 = ((LinearLayout.LayoutParams) x1Var).rightMargin;
                } else if (absoluteGravity != 5) {
                    i14 = ((LinearLayout.LayoutParams) x1Var).leftMargin + paddingLeft;
                    if (i(i18)) {
                        paddingTop += intrinsicHeight;
                    }
                    int i20 = paddingTop + ((LinearLayout.LayoutParams) x1Var).topMargin;
                    childAt.layout(i14, i20, measuredWidth + i14, i20 + measuredHeight2);
                    paddingTop = measuredHeight2 + ((LinearLayout.LayoutParams) x1Var).bottomMargin + i20;
                } else {
                    i12 = paddingRight - measuredWidth;
                    i13 = ((LinearLayout.LayoutParams) x1Var).rightMargin;
                }
                i14 = i12 - i13;
                if (i(i18)) {
                }
                int i202 = paddingTop + ((LinearLayout.LayoutParams) x1Var).topMargin;
                childAt.layout(i14, i202, measuredWidth + i14, i202 + measuredHeight2);
                paddingTop = measuredHeight2 + ((LinearLayout.LayoutParams) x1Var).bottomMargin + i202;
            }
        }
    }

    @Override // androidx.appcompat.widget.y1, android.view.View
    public final void onMeasure(int i5, int i6) {
        int i10;
        int i11;
        int i12;
        int i13;
        AlertDialogLayout alertDialogLayout = this;
        int childCount = alertDialogLayout.getChildCount();
        View view = null;
        View view2 = null;
        View view3 = null;
        for (int i14 = 0; i14 < childCount; i14++) {
            View childAt = alertDialogLayout.getChildAt(i14);
            if (childAt.getVisibility() != 8) {
                int id2 = childAt.getId();
                if (id2 == R.id.topPanel) {
                    view = childAt;
                } else if (id2 == R.id.buttonPanel) {
                    view2 = childAt;
                } else {
                    if ((id2 != R.id.contentPanel && id2 != R.id.customPanel) || view3 != null) {
                        super.onMeasure(i5, i6);
                        return;
                    }
                    view3 = childAt;
                }
            }
        }
        int mode = View.MeasureSpec.getMode(i6);
        int size = View.MeasureSpec.getSize(i6);
        int mode2 = View.MeasureSpec.getMode(i5);
        int paddingBottom = alertDialogLayout.getPaddingBottom() + alertDialogLayout.getPaddingTop();
        if (view != null) {
            view.measure(i5, 0);
            paddingBottom += view.getMeasuredHeight();
            i10 = View.combineMeasuredStates(0, view.getMeasuredState());
        } else {
            i10 = 0;
        }
        if (view2 != null) {
            view2.measure(i5, 0);
            i11 = j(view2);
            i12 = view2.getMeasuredHeight() - i11;
            paddingBottom += i11;
            i10 = View.combineMeasuredStates(i10, view2.getMeasuredState());
        } else {
            i11 = 0;
            i12 = 0;
        }
        if (view3 != null) {
            view3.measure(i5, mode == 0 ? 0 : View.MeasureSpec.makeMeasureSpec(Math.max(0, size - paddingBottom), mode));
            i13 = view3.getMeasuredHeight();
            paddingBottom += i13;
            i10 = View.combineMeasuredStates(i10, view3.getMeasuredState());
        } else {
            i13 = 0;
        }
        int i15 = size - paddingBottom;
        if (view2 != null) {
            int i16 = paddingBottom - i11;
            int min = Math.min(i15, i12);
            if (min > 0) {
                i15 -= min;
                i11 += min;
            }
            view2.measure(i5, View.MeasureSpec.makeMeasureSpec(i11, 1073741824));
            paddingBottom = i16 + view2.getMeasuredHeight();
            i10 = View.combineMeasuredStates(i10, view2.getMeasuredState());
        }
        if (view3 != null && i15 > 0) {
            view3.measure(i5, View.MeasureSpec.makeMeasureSpec(i13 + i15, mode));
            paddingBottom = (paddingBottom - i13) + view3.getMeasuredHeight();
            i10 = View.combineMeasuredStates(i10, view3.getMeasuredState());
        }
        int i17 = 0;
        for (int i18 = 0; i18 < childCount; i18++) {
            View childAt2 = alertDialogLayout.getChildAt(i18);
            if (childAt2.getVisibility() != 8) {
                i17 = Math.max(i17, childAt2.getMeasuredWidth());
            }
        }
        int i19 = i6;
        alertDialogLayout.setMeasuredDimension(View.resolveSizeAndState(alertDialogLayout.getPaddingRight() + alertDialogLayout.getPaddingLeft() + i17, i5, i10), View.resolveSizeAndState(paddingBottom, i19, 0));
        if (mode2 != 1073741824) {
            int makeMeasureSpec = View.MeasureSpec.makeMeasureSpec(alertDialogLayout.getMeasuredWidth(), 1073741824);
            int i20 = 0;
            while (i20 < childCount) {
                View childAt3 = alertDialogLayout.getChildAt(i20);
                if (childAt3.getVisibility() != 8) {
                    x1 x1Var = (x1) childAt3.getLayoutParams();
                    if (((LinearLayout.LayoutParams) x1Var).width == -1) {
                        int i21 = ((LinearLayout.LayoutParams) x1Var).height;
                        ((LinearLayout.LayoutParams) x1Var).height = childAt3.getMeasuredHeight();
                        alertDialogLayout.measureChildWithMargins(childAt3, makeMeasureSpec, 0, i19, 0);
                        ((LinearLayout.LayoutParams) x1Var).height = i21;
                    }
                }
                i20++;
                alertDialogLayout = this;
                i19 = i6;
            }
        }
    }
}
