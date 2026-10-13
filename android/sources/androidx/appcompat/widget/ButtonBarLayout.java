package androidx.appcompat.widget;

import android.content.Context;
import android.content.res.TypedArray;
import android.util.AttributeSet;
import android.view.View;
import android.widget.LinearLayout;
import androidx.annotation.NonNull;
import com.discord.R;
import java.util.WeakHashMap;

/* loaded from: classes.dex */
public class ButtonBarLayout extends LinearLayout {

    /* renamed from: d, reason: collision with root package name */
    public boolean f868d;

    /* renamed from: e, reason: collision with root package name */
    public boolean f869e;

    /* renamed from: i, reason: collision with root package name */
    public int f870i;

    public ButtonBarLayout(@NonNull Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
        this.f870i = -1;
        int[] iArr = h.a.k;
        TypedArray obtainStyledAttributes = context.obtainStyledAttributes(attributeSet, iArr);
        androidx.core.view.s0.o(this, context, iArr, attributeSet, obtainStyledAttributes, 0, 0);
        this.f868d = obtainStyledAttributes.getBoolean(0, true);
        obtainStyledAttributes.recycle();
        if (getOrientation() == 1) {
            setStacked(this.f868d);
        }
    }

    private void setStacked(boolean z5) {
        if (this.f869e != z5) {
            if (!z5 || this.f868d) {
                this.f869e = z5;
                setOrientation(z5 ? 1 : 0);
                setGravity(z5 ? 8388613 : 80);
                View findViewById = findViewById(R.id.spacer);
                if (findViewById != null) {
                    findViewById.setVisibility(z5 ? 8 : 4);
                }
                for (int childCount = getChildCount() - 2; childCount >= 0; childCount--) {
                    bringChildToFront(getChildAt(childCount));
                }
            }
        }
    }

    @Override // android.widget.LinearLayout, android.view.View
    public final void onMeasure(int i5, int i6) {
        int i10;
        boolean z5;
        int i11;
        int size = View.MeasureSpec.getSize(i5);
        int i12 = 0;
        if (this.f868d) {
            if (size > this.f870i && this.f869e) {
                setStacked(false);
            }
            this.f870i = size;
        }
        if (this.f869e || View.MeasureSpec.getMode(i5) != 1073741824) {
            i10 = i5;
            z5 = false;
        } else {
            i10 = View.MeasureSpec.makeMeasureSpec(size, Integer.MIN_VALUE);
            z5 = true;
        }
        super.onMeasure(i10, i6);
        if (this.f868d && !this.f869e && (getMeasuredWidthAndState() & (-16777216)) == 16777216) {
            setStacked(true);
            z5 = true;
        }
        if (z5) {
            super.onMeasure(i5, i6);
        }
        int childCount = getChildCount();
        int i13 = 0;
        while (true) {
            i11 = -1;
            if (i13 >= childCount) {
                i13 = -1;
                break;
            } else if (getChildAt(i13).getVisibility() == 0) {
                break;
            } else {
                i13++;
            }
        }
        if (i13 >= 0) {
            View childAt = getChildAt(i13);
            LinearLayout.LayoutParams layoutParams = (LinearLayout.LayoutParams) childAt.getLayoutParams();
            int measuredHeight = childAt.getMeasuredHeight() + getPaddingTop() + layoutParams.topMargin + layoutParams.bottomMargin;
            if (this.f869e) {
                int i14 = i13 + 1;
                int childCount2 = getChildCount();
                while (true) {
                    if (i14 >= childCount2) {
                        break;
                    }
                    if (getChildAt(i14).getVisibility() == 0) {
                        i11 = i14;
                        break;
                    }
                    i14++;
                }
                i12 = i11 >= 0 ? getChildAt(i11).getPaddingTop() + ((int) (getResources().getDisplayMetrics().density * 16.0f)) + measuredHeight : measuredHeight;
            } else {
                i12 = getPaddingBottom() + measuredHeight;
            }
        }
        WeakHashMap weakHashMap = androidx.core.view.s0.a;
        if (getMinimumHeight() != i12) {
            setMinimumHeight(i12);
            if (i6 == 0) {
                super.onMeasure(i5, i6);
            }
        }
    }

    public void setAllowStacking(boolean z5) {
        if (this.f868d != z5) {
            this.f868d = z5;
            if (!z5 && this.f869e) {
                setStacked(false);
            }
            requestLayout();
        }
    }
}
