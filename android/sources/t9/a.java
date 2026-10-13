package t9;

import a3.f;
import android.graphics.Canvas;
import android.graphics.ColorFilter;
import android.graphics.Rect;
import android.graphics.drawable.Animatable;
import android.graphics.drawable.Drawable;
import android.os.SystemClock;
import androidx.recyclerview.widget.h;
import com.facebook.drawee.drawable.DrawableProperties;
import kotlin.jvm.internal.Intrinsics;
import p9.c;
import qa.t;
import sg.d;

/* loaded from: classes3.dex */
public final class a extends Drawable implements Animatable, b9.a {
    public static final l8.a M = new l8.a(17);
    public long E;
    public long F;
    public int G;
    public int I;
    public DrawableProperties K;

    /* renamed from: d, reason: collision with root package name */
    public final m9.a f18237d;

    /* renamed from: e, reason: collision with root package name */
    public final h f18238e;

    /* renamed from: i, reason: collision with root package name */
    public volatile boolean f18239i;

    /* renamed from: v, reason: collision with root package name */
    public long f18240v;

    /* renamed from: w, reason: collision with root package name */
    public long f18241w;

    /* renamed from: x, reason: collision with root package name */
    public long f18242x;

    /* renamed from: y, reason: collision with root package name */
    public int f18243y;
    public final long H = 8;
    public volatile l8.a J = M;
    public final d L = new d(2, this);

    public a(m9.a aVar) {
        this.f18237d = aVar;
        this.f18238e = new h(aVar);
    }

    @Override // b9.a
    public final void a() {
        m9.a aVar = this.f18237d;
        if (aVar != null) {
            aVar.a.a();
        }
    }

    @Override // android.graphics.drawable.Drawable
    public final void draw(Canvas canvas) {
        long j;
        c cVar;
        p9.a aVar;
        Intrinsics.checkNotNullParameter(canvas, "canvas");
        if (this.f18237d == null || this.f18238e == null) {
            return;
        }
        long uptimeMillis = SystemClock.uptimeMillis();
        long max = this.f18239i ? uptimeMillis - this.f18240v : (long) Math.max(this.f18241w, 0.0d);
        h hVar = this.f18238e;
        Intrinsics.checkNotNull(hVar);
        m9.a aVar2 = (m9.a) hVar.f2402i;
        long I = hVar.I();
        int i5 = 0;
        if (I == 0) {
            long j5 = 0;
            while (true) {
                j5 += aVar2.b(i5);
                int i6 = i5 + 1;
                if (0 < j5) {
                    break;
                } else {
                    i5 = i6;
                }
            }
        } else if (aVar2.c() != 0 && max / I >= aVar2.c()) {
            i5 = -1;
        } else {
            long j7 = 0;
            while (true) {
                j7 += aVar2.b(i5);
                int i10 = i5 + 1;
                if (max % I < j7) {
                    break;
                } else {
                    i5 = i10;
                }
            }
        }
        if (i5 == -1) {
            m9.a aVar3 = this.f18237d;
            Intrinsics.checkNotNull(aVar3);
            i5 = aVar3.a() - 1;
            this.J.getClass();
            Intrinsics.checkNotNullParameter(this, "drawable");
            this.f18239i = false;
        } else if (i5 == 0 && this.f18243y != -1 && uptimeMillis >= this.f18242x) {
            this.J.getClass();
            Intrinsics.checkNotNullParameter(this, "drawable");
        }
        m9.a aVar4 = this.f18237d;
        Intrinsics.checkNotNull(aVar4);
        aVar4.f14414e = aVar4.f14411b.now();
        Intrinsics.checkNotNullParameter(this, "parent");
        Intrinsics.checkNotNullParameter(canvas, "canvas");
        n9.a aVar5 = aVar4.a;
        aVar5.getClass();
        Intrinsics.checkNotNullParameter(this, "parent");
        Intrinsics.checkNotNullParameter(canvas, "canvas");
        boolean c6 = aVar5.c(canvas, i5, 0);
        if (!aVar5.f14964e && (cVar = aVar5.f14966g) != null && (aVar = aVar5.f14965f) != null) {
            aVar.a(cVar, aVar5.f14961b, aVar5, i5);
        }
        boolean z5 = c6;
        aVar4.d();
        if (z5) {
            this.J.getClass();
            Intrinsics.checkNotNullParameter(this, "drawable");
            this.f18243y = i5;
        }
        if (!z5) {
            this.I++;
            if (p8.a.a.isLoggable(2)) {
                p8.a.q("Dropped a frame. Count: %s", Integer.valueOf(this.I), a.class);
            }
        }
        long uptimeMillis2 = SystemClock.uptimeMillis();
        if (this.f18239i) {
            h hVar2 = this.f18238e;
            Intrinsics.checkNotNull(hVar2);
            long j10 = uptimeMillis2 - this.f18240v;
            m9.a aVar6 = (m9.a) hVar2.f2402i;
            long I2 = hVar2.I();
            if (I2 != 0 && (aVar6.c() == 0 || j10 / I2 < aVar6.c())) {
                long j11 = j10 % I2;
                int a = aVar6.a();
                long j12 = 0;
                for (int i11 = 0; i11 < a && j12 <= j11; i11++) {
                    j12 += aVar6.b(i11);
                }
                j = j10 + (j12 - j11);
            } else {
                j = -1;
            }
            if (j != -1) {
                long j13 = this.f18240v + j + this.H;
                this.f18242x = j13;
                scheduleSelf(this.L, j13);
            } else {
                this.J.getClass();
                Intrinsics.checkNotNullParameter(this, "drawable");
                this.f18239i = false;
            }
        }
        this.f18241w = max;
    }

