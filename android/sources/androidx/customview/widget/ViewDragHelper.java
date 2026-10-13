package androidx.customview.widget;

import a3.h;
import a5.k0;
import android.content.Context;
import android.util.Log;
import android.view.MotionEvent;
import android.view.VelocityTracker;
import android.view.View;
import android.view.ViewConfiguration;
import android.view.ViewGroup;
import android.view.ViewParent;
import android.widget.OverScroller;
import androidx.core.view.s0;
import java.util.Arrays;
import java.util.WeakHashMap;

/* loaded from: classes.dex */
public final class ViewDragHelper {

    /* renamed from: x, reason: collision with root package name */
    public static final c f1693x = new c();
    public int a;

    /* renamed from: b, reason: collision with root package name */
    public int f1694b;

    /* renamed from: d, reason: collision with root package name */
    public float[] f1696d;

    /* renamed from: e, reason: collision with root package name */
    public float[] f1697e;

    /* renamed from: f, reason: collision with root package name */
    public float[] f1698f;

    /* renamed from: g, reason: collision with root package name */
    public float[] f1699g;

    /* renamed from: h, reason: collision with root package name */
    public int[] f1700h;

    /* renamed from: i, reason: collision with root package name */
    public int[] f1701i;
    public int[] j;
    public int k;

    /* renamed from: l, reason: collision with root package name */
    public VelocityTracker f1702l;

    /* renamed from: m, reason: collision with root package name */
    public final float f1703m;

    /* renamed from: n, reason: collision with root package name */
    public float f1704n;

    /* renamed from: o, reason: collision with root package name */
    public int f1705o;

    /* renamed from: p, reason: collision with root package name */
    public final int f1706p;

    /* renamed from: q, reason: collision with root package name */
    public int f1707q;

    /* renamed from: r, reason: collision with root package name */
    public final OverScroller f1708r;

    /* renamed from: s, reason: collision with root package name */
    public final k0 f1709s;

    /* renamed from: t, reason: collision with root package name */
    public View f1710t;

    /* renamed from: u, reason: collision with root package name */
    public boolean f1711u;

    /* renamed from: v, reason: collision with root package name */
    public final ViewGroup f1712v;

    /* renamed from: c, reason: collision with root package name */
    public int f1695c = -1;

    /* renamed from: w, reason: collision with root package name */
    public final h f1713w = new h(9, this);

    public ViewDragHelper(Context context, ViewGroup viewGroup, k0 k0Var) {
        if (k0Var == null) {
            throw new IllegalArgumentException("Callback may not be null");
        }
        this.f1712v = viewGroup;
        this.f1709s = k0Var;
        ViewConfiguration viewConfiguration = ViewConfiguration.get(context);
        int i5 = (int) ((context.getResources().getDisplayMetrics().density * 20.0f) + 0.5f);
        this.f1706p = i5;
        this.f1705o = i5;
        this.f1694b = viewConfiguration.getScaledTouchSlop();
        this.f1703m = viewConfiguration.getScaledMaximumFlingVelocity();
        this.f1704n = viewConfiguration.getScaledMinimumFlingVelocity();
        this.f1708r = new OverScroller(context, f1693x);
    }

    public final void a() {
        this.f1695c = -1;
        float[] fArr = this.f1696d;
        if (fArr != null) {
            Arrays.fill(fArr, 0.0f);
            Arrays.fill(this.f1697e, 0.0f);
            Arrays.fill(this.f1698f, 0.0f);
            Arrays.fill(this.f1699g, 0.0f);
            Arrays.fill(this.f1700h, 0);
            Arrays.fill(this.f1701i, 0);
            Arrays.fill(this.j, 0);
            this.k = 0;
        }
        VelocityTracker velocityTracker = this.f1702l;
        if (velocityTracker != null) {
            velocityTracker.recycle();
            this.f1702l = null;
        }
    }

    public final void b(int i5, View view) {
        ViewParent parent = view.getParent();
        ViewGroup viewGroup = this.f1712v;
        if (parent != viewGroup) {
            throw new IllegalArgumentException("captureChildView: parameter must be a descendant of the ViewDragHelper's tracked parent view (" + viewGroup + ")");
        }
        this.f1710t = view;
        this.f1695c = i5;
        this.f1709s.J(i5, view);
        p(1);
    }

