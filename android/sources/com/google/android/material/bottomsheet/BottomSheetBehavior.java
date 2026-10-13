package com.google.android.material.bottomsheet;

import a5.h0;
import a5.k0;
import af.k;
import android.animation.AnimatorSet;
import android.animation.ObjectAnimator;
import android.animation.ValueAnimator;
import android.content.Context;
import android.content.res.ColorStateList;
import android.content.res.TypedArray;
import android.os.Build;
import android.os.Parcelable;
import android.text.TextUtils;
import android.util.AttributeSet;
import android.util.Log;
import android.util.Property;
import android.util.SparseIntArray;
import android.util.TypedValue;
import android.view.AbsSavedState;
import android.view.MotionEvent;
import android.view.RoundedCorner;
import android.view.VelocityTracker;
import android.view.View;
import android.view.ViewConfiguration;
import android.view.ViewGroup;
import android.view.ViewParent;
import android.view.WindowInsets;
import android.view.accessibility.AccessibilityNodeInfo;
import androidx.activity.BackEventCompat;
import androidx.annotation.NonNull;
import androidx.appcompat.widget.v0;
import androidx.coordinatorlayout.widget.CoordinatorLayout;
import androidx.core.view.j0;
import androidx.core.view.s0;
import androidx.customview.widget.ViewDragHelper;
import ch.n;
import ch.q;
import com.discord.R;
import com.discord.chat.bridge.botuikit.a;
import com.discord.key_commands.KeyCommandDescriptor;
import eh.f;
import java.lang.ref.WeakReference;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.WeakHashMap;
import lh.i;
import lh.m;
import mh.c;
import sg.g;
import v0.b;
import v0.d;

/* loaded from: classes3.dex */
public class BottomSheetBehavior<V extends View> extends b implements eh.b {
    public final k A;
    public final ValueAnimator B;
    public int C;
    public int D;
    public int E;
    public float F;
    public int G;
    public final float H;
    public boolean I;
    public boolean J;
    public boolean K;
    public final boolean L;
    public boolean M;
    public int N;
    public ViewDragHelper O;
    public boolean P;
    public int Q;
    public boolean R;
    public final float S;
    public int T;
    public int U;
    public int V;
    public WeakReference W;
    public WeakReference X;
    public WeakReference Y;
    public WeakReference Z;
    public final int a;
    public final ArrayList a0;

    /* renamed from: b, reason: collision with root package name */
    public boolean f5953b;

    /* renamed from: b0, reason: collision with root package name */
    public VelocityTracker f5954b0;

    /* renamed from: c, reason: collision with root package name */
    public final float f5955c;

    /* renamed from: c0, reason: collision with root package name */
    public f f5956c0;

    /* renamed from: d, reason: collision with root package name */
    public final int f5957d;

    /* renamed from: d0, reason: collision with root package name */
    public int f5958d0;

    /* renamed from: e, reason: collision with root package name */
    public int f5959e;

    /* renamed from: e0, reason: collision with root package name */
    public int f5960e0;

    /* renamed from: f, reason: collision with root package name */
    public boolean f5961f;

    /* renamed from: f0, reason: collision with root package name */
    public boolean f5962f0;

    /* renamed from: g, reason: collision with root package name */
    public int f5963g;

    /* renamed from: g0, reason: collision with root package name */
    public HashMap f5964g0;

    /* renamed from: h, reason: collision with root package name */
    public final int f5965h;
    public final SparseIntArray h0;

    /* renamed from: i, reason: collision with root package name */
    public final i f5966i;

    /* renamed from: i0, reason: collision with root package name */
    public final c f5967i0;
    public final ColorStateList j;
    public final int k;

    /* renamed from: l, reason: collision with root package name */
    public int f5968l;

    /* renamed from: m, reason: collision with root package name */
    public int f5969m;

    /* renamed from: n, reason: collision with root package name */
    public boolean f5970n;

    /* renamed from: o, reason: collision with root package name */
    public final boolean f5971o;

    /* renamed from: p, reason: collision with root package name */
    public final boolean f5972p;

    /* renamed from: q, reason: collision with root package name */
    public final boolean f5973q;

    /* renamed from: r, reason: collision with root package name */
    public final boolean f5974r;

    /* renamed from: s, reason: collision with root package name */
    public final boolean f5975s;

    /* renamed from: t, reason: collision with root package name */
    public final boolean f5976t;

    /* renamed from: u, reason: collision with root package name */
    public final boolean f5977u;

    /* renamed from: v, reason: collision with root package name */
    public int f5978v;

    /* renamed from: w, reason: collision with root package name */
    public int f5979w;

    /* renamed from: x, reason: collision with root package name */
    public final boolean f5980x;

    /* renamed from: y, reason: collision with root package name */
    public final m f5981y;

    /* renamed from: z, reason: collision with root package name */
    public boolean f5982z;

    public BottomSheetBehavior() {
        this.a = 0;
        this.f5953b = true;
        this.k = -1;
        this.f5968l = -1;
        this.A = new k(this);
        this.F = 0.5f;
        this.H = -1.0f;
        this.K = true;
        this.L = true;
        this.N = 4;
        this.S = 0.1f;
        this.a0 = new ArrayList();
        this.f5960e0 = -1;
        this.h0 = new SparseIntArray();
        this.f5967i0 = new c(this, 1);
    }

