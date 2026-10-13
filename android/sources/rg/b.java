package rg;

import android.content.Context;
import android.content.res.Resources;
import android.view.View;
import android.widget.FrameLayout;
import com.discord.R;
import fh.i;
import java.util.ArrayList;

/* loaded from: classes3.dex */
public final class b extends i {
    public final int A0;
    public final int B0;
    public boolean C0;
    public final ArrayList D0;

    /* renamed from: y0, reason: collision with root package name */
    public final int f17384y0;

    /* renamed from: z0, reason: collision with root package name */
    public final int f17385z0;

    public b(Context context) {
        super(context);
        this.D0 = new ArrayList();
        FrameLayout.LayoutParams layoutParams = new FrameLayout.LayoutParams(-2, -2);
        layoutParams.gravity = 17;
        setLayoutParams(layoutParams);
        Resources resources = getResources();
        this.f17384y0 = resources.getDimensionPixelSize(R.dimen.design_bottom_navigation_item_max_width);
        this.f17385z0 = resources.getDimensionPixelSize(R.dimen.design_bottom_navigation_item_min_width);
        this.A0 = resources.getDimensionPixelSize(R.dimen.design_bottom_navigation_active_item_max_width);
        this.B0 = resources.getDimensionPixelSize(R.dimen.design_bottom_navigation_active_item_min_width);
    }

    @Override // android.view.ViewGroup, android.view.View
    public final void onLayout(boolean z5, int i5, int i6, int i10, int i11) {
        int childCount = getChildCount();
        int i12 = i10 - i5;
        int i13 = i11 - i6;
        int i14 = 0;
        for (int i15 = 0; i15 < childCount; i15++) {
            View childAt = getChildAt(i15);
            if (childAt.getVisibility() != 8) {
                if (getLayoutDirection() == 1) {
                    int i16 = i12 - i14;
                    childAt.layout(i16 - childAt.getMeasuredWidth(), 0, i16, i13);
                } else {
                    childAt.layout(i14, 0, childAt.getMeasuredWidth() + i14, i13);
                }
                i14 += childAt.getMeasuredWidth();
            }
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:24:0x00d8  */
    @Override // android.view.View
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void onMeasure(int i5, int i6) {
        int i10;
        int i11;
        int i12;
        int i13;
        int size = View.MeasureSpec.getSize(i5);
        int currentVisibleContentItemCount = getCurrentVisibleContentItemCount();
        int childCount = getChildCount();
        ArrayList arrayList = this.D0;
        arrayList.clear();
        int makeMeasureSpec = View.MeasureSpec.makeMeasureSpec(View.MeasureSpec.getSize(i6), Integer.MIN_VALUE);
        int i14 = 0;
        if (getItemIconGravity() == 0) {
            int labelVisibilityMode = getLabelVisibilityMode();
            int i15 = this.A0;
            if (labelVisibilityMode != -1 ? labelVisibilityMode == 0 : currentVisibleContentItemCount > 3) {
                if (this.C0) {
                    View childAt = getChildAt(getSelectedItemPosition());
                    int visibility = childAt.getVisibility();
                    int i16 = this.B0;
                    if (visibility != 8) {
                        childAt.measure(View.MeasureSpec.makeMeasureSpec(i15, Integer.MIN_VALUE), makeMeasureSpec);
                        i16 = Math.max(i16, childAt.getMeasuredWidth());
                    }
                    int i17 = currentVisibleContentItemCount - (childAt.getVisibility() != 8 ? 1 : 0);
                    int min = Math.min(size - (this.f17385z0 * i17), Math.min(i16, i15));
                    int i18 = size - min;
                    int min2 = Math.min(i18 / (i17 != 0 ? i17 : 1), this.f17384y0);
                    int i19 = i18 - (i17 * min2);
                    int i20 = 0;
                    while (i20 < childCount) {
                        if (getChildAt(i20).getVisibility() != 8) {
                            i12 = i20 == getSelectedItemPosition() ? min : min2;
                            if (i19 > 0) {
                                i12++;
                                i19--;
                            }
                        } else {
                            i12 = 0;
                        }
                        arrayList.add(Integer.valueOf(i12));
                        i20++;
                    }
                    i10 = 0;
                    i11 = 0;
                    while (i14 < childCount) {
                        View childAt2 = getChildAt(i14);
                        if (childAt2.getVisibility() != 8) {
                            childAt2.measure(View.MeasureSpec.makeMeasureSpec(((Integer) arrayList.get(i14)).intValue(), 1073741824), makeMeasureSpec);
                            childAt2.getLayoutParams().width = childAt2.getMeasuredWidth();
                            int measuredWidth = childAt2.getMeasuredWidth() + i10;
                            i11 = Math.max(i11, childAt2.getMeasuredHeight());
                            i10 = measuredWidth;
                        }
                        i14++;
                    }
                }
            }
            int min3 = Math.min(size / (currentVisibleContentItemCount != 0 ? currentVisibleContentItemCount : 1), i15);
            int i21 = size - (currentVisibleContentItemCount * min3);
            for (int i22 = 0; i22 < childCount; i22++) {
                if (getChildAt(i22).getVisibility() == 8) {
                    i13 = 0;
                } else if (i21 > 0) {
                    i13 = min3 + 1;
                    i21--;
                } else {
                    i13 = min3;
                }
                arrayList.add(Integer.valueOf(i13));
            }
            i10 = 0;
            i11 = 0;
            while (i14 < childCount) {
            }
        } else {
            if (currentVisibleContentItemCount == 0) {
                currentVisibleContentItemCount = 1;
            }
            float f2 = size;
            float min4 = Math.min((currentVisibleContentItemCount + 3) / 10.0f, 0.9f) * f2;
            float f10 = currentVisibleContentItemCount;
            int round = Math.round(min4 / f10);
            int round2 = Math.round(f2 / f10);
            int i23 = 0;
            int i24 = 0;
            while (i14 < childCount) {
                View childAt3 = getChildAt(i14);
                if (childAt3.getVisibility() != 8) {
                    childAt3.measure(View.MeasureSpec.makeMeasureSpec(round2, Integer.MIN_VALUE), makeMeasureSpec);
                    if (childAt3.getMeasuredWidth() < round) {
                        childAt3.measure(View.MeasureSpec.makeMeasureSpec(round, 1073741824), makeMeasureSpec);
                    }
                    int measuredWidth2 = childAt3.getMeasuredWidth() + i23;
                    i24 = Math.max(i24, childAt3.getMeasuredHeight());
                    i23 = measuredWidth2;
                }
                i14++;
            }
            i10 = i23;
            i11 = i24;
        }
        setMeasuredDimension(i10, Math.max(i11, getSuggestedMinimumHeight()));
    }

    public void setItemHorizontalTranslationEnabled(boolean z5) {
        this.C0 = z5;
    }
}
