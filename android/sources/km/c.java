package km;

import android.animation.AnimatorSet;
import android.animation.ObjectAnimator;
import android.animation.ValueAnimator;
import android.content.Context;
import android.content.res.ColorStateList;
import android.content.res.Resources;
import android.graphics.Canvas;
import android.graphics.drawable.Drawable;
import android.graphics.drawable.PaintDrawable;
import android.graphics.drawable.RippleDrawable;
import android.graphics.drawable.ShapeDrawable;
import android.graphics.drawable.shapes.RectShape;
import android.os.Build;
import android.os.Handler;
import android.os.SystemClock;
import android.provider.Settings;
import android.util.TypedValue;
import android.view.Choreographer;
import android.view.Display;
import android.view.KeyEvent;
import android.view.MotionEvent;
import android.view.View;
import android.view.ViewGroup;
import android.view.ViewParent;
import android.view.accessibility.AccessibilityManager;
import android.view.accessibility.AccessibilityNodeInfo;
import androidx.core.view.v0;
import androidx.core.view.w0;
import com.facebook.react.R;
import com.facebook.react.uimanager.BackgroundStyleApplicator;
import com.facebook.react.uimanager.PixelUtil;
import com.facebook.react.uimanager.PointerEvents;
import com.facebook.react.uimanager.ReactPointerEventsView;
import com.facebook.react.uimanager.ViewProps;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import jm.q;
import kotlin.jvm.internal.Intrinsics;
import org.jetbrains.annotations.NotNull;

/* loaded from: classes3.dex */
public final class c extends ViewGroup implements jm.o, ReactPointerEventsView {

    /* renamed from: n0, reason: collision with root package name */
    public static c f13408n0;

    /* renamed from: o0, reason: collision with root package name */
    public static c f13409o0;
    public int E;
    public int F;
    public float G;
    public float H;
    public float I;
    public float J;
    public int K;
    public int L;
    public float M;
    public float N;
    public float O;
    public Integer P;
    public float Q;
    public float R;
    public boolean S;
    public PointerEvents T;
    public boolean U;
    public long V;
    public int W;
    public boolean a0;

    /* renamed from: b0, reason: collision with root package name */
    public AnimatorSet f13412b0;

    /* renamed from: c0, reason: collision with root package name */
    public PaintDrawable f13413c0;

    /* renamed from: d, reason: collision with root package name */
    public Integer f13414d;

    /* renamed from: d0, reason: collision with root package name */
    public long f13415d0;

    /* renamed from: e, reason: collision with root package name */
    public Integer f13416e;

    /* renamed from: e0, reason: collision with root package name */
    public com.discord.media.engine.video.egl_renderer.b f13417e0;

    /* renamed from: f0, reason: collision with root package name */
    public com.facebook.react.modules.core.b f13418f0;

    /* renamed from: g0, reason: collision with root package name */
    public boolean f13419g0;
    public boolean h0;

    /* renamed from: i, reason: collision with root package name */
    public boolean f13420i;

    /* renamed from: i0, reason: collision with root package name */
    public boolean f13421i0;

    /* renamed from: j0, reason: collision with root package name */
    public RippleDrawable f13422j0;

    /* renamed from: k0, reason: collision with root package name */
    public boolean f13423k0;

    /* renamed from: l0, reason: collision with root package name */
    public boolean f13424l0;

    /* renamed from: v, reason: collision with root package name */
    public boolean f13425v;

    /* renamed from: w, reason: collision with root package name */
    public boolean f13426w;

    /* renamed from: x, reason: collision with root package name */
    public int f13427x;

    /* renamed from: y, reason: collision with root package name */
    public int f13428y;

    /* renamed from: m0, reason: collision with root package name */
    public static final TypedValue f13407m0 = new TypedValue();

    /* renamed from: p0, reason: collision with root package name */
    public static final com.discord.chat.presentation.message.system.b f13410p0 = new com.discord.chat.presentation.message.system.b(5);

    /* renamed from: q0, reason: collision with root package name */
    public static final b f13411q0 = new b();

