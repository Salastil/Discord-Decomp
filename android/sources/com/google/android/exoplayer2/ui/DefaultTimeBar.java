package com.google.android.exoplayer2.ui;

import am.c;
import android.animation.ValueAnimator;
import android.content.Context;
import android.content.res.TypedArray;
import android.graphics.Canvas;
import android.graphics.Paint;
import android.graphics.Point;
import android.graphics.Rect;
import android.graphics.drawable.Drawable;
import android.os.Bundle;
import android.util.AttributeSet;
import android.view.KeyEvent;
import android.view.MotionEvent;
import android.view.View;
import android.view.ViewParent;
import android.view.accessibility.AccessibilityEvent;
import android.view.accessibility.AccessibilityNodeInfo;
import android.widget.TextView;
import androidx.recyclerview.widget.RecyclerView;
import com.google.android.exoplayer2.Player;
import com.google.android.exoplayer2.Timeline;
import com.google.firebase.messaging.s;
import he.g;
import he.k;
import he.q;
import he.r;
import java.util.Collections;
import java.util.Formatter;
import java.util.Iterator;
import java.util.Locale;
import java.util.concurrent.CopyOnWriteArraySet;
import ke.b;
import ke.d0;
import kotlin.jvm.internal.LongCompanionObject;

@Deprecated
/* loaded from: classes3.dex */
public class DefaultTimeBar extends View implements r {

    /* renamed from: n0, reason: collision with root package name */
    public static final /* synthetic */ int f5492n0 = 0;
    public final Paint E;
    public final Paint F;
    public final Paint G;
    public final Drawable H;
    public final int I;
    public final int J;
    public final int K;
    public final int L;
    public final int M;
    public final int N;
    public final int O;
    public final int P;
    public final int Q;
    public final StringBuilder R;
    public final Formatter S;
    public final s T;
    public final CopyOnWriteArraySet U;
    public final Point V;
    public final float W;
    public int a0;

    /* renamed from: b0, reason: collision with root package name */
    public long f5493b0;

    /* renamed from: c0, reason: collision with root package name */
    public int f5494c0;

    /* renamed from: d, reason: collision with root package name */
    public final Rect f5495d;

    /* renamed from: d0, reason: collision with root package name */
    public Rect f5496d0;

    /* renamed from: e, reason: collision with root package name */
    public final Rect f5497e;

    /* renamed from: e0, reason: collision with root package name */
    public float f5498e0;

    /* renamed from: f0, reason: collision with root package name */
    public boolean f5499f0;

    /* renamed from: g0, reason: collision with root package name */
    public long f5500g0;
    public long h0;

    /* renamed from: i, reason: collision with root package name */
    public final Rect f5501i;

    /* renamed from: i0, reason: collision with root package name */
    public long f5502i0;

    /* renamed from: j0, reason: collision with root package name */
    public long f5503j0;

    /* renamed from: k0, reason: collision with root package name */
    public int f5504k0;

    /* renamed from: l0, reason: collision with root package name */
    public long[] f5505l0;

    /* renamed from: m0, reason: collision with root package name */
    public boolean[] f5506m0;

    /* renamed from: v, reason: collision with root package name */
    public final Rect f5507v;

    /* renamed from: w, reason: collision with root package name */
    public final Paint f5508w;

    /* renamed from: x, reason: collision with root package name */
    public final Paint f5509x;

    /* renamed from: y, reason: collision with root package name */
    public final Paint f5510y;

    public DefaultTimeBar(Context context, AttributeSet attributeSet) {
        this(context, attributeSet, attributeSet);
    }

    public static int a(float f2, int i5) {
        return (int) ((i5 * f2) + 0.5f);
    }

    private long getPositionIncrement() {
        long j = this.f5493b0;
        if (j != -9223372036854775807L) {
            return j;
        }
        long j5 = this.h0;
        if (j5 == -9223372036854775807L) {
            return 0L;
        }
        return j5 / this.a0;
    }

    private String getProgressText() {
        return d0.z(this.R, this.S, this.f5502i0);
    }

