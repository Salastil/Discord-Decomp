package androidx.recyclerview.widget;

import android.R;
import android.animation.ValueAnimator;
import android.graphics.Canvas;
import android.graphics.drawable.Drawable;
import android.graphics.drawable.StateListDrawable;
import android.view.MotionEvent;
import androidx.recyclerview.widget.RecyclerView;
import com.discord.js_watchdog.JSWatchdogManagerKt;

/* loaded from: classes.dex */
public final class c0 extends RecyclerView.ItemDecoration implements RecyclerView.OnItemTouchListener {
    public static final int[] C = {R.attr.state_pressed};
    public static final int[] D = new int[0];
    public int A;
    public final v0 B;
    public final int a;

    /* renamed from: b, reason: collision with root package name */
    public final int f2361b;

    /* renamed from: c, reason: collision with root package name */
    public final StateListDrawable f2362c;

    /* renamed from: d, reason: collision with root package name */
    public final Drawable f2363d;

    /* renamed from: e, reason: collision with root package name */
    public final int f2364e;

    /* renamed from: f, reason: collision with root package name */
    public final int f2365f;

    /* renamed from: g, reason: collision with root package name */
    public final StateListDrawable f2366g;

    /* renamed from: h, reason: collision with root package name */
    public final Drawable f2367h;

    /* renamed from: i, reason: collision with root package name */
    public final int f2368i;
    public final int j;
    public int k;

    /* renamed from: l, reason: collision with root package name */
    public int f2369l;

    /* renamed from: m, reason: collision with root package name */
    public float f2370m;

    /* renamed from: n, reason: collision with root package name */
    public int f2371n;

    /* renamed from: o, reason: collision with root package name */
    public int f2372o;

    /* renamed from: p, reason: collision with root package name */
    public float f2373p;

    /* renamed from: s, reason: collision with root package name */
    public final RecyclerView f2376s;

    /* renamed from: z, reason: collision with root package name */
    public final ValueAnimator f2383z;

    /* renamed from: q, reason: collision with root package name */
    public int f2374q = 0;

    /* renamed from: r, reason: collision with root package name */
    public int f2375r = 0;

    /* renamed from: t, reason: collision with root package name */
    public boolean f2377t = false;

    /* renamed from: u, reason: collision with root package name */
    public boolean f2378u = false;

    /* renamed from: v, reason: collision with root package name */
    public int f2379v = 0;

    /* renamed from: w, reason: collision with root package name */
    public int f2380w = 0;

    /* renamed from: x, reason: collision with root package name */
    public final int[] f2381x = new int[2];

    /* renamed from: y, reason: collision with root package name */
    public final int[] f2382y = new int[2];

    public c0(RecyclerView recyclerView, StateListDrawable stateListDrawable, Drawable drawable, StateListDrawable stateListDrawable2, Drawable drawable2, int i5, int i6, int i10) {
        ValueAnimator ofFloat = ValueAnimator.ofFloat(0.0f, 1.0f);
        this.f2383z = ofFloat;
        this.A = 0;
        v0 v0Var = new v0(1, this);
        this.B = v0Var;
        z zVar = new z(this);
        this.f2362c = stateListDrawable;
        this.f2363d = drawable;
        this.f2366g = stateListDrawable2;
        this.f2367h = drawable2;
        this.f2364e = Math.max(i5, stateListDrawable.getIntrinsicWidth());
        this.f2365f = Math.max(i5, drawable.getIntrinsicWidth());
        this.f2368i = Math.max(i5, stateListDrawable2.getIntrinsicWidth());
        this.j = Math.max(i5, drawable2.getIntrinsicWidth());
        this.a = i6;
        this.f2361b = i10;
        stateListDrawable.setAlpha(255);
        drawable.setAlpha(255);
        ofFloat.addListener(new a0(this));
        ofFloat.addUpdateListener(new b0(this));
        RecyclerView recyclerView2 = this.f2376s;
        if (recyclerView2 == recyclerView) {
            return;
        }
        if (recyclerView2 != null) {
            recyclerView2.removeItemDecoration(this);
            this.f2376s.removeOnItemTouchListener(this);
            this.f2376s.removeOnScrollListener(zVar);
            this.f2376s.removeCallbacks(v0Var);
        }
        this.f2376s = recyclerView;
        recyclerView.addItemDecoration(this);
        this.f2376s.addOnItemTouchListener(this);
        this.f2376s.addOnScrollListener(zVar);
    }

