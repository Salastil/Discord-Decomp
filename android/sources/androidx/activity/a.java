package androidx.activity;

import android.os.Looper;
import android.os.SystemClock;
import android.view.View;
import android.view.ViewTreeObserver;
import androidx.activity.ComponentActivity;
import com.google.firebase.messaging.s;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public final class a implements ComponentActivity.ReportFullyDrawnExecutor, ViewTreeObserver.OnDrawListener, Runnable {

    /* renamed from: d, reason: collision with root package name */
    public final long f746d = SystemClock.uptimeMillis() + 10000;

    /* renamed from: e, reason: collision with root package name */
    public Runnable f747e;

    /* renamed from: i, reason: collision with root package name */
    public boolean f748i;

    /* renamed from: v, reason: collision with root package name */
    public final /* synthetic */ ComponentActivity f749v;

    public a(ComponentActivity componentActivity) {
        this.f749v = componentActivity;
    }

    @Override // androidx.activity.ComponentActivity.ReportFullyDrawnExecutor
    public final void R(View view) {
        Intrinsics.checkNotNullParameter(view, "view");
        if (this.f748i) {
            return;
        }
        this.f748i = true;
        view.getViewTreeObserver().addOnDrawListener(this);
    }

    @Override // java.util.concurrent.Executor
    public final void execute(Runnable runnable) {
        Intrinsics.checkNotNullParameter(runnable, "runnable");
        this.f747e = runnable;
        View decorView = this.f749v.getWindow().getDecorView();
        Intrinsics.checkNotNullExpressionValue(decorView, "window.decorView");
        if (!this.f748i) {
            decorView.postOnAnimation(new s(8, this));
        } else if (Intrinsics.areEqual(Looper.myLooper(), Looper.getMainLooper())) {
            decorView.invalidate();
        } else {
            decorView.postInvalidate();
        }
    }

    @Override // androidx.activity.ComponentActivity.ReportFullyDrawnExecutor
    public final void g() {
        ComponentActivity componentActivity = this.f749v;
        componentActivity.getWindow().getDecorView().removeCallbacks(this);
        componentActivity.getWindow().getDecorView().getViewTreeObserver().removeOnDrawListener(this);
    }

    @Override // android.view.ViewTreeObserver.OnDrawListener
    public final void onDraw() {
        boolean z5;
        Runnable runnable = this.f747e;
        if (runnable == null) {
            if (SystemClock.uptimeMillis() > this.f746d) {
                this.f748i = false;
                this.f749v.getWindow().getDecorView().post(this);
                return;
            }
            return;
        }
        runnable.run();
        this.f747e = null;
        FullyDrawnReporter fullyDrawnReporter = this.f749v.getFullyDrawnReporter();
        synchronized (fullyDrawnReporter.f737b) {
            z5 = fullyDrawnReporter.f738c;
        }
        if (z5) {
            this.f748i = false;
            this.f749v.getWindow().getDecorView().post(this);
        }
    }

    @Override // java.lang.Runnable
    public final void run() {
        this.f749v.getWindow().getDecorView().getViewTreeObserver().removeOnDrawListener(this);
    }
}
