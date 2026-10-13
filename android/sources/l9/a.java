package l9;

import android.content.Context;
import android.content.res.ColorStateList;
import android.graphics.Bitmap;
import android.graphics.drawable.Drawable;
import android.net.Uri;
import android.util.AttributeSet;
import android.view.MotionEvent;
import android.view.View;
import android.view.ViewGroup;
import android.widget.ImageView;
import com.facebook.drawee.interfaces.DraweeController;
import com.facebook.drawee.interfaces.DraweeHierarchy;
import com.facebook.drawee.view.AspectRatioMeasure$Spec;
import com.facebook.drawee.view.DraweeHolder;
import f9.c;
import k2.r;
import o8.h;

/* loaded from: classes3.dex */
public abstract class a extends ImageView {
    private static boolean sGlobalLegacyVisibilityHandlingEnabled = false;
    private float mAspectRatio;
    private DraweeHolder mDraweeHolder;
    private Object mExtraData;
    private boolean mInitialised;
    private boolean mLegacyVisibilityHandlingEnabled;
    private final AspectRatioMeasure$Spec mMeasureSpec;

    public a(Context context) {
        super(context);
        this.mMeasureSpec = new AspectRatioMeasure$Spec();
        this.mAspectRatio = 0.0f;
        this.mInitialised = false;
        this.mLegacyVisibilityHandlingEnabled = false;
        this.mExtraData = null;
        a(context);
    }

    public static void setGlobalLegacyVisibilityHandlingEnabled(boolean z5) {
        sGlobalLegacyVisibilityHandlingEnabled = z5;
    }

    public final void a(Context context) {
        try {
            ta.a.D();
            if (this.mInitialised) {
                ta.a.D();
                return;
            }
            boolean z5 = true;
            this.mInitialised = true;
            this.mDraweeHolder = new DraweeHolder(null);
            ColorStateList imageTintList = getImageTintList();
            if (imageTintList == null) {
                ta.a.D();
                return;
            }
            setColorFilter(imageTintList.getDefaultColor());
            if (!sGlobalLegacyVisibilityHandlingEnabled || context.getApplicationInfo().targetSdkVersion < 24) {
                z5 = false;
            }
            this.mLegacyVisibilityHandlingEnabled = z5;
            ta.a.D();
        } catch (Throwable th2) {
            ta.a.D();
            throw th2;
        }
    }

    public final void b() {
        Drawable drawable;
        if (!this.mLegacyVisibilityHandlingEnabled || (drawable = getDrawable()) == null) {
            return;
        }
        drawable.setVisible(getVisibility() == 0, false);
    }

    public void doAttach() {
        DraweeHolder draweeHolder = this.mDraweeHolder;
        draweeHolder.f4507f.a(c.L);
        draweeHolder.f4503b = true;
        draweeHolder.b();
    }

    public void doDetach() {
        DraweeHolder draweeHolder = this.mDraweeHolder;
        draweeHolder.f4507f.a(c.M);
        draweeHolder.f4503b = false;
        draweeHolder.b();
    }

    public float getAspectRatio() {
        return this.mAspectRatio;
    }

    public DraweeController getController() {
        return this.mDraweeHolder.f4506e;
    }

    public Object getExtraData() {
        return this.mExtraData;
    }

    public DraweeHierarchy getHierarchy() {
        DraweeHierarchy draweeHierarchy = this.mDraweeHolder.f4505d;
        draweeHierarchy.getClass();
        return draweeHierarchy;
    }

    public Drawable getTopLevelDrawable() {
        return this.mDraweeHolder.c();
    }

    public boolean hasController() {
        return this.mDraweeHolder.f4506e != null;
    }

    public boolean hasHierarchy() {
        return this.mDraweeHolder.f4505d != null;
    }

    public void onAttach() {
        doAttach();
    }

    @Override // android.widget.ImageView, android.view.View
    public void onAttachedToWindow() {
        super.onAttachedToWindow();
        b();
        onAttach();
    }

    public void onDetach() {
        doDetach();
    }

    @Override // android.widget.ImageView, android.view.View
    public void onDetachedFromWindow() {
        super.onDetachedFromWindow();
        b();
        onDetach();
    }

    @Override // android.view.View
    public void onFinishTemporaryDetach() {
        super.onFinishTemporaryDetach();
        b();
        onAttach();
    }

