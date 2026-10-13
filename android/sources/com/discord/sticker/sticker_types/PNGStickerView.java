package com.discord.sticker.sticker_types;

import android.content.Context;
import android.graphics.drawable.Animatable;
import android.graphics.drawable.ShapeDrawable;
import android.graphics.drawable.shapes.OvalShape;
import android.net.Uri;
import com.discord.theme.ThemeManagerKt;
import com.facebook.drawee.backends.pipeline.PipelineDraweeControllerBuilder;
import com.facebook.drawee.drawable.o;
import com.facebook.drawee.generic.GenericDraweeHierarchy;
import com.facebook.drawee.interfaces.DraweeController;
import com.facebook.drawee.view.SimpleDraweeView;
import com.facebook.imagepipeline.common.RotationOptions;
import com.facebook.imagepipeline.request.ImageRequest;
import com.facebook.imagepipeline.request.ImageRequestBuilder;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u00002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000b\n\u0000\n\u0002\u0010\u0002\n\u0000\n\u0002\u0010\u000e\n\u0000\n\u0002\u0010\b\n\u0002\b\u0007\b\u0000\u0018\u00002\u00020\u0001B\u000f\u0012\u0006\u0010\u0002\u001a\u00020\u0003¢\u0006\u0004\b\u0004\u0010\u0005J'\u0010\n\u001a\u00020\u000b2\u0006\u0010\f\u001a\u00020\r2\b\u0010\u000e\u001a\u0004\u0018\u00010\u000f2\b\u0010\u0010\u001a\u0004\u0018\u00010\u000f¢\u0006\u0002\u0010\u0011J/\u0010\u0012\u001a\u00020\u000b2\u0006\u0010\f\u001a\u00020\r2\b\u0010\u000e\u001a\u0004\u0018\u00010\u000f2\b\u0010\u0010\u001a\u0004\u0018\u00010\u000f2\u0006\u0010\u0013\u001a\u00020\t¢\u0006\u0002\u0010\u0014J\b\u0010\u0015\u001a\u00020\u000bH\u0014R\u000e\u0010\u0006\u001a\u00020\u0007X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\b\u001a\u00020\tX\u0082\u000e¢\u0006\u0002\n\u0000¨\u0006\u0016"}, d2 = {"Lcom/discord/sticker/sticker_types/PNGStickerView;", "Lcom/facebook/drawee/view/SimpleDraweeView;", "context", "Landroid/content/Context;", "<init>", "(Landroid/content/Context;)V", "placeholder", "Landroid/graphics/drawable/ShapeDrawable;", "shouldAutoPlayAnimation", "", "loadImage", "", "url", "", "widthDp", "", "heightDp", "(Ljava/lang/String;Ljava/lang/Integer;Ljava/lang/Integer;)V", "loadGifImage", "animate", "(Ljava/lang/String;Ljava/lang/Integer;Ljava/lang/Integer;Z)V", "onAttachedToWindow", "sticker_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final class PNGStickerView extends SimpleDraweeView {

    @NotNull
    private final ShapeDrawable placeholder;
    private boolean shouldAutoPlayAnimation;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public PNGStickerView(@NotNull Context context) {
        super(context);
        Intrinsics.checkNotNullParameter(context, "context");
        ShapeDrawable shapeDrawable = new ShapeDrawable();
        shapeDrawable.setShape(new OvalShape());
        shapeDrawable.getPaint().setColor(ThemeManagerKt.getTheme().getBackgroundModMuted());
        this.placeholder = shapeDrawable;
    }

    public final void loadGifImage(@NotNull String url, Integer widthDp, Integer heightDp, boolean animate) {
        Intrinsics.checkNotNullParameter(url, "url");
        this.shouldAutoPlayAnimation = animate;
        PipelineDraweeControllerBuilder pipelineDraweeControllerBuilder = d9.a.f7432b.get();
        if (url == null || url.isEmpty()) {
            pipelineDraweeControllerBuilder.f4415b = ImageRequest.fromUri(url);
        } else {
            Uri parse = Uri.parse(url);
            if (parse == null) {
                pipelineDraweeControllerBuilder.f4415b = null;
            } else {
                ImageRequestBuilder d6 = ImageRequestBuilder.d(parse);
                d6.f4859e = RotationOptions.f4587e;
                pipelineDraweeControllerBuilder.f4415b = d6.a();
            }
        }
        pipelineDraweeControllerBuilder.f4418e = animate;
        setController(pipelineDraweeControllerBuilder.a());
        setMaxWidth(widthDp != null ? widthDp.intValue() : Integer.MAX_VALUE);
        setMaxHeight(heightDp != null ? heightDp.intValue() : Integer.MAX_VALUE);
    }

    public final void loadImage(@NotNull String url, Integer widthDp, Integer heightDp) {
        Intrinsics.checkNotNullParameter(url, "url");
        this.shouldAutoPlayAnimation = false;
        setImageURI(url);
        ((GenericDraweeHierarchy) getHierarchy()).j(o.f4473f);
        ((GenericDraweeHierarchy) getHierarchy()).k(this.placeholder, 1);
        setMaxWidth(widthDp != null ? widthDp.intValue() : Integer.MAX_VALUE);
        setMaxHeight(heightDp != null ? heightDp.intValue() : Integer.MAX_VALUE);
    }

    @Override // l9.a, android.widget.ImageView, android.view.View
    public void onAttachedToWindow() {
        DraweeController controller;
        Animatable animatable;
        super.onAttachedToWindow();
        if (!this.shouldAutoPlayAnimation || (controller = getController()) == null || (animatable = controller.getAnimatable()) == null) {
            return;
        }
        animatable.start();
    }
}