    private final float getAnimatorDurationScale() {
        if (Build.VERSION.SDK_INT >= 33) {
            return ValueAnimator.getDurationScale();
        }
        try {
            return Settings.Global.getFloat(getContext().getContentResolver(), "animator_duration_scale");
        } catch (Settings.SettingNotFoundException unused) {
            return 1.0f;
        }
    }

    private final boolean getHasOpacityAnimation() {
        return (this.G == 1.0f && this.H == 1.0f && getHoverOpacity() == 1.0f) ? false : true;
    }

    private final boolean getHasScaleAnimation() {
        return (this.I == 1.0f && this.J == 1.0f && getHoverScale() == 1.0f) ? false : true;
    }

    private final boolean getHasUnderlayAnimation() {
        if (this.f13413c0 != null) {
            return (this.Q == this.R && getHoverUnderlayOpacity() == this.R) ? false : true;
        }
        return false;
    }

    private final float getRestingOpacity() {
        return getShouldAnimateHover() ? getHoverOpacity() : this.H;
    }

    private final float getRestingScale() {
        return getShouldAnimateHover() ? getHoverScale() : this.J;
    }

    private final float getRestingUnderlayOpacity() {
        return getShouldAnimateHover() ? getHoverUnderlayOpacity() : this.R;
    }

    private final boolean getShouldAnimateHover() {
        return this.h0 && isEnabled();
    }

    public static void j(c cVar, long j) {
        cVar.f13417e0 = null;
        cVar.m(cVar.getRestingOpacity(), cVar.getRestingScale(), cVar.getRestingUnderlayOpacity(), j);
    }

    public static boolean p(v0 v0Var) {
        Iterator it = v0Var.iterator();
        while (true) {
            w0 w0Var = (w0) it;
            if (!w0Var.hasNext()) {
                return false;
            }
            View view = (View) w0Var.next();
            if (view instanceof c) {
                c cVar = (c) view;
                if (cVar.f13424l0 || cVar.isPressed()) {
                    return true;
                }
            }
            if ((view instanceof ViewGroup) && p(new v0((ViewGroup) view))) {
                return true;
            }
        }
    }

    @Override // jm.o
    public final boolean a() {
        return false;
    }

    @Override // jm.o
    public final Boolean b(jm.f handler) {
        Intrinsics.checkNotNullParameter(handler, "handler");
        return null;
    }

    /* JADX WARN: Code restructure failed: missing block: B:15:0x0034, code lost:
    
        if (r4 == r3) goto L15;
     */
    /* JADX WARN: Code restructure failed: missing block: B:18:0x003d, code lost:
    
        if ((r4 != null ? r4.f13426w : false) == false) goto L15;
     */
    @Override // jm.o
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final boolean c(MotionEvent event) {
        Intrinsics.checkNotNullParameter(event, "event");
        boolean z5 = false;
        if (event.getAction() != 3 && event.getAction() != 1 && event.getActionMasked() != 6) {
            if (!p(new v0(this))) {
                c cVar = f13408n0;
                if (cVar == null) {
                    f13408n0 = this;
                } else if (this.f13426w) {
                }
                z5 = true;
            }
            if (z5) {
                this.f13424l0 = true;
            }
        }
        return z5;
    }

    @Override // jm.o
    public final boolean d() {
        return false;
    }

    @Override // android.view.ViewGroup, android.view.View
    public final void dispatchDraw(Canvas canvas) {
        Intrinsics.checkNotNullParameter(canvas, "canvas");
        PaintDrawable paintDrawable = this.f13413c0;
        if (paintDrawable != null) {
            canvas.save();
            BackgroundStyleApplicator.clipToPaddingBox(this, canvas);
            paintDrawable.setBounds(0, 0, getWidth(), getHeight());
            paintDrawable.draw(canvas);
            canvas.restore();
        }
        RippleDrawable rippleDrawable = this.f13422j0;
        if (rippleDrawable != null) {
            if (!this.f13425v) {
                canvas.save();
                BackgroundStyleApplicator.clipToPaddingBox(this, canvas);
            }
            rippleDrawable.setBounds(0, 0, getWidth(), getHeight());
            rippleDrawable.draw(canvas);
            if (!this.f13425v) {
                canvas.restore();
            }
        }
        if (!this.f13423k0) {
            super.dispatchDraw(canvas);
            return;
        }
        canvas.save();
        BackgroundStyleApplicator.clipToPaddingBox(this, canvas);
        super.dispatchDraw(canvas);
        canvas.restore();
    }

