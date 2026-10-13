package qa;

import android.graphics.Bitmap;

/* loaded from: classes3.dex */
public final class h extends b implements e {
    public h(r8.c cVar, w wVar, s sVar) {
        super(cVar, wVar, sVar);
        cVar.getClass();
        sVar.getClass();
    }

    @Override // qa.b
    public final Object a(int i5) {
        return Bitmap.createBitmap(1, (int) Math.ceil(i5 / 2.0d), Bitmap.Config.RGB_565);
    }

    @Override // qa.b
    public final void c(Object obj) {
        Bitmap bitmap = (Bitmap) obj;
        bitmap.getClass();
        bitmap.recycle();
    }

    @Override // qa.b
    public final int f(Object obj) {
        Bitmap bitmap = (Bitmap) obj;
        bitmap.getClass();
        return bitmap.getAllocationByteCount();
    }

    @Override // qa.b
    public final Object h(f fVar) {
        Bitmap bitmap = (Bitmap) super.h(fVar);
        if (bitmap != null) {
            bitmap.eraseColor(0);
        }
        return bitmap;
    }

    @Override // qa.b
    public final boolean j(Object obj) {
        Bitmap bitmap = (Bitmap) obj;
        bitmap.getClass();
        return !bitmap.isRecycled() && bitmap.isMutable();
    }

    @Override // qa.b
    public final int e(int i5) {
        return i5;
    }

    @Override // qa.b
    public final int g(int i5) {
        return i5;
    }
}