    public final boolean c(float f2, float f10, int i5, int i6) {
        float abs = Math.abs(f2);
        float abs2 = Math.abs(f10);
        if ((this.f1700h[i5] & i6) != i6 || (this.f1707q & i6) == 0 || (this.j[i5] & i6) == i6 || (this.f1701i[i5] & i6) == i6) {
            return false;
        }
        float f11 = this.f1694b;
        if (abs <= f11 && abs2 <= f11) {
            return false;
        }
        if (abs < abs2 * 0.5f) {
            this.f1709s.getClass();
        }
        return (this.f1701i[i5] & i6) == 0 && abs > ((float) this.f1694b);
    }

    /* JADX WARN: Removed duplicated region for block: B:13:0x0044 A[RETURN] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final boolean d(float f2, float f10, View view) {
        if (view != null) {
            k0 k0Var = this.f1709s;
            boolean z5 = k0Var.z(view) > 0;
            boolean z6 = k0Var.A() > 0;
            if (z5 && z6) {
                float f11 = (f10 * f10) + (f2 * f2);
                int i5 = this.f1694b;
                if (f11 > i5 * i5) {
                }
            } else if (!z5 ? !(!z6 || Math.abs(f10) <= this.f1694b) : Math.abs(f2) > this.f1694b) {
                return true;
            }
        }
        return false;
    }

    public final void e(int i5) {
        float[] fArr = this.f1696d;
        if (fArr != null) {
            int i6 = this.k;
            int i10 = 1 << i5;
            if ((i6 & i10) != 0) {
                fArr[i5] = 0.0f;
                this.f1697e[i5] = 0.0f;
                this.f1698f[i5] = 0.0f;
                this.f1699g[i5] = 0.0f;
                this.f1700h[i5] = 0;
                this.f1701i[i5] = 0;
                this.j[i5] = 0;
                this.k = (~i10) & i6;
            }
        }
    }

    public final int f(int i5, int i6, int i10) {
        if (i5 == 0) {
            return 0;
        }
        float width = this.f1712v.getWidth() / 2;
        float sin = (((float) Math.sin((Math.min(1.0f, Math.abs(i5) / r0) - 0.5f) * 0.47123894f)) * width) + width;
        int abs = Math.abs(i6);
        return Math.min(abs > 0 ? Math.round(Math.abs(sin / abs) * 1000.0f) * 4 : (int) (((Math.abs(i5) / i10) + 1.0f) * 256.0f), 600);
    }

    public final boolean g() {
        if (this.a == 2) {
            OverScroller overScroller = this.f1708r;
            boolean computeScrollOffset = overScroller.computeScrollOffset();
            int currX = overScroller.getCurrX();
            int currY = overScroller.getCurrY();
            int left = currX - this.f1710t.getLeft();
            int top = currY - this.f1710t.getTop();
            if (left != 0) {
                View view = this.f1710t;
                WeakHashMap weakHashMap = s0.a;
                view.offsetLeftAndRight(left);
            }
            if (top != 0) {
                View view2 = this.f1710t;
                WeakHashMap weakHashMap2 = s0.a;
                view2.offsetTopAndBottom(top);
            }
            if (left != 0 || top != 0) {
                this.f1709s.L(this.f1710t, currX, currY);
            }
            if (computeScrollOffset && currX == overScroller.getFinalX() && currY == overScroller.getFinalY()) {
                overScroller.abortAnimation();
                computeScrollOffset = false;
            }
            if (!computeScrollOffset) {
                this.f1712v.post(this.f1713w);
            }
        }
        return this.a == 2;
    }

    public final View h(int i5, int i6) {
        ViewGroup viewGroup = this.f1712v;
        for (int childCount = viewGroup.getChildCount() - 1; childCount >= 0; childCount--) {
            this.f1709s.getClass();
            View childAt = viewGroup.getChildAt(childCount);
            if (i5 >= childAt.getLeft() && i5 < childAt.getRight() && i6 >= childAt.getTop() && i6 < childAt.getBottom()) {
                return childAt;
            }
        }
        return null;
    }

    public final boolean i(int i5, int i6, int i10, int i11) {
        float f2;
        float f10;
        float f11;
        float f12;
        int left = this.f1710t.getLeft();
        int top = this.f1710t.getTop();
        int i12 = i5 - left;
        int i13 = i6 - top;
        OverScroller overScroller = this.f1708r;
        if (i12 == 0 && i13 == 0) {
            overScroller.abortAnimation();
            p(0);
            return false;
        }
        View view = this.f1710t;
        int i14 = (int) this.f1704n;
        int i15 = (int) this.f1703m;
        int abs = Math.abs(i10);
        if (abs < i14) {
            i10 = 0;
        } else if (abs > i15) {
            i10 = i10 > 0 ? i15 : -i15;
        }
        int i16 = (int) this.f1704n;
        int abs2 = Math.abs(i11);
        if (abs2 < i16) {
            i11 = 0;
        } else if (abs2 > i15) {
            i11 = i11 > 0 ? i15 : -i15;
        }
        int abs3 = Math.abs(i12);
        int abs4 = Math.abs(i13);
        int abs5 = Math.abs(i10);
        int abs6 = Math.abs(i11);
        int i17 = abs5 + abs6;
        int i18 = abs3 + abs4;
        if (i10 != 0) {
            f2 = abs5;
            f10 = i17;
        } else {
            f2 = abs3;
            f10 = i18;
        }
        float f13 = f2 / f10;
        if (i11 != 0) {
            f11 = abs6;
            f12 = i17;
        } else {
            f11 = abs4;
            f12 = i18;
        }
        float f14 = f11 / f12;
        k0 k0Var = this.f1709s;
        overScroller.startScroll(left, top, i12, i13, (int) ((f(i13, i11, k0Var.A()) * f14) + (f(i12, i10, k0Var.z(view)) * f13)));
        p(2);
        return true;
    }

    public final boolean j(int i5) {
        if ((this.k & (1 << i5)) != 0) {
            return true;
        }
        Log.e("ViewDragHelper", "Ignoring pointerId=" + i5 + " because ACTION_DOWN was not received for this pointer before ACTION_MOVE. It likely happened because  ViewDragHelper did not receive all the events in the event stream.");
        return false;
    }

    public final void k(MotionEvent motionEvent) {
        int i5;
        int actionMasked = motionEvent.getActionMasked();
        int actionIndex = motionEvent.getActionIndex();
        if (actionMasked == 0) {
            a();
        }
        if (this.f1702l == null) {
            this.f1702l = VelocityTracker.obtain();
        }
        this.f1702l.addMovement(motionEvent);
        k0 k0Var = this.f1709s;
        int i6 = 0;
        if (actionMasked == 0) {
            float x5 = motionEvent.getX();
            float y5 = motionEvent.getY();
            int pointerId = motionEvent.getPointerId(0);
            View h6 = h((int) x5, (int) y5);
            n(pointerId, x5, y5);
            t(pointerId, h6);
            if ((this.f1700h[pointerId] & this.f1707q) != 0) {
                k0Var.H();
                return;
            }
            return;
        }
        if (actionMasked == 1) {
            if (this.a == 1) {
                l();
            }
            a();
            return;
        }
        if (actionMasked == 2) {
            if (this.a != 1) {
                int pointerCount = motionEvent.getPointerCount();
                while (i6 < pointerCount) {
                    int pointerId2 = motionEvent.getPointerId(i6);
                    if (j(pointerId2)) {
                        float x10 = motionEvent.getX(i6);
                        float y6 = motionEvent.getY(i6);
                        float f2 = x10 - this.f1696d[pointerId2];
                        float f10 = y6 - this.f1697e[pointerId2];
                        m(pointerId2, f2, f10);
                        if (this.a != 1) {
                            View h7 = h((int) x10, (int) y6);
                            if (d(f2, f10, h7) && t(pointerId2, h7)) {
                                break;
                            }
                        } else {
                            break;
                        }
                    }
                    i6++;
                }
                o(motionEvent);
                return;
            }
            if (j(this.f1695c)) {
                int findPointerIndex = motionEvent.findPointerIndex(this.f1695c);
                float x11 = motionEvent.getX(findPointerIndex);
                float y10 = motionEvent.getY(findPointerIndex);
                float[] fArr = this.f1698f;
                int i10 = this.f1695c;
                int i11 = (int) (x11 - fArr[i10]);
                int i12 = (int) (y10 - this.f1699g[i10]);
                int left = this.f1710t.getLeft() + i11;
                int top = this.f1710t.getTop() + i12;
                int left2 = this.f1710t.getLeft();
                int top2 = this.f1710t.getTop();
                if (i11 != 0) {
                    left = k0Var.m(left, this.f1710t);
                    WeakHashMap weakHashMap = s0.a;
                    this.f1710t.offsetLeftAndRight(left - left2);
                }
                if (i12 != 0) {
                    top = k0Var.n(top, this.f1710t);
                    WeakHashMap weakHashMap2 = s0.a;
                    this.f1710t.offsetTopAndBottom(top - top2);
                }
                if (i11 != 0 || i12 != 0) {
                    k0Var.L(this.f1710t, left, top);
                }
                o(motionEvent);
                return;
            }
            return;
        }
        if (actionMasked == 3) {
            if (this.a == 1) {
                this.f1711u = true;
                k0Var.M(0.0f, 0.0f, this.f1710t);
                this.f1711u = false;
                if (this.a == 1) {
                    p(0);
                }
            }
            a();
            return;
        }
        if (actionMasked != 5) {
            if (actionMasked != 6) {
                return;
            }
            int pointerId3 = motionEvent.getPointerId(actionIndex);
            if (this.a == 1 && pointerId3 == this.f1695c) {
                int pointerCount2 = motionEvent.getPointerCount();
                while (true) {
                    if (i6 >= pointerCount2) {
                        i5 = -1;
                        break;
                    }
                    int pointerId4 = motionEvent.getPointerId(i6);
                    if (pointerId4 != this.f1695c) {
                        View h10 = h((int) motionEvent.getX(i6), (int) motionEvent.getY(i6));
                        View view = this.f1710t;
                        if (h10 == view && t(pointerId4, view)) {
                            i5 = this.f1695c;
                            break;
                        }
                    }
                    i6++;
                }
                if (i5 == -1) {
                    l();
                }
            }
            e(pointerId3);
            return;
        }
        int pointerId5 = motionEvent.getPointerId(actionIndex);
        float x12 = motionEvent.getX(actionIndex);
        float y11 = motionEvent.getY(actionIndex);
        n(pointerId5, x12, y11);
        if (this.a == 0) {
            t(pointerId5, h((int) x12, (int) y11));
            if ((this.f1700h[pointerId5] & this.f1707q) != 0) {
                k0Var.H();
                return;
            }
            return;
        }
        int i13 = (int) x12;
        int i14 = (int) y11;
        View view2 = this.f1710t;
        if (view2 != null && i13 >= view2.getLeft() && i13 < view2.getRight() && i14 >= view2.getTop() && i14 < view2.getBottom()) {
            i6 = 1;
        }
        if (i6 != 0) {
            t(pointerId5, this.f1710t);
        }
    }

    public final void l() {
        VelocityTracker velocityTracker = this.f1702l;
        float f2 = this.f1703m;
        velocityTracker.computeCurrentVelocity(1000, f2);
        float xVelocity = this.f1702l.getXVelocity(this.f1695c);
        float f10 = this.f1704n;
        float abs = Math.abs(xVelocity);
        if (abs < f10) {
            xVelocity = 0.0f;
        } else if (abs > f2) {
            xVelocity = xVelocity > 0.0f ? f2 : -f2;
        }
        float yVelocity = this.f1702l.getYVelocity(this.f1695c);
        float f11 = this.f1704n;
        float abs2 = Math.abs(yVelocity);
        if (abs2 < f11) {
            f2 = 0.0f;
        } else if (abs2 <= f2) {
            f2 = yVelocity;
        } else if (yVelocity <= 0.0f) {
            f2 = -f2;
        }
        this.f1711u = true;
        this.f1709s.M(xVelocity, f2, this.f1710t);
        this.f1711u = false;
        if (this.a == 1) {
            p(0);
        }
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r0v15 */
    /* JADX WARN: Type inference failed for: r0v16 */
    /* JADX WARN: Type inference failed for: r0v4, types: [int] */
    /* JADX WARN: Type inference failed for: r0v6 */
    /* JADX WARN: Type inference failed for: r0v7 */
    /* JADX WARN: Type inference failed for: r4v3, types: [a5.k0] */
    public final void m(int i5, float f2, float f10) {
        boolean c6 = c(f2, f10, i5, 1);
        boolean z5 = c6;
        if (c(f10, f2, i5, 4)) {
            z5 = (c6 ? 1 : 0) | 4;
        }
        boolean z6 = z5;
        if (c(f2, f10, i5, 2)) {
            z6 = (z5 ? 1 : 0) | 2;
        }
        ?? r02 = z6;
        if (c(f10, f2, i5, 8)) {
            r02 = (z6 ? 1 : 0) | 8;
        }
        if (r02 != 0) {
            int[] iArr = this.f1701i;
            iArr[i5] = iArr[i5] | r02;
            this.f1709s.G(r02, i5);
        }
    }

