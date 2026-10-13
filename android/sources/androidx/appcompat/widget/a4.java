package androidx.appcompat.widget;

import android.app.Activity;
import android.content.Context;
import android.content.ContextWrapper;
import android.content.res.Resources;
import android.graphics.Rect;
import android.os.Build;
import android.util.DisplayMetrics;
import android.util.Log;
import android.view.LayoutInflater;
import android.view.MotionEvent;
import android.view.View;
import android.view.ViewConfiguration;
import android.view.ViewGroup;
import android.view.WindowManager;
import android.view.accessibility.AccessibilityManager;
import android.widget.TextView;
import com.discord.R;
import com.reactnativecommunity.webview.RNCWebViewManager;
import java.lang.reflect.Method;
import java.util.WeakHashMap;

/* loaded from: classes.dex */
public final class a4 implements View.OnLongClickListener, View.OnHoverListener, View.OnAttachStateChangeListener {
    public static a4 H;
    public static a4 I;
    public b4 E;
    public boolean F;
    public boolean G;

    /* renamed from: d, reason: collision with root package name */
    public final View f915d;

    /* renamed from: e, reason: collision with root package name */
    public final CharSequence f916e;

    /* renamed from: i, reason: collision with root package name */
    public final int f917i;

    /* renamed from: v, reason: collision with root package name */
    public final z3 f918v;

    /* renamed from: w, reason: collision with root package name */
    public final z3 f919w;

    /* renamed from: x, reason: collision with root package name */
    public int f920x;

    /* renamed from: y, reason: collision with root package name */
    public int f921y;

    /* JADX WARN: Type inference failed for: r0v0, types: [androidx.appcompat.widget.z3] */
    /* JADX WARN: Type inference failed for: r0v1, types: [androidx.appcompat.widget.z3] */
    public a4(View view, CharSequence charSequence) {
        final int i5 = 0;
        this.f918v = new Runnable(this) { // from class: androidx.appcompat.widget.z3

            /* renamed from: e, reason: collision with root package name */
            public final /* synthetic */ a4 f1185e;

            {
                this.f1185e = this;
            }

            @Override // java.lang.Runnable
            public final void run() {
                switch (i5) {
                    case 0:
                        this.f1185e.c(false);
                        break;
                    default:
                        this.f1185e.a();
                        break;
                }
            }
        };
        final int i6 = 1;
        this.f919w = new Runnable(this) { // from class: androidx.appcompat.widget.z3

            /* renamed from: e, reason: collision with root package name */
            public final /* synthetic */ a4 f1185e;

            {
                this.f1185e = this;
            }

            @Override // java.lang.Runnable
            public final void run() {
                switch (i6) {
                    case 0:
                        this.f1185e.c(false);
                        break;
                    default:
                        this.f1185e.a();
                        break;
                }
            }
        };
        this.f915d = view;
        this.f916e = charSequence;
        ViewConfiguration viewConfiguration = ViewConfiguration.get(view.getContext());
        Method method = androidx.core.view.t0.a;
        this.f917i = Build.VERSION.SDK_INT >= 28 ? androidx.core.view.h.m(viewConfiguration) : viewConfiguration.getScaledTouchSlop() / 2;
        this.G = true;
        view.setOnLongClickListener(this);
        view.setOnHoverListener(this);
    }

    public static void b(a4 a4Var) {
        a4 a4Var2 = H;
        if (a4Var2 != null) {
            a4Var2.f915d.removeCallbacks(a4Var2.f918v);
        }
        H = a4Var;
        if (a4Var != null) {
            a4Var.f915d.postDelayed(a4Var.f918v, ViewConfiguration.getLongPressTimeout());
        }
    }

    public final void a() {
        a4 a4Var = I;
        View view = this.f915d;
        if (a4Var == this) {
            I = null;
            b4 b4Var = this.E;
            if (b4Var != null) {
                View view2 = (View) b4Var.f928e;
                if (view2.getParent() != null) {
                    ((WindowManager) ((Context) b4Var.f927d).getSystemService("window")).removeView(view2);
                }
                this.E = null;
                this.G = true;
                view.removeOnAttachStateChangeListener(this);
            } else {
                Log.e("TooltipCompatHandler", "sActiveHandler.mPopup == null");
            }
        }
        if (H == this) {
            b(null);
        }
        view.removeCallbacks(this.f919w);
    }

