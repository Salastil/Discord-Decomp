package x4;

import af.h0;
import android.content.res.Resources;
import android.graphics.Bitmap;
import android.graphics.Path;
import android.graphics.PathMeasure;
import java.io.Closeable;

/* loaded from: classes.dex */
public abstract class h {
    public static final h0 a = new h0(7);

    /* renamed from: b, reason: collision with root package name */
    public static final h0 f20284b = new h0(8);

    /* renamed from: c, reason: collision with root package name */
    public static final h0 f20285c = new h0(9);

    /* renamed from: d, reason: collision with root package name */
    public static final h0 f20286d = new h0(10);

    /* renamed from: e, reason: collision with root package name */
    public static final float f20287e = (float) (Math.sqrt(2.0d) / 2.0d);

    public static void a(Path path, float f2, float f10, float f11) {
        PathMeasure pathMeasure = (PathMeasure) a.get();
        Path path2 = (Path) f20284b.get();
        Path path3 = (Path) f20285c.get();
        pathMeasure.setPath(path, false);
        float length = pathMeasure.getLength();
        if (!(f2 == 1.0f && f10 == 0.0f) && length >= 1.0f && Math.abs((f10 - f2) - 1.0f) >= 0.01d) {
            float f12 = f2 * length;
            float f13 = f10 * length;
            float f14 = f11 * length;
            float min = Math.min(f12, f13) + f14;
            float max = Math.max(f12, f13) + f14;
            if (min >= length && max >= length) {
                min = g.c(min, length);
                max = g.c(max, length);
            }
            if (min < 0.0f) {
                min = g.c(min, length);
            }
            if (max < 0.0f) {
                max = g.c(max, length);
            }
            if (min == max) {
                path.reset();
                return;
            }
            if (min >= max) {
                min -= length;
            }
            path2.reset();
            pathMeasure.getSegment(min, max, path2, true);
            if (max > length) {
                path3.reset();
                pathMeasure.getSegment(0.0f, max % length, path3, true);
                path2.addPath(path3);
            } else if (min < 0.0f) {
                path3.reset();
                pathMeasure.getSegment(min + length, length, path3, true);
                path2.addPath(path3);
            }
            path.set(path2);
        }
    }

    public static void b(Closeable closeable) {
        try {
            closeable.close();
        } catch (RuntimeException e9) {
            throw e9;
        } catch (Exception unused) {
        }
    }

    public static float c() {
        return Resources.getSystem().getDisplayMetrics().density;
    }

    public static Bitmap d(int i5, int i6, Bitmap bitmap) {
        if (bitmap.getWidth() == i5 && bitmap.getHeight() == i6) {
            return bitmap;
        }
        Bitmap createScaledBitmap = Bitmap.createScaledBitmap(bitmap, i5, i6, true);
        bitmap.recycle();
        return createScaledBitmap;
    }
}
