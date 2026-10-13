package com.facebook.imagepipeline.producers;

import android.os.SystemClock;
import com.facebook.imagepipeline.image.EncodedImage;

/* loaded from: classes3.dex */
public final class f0 implements Runnable {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f4731d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ h0 f4732e;

    public /* synthetic */ f0(h0 h0Var, int i5) {
        this.f4731d = i5;
        this.f4732e = h0Var;
    }

    @Override // java.lang.Runnable
    public final void run() {
        EncodedImage encodedImage;
        int i5;
        switch (this.f4731d) {
            case 0:
                h0 h0Var = this.f4732e;
                long uptimeMillis = SystemClock.uptimeMillis();
                synchronized (h0Var) {
                    encodedImage = h0Var.f4740e;
                    i5 = h0Var.f4741f;
                    h0Var.f4740e = null;
                    h0Var.f4741f = 0;
                    h0Var.f4742g = 3;
                    h0Var.f4744i = uptimeMillis;
                }
                try {
                    if (h0.d(encodedImage, i5)) {
                        h0Var.f4737b.b(encodedImage, i5);
                    }
                    return;
                } finally {
                    EncodedImage.closeSafely(encodedImage);
                    h0Var.b();
                }
            default:
                h0 h0Var2 = this.f4732e;
                h0Var2.a.execute(h0Var2.f4738c);
                return;
        }
    }
}