    public final void c(boolean z5) {
        int height;
        int i5;
        int i6;
        boolean z6;
        int i10;
        int i11;
        long longPressTimeout;
        long j;
        long j5;
        View view = this.f915d;
        if (view.isAttachedToWindow()) {
            b(null);
            a4 a4Var = I;
            if (a4Var != null) {
                a4Var.a();
            }
            I = this;
            this.F = z5;
            Context context = view.getContext();
            b4 b4Var = new b4();
            WindowManager.LayoutParams layoutParams = new WindowManager.LayoutParams();
            b4Var.f930v = layoutParams;
            b4Var.f931w = new Rect();
            b4Var.f932x = new int[2];
            b4Var.f933y = new int[2];
            b4Var.f927d = context;
            View inflate = LayoutInflater.from(context).inflate(R.layout.abc_tooltip, (ViewGroup) null);
            b4Var.f928e = inflate;
            b4Var.f929i = (TextView) inflate.findViewById(R.id.message);
            layoutParams.setTitle(b4.class.getSimpleName());
            layoutParams.packageName = context.getPackageName();
            layoutParams.type = RNCWebViewManager.COMMAND_CLEAR_HISTORY;
            layoutParams.width = -2;
            layoutParams.height = -2;
            layoutParams.format = -3;
            layoutParams.windowAnimations = R.style.Animation_AppCompat_Tooltip;
            layoutParams.flags = 24;
            View view2 = (View) b4Var.f928e;
            Context context2 = (Context) b4Var.f927d;
            this.E = b4Var;
            int i12 = this.f920x;
            int i13 = this.f921y;
            boolean z7 = this.F;
            WindowManager.LayoutParams layoutParams2 = (WindowManager.LayoutParams) b4Var.f930v;
            if (view2.getParent() != null && view2.getParent() != null) {
                ((WindowManager) context2.getSystemService("window")).removeView(view2);
            }
            ((TextView) b4Var.f929i).setText(this.f916e);
            int[] iArr = (int[]) b4Var.f933y;
            int[] iArr2 = (int[]) b4Var.f932x;
            Rect rect = (Rect) b4Var.f931w;
            layoutParams2.token = view.getApplicationWindowToken();
            int dimensionPixelOffset = context2.getResources().getDimensionPixelOffset(R.dimen.tooltip_precise_anchor_threshold);
            if (view.getWidth() < dimensionPixelOffset) {
                i12 = view.getWidth() / 2;
            }
            if (view.getHeight() >= dimensionPixelOffset) {
                int dimensionPixelOffset2 = context2.getResources().getDimensionPixelOffset(R.dimen.tooltip_precise_anchor_extra_offset);
                height = i13 + dimensionPixelOffset2;
                i5 = i13 - dimensionPixelOffset2;
            } else {
                height = view.getHeight();
                i5 = 0;
            }
            layoutParams2.gravity = 49;
            int dimensionPixelOffset3 = context2.getResources().getDimensionPixelOffset(z7 ? R.dimen.tooltip_y_offset_touch : R.dimen.tooltip_y_offset_non_touch);
            View rootView = view.getRootView();
            ViewGroup.LayoutParams layoutParams3 = rootView.getLayoutParams();
            int i14 = i12;
            if (!(layoutParams3 instanceof WindowManager.LayoutParams) || ((WindowManager.LayoutParams) layoutParams3).type != 2) {
                Context context3 = view.getContext();
                while (true) {
                    if (!(context3 instanceof ContextWrapper)) {
                        break;
                    }
                    if (context3 instanceof Activity) {
                        rootView = ((Activity) context3).getWindow().getDecorView();
                        break;
                    }
                    context3 = ((ContextWrapper) context3).getBaseContext();
                }
            }
            if (rootView == null) {
                Log.e("TooltipPopup", "Cannot find app view");
                i11 = 1;
            } else {
                rootView.getWindowVisibleDisplayFrame(rect);
                if (rect.left >= 0 || rect.top >= 0) {
                    i6 = i5;
                    z6 = z7;
                    i10 = 0;
                    i11 = 1;
                } else {
                    Resources resources = context2.getResources();
                    i11 = 1;
                    i6 = i5;
                    z6 = z7;
                    int identifier = resources.getIdentifier("status_bar_height", "dimen", "android");
                    int dimensionPixelSize = identifier != 0 ? resources.getDimensionPixelSize(identifier) : 0;
                    DisplayMetrics displayMetrics = resources.getDisplayMetrics();
                    i10 = 0;
                    rect.set(0, dimensionPixelSize, displayMetrics.widthPixels, displayMetrics.heightPixels);
                }
                rootView.getLocationOnScreen(iArr);
                view.getLocationOnScreen(iArr2);
                int i15 = iArr2[i10] - iArr[i10];
                iArr2[i10] = i15;
                iArr2[i11] = iArr2[i11] - iArr[i11];
                layoutParams2.x = (i15 + i14) - (rootView.getWidth() / 2);
                int makeMeasureSpec = View.MeasureSpec.makeMeasureSpec(i10, i10);
                view2.measure(makeMeasureSpec, makeMeasureSpec);
                int measuredHeight = view2.getMeasuredHeight();
                int i16 = iArr2[i11];
                int i17 = ((i16 + i6) - dimensionPixelOffset3) - measuredHeight;
                int i18 = i16 + height + dimensionPixelOffset3;
                if (z6) {
                    if (i17 >= 0) {
                        layoutParams2.y = i17;
                    } else {
                        layoutParams2.y = i18;
                    }
                } else if (measuredHeight + i18 <= rect.height()) {
                    layoutParams2.y = i18;
                } else {
                    layoutParams2.y = i17;
                }
            }
            ((WindowManager) context2.getSystemService("window")).addView(view2, layoutParams2);
            view.addOnAttachStateChangeListener(this);
            if (this.F) {
                j5 = 2500;
            } else {
                WeakHashMap weakHashMap = androidx.core.view.s0.a;
                if ((view.getWindowSystemUiVisibility() & 1) == i11) {
                    longPressTimeout = ViewConfiguration.getLongPressTimeout();
                    j = 3000;
                } else {
                    longPressTimeout = ViewConfiguration.getLongPressTimeout();
                    j = 15000;
                }
                j5 = j - longPressTimeout;
            }
            z3 z3Var = this.f919w;
            view.removeCallbacks(z3Var);
            view.postDelayed(z3Var, j5);
        }
    }

