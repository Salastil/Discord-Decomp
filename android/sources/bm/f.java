package bm;

import af.s;
import android.app.Activity;
import android.content.Context;
import android.content.ContextWrapper;
import android.content.res.Resources;
import android.graphics.Rect;
import android.os.Build;
import android.os.CancellationSignal;
import android.view.MotionEvent;
import android.view.VelocityTracker;
import android.view.ViewConfiguration;
import android.view.Window;
import android.view.WindowManager;
import android.view.WindowMetrics;
import androidx.core.view.WindowInsetsCompat;
import androidx.core.view.WindowInsetsControllerCompat;
import androidx.core.view.k0;
import androidx.core.view.n1;
import androidx.core.view.o0;
import androidx.core.view.s0;
import androidx.dynamicanimation.animation.SpringAnimation;
import com.facebook.react.uimanager.ThemedReactContext;
import com.facebook.react.views.view.ReactViewGroup;
import fo.u;
import java.util.WeakHashMap;
import kotlin.jvm.internal.Intrinsics;
import org.jetbrains.annotations.NotNull;

/* loaded from: classes3.dex */
public final class f extends ReactViewGroup {
    public vl.a E;
    public boolean F;
    public boolean G;
    public final Rect H;
    public final s I;
    public VelocityTracker J;

    /* renamed from: d, reason: collision with root package name */
    public final ThemedReactContext f3051d;

    /* renamed from: e, reason: collision with root package name */
    public boolean f3052e;

    /* renamed from: i, reason: collision with root package name */
    public float f3053i;

    /* renamed from: v, reason: collision with root package name */
    public float f3054v;

    /* renamed from: w, reason: collision with root package name */
    public int f3055w;

    /* renamed from: x, reason: collision with root package name */
    public int f3056x;

    /* renamed from: y, reason: collision with root package name */
    public int f3057y;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public f(ThemedReactContext reactContext) {
        super(reactContext);
        Intrinsics.checkNotNullParameter(reactContext, "reactContext");
        this.f3051d = reactContext;
        this.E = new vl.a(1);
        this.G = true;
        this.H = new Rect();
        this.I = new s();
    }

    private final int getWindowHeight() {
        Rect bounds;
        WindowManager windowManager;
        if (Build.VERSION.SDK_INT >= 30) {
            Activity currentActivity = this.f3051d.getCurrentActivity();
            WindowMetrics currentWindowMetrics = (currentActivity == null || (windowManager = currentActivity.getWindowManager()) == null) ? null : windowManager.getCurrentWindowMetrics();
            if (currentWindowMetrics != null && (bounds = currentWindowMetrics.getBounds()) != null) {
                return bounds.height();
            }
        }
        return 0;
    }

