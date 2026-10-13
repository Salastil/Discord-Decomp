package com.facebook.react.uimanager.drawable;

import android.content.Context;
import android.graphics.Canvas;
import android.graphics.Color;
import android.graphics.ColorFilter;
import android.graphics.DashPathEffect;
import android.graphics.Paint;
import android.graphics.Path;
import android.graphics.PathEffect;
import android.graphics.PointF;
import android.graphics.Rect;
import android.graphics.RectF;
import android.graphics.Region;
import android.graphics.drawable.Drawable;
import android.os.Build;
import com.discord.chat.bridge.botuikit.a;
import com.facebook.react.uimanager.FloatUtil;
import com.facebook.react.uimanager.LengthPercentage;
import com.facebook.react.uimanager.PixelUtil;
import com.facebook.react.uimanager.Spacing;
import com.facebook.react.uimanager.ViewProps;
import com.facebook.react.uimanager.style.BorderColors;
import com.facebook.react.uimanager.style.BorderInsets;
import com.facebook.react.uimanager.style.BorderRadiusProp;
import com.facebook.react.uimanager.style.BorderRadiusStyle;
import com.facebook.react.uimanager.style.BorderStyle;
import com.facebook.react.uimanager.style.ColorEdges;
import com.facebook.react.uimanager.style.ComputedBorderRadius;
import com.facebook.react.uimanager.style.CornerRadii;
import com.facebook.react.uimanager.style.LogicalEdge;
import fo.d;
import fo.n;
import java.util.Locale;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.SourceDebugExtension;
import kotlin.properties.ReadWriteProperty;
import kotlin.reflect.KProperty;
import org.jetbrains.annotations.NotNull;
import uo.c;

