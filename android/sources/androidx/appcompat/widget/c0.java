package androidx.appcompat.widget;

import android.R;
import android.graphics.Bitmap;
import android.graphics.BitmapShader;
import android.graphics.Shader;
import android.graphics.drawable.AnimationDrawable;
import android.graphics.drawable.BitmapDrawable;
import android.graphics.drawable.ClipDrawable;
import android.graphics.drawable.Drawable;
import android.graphics.drawable.LayerDrawable;
import android.graphics.drawable.ShapeDrawable;
import android.graphics.drawable.shapes.RoundRectShape;
import android.util.AttributeSet;
import android.widget.AbsSeekBar;

/* loaded from: classes.dex */
public class c0 {

    /* renamed from: c, reason: collision with root package name */
    public static final int[] f935c = {R.attr.indeterminateDrawable, R.attr.progressDrawable};
    public final AbsSeekBar a;

    /* renamed from: b, reason: collision with root package name */
    public Bitmap f936b;

    public c0(AbsSeekBar absSeekBar) {
        this.a = absSeekBar;
    }

    public void a(AttributeSet attributeSet, int i5) {
        AbsSeekBar absSeekBar = this.a;
        e4.m b02 = e4.m.b0(absSeekBar.getContext(), attributeSet, f935c, i5);
        Drawable V = b02.V(0);
        if (V != null) {
            if (V instanceof AnimationDrawable) {
                AnimationDrawable animationDrawable = (AnimationDrawable) V;
                int numberOfFrames = animationDrawable.getNumberOfFrames();
                AnimationDrawable animationDrawable2 = new AnimationDrawable();
                animationDrawable2.setOneShot(animationDrawable.isOneShot());
                for (int i6 = 0; i6 < numberOfFrames; i6++) {
                    Drawable b10 = b(animationDrawable.getFrame(i6), true);
                    b10.setLevel(10000);
                    animationDrawable2.addFrame(b10, animationDrawable.getDuration(i6));
                }
                animationDrawable2.setLevel(10000);
                V = animationDrawable2;
            }
            absSeekBar.setIndeterminateDrawable(V);
        }
        Drawable V2 = b02.V(1);
        if (V2 != null) {
            absSeekBar.setProgressDrawable(b(V2, false));
        }
        b02.e0();
    }

    /* JADX WARN: Multi-variable type inference failed */
    public final Drawable b(Drawable drawable, boolean z5) {
        if (drawable instanceof c1.b) {
            ((c1.c) ((c1.b) drawable)).getClass();
        } else {
            if (drawable instanceof LayerDrawable) {
                LayerDrawable layerDrawable = (LayerDrawable) drawable;
                int numberOfLayers = layerDrawable.getNumberOfLayers();
                Drawable[] drawableArr = new Drawable[numberOfLayers];
                for (int i5 = 0; i5 < numberOfLayers; i5++) {
                    int id2 = layerDrawable.getId(i5);
                    drawableArr[i5] = b(layerDrawable.getDrawable(i5), id2 == 16908301 || id2 == 16908303);
                }
                LayerDrawable layerDrawable2 = new LayerDrawable(drawableArr);
                for (int i6 = 0; i6 < numberOfLayers; i6++) {
                    layerDrawable2.setId(i6, layerDrawable.getId(i6));
                    layerDrawable2.setLayerGravity(i6, layerDrawable.getLayerGravity(i6));
                    layerDrawable2.setLayerWidth(i6, layerDrawable.getLayerWidth(i6));
                    layerDrawable2.setLayerHeight(i6, layerDrawable.getLayerHeight(i6));
                    layerDrawable2.setLayerInsetLeft(i6, layerDrawable.getLayerInsetLeft(i6));
                    layerDrawable2.setLayerInsetRight(i6, layerDrawable.getLayerInsetRight(i6));
                    layerDrawable2.setLayerInsetTop(i6, layerDrawable.getLayerInsetTop(i6));
                    layerDrawable2.setLayerInsetBottom(i6, layerDrawable.getLayerInsetBottom(i6));
                    layerDrawable2.setLayerInsetStart(i6, layerDrawable.getLayerInsetStart(i6));
                    layerDrawable2.setLayerInsetEnd(i6, layerDrawable.getLayerInsetEnd(i6));
                }
                return layerDrawable2;
            }
            if (drawable instanceof BitmapDrawable) {
                BitmapDrawable bitmapDrawable = (BitmapDrawable) drawable;
                Bitmap bitmap = bitmapDrawable.getBitmap();
                if (this.f936b == null) {
                    this.f936b = bitmap;
                }
                ShapeDrawable shapeDrawable = new ShapeDrawable(new RoundRectShape(new float[]{5.0f, 5.0f, 5.0f, 5.0f, 5.0f, 5.0f, 5.0f, 5.0f}, null, null));
                shapeDrawable.getPaint().setShader(new BitmapShader(bitmap, Shader.TileMode.REPEAT, Shader.TileMode.CLAMP));
                shapeDrawable.getPaint().setColorFilter(bitmapDrawable.getPaint().getColorFilter());
                return z5 ? new ClipDrawable(shapeDrawable, 3, 1) : shapeDrawable;
            }
        }
        return drawable;
    }
}