    @Override // android.widget.ImageView, android.view.View
    public void onMeasure(int i5, int i6) {
        AspectRatioMeasure$Spec aspectRatioMeasure$Spec = this.mMeasureSpec;
        aspectRatioMeasure$Spec.a = i5;
        aspectRatioMeasure$Spec.f4502b = i6;
        float f2 = this.mAspectRatio;
        ViewGroup.LayoutParams layoutParams = getLayoutParams();
        int paddingRight = getPaddingRight() + getPaddingLeft();
        int paddingBottom = getPaddingBottom() + getPaddingTop();
        if (f2 > 0.0f && layoutParams != null) {
            int i10 = layoutParams.height;
            if (i10 == 0 || i10 == -2) {
                aspectRatioMeasure$Spec.f4502b = View.MeasureSpec.makeMeasureSpec(View.resolveSize((int) (((View.MeasureSpec.getSize(aspectRatioMeasure$Spec.a) - paddingRight) / f2) + paddingBottom), aspectRatioMeasure$Spec.f4502b), 1073741824);
            } else {
                int i11 = layoutParams.width;
                if (i11 == 0 || i11 == -2) {
                    aspectRatioMeasure$Spec.a = View.MeasureSpec.makeMeasureSpec(View.resolveSize((int) (((View.MeasureSpec.getSize(aspectRatioMeasure$Spec.f4502b) - paddingBottom) * f2) + paddingRight), aspectRatioMeasure$Spec.a), 1073741824);
                }
            }
        }
        AspectRatioMeasure$Spec aspectRatioMeasure$Spec2 = this.mMeasureSpec;
        super.onMeasure(aspectRatioMeasure$Spec2.a, aspectRatioMeasure$Spec2.f4502b);
    }

    @Override // android.view.View
    public void onStartTemporaryDetach() {
        super.onStartTemporaryDetach();
        b();
        onDetach();
    }

    @Override // android.view.View
    public boolean onTouchEvent(MotionEvent motionEvent) {
        DraweeHolder draweeHolder = this.mDraweeHolder;
        if (!draweeHolder.d() ? false : draweeHolder.f4506e.onTouchEvent(motionEvent)) {
            return true;
        }
        return super.onTouchEvent(motionEvent);
    }

    @Override // android.view.View
    public void onVisibilityChanged(View view, int i5) {
        super.onVisibilityChanged(view, i5);
        b();
    }

    public void resetActualImage() {
        setController(null);
    }

    public void setAspectRatio(float f2) {
        if (f2 == this.mAspectRatio) {
            return;
        }
        this.mAspectRatio = f2;
        requestLayout();
    }

    public void setController(DraweeController draweeController) {
        this.mDraweeHolder.f(draweeController);
        super.setImageDrawable(this.mDraweeHolder.c());
    }

    public void setExtraData(Object obj) {
        this.mExtraData = obj;
    }

    public void setHierarchy(DraweeHierarchy draweeHierarchy) {
        this.mDraweeHolder.g(draweeHierarchy);
        super.setImageDrawable(this.mDraweeHolder.c());
    }

    @Override // android.widget.ImageView
    @Deprecated
    public void setImageBitmap(Bitmap bitmap) {
        a(getContext());
        this.mDraweeHolder.f(null);
        super.setImageBitmap(bitmap);
    }

    @Override // android.widget.ImageView
    @Deprecated
    public void setImageDrawable(Drawable drawable) {
        a(getContext());
        this.mDraweeHolder.f(null);
        super.setImageDrawable(drawable);
    }

    @Override // android.widget.ImageView
    @Deprecated
    public void setImageResource(int i5) {
        a(getContext());
        this.mDraweeHolder.f(null);
        super.setImageResource(i5);
    }

    @Override // android.widget.ImageView
    @Deprecated
    public void setImageURI(Uri uri) {
        a(getContext());
        this.mDraweeHolder.f(null);
        super.setImageURI(uri);
    }

    public void setLegacyVisibilityHandlingEnabled(boolean z5) {
        this.mLegacyVisibilityHandlingEnabled = z5;
    }

    @Override // android.view.View
    public String toString() {
        r j = h.j(this);
        DraweeHolder draweeHolder = this.mDraweeHolder;
        j.h(draweeHolder != null ? draweeHolder.toString() : "<no holder set>", "holder");
        return j.toString();
    }

    public a(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
        this.mMeasureSpec = new AspectRatioMeasure$Spec();
        this.mAspectRatio = 0.0f;
        this.mInitialised = false;
        this.mLegacyVisibilityHandlingEnabled = false;
        this.mExtraData = null;
        a(context);
    }
}