@Metadata(d1 = {"\u0000Ä\u0001\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\r\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u000b\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\b\n\u0000\n\u0002\u0010\u0007\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000b\n\u0002\b\t\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0006\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u001c\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u0006\n\u0002\b\f\b\u0000\u0018\u00002\u00020\u0001B7\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\b\u0010\u0004\u001a\u0004\u0018\u00010\u0005\u0012\b\u0010\u0006\u001a\u0004\u0018\u00010\u0007\u0012\b\u0010\b\u001a\u0004\u0018\u00010\t\u0012\b\u0010\n\u001a\u0004\u0018\u00010\u000b¢\u0006\u0004\b\f\u0010\rJ)\u0010\u0018\u001a\u0010\u0012\u0006\u0012\u0004\u0018\u00010\u001a\u0012\u0004\u0012\u0002H\u001b0\u0019\"\u0004\b\u0000\u0010\u001b2\u0006\u0010\u001c\u001a\u0002H\u001bH\u0002¢\u0006\u0002\u0010\u001dJ\b\u0010G\u001a\u00020HH\u0016J\u0010\u0010I\u001a\u00020H2\u0006\u0010J\u001a\u00020KH\u0014J\u0010\u0010L\u001a\u00020H2\u0006\u0010M\u001a\u00020-H\u0016J\u0012\u0010N\u001a\u00020H2\b\u0010O\u001a\u0004\u0018\u00010PH\u0016J\b\u0010Q\u001a\u00020-H\u0017J\u0010\u0010R\u001a\u00020H2\u0006\u0010S\u001a\u00020TH\u0016J\u0018\u0010U\u001a\u00020/2\u0006\u0010V\u001a\u00020/2\u0006\u0010\u0004\u001a\u00020/H\u0002J\u0016\u0010W\u001a\u00020H2\u0006\u0010X\u001a\u00020-2\u0006\u0010Y\u001a\u00020/J\u0018\u0010\u0012\u001a\u00020H2\u0006\u0010Z\u001a\u00020[2\b\u0010\\\u001a\u0004\u0018\u00010]J\u0010\u0010!\u001a\u00020H2\b\u0010^\u001a\u0004\u0018\u00010_J\u001d\u0010`\u001a\u00020H2\u0006\u0010X\u001a\u00020a2\b\u0010b\u001a\u0004\u0018\u00010-¢\u0006\u0002\u0010cJ\u000e\u0010d\u001a\u00020-2\u0006\u0010X\u001a\u00020aJ\u0010\u0010e\u001a\u00020H2\u0006\u0010S\u001a\u00020TH\u0002J\u0010\u0010f\u001a\u00020H2\u0006\u0010S\u001a\u00020TH\u0002JH\u0010g\u001a\u00020-2\u0006\u0010h\u001a\u00020-2\u0006\u0010i\u001a\u00020-2\u0006\u0010j\u001a\u00020-2\u0006\u0010k\u001a\u00020-2\u0006\u0010l\u001a\u00020-2\u0006\u0010m\u001a\u00020-2\u0006\u0010n\u001a\u00020-2\u0006\u0010o\u001a\u00020-H\u0002JX\u0010p\u001a\u00020H2\u0006\u0010S\u001a\u00020T2\u0006\u0010q\u001a\u00020-2\u0006\u0010r\u001a\u00020/2\u0006\u0010s\u001a\u00020/2\u0006\u0010t\u001a\u00020/2\u0006\u0010u\u001a\u00020/2\u0006\u0010v\u001a\u00020/2\u0006\u0010w\u001a\u00020/2\u0006\u0010x\u001a\u00020/2\u0006\u0010y\u001a\u00020/H\u0002J\b\u0010z\u001a\u00020DH\u0002J\b\u0010{\u001a\u00020/H\u0002J\b\u0010|\u001a\u00020HH\u0002J\u0010\u0010|\u001a\u00020H2\u0006\u0010\u0004\u001a\u00020-H\u0002J\u001a\u0010}\u001a\u0004\u0018\u00010~2\u0006\u0010^\u001a\u00020\u000b2\u0006\u0010\u0004\u001a\u00020/H\u0002Ja\u0010\u007f\u001a\u00020H2\b\u0010\u0080\u0001\u001a\u00030\u0081\u00012\b\u0010\u0082\u0001\u001a\u00030\u0081\u00012\b\u0010\u0083\u0001\u001a\u00030\u0081\u00012\b\u0010\u0084\u0001\u001a\u00030\u0081\u00012\b\u0010\u0085\u0001\u001a\u00030\u0081\u00012\b\u0010\u0086\u0001\u001a\u00030\u0081\u00012\b\u0010\u0087\u0001\u001a\u00030\u0081\u00012\b\u0010\u0088\u0001\u001a\u00030\u0081\u00012\u0007\u0010\u0089\u0001\u001a\u00020?H\u0002J\t\u0010\u008a\u0001\u001a\u00020HH\u0002J\u001a\u0010\u008b\u0001\u001a\u00020-2\u0006\u0010b\u001a\u00020-2\u0007\u0010\u008c\u0001\u001a\u00020-H\u0002R\u000e\u0010\u0002\u001a\u00020\u0003X\u0082\u0004¢\u0006\u0002\n\u0000R\u0013\u0010\u0004\u001a\u0004\u0018\u00010\u0005¢\u0006\b\n\u0000\u001a\u0004\b\u000e\u0010\u000fR\u001c\u0010\u0006\u001a\u0004\u0018\u00010\u0007X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\u0010\u0010\u0011\"\u0004\b\u0012\u0010\u0013R\u001c\u0010\b\u001a\u0004\u0018\u00010\tX\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\u0014\u0010\u0015\"\u0004\b\u0016\u0010\u0017R/\u0010\n\u001a\u0004\u0018\u00010\u000b2\b\u0010\u001e\u001a\u0004\u0018\u00010\u000b8F@FX\u0086\u008e\u0002¢\u0006\u0012\n\u0004\b#\u0010$\u001a\u0004\b\u001f\u0010 \"\u0004\b!\u0010\"R\u0012\u0010%\u001a\u0004\u0018\u00010&X\u0082\u000e¢\u0006\u0004\n\u0002\u0010'R\u000e\u0010(\u001a\u00020)X\u0082\u000e¢\u0006\u0002\n\u0000R\u0010\u0010*\u001a\u0004\u0018\u00010+X\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010,\u001a\u00020-X\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010.\u001a\u00020/X\u0082D¢\u0006\u0002\n\u0000R\u0010\u00100\u001a\u0004\u0018\u000101X\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u00102\u001a\u000203X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u00104\u001a\u000205X\u0082\u000e¢\u0006\u0002\n\u0000R\u0010\u00106\u001a\u0004\u0018\u000101X\u0082\u000e¢\u0006\u0002\n\u0000R\u0010\u00107\u001a\u0004\u0018\u000101X\u0082\u000e¢\u0006\u0002\n\u0000R\u0010\u00108\u001a\u0004\u0018\u000101X\u0082\u000e¢\u0006\u0002\n\u0000R\u0010\u00109\u001a\u0004\u0018\u000101X\u0082\u000e¢\u0006\u0002\n\u0000R\"\u0010;\u001a\u0004\u0018\u0001012\b\u0010:\u001a\u0004\u0018\u000101@BX\u0086\u000e¢\u0006\b\n\u0000\u001a\u0004\b<\u0010=R\u0010\u0010>\u001a\u0004\u0018\u00010?X\u0082\u000e¢\u0006\u0002\n\u0000R\u0010\u0010@\u001a\u0004\u0018\u00010?X\u0082\u000e¢\u0006\u0002\n\u0000R\u0010\u0010A\u001a\u0004\u0018\u00010?X\u0082\u000e¢\u0006\u0002\n\u0000R\u0010\u0010B\u001a\u0004\u0018\u00010?X\u0082\u000e¢\u0006\u0002\n\u0000R\u0010\u0010C\u001a\u0004\u0018\u00010DX\u0082\u000e¢\u0006\u0002\n\u0000R\u0010\u0010E\u001a\u0004\u0018\u00010DX\u0082\u000e¢\u0006\u0002\n\u0000R\u0010\u0010F\u001a\u0004\u0018\u00010DX\u0082\u000e¢\u0006\u0002\n\u0000¨\u0006\u008d\u0001"}, d2 = {"Lcom/facebook/react/uimanager/drawable/BorderDrawable;", "Landroid/graphics/drawable/Drawable;", "context", "Landroid/content/Context;", ViewProps.BORDER_WIDTH, "Lcom/facebook/react/uimanager/Spacing;", "borderRadius", "Lcom/facebook/react/uimanager/style/BorderRadiusStyle;", "borderInsets", "Lcom/facebook/react/uimanager/style/BorderInsets;", "borderStyle", "Lcom/facebook/react/uimanager/style/BorderStyle;", "<init>", "(Landroid/content/Context;Lcom/facebook/react/uimanager/Spacing;Lcom/facebook/react/uimanager/style/BorderRadiusStyle;Lcom/facebook/react/uimanager/style/BorderInsets;Lcom/facebook/react/uimanager/style/BorderStyle;)V", "getBorderWidth", "()Lcom/facebook/react/uimanager/Spacing;", "getBorderRadius", "()Lcom/facebook/react/uimanager/style/BorderRadiusStyle;", "setBorderRadius", "(Lcom/facebook/react/uimanager/style/BorderRadiusStyle;)V", "getBorderInsets", "()Lcom/facebook/react/uimanager/style/BorderInsets;", "setBorderInsets", "(Lcom/facebook/react/uimanager/style/BorderInsets;)V", "invalidatingAndPathChange", "Lkotlin/properties/ReadWriteProperty;", "", "T", "initialValue", "(Ljava/lang/Object;)Lkotlin/properties/ReadWriteProperty;", "<set-?>", "getBorderStyle", "()Lcom/facebook/react/uimanager/style/BorderStyle;", "setBorderStyle", "(Lcom/facebook/react/uimanager/style/BorderStyle;)V", "borderStyle$delegate", "Lkotlin/properties/ReadWriteProperty;", "borderColors", "Lcom/facebook/react/uimanager/style/BorderColors;", "[Ljava/lang/Integer;", "computedBorderColors", "Lcom/facebook/react/uimanager/style/ColorEdges;", "computedBorderRadius", "Lcom/facebook/react/uimanager/style/ComputedBorderRadius;", "borderAlpha", "", "gapBetweenPaths", "", "pathForBorder", "Landroid/graphics/Path;", "borderPaint", "Landroid/graphics/Paint;", "needUpdatePath", "", "pathForSingleBorder", "pathForOutline", "centerDrawPath", "outerClipPathForBorderRadius", "value", "innerClipPathForBorderRadius", "getInnerClipPathForBorderRadius", "()Landroid/graphics/Path;", "innerBottomLeftCorner", "Landroid/graphics/PointF;", "innerBottomRightCorner", "innerTopLeftCorner", "innerTopRightCorner", "innerClipTempRectForBorderRadius", "Landroid/graphics/RectF;", "outerClipTempRectForBorderRadius", "tempRectForCenterDrawPath", "invalidateSelf", "", "onBoundsChange", "bounds", "Landroid/graphics/Rect;", "setAlpha", "alpha", "setColorFilter", "colorFilter", "Landroid/graphics/ColorFilter;", "getOpacity", "draw", "canvas", "Landroid/graphics/Canvas;", "getInnerBorderRadius", "computedRadius", "setBorderWidth", ViewProps.POSITION, "width", "property", "Lcom/facebook/react/uimanager/style/BorderRadiusProp;", "radius", "Lcom/facebook/react/uimanager/LengthPercentage;", "style", "", "setBorderColor", "Lcom/facebook/react/uimanager/style/LogicalEdge;", ViewProps.COLOR, "(Lcom/facebook/react/uimanager/style/LogicalEdge;Ljava/lang/Integer;)V", "getBorderColor", "drawRectangularBorders", "drawRoundedBorders", "fastBorderCompatibleColorOrZero", "borderLeft", "borderTop", "borderRight", "borderBottom", "colorLeft", "colorTop", "colorRight", "colorBottom", "drawQuadrilateral", "fillColor", "x1", "y1", "x2", "y2", "x3", "y3", "x4", "y4", "computeBorderInsets", "getFullBorderWidth", "updatePathEffect", "getPathEffect", "Landroid/graphics/PathEffect;", "getEllipseIntersectionWithLine", "ellipseBoundsLeft", "", "ellipseBoundsTop", "ellipseBoundsRight", "ellipseBoundsBottom", "lineStartX", "lineStartY", "lineEndX", "lineEndY", "result", "updatePath", "multiplyColorAlpha", "rawAlpha", "ReactAndroid_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
@SourceDebugExtension({"SMAP\nBorderDrawable.kt\nKotlin\n*S Kotlin\n*F\n+ 1 BorderDrawable.kt\ncom/facebook/react/uimanager/drawable/BorderDrawable\n+ 2 fake.kt\nkotlin/jvm/internal/FakeKt\n*L\n1#1,1101:1\n1#2:1102\n*E\n"})
/* loaded from: classes3.dex */
public final class BorderDrawable extends Drawable {
    static final /* synthetic */ KProperty[] $$delegatedProperties = {a.p(BorderDrawable.class, "borderStyle", "getBorderStyle()Lcom/facebook/react/uimanager/style/BorderStyle;", 0)};
    private int borderAlpha;
    private Integer[] borderColors;
    private BorderInsets borderInsets;

    @NotNull
    private final Paint borderPaint;
    private BorderRadiusStyle borderRadius;

    /* renamed from: borderStyle$delegate, reason: from kotlin metadata */
    @NotNull
    private final ReadWriteProperty borderStyle;
    private final Spacing borderWidth;
    private Path centerDrawPath;

    @NotNull
    private ColorEdges computedBorderColors;
    private ComputedBorderRadius computedBorderRadius;

    @NotNull
    private final Context context;
    private final float gapBetweenPaths;
    private PointF innerBottomLeftCorner;
    private PointF innerBottomRightCorner;
    private Path innerClipPathForBorderRadius;
    private RectF innerClipTempRectForBorderRadius;
    private PointF innerTopLeftCorner;
    private PointF innerTopRightCorner;
    private boolean needUpdatePath;
    private Path outerClipPathForBorderRadius;
    private RectF outerClipTempRectForBorderRadius;
    private Path pathForBorder;
    private Path pathForOutline;
    private Path pathForSingleBorder;
    private RectF tempRectForCenterDrawPath;

    @Metadata(k = 3, mv = {2, 1, 0}, xi = 48)
    public /* synthetic */ class WhenMappings {
        public static final /* synthetic */ int[] $EnumSwitchMapping$0;

        static {
            int[] iArr = new int[BorderStyle.values().length];
            try {
                iArr[BorderStyle.SOLID.ordinal()] = 1;
            } catch (NoSuchFieldError unused) {
            }
            try {
                iArr[BorderStyle.DASHED.ordinal()] = 2;
            } catch (NoSuchFieldError unused2) {
            }
            try {
                iArr[BorderStyle.DOTTED.ordinal()] = 3;
            } catch (NoSuchFieldError unused3) {
            }
            $EnumSwitchMapping$0 = iArr;
        }
    }

    public BorderDrawable(@NotNull Context context, Spacing spacing, BorderRadiusStyle borderRadiusStyle, BorderInsets borderInsets, BorderStyle borderStyle) {
        Intrinsics.checkNotNullParameter(context, "context");
        this.context = context;
        this.borderWidth = spacing;
        this.borderRadius = borderRadiusStyle;
        this.borderInsets = borderInsets;
        this.borderStyle = invalidatingAndPathChange(borderStyle);
        this.computedBorderColors = new ColorEdges(0, 0, 0, 0, 15, null);
        this.borderAlpha = 255;
        this.gapBetweenPaths = 0.8f;
        this.borderPaint = new Paint(1);
        this.needUpdatePath = true;
    }

    private final RectF computeBorderInsets() {
        RectF resolve;
        BorderInsets borderInsets = this.borderInsets;
        if (borderInsets == null || (resolve = borderInsets.resolve(getLayoutDirection(), this.context)) == null) {
            return new RectF(0.0f, 0.0f, 0.0f, 0.0f);
        }
        return new RectF(Float.isNaN(resolve.left) ? 0.0f : PixelUtil.INSTANCE.dpToPx(resolve.left), Float.isNaN(resolve.top) ? 0.0f : PixelUtil.INSTANCE.dpToPx(resolve.top), Float.isNaN(resolve.right) ? 0.0f : PixelUtil.INSTANCE.dpToPx(resolve.right), Float.isNaN(resolve.bottom) ? 0.0f : PixelUtil.INSTANCE.dpToPx(resolve.bottom));
    }

    private final void drawQuadrilateral(Canvas canvas, int fillColor, float x12, float y12, float x22, float y22, float x32, float y32, float x42, float y42) {
        if (fillColor == 0) {
            return;
        }
        if (this.pathForBorder == null) {
            this.pathForBorder = new Path();
        }
        this.borderPaint.setColor(multiplyColorAlpha(fillColor, this.borderAlpha));
        Path path = this.pathForBorder;
        if (path != null) {
            path.reset();
        }
        Path path2 = this.pathForBorder;
        if (path2 != null) {
            path2.moveTo(x12, y12);
        }
        Path path3 = this.pathForBorder;
        if (path3 != null) {
            path3.lineTo(x22, y22);
        }
        Path path4 = this.pathForBorder;
        if (path4 != null) {
            path4.lineTo(x32, y32);
        }
        Path path5 = this.pathForBorder;
        if (path5 != null) {
            path5.lineTo(x42, y42);
        }
        Path path6 = this.pathForBorder;
        if (path6 != null) {
            path6.lineTo(x12, y12);
        }
        Path path7 = this.pathForBorder;
        if (path7 != null) {
            canvas.drawPath(path7, this.borderPaint);
        }
    }

    private final void drawRectangularBorders(Canvas canvas) {
        RectF computeBorderInsets = computeBorderInsets();
        int b10 = c.b(computeBorderInsets.left);
        int b11 = c.b(computeBorderInsets.top);
        int b12 = c.b(computeBorderInsets.right);
        int b13 = c.b(computeBorderInsets.bottom);
        if (b10 > 0 || b12 > 0 || b11 > 0 || b13 > 0) {
            Rect bounds = getBounds();
            Intrinsics.checkNotNullExpressionValue(bounds, "getBounds(...)");
            int i5 = bounds.left;
            int i6 = bounds.top;
            int fastBorderCompatibleColorOrZero = fastBorderCompatibleColorOrZero(b10, b11, b12, b13, this.computedBorderColors.getLeft(), this.computedBorderColors.getTop(), this.computedBorderColors.getRight(), this.computedBorderColors.getBottom());
            if (fastBorderCompatibleColorOrZero == 0) {
                this.borderPaint.setAntiAlias(false);
                int width = bounds.width();
                int height = bounds.height();
                if (b10 > 0) {
                    float f2 = i5;
                    float f10 = i5 + b10;
                    int left = this.computedBorderColors.getLeft();
                    drawQuadrilateral(canvas, left, f2, i6, f10, i6 + b11, f10, r1 - b13, f2, i6 + height);
                }
                if (b11 > 0) {
                    float f11 = i6;
                    float f12 = i6 + b11;
                    int top = this.computedBorderColors.getTop();
                    drawQuadrilateral(canvas, top, i5, f11, i5 + b10, f12, r1 - b12, f12, i5 + width, f11);
                }
                if (b12 > 0) {
                    int i10 = i5 + width;
                    float f13 = i10;
                    int i11 = i6 + height;
                    float f14 = i10 - b12;
                    drawQuadrilateral(canvas, this.computedBorderColors.getRight(), f13, i6, f13, i11, f14, i11 - b13, f14, i6 + b11);
                }
                if (b13 > 0) {
                    int i12 = i6 + height;
                    float f15 = i12;
                    float f16 = i12 - b13;
                    drawQuadrilateral(canvas, this.computedBorderColors.getBottom(), i5, f15, i5 + width, f15, r1 - b12, f16, i5 + b10, f16);
                }
                this.borderPaint.setAntiAlias(true);
                return;
            }
            if (Color.alpha(fastBorderCompatibleColorOrZero) != 0) {
                int i13 = bounds.right;
                int i14 = bounds.bottom;
                this.borderPaint.setColor(multiplyColorAlpha(fastBorderCompatibleColorOrZero, this.borderAlpha));
                this.borderPaint.setStyle(Paint.Style.STROKE);
                Path path = new Path();
                this.pathForSingleBorder = path;
                if (b10 > 0) {
                    path.reset();
                    int b14 = c.b(computeBorderInsets.left);
                    updatePathEffect(b14);
                    this.borderPaint.setStrokeWidth(b14);
                    Path path2 = this.pathForSingleBorder;
                    if (path2 != null) {
                        path2.moveTo((b14 / 2) + i5, i6);
                    }
                    Path path3 = this.pathForSingleBorder;
                    if (path3 != null) {
                        path3.lineTo((b14 / 2) + i5, i14);
                    }
                    Path path4 = this.pathForSingleBorder;
                    if (path4 != null) {
                        canvas.drawPath(path4, this.borderPaint);
                    }
                }
                if (b11 > 0) {
                    Path path5 = this.pathForSingleBorder;
                    if (path5 != null) {
                        path5.reset();
                    }
                    int b15 = c.b(computeBorderInsets.top);
                    updatePathEffect(b15);
                    this.borderPaint.setStrokeWidth(b15);
                    Path path6 = this.pathForSingleBorder;
                    if (path6 != null) {
                        path6.moveTo(i5, (b15 / 2) + i6);
                    }
                    Path path7 = this.pathForSingleBorder;
                    if (path7 != null) {
                        path7.lineTo(i13, (b15 / 2) + i6);
                    }
                    Path path8 = this.pathForSingleBorder;
                    if (path8 != null) {
                        canvas.drawPath(path8, this.borderPaint);
                    }
                }
                if (b12 > 0) {
                    Path path9 = this.pathForSingleBorder;
                    if (path9 != null) {
                        path9.reset();
                    }
                    int b16 = c.b(computeBorderInsets.right);
                    updatePathEffect(b16);
                    this.borderPaint.setStrokeWidth(b16);
                    Path path10 = this.pathForSingleBorder;
                    if (path10 != null) {
                        path10.moveTo(i13 - (b16 / 2), i6);
                    }
                    Path path11 = this.pathForSingleBorder;
                    if (path11 != null) {
                        path11.lineTo(i13 - (b16 / 2), i14);
                    }
                    Path path12 = this.pathForSingleBorder;
                    if (path12 != null) {
                        canvas.drawPath(path12, this.borderPaint);
                    }
                }
                if (b13 > 0) {
                    Path path13 = this.pathForSingleBorder;
                    if (path13 != null) {
                        path13.reset();
                    }
                    int b17 = c.b(computeBorderInsets.bottom);
                    updatePathEffect(b17);
                    this.borderPaint.setStrokeWidth(b17);
                    Path path14 = this.pathForSingleBorder;
                    if (path14 != null) {
                        path14.moveTo(i5, i14 - (b17 / 2));
                    }
                    Path path15 = this.pathForSingleBorder;
                    if (path15 != null) {
                        path15.lineTo(i13, i14 - (b17 / 2));
                    }
                    Path path16 = this.pathForSingleBorder;
                    if (path16 != null) {
                        canvas.drawPath(path16, this.borderPaint);
                    }
                }
            }
        }
    }

    private final void drawRoundedBorders(Canvas canvas) {
        float f2;
        float f10;
        float f11;
        float f12;
        PointF pointF;
        PointF pointF2;
        PointF pointF3;
        PointF pointF4;
        CornerRadii topLeft;
        CornerRadii pixelFromDIP;
        CornerRadii topLeft2;
        CornerRadii pixelFromDIP2;
        updatePath();
        canvas.save();
        Path path = this.outerClipPathForBorderRadius;
        if (path == null) {
            throw new IllegalStateException("Required value was null.");
        }
        canvas.clipPath(path);
        RectF computeBorderInsets = computeBorderInsets();
        float f13 = 0.0f;
        if (computeBorderInsets.top > 0.0f || computeBorderInsets.bottom > 0.0f || computeBorderInsets.left > 0.0f || computeBorderInsets.right > 0.0f) {
            float fullBorderWidth = getFullBorderWidth();
            int borderColor = getBorderColor(LogicalEdge.ALL);
            if (computeBorderInsets.top != fullBorderWidth || computeBorderInsets.bottom != fullBorderWidth || computeBorderInsets.left != fullBorderWidth || computeBorderInsets.right != fullBorderWidth || this.computedBorderColors.getLeft() != borderColor || this.computedBorderColors.getTop() != borderColor || this.computedBorderColors.getRight() != borderColor || this.computedBorderColors.getBottom() != borderColor) {
                this.borderPaint.setStyle(Paint.Style.FILL);
                if (Build.VERSION.SDK_INT >= 26) {
                    Path path2 = this.innerClipPathForBorderRadius;
                    if (path2 == null) {
                        throw new IllegalStateException("Required value was null.");
                    }
                    canvas.clipOutPath(path2);
                } else {
                    Path path3 = this.innerClipPathForBorderRadius;
                    if (path3 == null) {
                        throw new IllegalStateException("Required value was null.");
                    }
                    canvas.clipPath(path3, Region.Op.DIFFERENCE);
                }
                RectF rectF = this.outerClipTempRectForBorderRadius;
                if (rectF == null) {
                    throw new IllegalStateException("Required value was null.");
                }
                float f14 = rectF.left;
                float f15 = rectF.right;
                float f16 = rectF.top;
                float f17 = rectF.bottom;
                PointF pointF5 = this.innerTopLeftCorner;
                if (pointF5 == null) {
                    throw new IllegalStateException("Required value was null.");
                }
                PointF pointF6 = this.innerTopRightCorner;
                if (pointF6 == null) {
                    throw new IllegalStateException("Required value was null.");
                }
                PointF pointF7 = this.innerBottomLeftCorner;
                if (pointF7 == null) {
                    throw new IllegalStateException("Required value was null.");
                }
                PointF pointF8 = this.innerBottomRightCorner;
                if (pointF8 == null) {
                    throw new IllegalStateException("Required value was null.");
                }
                if (computeBorderInsets.left > 0.0f) {
                    float f18 = this.gapBetweenPaths;
                    f2 = 0.0f;
                    float f19 = f18 + f17;
                    f12 = f17;
                    pointF4 = pointF8;
                    f10 = f15;
                    pointF2 = pointF6;
                    f11 = f16;
                    pointF3 = pointF7;
                    pointF = pointF5;
                    drawQuadrilateral(canvas, this.computedBorderColors.getLeft(), f14, f16 - f18, pointF5.x, pointF5.y - f18, pointF7.x, pointF7.y + f18, f14, f19);
                } else {
                    f2 = 0.0f;
                    f10 = f15;
                    f11 = f16;
                    f12 = f17;
                    pointF = pointF5;
                    pointF2 = pointF6;
                    pointF3 = pointF7;
                    pointF4 = pointF8;
                }
                if (computeBorderInsets.top > f2) {
                    float f20 = this.gapBetweenPaths;
                    drawQuadrilateral(canvas, this.computedBorderColors.getTop(), f14 - f20, f11, pointF.x - f20, pointF.y, pointF2.x + f20, pointF2.y, f10 + f20, f11);
                }
                if (computeBorderInsets.right > f2) {
                    float f21 = this.gapBetweenPaths;
                    drawQuadrilateral(canvas, this.computedBorderColors.getRight(), f10, f11 - f21, pointF2.x, pointF2.y - f21, pointF4.x, pointF4.y + f21, f10, f12 + f21);
                }
                if (computeBorderInsets.bottom > f2) {
                    float f22 = this.gapBetweenPaths;
                    drawQuadrilateral(canvas, this.computedBorderColors.getBottom(), f14 - f22, f12, pointF3.x - f22, pointF3.y, pointF4.x + f22, pointF4.y, f10 + f22, f12);
                }
            } else if (fullBorderWidth > 0.0f) {
                this.borderPaint.setColor(multiplyColorAlpha(borderColor, this.borderAlpha));
                this.borderPaint.setStyle(Paint.Style.STROKE);
                this.borderPaint.setStrokeWidth(fullBorderWidth);
                ComputedBorderRadius computedBorderRadius = this.computedBorderRadius;
                if (computedBorderRadius == null || !computedBorderRadius.isUniform()) {
                    Path path4 = this.centerDrawPath;
                    if (path4 == null) {
                        throw new IllegalStateException("Required value was null.");
                    }
                    canvas.drawPath(path4, this.borderPaint);
                } else {
                    RectF rectF2 = this.tempRectForCenterDrawPath;
                    if (rectF2 != null) {
                        ComputedBorderRadius computedBorderRadius2 = this.computedBorderRadius;
                        float horizontal = ((computedBorderRadius2 == null || (topLeft2 = computedBorderRadius2.getTopLeft()) == null || (pixelFromDIP2 = topLeft2.toPixelFromDIP()) == null) ? 0.0f : pixelFromDIP2.getHorizontal()) - (computeBorderInsets.left * 0.5f);
                        ComputedBorderRadius computedBorderRadius3 = this.computedBorderRadius;
                        if (computedBorderRadius3 != null && (topLeft = computedBorderRadius3.getTopLeft()) != null && (pixelFromDIP = topLeft.toPixelFromDIP()) != null) {
                            f13 = pixelFromDIP.getVertical();
                        }
                        canvas.drawRoundRect(rectF2, horizontal, f13 - (computeBorderInsets.top * 0.5f), this.borderPaint);
                    }
                }
            }
        }
        canvas.restore();
    }

    private final int fastBorderCompatibleColorOrZero(int borderLeft, int borderTop, int borderRight, int borderBottom, int colorLeft, int colorTop, int colorRight, int colorBottom) {
        if (Color.alpha(colorLeft) >= 255 && Color.alpha(colorTop) >= 255 && Color.alpha(colorRight) >= 255 && Color.alpha(colorBottom) >= 255) {
            int i5 = (borderBottom > 0 ? colorBottom : -1) & (borderLeft > 0 ? colorLeft : -1) & (borderTop > 0 ? colorTop : -1) & (borderRight > 0 ? colorRight : -1);
            if (borderLeft <= 0) {
                colorLeft = 0;
            }
            if (borderTop <= 0) {
                colorTop = 0;
            }
            int i6 = colorLeft | colorTop;
            if (borderRight <= 0) {
                colorRight = 0;
            }
            int i10 = i6 | colorRight;
            if (borderBottom <= 0) {
                colorBottom = 0;
            }
            if (i5 == (i10 | colorBottom)) {
                return i5;
            }
        }
        return 0;
    }

    private final void getEllipseIntersectionWithLine(double ellipseBoundsLeft, double ellipseBoundsTop, double ellipseBoundsRight, double ellipseBoundsBottom, double lineStartX, double lineStartY, double lineEndX, double lineEndY, PointF result) {
        double d6 = 2;
        double d7 = (ellipseBoundsLeft + ellipseBoundsRight) / d6;
        double d8 = (ellipseBoundsTop + ellipseBoundsBottom) / d6;
        double d10 = lineStartX - d7;
        double d11 = lineStartY - d8;
        double abs = Math.abs(ellipseBoundsRight - ellipseBoundsLeft) / d6;
        double abs2 = Math.abs(ellipseBoundsBottom - ellipseBoundsTop) / d6;
        double d12 = ((lineEndY - d8) - d11) / ((lineEndX - d7) - d10);
        double d13 = d11 - (d10 * d12);
        double d14 = abs2 * abs2;
        double d15 = abs * abs;
        double d16 = (d15 * d12 * d12) + d14;
        double d17 = d6 * abs * abs * d13 * d12;
        double d18 = d6 * d16;
        double sqrt = ((-d17) / d18) - Math.sqrt(Math.pow(d17 / d18, 2.0d) + ((-(d15 * ((d13 * d13) - d14))) / d16));
        double d19 = (d12 * sqrt) + d13;
        double d20 = sqrt + d7;
        double d21 = d19 + d8;
        if (Double.isNaN(d20) || Double.isNaN(d21)) {
            return;
        }
        result.x = (float) d20;
        result.y = (float) d21;
    }

    private final float getFullBorderWidth() {
        Spacing spacing = this.borderWidth;
        float raw = spacing != null ? spacing.getRaw(8) : Float.NaN;
        if (Float.isNaN(raw)) {
            return 0.0f;
        }
        return raw;
    }

    private final float getInnerBorderRadius(float computedRadius, float borderWidth) {
        float f2 = computedRadius - borderWidth;
        if (f2 < 0.0f) {
            return 0.0f;
        }
        return f2;
    }

    private final PathEffect getPathEffect(BorderStyle style, float borderWidth) {
        int i5 = WhenMappings.$EnumSwitchMapping$0[style.ordinal()];
        if (i5 == 1) {
            return null;
        }
        if (i5 == 2) {
            float f2 = borderWidth * 3;
            return new DashPathEffect(new float[]{f2, f2, f2, f2}, 0.0f);
        }
        if (i5 == 3) {
            return new DashPathEffect(new float[]{borderWidth, borderWidth, borderWidth, borderWidth}, 0.0f);
        }
        throw new n();
    }

    private final <T> ReadWriteProperty invalidatingAndPathChange(final T initialValue) {
        return new vo.c(initialValue) { // from class: com.facebook.react.uimanager.drawable.BorderDrawable$invalidatingAndPathChange$1
            @Override // vo.c
            public void afterChange(KProperty property, T oldValue, T newValue) {
                Intrinsics.checkNotNullParameter(property, "property");
                if (Intrinsics.areEqual(oldValue, newValue)) {
                    return;
                }
                this.needUpdatePath = true;
                this.invalidateSelf();
            }
        };
    }

    private final int multiplyColorAlpha(int color, int rawAlpha) {
        if (rawAlpha == 255) {
            return color;
        }
        if (rawAlpha == 0) {
            return color & 16777215;
        }
        return (color & 16777215) | ((((color >>> 24) * ((rawAlpha + (rawAlpha >> 7)) >> 7)) >> 8) << 24);
    }

    private final void updatePath() {
        ComputedBorderRadius computedBorderRadius;
        CornerRadii cornerRadii;
        CornerRadii cornerRadii2;
        CornerRadii cornerRadii3;
        CornerRadii cornerRadii4;
        char c6;
        char c8;
        char c10;
        Path path;
        int i5;
        RectF rectF;
        Path path2;
        Path path3;
        CornerRadii bottomRight;
        CornerRadii bottomLeft;
        CornerRadii topRight;
        CornerRadii topLeft;
        if (this.needUpdatePath) {
            this.needUpdatePath = false;
            Path path4 = this.innerClipPathForBorderRadius;
            if (path4 == null) {
                path4 = new Path();
            }
            this.innerClipPathForBorderRadius = path4;
            Path path5 = this.outerClipPathForBorderRadius;
            if (path5 == null) {
                path5 = new Path();
            }
            this.outerClipPathForBorderRadius = path5;
            this.pathForOutline = new Path();
            RectF rectF2 = this.innerClipTempRectForBorderRadius;
            if (rectF2 == null) {
                rectF2 = new RectF();
            }
            this.innerClipTempRectForBorderRadius = rectF2;
            RectF rectF3 = this.outerClipTempRectForBorderRadius;
            if (rectF3 == null) {
                rectF3 = new RectF();
            }
            this.outerClipTempRectForBorderRadius = rectF3;
            RectF rectF4 = this.tempRectForCenterDrawPath;
            if (rectF4 == null) {
                rectF4 = new RectF();
            }
            this.tempRectForCenterDrawPath = rectF4;
            Path path6 = this.innerClipPathForBorderRadius;
            if (path6 != null) {
                path6.reset();
                Unit unit = Unit.a;
            }
            Path path7 = this.outerClipPathForBorderRadius;
            if (path7 != null) {
                path7.reset();
                Unit unit2 = Unit.a;
            }
            RectF rectF5 = this.innerClipTempRectForBorderRadius;
            if (rectF5 != null) {
                rectF5.set(getBounds());
                Unit unit3 = Unit.a;
            }
            RectF rectF6 = this.outerClipTempRectForBorderRadius;
            if (rectF6 != null) {
                rectF6.set(getBounds());
                Unit unit4 = Unit.a;
            }
            RectF rectF7 = this.tempRectForCenterDrawPath;
            if (rectF7 != null) {
                rectF7.set(getBounds());
                Unit unit5 = Unit.a;
            }
            RectF computeBorderInsets = computeBorderInsets();
            if (Color.alpha(this.computedBorderColors.getLeft()) != 0 || Color.alpha(this.computedBorderColors.getTop()) != 0 || Color.alpha(this.computedBorderColors.getRight()) != 0 || Color.alpha(this.computedBorderColors.getBottom()) != 0) {
                RectF rectF8 = this.innerClipTempRectForBorderRadius;
                if (rectF8 != null) {
                    rectF8.top = rectF8 != null ? rectF8.top + computeBorderInsets.top : 0.0f;
                    Unit unit6 = Unit.a;
                }
                if (rectF8 != null) {
                    rectF8.bottom = rectF8 != null ? rectF8.bottom - computeBorderInsets.bottom : 0.0f;
                    Unit unit7 = Unit.a;
                }
                if (rectF8 != null) {
                    rectF8.left = rectF8 != null ? rectF8.left + computeBorderInsets.left : 0.0f;
                    Unit unit8 = Unit.a;
                }
                if (rectF8 != null) {
                    rectF8.right = rectF8 != null ? rectF8.right - computeBorderInsets.right : 0.0f;
                    Unit unit9 = Unit.a;
                }
            }
            RectF rectF9 = this.tempRectForCenterDrawPath;
            if (rectF9 != null) {
                rectF9.top = rectF9 != null ? (computeBorderInsets.top * 0.5f) + rectF9.top : 0.0f;
                Unit unit10 = Unit.a;
            }
            if (rectF9 != null) {
                rectF9.bottom = rectF9 != null ? rectF9.bottom - (computeBorderInsets.bottom * 0.5f) : 0.0f;
                Unit unit11 = Unit.a;
            }
            if (rectF9 != null) {
                rectF9.left = rectF9 != null ? (computeBorderInsets.left * 0.5f) + rectF9.left : 0.0f;
                Unit unit12 = Unit.a;
            }
            if (rectF9 != null) {
                rectF9.right = rectF9 != null ? rectF9.right - (computeBorderInsets.right * 0.5f) : 0.0f;
                Unit unit13 = Unit.a;
            }
            BorderRadiusStyle borderRadiusStyle = this.borderRadius;
            if (borderRadiusStyle != null) {
                int layoutDirection = getLayoutDirection();
                Context context = this.context;
                RectF rectF10 = this.outerClipTempRectForBorderRadius;
                float pxToDp = rectF10 != null ? PixelUtil.INSTANCE.pxToDp(rectF10.width()) : 0.0f;
                RectF rectF11 = this.outerClipTempRectForBorderRadius;
                computedBorderRadius = borderRadiusStyle.resolve(layoutDirection, context, pxToDp, rectF11 != null ? PixelUtil.INSTANCE.pxToDp(rectF11.height()) : 0.0f);
            } else {
                computedBorderRadius = null;
            }
            this.computedBorderRadius = computedBorderRadius;
            if (computedBorderRadius == null || (topLeft = computedBorderRadius.getTopLeft()) == null || (cornerRadii = topLeft.toPixelFromDIP()) == null) {
                cornerRadii = new CornerRadii(0.0f, 0.0f);
            }
            ComputedBorderRadius computedBorderRadius2 = this.computedBorderRadius;
            if (computedBorderRadius2 == null || (topRight = computedBorderRadius2.getTopRight()) == null || (cornerRadii2 = topRight.toPixelFromDIP()) == null) {
                cornerRadii2 = new CornerRadii(0.0f, 0.0f);
            }
            ComputedBorderRadius computedBorderRadius3 = this.computedBorderRadius;
            if (computedBorderRadius3 == null || (bottomLeft = computedBorderRadius3.getBottomLeft()) == null || (cornerRadii3 = bottomLeft.toPixelFromDIP()) == null) {
                cornerRadii3 = new CornerRadii(0.0f, 0.0f);
            }
            ComputedBorderRadius computedBorderRadius4 = this.computedBorderRadius;
            if (computedBorderRadius4 == null || (bottomRight = computedBorderRadius4.getBottomRight()) == null || (cornerRadii4 = bottomRight.toPixelFromDIP()) == null) {
                cornerRadii4 = new CornerRadii(0.0f, 0.0f);
            }
            float innerBorderRadius = getInnerBorderRadius(cornerRadii.getHorizontal(), computeBorderInsets.left);
            float innerBorderRadius2 = getInnerBorderRadius(cornerRadii.getVertical(), computeBorderInsets.top);
            float innerBorderRadius3 = getInnerBorderRadius(cornerRadii2.getHorizontal(), computeBorderInsets.right);
            float innerBorderRadius4 = getInnerBorderRadius(cornerRadii2.getVertical(), computeBorderInsets.top);
            float innerBorderRadius5 = getInnerBorderRadius(cornerRadii4.getHorizontal(), computeBorderInsets.right);
            float innerBorderRadius6 = getInnerBorderRadius(cornerRadii4.getVertical(), computeBorderInsets.bottom);
            float innerBorderRadius7 = getInnerBorderRadius(cornerRadii3.getHorizontal(), computeBorderInsets.left);
            float innerBorderRadius8 = getInnerBorderRadius(cornerRadii3.getVertical(), computeBorderInsets.bottom);
            RectF rectF12 = this.innerClipTempRectForBorderRadius;
            if (rectF12 == null || (path3 = this.innerClipPathForBorderRadius) == null) {
                c6 = 6;
                c8 = 7;
            } else {
                c8 = 7;
                c6 = 6;
                path3.addRoundRect(rectF12, new float[]{innerBorderRadius, innerBorderRadius2, innerBorderRadius3, innerBorderRadius4, innerBorderRadius5, innerBorderRadius6, innerBorderRadius7, innerBorderRadius8}, Path.Direction.CW);
                Unit unit14 = Unit.a;
            }
            RectF rectF13 = this.outerClipTempRectForBorderRadius;
            if (rectF13 == null || (path2 = this.outerClipPathForBorderRadius) == null) {
                c10 = 5;
            } else {
                float horizontal = cornerRadii.getHorizontal();
                float vertical = cornerRadii.getVertical();
                float horizontal2 = cornerRadii2.getHorizontal();
                float vertical2 = cornerRadii2.getVertical();
                float horizontal3 = cornerRadii4.getHorizontal();
                float vertical3 = cornerRadii4.getVertical();
                float horizontal4 = cornerRadii3.getHorizontal();
                float vertical4 = cornerRadii3.getVertical();
                c10 = 5;
                float[] fArr = new float[8];
                fArr[0] = horizontal;
                fArr[1] = vertical;
                fArr[2] = horizontal2;
                fArr[3] = vertical2;
                fArr[4] = horizontal3;
                fArr[5] = vertical3;
                fArr[c6] = horizontal4;
                fArr[c8] = vertical4;
                path2.addRoundRect(rectF13, fArr, Path.Direction.CW);
                Unit unit15 = Unit.a;
            }
            Spacing spacing = this.borderWidth;
            float f2 = spacing != null ? spacing.get(8) / 2.0f : 0.0f;
            Path path8 = this.pathForOutline;
            if (path8 != null) {
                RectF rectF14 = new RectF(getBounds());
                float horizontal5 = cornerRadii.getHorizontal() + f2;
                float vertical5 = cornerRadii.getVertical() + f2;
                float horizontal6 = cornerRadii2.getHorizontal() + f2;
                float vertical6 = cornerRadii2.getVertical() + f2;
                float horizontal7 = cornerRadii4.getHorizontal() + f2;
                float vertical7 = cornerRadii4.getVertical() + f2;
                float horizontal8 = cornerRadii3.getHorizontal() + f2;
                float vertical8 = cornerRadii3.getVertical() + f2;
                float[] fArr2 = new float[8];
                fArr2[0] = horizontal5;
                fArr2[1] = vertical5;
                fArr2[2] = horizontal6;
                fArr2[3] = vertical6;
                fArr2[4] = horizontal7;
                fArr2[c10] = vertical7;
                fArr2[c6] = horizontal8;
                fArr2[c8] = vertical8;
                path8.addRoundRect(rectF14, fArr2, Path.Direction.CW);
                Unit unit16 = Unit.a;
            }
            ComputedBorderRadius computedBorderRadius5 = this.computedBorderRadius;
            if (computedBorderRadius5 == null || !computedBorderRadius5.isUniform()) {
                Path path9 = this.centerDrawPath;
                if (path9 == null) {
                    path9 = new Path();
                }
                this.centerDrawPath = path9;
                path9.reset();
                Unit unit17 = Unit.a;
                RectF rectF15 = this.tempRectForCenterDrawPath;
                if (rectF15 != null && (path = this.centerDrawPath) != null) {
                    float horizontal9 = cornerRadii.getHorizontal() - (computeBorderInsets.left * 0.5f);
                    float vertical9 = cornerRadii.getVertical() - (computeBorderInsets.top * 0.5f);
                    float horizontal10 = cornerRadii2.getHorizontal() - (computeBorderInsets.right * 0.5f);
                    float vertical10 = cornerRadii2.getVertical() - (computeBorderInsets.top * 0.5f);
                    float horizontal11 = cornerRadii4.getHorizontal() - (computeBorderInsets.right * 0.5f);
                    float vertical11 = cornerRadii4.getVertical() - (computeBorderInsets.bottom * 0.5f);
                    i5 = 2;
                    float horizontal12 = cornerRadii3.getHorizontal() - (computeBorderInsets.left * 0.5f);
                    float vertical12 = cornerRadii3.getVertical() - (computeBorderInsets.bottom * 0.5f);
                    float[] fArr3 = new float[8];
                    fArr3[0] = horizontal9;
                    fArr3[1] = vertical9;
                    fArr3[2] = horizontal10;
                    fArr3[3] = vertical10;
                    fArr3[4] = horizontal11;
                    fArr3[c10] = vertical11;
                    fArr3[c6] = horizontal12;
                    fArr3[c8] = vertical12;
                    path.addRoundRect(rectF15, fArr3, Path.Direction.CW);
                    Unit unit18 = Unit.a;
                    rectF = this.innerClipTempRectForBorderRadius;
                    RectF rectF16 = this.outerClipTempRectForBorderRadius;
                    if (rectF != null || rectF16 == null) {
                    }
                    PointF pointF = this.innerTopLeftCorner;
                    if (pointF == null) {
                        pointF = new PointF();
                    }
                    this.innerTopLeftCorner = pointF;
                    pointF.x = rectF.left;
                    Unit unit19 = Unit.a;
                    pointF.y = rectF.top;
                    Unit unit20 = Unit.a;
                    float f10 = rectF.left;
                    float f11 = rectF.top;
                    float f12 = i5;
                    getEllipseIntersectionWithLine(f10, f11, (innerBorderRadius * f12) + f10, (f12 * innerBorderRadius2) + f11, rectF16.left, rectF16.top, f10, f11, pointF);
                    Unit unit21 = Unit.a;
                    PointF pointF2 = this.innerBottomLeftCorner;
                    if (pointF2 == null) {
                        pointF2 = new PointF();
                    }
                    this.innerBottomLeftCorner = pointF2;
                    pointF2.x = rectF.left;
                    Unit unit22 = Unit.a;
                    pointF2.y = rectF.bottom;
                    Unit unit23 = Unit.a;
                    float f13 = rectF.left;
                    float f14 = rectF.bottom;
                    float f15 = 2;
                    getEllipseIntersectionWithLine(f13, f14 - (innerBorderRadius8 * f15), (f15 * innerBorderRadius7) + f13, f14, rectF16.left, rectF16.bottom, f13, f14, pointF2);
                    Unit unit24 = Unit.a;
                    PointF pointF3 = this.innerTopRightCorner;
                    if (pointF3 == null) {
                        pointF3 = new PointF();
                    }
                    this.innerTopRightCorner = pointF3;
                    pointF3.x = rectF.right;
                    Unit unit25 = Unit.a;
                    pointF3.y = rectF.top;
                    Unit unit26 = Unit.a;
                    float f16 = rectF.right;
                    float f17 = 2;
                    float f18 = rectF.top;
                    getEllipseIntersectionWithLine(f16 - (innerBorderRadius3 * f17), f18, f16, (f17 * innerBorderRadius4) + f18, rectF16.right, rectF16.top, f16, f18, pointF3);
                    Unit unit27 = Unit.a;
                    PointF pointF4 = this.innerBottomRightCorner;
                    if (pointF4 == null) {
                        pointF4 = new PointF();
                    }
                    this.innerBottomRightCorner = pointF4;
                    pointF4.x = rectF.right;
                    Unit unit28 = Unit.a;
                    pointF4.y = rectF.bottom;
                    Unit unit29 = Unit.a;
                    float f19 = rectF.right;
                    float f20 = 2;
                    float f21 = rectF.bottom;
                    getEllipseIntersectionWithLine(f19 - (innerBorderRadius5 * f20), f21 - (f20 * innerBorderRadius6), f19, f21, rectF16.right, rectF16.bottom, f19, f21, pointF4);
                    Unit unit30 = Unit.a;
                    return;
                }
            }
            i5 = 2;
            rectF = this.innerClipTempRectForBorderRadius;
            RectF rectF162 = this.outerClipTempRectForBorderRadius;
            if (rectF != null) {
            }
        }
    }

    private final void updatePathEffect() {
        BorderStyle borderStyle = getBorderStyle();
        if (borderStyle != null) {
            this.borderPaint.setPathEffect(getBorderStyle() != null ? getPathEffect(borderStyle, getFullBorderWidth()) : null);
        }
    }

    @Override // android.graphics.drawable.Drawable
    public void draw(@NotNull Canvas canvas) {
        ColorEdges colorEdges;
        Intrinsics.checkNotNullParameter(canvas, "canvas");
        updatePathEffect();
        Integer[] numArr = this.borderColors;
        if (numArr == null || (colorEdges = BorderColors.m1272resolveimpl(numArr, getLayoutDirection(), this.context)) == null) {
            colorEdges = this.computedBorderColors;
        }
        this.computedBorderColors = colorEdges;
        BorderRadiusStyle borderRadiusStyle = this.borderRadius;
        if (borderRadiusStyle == null || !borderRadiusStyle.hasRoundedBorders()) {
            drawRectangularBorders(canvas);
        } else {
            drawRoundedBorders(canvas);
        }
    }

    public final int getBorderColor(@NotNull LogicalEdge position) {
        Integer num;
        Intrinsics.checkNotNullParameter(position, "position");
        Integer[] numArr = this.borderColors;
        if (numArr == null || (num = numArr[position.ordinal()]) == null) {
            return -16777216;
        }
        return num.intValue();
    }

    public final BorderInsets getBorderInsets() {
        return this.borderInsets;
    }

    public final BorderRadiusStyle getBorderRadius() {
        return this.borderRadius;
    }

    public final BorderStyle getBorderStyle() {
        return (BorderStyle) this.borderStyle.getValue(this, $$delegatedProperties[0]);
    }

    public final Spacing getBorderWidth() {
        return this.borderWidth;
    }

    public final Path getInnerClipPathForBorderRadius() {
        return this.innerClipPathForBorderRadius;
    }

    @Override // android.graphics.drawable.Drawable
    @d
    public int getOpacity() {
        int alpha = Color.alpha(multiplyColorAlpha(this.computedBorderColors.getLeft(), this.borderAlpha));
        int[] other = {Color.alpha(multiplyColorAlpha(this.computedBorderColors.getTop(), this.borderAlpha)), Color.alpha(multiplyColorAlpha(this.computedBorderColors.getRight(), this.borderAlpha)), Color.alpha(multiplyColorAlpha(this.computedBorderColors.getBottom(), this.borderAlpha))};
        Intrinsics.checkNotNullParameter(other, "other");
        for (int i5 = 0; i5 < 3; i5++) {
            alpha = Math.max(alpha, other[i5]);
        }
        if (alpha == 0) {
            return -2;
        }
        int alpha2 = Color.alpha(multiplyColorAlpha(this.computedBorderColors.getLeft(), this.borderAlpha));
        int[] other2 = {Color.alpha(multiplyColorAlpha(this.computedBorderColors.getTop(), this.borderAlpha)), Color.alpha(multiplyColorAlpha(this.computedBorderColors.getRight(), this.borderAlpha)), Color.alpha(multiplyColorAlpha(this.computedBorderColors.getBottom(), this.borderAlpha))};
        Intrinsics.checkNotNullParameter(other2, "other");
        for (int i6 = 0; i6 < 3; i6++) {
            alpha2 = Math.min(alpha2, other2[i6]);
        }
        return alpha2 == 255 ? -1 : -3;
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
        this.borderAlpha = alpha;
        invalidateSelf();
    }

    public final void setBorderColor(@NotNull LogicalEdge position, Integer color) {
        Intrinsics.checkNotNullParameter(position, "position");
        Integer[] numArr = this.borderColors;
        if (numArr == null) {
            numArr = BorderColors.m1268constructorimpl$default(null, 1, null);
        }
        this.borderColors = numArr;
        if (numArr != null) {
            numArr[position.ordinal()] = color;
        }
        this.needUpdatePath = true;
        invalidateSelf();
    }

    public final void setBorderInsets(BorderInsets borderInsets) {
        this.borderInsets = borderInsets;
    }

    public final void setBorderRadius(BorderRadiusStyle borderRadiusStyle) {
        this.borderRadius = borderRadiusStyle;
    }

    public final void setBorderStyle(BorderStyle borderStyle) {
        this.borderStyle.setValue(this, $$delegatedProperties[0], borderStyle);
    }

    public final void setBorderWidth(int position, float width) {
        Spacing spacing = this.borderWidth;
        if (FloatUtil.floatsEqual(spacing != null ? Float.valueOf(spacing.getRaw(position)) : null, Float.valueOf(width))) {
            return;
        }
        Spacing spacing2 = this.borderWidth;
        if (spacing2 != null) {
            spacing2.set(position, width);
        }
        if (position == 0 || position == 1 || position == 2 || position == 3 || position == 4 || position == 5 || position == 8) {
            this.needUpdatePath = true;
        }
        invalidateSelf();
    }

    @Override // android.graphics.drawable.Drawable
    public void setColorFilter(ColorFilter colorFilter) {
    }

    public final void setBorderRadius(@NotNull BorderRadiusProp property, LengthPercentage radius) {
        Intrinsics.checkNotNullParameter(property, "property");
        BorderRadiusStyle borderRadiusStyle = this.borderRadius;
        if (Intrinsics.areEqual(radius, borderRadiusStyle != null ? borderRadiusStyle.get(property) : null)) {
            return;
        }
        BorderRadiusStyle borderRadiusStyle2 = this.borderRadius;
        if (borderRadiusStyle2 != null) {
            borderRadiusStyle2.set(property, radius);
        }
        this.needUpdatePath = true;
        invalidateSelf();
    }

    public final void setBorderStyle(String style) {
        BorderStyle valueOf;
        if (style == null) {
            valueOf = null;
        } else {
            String upperCase = style.toUpperCase(Locale.ROOT);
            Intrinsics.checkNotNullExpressionValue(upperCase, "toUpperCase(...)");
            valueOf = BorderStyle.valueOf(upperCase);
        }
        setBorderStyle(valueOf);
        this.needUpdatePath = true;
        invalidateSelf();
    }

    private final void updatePathEffect(int borderWidth) {
        BorderStyle borderStyle = getBorderStyle();
        if (borderStyle != null) {
            this.borderPaint.setPathEffect(getBorderStyle() != null ? getPathEffect(borderStyle, borderWidth) : null);
        }
    }
}