    @Override // android.graphics.drawable.Drawable
    public final int getIntrinsicHeight() {
        m9.a aVar = this.f18237d;
        if (aVar == null) {
            return super.getIntrinsicHeight();
        }
        n9.a aVar2 = aVar.a;
        Intrinsics.checkNotNull(aVar2);
        return aVar2.f14969l;
    }

    @Override // android.graphics.drawable.Drawable
    public final int getIntrinsicWidth() {
        m9.a aVar = this.f18237d;
        if (aVar == null) {
            return super.getIntrinsicWidth();
        }
        n9.a aVar2 = aVar.a;
        Intrinsics.checkNotNull(aVar2);
        return aVar2.k;
    }

    @Override // android.graphics.drawable.Drawable
    public final int getOpacity() {
        return -3;
    }

    @Override // android.graphics.drawable.Animatable
    public final boolean isRunning() {
        return this.f18239i;
    }

    @Override // android.graphics.drawable.Drawable
    public final void onBoundsChange(Rect bounds) {
        Intrinsics.checkNotNullParameter(bounds, "bounds");
        super.onBoundsChange(bounds);
        m9.a aVar = this.f18237d;
        if (aVar != null) {
            aVar.getClass();
            Intrinsics.checkNotNullParameter(bounds, "bounds");
            n9.a aVar2 = aVar.a;
            aVar2.j = bounds;
            s9.a aVar3 = aVar2.f14963d;
            da.a aVar4 = (da.a) aVar3.f17828c;
            if (!da.a.a(aVar4.f7457c, bounds).equals(aVar4.f7458d)) {
                aVar4 = new da.a(aVar4.a, aVar4.f7456b, bounds, aVar4.j);
            }
            Intrinsics.checkNotNullExpressionValue(aVar4, "forNewBounds(...)");
            if (aVar4 != ((da.a) aVar3.f17828c)) {
                aVar3.f17828c = aVar4;
                aVar3.f17829d = new f(aVar4, aVar3.a, (t) aVar3.f17830e);
            }
            aVar2.e();
        }
    }

    @Override // android.graphics.drawable.Drawable
    public final boolean onLevelChange(int i5) {
        if (this.f18239i) {
            return false;
        }
        long j = i5;
        if (this.f18241w == j) {
            return false;
        }
        this.f18241w = j;
        invalidateSelf();
        return true;
    }

    @Override // android.graphics.drawable.Drawable
    public final void setAlpha(int i5) {
        if (this.K == null) {
            this.K = new DrawableProperties();
        }
        DrawableProperties drawableProperties = this.K;
        Intrinsics.checkNotNull(drawableProperties);
        drawableProperties.a = i5;
        m9.a aVar = this.f18237d;
        if (aVar != null) {
            aVar.a.f14968i.setAlpha(i5);
        }
    }

    @Override // android.graphics.drawable.Drawable
    public final void setColorFilter(ColorFilter colorFilter) {
        if (this.K == null) {
            this.K = new DrawableProperties();
        }
        DrawableProperties drawableProperties = this.K;
        Intrinsics.checkNotNull(drawableProperties);
        drawableProperties.f4422c = colorFilter;
        drawableProperties.f4421b = colorFilter != null;
        m9.a aVar = this.f18237d;
        if (aVar != null) {
            aVar.a.f14968i.setColorFilter(colorFilter);
        }
    }

    @Override // android.graphics.drawable.Animatable
    public final void start() {
        m9.a aVar;
        if (this.f18239i || (aVar = this.f18237d) == null) {
            return;
        }
        Intrinsics.checkNotNull(aVar);
        if (aVar.a() <= 1) {
            return;
        }
        this.f18239i = true;
        long uptimeMillis = SystemClock.uptimeMillis();
        long j = uptimeMillis - this.E;
        this.f18240v = j;
        this.f18242x = j;
        this.f18241w = uptimeMillis - this.F;
        this.f18243y = this.G;
        invalidateSelf();
        this.J.getClass();
        Intrinsics.checkNotNullParameter(this, "drawable");
    }

    @Override // android.graphics.drawable.Animatable
    public final void stop() {
        if (this.f18239i) {
            long uptimeMillis = SystemClock.uptimeMillis();
            this.E = uptimeMillis - this.f18240v;
            this.F = uptimeMillis - this.f18241w;
            this.G = this.f18243y;
            this.f18239i = false;
            this.f18240v = 0L;
            this.f18242x = 0L;
            this.f18241w = -1L;
            this.f18243y = -1;
            unscheduleSelf(this.L);
            this.J.getClass();
            Intrinsics.checkNotNullParameter(this, "drawable");
        }
    }
}
