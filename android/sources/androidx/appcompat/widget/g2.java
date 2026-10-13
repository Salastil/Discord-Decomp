package androidx.appcompat.widget;

import android.content.Context;
import android.content.res.TypedArray;
import android.graphics.Rect;
import android.graphics.drawable.Drawable;
import android.os.Build;
import android.os.Handler;
import android.util.AttributeSet;
import android.util.Log;
import android.view.View;
import android.widget.AdapterView;
import android.widget.ListAdapter;
import android.widget.PopupWindow;
import com.reactnativecommunity.webview.RNCWebViewManager;
import java.lang.reflect.Method;

/* loaded from: classes.dex */
public class g2 implements n.z {
    public static final Method X;
    public static final Method Y;
    public boolean F;
    public boolean G;
    public boolean H;
    public d2 K;
    public View L;
    public AdapterView.OnItemClickListener M;
    public AdapterView.OnItemSelectedListener N;
    public final Handler S;
    public Rect U;
    public boolean V;
    public final b0 W;

    /* renamed from: d, reason: collision with root package name */
    public final Context f991d;

    /* renamed from: e, reason: collision with root package name */
    public ListAdapter f992e;

    /* renamed from: i, reason: collision with root package name */
    public t1 f993i;

    /* renamed from: x, reason: collision with root package name */
    public int f996x;

    /* renamed from: y, reason: collision with root package name */
    public int f997y;

    /* renamed from: v, reason: collision with root package name */
    public final int f994v = -2;

    /* renamed from: w, reason: collision with root package name */
    public int f995w = -2;
    public final int E = RNCWebViewManager.COMMAND_CLEAR_HISTORY;
    public int I = 0;
    public final int J = Integer.MAX_VALUE;
    public final c2 O = new c2(this, 1);
    public final f2 P = new f2(this);
    public final e2 Q = new e2(this);
    public final c2 R = new c2(this, 0);
    public final Rect T = new Rect();

    static {
        if (Build.VERSION.SDK_INT <= 28) {
            try {
                X = PopupWindow.class.getDeclaredMethod("setClipToScreenEnabled", Boolean.TYPE);
            } catch (NoSuchMethodException unused) {
                Log.i("ListPopupWindow", "Could not find method setClipToScreenEnabled() on PopupWindow. Oh well.");
            }
            try {
                Y = PopupWindow.class.getDeclaredMethod("setEpicenterBounds", Rect.class);
            } catch (NoSuchMethodException unused2) {
                Log.i("ListPopupWindow", "Could not find method setEpicenterBounds(Rect) on PopupWindow. Oh well.");
            }
        }
    }

    public g2(Context context, AttributeSet attributeSet, int i5, int i6) {
        int resourceId;
        this.f991d = context;
        this.S = new Handler(context.getMainLooper());
        TypedArray obtainStyledAttributes = context.obtainStyledAttributes(attributeSet, h.a.f9457o, i5, 0);
        this.f996x = obtainStyledAttributes.getDimensionPixelOffset(0, 0);
        int dimensionPixelOffset = obtainStyledAttributes.getDimensionPixelOffset(1, 0);
        this.f997y = dimensionPixelOffset;
        if (dimensionPixelOffset != 0) {
            this.F = true;
        }
        obtainStyledAttributes.recycle();
        b0 b0Var = new b0(context, attributeSet, i5, 0);
        TypedArray obtainStyledAttributes2 = context.obtainStyledAttributes(attributeSet, h.a.f9461s, i5, 0);
        if (obtainStyledAttributes2.hasValue(2)) {
            b0Var.setOverlapAnchor(obtainStyledAttributes2.getBoolean(2, false));
        }
        b0Var.setBackgroundDrawable((!obtainStyledAttributes2.hasValue(0) || (resourceId = obtainStyledAttributes2.getResourceId(0, 0)) == 0) ? obtainStyledAttributes2.getDrawable(0) : ys.d.J(context, resourceId));
        obtainStyledAttributes2.recycle();
        this.W = b0Var;
        b0Var.setInputMethodMode(1);
    }

    public final int a() {
        return this.f996x;
    }

    public final void b(int i5) {
        this.f996x = i5;
    }

    public final Drawable d() {
        return this.W.getBackground();
    }

    @Override // n.z
    public final void dismiss() {
        b0 b0Var = this.W;
        b0Var.dismiss();
        b0Var.setContentView(null);
        this.f993i = null;
        this.S.removeCallbacks(this.O);
    }

    public final void f(Drawable drawable) {
        this.W.setBackgroundDrawable(drawable);
    }

    @Override // n.z
    public final t1 h() {
        return this.f993i;
    }

    public final void i(int i5) {
        this.f997y = i5;
        this.F = true;
    }

    @Override // n.z
    public final boolean isShowing() {
        return this.W.isShowing();
    }

    public final int l() {
        if (this.F) {
            return this.f997y;
        }
        return 0;
    }

    public void m(ListAdapter listAdapter) {
        d2 d2Var = this.K;
        if (d2Var == null) {
            this.K = new d2(0, this);
        } else {
            ListAdapter listAdapter2 = this.f992e;
            if (listAdapter2 != null) {
                listAdapter2.unregisterDataSetObserver(d2Var);
            }
        }
        this.f992e = listAdapter;
        if (listAdapter != null) {
            listAdapter.registerDataSetObserver(this.K);
        }
        t1 t1Var = this.f993i;
        if (t1Var != null) {
            t1Var.setAdapter(this.f992e);
        }
    }

