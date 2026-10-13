package da;

import android.graphics.Bitmap;
import android.graphics.Canvas;
import android.graphics.Paint;
import android.graphics.PorterDuff;
import android.graphics.PorterDuffXfermode;
import android.graphics.Rect;
import e4.i;
import kotlin.jvm.internal.Intrinsics;
import qa.s;

/* loaded from: classes3.dex */
public final class a {
    public final s a;

    /* renamed from: b, reason: collision with root package name */
    public final i f7456b;

    /* renamed from: c, reason: collision with root package name */
    public final ba.b f7457c;

    /* renamed from: d, reason: collision with root package name */
    public final Rect f7458d;

    /* renamed from: e, reason: collision with root package name */
    public final int[] f7459e;

    /* renamed from: f, reason: collision with root package name */
    public final int f7460f;

    /* renamed from: g, reason: collision with root package name */
    public final ba.a[] f7461g;

    /* renamed from: h, reason: collision with root package name */
    public final Rect f7462h = new Rect();

    /* renamed from: i, reason: collision with root package name */
    public final Rect f7463i = new Rect();
    public final boolean j;
    public final Paint k;

    /* renamed from: l, reason: collision with root package name */
    public Bitmap f7464l;

    public a(s sVar, i iVar, Rect rect, boolean z5) {
        this.a = sVar;
        this.f7456b = iVar;
        ba.b bVar = (ba.b) iVar.f7952d;
        this.f7457c = bVar;
        int[] frameDurationMs = bVar.p();
        this.f7459e = frameDurationMs;
        sVar.getClass();
        Intrinsics.checkNotNullParameter(frameDurationMs, "frameDurationMs");
        int length = frameDurationMs.length;
        for (int i5 = 0; i5 < length; i5++) {
            if (frameDurationMs[i5] < 11) {
                frameDurationMs[i5] = 100;
            }
        }
        s sVar2 = this.a;
        int[] frameDurationMs2 = this.f7459e;
        sVar2.getClass();
        Intrinsics.checkNotNullParameter(frameDurationMs2, "frameDurationMs");
        int i6 = 0;
        for (int i10 : frameDurationMs2) {
            i6 += i10;
        }
        this.f7460f = i6;
        s sVar3 = this.a;
        int[] frameDurationsMs = this.f7459e;
        sVar3.getClass();
        Intrinsics.checkNotNullParameter(frameDurationsMs, "frameDurationsMs");
        int[] iArr = new int[frameDurationsMs.length];
        int length2 = frameDurationsMs.length;
        int i11 = 0;
        for (int i12 = 0; i12 < length2; i12++) {
            iArr[i12] = i11;
            i11 += frameDurationsMs[i12];
        }
        this.f7458d = a(this.f7457c, rect);
        this.j = z5;
        this.f7461g = new ba.a[this.f7457c.k()];
        for (int i13 = 0; i13 < this.f7457c.k(); i13++) {
            this.f7461g[i13] = this.f7457c.o(i13);
        }
        Paint paint = new Paint();
        this.k = paint;
        paint.setXfermode(new PorterDuffXfermode(PorterDuff.Mode.CLEAR));
    }

    public static Rect a(ba.b bVar, Rect rect) {
        return rect == null ? new Rect(0, 0, bVar.getWidth(), bVar.getHeight()) : new Rect(0, 0, Math.min(rect.width(), bVar.getWidth()), Math.min(rect.height(), bVar.getHeight()));
    }

    public final void b(Canvas canvas, float f2, float f10, ba.a aVar) {
        if (aVar.f2760f == 2) {
            int ceil = (int) Math.ceil(aVar.f2757c * f2);
            int ceil2 = (int) Math.ceil(aVar.f2758d * f10);
            int ceil3 = (int) Math.ceil(aVar.a * f2);
            int ceil4 = (int) Math.ceil(aVar.f2756b * f10);
            canvas.drawRect(new Rect(ceil3, ceil4, ceil + ceil3, ceil2 + ceil4), this.k);
        }
    }

    public final synchronized Bitmap c(int i5, int i6) {
        try {
            Bitmap bitmap = this.f7464l;
            if (bitmap != null) {
                if (bitmap.getWidth() >= i5) {
                    if (this.f7464l.getHeight() < i6) {
                    }
                }
                synchronized (this) {
                    Bitmap bitmap2 = this.f7464l;
                    if (bitmap2 != null) {
                        bitmap2.recycle();
                        this.f7464l = null;
                    }
                }
            }
            if (this.f7464l == null) {
                this.f7464l = Bitmap.createBitmap(i5, i6, Bitmap.Config.ARGB_8888);
            }
            this.f7464l.eraseColor(0);
        } catch (Throwable th2) {
            throw th2;
        }
        return this.f7464l;
    }

    public final void d(Canvas canvas, int i5) {
        ba.b bVar = this.f7457c;
        ba.c m5 = bVar.m(i5);
        try {
            if (m5.getWidth() > 0 && m5.getHeight() > 0) {
                if (bVar.n()) {
                    f(canvas, m5);
                } else {
                    e(canvas, m5);
                }
                m5.dispose();
            }
        } finally {
            m5.dispose();
        }
    }