    private long getScrubberPosition() {
        if (this.f5497e.width() <= 0 || this.h0 == -9223372036854775807L) {
            return 0L;
        }
        return (this.f5507v.width() * this.h0) / r0.width();
    }

    public final boolean b(long j) {
        long j5 = this.h0;
        if (j5 <= 0) {
            return false;
        }
        long j7 = this.f5499f0 ? this.f5500g0 : this.f5502i0;
        long j10 = d0.j(j7 + j, 0L, j5);
        if (j10 == j7) {
            return false;
        }
        if (this.f5499f0) {
            f(j10);
        } else {
            c(j10);
        }
        e();
        return true;
    }

    public final void c(long j) {
        this.f5500g0 = j;
        this.f5499f0 = true;
        setPressed(true);
        ViewParent parent = getParent();
        if (parent != null) {
            parent.requestDisallowInterceptTouchEvent(true);
        }
        Iterator it = this.U.iterator();
        while (it.hasNext()) {
            PlayerControlView playerControlView = ((g) ((q) it.next())).f9975d;
            playerControlView.f5522k0 = true;
            TextView textView = playerControlView.J;
            if (textView != null) {
                textView.setText(d0.z(playerControlView.L, playerControlView.M, j));
            }
        }
    }

    public final void d(boolean z5) {
        Player player;
        int D;
        removeCallbacks(this.T);
        this.f5499f0 = false;
        setPressed(false);
        ViewParent parent = getParent();
        if (parent != null) {
            parent.requestDisallowInterceptTouchEvent(false);
        }
        invalidate();
        Iterator it = this.U.iterator();
        while (it.hasNext()) {
            q qVar = (q) it.next();
            long j = this.f5500g0;
            PlayerControlView playerControlView = ((g) qVar).f9975d;
            playerControlView.f5522k0 = false;
            if (!z5 && (player = playerControlView.f5518g0) != null) {
                Timeline J = player.J();
                if (playerControlView.f5521j0 && !J.p()) {
                    int o6 = J.o();
                    D = 0;
                    while (true) {
                        long U = d0.U(J.m(D, playerControlView.O, 0L).K);
                        if (j < U) {
                            break;
                        }
                        if (D == o6 - 1) {
                            j = U;
                            break;
                        } else {
                            j -= U;
                            D++;
                        }
                    }
                } else {
                    D = player.D();
                }
                player.e(D, j);
                playerControlView.i();
            }
        }
    }

    @Override // android.view.View
    public final void drawableStateChanged() {
        super.drawableStateChanged();
        Drawable drawable = this.H;
        if (drawable != null && drawable.isStateful() && drawable.setState(getDrawableState())) {
            invalidate();
        }
    }

    public final void e() {
        Rect rect = this.f5501i;
        Rect rect2 = this.f5497e;
        rect.set(rect2);
        Rect rect3 = this.f5507v;
        rect3.set(rect2);
        long j = this.f5499f0 ? this.f5500g0 : this.f5502i0;
        if (this.h0 > 0) {
            rect.right = Math.min(rect2.left + ((int) ((rect2.width() * this.f5503j0) / this.h0)), rect2.right);
            rect3.right = Math.min(rect2.left + ((int) ((rect2.width() * j) / this.h0)), rect2.right);
        } else {
            int i5 = rect2.left;
            rect.right = i5;
            rect3.right = i5;
        }
        invalidate(this.f5495d);
    }

    public final void f(long j) {
        if (this.f5500g0 == j) {
            return;
        }
        this.f5500g0 = j;
        Iterator it = this.U.iterator();
        while (it.hasNext()) {
            PlayerControlView playerControlView = ((g) ((q) it.next())).f9975d;
            TextView textView = playerControlView.J;
            if (textView != null) {
                textView.setText(d0.z(playerControlView.L, playerControlView.M, j));
            }
        }
    }

    @Override // he.r
    public long getPreferredUpdateDelay() {
        int width = (int) (this.f5497e.width() / this.W);
        if (width == 0) {
            return LongCompanionObject.MAX_VALUE;
        }
        long j = this.h0;
        return (j == 0 || j == -9223372036854775807L) ? LongCompanionObject.MAX_VALUE : j / width;
    }