    public static View C(View view) {
        if (view.getVisibility() != 0) {
            return null;
        }
        if (view.isNestedScrollingEnabled()) {
            return view;
        }
        if (!(view instanceof ViewGroup)) {
            return null;
        }
        ViewGroup viewGroup = (ViewGroup) view;
        int childCount = viewGroup.getChildCount();
        for (int i5 = 0; i5 < childCount; i5++) {
            View C = C(viewGroup.getChildAt(i5));
            if (C != null) {
                return C;
            }
        }
        return null;
    }

    public static BottomSheetBehavior D(View view) {
        ViewGroup.LayoutParams layoutParams = view.getLayoutParams();
        if (!(layoutParams instanceof d)) {
            throw new IllegalArgumentException("The view is not a child of CoordinatorLayout");
        }
        b bVar = ((d) layoutParams).a;
        if (bVar instanceof BottomSheetBehavior) {
            return (BottomSheetBehavior) bVar;
        }
        throw new IllegalArgumentException("The view is not associated with BottomSheetBehavior");
    }

    public static int E(int i5, int i6, int i10, int i11) {
        int childMeasureSpec = ViewGroup.getChildMeasureSpec(i5, i6, i11);
        if (i10 == -1) {
            return childMeasureSpec;
        }
        int mode = View.MeasureSpec.getMode(childMeasureSpec);
        int size = View.MeasureSpec.getSize(childMeasureSpec);
        if (mode == 1073741824) {
            return View.MeasureSpec.makeMeasureSpec(Math.min(size, i10), 1073741824);
        }
        if (size != 0) {
            i10 = Math.min(size, i10);
        }
        return View.MeasureSpec.makeMeasureSpec(i10, Integer.MIN_VALUE);
    }

    public final void A(int i5, View view) {
        if (view == null) {
            return;
        }
        s0.m(KeyCommandDescriptor.ModifierFlags.ALTERNATE, view);
        s0.j(0, view);
        s0.m(KeyCommandDescriptor.ModifierFlags.CONTROL, view);
        s0.j(0, view);
        s0.m(KeyCommandDescriptor.ModifierFlags.COMMAND, view);
        s0.j(0, view);
        SparseIntArray sparseIntArray = this.h0;
        int i6 = sparseIntArray.get(i5, -1);
        if (i6 != -1) {
            s0.m(i6, view);
            s0.j(0, view);
            sparseIntArray.delete(i5);
        }
    }

    public final void B(int i5) {
        float f2;
        float f10;
        View view = (View) this.W.get();
        if (view != null) {
            ArrayList arrayList = this.a0;
            if (arrayList.isEmpty()) {
                return;
            }
            int i6 = this.G;
            if (i5 > i6 || i6 == F()) {
                int i10 = this.G;
                f2 = i10 - i5;
                f10 = this.V - i10;
            } else {
                int i11 = this.G;
                f2 = i11 - i5;
                f10 = i11 - F();
            }
            float f11 = f2 / f10;
            for (int i12 = 0; i12 < arrayList.size(); i12++) {
                ((sg.b) arrayList.get(i12)).b(view, f11);
            }
        }
    }

    public final int F() {
        if (this.f5953b) {
            return this.D;
        }
        return Math.max(this.C, this.f5974r ? 0 : this.f5979w);
    }

    public final int G(int i5) {
        if (i5 == 3) {
            return F();
        }
        if (i5 == 4) {
            return this.G;
        }
        if (i5 == 5) {
            return this.V;
        }
        if (i5 == 6) {
            return this.E;
        }
        throw new IllegalArgumentException(k0.d.i(i5, "Invalid state to get top offset: "));
    }

    public final boolean H() {
        WeakReference weakReference = this.W;
        if (weakReference != null && weakReference.get() != null) {
            int[] iArr = new int[2];
            ((View) this.W.get()).getLocationOnScreen(iArr);
            if (iArr[1] == 0) {
                return true;
            }
        }
        return false;
    }

    public final void I(sg.b bVar) {
        this.a0.remove(bVar);
    }

    public final void J(sg.f fVar) {
        WeakReference weakReference;
        if (fVar != null || (weakReference = this.X) == null) {
            this.X = new WeakReference(fVar);
            U(1, fVar);
        } else {
            A(1, (View) weakReference.get());
            this.X = null;
        }
    }

    public final void K(int i5) {
        if (i5 < 0) {
            throw new IllegalArgumentException("offset must be greater than or equal to 0");
        }
        this.C = i5;
        V(this.N, true);
    }

    public final void L(boolean z5) {
        if (this.f5953b == z5) {
            return;
        }
        this.f5953b = z5;
        if (this.W != null) {
            x();
        }
        Q((this.f5953b && this.N == 6) ? 3 : this.N);
        V(this.N, true);
        T();
    }

    public final void M(float f2) {
        if (f2 <= 0.0f || f2 >= 1.0f) {
            throw new IllegalArgumentException("ratio must be a float value between 0 and 1");
        }
        this.F = f2;
        if (this.W != null) {
            this.E = (int) ((1.0f - f2) * this.V);
        }
    }

