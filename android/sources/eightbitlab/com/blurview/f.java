package eightbitlab.com.blurview;

import android.content.Context;
import android.graphics.Bitmap;
import android.graphics.Canvas;
import android.graphics.Paint;
import android.renderscript.Allocation;
import android.renderscript.Element;
import android.renderscript.RenderScript;
import android.renderscript.ScriptIntrinsicBlur;
import android.widget.FrameLayout;
import com.facebook.react.runtime.r;
import com.google.android.material.bottomsheet.BottomSheetBehavior;
import kotlin.jvm.internal.Intrinsics;
import yo.j;

/* loaded from: classes3.dex */
public final class f implements BlurAlgorithm {
    public int a;

    /* renamed from: b, reason: collision with root package name */
    public int f8126b;

    /* renamed from: c, reason: collision with root package name */
    public final Object f8127c;

    /* renamed from: d, reason: collision with root package name */
    public final Object f8128d;

    /* renamed from: e, reason: collision with root package name */
    public final Object f8129e;

    /* renamed from: f, reason: collision with root package name */
    public Object f8130f;

    public f(FrameLayout sheetView, r rVar) {
        Intrinsics.checkNotNullParameter(sheetView, "sheetView");
        this.f8127c = sheetView;
        this.f8128d = rVar;
        BottomSheetBehavior D = BottomSheetBehavior.D(sheetView);
        Intrinsics.checkNotNullExpressionValue(D, "from(...)");
        this.f8129e = D;
        this.a = 1;
        this.f8126b = -1;
        this.f8130f = new com.swmansion.rnscreens.r(4, this);
        D.N(true);
    }

    public static int d(int i5, int i6) {
        if (i5 == -1) {
            i5 = i6 - 1;
        }
        int d6 = j.d(i5, 0, i6 - 1);
        if (i6 != 1) {
            if (i6 != 2) {
                if (i6 != 3 || d6 == 0) {
                    return 4;
                }
                if (d6 == 1) {
                    return 6;
                }
            } else if (d6 == 0) {
                return 4;
            }
        }
        return 3;
    }

    @Override // eightbitlab.com.blurview.BlurAlgorithm
    public void a() {
        Bitmap.Config config = Bitmap.Config.ARGB_8888;
    }

    @Override // eightbitlab.com.blurview.BlurAlgorithm
    public void b(Canvas canvas, Bitmap bitmap) {
        canvas.drawBitmap(bitmap, 0.0f, 0.0f, (Paint) this.f8127c);
    }

    @Override // eightbitlab.com.blurview.BlurAlgorithm
    public Bitmap c(Bitmap bitmap, float f2) {
        ScriptIntrinsicBlur scriptIntrinsicBlur = (ScriptIntrinsicBlur) this.f8129e;
        RenderScript renderScript = (RenderScript) this.f8128d;
        Allocation createFromBitmap = Allocation.createFromBitmap(renderScript, bitmap);
        if (bitmap.getHeight() != this.f8126b || bitmap.getWidth() != this.a) {
            Allocation allocation = (Allocation) this.f8130f;
            if (allocation != null) {
                allocation.destroy();
            }
            this.f8130f = Allocation.createTyped(renderScript, createFromBitmap.getType());
            this.a = bitmap.getWidth();
            this.f8126b = bitmap.getHeight();
        }
        scriptIntrinsicBlur.setRadius(f2);
        scriptIntrinsicBlur.setInput(createFromBitmap);
        scriptIntrinsicBlur.forEach((Allocation) this.f8130f);
        ((Allocation) this.f8130f).copyTo(bitmap);
        createFromBitmap.destroy();
        return bitmap;
    }

    @Override // eightbitlab.com.blurview.BlurAlgorithm
    public void destroy() {
        ((ScriptIntrinsicBlur) this.f8129e).destroy();
        ((RenderScript) this.f8128d).destroy();
        Allocation allocation = (Allocation) this.f8130f;
        if (allocation != null) {
            allocation.destroy();
        }
    }

    public f(Context context) {
        this.f8127c = new Paint(2);
        this.a = -1;
        this.f8126b = -1;
        RenderScript create = RenderScript.create(context);
        this.f8128d = create;
        this.f8129e = ScriptIntrinsicBlur.create(create, Element.U8_4(create));
    }
}