    @Override // android.view.View
    public final void jumpDrawablesToCurrentState() {
        super.jumpDrawablesToCurrentState();
        Drawable drawable = this.H;
        if (drawable != null) {
            drawable.jumpToCurrentState();
        }
    }

    @Override // android.view.View
    public final void onDraw(Canvas canvas) {
        Canvas canvas2;
        canvas.save();
        Rect rect = this.f5497e;
        int height = rect.height();
        int centerY = rect.centerY() - (height / 2);
        int i5 = centerY + height;
        long j = this.h0;
        Paint paint = this.f5510y;
        Rect rect2 = this.f5507v;
        if (j <= 0) {
            canvas2 = canvas;
            canvas2.drawRect(rect.left, centerY, rect.right, i5, paint);
        } else {
            Rect rect3 = this.f5501i;
            int i6 = rect3.left;
            int i10 = rect3.right;
            int max = Math.max(Math.max(rect.left, i10), rect2.right);
            int i11 = rect.right;
            if (max < i11) {
                canvas.drawRect(max, centerY, i11, i5, paint);
            }
            int max2 = Math.max(i6, rect2.right);
            if (i10 > max2) {
                canvas.drawRect(max2, centerY, i10, i5, this.f5509x);
            }
            if (rect2.width() > 0) {
                canvas.drawRect(rect2.left, centerY, rect2.right, i5, this.f5508w);
            }
            if (this.f5504k0 != 0) {
                long[] jArr = this.f5505l0;
                jArr.getClass();
                boolean[] zArr = this.f5506m0;
                zArr.getClass();
                int i12 = this.L;
                int i13 = i12 / 2;
                int i14 = 0;
                int i15 = 0;
                while (i15 < this.f5504k0) {
                    int i16 = i15;
                    canvas.drawRect(Math.min(rect.width() - i12, Math.max(i14, ((int) ((rect.width() * d0.j(jArr[i15], 0L, this.h0)) / this.h0)) - i13)) + rect.left, centerY, r3 + i12, i5, zArr[i15] ? this.F : this.E);
                    i15 = i16 + 1;
                    i14 = i14;
                }
            }
            canvas2 = canvas;
        }
        if (this.h0 > 0) {
            int i17 = d0.i(rect2.right, rect2.left, rect.right);
            int centerY2 = rect2.centerY();
            Drawable drawable = this.H;
            if (drawable == null) {
                canvas2.drawCircle(i17, centerY2, (int) ((((this.f5499f0 || isFocused()) ? this.O : isEnabled() ? this.M : this.N) * this.f5498e0) / 2.0f), this.G);
            } else {
                int intrinsicWidth = ((int) (drawable.getIntrinsicWidth() * this.f5498e0)) / 2;
                int intrinsicHeight = ((int) (drawable.getIntrinsicHeight() * this.f5498e0)) / 2;
                drawable.setBounds(i17 - intrinsicWidth, centerY2 - intrinsicHeight, i17 + intrinsicWidth, centerY2 + intrinsicHeight);
                drawable.draw(canvas2);
            }
        }
        canvas2.restore();
    }

    @Override // android.view.View
    public final void onFocusChanged(boolean z5, int i5, Rect rect) {
        super.onFocusChanged(z5, i5, rect);
        if (!this.f5499f0 || z5) {
            return;
        }
        d(false);
    }

    @Override // android.view.View
    public final void onInitializeAccessibilityEvent(AccessibilityEvent accessibilityEvent) {
        super.onInitializeAccessibilityEvent(accessibilityEvent);
        if (accessibilityEvent.getEventType() == 4) {
            accessibilityEvent.getText().add(getProgressText());
        }
        accessibilityEvent.setClassName("android.widget.SeekBar");
    }