    public final void N(boolean z5) {
        if (this.I != z5) {
            this.I = z5;
            if (!z5 && this.N == 5) {
                P(4);
            }
            T();
        }
    }

    public final void O(int i5) {
        if (i5 == -1) {
            if (this.f5961f) {
                return;
            } else {
                this.f5961f = true;
            }
        } else {
            if (!this.f5961f && this.f5959e == i5) {
                return;
            }
            this.f5961f = false;
            this.f5959e = Math.max(0, i5);
        }
        X();
    }

    public final void P(int i5) {
        if (i5 == 1 || i5 == 2) {
            throw new IllegalArgumentException(a.j(new StringBuilder("STATE_"), i5 == 1 ? "DRAGGING" : "SETTLING", " should not be set externally."));
        }
        if (!this.I && i5 == 5) {
            Log.w("BottomSheetBehavior", "Cannot set state: " + i5);
            return;
        }
        int i6 = (i5 == 6 && this.f5953b && G(i5) <= this.D) ? 3 : i5;
        WeakReference weakReference = this.W;
        if (weakReference == null || weakReference.get() == null) {
            Q(i5);
            return;
        }
        View view = (View) this.W.get();
        v0 v0Var = new v0(this, view, i6);
        ViewParent parent = view.getParent();
        if (parent != null && parent.isLayoutRequested() && view.isAttachedToWindow()) {
            view.post(v0Var);
        } else {
            v0Var.run();
        }
    }

    public final void Q(int i5) {
        View view;
        if (this.N == i5) {
            return;
        }
        this.N = i5;
        if (i5 != 4 && i5 != 3 && i5 != 6) {
            boolean z5 = this.I;
        }
        WeakReference weakReference = this.W;
        if (weakReference == null || (view = (View) weakReference.get()) == null) {
            return;
        }
        int i6 = 0;
        if (i5 == 3) {
            W(true);
        } else if (i5 == 6 || i5 == 5 || i5 == 4) {
            W(false);
        }
        V(i5, true);
        while (true) {
            ArrayList arrayList = this.a0;
            if (i6 >= arrayList.size()) {
                T();
                return;
            } else {
                ((sg.b) arrayList.get(i6)).c(i5, view);
                i6++;
            }
        }
    }

    public final boolean R(View view, float f2) {
        if (this.J) {
            return true;
        }
        if (view.getTop() < this.G) {
            return false;
        }
        return Math.abs(((f2 * this.S) + ((float) view.getTop())) - ((float) this.G)) / ((float) z()) > 0.5f;
    }

    public final void S(View view, int i5, boolean z5) {
        int G = G(i5);
        ViewDragHelper viewDragHelper = this.O;
        if (viewDragHelper == null || (!z5 ? viewDragHelper.s(view, view.getLeft(), G) : viewDragHelper.q(view.getLeft(), G))) {
            Q(i5);
            return;
        }
        Q(2);
        V(i5, true);
        this.A.g(i5);
    }

    public final void T() {
        WeakReference weakReference = this.W;
        if (weakReference != null) {
            U(0, (View) weakReference.get());
        }
        WeakReference weakReference2 = this.X;
        if (weakReference2 != null) {
            U(1, (View) weakReference2.get());
        }
    }

    public final void U(int i5, View view) {
        int i6;
        int i10;
        if (view == null) {
            return;
        }
        A(i5, view);
        if (!this.f5953b && this.N != 6) {
            String string = view.getResources().getString(R.string.bottomsheet_action_expand_halfway);
            sg.a aVar = new sg.a(this, 6);
            ArrayList h6 = s0.h(view);
            int i11 = 0;
            while (true) {
                if (i11 >= h6.size()) {
                    int i12 = 0;
                    int i13 = -1;
                    while (true) {
                        int[] iArr = s0.f1631d;
                        if (i12 >= 32 || i13 != -1) {
                            break;
                        }
                        int i14 = iArr[i12];
                        boolean z5 = true;
                        for (int i15 = 0; i15 < h6.size(); i15++) {
                            z5 &= ((androidx.core.view.accessibility.a) h6.get(i15)).a() != i14;
                        }
                        if (z5) {
                            i13 = i14;
                        }
                        i12++;
                    }
                    i6 = i13;
                } else {
                    if (TextUtils.equals(string, ((AccessibilityNodeInfo.AccessibilityAction) ((androidx.core.view.accessibility.a) h6.get(i11)).a).getLabel())) {
                        i6 = ((androidx.core.view.accessibility.a) h6.get(i11)).a();
                        break;
                    }
                    i11++;
                }
            }
            if (i6 != -1) {
                i10 = i6;
                androidx.core.view.accessibility.a aVar2 = new androidx.core.view.accessibility.a(null, i10, string, aVar, null);
                androidx.core.view.b e9 = s0.e(view);
                if (e9 == null) {
                    e9 = new androidx.core.view.b();
                }
                s0.p(view, e9);
                s0.m(aVar2.a(), view);
                s0.h(view).add(aVar2);
                s0.j(0, view);
            } else {
                i10 = i6;
            }
            this.h0.put(i5, i10);
        }
        if (this.I && this.N != 5) {
            s0.n(view, androidx.core.view.accessibility.a.f1559m, null, new sg.a(this, 5));
        }
        int i16 = this.N;
        if (i16 == 3) {
            s0.n(view, androidx.core.view.accessibility.a.f1558l, null, new sg.a(this, this.f5953b ? 4 : 6));
            return;
        }
        if (i16 == 4) {
            s0.n(view, androidx.core.view.accessibility.a.k, null, new sg.a(this, this.f5953b ? 3 : 6));
        } else {
            if (i16 != 6) {
                return;
            }
            s0.n(view, androidx.core.view.accessibility.a.f1558l, null, new sg.a(this, 4));
            s0.n(view, androidx.core.view.accessibility.a.k, null, new sg.a(this, 3));
        }
    }

