package eightbitlab.com.blurview;

import android.content.Context;
import android.graphics.Bitmap;
import android.graphics.Canvas;
import android.graphics.Paint;
import android.graphics.RenderEffect;
import android.graphics.RenderNode;
import android.graphics.Shader;
import androidx.core.view.p1;

/* loaded from: classes3.dex */
public final class e implements BlurAlgorithm {

    /* renamed from: b, reason: collision with root package name */
    public int f8121b;

    /* renamed from: c, reason: collision with root package name */
    public int f8122c;

    /* renamed from: e, reason: collision with root package name */
    public f f8124e;

    /* renamed from: f, reason: collision with root package name */
    public Context f8125f;
    public final RenderNode a = p1.g();

    /* renamed from: d, reason: collision with root package name */
    public float f8123d = 1.0f;

    @Override // eightbitlab.com.blurview.BlurAlgorithm
    public final void a() {
        Bitmap.Config config = Bitmap.Config.ARGB_8888;
    }

    @Override // eightbitlab.com.blurview.BlurAlgorithm
    public final void b(Canvas canvas, Bitmap bitmap) {
        if (canvas.isHardwareAccelerated()) {
            canvas.drawRenderNode(this.a);
            return;
        }
        if (this.f8124e == null) {
            this.f8124e = new f(this.f8125f);
        }
        this.f8124e.c(bitmap, this.f8123d);
        canvas.drawBitmap(bitmap, 0.0f, 0.0f, (Paint) this.f8124e.f8127c);
    }

    @Override // eightbitlab.com.blurview.BlurAlgorithm
    public final Bitmap c(Bitmap bitmap, float f2) {
        this.f8123d = f2;
        if (bitmap.getHeight() != this.f8121b || bitmap.getWidth() != this.f8122c) {
            this.f8121b = bitmap.getHeight();
            int width = bitmap.getWidth();
            this.f8122c = width;
            this.a.setPosition(0, 0, width, this.f8121b);
        }
        this.a.beginRecording().drawBitmap(bitmap, 0.0f, 0.0f, (Paint) null);
        this.a.endRecording();
        this.a.setRenderEffect(RenderEffect.createBlurEffect(f2, f2, Shader.TileMode.MIRROR));
        return bitmap;
    }

    @Override // eightbitlab.com.blurview.BlurAlgorithm
    public final void destroy() {
        this.a.discardDisplayList();
        f fVar = this.f8124e;
        if (fVar != null) {
            fVar.destroy();
        }
    }
}