    @Override // android.view.View
    public final void drawableHotspotChanged(float f2, float f10) {
        c cVar = f13408n0;
        if (cVar == null || cVar == this) {
            super.drawableHotspotChanged(f2, f10);
            RippleDrawable rippleDrawable = this.f13422j0;
            if (rippleDrawable != null) {
                rippleDrawable.setHotspot(f2, f10);
            }
        }
    }

    @Override // android.view.ViewGroup, android.view.View
    public final void drawableStateChanged() {
        super.drawableStateChanged();
        RippleDrawable rippleDrawable = this.f13422j0;
        if (rippleDrawable == null || !rippleDrawable.isStateful()) {
            return;
        }
        rippleDrawable.setState(getDrawableState());
    }

    @Override // jm.o
    public final boolean e(View view) {
        return io.sentry.config.a.h(view);
    }

    @Override // jm.o
    public final void f(MotionEvent event) {
        Intrinsics.checkNotNullParameter(event, "event");
    }

    @Override // jm.o
    public final Boolean g(View view, MotionEvent motionEvent) {
        return io.sentry.config.a.I(view, motionEvent);
    }

    public final float getActiveOpacity() {
        return this.G;
    }

    public final float getActiveScale() {
        return this.I;
    }

    public final float getActiveUnderlayOpacity() {
        return this.Q;
    }

    public final float getDefaultOpacity() {
        return this.H;
    }

    public final float getDefaultScale() {
        return this.J;
    }

    public final float getDefaultUnderlayOpacity() {
        return this.R;
    }

    public final boolean getExclusive() {
        return this.f13426w;
    }

    public final int getHoverAnimationInDuration() {
        return this.K;
    }

    public final int getHoverAnimationOutDuration() {
        return this.L;
    }

    public final float getHoverOpacity() {
        float f2 = this.M;
        return f2 < 0.0f ? this.H : f2;
    }

    public final float getHoverScale() {
        float f2 = this.N;
        return f2 < 0.0f ? this.J : f2;
    }

    public final float getHoverUnderlayOpacity() {
        float f2 = this.O;
        return f2 < 0.0f ? this.R : f2;
    }

    public final int getLongPressAnimationOutDuration() {
        int i5 = this.F;
        return i5 < 0 ? this.f13428y : i5;
    }

    public final int getLongPressDuration() {
        return this.E;
    }

    public final boolean getNeedsOffscreenAlphaCompositing() {
        return this.S;
    }

    @Override // com.facebook.react.uimanager.ReactPointerEventsView
    @NotNull
    public PointerEvents getPointerEvents() {
        return this.T;
    }

    public final Integer getRippleColor() {
        return this.f13414d;
    }

    public final Integer getRippleRadius() {
        return this.f13416e;
    }

    public final int getTapAnimationInDuration() {
        return this.f13427x;
    }

    public final int getTapAnimationOutDuration() {
        return this.f13428y;
    }

    public final Integer getUnderlayColor() {
        return this.P;
    }

    public final boolean getUseBorderlessDrawable() {
        return this.f13425v;
    }

    public final boolean getUseDrawableOnForeground() {
        return this.f13420i;
    }

    @Override // jm.o
    public final void h(MotionEvent event) {
        Intrinsics.checkNotNullParameter(event, "event");
        if (f13408n0 == this) {
            f13408n0 = null;
            f13409o0 = this;
        }
        this.f13424l0 = false;
    }

    @Override // android.view.View
    public final boolean hasOverlappingRendering() {
        return this.S;
    }