    public final void V(int i5, boolean z5) {
        i iVar;
        if (i5 == 2) {
            return;
        }
        boolean z6 = this.N == 3 && (this.f5980x || H());
        if (this.f5982z == z6 || (iVar = this.f5966i) == null) {
            return;
        }
        this.f5982z = z6;
        ValueAnimator valueAnimator = this.B;
        if (!z5 || valueAnimator == null) {
            if (valueAnimator != null && valueAnimator.isRunning()) {
                valueAnimator.cancel();
            }
            iVar.r(this.f5982z ? y() : 1.0f);
            return;
        }
        if (valueAnimator.isRunning()) {
            valueAnimator.reverse();
        } else {
            valueAnimator.setFloatValues(iVar.f14001e.j, z6 ? y() : 1.0f);
            valueAnimator.start();
        }
    }

    public final void W(boolean z5) {
        WeakReference weakReference = this.W;
        if (weakReference == null) {
            return;
        }
        ViewParent parent = ((View) weakReference.get()).getParent();
        if (parent instanceof CoordinatorLayout) {
            CoordinatorLayout coordinatorLayout = (CoordinatorLayout) parent;
            int childCount = coordinatorLayout.getChildCount();
            if (z5) {
                if (this.f5964g0 != null) {
                    return;
                } else {
                    this.f5964g0 = new HashMap(childCount);
                }
            }
            for (int i5 = 0; i5 < childCount; i5++) {
                View childAt = coordinatorLayout.getChildAt(i5);
                if (childAt != this.W.get() && z5) {
                    this.f5964g0.put(childAt, Integer.valueOf(childAt.getImportantForAccessibility()));
                }
            }
            if (z5) {
                return;
            }
            this.f5964g0 = null;
        }
    }

    public final void X() {
        View view;
        if (this.W != null) {
            x();
            if (this.N != 4 || (view = (View) this.W.get()) == null) {
                return;
            }
            view.requestLayout();
        }
    }

    @Override // eh.b
    public final void a(BackEventCompat backEventCompat) {
        f fVar = this.f5956c0;
        if (fVar == null) {
            return;
        }
        fVar.f8088f = backEventCompat;
    }

    @Override // eh.b
    public final void b(BackEventCompat backEventCompat) {
        f fVar = this.f5956c0;
        if (fVar == null) {
            return;
        }
        if (fVar.f8088f == null) {
            Log.w("MaterialBackHelper", "Must call startBackProgress() before updateBackProgress()");
        }
        BackEventCompat backEventCompat2 = fVar.f8088f;
        fVar.f8088f = backEventCompat;
        if (backEventCompat2 == null) {
            return;
        }
        fVar.b(backEventCompat.f731c);
    }

    @Override // eh.b
    public final void c() {
        f fVar = this.f5956c0;
        if (fVar == null) {
            return;
        }
        int i5 = fVar.f8086d;
        int i6 = fVar.f8085c;
        BackEventCompat backEventCompat = fVar.f8088f;
        fVar.f8088f = null;
        if (backEventCompat != null) {
            float f2 = backEventCompat.f731c;
            if (Build.VERSION.SDK_INT >= 34) {
                if (!this.I) {
                    AnimatorSet a = fVar.a();
                    a.setDuration(mg.a.c(i6, i5, f2));
                    a.start();
                    P(4);
                    return;
                }
                androidx.appcompat.widget.c cVar = new androidx.appcompat.widget.c(10, this);
                View view = fVar.f8084b;
                ObjectAnimator ofFloat = ObjectAnimator.ofFloat(view, (Property<View, Float>) View.TRANSLATION_Y, view.getScaleY() * view.getHeight());
                ofFloat.setInterpolator(new q2.a(1));
                ofFloat.setDuration(mg.a.c(i6, i5, f2));
                ofFloat.addListener(new androidx.appcompat.widget.c(1, fVar));
                ofFloat.addListener(cVar);
                ofFloat.start();
                return;
            }
        }
        P(this.I ? 5 : 4);
    }

    @Override // eh.b
    public final void d() {
        f fVar = this.f5956c0;
        if (fVar == null) {
            return;
        }
        if (fVar.f8088f == null) {
            Log.w("MaterialBackHelper", "Must call startBackProgress() and updateBackProgress() before cancelBackProgress()");
        }
        BackEventCompat backEventCompat = fVar.f8088f;
        fVar.f8088f = null;
        if (backEventCompat == null) {
            return;
        }
        AnimatorSet a = fVar.a();
        a.setDuration(fVar.f8087e);
        a.start();
    }

