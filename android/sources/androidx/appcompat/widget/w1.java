package androidx.appcompat.widget;

import android.os.SystemClock;
import android.view.MotionEvent;
import android.view.View;
import android.view.ViewConfiguration;

/* loaded from: classes.dex */
public abstract class w1 implements View.OnTouchListener, View.OnAttachStateChangeListener {
    public int E;
    public final int[] F = new int[2];

    /* renamed from: d, reason: collision with root package name */
    public final float f1147d;

    /* renamed from: e, reason: collision with root package name */
    public final int f1148e;

    /* renamed from: i, reason: collision with root package name */
    public final int f1149i;

    /* renamed from: v, reason: collision with root package name */
    public final View f1150v;

    /* renamed from: w, reason: collision with root package name */
    public v1 f1151w;

    /* renamed from: x, reason: collision with root package name */
    public v1 f1152x;

    /* renamed from: y, reason: collision with root package name */
    public boolean f1153y;

    public w1(View view) {
        this.f1150v = view;
        view.setLongClickable(true);
        view.addOnAttachStateChangeListener(this);
        this.f1147d = ViewConfiguration.get(view.getContext()).getScaledTouchSlop();
        int tapTimeout = ViewConfiguration.getTapTimeout();
        this.f1148e = tapTimeout;
        this.f1149i = (ViewConfiguration.getLongPressTimeout() + tapTimeout) / 2;
    }

    public final void a() {
        v1 v1Var = this.f1152x;
        View view = this.f1150v;
        if (v1Var != null) {
            view.removeCallbacks(v1Var);
        }
        v1 v1Var2 = this.f1151w;
        if (v1Var2 != null) {
            view.removeCallbacks(v1Var2);
        }
    }

    public abstract n.z b();

    public abstract boolean c();

    public boolean d() {
        n.z b10 = b();
        if (b10 == null || !b10.isShowing()) {
            return true;
        }
        b10.dismiss();
        return true;
    }

    /* JADX WARN: Code restructure failed: missing block: B:16:0x0059, code lost:
    
        if (r14 != false) goto L24;
     */
    /* JADX WARN: Code restructure failed: missing block: B:35:0x007b, code lost:
    
        if (r4 != 3) goto L58;
     */
    /* JADX WARN: Removed duplicated region for block: B:50:0x0100  */
    @Override // android.view.View.OnTouchListener
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final boolean onTouch(View view, MotionEvent motionEvent) {
        boolean z5;
        t1 h6;
        boolean z6 = this.f1153y;
        View view2 = this.f1150v;
        if (z6) {
            n.z b10 = b();
            if (b10 != null && b10.isShowing() && (h6 = b10.h()) != null && h6.isShown()) {
                MotionEvent obtainNoHistory = MotionEvent.obtainNoHistory(motionEvent);
                int[] iArr = this.F;
                view2.getLocationOnScreen(iArr);
                obtainNoHistory.offsetLocation(iArr[0], iArr[1]);
                h6.getLocationOnScreen(iArr);
                obtainNoHistory.offsetLocation(-iArr[0], -iArr[1]);
                boolean b11 = h6.b(obtainNoHistory, this.E);
                obtainNoHistory.recycle();
                int actionMasked = motionEvent.getActionMasked();
                boolean z7 = (actionMasked == 1 || actionMasked == 3) ? false : true;
                if (b11) {
                }
            }
            if (d()) {
                z5 = false;
            }
            z5 = true;
        } else {
            if (view2.isEnabled()) {
                int actionMasked2 = motionEvent.getActionMasked();
                if (actionMasked2 != 0) {
                    if (actionMasked2 != 1) {
                        if (actionMasked2 == 2) {
                            int findPointerIndex = motionEvent.findPointerIndex(this.E);
                            if (findPointerIndex >= 0) {
                                float x5 = motionEvent.getX(findPointerIndex);
                                float y5 = motionEvent.getY(findPointerIndex);
                                float f2 = this.f1147d;
                                float f10 = -f2;
                                if (x5 < f10 || y5 < f10 || x5 >= (view2.getRight() - view2.getLeft()) + f2 || y5 >= (view2.getBottom() - view2.getTop()) + f2) {
                                    a();
                                    view2.getParent().requestDisallowInterceptTouchEvent(true);
                                    if (c()) {
                                        z5 = true;
                                        if (z5) {
                                            long uptimeMillis = SystemClock.uptimeMillis();
                                            MotionEvent obtain = MotionEvent.obtain(uptimeMillis, uptimeMillis, 3, 0.0f, 0.0f, 0);
                                            view2.onTouchEvent(obtain);
                                            obtain.recycle();
                                        }
                                    }
                                }
                            }
                        }
                    }
                    a();
                } else {
                    this.E = motionEvent.getPointerId(0);
                    if (this.f1151w == null) {
                        this.f1151w = new v1(this, 0);
                    }
                    view2.postDelayed(this.f1151w, this.f1148e);
                    if (this.f1152x == null) {
                        this.f1152x = new v1(this, 1);
                    }
                    view2.postDelayed(this.f1152x, this.f1149i);
                }
            }
            z5 = false;
            if (z5) {
            }
        }
        this.f1153y = z5;
        return z5 || z6;
    }

    @Override // android.view.View.OnAttachStateChangeListener
    public final void onViewAttachedToWindow(View view) {
    }

    @Override // android.view.View.OnAttachStateChangeListener
    public final void onViewDetachedFromWindow(View view) {
        this.f1153y = false;
        this.E = -1;
        v1 v1Var = this.f1151w;
        if (v1Var != null) {
            this.f1150v.removeCallbacks(v1Var);
        }
    }
}