    @Override // jm.o
    public final boolean i(List recorded, q handler) {
        Intrinsics.checkNotNullParameter(recorded, "recorded");
        Intrinsics.checkNotNullParameter(handler, "handler");
        if (recorded != null && recorded.isEmpty()) {
            return true;
        }
        Iterator it = recorded.iterator();
        while (it.hasNext()) {
            jm.f fVar = (jm.f) it.next();
            if (!fVar.I(handler) && !handler.I(fVar) && !Intrinsics.areEqual(fVar.f12876f, this) && !(fVar instanceof jm.h)) {
                return false;
            }
        }
        return true;
    }

    public final void k() {
        if (isPressed()) {
            return;
        }
        if (getShouldAnimateHover()) {
            m(getHoverOpacity(), getHoverScale(), getHoverUnderlayOpacity(), this.K);
        } else {
            m(this.H, this.J, this.R, this.L);
        }
    }

    public final void l() {
        Handler handler;
        com.discord.media.engine.video.egl_renderer.b bVar = this.f13417e0;
        if (bVar != null && (handler = getHandler()) != null) {
            handler.removeCallbacks(bVar);
        }
        long j = this.f13427x;
        long j5 = this.f13428y;
        long j7 = this.E;
        long longPressAnimationOutDuration = getLongPressAnimationOutDuration();
        long uptimeMillis = SystemClock.uptimeMillis() - this.f13415d0;
        if (j7 >= 0 && uptimeMillis >= j7) {
            m(getRestingOpacity(), getRestingScale(), getRestingUnderlayOpacity(), longPressAnimationOutDuration);
            return;
        }
        if (uptimeMillis >= j) {
            m(getRestingOpacity(), getRestingScale(), getRestingUnderlayOpacity(), j5);
            return;
        }
        if (2 * uptimeMillis >= j5) {
            m(getRestingOpacity(), getRestingScale(), getRestingUnderlayOpacity(), uptimeMillis);
            return;
        }
        long j10 = j - uptimeMillis;
        m(this.G, this.I, this.Q, j10);
        com.discord.media.engine.video.egl_renderer.b bVar2 = new com.discord.media.engine.video.egl_renderer.b(this, j5, 3);
        this.f13417e0 = bVar2;
        Handler handler2 = getHandler();
        if (handler2 != null) {
            handler2.postDelayed(bVar2, (long) (j10 * getAnimatorDurationScale()));
        }
    }

    public final void m(float f2, float f10, float f11, long j) {
        float f12;
        if (getHasOpacityAnimation() || getHasScaleAnimation() || getHasUnderlayAnimation()) {
            AnimatorSet animatorSet = this.f13412b0;
            if (animatorSet != null) {
                animatorSet.cancel();
            }
            this.f13412b0 = null;
            float animatorDurationScale = (long) (j * getAnimatorDurationScale());
            Display display = getDisplay();
            if (display != null) {
                Intrinsics.checkNotNullParameter(display, "<this>");
                Display.Mode[] supportedModes = display.getSupportedModes();
                Intrinsics.checkNotNull(supportedModes);
                float f13 = 0.0f;
                for (Display.Mode mode : supportedModes) {
                    if (mode.getRefreshRate() > f13) {
                        f13 = mode.getRefreshRate();
                    }
                }
                if (f13 <= 0.0f) {
                    f13 = display.getRefreshRate() > 0.0f ? display.getRefreshRate() : 60.0f;
                }
                f12 = 1000.0f / f13;
            } else {
                f12 = 16.0f;
            }
            if (animatorDurationScale < f12) {
                if (getHasOpacityAnimation()) {
                    setAlpha(f2);
                }
                if (getHasScaleAnimation()) {
                    setScaleX(f10);
                    setScaleY(f10);
                }
                if (getHasUnderlayAnimation()) {
                    PaintDrawable paintDrawable = this.f13413c0;
                    Intrinsics.checkNotNull(paintDrawable);
                    paintDrawable.setAlpha((int) (f11 * 255));
                    return;
                }
                return;
            }
            ArrayList arrayList = new ArrayList();
            if (getHasOpacityAnimation()) {
                arrayList.add(ObjectAnimator.ofFloat(this, "alpha", f2));
            }
            if (getHasScaleAnimation()) {
                arrayList.add(ObjectAnimator.ofFloat(this, ViewProps.SCALE_X, f10));
                arrayList.add(ObjectAnimator.ofFloat(this, ViewProps.SCALE_Y, f10));
            }
            if (getHasUnderlayAnimation()) {
                PaintDrawable paintDrawable2 = this.f13413c0;
                Intrinsics.checkNotNull(paintDrawable2);
                arrayList.add(ObjectAnimator.ofInt(paintDrawable2, "alpha", (int) (f11 * 255)));
            }
            AnimatorSet animatorSet2 = new AnimatorSet();
            animatorSet2.playTogether(arrayList);
            animatorSet2.setDuration(j);
            animatorSet2.setInterpolator(new q2.a(1));
            animatorSet2.start();
            this.f13412b0 = animatorSet2;
        }
    }

