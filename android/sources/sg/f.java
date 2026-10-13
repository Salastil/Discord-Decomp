package sg;

import android.annotation.SuppressLint;
import android.content.Context;
import android.os.Handler;
import android.os.Looper;
import android.view.ContextThemeWrapper;
import android.view.GestureDetector;
import android.view.MotionEvent;
import android.view.View;
import android.view.ViewGroup;
import android.view.accessibility.AccessibilityManager;
import androidx.appcompat.widget.z;
import androidx.core.view.s0;
import com.discord.R;
import com.google.android.material.bottomsheet.BottomSheetBehavior;
import com.swmansion.rnscreens.r;
import java.lang.ref.WeakReference;
import jm.x;

/* loaded from: classes3.dex */
public final class f extends z implements AccessibilityManager.AccessibilityStateChangeListener {
    public final String E;
    public final r F;

    /* renamed from: d, reason: collision with root package name */
    public final AccessibilityManager f18023d;

    /* renamed from: e, reason: collision with root package name */
    public BottomSheetBehavior f18024e;

    /* renamed from: i, reason: collision with root package name */
    public final GestureDetector f18025i;

    /* renamed from: v, reason: collision with root package name */
    public boolean f18026v;

    /* renamed from: w, reason: collision with root package name */
    public boolean f18027w;

    /* renamed from: x, reason: collision with root package name */
    public boolean f18028x;

    /* renamed from: y, reason: collision with root package name */
    public final String f18029y;

    public f(ContextThemeWrapper contextThemeWrapper) {
        super(ph.a.b(contextThemeWrapper, null, R.attr.bottomSheetDragHandleStyle, R.style.Widget_Material3_BottomSheet_DragHandle, new int[0]), null, R.attr.bottomSheetDragHandleStyle);
        this.f18027w = false;
        this.f18028x = false;
        this.f18029y = getResources().getString(R.string.bottomsheet_action_expand);
        this.E = getResources().getString(R.string.bottomsheet_action_collapse);
        this.F = new r(2, this);
        x xVar = new x(1, this);
        Context context = getContext();
        this.f18025i = new GestureDetector(context, xVar, new Handler(Looper.getMainLooper()));
        this.f18023d = (AccessibilityManager) context.getSystemService("accessibility");
        s0.p(this, new ch.a(4, this));
    }

    private void setBottomSheetBehavior(BottomSheetBehavior<?> bottomSheetBehavior) {
        BottomSheetBehavior bottomSheetBehavior2 = this.f18024e;
        r rVar = this.F;
        if (bottomSheetBehavior2 != null) {
            bottomSheetBehavior2.I(rVar);
            this.f18024e.J(null);
            this.f18024e.Y = null;
        }
        this.f18024e = bottomSheetBehavior;
        if (bottomSheetBehavior != null) {
            bottomSheetBehavior.J(this);
            BottomSheetBehavior bottomSheetBehavior3 = this.f18024e;
            bottomSheetBehavior3.getClass();
            bottomSheetBehavior3.Y = new WeakReference(this);
            d(this.f18024e.N);
            this.f18024e.w(rVar);
        }
        setClickable(this.f18024e != null);
    }

    /* JADX WARN: Code restructure failed: missing block: B:5:0x000d, code lost:
    
        if (r1 == false) goto L17;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final boolean a() {
        BottomSheetBehavior bottomSheetBehavior = this.f18024e;
        if (bottomSheetBehavior == null) {
            return false;
        }
        boolean z5 = bottomSheetBehavior.f5953b;
        int i5 = bottomSheetBehavior.N;
        int i6 = 6;
        int i10 = 3;
        if (i5 != 4) {
            if (i5 == 3) {
                if (z5) {
                    i6 = 4;
                }
                bottomSheetBehavior.P(i6);
                return true;
            }
            if (!this.f18026v) {
                i10 = 4;
            }
            i6 = i10;
            bottomSheetBehavior.P(i6);
            return true;
        }
    }

    public final void d(int i5) {
        if (i5 == 4) {
            this.f18026v = true;
        } else if (i5 == 3) {
            this.f18026v = false;
        }
        s0.n(this, androidx.core.view.accessibility.a.f1555g, this.f18026v ? this.f18029y : this.E, new ni.a(3, this));
    }

    @Override // android.widget.ImageView, android.view.View
    public final void onAttachedToWindow() {
        BottomSheetBehavior<?> bottomSheetBehavior;
        super.onAttachedToWindow();
        View view = this;
        while (true) {
            Object parent = view.getParent();
            bottomSheetBehavior = null;
            view = parent instanceof View ? (View) parent : null;
            if (view == null) {
                break;
            }
            ViewGroup.LayoutParams layoutParams = view.getLayoutParams();
            if (layoutParams instanceof v0.d) {
                v0.b bVar = ((v0.d) layoutParams).a;
                if (bVar instanceof BottomSheetBehavior) {
                    bottomSheetBehavior = (BottomSheetBehavior) bVar;
                    break;
                }
            }
        }
        setBottomSheetBehavior(bottomSheetBehavior);
        AccessibilityManager accessibilityManager = this.f18023d;
        if (accessibilityManager != null) {
            accessibilityManager.addAccessibilityStateChangeListener(this);
            accessibilityManager.isEnabled();
        }
    }

    @Override // android.widget.ImageView, android.view.View
    public final void onDetachedFromWindow() {
        AccessibilityManager accessibilityManager = this.f18023d;
        if (accessibilityManager != null) {
            accessibilityManager.removeAccessibilityStateChangeListener(this);
        }
        setBottomSheetBehavior(null);
        super.onDetachedFromWindow();
    }

    @Override // android.view.View
    public final boolean onTouchEvent(MotionEvent motionEvent) {
        return (this.f18028x || this.f18027w) ? super.onTouchEvent(motionEvent) : this.f18025i.onTouchEvent(motionEvent);
    }

    @Override // android.view.View
    public void setOnClickListener(View.OnClickListener onClickListener) {
        this.f18028x = onClickListener != null;
        super.setOnClickListener(onClickListener);
    }

    @Override // android.view.View
    @SuppressLint({"ClickableViewAccessibility"})
    public void setOnTouchListener(View.OnTouchListener onTouchListener) {
        this.f18027w = onTouchListener != null;
        super.setOnTouchListener(onTouchListener);
    }

    @Override // android.view.accessibility.AccessibilityManager.AccessibilityStateChangeListener
    public final void onAccessibilityStateChanged(boolean z5) {
    }
}
