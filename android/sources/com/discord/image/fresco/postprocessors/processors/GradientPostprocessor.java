package com.discord.image.fresco.postprocessors.processors;

import android.graphics.Bitmap;
import android.graphics.Canvas;
import android.graphics.LinearGradient;
import android.graphics.Paint;
import android.graphics.Shader;
import com.discord.image.fresco.postprocessors.PostProcessor;
import com.facebook.imagepipeline.request.BasePostprocessor;
import fo.n;
import kotlin.Metadata;
import kotlin.Pair;
import kotlin.Unit;
import kotlin.jvm.internal.Intrinsics;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u0000 \n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\b\u0000\u0018\u0000 \n2\u00020\u0001:\u0001\nB\u000f\u0012\u0006\u0010\u0002\u001a\u00020\u0003¢\u0006\u0004\b\u0004\u0010\u0005J\u0010\u0010\u0006\u001a\u00020\u00072\u0006\u0010\b\u001a\u00020\tH\u0016R\u000e\u0010\u0002\u001a\u00020\u0003X\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006\u000b"}, d2 = {"Lcom/discord/image/fresco/postprocessors/processors/GradientPostprocessor;", "Lcom/facebook/imagepipeline/request/BasePostprocessor;", "gradient", "Lcom/discord/image/fresco/postprocessors/PostProcessor$Gradient;", "<init>", "(Lcom/discord/image/fresco/postprocessors/PostProcessor$Gradient;)V", "process", "", "bitmap", "Landroid/graphics/Bitmap;", "Companion", "fresco_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final class GradientPostprocessor extends BasePostprocessor {

    @NotNull
    private final PostProcessor.Gradient gradient;

    @Metadata(k = 3, mv = {2, 1, 0}, xi = 48)
    public /* synthetic */ class WhenMappings {
        public static final /* synthetic */ int[] $EnumSwitchMapping$0;

        static {
            int[] iArr = new int[PostProcessor.Gradient.Direction.values().length];
            try {
                iArr[PostProcessor.Gradient.Direction.LeftToRight.ordinal()] = 1;
            } catch (NoSuchFieldError unused) {
            }
            try {
                iArr[PostProcessor.Gradient.Direction.RightToLeft.ordinal()] = 2;
            } catch (NoSuchFieldError unused2) {
            }
            try {
                iArr[PostProcessor.Gradient.Direction.TopToBottom.ordinal()] = 3;
            } catch (NoSuchFieldError unused3) {
            }
            try {
                iArr[PostProcessor.Gradient.Direction.BottomToTop.ordinal()] = 4;
            } catch (NoSuchFieldError unused4) {
            }
            $EnumSwitchMapping$0 = iArr;
        }
    }

    public GradientPostprocessor(@NotNull PostProcessor.Gradient gradient) {
        Intrinsics.checkNotNullParameter(gradient, "gradient");
        this.gradient = gradient;
    }

    @Override // com.facebook.imagepipeline.request.BasePostprocessor
    public void process(@NotNull Bitmap bitmap) {
        Pair pair;
        Pair pair2;
        Intrinsics.checkNotNullParameter(bitmap, "bitmap");
        int i5 = WhenMappings.$EnumSwitchMapping$0[this.gradient.getDirection().ordinal()];
        if (i5 != 1) {
            if (i5 == 2) {
                pair2 = new Pair(new Companion.Point(bitmap.getWidth(), bitmap.getHeight() / 2.0f), new Companion.Point(0.0f, bitmap.getHeight() / 2.0f));
            } else if (i5 == 3) {
                pair = new Pair(new Companion.Point(bitmap.getWidth() / 2.0f, 0.0f), new Companion.Point(bitmap.getWidth() / 2.0f, bitmap.getHeight()));
            } else {
                if (i5 != 4) {
                    throw new n();
                }
                pair2 = new Pair(new Companion.Point(bitmap.getWidth() / 2.0f, bitmap.getHeight()), new Companion.Point(bitmap.getWidth() / 2.0f, 0.0f));
            }
            Companion.Point point = (Companion.Point) pair2.f13474d;
            Companion.Point point2 = (Companion.Point) pair2.f13475e;
            Canvas canvas = new Canvas(bitmap);
            float width = bitmap.getWidth();
            float height = bitmap.getHeight();
            Paint paint = new Paint();
            paint.setShader(new LinearGradient(point.getX(), point.getY(), point2.getX(), point2.getY(), new int[]{this.gradient.getStartColor(), this.gradient.getEndColor()}, new float[]{this.gradient.getStartPosition(), this.gradient.getEndPosition()}, Shader.TileMode.CLAMP));
            Unit unit = Unit.a;
            canvas.drawRect(0.0f, 0.0f, width, height, paint);
        }
        pair = new Pair(new Companion.Point(0.0f, bitmap.getHeight() / 2.0f), new Companion.Point(bitmap.getWidth(), bitmap.getHeight() / 2.0f));
        pair2 = pair;
        Companion.Point point3 = (Companion.Point) pair2.f13474d;
        Companion.Point point22 = (Companion.Point) pair2.f13475e;
        Canvas canvas2 = new Canvas(bitmap);
        float width2 = bitmap.getWidth();
        float height2 = bitmap.getHeight();
        Paint paint2 = new Paint();
        paint2.setShader(new LinearGradient(point3.getX(), point3.getY(), point22.getX(), point22.getY(), new int[]{this.gradient.getStartColor(), this.gradient.getEndColor()}, new float[]{this.gradient.getStartPosition(), this.gradient.getEndPosition()}, Shader.TileMode.CLAMP));
        Unit unit2 = Unit.a;
        canvas2.drawRect(0.0f, 0.0f, width2, height2, paint2);
    }
}