    public final void n() {
        if (getHasOpacityAnimation()) {
            setAlpha(this.H);
        }
        if (getHasScaleAnimation()) {
            setScaleX(this.J);
            setScaleY(this.J);
        }
        PaintDrawable paintDrawable = this.f13413c0;
        if (paintDrawable != null) {
            paintDrawable.setAlpha((int) (this.R * 255));
        }
    }

    public final void o() {
        com.facebook.react.modules.core.b bVar = this.f13418f0;
        if (bVar != null) {
            Choreographer.getInstance().removeFrameCallback(bVar);
        }
        this.f13418f0 = null;
    }

    @Override // android.view.ViewGroup, android.view.View
    public final void onDetachedFromWindow() {
        Handler handler;
        com.discord.media.engine.video.egl_renderer.b bVar = this.f13417e0;
        if (bVar != null && (handler = getHandler()) != null) {
            handler.removeCallbacks(bVar);
        }
        this.f13417e0 = null;
        o();
        AnimatorSet animatorSet = this.f13412b0;
        if (animatorSet != null) {
            animatorSet.cancel();
        }
        this.f13412b0 = null;
        this.h0 = false;
        n();
        if (f13408n0 == this) {
            f13408n0 = null;
        }
        if (f13409o0 == this) {
            f13409o0 = null;
        }
        super.onDetachedFromWindow();
    }

    @Override // android.view.View
    public final boolean onHoverEvent(MotionEvent event) {
        Intrinsics.checkNotNullParameter(event, "event");
        int actionMasked = event.getActionMasked();
        if (actionMasked == 9) {
            o();
            if (!this.h0) {
                this.h0 = true;
                k();
            }
        } else if (actionMasked == 10) {
            if (isPressed()) {
                this.h0 = false;
            } else {
                o();
                com.facebook.react.modules.core.b bVar = new com.facebook.react.modules.core.b(3, this);
                this.f13418f0 = bVar;
                Choreographer.getInstance().postFrameCallback(bVar);
            }
        }
        return super.onHoverEvent(event);
    }

    @Override // android.view.View
    public final void onInitializeAccessibilityNodeInfo(AccessibilityNodeInfo info) {
        Intrinsics.checkNotNullParameter(info, "info");
        super.onInitializeAccessibilityNodeInfo(info);
        Object tag = getTag(R.id.react_test_id);
        if (tag instanceof String) {
            info.setViewIdResourceName((String) tag);
        }
    }

    @Override // android.view.ViewGroup
    public final boolean onInterceptTouchEvent(MotionEvent event) {
        Intrinsics.checkNotNullParameter(event, "event");
        if (super.onInterceptTouchEvent(event)) {
            return true;
        }
        onTouchEvent(event);
        return isPressed();
    }

    @Override // android.view.View, android.view.KeyEvent.Callback
    public final boolean onKeyUp(int i5, KeyEvent keyEvent) {
        this.a0 = true;
        return super.onKeyUp(i5, keyEvent);
    }

    @Override // android.view.View
    public final void onSizeChanged(int i5, int i6, int i10, int i11) {
        super.onSizeChanged(i5, i6, i10, i11);
        this.U = true;
        r();
    }