    @Override // v0.b
    public final void g(d dVar) {
        this.W = null;
        this.O = null;
        this.f5956c0 = null;
    }

    @Override // v0.b
    public final void j() {
        this.W = null;
        this.O = null;
        this.f5956c0 = null;
    }

    @Override // v0.b
    public final boolean k(CoordinatorLayout coordinatorLayout, View view, MotionEvent motionEvent) {
        int i5;
        ViewDragHelper viewDragHelper;
        if (!view.isShown() || !this.K) {
            this.P = true;
            return false;
        }
        int actionMasked = motionEvent.getActionMasked();
        if (actionMasked == 0) {
            this.f5958d0 = -1;
            this.f5960e0 = -1;
            VelocityTracker velocityTracker = this.f5954b0;
            if (velocityTracker != null) {
                velocityTracker.recycle();
                this.f5954b0 = null;
            }
        }
        if (this.f5954b0 == null) {
            this.f5954b0 = VelocityTracker.obtain();
        }
        this.f5954b0.addMovement(motionEvent);
        if (actionMasked == 0) {
            int x5 = (int) motionEvent.getX();
            int y5 = (int) motionEvent.getY();
            this.f5960e0 = y5;
            if (this.N != 2) {
                WeakReference weakReference = this.Z;
                View view2 = weakReference != null ? (View) weakReference.get() : null;
                if (view2 != null && coordinatorLayout.i(view2, x5, y5)) {
                    this.f5958d0 = motionEvent.getPointerId(motionEvent.getActionIndex());
                    int i6 = this.f5960e0;
                    WeakReference weakReference2 = this.Y;
                    View view3 = weakReference2 != null ? (View) weakReference2.get() : null;
                    if (view3 == null || !coordinatorLayout.i(view3, x5, i6)) {
                        this.f5962f0 = true;
                    }
                }
            }
            this.P = this.f5958d0 == -1 && !coordinatorLayout.i(view, x5, this.f5960e0);
        } else if (actionMasked == 1 || actionMasked == 3) {
            this.f5962f0 = false;
            this.f5958d0 = -1;
            if (this.P) {
                this.P = false;
                return false;
            }
        }
        if (this.P || (viewDragHelper = this.O) == null || !viewDragHelper.r(motionEvent)) {
            WeakReference weakReference3 = this.Z;
            View view4 = weakReference3 != null ? (View) weakReference3.get() : null;
            if (actionMasked != 2 || view4 == null || this.P || this.N == 1 || coordinatorLayout.i(view4, (int) motionEvent.getX(), (int) motionEvent.getY()) || this.O == null || (i5 = this.f5960e0) == -1 || Math.abs(i5 - motionEvent.getY()) <= this.O.f1694b) {
                return false;
            }
        }
        return true;
    }

    @Override // v0.b
    public final boolean l(CoordinatorLayout coordinatorLayout, View view, int i5) {
        if (coordinatorLayout.getFitsSystemWindows() && !view.getFitsSystemWindows()) {
            view.setFitsSystemWindows(true);
        }
        int i6 = 0;
        if (this.W == null) {
            this.f5963g = coordinatorLayout.getResources().getDimensionPixelSize(R.dimen.design_bottom_sheet_peek_height_min);
            boolean z5 = (Build.VERSION.SDK_INT < 29 || this.f5970n || this.f5961f) ? false : true;
            if (this.f5971o || this.f5972p || this.f5973q || this.f5975s || this.f5976t || this.f5977u || z5) {
                q.d(view, new h0(this, z5, 10));
            }
            s0.r(view, new g(view));
            this.W = new WeakReference(view);
            this.f5956c0 = new f(view);
            i iVar = this.f5966i;
            if (iVar != null) {
                view.setBackground(iVar);
                float f2 = this.H;
                if (f2 == -1.0f) {
                    f2 = view.getElevation();
                }
                iVar.p(f2);
            } else {
                ColorStateList colorStateList = this.j;
                if (colorStateList != null) {
                    j0.i(view, colorStateList);
                }
            }
            T();
            if (view.getImportantForAccessibility() == 0) {
                view.setImportantForAccessibility(1);
            }
        }
        if (this.O == null) {
            this.O = new ViewDragHelper(coordinatorLayout.getContext(), coordinatorLayout, this.f5967i0);
        }
        int top = view.getTop();
        coordinatorLayout.k(i5, view);
        this.U = coordinatorLayout.getWidth();
        this.V = coordinatorLayout.getHeight();
        int height = view.getHeight();
        this.T = height;
        int i10 = this.V;
        int i11 = i10 - height;
        int i12 = this.f5979w;
        if (i11 < i12) {
            if (this.f5974r) {
                int i13 = this.f5968l;
                if (i13 != -1) {
                    i10 = Math.min(i10, i13);
                }
                this.T = i10;
            } else {
                int i14 = i10 - i12;
                int i15 = this.f5968l;
                if (i15 != -1) {
                    i14 = Math.min(i14, i15);
                }
                this.T = i14;
            }
        }
        this.D = Math.max(0, this.V - this.T);
        this.E = (int) ((1.0f - this.F) * this.V);
        x();
        int i16 = this.N;
        if (i16 == 3) {
            int F = F();
            WeakHashMap weakHashMap = s0.a;
            view.offsetTopAndBottom(F);
        } else if (i16 == 6) {
            int i17 = this.E;
            WeakHashMap weakHashMap2 = s0.a;
            view.offsetTopAndBottom(i17);
        } else if (this.I && i16 == 5) {
            int i18 = this.V;
            WeakHashMap weakHashMap3 = s0.a;
            view.offsetTopAndBottom(i18);
        } else if (i16 == 4) {
            int i19 = this.G;
            WeakHashMap weakHashMap4 = s0.a;
            view.offsetTopAndBottom(i19);
        } else if (i16 == 1 || i16 == 2) {
            int top2 = top - view.getTop();
            WeakHashMap weakHashMap5 = s0.a;
            view.offsetTopAndBottom(top2);
        }
        V(this.N, false);
        this.Z = new WeakReference(C(view));
        while (true) {
            ArrayList arrayList = this.a0;
            if (i6 >= arrayList.size()) {
                return true;
            }
            ((sg.b) arrayList.get(i6)).a(view);
            i6++;
        }
    }