    public final void c() {
        this.f3052e = false;
        this.f3053i = 0.0f;
        this.f3054v = 0.0f;
        this.f3055w = 0;
        this.f3056x = 0;
        this.H.setEmpty();
        VelocityTracker velocityTracker = this.J;
        if (velocityTracker != null) {
            velocityTracker.recycle();
        }
        this.J = null;
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r1v54, types: [int] */
    /* JADX WARN: Type inference failed for: r1v55, types: [int] */
    /* JADX WARN: Type inference failed for: r1v56 */
    /* JADX WARN: Type inference failed for: r1v66 */
    @Override // android.view.ViewGroup, android.view.View
    public final boolean dispatchTouchEvent(MotionEvent motionEvent) {
        if (this.J == null) {
            this.J = VelocityTracker.obtain();
        }
        WindowInsetsControllerCompat windowInsetsControllerCompat = null;
        Integer valueOf = motionEvent != null ? Integer.valueOf(motionEvent.getAction()) : null;
        Rect rect = this.H;
        if (valueOf != null && valueOf.intValue() == 0) {
            VelocityTracker velocityTracker = this.J;
            if (velocityTracker != null) {
                velocityTracker.addMovement(motionEvent);
            }
            this.f3053i = motionEvent.getX();
            this.f3054v = motionEvent.getY();
            tl.c.a(this, rect);
            this.f3055w = rect.top;
        } else {
            s sVar = this.I;
            if (valueOf != null && valueOf.intValue() == 2) {
                tl.c.a(this, rect);
                int i5 = rect.top - this.f3055w;
                MotionEvent obtain = MotionEvent.obtain(motionEvent);
                obtain.offsetLocation(0.0f, i5);
                VelocityTracker velocityTracker2 = this.J;
                if (velocityTracker2 != null) {
                    velocityTracker2.addMovement(obtain);
                }
                float x5 = obtain.getX() - this.f3053i;
                float y5 = obtain.getY() - this.f3054v;
                if (!this.f3052e) {
                    this.f3052e = Math.abs(y5) > Math.abs(x5) && Math.abs(y5) >= ((float) ViewConfiguration.get(getContext()).getScaledTouchSlop());
                }
                if (this.f3052e) {
                    if (((gj.c) sVar.f594b) != null) {
                        if (this.f3056x == 0) {
                            this.f3056x = sVar.s();
                        }
                        vl.a aVar = this.E;
                        ?? b10 = uo.c.b(y5);
                        int windowHeight = getWindowHeight() - ((int) motionEvent.getRawY());
                        int s2 = sVar.s();
                        int i6 = this.f3057y;
                        ?? r12 = b10;
                        switch (aVar.a) {
                            case 0:
                                r12 = (windowHeight <= s2 + i6 || b10 <= 0) ? b10 : false;
                                break;
                        }
                        if (r12 != 0) {
                            gj.c cVar = (gj.c) sVar.f594b;
                            if (cVar == null) {
                                throw new IllegalStateException("Current WindowInsetsAnimationController is null.This should only be called if isAnimationInProgress() returns true");
                            }
                            android.support.v4.media.session.b.a = true;
                            sVar.u(((n1) cVar.f9329e).n0().f1514d - r12);
                        }
                    } else if (((CancellationSignal) sVar.f595c) == null) {
                        WeakHashMap weakHashMap = s0.a;
                        WindowInsetsCompat a = k0.a(this);
                        boolean z5 = a != null && a.a.p(8);
                        if (y5 >= 0.0f ? !(y5 <= 0.0f || !z5 || !this.G) : !(z5 || !this.F)) {
                            sVar.getClass();
                            Intrinsics.checkNotNullParameter(this, "view");
                            if (((gj.c) sVar.f594b) != null) {
                                throw new IllegalStateException("Animation in progress. Can not start a new request to controlWindowInsetsAnimation()");
                            }
                            WeakHashMap weakHashMap2 = s0.a;
                            WindowInsetsCompat a10 = k0.a(this);
                            if (a10 != null && a10.a.p(8)) {
                                r4 = true;
                            }
                            sVar.a = r4;
                            sVar.f595c = new CancellationSignal();
                            sVar.f596d = null;
                            android.support.v4.media.session.b.a = true;
                            if (Build.VERSION.SDK_INT >= 30) {
                                windowInsetsControllerCompat = o0.c(this);
                            } else {
                                Context context = getContext();
                                while (true) {
                                    if (!(context instanceof ContextWrapper)) {
                                        break;
                                    }
                                    if (context instanceof Activity) {
                                        Window window = ((Activity) context).getWindow();
                                        if (window != null) {
                                            windowInsetsControllerCompat = new WindowInsetsControllerCompat(window, this);
                                        }
                                    } else {
                                        context = ((ContextWrapper) context).getBaseContext();
                                    }
                                }
                            }
                            if (windowInsetsControllerCompat != null) {
                                windowInsetsControllerCompat.a.e(ul.b.a, (CancellationSignal) sVar.f595c, (ul.a) ((u) sVar.f597e).getValue());
                            }
                        }
                    }
                    this.f3054v = motionEvent.getY();
                    this.f3053i = motionEvent.getX();
                    this.f3055w = rect.top;
                }
            } else if (valueOf != null && valueOf.intValue() == 1) {
                VelocityTracker velocityTracker3 = this.J;
                if (velocityTracker3 != null) {
                    velocityTracker3.addMovement(motionEvent);
                }
                VelocityTracker velocityTracker4 = this.J;
                if (velocityTracker4 != null) {
                    velocityTracker4.computeCurrentVelocity(500);
                }
                VelocityTracker velocityTracker5 = this.J;
                Float valueOf2 = velocityTracker5 != null ? Float.valueOf(velocityTracker5.getYVelocity()) : null;
                if (((gj.c) sVar.f594b) != null && this.f3056x == sVar.s()) {
                    valueOf2 = null;
                }
                gj.c cVar2 = (gj.c) sVar.f594b;
                if (cVar2 == null) {
                    CancellationSignal cancellationSignal = (CancellationSignal) sVar.f595c;
                    if (cancellationSignal != null) {
                        cancellationSignal.cancel();
                    }
                } else {
                    n1 n1Var = (n1) cVar2.f9329e;
                    android.support.v4.media.session.b.a = false;
                    int i10 = n1Var.n0().f1514d;
                    int i11 = n1Var.p0().f1514d;
                    int i12 = n1Var.o0().f1514d;
                    if (valueOf2 != null) {
                        sVar.l(valueOf2, valueOf2.floatValue() < 0.0f);
                    } else if (i10 == i11) {
                        cVar2.E(true);
                    } else if (i10 == i12) {
                        cVar2.E(false);
                    } else if (n1Var.m0() >= 0.15f) {
                        sVar.l(null, !sVar.a);
                    } else {
                        sVar.l(null, sVar.a);
                    }
                }
                c();
            } else if (valueOf != null && valueOf.intValue() == 3) {
                gj.c cVar3 = (gj.c) sVar.f594b;
                if (cVar3 != null) {
                    cVar3.E(sVar.a);
                }
                CancellationSignal cancellationSignal2 = (CancellationSignal) sVar.f595c;
                if (cancellationSignal2 != null) {
                    cancellationSignal2.cancel();
                }
                SpringAnimation springAnimation = (SpringAnimation) sVar.f598f;
                if (springAnimation != null) {
                    springAnimation.b();
                }
                sVar.x();
                c();
            }
        }
        return super.dispatchTouchEvent(motionEvent);
    }

    /* JADX WARN: Type inference failed for: r0v1, types: [java.lang.Object, java.util.Map] */
    public final void setInterpolator(@NotNull String interpolator) {
        Intrinsics.checkNotNullParameter(interpolator, "interpolator");
        vl.a aVar = (vl.a) g.a.get(interpolator);
        if (aVar == null) {
            aVar = new vl.a(1);
        }
        this.E = aVar;
    }

    public final void setOffset(double d6) {
        this.f3057y = (int) (((float) d6) * Resources.getSystem().getDisplayMetrics().density);
    }

    public final void setScrollKeyboardOffScreenWhenVisible(boolean z5) {
        this.G = z5;
    }

    public final void setScrollKeyboardOnScreenWhenNotVisible(boolean z5) {
        this.F = z5;
    }
}