    /* JADX WARN: Code restructure failed: missing block: B:33:0x006c, code lost:
    
        if (r0 != 6) goto L42;
     */
    /* JADX WARN: Code restructure failed: missing block: B:39:0x008d, code lost:
    
        if (km.c.f13408n0 == r9) goto L48;
     */
    /* JADX WARN: Code restructure failed: missing block: B:40:0x008f, code lost:
    
        r7 = true;
     */
    /* JADX WARN: Code restructure failed: missing block: B:48:0x00ae, code lost:
    
        if (r7 != 6) goto L76;
     */
    /* JADX WARN: Code restructure failed: missing block: B:60:0x0091, code lost:
    
        r7 = false;
     */
    /* JADX WARN: Code restructure failed: missing block: B:64:0x009b, code lost:
    
        if ((r7 != null ? r7.f13426w : false) == false) goto L48;
     */
    /* JADX WARN: Removed duplicated region for block: B:36:0x0087  */
    @Override // android.view.View
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final boolean onTouchEvent(MotionEvent event) {
        boolean onTouchEvent;
        boolean z5;
        Intrinsics.checkNotNullParameter(event, "event");
        long eventTime = event.getEventTime();
        int action = event.getAction();
        if (event.getActionMasked() == 0 || event.getActionMasked() == 5) {
            o();
        }
        c cVar = f13408n0;
        if (cVar != null && cVar != this) {
            Intrinsics.checkNotNull(cVar);
            if (cVar.f13426w) {
                if (isPressed()) {
                    setPressed(false);
                }
                this.V = eventTime;
                this.W = action;
                return false;
            }
        }
        if (event.getAction() == 3 && f13408n0 == this) {
            f13408n0 = null;
            f13409o0 = this;
        }
        if (this.V == eventTime && this.W == action && action != 3) {
            return false;
        }
        this.V = eventTime;
        this.W = action;
        int actionMasked = event.getActionMasked();
        if (actionMasked != 0) {
            if (actionMasked != 1 && actionMasked != 2) {
                if (actionMasked == 3) {
                    this.h0 = false;
                } else if (actionMasked != 5) {
                }
                onTouchEvent = super.onTouchEvent(event);
                if (onTouchEvent) {
                    if (!this.f13426w) {
                        c cVar2 = f13408n0;
                    }
                    if (z5) {
                        int actionMasked2 = event.getActionMasked();
                        if (actionMasked2 != 0) {
                            if (actionMasked2 != 1) {
                                if (actionMasked2 == 2) {
                                    boolean q5 = q(event);
                                    if (q5 != this.f13419g0) {
                                        this.f13419g0 = q5;
                                        if (q5) {
                                            setPressed(true);
                                            return onTouchEvent;
                                        }
                                        l();
                                        return onTouchEvent;
                                    }
                                } else if (actionMasked2 != 3) {
                                    if (actionMasked2 != 5) {
                                    }
                                }
                            }
                            this.f13419g0 = false;
                            return onTouchEvent;
                        }
                        this.f13419g0 = true;
                    }
                }
                return onTouchEvent;
            }
            if (this.f13421i0) {
                this.h0 = q(event);
            }
            onTouchEvent = super.onTouchEvent(event);
            if (onTouchEvent) {
            }
            return onTouchEvent;
        }
        this.f13421i0 = this.h0;
        onTouchEvent = super.onTouchEvent(event);
        if (onTouchEvent) {
        }
        return onTouchEvent;
    }

