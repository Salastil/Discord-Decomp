package com.facebook.imagepipeline.producers;

import android.os.SystemClock;
import com.facebook.imagepipeline.image.EncodedImage;
import java.util.concurrent.Executor;
import java.util.concurrent.Executors;
import java.util.concurrent.TimeUnit;

/* loaded from: classes3.dex */
public final class h0 {
    public final Executor a;

    /* renamed from: b, reason: collision with root package name */
    public final g0 f4737b;

    /* renamed from: c, reason: collision with root package name */
    public final f0 f4738c = new f0(this, 0);

    /* renamed from: d, reason: collision with root package name */
    public final f0 f4739d = new f0(this, 1);

    /* renamed from: e, reason: collision with root package name */
    public EncodedImage f4740e = null;

    /* renamed from: f, reason: collision with root package name */
    public int f4741f = 0;

    /* renamed from: g, reason: collision with root package name */
    public int f4742g = 1;

    /* renamed from: h, reason: collision with root package name */
    public long f4743h = 0;

    /* renamed from: i, reason: collision with root package name */
    public long f4744i = 0;

    public h0(Executor executor, g0 g0Var) {
        this.a = executor;
        this.f4737b = g0Var;
    }

    public static boolean d(EncodedImage encodedImage, int i5) {
        return c.d(i5) || c.k(i5, 4) || EncodedImage.isValid(encodedImage);
    }

    public final void a(long j) {
        f0 f0Var = this.f4739d;
        if (j <= 0) {
            f0Var.run();
            return;
        }
        if (m3.n.f14371b == null) {
            m3.n.f14371b = Executors.newSingleThreadScheduledExecutor();
        }
        m3.n.f14371b.schedule(f0Var, j, TimeUnit.MILLISECONDS);
    }

    public final void b() {
        boolean z5;
        long j;
        long uptimeMillis = SystemClock.uptimeMillis();
        synchronized (this) {
            try {
                z5 = true;
                if (this.f4742g == 4) {
                    j = Math.max(this.f4744i + 100, uptimeMillis);
                    this.f4743h = uptimeMillis;
                    this.f4742g = 2;
                } else {
                    this.f4742g = 1;
                    j = 0;
                    z5 = false;
                }
            } catch (Throwable th2) {
                throw th2;
            }
        }
        if (z5) {
            a(j - uptimeMillis);
        }
    }

    public final void c() {
        boolean z5;
        long j;
        long uptimeMillis = SystemClock.uptimeMillis();
        synchronized (this) {
            try {
                if (d(this.f4740e, this.f4741f)) {
                    int b10 = f0.e.b(this.f4742g);
                    if (b10 != 0) {
                        if (b10 == 2) {
                            this.f4742g = 4;
                        }
                        j = 0;
                        z5 = false;
                    } else {
                        long max = Math.max(this.f4744i + 100, uptimeMillis);
                        this.f4743h = uptimeMillis;
                        this.f4742g = 2;
                        z5 = true;
                        j = max;
                    }
                    if (z5) {
                        a(j - uptimeMillis);
                    }
                }
            } catch (Throwable th2) {
                throw th2;
            }
        }
    }

    public final boolean e(EncodedImage encodedImage, int i5) {
        EncodedImage encodedImage2;
        if (!d(encodedImage, i5)) {
            return false;
        }
        synchronized (this) {
            encodedImage2 = this.f4740e;
            this.f4740e = EncodedImage.cloneOrNull(encodedImage);
            this.f4741f = i5;
        }
        EncodedImage.closeSafely(encodedImage2);
        return true;
    }
}
