package x0;

import android.app.SharedElementCallback;
import android.content.Context;
import android.graphics.Bitmap;
import android.graphics.Canvas;
import android.graphics.Matrix;
import android.graphics.Rect;
import android.graphics.RectF;
import android.graphics.drawable.BitmapDrawable;
import android.graphics.drawable.Drawable;
import android.os.Bundle;
import android.os.Parcelable;
import android.view.View;
import android.widget.ImageView;
import java.util.List;
import java.util.Map;

/* loaded from: classes.dex */
public final class b extends SharedElementCallback {
    public final androidx.core.app.SharedElementCallback a;

    public b(androidx.core.app.SharedElementCallback sharedElementCallback) {
        this.a = sharedElementCallback;
    }

    @Override // android.app.SharedElementCallback
    public final Parcelable onCaptureSharedElementSnapshot(View view, Matrix matrix, RectF rectF) {
        float f2;
        Parcelable parcelable;
        int round;
        Bitmap bitmap;
        androidx.core.app.SharedElementCallback sharedElementCallback = this.a;
        sharedElementCallback.getClass();
        if (view instanceof ImageView) {
            ImageView imageView = (ImageView) view;
            Drawable drawable = imageView.getDrawable();
            Drawable background = imageView.getBackground();
            if (drawable != null && background == null) {
                int intrinsicWidth = drawable.getIntrinsicWidth();
                int intrinsicHeight = drawable.getIntrinsicHeight();
                if (intrinsicWidth <= 0 || intrinsicHeight <= 0) {
                    f2 = 1048576.0f;
                    parcelable = null;
                    bitmap = null;
                } else {
                    float min = Math.min(1.0f, 1048576.0f / (intrinsicWidth * intrinsicHeight));
                    if ((drawable instanceof BitmapDrawable) && min == 1.0f) {
                        bitmap = ((BitmapDrawable) drawable).getBitmap();
                        f2 = 1048576.0f;
                        parcelable = null;
                    } else {
                        int i5 = (int) (intrinsicWidth * min);
                        int i6 = (int) (intrinsicHeight * min);
                        Bitmap createBitmap = Bitmap.createBitmap(i5, i6, Bitmap.Config.ARGB_8888);
                        Canvas canvas = new Canvas(createBitmap);
                        Rect bounds = drawable.getBounds();
                        int i10 = bounds.left;
                        int i11 = bounds.top;
                        parcelable = null;
                        int i12 = bounds.right;
                        int i13 = bounds.bottom;
                        f2 = 1048576.0f;
                        drawable.setBounds(0, 0, i5, i6);
                        drawable.draw(canvas);
                        drawable.setBounds(i10, i11, i12, i13);
                        bitmap = createBitmap;
                    }
                }
                if (bitmap != null) {
                    Bundle bundle = new Bundle();
                    bundle.putParcelable("sharedElement:snapshot:bitmap", bitmap);
                    bundle.putString("sharedElement:snapshot:imageScaleType", imageView.getScaleType().toString());
                    if (imageView.getScaleType() == ImageView.ScaleType.MATRIX) {
                        float[] fArr = new float[9];
                        imageView.getImageMatrix().getValues(fArr);
                        bundle.putFloatArray("sharedElement:snapshot:imageMatrix", fArr);
                    }
                    return bundle;
                }
                round = Math.round(rectF.width());
                int round2 = Math.round(rectF.height());
                if (round > 0 || round2 <= 0) {
                    return parcelable;
                }
                float min2 = Math.min(1.0f, f2 / (round * round2));
                int i14 = (int) (round * min2);
                int i15 = (int) (round2 * min2);
                if (sharedElementCallback.a == null) {
                    sharedElementCallback.a = new Matrix();
                }
                sharedElementCallback.a.set(matrix);
                sharedElementCallback.a.postTranslate(-rectF.left, -rectF.top);
                sharedElementCallback.a.postScale(min2, min2);
                Bitmap createBitmap2 = Bitmap.createBitmap(i14, i15, Bitmap.Config.ARGB_8888);
                Canvas canvas2 = new Canvas(createBitmap2);
                canvas2.concat(sharedElementCallback.a);
                view.draw(canvas2);
                return createBitmap2;
            }
        }
        f2 = 1048576.0f;
        parcelable = null;
        round = Math.round(rectF.width());
        int round22 = Math.round(rectF.height());
        if (round > 0) {
        }
        return parcelable;
    }

    @Override // android.app.SharedElementCallback
    public final View onCreateSnapshotView(Context context, Parcelable parcelable) {
        this.a.getClass();
        if (!(parcelable instanceof Bundle)) {
            if (!(parcelable instanceof Bitmap)) {
                return null;
            }
            ImageView imageView = new ImageView(context);
            imageView.setImageBitmap((Bitmap) parcelable);
            return imageView;
        }
        Bundle bundle = (Bundle) parcelable;
        Bitmap bitmap = (Bitmap) bundle.getParcelable("sharedElement:snapshot:bitmap");
        if (bitmap == null) {
            return null;
        }
        ImageView imageView2 = new ImageView(context);
        imageView2.setImageBitmap(bitmap);
        imageView2.setScaleType(ImageView.ScaleType.valueOf(bundle.getString("sharedElement:snapshot:imageScaleType")));
        if (imageView2.getScaleType() == ImageView.ScaleType.MATRIX) {
            float[] floatArray = bundle.getFloatArray("sharedElement:snapshot:imageMatrix");
            Matrix matrix = new Matrix();
            matrix.setValues(floatArray);
            imageView2.setImageMatrix(matrix);
        }
        return imageView2;
    }

    @Override // android.app.SharedElementCallback
    public final void onMapSharedElements(List list, Map map) {
        this.a.getClass();
    }

    @Override // android.app.SharedElementCallback
    public final void onRejectSharedElements(List list) {
        this.a.getClass();
    }

    @Override // android.app.SharedElementCallback
    public final void onSharedElementEnd(List list, List list2, List list3) {
        this.a.getClass();
    }

    @Override // android.app.SharedElementCallback
    public final void onSharedElementStart(List list, List list2, List list3) {
        this.a.getClass();
    }

    @Override // android.app.SharedElementCallback
    public final void onSharedElementsArrived(List list, List list2, SharedElementCallback.OnSharedElementsReadyListener onSharedElementsReadyListener) {
        this.a.getClass();
        onSharedElementsReadyListener.onSharedElementsReady();
    }
}