    public static int c(float f2, float f10, int[] iArr, int i5, int i6, int i10) {
        int i11 = iArr[1] - iArr[0];
        if (i11 != 0) {
            int i12 = i5 - i10;
            int i13 = (int) (((f10 - f2) / i11) * i12);
            int i14 = i6 + i13;
            if (i14 < i12 && i14 >= 0) {
                return i13;
            }
        }
        return 0;
    }

    public final boolean a(float f2, float f10) {
        if (f10 < this.f2375r - this.f2368i) {
            return false;
        }
        int i5 = this.f2372o;
        int i6 = this.f2371n;
        return f2 >= ((float) (i5 - (i6 / 2))) && f2 <= ((float) ((i6 / 2) + i5));
    }

    public final boolean b(float f2, float f10) {
        int layoutDirection = this.f2376s.getLayoutDirection();
        int i5 = this.f2364e;
        if (layoutDirection == 1) {
            if (f2 > i5) {
                return false;
            }
        } else if (f2 < this.f2374q - i5) {
            return false;
        }
        int i6 = this.f2369l;
        int i10 = this.k / 2;
        return f10 >= ((float) (i6 - i10)) && f10 <= ((float) (i10 + i6));
    }

    public final void d(int i5) {
        v0 v0Var = this.B;
        StateListDrawable stateListDrawable = this.f2362c;
        if (i5 == 2 && this.f2379v != 2) {
            stateListDrawable.setState(C);
            this.f2376s.removeCallbacks(v0Var);
        }
        if (i5 == 0) {
            this.f2376s.invalidate();
        } else {
            e();
        }
        if (this.f2379v == 2 && i5 != 2) {
            stateListDrawable.setState(D);
            this.f2376s.removeCallbacks(v0Var);
            this.f2376s.postDelayed(v0Var, 1200);
        } else if (i5 == 1) {
            this.f2376s.removeCallbacks(v0Var);
            this.f2376s.postDelayed(v0Var, JSWatchdogManagerKt.FREEZE_CHECK_DELAY_MS);
        }
        this.f2379v = i5;
    }

    public final void e() {
        int i5 = this.A;
        ValueAnimator valueAnimator = this.f2383z;
        if (i5 != 0) {
            if (i5 != 3) {
                return;
            } else {
                valueAnimator.cancel();
            }
        }
        this.A = 1;
        valueAnimator.setFloatValues(((Float) valueAnimator.getAnimatedValue()).floatValue(), 1.0f);
        valueAnimator.setDuration(500L);
        valueAnimator.setStartDelay(0L);
        valueAnimator.start();
    }

    @Override // androidx.recyclerview.widget.RecyclerView.ItemDecoration
    public final void onDrawOver(Canvas canvas, RecyclerView recyclerView, RecyclerView.State state) {
        if (this.f2374q != this.f2376s.getWidth() || this.f2375r != this.f2376s.getHeight()) {
            this.f2374q = this.f2376s.getWidth();
            this.f2375r = this.f2376s.getHeight();
            d(0);
            return;
        }
        if (this.A != 0) {
            if (this.f2377t) {
                int i5 = this.f2374q;
                int i6 = this.f2364e;
                int i10 = i5 - i6;
                int i11 = this.f2369l;
                int i12 = this.k;
                int i13 = i11 - (i12 / 2);
                StateListDrawable stateListDrawable = this.f2362c;
                stateListDrawable.setBounds(0, 0, i6, i12);
                int i14 = this.f2365f;
                int i15 = this.f2375r;
                Drawable drawable = this.f2363d;
                drawable.setBounds(0, 0, i14, i15);
                if (this.f2376s.getLayoutDirection() == 1) {
                    drawable.draw(canvas);
                    canvas.translate(i6, i13);
                    canvas.scale(-1.0f, 1.0f);
                    stateListDrawable.draw(canvas);
                    canvas.scale(-1.0f, 1.0f);
                    canvas.translate(-i6, -i13);
                } else {
                    canvas.translate(i10, 0.0f);
                    drawable.draw(canvas);
                    canvas.translate(0.0f, i13);
                    stateListDrawable.draw(canvas);
                    canvas.translate(-i10, -i13);
                }
            }
            if (this.f2378u) {
                int i16 = this.f2375r;
                int i17 = this.f2368i;
                int i18 = i16 - i17;
                int i19 = this.f2372o;
                int i20 = this.f2371n;
                int i21 = i19 - (i20 / 2);
                StateListDrawable stateListDrawable2 = this.f2366g;
                stateListDrawable2.setBounds(0, 0, i20, i17);
                int i22 = this.f2374q;
                int i23 = this.j;
                Drawable drawable2 = this.f2367h;
                drawable2.setBounds(0, 0, i22, i23);
                canvas.translate(0.0f, i18);
                drawable2.draw(canvas);
                canvas.translate(i21, 0.0f);
                stateListDrawable2.draw(canvas);
                canvas.translate(-i21, -i18);
            }
        }
    }