    public t1 n(Context context, boolean z5) {
        return new t1(context, z5);
    }

    public final void o(int i5) {
        Drawable background = this.W.getBackground();
        if (background == null) {
            this.f995w = i5;
            return;
        }
        Rect rect = this.T;
        background.getPadding(rect);
        this.f995w = rect.left + rect.right + i5;
    }

    @Override // n.z
    public final void show() {
        int i5;
        int paddingBottom;
        t1 t1Var;
        t1 t1Var2 = this.f993i;
        Context context = this.f991d;
        b0 b0Var = this.W;
        if (t1Var2 == null) {
            t1 n6 = n(context, !this.V);
            this.f993i = n6;
            n6.setAdapter(this.f992e);
            this.f993i.setOnItemClickListener(this.M);
            this.f993i.setFocusable(true);
            this.f993i.setFocusableInTouchMode(true);
            this.f993i.setOnItemSelectedListener(new z1(0, this));
            this.f993i.setOnScrollListener(this.Q);
            AdapterView.OnItemSelectedListener onItemSelectedListener = this.N;
            if (onItemSelectedListener != null) {
                this.f993i.setOnItemSelectedListener(onItemSelectedListener);
            }
            b0Var.setContentView(this.f993i);
        }
        Drawable background = b0Var.getBackground();
        Rect rect = this.T;
        if (background != null) {
            background.getPadding(rect);
            int i6 = rect.top;
            i5 = rect.bottom + i6;
            if (!this.F) {
                this.f997y = -i6;
            }
        } else {
            rect.setEmpty();
            i5 = 0;
        }
        int a = a2.a(b0Var, this.L, this.f997y, b0Var.getInputMethodMode() == 2);
        int i10 = this.f994v;
        if (i10 == -1) {
            paddingBottom = a + i5;
        } else {
            int i11 = this.f995w;
            int a10 = this.f993i.a(i11 != -2 ? i11 != -1 ? View.MeasureSpec.makeMeasureSpec(i11, 1073741824) : View.MeasureSpec.makeMeasureSpec(context.getResources().getDisplayMetrics().widthPixels - (rect.left + rect.right), 1073741824) : View.MeasureSpec.makeMeasureSpec(context.getResources().getDisplayMetrics().widthPixels - (rect.left + rect.right), Integer.MIN_VALUE), a);
            paddingBottom = a10 + (a10 > 0 ? this.f993i.getPaddingBottom() + this.f993i.getPaddingTop() + i5 : 0);
        }
        boolean z5 = b0Var.getInputMethodMode() == 2;
        b0Var.setWindowLayoutType(this.E);
        if (b0Var.isShowing()) {
            if (this.L.isAttachedToWindow()) {
                int i12 = this.f995w;
                if (i12 == -1) {
                    i12 = -1;
                } else if (i12 == -2) {
                    i12 = this.L.getWidth();
                }
                if (i10 == -1) {
                    i10 = z5 ? paddingBottom : -1;
                    if (z5) {
                        b0Var.setWidth(this.f995w == -1 ? -1 : 0);
                        b0Var.setHeight(0);
                    } else {
                        b0Var.setWidth(this.f995w == -1 ? -1 : 0);
                        b0Var.setHeight(-1);
                    }
                } else if (i10 == -2) {
                    i10 = paddingBottom;
                }
                b0Var.setOutsideTouchable(true);
                int i13 = i12;
                View view = this.L;
                int i14 = this.f996x;
                int i15 = this.f997y;
                int i16 = i13 < 0 ? -1 : i13;
                if (i10 < 0) {
                    i10 = -1;
                }
                b0Var.update(view, i14, i15, i16, i10);
                return;
            }
            return;
        }
        int i17 = this.f995w;
        if (i17 == -1) {
            i17 = -1;
        } else if (i17 == -2) {
            i17 = this.L.getWidth();
        }
        if (i10 == -1) {
            i10 = -1;
        } else if (i10 == -2) {
            i10 = paddingBottom;
        }
        b0Var.setWidth(i17);
        b0Var.setHeight(i10);
        if (Build.VERSION.SDK_INT <= 28) {
            Method method = X;
            if (method != null) {
                try {
                    method.invoke(b0Var, Boolean.TRUE);
                } catch (Exception unused) {
                    Log.i("ListPopupWindow", "Could not call setClipToScreenEnabled() on PopupWindow. Oh well.");
                }
            }
        } else {
            b2.b(b0Var, true);
        }
        b0Var.setOutsideTouchable(true);
        b0Var.setTouchInterceptor(this.P);
        if (this.H) {
            b0Var.setOverlapAnchor(this.G);
        }
        if (Build.VERSION.SDK_INT <= 28) {
            Method method2 = Y;
            if (method2 != null) {
                try {
                    method2.invoke(b0Var, this.U);
                } catch (Exception e9) {
                    Log.e("ListPopupWindow", "Could not invoke setEpicenterBounds on PopupWindow", e9);
                }
            }
        } else {
            b2.a(b0Var, this.U);
        }
        b0Var.showAsDropDown(this.L, this.f996x, this.f997y, this.I);
        this.f993i.setSelection(-1);
        if ((!this.V || this.f993i.isInTouchMode()) && (t1Var = this.f993i) != null) {
            t1Var.setListSelectionHidden(true);
            t1Var.requestLayout();
        }
        if (this.V) {
            return;
        }
        this.S.post(this.R);
    }
}