    @Override // v0.b
    public final boolean m(CoordinatorLayout coordinatorLayout, View view, int i5, int i6, int i10) {
        ViewGroup.MarginLayoutParams marginLayoutParams = (ViewGroup.MarginLayoutParams) view.getLayoutParams();
        view.measure(E(i5, coordinatorLayout.getPaddingRight() + coordinatorLayout.getPaddingLeft() + marginLayoutParams.leftMargin + marginLayoutParams.rightMargin + i6, this.k, marginLayoutParams.width), E(i10, coordinatorLayout.getPaddingBottom() + coordinatorLayout.getPaddingTop() + marginLayoutParams.topMargin + marginLayoutParams.bottomMargin, this.f5968l, marginLayoutParams.height));
        return true;
    }

    @Override // v0.b
    public final boolean n(View view) {
        WeakReference weakReference = this.Z;
        return (weakReference == null || view != weakReference.get() || this.N == 3 || this.M) ? false : true;
    }

    @Override // v0.b
    public final void o(CoordinatorLayout coordinatorLayout, View view, View view2, int i5, int i6, int[] iArr, int i10) {
        if (i10 == 1) {
            return;
        }
        WeakReference weakReference = this.Z;
        View view3 = weakReference != null ? (View) weakReference.get() : null;
        if (view2 != view3) {
            return;
        }
        int top = view.getTop();
        int i11 = top - i6;
        boolean z5 = this.L;
        if (i6 > 0) {
            if (!this.R && !z5 && view2 == view3 && view2.canScrollVertically(1)) {
                this.M = true;
                return;
            }
            if (i11 < F()) {
                int F = top - F();
                iArr[1] = F;
                WeakHashMap weakHashMap = s0.a;
                view.offsetTopAndBottom(-F);
                Q(3);
            } else {
                if (!this.K) {
                    return;
                }
                iArr[1] = i6;
                WeakHashMap weakHashMap2 = s0.a;
                view.offsetTopAndBottom(-i6);
                Q(1);
            }
        } else if (i6 < 0) {
            boolean canScrollVertically = view2.canScrollVertically(-1);
            if (!this.R && !z5 && view2 == view3 && canScrollVertically) {
                this.M = true;
                return;
            }
            if (!canScrollVertically) {
                int i12 = this.G;
                if (i11 > i12 && !this.I) {
                    int i13 = top - i12;
                    iArr[1] = i13;
                    WeakHashMap weakHashMap3 = s0.a;
                    view.offsetTopAndBottom(-i13);
                    Q(4);
                } else {
                    if (!this.K) {
                        return;
                    }
                    iArr[1] = i6;
                    WeakHashMap weakHashMap4 = s0.a;
                    view.offsetTopAndBottom(-i6);
                    Q(1);
                }
            }
        }
        B(view.getTop());
        this.Q = i6;
        this.R = true;
        this.M = false;
    }

    @Override // v0.b
    public final void r(View view, Parcelable parcelable) {
        sg.c cVar = (sg.c) parcelable;
        int i5 = this.a;
        if (i5 != 0) {
            if (i5 == -1 || (i5 & 1) == 1) {
                this.f5959e = cVar.f18014v;
            }
            if (i5 == -1 || (i5 & 2) == 2) {
                this.f5953b = cVar.f18015w;
            }
            if (i5 == -1 || (i5 & 4) == 4) {
                this.I = cVar.f18016x;
            }
            if (i5 == -1 || (i5 & 8) == 8) {
                this.J = cVar.f18017y;
            }
        }
        int i6 = cVar.f18013i;
        if (i6 == 1 || i6 == 2) {
            this.N = 4;
        } else {
            this.N = i6;
        }
    }

    @Override // v0.b
    public final Parcelable s(View view) {
        AbsSavedState absSavedState = View.BaseSavedState.EMPTY_STATE;
        return new sg.c(this);
    }

    @Override // v0.b
    public final boolean t(CoordinatorLayout coordinatorLayout, View view, View view2, int i5, int i6) {
        this.Q = 0;
        this.R = false;
        return (i5 & 2) != 0;
    }

