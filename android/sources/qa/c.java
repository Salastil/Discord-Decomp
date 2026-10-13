package qa;

import android.graphics.Bitmap;
import com.facebook.imageutils.BitmapUtil;

/* loaded from: classes3.dex */
public final class c {
    public int a;

    /* renamed from: b, reason: collision with root package name */
    public long f16696b;

    /* renamed from: c, reason: collision with root package name */
    public final int f16697c;

    /* renamed from: d, reason: collision with root package name */
    public final int f16698d;

    /* renamed from: e, reason: collision with root package name */
    public final gj.c f16699e;

    public c(int i5, int i6) {
        if (!(i5 > 0)) {
            throw new IllegalArgumentException();
        }
        if (!(i6 > 0)) {
            throw new IllegalArgumentException();
        }
        this.f16697c = i5;
        this.f16698d = i6;
        this.f16699e = new gj.c(27, this);
    }

    public final synchronized void a(Bitmap bitmap) {
        int sizeInBytes = BitmapUtil.getSizeInBytes(bitmap);
        o8.h.b("No bitmaps registered.", this.a > 0);
        long j = sizeInBytes;
        o8.h.c(j <= this.f16696b, "Bitmap size bigger than the total registered size: %d, %d", Integer.valueOf(sizeInBytes), Long.valueOf(this.f16696b));
        this.f16696b -= j;
        this.a--;
    }

    public final synchronized int b() {
        return this.f16698d;
    }
}