    @Override // android.view.View
    public final void onInitializeAccessibilityNodeInfo(AccessibilityNodeInfo accessibilityNodeInfo) {
        super.onInitializeAccessibilityNodeInfo(accessibilityNodeInfo);
        accessibilityNodeInfo.setClassName("android.widget.SeekBar");
        accessibilityNodeInfo.setContentDescription(getProgressText());
        if (this.h0 <= 0) {
            return;
        }
        if (d0.a >= 21) {
            accessibilityNodeInfo.addAction(AccessibilityNodeInfo.AccessibilityAction.ACTION_SCROLL_FORWARD);
            accessibilityNodeInfo.addAction(AccessibilityNodeInfo.AccessibilityAction.ACTION_SCROLL_BACKWARD);
        } else {
            accessibilityNodeInfo.addAction(RecyclerView.ItemAnimator.FLAG_APPEARED_IN_PRE_LAYOUT);
            accessibilityNodeInfo.addAction(8192);
        }
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    /* JADX WARN: Removed duplicated region for block: B:9:0x001a  */
    @Override // android.view.View, android.view.KeyEvent.Callback
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final boolean onKeyDown(int i5, KeyEvent keyEvent) {
        if (isEnabled()) {
            long positionIncrement = getPositionIncrement();
            if (i5 != 66) {
                switch (i5) {
                    case 21:
                        positionIncrement = -positionIncrement;
                        if (b(positionIncrement)) {
                            s sVar = this.T;
                            removeCallbacks(sVar);
                            postDelayed(sVar, 1000L);
                            break;
                        }
                        break;
                    case 22:
                        if (b(positionIncrement)) {
                        }
                        break;
                }
                return true;
            }
            if (this.f5499f0) {
                d(false);
                return true;
            }
        }
        return super.onKeyDown(i5, keyEvent);
    }

    @Override // android.view.View
    public final void onLayout(boolean z5, int i5, int i6, int i10, int i11) {
        int i12;
        int i13;
        Rect rect;
        int i14 = i10 - i5;
        int i15 = i11 - i6;
        int paddingLeft = getPaddingLeft();
        int paddingRight = i14 - getPaddingRight();
        int i16 = this.K;
        int i17 = this.I;
        int i18 = this.J;
        int i19 = this.P;
        if (i16 == 1) {
            i12 = (i15 - getPaddingBottom()) - i18;
            i13 = ((i15 - getPaddingBottom()) - i17) - Math.max(i19 - (i17 / 2), 0);
        } else {
            i12 = (i15 - i18) / 2;
            i13 = (i15 - i17) / 2;
        }
        Rect rect2 = this.f5495d;
        rect2.set(paddingLeft, i12, paddingRight, i18 + i12);
        this.f5497e.set(rect2.left + i19, i13, rect2.right - i19, i17 + i13);
        if (d0.a >= 29 && ((rect = this.f5496d0) == null || rect.width() != i14 || this.f5496d0.height() != i15)) {
            Rect rect3 = new Rect(0, 0, i14, i15);
            this.f5496d0 = rect3;
            setSystemGestureExclusionRects(Collections.singletonList(rect3));
        }
        e();
    }

    @Override // android.view.View
    public final void onMeasure(int i5, int i6) {
        int mode = View.MeasureSpec.getMode(i6);
        int size = View.MeasureSpec.getSize(i6);
        int i10 = this.J;
        if (mode == 0) {
            size = i10;
        } else if (mode != 1073741824) {
            size = Math.min(i10, size);
        }
        setMeasuredDimension(View.MeasureSpec.getSize(i5), size);
        Drawable drawable = this.H;
        if (drawable != null && drawable.isStateful() && drawable.setState(getDrawableState())) {
            invalidate();
        }
    }

    @Override // android.view.View
    public final void onRtlPropertiesChanged(int i5) {
        Drawable drawable = this.H;
        if (drawable == null || d0.a < 23 || !drawable.setLayoutDirection(i5)) {
            return;
        }
        invalidate();
    }

    /* JADX WARN: Code restructure failed: missing block: B:11:0x0035, code lost:
    
        if (r3 != 3) goto L34;
     */
    @Override // android.view.View
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final boolean onTouchEvent(MotionEvent motionEvent) {
        if (isEnabled() && this.h0 > 0) {
            int x5 = (int) motionEvent.getX();
            int y5 = (int) motionEvent.getY();
            Point point = this.V;
            point.set(x5, y5);
            int i5 = point.x;
            int i6 = point.y;
            int action = motionEvent.getAction();
            Rect rect = this.f5497e;
            Rect rect2 = this.f5507v;
            if (action != 0) {
                if (action != 1) {
                    if (action == 2) {
                        if (this.f5499f0) {
                            if (i6 < this.Q) {
                                int i10 = this.f5494c0;
                                rect2.right = d0.i(((i5 - i10) / 3) + i10, rect.left, rect.right);
                            } else {
                                this.f5494c0 = i5;
                                rect2.right = d0.i(i5, rect.left, rect.right);
                            }
                            f(getScrubberPosition());
                            e();
                            invalidate();
                            return true;
                        }
                    }
                }
                if (this.f5499f0) {
                    d(motionEvent.getAction() == 3);
                    return true;
                }
            } else {
                int i11 = i5;
                if (this.f5495d.contains(i11, i6)) {
                    rect2.right = d0.i(i11, rect.left, rect.right);
                    c(getScrubberPosition());
                    e();
                    invalidate();
                    return true;
                }
            }
        }
        return false;
    }

    @Override // android.view.View
    public final boolean performAccessibilityAction(int i5, Bundle bundle) {
        if (super.performAccessibilityAction(i5, bundle)) {
            return true;
        }
        if (this.h0 <= 0) {
            return false;
        }
        if (i5 == 8192) {
            if (b(-getPositionIncrement())) {
                d(false);
            }
        } else {
            if (i5 != 4096) {
                return false;
            }
            if (b(getPositionIncrement())) {
                d(false);
            }
        }
        sendAccessibilityEvent(4);
        return true;
    }

    public void setAdMarkerColor(int i5) {
        this.E.setColor(i5);
        invalidate(this.f5495d);
    }

    public void setBufferedColor(int i5) {
        this.f5509x.setColor(i5);
        invalidate(this.f5495d);
    }

    @Override // he.r
    public void setBufferedPosition(long j) {
        if (this.f5503j0 == j) {
            return;
        }
        this.f5503j0 = j;
        e();
    }

    @Override // he.r
    public void setDuration(long j) {
        if (this.h0 == j) {
            return;
        }
        this.h0 = j;
        if (this.f5499f0 && j == -9223372036854775807L) {
            d(true);
        }
        e();
    }

    @Override // android.view.View, he.r
    public void setEnabled(boolean z5) {
        super.setEnabled(z5);
        if (!this.f5499f0 || z5) {
            return;
        }
        d(true);
    }

    public void setKeyCountIncrement(int i5) {
        b.g(i5 > 0);
        this.a0 = i5;
        this.f5493b0 = -9223372036854775807L;
    }

    public void setKeyTimeIncrement(long j) {
        b.g(j > 0);
        this.a0 = -1;
        this.f5493b0 = j;
    }

    public void setPlayedAdMarkerColor(int i5) {
        this.F.setColor(i5);
        invalidate(this.f5495d);
    }

    public void setPlayedColor(int i5) {
        this.f5508w.setColor(i5);
        invalidate(this.f5495d);
    }

    @Override // he.r
    public void setPosition(long j) {
        if (this.f5502i0 == j) {
            return;
        }
        this.f5502i0 = j;
        setContentDescription(getProgressText());
        e();
    }

    public void setScrubberColor(int i5) {
        this.G.setColor(i5);
        invalidate(this.f5495d);
    }

    public void setUnplayedColor(int i5) {
        this.f5510y.setColor(i5);
        invalidate(this.f5495d);
    }

    public DefaultTimeBar(Context context, AttributeSet attributeSet, AttributeSet attributeSet2) {
        super(context, attributeSet, 0);
        Paint paint;
        this.f5495d = new Rect();
        this.f5497e = new Rect();
        this.f5501i = new Rect();
        this.f5507v = new Rect();
        Paint paint2 = new Paint();
        this.f5508w = paint2;
        Paint paint3 = new Paint();
        this.f5509x = paint3;
        Paint paint4 = new Paint();
        this.f5510y = paint4;
        Paint paint5 = new Paint();
        this.E = paint5;
        Paint paint6 = new Paint();
        this.F = paint6;
        Paint paint7 = new Paint();
        this.G = paint7;
        paint7.setAntiAlias(true);
        this.U = new CopyOnWriteArraySet();
        this.V = new Point();
        float f2 = context.getResources().getDisplayMetrics().density;
        this.W = f2;
        this.Q = a(f2, -50);
        int a = a(f2, 4);
        int a10 = a(f2, 26);
        int a11 = a(f2, 4);
        int a12 = a(f2, 12);
        int a13 = a(f2, 0);
        int a14 = a(f2, 16);
        if (attributeSet2 != null) {
            TypedArray obtainStyledAttributes = context.getTheme().obtainStyledAttributes(attributeSet2, k.f9979b, 0, 0);
            try {
                Drawable drawable = obtainStyledAttributes.getDrawable(10);
                this.H = drawable;
                if (drawable != null) {
                    int i5 = d0.a;
                    if (i5 >= 23) {
                        paint = paint5;
                        int layoutDirection = getLayoutDirection();
                        if (i5 < 23 || !drawable.setLayoutDirection(layoutDirection)) {
                        }
                    } else {
                        paint = paint5;
                    }
                    a10 = Math.max(drawable.getMinimumHeight(), a10);
                } else {
                    paint = paint5;
                }
                this.I = obtainStyledAttributes.getDimensionPixelSize(3, a);
                this.J = obtainStyledAttributes.getDimensionPixelSize(12, a10);
                this.K = obtainStyledAttributes.getInt(2, 0);
                this.L = obtainStyledAttributes.getDimensionPixelSize(1, a11);
                this.M = obtainStyledAttributes.getDimensionPixelSize(11, a12);
                this.N = obtainStyledAttributes.getDimensionPixelSize(8, a13);
                this.O = obtainStyledAttributes.getDimensionPixelSize(9, a14);
                int i6 = obtainStyledAttributes.getInt(6, -1);
                int i10 = obtainStyledAttributes.getInt(7, -1);
                int i11 = obtainStyledAttributes.getInt(4, -855638017);
                int i12 = obtainStyledAttributes.getInt(13, 872415231);
                int i13 = obtainStyledAttributes.getInt(0, -1291845888);
                int i14 = obtainStyledAttributes.getInt(5, 872414976);
                paint2.setColor(i6);
                paint7.setColor(i10);
                paint3.setColor(i11);
                paint4.setColor(i12);
                paint.setColor(i13);
                paint6.setColor(i14);
                obtainStyledAttributes.recycle();
            } catch (Throwable th2) {
                obtainStyledAttributes.recycle();
                throw th2;
            }
        } else {
            this.I = a;
            this.J = a10;
            this.K = 0;
            this.L = a11;
            this.M = a12;
            this.N = a13;
            this.O = a14;
            paint2.setColor(-1);
            paint7.setColor(-1);
            paint3.setColor(-855638017);
            paint4.setColor(872415231);
            paint5.setColor(-1291845888);
            paint6.setColor(872414976);
            this.H = null;
        }
        StringBuilder sb2 = new StringBuilder();
        this.R = sb2;
        this.S = new Formatter(sb2, Locale.getDefault());
        this.T = new s(16, this);
        Drawable drawable2 = this.H;
        if (drawable2 != null) {
            this.P = (drawable2.getMinimumWidth() + 1) / 2;
        } else {
            this.P = (Math.max(this.N, Math.max(this.M, this.O)) + 1) / 2;
        }
        this.f5498e0 = 1.0f;
        new ValueAnimator().addUpdateListener(new c(4, this));
        this.h0 = -9223372036854775807L;
        this.f5493b0 = -9223372036854775807L;
        this.a0 = 20;
        setFocusable(true);
        if (getImportantForAccessibility() == 0) {
            setImportantForAccessibility(1);
        }
    }
}