    /* JADX WARN: Code restructure failed: missing block: B:17:0x0030, code lost:
    
        if (r4.getTop() <= r2.E) goto L51;
     */
    /* JADX WARN: Code restructure failed: missing block: B:35:0x0071, code lost:
    
        if (java.lang.Math.abs(r3 - r2.D) < java.lang.Math.abs(r3 - r2.G)) goto L51;
     */
    /* JADX WARN: Code restructure failed: missing block: B:40:0x0080, code lost:
    
        if (r3 < java.lang.Math.abs(r3 - r2.G)) goto L51;
     */
    /* JADX WARN: Code restructure failed: missing block: B:42:0x0090, code lost:
    
        if (java.lang.Math.abs(r3 - r1) < java.lang.Math.abs(r3 - r2.G)) goto L50;
     */
    /* JADX WARN: Code restructure failed: missing block: B:46:0x00ac, code lost:
    
        if (java.lang.Math.abs(r3 - r2.E) < java.lang.Math.abs(r3 - r2.G)) goto L50;
     */
    @Override // v0.b
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void u(CoordinatorLayout coordinatorLayout, View view, View view2, int i5) {
        float yVelocity;
        int i6 = 3;
        if (view.getTop() == F()) {
            Q(3);
            return;
        }
        WeakReference weakReference = this.Z;
        if (weakReference != null && view2 == weakReference.get() && this.R) {
            if (this.Q > 0) {
                if (!this.f5953b) {
                }
                S(view, i6, false);
                this.R = false;
            }
            if (this.I) {
                VelocityTracker velocityTracker = this.f5954b0;
                if (velocityTracker == null) {
                    yVelocity = 0.0f;
                } else {
                    velocityTracker.computeCurrentVelocity(1000, this.f5955c);
                    yVelocity = this.f5954b0.getYVelocity(this.f5958d0);
                }
                if (R(view, yVelocity)) {
                    i6 = 5;
                    S(view, i6, false);
                    this.R = false;
                }
            }
            if (this.Q == 0) {
                int top = view.getTop();
                if (!this.f5953b) {
                    int i10 = this.E;
                    if (top < i10) {
                    }
                    i6 = 6;
                }
            } else {
                if (!this.f5953b) {
                    int top2 = view.getTop();
                }
                i6 = 4;
            }
            S(view, i6, false);
            this.R = false;
        }
    }

    @Override // v0.b
    public final boolean v(CoordinatorLayout coordinatorLayout, View view, MotionEvent motionEvent) {
        if (!view.isShown()) {
            return false;
        }
        int actionMasked = motionEvent.getActionMasked();
        int i5 = this.N;
        if (i5 == 1 && actionMasked == 0) {
            return true;
        }
        ViewDragHelper viewDragHelper = this.O;
        if (viewDragHelper != null && (this.K || i5 == 1)) {
            viewDragHelper.k(motionEvent);
        }
        if (actionMasked == 0) {
            this.f5958d0 = -1;
            this.f5960e0 = -1;
            VelocityTracker velocityTracker = this.f5954b0;
            if (velocityTracker != null) {
                velocityTracker.recycle();
                this.f5954b0 = null;
            }
        }
        if (this.f5954b0 == null) {
            this.f5954b0 = VelocityTracker.obtain();
        }
        this.f5954b0.addMovement(motionEvent);
        if (this.O != null && ((this.K || this.N == 1) && actionMasked == 2 && !this.P)) {
            float abs = Math.abs(this.f5960e0 - motionEvent.getY());
            ViewDragHelper viewDragHelper2 = this.O;
            if (abs > viewDragHelper2.f1694b) {
                viewDragHelper2.b(motionEvent.getPointerId(motionEvent.getActionIndex()), view);
            }
        }
        return !this.P;
    }

    public final void w(sg.b bVar) {
        ArrayList arrayList = this.a0;
        if (arrayList.contains(bVar)) {
            return;
        }
        arrayList.add(bVar);
    }

