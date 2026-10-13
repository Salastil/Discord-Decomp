package n9;

import android.graphics.Bitmap;
import android.graphics.Canvas;
import android.graphics.Matrix;
import android.graphics.Paint;
import android.graphics.Path;
import android.graphics.Rect;
import com.facebook.common.references.CloseableReference;
import com.facebook.imagepipeline.bitmaps.PlatformBitmapFactory;
import kotlin.jvm.internal.Intrinsics;
import p9.c;
import qd.f;

/* loaded from: classes3.dex */
public final class a {
    public final PlatformBitmapFactory a;

    /* renamed from: b, reason: collision with root package name */
    public final b f14961b;

    /* renamed from: c, reason: collision with root package name */
    public final f f14962c;

    /* renamed from: d, reason: collision with root package name */
    public final s9.a f14963d;

    /* renamed from: e, reason: collision with root package name */
    public final boolean f14964e;

    /* renamed from: f, reason: collision with root package name */
    public final p9.a f14965f;

    /* renamed from: g, reason: collision with root package name */
    public final c f14966g;

    /* renamed from: h, reason: collision with root package name */
    public final Bitmap.Config f14967h;

    /* renamed from: i, reason: collision with root package name */
    public final Paint f14968i;
    public Rect j;
    public int k;

    /* renamed from: l, reason: collision with root package name */
    public int f14969l;

    public a(PlatformBitmapFactory platformBitmapFactory, b bitmapFrameCache, f animationInformation, s9.a bitmapFrameRenderer, boolean z5, p9.a aVar, c cVar) {
        Intrinsics.checkNotNullParameter(platformBitmapFactory, "platformBitmapFactory");
        Intrinsics.checkNotNullParameter(bitmapFrameCache, "bitmapFrameCache");
        Intrinsics.checkNotNullParameter(animationInformation, "animationInformation");
        Intrinsics.checkNotNullParameter(bitmapFrameRenderer, "bitmapFrameRenderer");
        this.a = platformBitmapFactory;
        this.f14961b = bitmapFrameCache;
        this.f14962c = animationInformation;
        this.f14963d = bitmapFrameRenderer;
        this.f14964e = z5;
        this.f14965f = aVar;
        this.f14966g = cVar;
        this.f14967h = Bitmap.Config.ARGB_8888;
        this.f14968i = new Paint(6);
        new Path();
        new Matrix();
        e();
    }

    public final void a() {
        if (!this.f14964e) {
            this.f14961b.clear();
            return;
        }
        p9.a aVar = this.f14965f;
        if (aVar != null) {
            aVar.d();
        }
    }

    public final boolean b(int i5, CloseableReference closeableReference, Canvas canvas, int i6) {
        if (closeableReference == null || !CloseableReference.t(closeableReference)) {
            return false;
        }
        Object q5 = closeableReference.q();
        Intrinsics.checkNotNullExpressionValue(q5, "get(...)");
        Bitmap bitmap = (Bitmap) q5;
        Rect rect = this.j;
        Paint paint = this.f14968i;
        if (rect == null) {
            canvas.drawBitmap(bitmap, 0.0f, 0.0f, paint);
        } else {
            rect.width();
            rect.height();
            canvas.drawBitmap(bitmap, (Rect) null, rect, paint);
        }
        if (i6 == 3 || this.f14964e) {
            return true;
        }
        this.f14961b.l(i5, closeableReference);
        return true;
    }

    public final boolean c(Canvas canvas, int i5, int i6) {
        CloseableReference j;
        boolean b10;
        CloseableReference closeableReference = null;
        try {
            boolean z5 = false;
            int i10 = 1;
            if (this.f14964e) {
                p9.a aVar = this.f14965f;
                CloseableReference c6 = aVar != null ? aVar.c(i5, canvas.getWidth(), canvas.getHeight()) : null;
                if (c6 != null) {
                    try {
                        if (c6.r()) {
                            Object q5 = c6.q();
                            Intrinsics.checkNotNullExpressionValue(q5, "get(...)");
                            Bitmap bitmap = (Bitmap) q5;
                            Paint paint = this.f14968i;
                            Rect rect = this.j;
                            if (rect == null) {
                                canvas.drawBitmap(bitmap, 0.0f, 0.0f, paint);
                            } else {
                                rect.width();
                                rect.height();
                                canvas.drawBitmap(bitmap, (Rect) null, rect, paint);
                            }
                            c6.close();
                            return true;
                        }
                    } catch (Throwable th2) {
                        th = th2;
                        closeableReference = c6;
                        CloseableReference.l(closeableReference);
                        throw th;
                    }
                }
                if (aVar != null) {
                    aVar.h(canvas.getWidth(), canvas.getHeight());
                }
                CloseableReference.l(c6);
                return false;
            }
            b bVar = this.f14961b;
            if (i6 == 0) {
                j = bVar.j(i5);
                b10 = b(i5, j, canvas, 0);
            } else if (i6 == 1) {
                j = bVar.i();
                if (d(i5, j) && b(i5, j, canvas, 1)) {
                    z5 = true;
                }
                b10 = z5;
                i10 = 2;
            } else {
                if (i6 != 2) {
                    if (i6 == 3) {
                        j = bVar.g();
                        b10 = b(i5, j, canvas, 3);
                        i10 = -1;
                    }
                    return false;
                }
                try {
                    j = this.a.a(this.k, this.f14969l, this.f14967h);
                    if (d(i5, j) && b(i5, j, canvas, 2)) {
                        z5 = true;
                    }
                    b10 = z5;
                    i10 = 3;
                } catch (RuntimeException e9) {
                    p8.a.s(a.class, "Failed to create frame bitmap", e9);
                }
            }
            CloseableReference.l(j);
            return (b10 || i10 == -1) ? b10 : c(canvas, i5, i10);
        } catch (Throwable th3) {
            th = th3;
            CloseableReference.l(closeableReference);
            throw th;
        }
    }

    public final boolean d(int i5, CloseableReference closeableReference) {
        if (closeableReference == null || !closeableReference.r()) {
            return false;
        }
        Object q5 = closeableReference.q();
        Intrinsics.checkNotNullExpressionValue(q5, "get(...)");
        boolean m5 = this.f14963d.m(i5, (Bitmap) q5);
        if (!m5) {
            closeableReference.close();
        }
        return m5;
    }

    public final void e() {
        s9.a aVar = this.f14963d;
        int width = ((da.a) aVar.f17828c).f7457c.getWidth();
        this.k = width;
        if (width == -1) {
            Rect rect = this.j;
            this.k = rect != null ? rect.width() : -1;
        }
        int height = ((da.a) aVar.f17828c).f7457c.getHeight();
        this.f14969l = height;
        if (height == -1) {
            Rect rect2 = this.j;
            this.f14969l = rect2 != null ? rect2.height() : -1;
        }
    }
}