    /* JADX WARN: Code restructure failed: missing block: B:26:0x0064, code lost:
    
        if (java.lang.Math.abs(r5 - r3.f921y) <= r2) goto L30;
     */
    @Override // android.view.View.OnHoverListener
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final boolean onHover(View view, MotionEvent motionEvent) {
        if (this.E == null || !this.F) {
            View view2 = this.f915d;
            AccessibilityManager accessibilityManager = (AccessibilityManager) view2.getContext().getSystemService("accessibility");
            if (!accessibilityManager.isEnabled() || !accessibilityManager.isTouchExplorationEnabled()) {
                int action = motionEvent.getAction();
                if (action != 7) {
                    if (action == 10) {
                        this.G = true;
                        a();
                        return false;
                    }
                } else if (view2.isEnabled() && this.E == null) {
                    int x5 = (int) motionEvent.getX();
                    int y5 = (int) motionEvent.getY();
                    if (!this.G) {
                        int abs = Math.abs(x5 - this.f920x);
                        int i5 = this.f917i;
                        if (abs <= i5) {
                        }
                    }
                    this.f920x = x5;
                    this.f921y = y5;
                    this.G = false;
                    b(this);
                }
            }
        }
        return false;
    }

    @Override // android.view.View.OnLongClickListener
    public final boolean onLongClick(View view) {
        this.f920x = view.getWidth() / 2;
        this.f921y = view.getHeight() / 2;
        c(true);
        return true;
    }

    @Override // android.view.View.OnAttachStateChangeListener
    public final void onViewAttachedToWindow(View view) {
    }

    @Override // android.view.View.OnAttachStateChangeListener
    public final void onViewDetachedFromWindow(View view) {
        a();
    }
}
