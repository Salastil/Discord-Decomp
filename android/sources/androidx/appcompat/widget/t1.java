package androidx.appcompat.widget;

import android.content.Context;
import android.graphics.Canvas;
import android.graphics.Rect;
import android.graphics.drawable.Drawable;
import android.os.Build;
import android.view.MotionEvent;
import android.view.View;
import android.view.ViewGroup;
import android.widget.ListAdapter;
import android.widget.ListView;
import com.discord.R;
import java.lang.reflect.Field;
import java.lang.reflect.InvocationTargetException;

/* loaded from: classes.dex */
public class t1 extends ListView {
    public boolean E;
    public final boolean F;
    public boolean G;
    public androidx.core.widget.d H;
    public a3.h I;

    /* renamed from: d, reason: collision with root package name */
    public final Rect f1108d;

    /* renamed from: e, reason: collision with root package name */
    public int f1109e;

    /* renamed from: i, reason: collision with root package name */
    public int f1110i;

    /* renamed from: v, reason: collision with root package name */
    public int f1111v;

    /* renamed from: w, reason: collision with root package name */
    public int f1112w;

    /* renamed from: x, reason: collision with root package name */
    public int f1113x;

    /* renamed from: y, reason: collision with root package name */
    public r1 f1114y;

    public t1(Context context, boolean z5) {
        super(context, null, R.attr.dropDownListViewStyle);
        this.f1108d = new Rect();
        this.f1109e = 0;
        this.f1110i = 0;
        this.f1111v = 0;
        this.f1112w = 0;
        this.F = z5;
        setCacheColorHint(0);
    }

    public final int a(int i5, int i6) {
        int listPaddingTop = getListPaddingTop();
        int listPaddingBottom = getListPaddingBottom();
        int dividerHeight = getDividerHeight();
        Drawable divider = getDivider();
        ListAdapter adapter = getAdapter();
        if (adapter == null) {
            return listPaddingTop + listPaddingBottom;
        }
        int i10 = listPaddingTop + listPaddingBottom;
        if (dividerHeight <= 0 || divider == null) {
            dividerHeight = 0;
        }
        int count = adapter.getCount();
        int i11 = 0;
        View view = null;
        for (int i12 = 0; i12 < count; i12++) {
            int itemViewType = adapter.getItemViewType(i12);
            if (itemViewType != i11) {
                view = null;
                i11 = itemViewType;
            }
            view = adapter.getView(i12, view, this);
            ViewGroup.LayoutParams layoutParams = view.getLayoutParams();
            if (layoutParams == null) {
                layoutParams = generateDefaultLayoutParams();
                view.setLayoutParams(layoutParams);
            }
            int i13 = layoutParams.height;
            view.measure(i5, i13 > 0 ? View.MeasureSpec.makeMeasureSpec(i13, 1073741824) : View.MeasureSpec.makeMeasureSpec(0, 0));
            view.forceLayout();
            if (i12 > 0) {
                i10 += dividerHeight;
            }
            i10 += view.getMeasuredHeight();
            if (i10 >= i6) {
                return i6;
            }
        }
        return i10;
    }