    public final void e(Canvas canvas, ba.c cVar) {
        int width;
        int height;
        int b10;
        int c6;
        if (this.j) {
            float max = Math.max(cVar.getWidth() / Math.min(cVar.getWidth(), canvas.getWidth()), cVar.getHeight() / Math.min(cVar.getHeight(), canvas.getHeight()));
            width = (int) (cVar.getWidth() / max);
            height = (int) (cVar.getHeight() / max);
            b10 = (int) (cVar.b() / max);
            c6 = (int) (cVar.c() / max);
        } else {
            width = cVar.getWidth();
            height = cVar.getHeight();
            b10 = cVar.b();
            c6 = cVar.c();
        }
        synchronized (this) {
            Bitmap c8 = c(width, height);
            this.f7464l = c8;
            cVar.a(width, height, c8);
            canvas.save();
            canvas.translate(b10, c6);
            canvas.drawBitmap(this.f7464l, 0.0f, 0.0f, (Paint) null);
            canvas.restore();
        }
    }

    public final void f(Canvas canvas, ba.c cVar) {
        double width = this.f7458d.width() / this.f7457c.getWidth();
        double height = this.f7458d.height() / this.f7457c.getHeight();
        int round = (int) Math.round(cVar.getWidth() * width);
        int round2 = (int) Math.round(cVar.getHeight() * height);
        int b10 = (int) (cVar.b() * width);
        int c6 = (int) (cVar.c() * height);
        synchronized (this) {
            try {
                int width2 = this.f7458d.width();
                int height2 = this.f7458d.height();
                c(width2, height2);
                Bitmap bitmap = this.f7464l;
                if (bitmap != null) {
                    cVar.a(round, round2, bitmap);
                }
                this.f7462h.set(0, 0, width2, height2);
                this.f7463i.set(b10, c6, width2 + b10, height2 + c6);
                Bitmap bitmap2 = this.f7464l;
                if (bitmap2 != null) {
                    canvas.drawBitmap(bitmap2, this.f7462h, this.f7463i, (Paint) null);
                }
            } catch (Throwable th2) {
                throw th2;
            }
        }
    }

    public final void g(Canvas canvas, ba.c cVar, ba.a aVar, ba.a aVar2) {
        Rect rect = this.f7458d;
        if (rect == null || rect.width() <= 0 || this.f7458d.height() <= 0) {
            return;
        }
        float width = canvas.getWidth() / this.f7458d.width();
        if (aVar2 != null) {
            b(canvas, width, width, aVar2);
        }
        int width2 = cVar.getWidth();
        int height = cVar.getHeight();
        Rect rect2 = new Rect(0, 0, width2, height);
        int i5 = (int) (width2 * width);
        int i6 = (int) (height * width);
        int b10 = (int) (cVar.b() * width);
        int c6 = (int) (cVar.c() * width);
        Rect rect3 = new Rect(b10, c6, i5 + b10, i6 + c6);
        if (aVar.f2759e == 2) {
            canvas.drawRect(rect3, this.k);
        }
        synchronized (this) {
            Bitmap c8 = c(width2, height);
            cVar.a(width2, height, c8);
            canvas.drawBitmap(c8, rect2, rect3, (Paint) null);
        }
    }

    public final void h(Canvas canvas, ba.c cVar, ba.a aVar, ba.a aVar2) {
        float f2;
        float f10;
        float f11;
        float f12;
        int width = this.f7457c.getWidth();
        int height = this.f7457c.getHeight();
        float f13 = width;
        float f14 = height;
        int width2 = cVar.getWidth();
        int height2 = cVar.getHeight();
        int b10 = cVar.b();
        int c6 = cVar.c();
        if (f13 > canvas.getWidth() || f14 > canvas.getHeight()) {
            int min = Math.min(canvas.getWidth(), width);
            int min2 = Math.min(canvas.getHeight(), height);
            float f15 = f13 / f14;
            if (min > min2) {
                f10 = min;
                f2 = f10 / f15;
            } else {
                f2 = min2;
                f10 = f2 * f15;
            }
            f11 = f10 / f13;
            f12 = f2 / f14;
            width2 = (int) Math.ceil(cVar.getWidth() * f11);
            height2 = (int) Math.ceil(cVar.getHeight() * f12);
            b10 = (int) Math.ceil(cVar.b() * f11);
            c6 = (int) Math.ceil(cVar.c() * f12);
        } else {
            f11 = 1.0f;
            f12 = 1.0f;
        }
        Rect rect = new Rect(0, 0, width2, height2);
        Rect rect2 = new Rect(b10, c6, b10 + width2, c6 + height2);
        if (aVar2 != null) {
            b(canvas, f11, f12, aVar2);
        }
        if (aVar.f2759e == 2) {
            canvas.drawRect(rect2, this.k);
        }
        synchronized (this) {
            Bitmap c8 = c(width2, height2);
            cVar.a(width2, height2, c8);
            canvas.drawBitmap(c8, rect, rect2, (Paint) null);
        }
    }
}
