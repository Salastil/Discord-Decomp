package androidx.appcompat.widget;

import android.content.Context;
import android.graphics.Rect;
import android.util.AttributeSet;
import android.util.DisplayMetrics;
import android.util.TypedValue;
import android.view.View;
import android.widget.FrameLayout;
import androidx.annotation.NonNull;

/* loaded from: classes.dex */
public class ContentFrameLayout extends FrameLayout {
    public i1 E;

    /* renamed from: d, reason: collision with root package name */
    public TypedValue f871d;

    /* renamed from: e, reason: collision with root package name */
    public TypedValue f872e;

    /* renamed from: i, reason: collision with root package name */
    public TypedValue f873i;

    /* renamed from: v, reason: collision with root package name */
    public TypedValue f874v;

    /* renamed from: w, reason: collision with root package name */
    public TypedValue f875w;

    /* renamed from: x, reason: collision with root package name */
    public TypedValue f876x;

    /* renamed from: y, reason: collision with root package name */
    public final Rect f877y;

    public ContentFrameLayout(@NonNull Context context, AttributeSet attributeSet) {
        super(context, attributeSet, 0);
        this.f877y = new Rect();
    }

    public TypedValue getFixedHeightMajor() {
        if (this.f875w == null) {
            this.f875w = new TypedValue();
        }
        return this.f875w;
    }

    public TypedValue getFixedHeightMinor() {
        if (this.f876x == null) {
            this.f876x = new TypedValue();
        }
        return this.f876x;
    }

    public TypedValue getFixedWidthMajor() {
        if (this.f873i == null) {
            this.f873i = new TypedValue();
        }
        return this.f873i;
    }

    public TypedValue getFixedWidthMinor() {
        if (this.f874v == null) {
            this.f874v = new TypedValue();
        }
        return this.f874v;
    }

    public TypedValue getMinWidthMajor() {
        if (this.f871d == null) {
            this.f871d = new TypedValue();
        }
        return this.f871d;
    }

    public TypedValue getMinWidthMinor() {
        if (this.f872e == null) {
            this.f872e = new TypedValue();
        }
        return this.f872e;
    }

    @Override // android.view.ViewGroup, android.view.View
    public final void onAttachedToWindow() {
        super.onAttachedToWindow();
        i1 i1Var = this.E;
        if (i1Var != null) {
            i1Var.getClass();
        }
    }