    public final void n(int i5, float f2, float f10) {
        float[] fArr = this.f1696d;
        if (fArr == null || fArr.length <= i5) {
            int i6 = i5 + 1;
            float[] fArr2 = new float[i6];
            float[] fArr3 = new float[i6];
            float[] fArr4 = new float[i6];
            float[] fArr5 = new float[i6];
            int[] iArr = new int[i6];
            int[] iArr2 = new int[i6];
            int[] iArr3 = new int[i6];
            if (fArr != null) {
                System.arraycopy(fArr, 0, fArr2, 0, fArr.length);
                float[] fArr6 = this.f1697e;
                System.arraycopy(fArr6, 0, fArr3, 0, fArr6.length);
                float[] fArr7 = this.f1698f;
                System.arraycopy(fArr7, 0, fArr4, 0, fArr7.length);
                float[] fArr8 = this.f1699g;
                System.arraycopy(fArr8, 0, fArr5, 0, fArr8.length);
                int[] iArr4 = this.f1700h;
                System.arraycopy(iArr4, 0, iArr, 0, iArr4.length);
                int[] iArr5 = this.f1701i;
                System.arraycopy(iArr5, 0, iArr2, 0, iArr5.length);
                int[] iArr6 = this.j;
                System.arraycopy(iArr6, 0, iArr3, 0, iArr6.length);
            }
            this.f1696d = fArr2;
            this.f1697e = fArr3;
            this.f1698f = fArr4;
            this.f1699g = fArr5;
            this.f1700h = iArr;
            this.f1701i = iArr2;
            this.j = iArr3;
        }
        float[] fArr9 = this.f1696d;
        this.f1698f[i5] = f2;
        fArr9[i5] = f2;
        float[] fArr10 = this.f1697e;
        this.f1699g[i5] = f10;
        fArr10[i5] = f10;
        int[] iArr7 = this.f1700h;
        int i10 = (int) f2;
        int i11 = (int) f10;
        ViewGroup viewGroup = this.f1712v;
        int i12 = i10 < viewGroup.getLeft() + this.f1705o ? 1 : 0;
        if (i11 < viewGroup.getTop() + this.f1705o) {
            i12 |= 4;
        }
        if (i10 > viewGroup.getRight() - this.f1705o) {
            i12 |= 2;
        }
        if (i11 > viewGroup.getBottom() - this.f1705o) {
            i12 |= 8;
        }
        iArr7[i5] = i12;
        this.k = (1 << i5) | this.k;
    }