    @Override // android.view.View
    public final boolean performClick() {
        if (!p(new v0(this))) {
            Context context = getContext();
            Intrinsics.checkNotNullExpressionValue(context, "getContext(...)");
            Intrinsics.checkNotNullParameter(context, "<this>");
            Object systemService = context.getSystemService("accessibility");
            Intrinsics.checkNotNull(systemService, "null cannot be cast to non-null type android.view.accessibility.AccessibilityManager");
            if (((AccessibilityManager) systemService).isTouchExplorationEnabled() && !isPressed()) {
                int i5 = n.f13449w;
                Intrinsics.checkNotNullParameter(this, "viewGroup");
                n nVar = null;
                for (ViewParent parent = getParent(); parent != null; parent = parent.getParent()) {
                    if (parent instanceof n) {
                        nVar = (n) parent;
                    }
                }
                if (nVar != null) {
                    nVar.c(this);
                }
            } else if (this.a0) {
                int i6 = n.f13449w;
                Intrinsics.checkNotNullParameter(this, "viewGroup");
                n nVar2 = null;
                for (ViewParent parent2 = getParent(); parent2 != null; parent2 = parent2.getParent()) {
                    if (parent2 instanceof n) {
                        nVar2 = (n) parent2;
                    }
                }
                if (nVar2 != null) {
                    nVar2.c(this);
                }
                this.a0 = false;
            }
            if (f13409o0 == this) {
                if (f13408n0 == this) {
                    f13408n0 = null;
                    f13409o0 = this;
                }
                f13409o0 = null;
                return super.performClick();
            }
        }
        return false;
    }

    public final boolean q(MotionEvent motionEvent) {
        return motionEvent.getX() >= 0.0f && motionEvent.getY() >= 0.0f && motionEvent.getX() < ((float) getWidth()) && motionEvent.getY() < ((float) getHeight());
    }

    public final void r() {
        ColorStateList colorStateList;
        RippleDrawable rippleDrawable;
        if (this.U) {
            this.U = false;
            setForeground(null);
            Integer num = this.f13414d;
            if (num != null && num.intValue() == 0) {
                rippleDrawable = null;
            } else {
                int[][] iArr = {new int[]{android.R.attr.state_enabled}};
                Integer num2 = this.f13416e;
                Integer num3 = this.f13414d;
                if (num3 != null) {
                    Intrinsics.checkNotNull(num3);
                    colorStateList = new ColorStateList(iArr, new int[]{num3.intValue()});
                } else {
                    Resources.Theme theme = getContext().getTheme();
                    TypedValue typedValue = f13407m0;
                    theme.resolveAttribute(android.R.attr.colorControlHighlight, typedValue, true);
                    colorStateList = new ColorStateList(iArr, new int[]{typedValue.data});
                }
                rippleDrawable = new RippleDrawable(colorStateList, null, this.f13425v ? null : new ShapeDrawable(new RectShape()));
                if (num2 != null) {
                    rippleDrawable.setRadius((int) PixelUtil.toPixelFromDIP(num2.intValue()));
                }
            }
            Integer num4 = this.P;
            PaintDrawable paintDrawable = new PaintDrawable(num4 != null ? num4.intValue() : -16777216);
            paintDrawable.setAlpha((int) (this.R * 255));
            this.f13413c0 = paintDrawable;
            paintDrawable.setCallback(this);
            if (!this.f13420i || rippleDrawable == null) {
                this.f13422j0 = rippleDrawable;
                if (rippleDrawable != null) {
                    rippleDrawable.setCallback(this);
                }
            } else {
                setForeground(rippleDrawable);
                this.f13422j0 = null;
            }
            n();
        }
    }

    public final void setActiveOpacity(float f2) {
        this.G = f2;
    }

    public final void setActiveScale(float f2) {
        this.I = f2;
    }

    public final void setActiveUnderlayOpacity(float f2) {
        this.Q = f2;
    }

    @Override // android.view.View
    public void setBackgroundColor(int i5) {
        BackgroundStyleApplicator.setBackgroundColor(this, Integer.valueOf(i5));
    }

    public final void setDefaultOpacity(float f2) {
        this.H = f2;
    }

    public final void setDefaultScale(float f2) {
        this.J = f2;
    }

    public final void setDefaultUnderlayOpacity(float f2) {
        this.R = f2;
        this.U = true;
    }

    @Override // android.view.View
    public void setEnabled(boolean z5) {
        boolean z6 = z5 != isEnabled();
        super.setEnabled(z5);
        if (z6 && this.h0) {
            k();
        }
    }