    /* JADX WARN: Removed duplicated region for block: B:11:0x0167  */
    /* JADX WARN: Removed duplicated region for block: B:17:0x017d  */
    /* JADX WARN: Removed duplicated region for block: B:25:0x0162  */
    /* JADX WARN: Removed duplicated region for block: B:9:0x014a A[ADDED_TO_REGION] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final boolean b(MotionEvent motionEvent, int i5) {
        boolean z5;
        boolean z6;
        View childAt;
        View childAt2;
        int actionMasked = motionEvent.getActionMasked();
        boolean z7 = false;
        if (actionMasked == 1) {
            z5 = false;
        } else {
            if (actionMasked != 2) {
                if (actionMasked != 3) {
                    z5 = true;
                    if (z5 || z7) {
                        this.G = false;
                        setPressed(false);
                        drawableStateChanged();
                        childAt2 = getChildAt(this.f1113x - getFirstVisiblePosition());
                        if (childAt2 != null) {
                            childAt2.setPressed(false);
                        }
                    }
                    if (z5) {
                        androidx.core.widget.d dVar = this.H;
                        if (dVar != null) {
                            if (dVar.M) {
                                dVar.d();
                            }
                            dVar.M = false;
                        }
                    } else {
                        if (this.H == null) {
                            this.H = new androidx.core.widget.d(this);
                        }
                        androidx.core.widget.d dVar2 = this.H;
                        boolean z8 = dVar2.M;
                        dVar2.M = true;
                        dVar2.onTouch(this, motionEvent);
                    }
                    return z5;
                }
                z5 = false;
                if (z5) {
                }
                this.G = false;
                setPressed(false);
                drawableStateChanged();
                childAt2 = getChildAt(this.f1113x - getFirstVisiblePosition());
                if (childAt2 != null) {
                }
                if (z5) {
                }
                return z5;
            }
            z5 = true;
        }
        int findPointerIndex = motionEvent.findPointerIndex(i5);
        if (findPointerIndex >= 0) {
            int x5 = (int) motionEvent.getX(findPointerIndex);
            int y5 = (int) motionEvent.getY(findPointerIndex);
            int pointToPosition = pointToPosition(x5, y5);
            if (pointToPosition == -1) {
                z7 = true;
            } else {
                View childAt3 = getChildAt(pointToPosition - getFirstVisiblePosition());
                float f2 = x5;
                float f10 = y5;
                this.G = true;
                int i6 = Build.VERSION.SDK_INT;
                o1.a(this, f2, f10);
                if (!isPressed()) {
                    setPressed(true);
                }
                layoutChildren();
                int i10 = this.f1113x;
                if (i10 != -1 && (childAt = getChildAt(i10 - getFirstVisiblePosition())) != null && childAt != childAt3 && childAt.isPressed()) {
                    childAt.setPressed(false);
                }
                this.f1113x = pointToPosition;
                o1.a(childAt3, f2 - childAt3.getLeft(), f10 - childAt3.getTop());
                if (!childAt3.isPressed()) {
                    childAt3.setPressed(true);
                }
                Drawable selector = getSelector();
                boolean z10 = (selector == null || pointToPosition == -1) ? false : true;
                if (z10) {
                    selector.setVisible(false, false);
                }
                int left = childAt3.getLeft();
                int top = childAt3.getTop();
                int right = childAt3.getRight();
                int bottom = childAt3.getBottom();
                Rect rect = this.f1108d;
                rect.set(left, top, right, bottom);
                rect.left -= this.f1109e;
                rect.top -= this.f1110i;
                rect.right += this.f1111v;
                rect.bottom += this.f1112w;
                if (i6 >= 33) {
                    z6 = q1.a(this);
                } else {
                    Field field = s1.a;
                    if (field != null) {
                        try {
                            z6 = field.getBoolean(this);
                        } catch (IllegalAccessException e9) {
                            e9.printStackTrace();
                        }
                    }
                    z6 = false;
                }
                if (childAt3.isEnabled() != z6) {
                    boolean z11 = !z6;
                    if (Build.VERSION.SDK_INT >= 33) {
                        q1.b(this, z11);
                    } else {
                        Field field2 = s1.a;
                        if (field2 != null) {
                            try {
                                field2.set(this, Boolean.valueOf(z11));
                            } catch (IllegalAccessException e10) {
                                e10.printStackTrace();
                            }
                        }
                    }
                    if (pointToPosition != -1) {
                        refreshDrawableState();
                    }
                }
                if (z10) {
                    float exactCenterX = rect.exactCenterX();
                    float exactCenterY = rect.exactCenterY();
                    selector.setVisible(getVisibility() == 0, false);
                    selector.setHotspot(exactCenterX, exactCenterY);
                }
                Drawable selector2 = getSelector();
                if (selector2 != null && pointToPosition != -1) {
                    selector2.setHotspot(f2, f10);
                }
                r1 r1Var = this.f1114y;
                if (r1Var != null) {
                    r1Var.f1086e = false;
                }
                refreshDrawableState();
                if (actionMasked == 1) {
                    performItemClick(childAt3, pointToPosition, getItemIdAtPosition(pointToPosition));
                }
                z5 = true;
                z7 = false;
            }
            if (z5) {
            }
            this.G = false;
            setPressed(false);
            drawableStateChanged();
            childAt2 = getChildAt(this.f1113x - getFirstVisiblePosition());
            if (childAt2 != null) {
            }
            if (z5) {
            }
            return z5;
        }
        z5 = false;
        if (z5) {
        }
        this.G = false;
        setPressed(false);
        drawableStateChanged();
        childAt2 = getChildAt(this.f1113x - getFirstVisiblePosition());
        if (childAt2 != null) {
        }
        if (z5) {
        }
        return z5;
    }

    @Override // android.widget.ListView, android.widget.AbsListView, android.view.ViewGroup, android.view.View
    public final void dispatchDraw(Canvas canvas) {
        Drawable selector;
        Rect rect = this.f1108d;
        if (!rect.isEmpty() && (selector = getSelector()) != null) {
            selector.setBounds(rect);
            selector.draw(canvas);
        }
        super.dispatchDraw(canvas);
    }

    @Override // android.widget.AbsListView, android.view.ViewGroup, android.view.View
    public final void drawableStateChanged() {
        if (this.I != null) {
            return;
        }
        super.drawableStateChanged();
        r1 r1Var = this.f1114y;
        if (r1Var != null) {
            r1Var.f1086e = true;
        }
        Drawable selector = getSelector();
        if (selector != null && this.G && isPressed()) {
            selector.setState(getDrawableState());
        }
    }

    @Override // android.view.ViewGroup, android.view.View
    public final boolean hasFocus() {
        return this.F || super.hasFocus();
    }

    @Override // android.view.View
    public final boolean hasWindowFocus() {
        return this.F || super.hasWindowFocus();
    }

    @Override // android.view.View
    public final boolean isFocused() {
        return this.F || super.isFocused();
    }

    @Override // android.view.View
    public final boolean isInTouchMode() {
        return (this.F && this.E) || super.isInTouchMode();
    }

    @Override // android.widget.ListView, android.widget.AbsListView, android.widget.AdapterView, android.view.ViewGroup, android.view.View
    public final void onDetachedFromWindow() {
        this.I = null;
        super.onDetachedFromWindow();
    }

    @Override // android.view.View
    public boolean onHoverEvent(MotionEvent motionEvent) {
        int i5 = Build.VERSION.SDK_INT;
        if (i5 < 26) {
            return super.onHoverEvent(motionEvent);
        }
        int actionMasked = motionEvent.getActionMasked();
        if (actionMasked == 10 && this.I == null) {
            a3.h hVar = new a3.h(5, this);
            this.I = hVar;
            post(hVar);
        }
        boolean onHoverEvent = super.onHoverEvent(motionEvent);
        if (actionMasked != 9 && actionMasked != 7) {
            setSelection(-1);
            return onHoverEvent;
        }
        int pointToPosition = pointToPosition((int) motionEvent.getX(), (int) motionEvent.getY());
        if (pointToPosition != -1 && pointToPosition != getSelectedItemPosition()) {
            View childAt = getChildAt(pointToPosition - getFirstVisiblePosition());
            if (childAt.isEnabled()) {
                requestFocus();
                if (i5 < 30 || !p1.f1071d) {
                    setSelectionFromTop(pointToPosition, childAt.getTop() - getTop());
                } else {
                    try {
                        p1.a.invoke(this, Integer.valueOf(pointToPosition), childAt, Boolean.FALSE, -1, -1);
                        p1.f1069b.invoke(this, Integer.valueOf(pointToPosition));
                        p1.f1070c.invoke(this, Integer.valueOf(pointToPosition));
                    } catch (IllegalAccessException e9) {
                        e9.printStackTrace();
                    } catch (InvocationTargetException e10) {
                        e10.printStackTrace();
                    }
                }
            }
            Drawable selector = getSelector();
            if (selector != null && this.G && isPressed()) {
                selector.setState(getDrawableState());
            }
        }
        return onHoverEvent;
    }

    @Override // android.widget.AbsListView, android.view.View
    public final boolean onTouchEvent(MotionEvent motionEvent) {
        if (motionEvent.getAction() == 0) {
            this.f1113x = pointToPosition((int) motionEvent.getX(), (int) motionEvent.getY());
        }
        a3.h hVar = this.I;
        if (hVar != null) {
            t1 t1Var = (t1) hVar.f60e;
            t1Var.I = null;
            t1Var.removeCallbacks(hVar);
        }
        return super.onTouchEvent(motionEvent);
    }

    public void setListSelectionHidden(boolean z5) {
        this.E = z5;
    }

    @Override // android.widget.AbsListView
    public void setSelector(Drawable drawable) {
        r1 r1Var;
        if (drawable != null) {
            r1Var = new r1();
            Drawable drawable2 = r1Var.f1085d;
            if (drawable2 != null) {
                drawable2.setCallback(null);
            }
            r1Var.f1085d = drawable;
            if (drawable != null) {
                drawable.setCallback(r1Var);
            }
            r1Var.f1086e = true;
        } else {
            r1Var = null;
        }
        this.f1114y = r1Var;
        super.setSelector(r1Var);
        Rect rect = new Rect();
        if (drawable != null) {
            drawable.getPadding(rect);
        }
        this.f1109e = rect.left;
        this.f1110i = rect.top;
        this.f1111v = rect.right;
        this.f1112w = rect.bottom;
    }
}
