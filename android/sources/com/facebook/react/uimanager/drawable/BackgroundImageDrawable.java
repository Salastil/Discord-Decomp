package com.facebook.react.uimanager.drawable;

import android.content.Context;
import android.graphics.Canvas;
import android.graphics.ColorFilter;
import android.graphics.Paint;
import android.graphics.Path;
import android.graphics.Rect;
import android.graphics.RectF;
import android.graphics.drawable.Drawable;
import com.facebook.react.uimanager.FloatUtil;
import com.facebook.react.uimanager.LengthPercentage;
import com.facebook.react.uimanager.LengthPercentageType;
import com.facebook.react.uimanager.PixelUtil;
import com.facebook.react.uimanager.ViewProps;
import com.facebook.react.uimanager.style.BackgroundImageLayer;
import com.facebook.react.uimanager.style.BackgroundPosition;
import com.facebook.react.uimanager.style.BackgroundRepeat;
import com.facebook.react.uimanager.style.BackgroundRepeatKeyword;
import com.facebook.react.uimanager.style.BackgroundSize;
import com.facebook.react.uimanager.style.BorderInsets;
import com.facebook.react.uimanager.style.BorderRadiusStyle;
import com.facebook.react.uimanager.style.ComputedBorderRadius;
import com.facebook.react.uimanager.style.CornerRadii;
import fo.d;
import java.util.List;
import kotlin.Metadata;
import kotlin.Pair;
import kotlin.collections.CollectionsKt;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.SourceDebugExtension;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u0000\u009a\u0001\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u000b\n\u0002\u0010\u000b\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010 \n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\b\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0006\n\u0002\u0010\u0007\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\n\b\u0000\u0018\u00002\u00020\u0001B'\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\n\b\u0002\u0010\u0004\u001a\u0004\u0018\u00010\u0005\u0012\n\b\u0002\u0010\u0006\u001a\u0004\u0018\u00010\u0007¢\u0006\u0004\b\b\u0010\tJ\b\u0010/\u001a\u000200H\u0016J\u0010\u00101\u001a\u0002002\u0006\u00102\u001a\u000203H\u0014J\u0010\u00104\u001a\u0002002\u0006\u00105\u001a\u000206H\u0016J\u0012\u00107\u001a\u0002002\b\u00108\u001a\u0004\u0018\u000109H\u0016J\b\u0010:\u001a\u000206H\u0017J\u0010\u0010;\u001a\u0002002\u0006\u0010<\u001a\u00020=H\u0016J\b\u0010>\u001a\u00020\u0017H\u0002J\u0018\u0010?\u001a\u00020\u00132\u0006\u0010@\u001a\u00020\u00172\u0006\u0010A\u001a\u00020\u0017H\u0002J\b\u0010B\u001a\u000200H\u0002J\u0018\u0010C\u001a\u00020D2\u0006\u0010E\u001a\u00020F2\u0006\u0010G\u001a\u00020DH\u0002JH\u0010H\u001a\u000e\u0012\u0004\u0012\u00020D\u0012\u0004\u0012\u00020D0I2\u0006\u0010J\u001a\u00020D2\u0006\u0010K\u001a\u00020D2\u0006\u0010L\u001a\u00020D2\u0006\u0010M\u001a\u00020D2\b\u0010\"\u001a\u0004\u0018\u00010!2\b\u0010N\u001a\u0004\u0018\u00010)H\u0002J.\u0010O\u001a\u000e\u0012\u0004\u0012\u00020D\u0012\u0004\u0012\u00020D0I2\u0006\u0010P\u001a\u00020D2\u0006\u0010Q\u001a\u00020D2\b\u0010R\u001a\u0004\u0018\u00010%H\u0002R\u000e\u0010\u0002\u001a\u00020\u0003X\u0082\u0004¢\u0006\u0002\n\u0000R\u001c\u0010\u0004\u001a\u0004\u0018\u00010\u0005X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\n\u0010\u000b\"\u0004\b\f\u0010\rR\u001c\u0010\u0006\u001a\u0004\u0018\u00010\u0007X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\u000e\u0010\u000f\"\u0004\b\u0010\u0010\u0011R\u000e\u0010\u0012\u001a\u00020\u0013X\u0082\u000e¢\u0006\u0002\n\u0000R\u0010\u0010\u0014\u001a\u0004\u0018\u00010\u0015X\u0082\u000e¢\u0006\u0002\n\u0000R\u0010\u0010\u0016\u001a\u0004\u0018\u00010\u0017X\u0082\u000e¢\u0006\u0002\n\u0000R\u0010\u0010\u0018\u001a\u0004\u0018\u00010\u0017X\u0082\u000e¢\u0006\u0002\n\u0000R4\u0010\u001c\u001a\n\u0012\u0004\u0012\u00020\u001b\u0018\u00010\u001a2\u000e\u0010\u0019\u001a\n\u0012\u0004\u0012\u00020\u001b\u0018\u00010\u001a@FX\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\u001d\u0010\u001e\"\u0004\b\u001f\u0010 R4\u0010\"\u001a\n\u0012\u0004\u0012\u00020!\u0018\u00010\u001a2\u000e\u0010\u0019\u001a\n\u0012\u0004\u0012\u00020!\u0018\u00010\u001a@FX\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b#\u0010\u001e\"\u0004\b$\u0010 R4\u0010&\u001a\n\u0012\u0004\u0012\u00020%\u0018\u00010\u001a2\u000e\u0010\u0019\u001a\n\u0012\u0004\u0012\u00020%\u0018\u00010\u001a@FX\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b'\u0010\u001e\"\u0004\b(\u0010 R4\u0010*\u001a\n\u0012\u0004\u0012\u00020)\u0018\u00010\u001a2\u000e\u0010\u0019\u001a\n\u0012\u0004\u0012\u00020)\u0018\u00010\u001a@FX\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b+\u0010\u001e\"\u0004\b,\u0010 R\u000e\u0010-\u001a\u00020.X\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006S"}, d2 = {"Lcom/facebook/react/uimanager/drawable/BackgroundImageDrawable;", "Landroid/graphics/drawable/Drawable;", "context", "Landroid/content/Context;", "borderRadius", "Lcom/facebook/react/uimanager/style/BorderRadiusStyle;", "borderInsets", "Lcom/facebook/react/uimanager/style/BorderInsets;", "<init>", "(Landroid/content/Context;Lcom/facebook/react/uimanager/style/BorderRadiusStyle;Lcom/facebook/react/uimanager/style/BorderInsets;)V", "getBorderRadius", "()Lcom/facebook/react/uimanager/style/BorderRadiusStyle;", "setBorderRadius", "(Lcom/facebook/react/uimanager/style/BorderRadiusStyle;)V", "getBorderInsets", "()Lcom/facebook/react/uimanager/style/BorderInsets;", "setBorderInsets", "(Lcom/facebook/react/uimanager/style/BorderInsets;)V", "needUpdatePath", "", "backgroundImageClipPath", "Landroid/graphics/Path;", "backgroundPositioningArea", "Landroid/graphics/RectF;", "backgroundPaintingArea", "value", "", "Lcom/facebook/react/uimanager/style/BackgroundImageLayer;", "backgroundImageLayers", "getBackgroundImageLayers", "()Ljava/util/List;", "setBackgroundImageLayers", "(Ljava/util/List;)V", "Lcom/facebook/react/uimanager/style/BackgroundSize;", "backgroundSize", "getBackgroundSize", "setBackgroundSize", "Lcom/facebook/react/uimanager/style/BackgroundPosition;", "backgroundPosition", "getBackgroundPosition", "setBackgroundPosition", "Lcom/facebook/react/uimanager/style/BackgroundRepeat;", "backgroundRepeat", "getBackgroundRepeat", "setBackgroundRepeat", "backgroundPaint", "Landroid/graphics/Paint;", "invalidateSelf", "", "onBoundsChange", "bounds", "Landroid/graphics/Rect;", "setAlpha", "alpha", "", "setColorFilter", "colorFilter", "Landroid/graphics/ColorFilter;", "getOpacity", "draw", "canvas", "Landroid/graphics/Canvas;", "computeBorderInsets", "hasInvalidDimensions", "positioningArea", "paintingArea", "updatePath", "positionToPixels", "", "lengthPercentage", "Lcom/facebook/react/uimanager/LengthPercentage;", "availableSpace", "calculateBackgroundImageSize", "Lkotlin/Pair;", "containerWidth", "containerHeight", "imageWidth", "imageHeight", "repeat", "calculateBackgroundPosition", "tileWidth", "tileHeight", ViewProps.POSITION, "ReactAndroid_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
@SourceDebugExtension({"SMAP\nBackgroundImageDrawable.kt\nKotlin\n*S Kotlin\n*F\n+ 1 BackgroundImageDrawable.kt\ncom/facebook/react/uimanager/drawable/BackgroundImageDrawable\n+ 2 fake.kt\nkotlin/jvm/internal/FakeKt\n*L\n1#1,418:1\n1#2:419\n*E\n"})
/* loaded from: classes3.dex */
public final class BackgroundImageDrawable extends Drawable {
    private Path backgroundImageClipPath;
    private List<BackgroundImageLayer> backgroundImageLayers;

    @NotNull
    private final Paint backgroundPaint;
    private RectF backgroundPaintingArea;
    private List<BackgroundPosition> backgroundPosition;
    private RectF backgroundPositioningArea;
    private List<BackgroundRepeat> backgroundRepeat;
    private List<? extends BackgroundSize> backgroundSize;
    private BorderInsets borderInsets;
    private BorderRadiusStyle borderRadius;

    @NotNull
    private final Context context;
    private boolean needUpdatePath;

    public /* synthetic */ BackgroundImageDrawable(Context context, BorderRadiusStyle borderRadiusStyle, BorderInsets borderInsets, int i5, DefaultConstructorMarker defaultConstructorMarker) {
        this(context, (i5 & 2) != 0 ? null : borderRadiusStyle, (i5 & 4) != 0 ? null : borderInsets);
    }

    private final Pair<Float, Float> calculateBackgroundImageSize(float containerWidth, float containerHeight, float imageWidth, float imageHeight, BackgroundSize backgroundSize, BackgroundRepeat repeat) {
        if (backgroundSize instanceof BackgroundSize.LengthPercentageAuto) {
            BackgroundSize.LengthPercentageAuto lengthPercentageAuto = (BackgroundSize.LengthPercentageAuto) backgroundSize;
            LengthPercentage x5 = lengthPercentageAuto.getLengthPercentage().getX();
            LengthPercentage y5 = lengthPercentageAuto.getLengthPercentage().getY();
            if (x5 != null && y5 != null) {
                imageWidth = positionToPixels(x5, containerWidth);
                imageHeight = positionToPixels(y5, containerHeight);
            }
        }
        BackgroundRepeatKeyword x10 = repeat != null ? repeat.getX() : null;
        BackgroundRepeatKeyword backgroundRepeatKeyword = BackgroundRepeatKeyword.Round;
        if (x10 == backgroundRepeatKeyword && imageWidth > 0.0f && !FloatUtil.floatsEqual(containerWidth % imageWidth, 0.0f)) {
            float rint = (float) Math.rint(containerWidth / imageWidth);
            if (rint > 0.0f) {
                imageWidth = containerWidth / rint;
            }
        }
        if ((repeat != null ? repeat.getY() : null) == backgroundRepeatKeyword && imageHeight > 0.0f && !FloatUtil.floatsEqual(containerHeight % imageHeight, 0.0f)) {
            float rint2 = (float) Math.rint(containerHeight / imageHeight);
            if (rint2 > 0.0f) {
                imageHeight = containerHeight / rint2;
            }
        }
        return new Pair<>(Float.valueOf(imageWidth), Float.valueOf(imageHeight));
    }

    private final Pair<Float, Float> calculateBackgroundPosition(float tileWidth, float tileHeight, BackgroundPosition position) {
        float positionToPixels;
        float f2 = 0.0f;
        Float valueOf = Float.valueOf(0.0f);
        RectF rectF = this.backgroundPositioningArea;
        if (rectF == null) {
            return new Pair<>(valueOf, valueOf);
        }
        float width = rectF.width() - tileWidth;
        float height = rectF.height() - tileHeight;
        if ((position != null ? position.getLeft() : null) != null) {
            positionToPixels = positionToPixels(position.getLeft(), width);
        } else {
            positionToPixels = (position != null ? position.getRight() : null) != null ? width - positionToPixels(position.getRight(), width) : 0.0f;
        }
        float f10 = positionToPixels + rectF.left;
        if ((position != null ? position.getTop() : null) != null) {
            f2 = positionToPixels(position.getTop(), height);
        } else {
            if ((position != null ? position.getBottom() : null) != null) {
                f2 = height - positionToPixels(position.getBottom(), height);
            }
        }
        return new Pair<>(Float.valueOf(f10), Float.valueOf(f2 + rectF.top));
    }

    private final RectF computeBorderInsets() {
        BorderInsets borderInsets = this.borderInsets;
        RectF resolve = borderInsets != null ? borderInsets.resolve(getLayoutDirection(), this.context) : null;
        return new RectF(resolve != null ? PixelUtil.INSTANCE.dpToPx(resolve.left) : 0.0f, resolve != null ? PixelUtil.INSTANCE.dpToPx(resolve.top) : 0.0f, resolve != null ? PixelUtil.INSTANCE.dpToPx(resolve.right) : 0.0f, resolve != null ? PixelUtil.INSTANCE.dpToPx(resolve.bottom) : 0.0f);
    }

    private final boolean hasInvalidDimensions(RectF positioningArea, RectF paintingArea) {
        return FloatUtil.floatsEqual(positioningArea.width(), 0.0f) || positioningArea.width() < 0.0f || FloatUtil.floatsEqual(positioningArea.height(), 0.0f) || positioningArea.height() < 0.0f || FloatUtil.floatsEqual(paintingArea.width(), 0.0f) || paintingArea.width() < 0.0f || FloatUtil.floatsEqual(paintingArea.height(), 0.0f) || paintingArea.height() < 0.0f;
    }

    private final float positionToPixels(LengthPercentage lengthPercentage, float availableSpace) {
        return lengthPercentage.getType() == LengthPercentageType.PERCENT ? lengthPercentage.resolve(availableSpace) : PixelUtil.INSTANCE.dpToPx(lengthPercentage.resolve(availableSpace));
    }

    private final void updatePath() {
        ComputedBorderRadius computedBorderRadius;
        CornerRadii bottomLeft;
        CornerRadii bottomLeft2;
        CornerRadii bottomRight;
        CornerRadii bottomRight2;
        CornerRadii topRight;
        CornerRadii topRight2;
        CornerRadii topLeft;
        CornerRadii topLeft2;
        if (this.needUpdatePath) {
            this.needUpdatePath = false;
            RectF computeBorderInsets = computeBorderInsets();
            this.backgroundPositioningArea = new RectF(getBounds().left + computeBorderInsets.left, getBounds().top + computeBorderInsets.top, getBounds().right - computeBorderInsets.right, getBounds().bottom - computeBorderInsets.bottom);
            this.backgroundPaintingArea = new RectF(getBounds());
            BorderRadiusStyle borderRadiusStyle = this.borderRadius;
            if (borderRadiusStyle != null) {
                int layoutDirection = getLayoutDirection();
                Context context = this.context;
                PixelUtil pixelUtil = PixelUtil.INSTANCE;
                computedBorderRadius = borderRadiusStyle.resolve(layoutDirection, context, pixelUtil.pxToDp(getBounds().width()), pixelUtil.pxToDp(getBounds().height()));
            } else {
                computedBorderRadius = null;
            }
            BorderRadiusStyle borderRadiusStyle2 = this.borderRadius;
            if (borderRadiusStyle2 == null || !borderRadiusStyle2.hasRoundedBorders()) {
                RectF rectF = this.backgroundPaintingArea;
                if (rectF == null) {
                    return;
                }
                Path path = new Path();
                this.backgroundImageClipPath = path;
                path.addRect(rectF, Path.Direction.CW);
                return;
            }
            RectF rectF2 = this.backgroundPaintingArea;
            if (rectF2 == null) {
                return;
            }
            Path path2 = new Path();
            this.backgroundImageClipPath = path2;
            float f2 = 0.0f;
            float dpToPx = (computedBorderRadius == null || (topLeft2 = computedBorderRadius.getTopLeft()) == null) ? 0.0f : PixelUtil.INSTANCE.dpToPx(topLeft2.getHorizontal());
            float dpToPx2 = (computedBorderRadius == null || (topLeft = computedBorderRadius.getTopLeft()) == null) ? 0.0f : PixelUtil.INSTANCE.dpToPx(topLeft.getVertical());
            float dpToPx3 = (computedBorderRadius == null || (topRight2 = computedBorderRadius.getTopRight()) == null) ? 0.0f : PixelUtil.INSTANCE.dpToPx(topRight2.getHorizontal());
            float dpToPx4 = (computedBorderRadius == null || (topRight = computedBorderRadius.getTopRight()) == null) ? 0.0f : PixelUtil.INSTANCE.dpToPx(topRight.getVertical());
            float dpToPx5 = (computedBorderRadius == null || (bottomRight2 = computedBorderRadius.getBottomRight()) == null) ? 0.0f : PixelUtil.INSTANCE.dpToPx(bottomRight2.getHorizontal());
            float dpToPx6 = (computedBorderRadius == null || (bottomRight = computedBorderRadius.getBottomRight()) == null) ? 0.0f : PixelUtil.INSTANCE.dpToPx(bottomRight.getVertical());
            float dpToPx7 = (computedBorderRadius == null || (bottomLeft2 = computedBorderRadius.getBottomLeft()) == null) ? 0.0f : PixelUtil.INSTANCE.dpToPx(bottomLeft2.getHorizontal());
            if (computedBorderRadius != null && (bottomLeft = computedBorderRadius.getBottomLeft()) != null) {
                f2 = PixelUtil.INSTANCE.dpToPx(bottomLeft.getVertical());
            }
            path2.addRoundRect(rectF2, new float[]{dpToPx, dpToPx2, dpToPx3, dpToPx4, dpToPx5, dpToPx6, dpToPx7, f2}, Path.Direction.CW);
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:31:0x006e  */
    /* JADX WARN: Removed duplicated region for block: B:38:0x008b  */
    /* JADX WARN: Removed duplicated region for block: B:45:0x00cd  */
    /* JADX WARN: Removed duplicated region for block: B:62:0x01ab  */
    /* JADX WARN: Removed duplicated region for block: B:65:0x01b5  */
    /* JADX WARN: Removed duplicated region for block: B:74:0x0248  */
    /* JADX WARN: Removed duplicated region for block: B:81:0x0283 A[LOOP:0: B:22:0x0043->B:81:0x0283, LOOP_END] */
    /* JADX WARN: Removed duplicated region for block: B:82:0x028e A[EDGE_INSN: B:82:0x028e->B:83:0x028e BREAK  A[LOOP:0: B:22:0x0043->B:81:0x0283], SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:87:0x01f9  */
    @Override // android.graphics.drawable.Drawable
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public void draw(@NotNull Canvas canvas) {
        RectF rectF;
        int size;
        BackgroundSize backgroundSize;
        List<BackgroundRepeat> list;
        BackgroundRepeat backgroundRepeat;
        List<BackgroundPosition> list2;
        float floatValue;
        int i5;
        RectF rectF2;
        RectF rectF3;
        BackgroundRepeatKeyword backgroundRepeatKeyword;
        float f2;
        float f10;
        BackgroundRepeat backgroundRepeat2;
        float f11;
        int i6;
        int i10;
        float f12;
        BackgroundRepeatKeyword backgroundRepeatKeyword2;
        float f13;
        float f14;
        int i11;
        int i12;
        float f15;
        int i13;
        BackgroundImageDrawable backgroundImageDrawable = this;
        Canvas canvas2 = canvas;
        Intrinsics.checkNotNullParameter(canvas2, "canvas");
        List<BackgroundImageLayer> list3 = backgroundImageDrawable.backgroundImageLayers;
        if (list3 != null) {
            int i14 = 1;
            if (list3 != null && list3.isEmpty()) {
                return;
            }
            backgroundImageDrawable.updatePath();
            RectF rectF4 = backgroundImageDrawable.backgroundPaintingArea;
            if (rectF4 != null && (rectF = backgroundImageDrawable.backgroundPositioningArea) != null && !backgroundImageDrawable.hasInvalidDimensions(rectF, rectF4)) {
                canvas2.save();
                Path path = backgroundImageDrawable.backgroundImageClipPath;
                if (path != null) {
                    canvas2.clipPath(path);
                }
                List<BackgroundImageLayer> list4 = backgroundImageDrawable.backgroundImageLayers;
                if (list4 != null && list4.size() - 1 >= 0) {
                    while (true) {
                        int i15 = size - 1;
                        BackgroundImageLayer backgroundImageLayer = list4.get(size);
                        List<? extends BackgroundSize> list5 = backgroundImageDrawable.backgroundSize;
                        BackgroundPosition backgroundPosition = null;
                        if (list5 != null) {
                            if (list5.isEmpty()) {
                                list5 = null;
                            }
                            if (list5 != null) {
                                backgroundSize = (BackgroundSize) CollectionsKt.M(size % list5.size(), list5);
                                list = backgroundImageDrawable.backgroundRepeat;
                                if (list != null) {
                                    if (list.isEmpty()) {
                                        list = null;
                                    }
                                    if (list != null) {
                                        backgroundRepeat = (BackgroundRepeat) CollectionsKt.M(size % list.size(), list);
                                        list2 = backgroundImageDrawable.backgroundPosition;
                                        if (list2 != null) {
                                            if (list2.isEmpty()) {
                                                list2 = null;
                                            }
                                            if (list2 != null) {
                                                backgroundPosition = (BackgroundPosition) CollectionsKt.M(size % list2.size(), list2);
                                            }
                                        }
                                        BackgroundPosition backgroundPosition2 = backgroundPosition;
                                        Pair<Float, Float> calculateBackgroundImageSize = backgroundImageDrawable.calculateBackgroundImageSize(rectF.width(), rectF.height(), rectF.width(), rectF.height(), backgroundSize, backgroundRepeat);
                                        BackgroundRepeat backgroundRepeat3 = backgroundRepeat;
                                        BackgroundImageDrawable backgroundImageDrawable2 = backgroundImageDrawable;
                                        floatValue = ((Number) calculateBackgroundImageSize.f13474d).floatValue();
                                        float floatValue2 = ((Number) calculateBackgroundImageSize.f13475e).floatValue();
                                        if (floatValue > 0.0f || floatValue2 <= 0.0f) {
                                            i5 = i14;
                                            rectF2 = rectF4;
                                            rectF3 = rectF;
                                        } else {
                                            backgroundImageDrawable2.backgroundPaint.setShader(backgroundImageLayer.getShader(floatValue, floatValue2));
                                            Pair<Float, Float> calculateBackgroundPosition = backgroundImageDrawable2.calculateBackgroundPosition(floatValue, floatValue2, backgroundPosition2);
                                            float floatValue3 = ((Number) calculateBackgroundPosition.f13474d).floatValue();
                                            float floatValue4 = ((Number) calculateBackgroundPosition.f13475e).floatValue();
                                            if (backgroundRepeat3 == null || (backgroundRepeatKeyword = backgroundRepeat3.getX()) == null) {
                                                backgroundRepeatKeyword = BackgroundRepeatKeyword.Repeat;
                                            }
                                            BackgroundRepeatKeyword backgroundRepeatKeyword3 = BackgroundRepeatKeyword.Space;
                                            if (backgroundRepeatKeyword == backgroundRepeatKeyword3) {
                                                float width = rectF4.width() - (2 * floatValue);
                                                i5 = i14;
                                                RectF rectF5 = rectF4;
                                                if (((float) Math.rint(floatValue)) <= 0.0f || (width <= 0.0f && !FloatUtil.floatsEqual(width, 0.0f))) {
                                                    f10 = 0.0f;
                                                    f2 = floatValue4;
                                                    rectF2 = rectF5;
                                                } else {
                                                    f2 = floatValue4;
                                                    int floor = (int) Math.floor(((float) Math.rint(width)) / r8);
                                                    int i16 = floor + 2;
                                                    float f16 = (width - (floor * floatValue)) / (floor + 1);
                                                    rectF2 = rectF5;
                                                    floatValue3 = rectF2.left;
                                                    backgroundRepeat2 = backgroundRepeat3;
                                                    f11 = 0.0f;
                                                    rectF3 = rectF;
                                                    f12 = f16;
                                                    i10 = i16;
                                                    if (backgroundRepeat2 != null || (backgroundRepeatKeyword2 = backgroundRepeat2.getY()) == null) {
                                                        backgroundRepeatKeyword2 = BackgroundRepeatKeyword.Repeat;
                                                    }
                                                    if (backgroundRepeatKeyword2 == backgroundRepeatKeyword3) {
                                                        float height = rectF2.height() - (2 * floatValue2);
                                                        if (((float) Math.rint(floatValue2)) > f11 && (height > f11 || FloatUtil.floatsEqual(height, f11))) {
                                                            int floor2 = (int) Math.floor(((float) Math.rint(height)) / r1);
                                                            f2 = rectF2.top;
                                                            f13 = f12;
                                                            i12 = floor2 + 2;
                                                            f15 = (height - (floor2 * floatValue2)) / (floor2 + 1);
                                                            float f17 = floatValue3;
                                                            i13 = 0;
                                                            while (i13 < i10) {
                                                                int i17 = 0;
                                                                float f18 = f2;
                                                                while (i17 < i12) {
                                                                    canvas2.save();
                                                                    canvas2.translate(f17, f18);
                                                                    canvas2.drawRect(0.0f, 0.0f, floatValue, floatValue2, backgroundImageDrawable2.backgroundPaint);
                                                                    canvas.restore();
                                                                    f18 = floatValue2 + f15 + f18;
                                                                    i17++;
                                                                    i10 = i10;
                                                                    i13 = i13;
                                                                    canvas2 = canvas;
                                                                }
                                                                f17 += floatValue + f13;
                                                                i13++;
                                                                i10 = i10;
                                                                canvas2 = canvas;
                                                            }
                                                        }
                                                    } else if (backgroundRepeatKeyword2 == BackgroundRepeatKeyword.Round || backgroundRepeatKeyword2 == BackgroundRepeatKeyword.Repeat) {
                                                        if (((float) Math.rint(floatValue2)) > 0.0f) {
                                                            int ceil = (int) Math.ceil(((float) Math.rint(r2)) / r1);
                                                            f13 = f12;
                                                            int ceil2 = ((int) Math.ceil(((float) Math.rint(rectF2.height() - r2)) / r1)) + ceil;
                                                            f14 = f2 - (ceil * floatValue2);
                                                            i11 = ceil2;
                                                        } else {
                                                            f13 = f12;
                                                            f14 = f2;
                                                            i11 = i5;
                                                        }
                                                        f2 = f14;
                                                        i12 = i11;
                                                        f15 = 0.0f;
                                                        float f172 = floatValue3;
                                                        i13 = 0;
                                                        while (i13 < i10) {
                                                        }
                                                    }
                                                    f13 = f12;
                                                    i12 = i5;
                                                    f15 = 0.0f;
                                                    float f1722 = floatValue3;
                                                    i13 = 0;
                                                    while (i13 < i10) {
                                                    }
                                                }
                                            } else {
                                                f2 = floatValue4;
                                                i5 = i14;
                                                rectF2 = rectF4;
                                                f10 = 0.0f;
                                                if (backgroundRepeatKeyword == BackgroundRepeatKeyword.Round || backgroundRepeatKeyword == BackgroundRepeatKeyword.Repeat) {
                                                    if (((float) Math.rint(floatValue)) > 0.0f) {
                                                        rectF3 = rectF;
                                                        int ceil3 = (int) Math.ceil(((float) Math.rint(floatValue3)) / r0);
                                                        f11 = 0.0f;
                                                        backgroundRepeat2 = backgroundRepeat3;
                                                        int ceil4 = ((int) Math.ceil(((float) Math.rint(rectF2.width() - floatValue3)) / r0)) + ceil3;
                                                        floatValue3 -= ceil3 * floatValue;
                                                        i6 = ceil4;
                                                    } else {
                                                        backgroundRepeat2 = backgroundRepeat3;
                                                        f11 = 0.0f;
                                                        rectF3 = rectF;
                                                        i6 = i5;
                                                    }
                                                    i10 = i6;
                                                    f12 = f11;
                                                    if (backgroundRepeat2 != null) {
                                                    }
                                                    backgroundRepeatKeyword2 = BackgroundRepeatKeyword.Repeat;
                                                    if (backgroundRepeatKeyword2 == backgroundRepeatKeyword3) {
                                                    }
                                                    f13 = f12;
                                                    i12 = i5;
                                                    f15 = 0.0f;
                                                    float f17222 = floatValue3;
                                                    i13 = 0;
                                                    while (i13 < i10) {
                                                    }
                                                }
                                            }
                                            backgroundRepeat2 = backgroundRepeat3;
                                            f11 = f10;
                                            rectF3 = rectF;
                                            i10 = i5;
                                            f12 = f11;
                                            if (backgroundRepeat2 != null) {
                                            }
                                            backgroundRepeatKeyword2 = BackgroundRepeatKeyword.Repeat;
                                            if (backgroundRepeatKeyword2 == backgroundRepeatKeyword3) {
                                            }
                                            f13 = f12;
                                            i12 = i5;
                                            f15 = 0.0f;
                                            float f172222 = floatValue3;
                                            i13 = 0;
                                            while (i13 < i10) {
                                            }
                                        }
                                        if (i15 < 0) {
                                            break;
                                        }
                                        canvas2 = canvas;
                                        backgroundImageDrawable = backgroundImageDrawable2;
                                        rectF4 = rectF2;
                                        size = i15;
                                        rectF = rectF3;
                                        i14 = i5;
                                    }
                                }
                                backgroundRepeat = null;
                                list2 = backgroundImageDrawable.backgroundPosition;
                                if (list2 != null) {
                                }
                                BackgroundPosition backgroundPosition22 = backgroundPosition;
                                Pair<Float, Float> calculateBackgroundImageSize2 = backgroundImageDrawable.calculateBackgroundImageSize(rectF.width(), rectF.height(), rectF.width(), rectF.height(), backgroundSize, backgroundRepeat);
                                BackgroundRepeat backgroundRepeat32 = backgroundRepeat;
                                BackgroundImageDrawable backgroundImageDrawable22 = backgroundImageDrawable;
                                floatValue = ((Number) calculateBackgroundImageSize2.f13474d).floatValue();
                                float floatValue22 = ((Number) calculateBackgroundImageSize2.f13475e).floatValue();
                                if (floatValue > 0.0f) {
                                }
                                i5 = i14;
                                rectF2 = rectF4;
                                rectF3 = rectF;
                                if (i15 < 0) {
                                }
                            }
                        }
                        backgroundSize = null;
                        list = backgroundImageDrawable.backgroundRepeat;
                        if (list != null) {
                        }
                        backgroundRepeat = null;
                        list2 = backgroundImageDrawable.backgroundPosition;
                        if (list2 != null) {
                        }
                        BackgroundPosition backgroundPosition222 = backgroundPosition;
                        Pair<Float, Float> calculateBackgroundImageSize22 = backgroundImageDrawable.calculateBackgroundImageSize(rectF.width(), rectF.height(), rectF.width(), rectF.height(), backgroundSize, backgroundRepeat);
                        BackgroundRepeat backgroundRepeat322 = backgroundRepeat;
                        BackgroundImageDrawable backgroundImageDrawable222 = backgroundImageDrawable;
                        floatValue = ((Number) calculateBackgroundImageSize22.f13474d).floatValue();
                        float floatValue222 = ((Number) calculateBackgroundImageSize22.f13475e).floatValue();
                        if (floatValue > 0.0f) {
                        }
                        i5 = i14;
                        rectF2 = rectF4;
                        rectF3 = rectF;
                        if (i15 < 0) {
                        }
                    }
                }
                canvas.restore();
            }
        }
    }

    public final List<BackgroundImageLayer> getBackgroundImageLayers() {
        return this.backgroundImageLayers;
    }

    public final List<BackgroundPosition> getBackgroundPosition() {
        return this.backgroundPosition;
    }

    public final List<BackgroundRepeat> getBackgroundRepeat() {
        return this.backgroundRepeat;
    }

    public final List<BackgroundSize> getBackgroundSize() {
        return this.backgroundSize;
    }

    public final BorderInsets getBorderInsets() {
        return this.borderInsets;
    }

    public final BorderRadiusStyle getBorderRadius() {
        return this.borderRadius;
    }

    @Override // android.graphics.drawable.Drawable
    @d
    public int getOpacity() {
        int alpha = this.backgroundPaint.getAlpha();
        if (alpha == 255) {
            return -1;
        }
        return (1 > alpha || alpha >= 255) ? -2 : -3;
    }

    @Override // android.graphics.drawable.Drawable
    public void invalidateSelf() {
        this.needUpdatePath = true;
        super.invalidateSelf();
    }

    @Override // android.graphics.drawable.Drawable
    public void onBoundsChange(@NotNull Rect bounds) {
        Intrinsics.checkNotNullParameter(bounds, "bounds");
        super.onBoundsChange(bounds);
        this.needUpdatePath = true;
    }

    @Override // android.graphics.drawable.Drawable
    public void setAlpha(int alpha) {
        this.backgroundPaint.setAlpha(alpha);
        invalidateSelf();
    }

    public final void setBackgroundImageLayers(List<BackgroundImageLayer> list) {
        if (Intrinsics.areEqual(this.backgroundImageLayers, list)) {
            return;
        }
        this.backgroundImageLayers = list;
        invalidateSelf();
    }

    public final void setBackgroundPosition(List<BackgroundPosition> list) {
        if (Intrinsics.areEqual(this.backgroundPosition, list)) {
            return;
        }
        this.backgroundPosition = list;
        invalidateSelf();
    }

    public final void setBackgroundRepeat(List<BackgroundRepeat> list) {
        if (Intrinsics.areEqual(this.backgroundRepeat, list)) {
            return;
        }
        this.backgroundRepeat = list;
        invalidateSelf();
    }

    public final void setBackgroundSize(List<? extends BackgroundSize> list) {
        if (Intrinsics.areEqual(this.backgroundSize, list)) {
            return;
        }
        this.backgroundSize = list;
        invalidateSelf();
    }

    public final void setBorderInsets(BorderInsets borderInsets) {
        this.borderInsets = borderInsets;
    }

    public final void setBorderRadius(BorderRadiusStyle borderRadiusStyle) {
        this.borderRadius = borderRadiusStyle;
    }

    @Override // android.graphics.drawable.Drawable
    public void setColorFilter(ColorFilter colorFilter) {
    }

    public BackgroundImageDrawable(@NotNull Context context, BorderRadiusStyle borderRadiusStyle, BorderInsets borderInsets) {
        Intrinsics.checkNotNullParameter(context, "context");
        this.context = context;
        this.borderRadius = borderRadiusStyle;
        this.borderInsets = borderInsets;
        this.needUpdatePath = true;
        Paint paint = new Paint(1);
        paint.setStyle(Paint.Style.FILL);
        this.backgroundPaint = paint;
    }
}