    public final void o(MotionEvent motionEvent) {
        int pointerCount = motionEvent.getPointerCount();
        for (int i5 = 0; i5 < pointerCount; i5++) {
            int pointerId = motionEvent.getPointerId(i5);
            if (j(pointerId)) {
                float x5 = motionEvent.getX(i5);
                float y5 = motionEvent.getY(i5);
                this.f1698f[pointerId] = x5;
                this.f1699g[pointerId] = y5;
            }
        }
    }

    public final void p(int i5) {
        this.f1712v.removeCallbacks(this.f1713w);
        if (this.a != i5) {
            this.a = i5;
            this.f1709s.K(i5);
            if (this.a == 0) {
                this.f1710t = null;
            }
        }
    }

    public final boolean q(int i5, int i6) {
        if (this.f1711u) {
            return i(i5, i6, (int) this.f1702l.getXVelocity(this.f1695c), (int) this.f1702l.getYVelocity(this.f1695c));
        }
        throw new IllegalStateException("Cannot settleCapturedViewAt outside of a call to Callback#onViewReleased");
    }

    /* JADX WARN: Code restructure failed: missing block: B:49:0x00d4, code lost:
    
        if (r13 != r12) goto L54;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final boolean r(MotionEvent motionEvent) {
        View h6;
        int actionMasked = motionEvent.getActionMasked();
        int actionIndex = motionEvent.getActionIndex();
        if (actionMasked == 0) {
            a();
        }
        if (this.f1702l == null) {
            this.f1702l = VelocityTracker.obtain();
        }
        this.f1702l.addMovement(motionEvent);
        k0 k0Var = this.f1709s;
        if (actionMasked != 0) {
            if (actionMasked != 1) {
                if (actionMasked != 2) {
                    if (actionMasked != 3) {
                        if (actionMasked == 5) {
                            int pointerId = motionEvent.getPointerId(actionIndex);
                            float x5 = motionEvent.getX(actionIndex);
                            float y5 = motionEvent.getY(actionIndex);
                            n(pointerId, x5, y5);
                            int i5 = this.a;
                            if (i5 == 0) {
                                if ((this.f1700h[pointerId] & this.f1707q) != 0) {
                                    k0Var.H();
                                }
                            } else if (i5 == 2 && (h6 = h((int) x5, (int) y5)) == this.f1710t) {
                                t(pointerId, h6);
                            }
                        } else if (actionMasked == 6) {
                            e(motionEvent.getPointerId(actionIndex));
                        }
                    }
                } else if (this.f1696d != null && this.f1697e != null) {
                    int pointerCount = motionEvent.getPointerCount();
                    for (int i6 = 0; i6 < pointerCount; i6++) {
                        int pointerId2 = motionEvent.getPointerId(i6);
                        if (j(pointerId2)) {
                            float x10 = motionEvent.getX(i6);
                            float y6 = motionEvent.getY(i6);
                            float f2 = x10 - this.f1696d[pointerId2];
                            float f10 = y6 - this.f1697e[pointerId2];
                            View h7 = h((int) x10, (int) y6);
                            boolean z5 = h7 != null && d(f2, f10, h7);
                            if (z5) {
                                int left = h7.getLeft();
                                int m5 = k0Var.m(((int) f2) + left, h7);
                                int top = h7.getTop();
                                int n6 = k0Var.n(((int) f10) + top, h7);
                                int z6 = k0Var.z(h7);
                                int A = k0Var.A();
                                if (z6 != 0) {
                                    if (z6 > 0) {
                                    }
                                }
                                if (A == 0) {
                                    break;
                                }
                                if (A > 0 && n6 == top) {
                                    break;
                                }
                            }
                            m(pointerId2, f2, f10);
                            if (this.a == 1) {
                                break;
                            }
                            if (z5 && t(pointerId2, h7)) {
                                break;
                            }
                        }
                    }
                    o(motionEvent);
                }
            }
            a();
        } else {
            float x11 = motionEvent.getX();
            float y10 = motionEvent.getY();
            int pointerId3 = motionEvent.getPointerId(0);
            n(pointerId3, x11, y10);
            View h10 = h((int) x11, (int) y10);
            if (h10 == this.f1710t && this.a == 2) {
                t(pointerId3, h10);
            }
            if ((this.f1700h[pointerId3] & this.f1707q) != 0) {
                k0Var.H();
            }
        }
        return this.a == 1;
    }

    public final boolean s(View view, int i5, int i6) {
        this.f1710t = view;
        this.f1695c = -1;
        boolean i10 = i(i5, i6, 0, 0);
        if (!i10 && this.a == 0 && this.f1710t != null) {
            this.f1710t = null;
        }
        return i10;
    }

    public final boolean t(int i5, View view) {
        if (view == this.f1710t && this.f1695c == i5) {
            return true;
        }
        if (view == null || !this.f1709s.V(i5, view)) {
            return false;
        }
        this.f1695c = i5;
        b(i5, view);
        return true;
    }
}
