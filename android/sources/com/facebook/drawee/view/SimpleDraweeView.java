package com.facebook.drawee.view;

import android.content.Context;
import android.content.res.TypedArray;
import android.net.Uri;
import android.util.AttributeSet;
import com.facebook.common.internal.Supplier;
import com.facebook.drawee.backends.pipeline.PipelineDraweeControllerBuilder;
import com.facebook.drawee.controller.AbstractDraweeControllerBuilder;
import com.facebook.imagepipeline.common.RotationOptions;
import com.facebook.imagepipeline.request.ImageRequest;
import com.facebook.imagepipeline.request.ImageRequestBuilder;
import l9.b;
import o8.h;
import ta.a;

@Deprecated
/* loaded from: classes3.dex */
public class SimpleDraweeView extends b {
    private static Supplier sDraweecontrollerbuildersupplier;
    private AbstractDraweeControllerBuilder mControllerBuilder;

    public SimpleDraweeView(Context context) {
        super(context);
        inflateHierarchy(context, null);
        c(context, null);
    }

    public static void initialize(Supplier supplier) {
        sDraweecontrollerbuildersupplier = supplier;
    }

    public static void shutDown() {
        sDraweecontrollerbuildersupplier = null;
    }

    public final void c(Context context, AttributeSet attributeSet) {
        int resourceId;
        try {
            a.D();
            if (isInEditMode()) {
                getTopLevelDrawable().setVisible(true, false);
                getTopLevelDrawable().invalidateSelf();
            } else {
                h.d(sDraweecontrollerbuildersupplier, "SimpleDraweeView was not initialized!");
                this.mControllerBuilder = (AbstractDraweeControllerBuilder) sDraweecontrollerbuildersupplier.get();
            }
            if (attributeSet != null) {
                TypedArray obtainStyledAttributes = context.obtainStyledAttributes(attributeSet, c9.a.f3362b);
                try {
                    if (obtainStyledAttributes.hasValue(1)) {
                        setImageURI(Uri.parse(obtainStyledAttributes.getString(1)), (Object) null);
                    } else if (obtainStyledAttributes.hasValue(0) && (resourceId = obtainStyledAttributes.getResourceId(0, -1)) != -1) {
                        if (isInEditMode()) {
                            setImageResource(resourceId);
                        } else {
                            setActualImageResource(resourceId);
                        }
                    }
                    obtainStyledAttributes.recycle();
                } catch (Throwable th2) {
                    obtainStyledAttributes.recycle();
                    throw th2;
                }
            }
            a.D();
        } catch (Throwable th3) {
            a.D();
            throw th3;
        }
    }

    public AbstractDraweeControllerBuilder getControllerBuilder() {
        return this.mControllerBuilder;
    }

    public void setActualImageResource(int i5) {
        setActualImageResource(i5, null);
    }

    public void setImageRequest(ImageRequest imageRequest) {
        AbstractDraweeControllerBuilder abstractDraweeControllerBuilder = this.mControllerBuilder;
        abstractDraweeControllerBuilder.f4415b = imageRequest;
        abstractDraweeControllerBuilder.f4420g = getController();
        setController(abstractDraweeControllerBuilder.a());
    }

    @Override // l9.a, android.widget.ImageView
    public void setImageResource(int i5) {
        super.setImageResource(i5);
    }

    @Override // l9.a, android.widget.ImageView
    public void setImageURI(Uri uri) {
        setImageURI(uri, (Object) null);
    }

    public void setActualImageResource(int i5, Object obj) {
        Uri uri = w8.a.a;
        setImageURI(new Uri.Builder().scheme("res").path(String.valueOf(i5)).build(), obj);
    }

    public void setImageURI(String str) {
        setImageURI(str, (Object) null);
    }

    public void setImageURI(Uri uri, Object obj) {
        AbstractDraweeControllerBuilder abstractDraweeControllerBuilder = this.mControllerBuilder;
        abstractDraweeControllerBuilder.a = obj;
        PipelineDraweeControllerBuilder pipelineDraweeControllerBuilder = (PipelineDraweeControllerBuilder) abstractDraweeControllerBuilder;
        if (uri == null) {
            pipelineDraweeControllerBuilder.f4415b = null;
        } else {
            ImageRequestBuilder d6 = ImageRequestBuilder.d(uri);
            d6.f4859e = RotationOptions.f4587e;
            pipelineDraweeControllerBuilder.f4415b = d6.a();
        }
        pipelineDraweeControllerBuilder.f4420g = getController();
        setController(pipelineDraweeControllerBuilder.a());
    }

    public SimpleDraweeView(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
        inflateHierarchy(context, attributeSet);
        c(context, attributeSet);
    }

    public void setImageURI(String str, Object obj) {
        setImageURI(str != null ? Uri.parse(str) : null, obj);
    }
}