    public final void x() {
        int z5 = z();
        if (this.f5953b) {
            this.G = Math.max(this.V - z5, this.D);
        } else {
            this.G = this.V - z5;
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:22:0x004c  */
    /* JADX WARN: Removed duplicated region for block: B:25:0x0064  */
    /* JADX WARN: Removed duplicated region for block: B:33:0x004f  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final float y() {
        WeakReference weakReference;
        WindowInsets rootWindowInsets;
        float f2;
        RoundedCorner roundedCorner;
        float f10 = 0.0f;
        if (this.f5966i != null && (weakReference = this.W) != null && weakReference.get() != null && Build.VERSION.SDK_INT >= 31) {
            View view = (View) this.W.get();
            if (H() && (rootWindowInsets = view.getRootWindowInsets()) != null) {
                float k = this.f5966i.k();
                RoundedCorner roundedCorner2 = rootWindowInsets.getRoundedCorner(0);
                if (roundedCorner2 != null) {
                    float radius = roundedCorner2.getRadius();
                    if (radius > 0.0f && k > 0.0f) {
                        f2 = radius / k;
                        i iVar = this.f5966i;
                        float[] fArr = iVar.Z;
                        float a = fArr == null ? fArr[0] : iVar.f14001e.a.f14020f.a(iVar.h());
                        roundedCorner = rootWindowInsets.getRoundedCorner(1);
                        if (roundedCorner != null) {
                            float radius2 = roundedCorner.getRadius();
                            if (radius2 > 0.0f && a > 0.0f) {
                                f10 = radius2 / a;
                            }
                        }
                        return Math.max(f2, f10);
                    }
                }
                f2 = 0.0f;
                i iVar2 = this.f5966i;
                float[] fArr2 = iVar2.Z;
                if (fArr2 == null) {
                }
                roundedCorner = rootWindowInsets.getRoundedCorner(1);
                if (roundedCorner != null) {
                }
                return Math.max(f2, f10);
            }
        }
        return 0.0f;
    }

    public final int z() {
        int i5;
        return this.f5961f ? Math.min(Math.max(this.f5963g, this.V - ((this.U * 9) / 16)), this.T) + this.f5978v : (this.f5970n || this.f5971o || (i5 = this.f5969m) <= 0) ? this.f5959e + this.f5978v : Math.max(this.f5959e, i5 + this.f5965h);
    }

    public BottomSheetBehavior(@NonNull Context context, AttributeSet attributeSet) {
        int i5;
        this.a = 0;
        this.f5953b = true;
        this.k = -1;
        this.f5968l = -1;
        this.A = new k(this);
        this.F = 0.5f;
        this.H = -1.0f;
        this.K = true;
        this.L = true;
        this.N = 4;
        this.S = 0.1f;
        this.a0 = new ArrayList();
        this.f5960e0 = -1;
        this.h0 = new SparseIntArray();
        this.f5967i0 = new c(this, 1);
        this.f5965h = context.getResources().getDimensionPixelSize(R.dimen.mtrl_min_touch_target_size);
        TypedArray obtainStyledAttributes = context.obtainStyledAttributes(attributeSet, lg.a.f13957f);
        int i6 = 3;
        if (obtainStyledAttributes.hasValue(3)) {
            this.j = k0.u(context, obtainStyledAttributes, 3);
        }
        if (obtainStyledAttributes.hasValue(22)) {
            this.f5981y = m.c(context, attributeSet, R.attr.bottomSheetStyle, R.style.Widget_Design_BottomSheet_Modal).a();
        }
        m mVar = this.f5981y;
        if (mVar != null) {
            i iVar = new i(mVar);
            this.f5966i = iVar;
            iVar.m(context);
            ColorStateList colorStateList = this.j;
            if (colorStateList != null) {
                this.f5966i.q(colorStateList);
            } else {
                TypedValue typedValue = new TypedValue();
                context.getTheme().resolveAttribute(android.R.attr.colorBackground, typedValue, true);
                this.f5966i.setTint(typedValue.data);
            }
        }
        ValueAnimator ofFloat = ValueAnimator.ofFloat(y(), 1.0f);
        this.B = ofFloat;
        ofFloat.setDuration(500L);
        this.B.addUpdateListener(new n(i6, this));
        this.H = obtainStyledAttributes.getDimension(2, -1.0f);
        if (obtainStyledAttributes.hasValue(0)) {
            this.k = obtainStyledAttributes.getDimensionPixelSize(0, -1);
        }
        if (obtainStyledAttributes.hasValue(1)) {
            this.f5968l = obtainStyledAttributes.getDimensionPixelSize(1, -1);
        }
        TypedValue peekValue = obtainStyledAttributes.peekValue(10);
        if (peekValue != null && (i5 = peekValue.data) == -1) {
            O(i5);
        } else {
            O(obtainStyledAttributes.getDimensionPixelSize(10, -1));
        }
        N(obtainStyledAttributes.getBoolean(9, false));
        this.f5970n = obtainStyledAttributes.getBoolean(14, false);
        L(obtainStyledAttributes.getBoolean(7, true));
        this.J = obtainStyledAttributes.getBoolean(13, false);
        this.K = obtainStyledAttributes.getBoolean(4, true);
        this.L = obtainStyledAttributes.getBoolean(5, true);
        this.a = obtainStyledAttributes.getInt(11, 0);
        M(obtainStyledAttributes.getFloat(8, 0.5f));
        TypedValue peekValue2 = obtainStyledAttributes.peekValue(6);
        if (peekValue2 != null && peekValue2.type == 16) {
            K(peekValue2.data);
        } else {
            K(obtainStyledAttributes.getDimensionPixelOffset(6, 0));
        }
        this.f5957d = obtainStyledAttributes.getInt(12, 500);
        this.f5971o = obtainStyledAttributes.getBoolean(18, false);
        this.f5972p = obtainStyledAttributes.getBoolean(19, false);
        this.f5973q = obtainStyledAttributes.getBoolean(20, false);
        this.f5974r = obtainStyledAttributes.getBoolean(21, true);
        this.f5975s = obtainStyledAttributes.getBoolean(15, false);
        this.f5976t = obtainStyledAttributes.getBoolean(16, false);
        this.f5977u = obtainStyledAttributes.getBoolean(17, false);
        this.f5980x = obtainStyledAttributes.getBoolean(24, true);
        obtainStyledAttributes.recycle();
        this.f5955c = ViewConfiguration.get(context).getScaledMaximumFlingVelocity();
    }

    @Override // v0.b
    public final void p(CoordinatorLayout coordinatorLayout, View view, int i5, int i6, int i10, int[] iArr) {
    }
}
