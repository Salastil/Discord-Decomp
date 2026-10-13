package bo;

import android.graphics.Bitmap;
import android.graphics.Canvas;
import android.graphics.Paint;
import android.view.PixelCopy;
import android.view.SurfaceView;
import android.view.View;
import java.util.concurrent.CountDownLatch;

/* loaded from: classes3.dex */
public final class c implements PixelCopy.OnPixelCopyFinishedListener {
    public final /* synthetic */ Canvas a;

    /* renamed from: b, reason: collision with root package name */
    public final /* synthetic */ View f3116b;

    /* renamed from: c, reason: collision with root package name */
    public final /* synthetic */ SurfaceView f3117c;

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ Bitmap f3118d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Paint f3119e;

    /* renamed from: f, reason: collision with root package name */
    public final /* synthetic */ CountDownLatch f3120f;

    public c(f fVar, Canvas canvas, View view, SurfaceView surfaceView, Bitmap bitmap, Paint paint, CountDownLatch countDownLatch) {
        this.a = canvas;
        this.f3116b = view;
        this.f3117c = surfaceView;
        this.f3118d = bitmap;
        this.f3119e = paint;
        this.f3120f = countDownLatch;
    }

    @Override // android.view.PixelCopy.OnPixelCopyFinishedListener
    public final void onPixelCopyFinished(int i5) {
        Canvas canvas = this.a;
        int save = canvas.save();
        f.d(canvas, this.f3116b, this.f3117c);
        Paint paint = this.f3119e;
        Bitmap bitmap = this.f3118d;
        canvas.drawBitmap(bitmap, 0.0f, 0.0f, paint);
        canvas.restoreToCount(save);
        f.h(bitmap);
        this.f3120f.countDown();
    }
}