    @Override // androidx.recyclerview.widget.RecyclerView.OnItemTouchListener
    public final boolean onInterceptTouchEvent(RecyclerView recyclerView, MotionEvent motionEvent) {
        int i5 = this.f2379v;
        if (i5 != 1) {
            return i5 == 2;
        }
        boolean b10 = b(motionEvent.getX(), motionEvent.getY());
        boolean a = a(motionEvent.getX(), motionEvent.getY());
        if (motionEvent.getAction() != 0) {
            return false;
        }
        if (!b10 && !a) {
            return false;
        }
        if (a) {
            this.f2380w = 1;
            this.f2373p = (int) motionEvent.getX();
        } else if (b10) {
            this.f2380w = 2;
            this.f2370m = (int) motionEvent.getY();
        }
        d(2);
        return true;
    }

    @Override // androidx.recyclerview.widget.RecyclerView.OnItemTouchListener
    public final void onRequestDisallowInterceptTouchEvent(boolean z5) {
    }

    @Override // androidx.recyclerview.widget.RecyclerView.OnItemTouchListener
    public final void onTouchEvent(RecyclerView recyclerView, MotionEvent motionEvent) {
        if (this.f2379v == 0) {
            return;
        }
        if (motionEvent.getAction() == 0) {
            boolean b10 = b(motionEvent.getX(), motionEvent.getY());
            boolean a = a(motionEvent.getX(), motionEvent.getY());
            if (b10 || a) {
                if (a) {
                    this.f2380w = 1;
                    this.f2373p = (int) motionEvent.getX();
                } else if (b10) {
                    this.f2380w = 2;
                    this.f2370m = (int) motionEvent.getY();
                }
                d(2);
                return;
            }
            return;
        }
        if (motionEvent.getAction() == 1 && this.f2379v == 2) {
            this.f2370m = 0.0f;
            this.f2373p = 0.0f;
            d(1);
            this.f2380w = 0;
            return;
        }
        if (motionEvent.getAction() == 2 && this.f2379v == 2) {
            e();
            int i5 = this.f2380w;
            int i6 = this.f2361b;
            if (i5 == 1) {
                float x5 = motionEvent.getX();
                int[] iArr = this.f2382y;
                iArr[0] = i6;
                int i10 = this.f2374q - i6;
                iArr[1] = i10;
                float max = Math.max(i6, Math.min(i10, x5));
                if (Math.abs(this.f2372o - max) >= 2.0f) {
                    int c6 = c(this.f2373p, max, iArr, this.f2376s.computeHorizontalScrollRange(), this.f2376s.computeHorizontalScrollOffset(), this.f2374q);
                    if (c6 != 0) {
                        this.f2376s.scrollBy(c6, 0);
                    }
                    this.f2373p = max;
                }
            }
            if (this.f2380w == 2) {
                float y5 = motionEvent.getY();
                int[] iArr2 = this.f2381x;
                iArr2[0] = i6;
                int i11 = this.f2375r - i6;
                iArr2[1] = i11;
                float max2 = Math.max(i6, Math.min(i11, y5));
                if (Math.abs(this.f2369l - max2) < 2.0f) {
                    return;
                }
                int c8 = c(this.f2370m, max2, iArr2, this.f2376s.computeVerticalScrollRange(), this.f2376s.computeVerticalScrollOffset(), this.f2375r);
                if (c8 != 0) {
                    this.f2376s.scrollBy(0, c8);
                }
                this.f2370m = max2;
            }
        }
    }
}