    public final void setExclusive(boolean z5) {
        this.f13426w = z5;
    }

    public final void setHoverAnimationInDuration(int i5) {
        this.K = i5;
    }

    public final void setHoverAnimationOutDuration(int i5) {
        this.L = i5;
    }

    public final void setHoverOpacity(float f2) {
        this.M = f2;
    }

    public final void setHoverScale(float f2) {
        this.N = f2;
    }

    public final void setHoverUnderlayOpacity(float f2) {
        this.O = f2;
    }

    public final void setLongPressAnimationOutDuration(int i5) {
        this.F = i5;
    }

    public final void setLongPressDuration(int i5) {
        this.E = i5;
    }

    public final void setNeedsOffscreenAlphaCompositing(boolean z5) {
        this.S = z5;
    }

    public final void setOverflow(String str) {
        this.f13423k0 = Intrinsics.areEqual(str, ViewProps.HIDDEN);
        invalidate();
    }

    public void setPointerEvents(@NotNull PointerEvents pointerEvents) {
        Intrinsics.checkNotNullParameter(pointerEvents, "<set-?>");
        this.T = pointerEvents;
    }

    /* JADX WARN: Code restructure failed: missing block: B:6:0x000c, code lost:
    
        if (r0.f13426w == true) goto L12;
     */
    /* JADX WARN: Code restructure failed: missing block: B:8:0x0018, code lost:
    
        if (p(new androidx.core.view.v0(r10)) != false) goto L12;
     */
    @Override // android.view.View
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public void setPressed(boolean z5) {
        boolean z6;
        c cVar;
        if (!this.f13426w) {
            c cVar2 = f13408n0;
            z6 = true;
            if (cVar2 != null) {
            }
        }
        z6 = false;
        if (!z5 || f13408n0 == this || z6) {
            this.f13424l0 = z5;
            super.setPressed(z5);
            if (z5) {
                com.discord.media.engine.video.egl_renderer.b bVar = this.f13417e0;
                if (bVar != null) {
                    Handler handler = getHandler();
                    if (handler != null) {
                        handler.removeCallbacks(bVar);
                    }
                    this.f13417e0 = null;
                }
                this.f13415d0 = SystemClock.uptimeMillis();
                cVar = this;
                cVar.m(this.G, this.I, this.Q, this.f13427x);
            } else {
                cVar = this;
                l();
            }
        } else {
            cVar = this;
        }
        if (z5 || f13408n0 != cVar) {
            return;
        }
        cVar.f13424l0 = false;
    }

    public final void setRippleColor(Integer num) {
        this.f13414d = num;
        this.U = true;
    }

    public final void setRippleRadius(Integer num) {
        this.f13416e = num;
        this.U = true;
    }

    public final void setTapAnimationInDuration(int i5) {
        this.f13427x = i5;
    }

    public final void setTapAnimationOutDuration(int i5) {
        this.f13428y = i5;
    }

    public final void setTouched(boolean z5) {
        this.f13424l0 = z5;
    }

    public final void setUnderlayColor(Integer num) {
        this.P = num;
        this.U = true;
    }

    public final void setUseBorderlessDrawable(boolean z5) {
        this.f13425v = z5;
    }

    public final void setUseDrawableOnForeground(boolean z5) {
        this.f13420i = z5;
        this.U = true;
    }

    @Override // android.view.ViewGroup
    public final boolean shouldDelayChildPressedState() {
        return false;
    }

    @Override // android.view.View
    public final boolean verifyDrawable(Drawable who) {
        Intrinsics.checkNotNullParameter(who, "who");
        return super.verifyDrawable(who) || Intrinsics.areEqual(who, this.f13413c0) || Intrinsics.areEqual(who, this.f13422j0);
    }

    @Override // android.view.ViewGroup, android.view.View
    public final void dispatchDrawableHotspotChanged(float f2, float f10) {
    }

    @Override // android.view.ViewGroup, android.view.View
    public final void onLayout(boolean z5, int i5, int i6, int i10, int i11) {
    }
}
