package com.facebook.imagepipeline.producers;

/* loaded from: classes3.dex */
public abstract class c implements Consumer {
    public boolean a = false;

    public static boolean d(int i5) {
        return (i5 & 1) == 1;
    }

    public static boolean e(int i5) {
        return !d(i5);
    }

    public static boolean k(int i5, int i6) {
        return (i5 & i6) == i6;
    }

    @Override // com.facebook.imagepipeline.producers.Consumer
    public final synchronized void a() {
        if (this.a) {
            return;
        }
        this.a = true;
        try {
            f();
        } catch (Exception e9) {
            j(e9);
        }
    }

    @Override // com.facebook.imagepipeline.producers.Consumer
    public final synchronized void b(int i5, Object obj) {
        if (this.a) {
            return;
        }
        this.a = d(i5);
        try {
            h(i5, obj);
        } catch (Exception e9) {
            j(e9);
        }
    }

    @Override // com.facebook.imagepipeline.producers.Consumer
    public final synchronized void c(float f2) {
        if (this.a) {
            return;
        }
        try {
            i(f2);
        } catch (Exception e9) {
            j(e9);
        }
    }

    public abstract void f();

    public abstract void g(Throwable th2);

    public abstract void h(int i5, Object obj);

    public abstract void i(float f2);

    public final void j(Exception exc) {
        Class<?> cls = getClass();
        if (p8.a.a.isLoggable(6)) {
            p8.a.a.wtf(cls.getSimpleName(), "unhandled exception", exc);
        }
    }

    @Override // com.facebook.imagepipeline.producers.Consumer
    public final synchronized void onFailure(Throwable th2) {
        if (this.a) {
            return;
        }
        this.a = true;
        try {
            g(th2);
        } catch (Exception e9) {
            j(e9);
        }
    }
}