    @Override // android.view.ViewGroup, android.view.View
    public final void onDetachedFromWindow() {
        n nVar;
        super.onDetachedFromWindow();
        i1 i1Var = this.E;
        if (i1Var != null) {
            androidx.appcompat.app.a aVar = (androidx.appcompat.app.a) ((ve.i) i1Var).f19405d;
            j1 j1Var = aVar.O;
            if (j1Var != null) {
                ActionBarOverlayLayout actionBarOverlayLayout = (ActionBarOverlayLayout) j1Var;
                actionBarOverlayLayout.e();
                ActionMenuView actionMenuView = ((x3) actionBarOverlayLayout.f844w).a.f883d;
                if (actionMenuView != null && (nVar = actionMenuView.Q) != null) {
                    nVar.l();
                    h hVar = nVar.R;
                    if (hVar != null && hVar.b()) {
                        hVar.f14709i.dismiss();
                    }
                }
            }
            if (aVar.T != null) {
                aVar.I.getDecorView().removeCallbacks(aVar.U);
                if (aVar.T.isShowing()) {
                    try {
                        aVar.T.dismiss();
                    } catch (IllegalArgumentException unused) {
                    }
                }
                aVar.T = null;
            }
            androidx.core.view.a1 a1Var = aVar.V;
            if (a1Var != null) {
                a1Var.b();
            }
            n.j jVar = aVar.R(0).f10368h;
            if (jVar != null) {
                jVar.c(true);
            }
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:15:0x004e  */
    /* JADX WARN: Removed duplicated region for block: B:17:0x0067  */
    /* JADX WARN: Removed duplicated region for block: B:26:0x008a  */
    /* JADX WARN: Removed duplicated region for block: B:29:0x00ac A[ADDED_TO_REGION] */
    /* JADX WARN: Removed duplicated region for block: B:31:0x00b0  */
    /* JADX WARN: Removed duplicated region for block: B:36:0x00bd  */
    /* JADX WARN: Removed duplicated region for block: B:39:0x00d1  */
    /* JADX WARN: Removed duplicated region for block: B:41:0x00d9  */
    /* JADX WARN: Removed duplicated region for block: B:43:0x00e1  */
    /* JADX WARN: Removed duplicated region for block: B:46:? A[RETURN, SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:47:0x00c3  */
    /* JADX WARN: Removed duplicated region for block: B:50:0x00b3  */
    @Override // android.widget.FrameLayout, android.view.View
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void onMeasure(int i5, int i6) {
        int i10;
        boolean z5;
        int i11;
        int measuredWidth;
        TypedValue typedValue;
        int i12;
        int i13;
        float fraction;
        int i14;
        int i15;
        float fraction2;
        int i16;
        int i17;
        float fraction3;
        DisplayMetrics displayMetrics = getContext().getResources().getDisplayMetrics();
        boolean z6 = true;
        boolean z7 = displayMetrics.widthPixels < displayMetrics.heightPixels;
        int mode = View.MeasureSpec.getMode(i5);
        int mode2 = View.MeasureSpec.getMode(i6);
        Rect rect = this.f877y;
        if (mode == Integer.MIN_VALUE) {
            TypedValue typedValue2 = z7 ? this.f874v : this.f873i;
            if (typedValue2 != null && (i16 = typedValue2.type) != 0) {
                if (i16 == 5) {
                    fraction3 = typedValue2.getDimension(displayMetrics);
                } else if (i16 == 6) {
                    int i18 = displayMetrics.widthPixels;
                    fraction3 = typedValue2.getFraction(i18, i18);
                } else {
                    i17 = 0;
                    if (i17 > 0) {
                        i10 = View.MeasureSpec.makeMeasureSpec(Math.min(i17 - (rect.left + rect.right), View.MeasureSpec.getSize(i5)), 1073741824);
                        z5 = true;
                        if (mode2 == Integer.MIN_VALUE) {
                            TypedValue typedValue3 = z7 ? this.f875w : this.f876x;
                            if (typedValue3 != null && (i14 = typedValue3.type) != 0) {
                                if (i14 == 5) {
                                    fraction2 = typedValue3.getDimension(displayMetrics);
                                } else if (i14 == 6) {
                                    int i19 = displayMetrics.heightPixels;
                                    fraction2 = typedValue3.getFraction(i19, i19);
                                } else {
                                    i15 = 0;
                                    if (i15 > 0) {
                                        i11 = View.MeasureSpec.makeMeasureSpec(Math.min(i15 - (rect.top + rect.bottom), View.MeasureSpec.getSize(i6)), 1073741824);
                                        super.onMeasure(i10, i11);
                                        measuredWidth = getMeasuredWidth();
                                        int makeMeasureSpec = View.MeasureSpec.makeMeasureSpec(measuredWidth, 1073741824);
                                        if (!z5 && mode == Integer.MIN_VALUE) {
                                            typedValue = !z7 ? this.f872e : this.f871d;
                                            if (typedValue != null && (i12 = typedValue.type) != 0) {
                                                if (i12 != 5) {
                                                    fraction = typedValue.getDimension(displayMetrics);
                                                } else if (i12 == 6) {
                                                    int i20 = displayMetrics.widthPixels;
                                                    fraction = typedValue.getFraction(i20, i20);
                                                } else {
                                                    i13 = 0;
                                                    if (i13 > 0) {
                                                        i13 -= rect.left + rect.right;
                                                    }
                                                    if (measuredWidth < i13) {
                                                        makeMeasureSpec = View.MeasureSpec.makeMeasureSpec(i13, 1073741824);
                                                        if (z6) {
                                                            return;
                                                        }
                                                        super.onMeasure(makeMeasureSpec, i11);
                                                        return;
                                                    }
                                                }
                                                i13 = (int) fraction;
                                                if (i13 > 0) {
                                                }
                                                if (measuredWidth < i13) {
                                                }
                                            }
                                        }
                                        z6 = false;
                                        if (z6) {
                                        }
                                    }
                                }
                                i15 = (int) fraction2;
                                if (i15 > 0) {
                                }
                            }
                        }
                        i11 = i6;
                        super.onMeasure(i10, i11);
                        measuredWidth = getMeasuredWidth();
                        int makeMeasureSpec2 = View.MeasureSpec.makeMeasureSpec(measuredWidth, 1073741824);
                        if (!z5) {
                            if (!z7) {
                            }
                            if (typedValue != null) {
                                if (i12 != 5) {
                                }
                                i13 = (int) fraction;
                                if (i13 > 0) {
                                }
                                if (measuredWidth < i13) {
                                }
                            }
                        }
                        z6 = false;
                        if (z6) {
                        }
                    }
                }
                i17 = (int) fraction3;
                if (i17 > 0) {
                }
            }
        }
        i10 = i5;
        z5 = false;
        if (mode2 == Integer.MIN_VALUE) {
        }
        i11 = i6;
        super.onMeasure(i10, i11);
        measuredWidth = getMeasuredWidth();
        int makeMeasureSpec22 = View.MeasureSpec.makeMeasureSpec(measuredWidth, 1073741824);
        if (!z5) {
        }
        z6 = false;
        if (z6) {
        }
    }

    public void setAttachListener(i1 i1Var) {
        this.E = i1Var;
    }
}
