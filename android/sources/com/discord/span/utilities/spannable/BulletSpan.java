package com.discord.span.utilities.spannable;

import android.graphics.Canvas;
import android.graphics.Paint;
import android.graphics.Path;
import android.text.Layout;
import android.text.Spanned;
import android.text.style.LeadingMarginSpan;
import com.facebook.react.uimanager.ViewProps;
import kotlin.Metadata;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.SourceDebugExtension;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u0000L\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\b\n\u0002\b\u0002\n\u0002\u0010\u000b\n\u0002\b\u0002\n\u0002\u0010\u0007\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u000b\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0006\n\u0002\u0010\r\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0002\u0018\u0000 '2\u00020\u0001:\u0001'BC\u0012\b\b\u0001\u0010\u0002\u001a\u00020\u0003\u0012\b\b\u0002\u0010\u0004\u001a\u00020\u0003\u0012\b\b\u0002\u0010\u0005\u001a\u00020\u0006\u0012\b\b\u0002\u0010\u0007\u001a\u00020\u0003\u0012\b\b\u0002\u0010\b\u001a\u00020\t\u0012\b\b\u0002\u0010\n\u001a\u00020\u000b¢\u0006\u0004\b\f\u0010\rJ\u0010\u0010\u0014\u001a\u00020\u00032\u0006\u0010\u0015\u001a\u00020\u0006H\u0016Jh\u0010\u0016\u001a\u00020\u00172\u0006\u0010\u0018\u001a\u00020\u00192\u0006\u0010\u001a\u001a\u00020\u001b2\u0006\u0010\u001c\u001a\u00020\u00032\u0006\u0010\u001d\u001a\u00020\u00032\u0006\u0010\u001e\u001a\u00020\u00032\u0006\u0010\u001f\u001a\u00020\u00032\u0006\u0010 \u001a\u00020\u00032\u0006\u0010!\u001a\u00020\"2\u0006\u0010#\u001a\u00020\u00032\u0006\u0010$\u001a\u00020\u00032\u0006\u0010\u0015\u001a\u00020\u00062\u0006\u0010%\u001a\u00020&H\u0016R\u000e\u0010\u000e\u001a\u00020\u0003X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u000f\u001a\u00020\u0003X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0010\u001a\u00020\u0006X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0011\u001a\u00020\u0003X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0012\u001a\u00020\tX\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0013\u001a\u00020\u000bX\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006("}, d2 = {"Lcom/discord/span/utilities/spannable/BulletSpan;", "Landroid/text/style/LeadingMarginSpan;", ViewProps.COLOR, "", "gapWidth", "wantColor", "", "bulletRadius", "strokeWidth", "", "style", "Landroid/graphics/Paint$Style;", "<init>", "(IIZIFLandroid/graphics/Paint$Style;)V", "mGapWidth", "mBulletRadius", "mWantColor", "mColor", "mStrokeWidth", "mStyle", "getLeadingMargin", "first", "drawLeadingMargin", "", "c", "Landroid/graphics/Canvas;", "p", "Landroid/graphics/Paint;", "x", "dir", ViewProps.TOP, "baseline", ViewProps.BOTTOM, "text", "", ViewProps.START, ViewProps.END, "l", "Landroid/text/Layout;", "Companion", "span_utilities_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
@SourceDebugExtension({"SMAP\nBulletSpan.kt\nKotlin\n*S Kotlin\n*F\n+ 1 BulletSpan.kt\ncom/discord/span/utilities/spannable/BulletSpan\n+ 2 Canvas.kt\nandroidx/core/graphics/CanvasKt\n*L\n1#1,98:1\n44#2,8:99\n*S KotlinDebug\n*F\n+ 1 BulletSpan.kt\ncom/discord/span/utilities/spannable/BulletSpan\n*L\n72#1:99,8\n*E\n"})
/* loaded from: classes.dex */
public final class BulletSpan implements LeadingMarginSpan {
    public static final int STANDARD_BULLET_RADIUS_PX = 4;
    public static final int STANDARD_GAP_WIDTH_PX = 2;
    public static final float STANDARD_STROKE_WIDTH_PX = 4.0f;
    private static Path sBulletPath;
    private final int mBulletRadius;
    private final int mColor;
    private final int mGapWidth;
    private final float mStrokeWidth;

    @NotNull
    private final Paint.Style mStyle;
    private final boolean mWantColor;

    public BulletSpan(int i5, int i6, boolean z5, int i10, float f2, @NotNull Paint.Style style) {
        Intrinsics.checkNotNullParameter(style, "style");
        this.mGapWidth = i6;
        this.mBulletRadius = i10;
        this.mWantColor = z5;
        this.mColor = i5;
        this.mStrokeWidth = f2;
        this.mStyle = style;
    }

    @Override // android.text.style.LeadingMarginSpan
    public void drawLeadingMargin(@NotNull Canvas c6, @NotNull Paint p3, int x5, int dir, int top, int baseline, int bottom, @NotNull CharSequence text, int start, int end, boolean first, @NotNull Layout l6) {
        int i5;
        Intrinsics.checkNotNullParameter(c6, "c");
        Intrinsics.checkNotNullParameter(p3, "p");
        Intrinsics.checkNotNullParameter(text, "text");
        Intrinsics.checkNotNullParameter(l6, "l");
        if (((Spanned) text).getSpanStart(this) == start) {
            Paint.Style style = p3.getStyle();
            if (this.mWantColor) {
                i5 = p3.getColor();
                p3.setColor(this.mColor);
            } else {
                i5 = 0;
            }
            p3.setStyle(this.mStyle);
            Paint.Style style2 = this.mStyle;
            if (style2 == Paint.Style.STROKE || style2 == Paint.Style.FILL_AND_STROKE) {
                p3.setStrokeWidth(this.mStrokeWidth);
            }
            if (c6.isHardwareAccelerated()) {
                if (sBulletPath == null) {
                    Path path = new Path();
                    path.addCircle(0.0f, 0.0f, this.mBulletRadius * 1.2f, Path.Direction.CW);
                    sBulletPath = path;
                }
                float f2 = (dir * 1.2f * this.mBulletRadius) + x5;
                float f10 = (top + bottom) / 2.0f;
                int save = c6.save();
                c6.translate(f2, f10);
                try {
                    Path path2 = sBulletPath;
                    Intrinsics.checkNotNull(path2);
                    c6.drawPath(path2, p3);
                } finally {
                    c6.restoreToCount(save);
                }
            } else {
                c6.drawCircle((dir * r11) + x5, (top + bottom) / 2.0f, this.mBulletRadius, p3);
            }
            if (this.mWantColor) {
                p3.setColor(i5);
            }
            p3.setStyle(style);
        }
    }

    @Override // android.text.style.LeadingMarginSpan
    public int getLeadingMargin(boolean first) {
        return (this.mBulletRadius * 2) + this.mGapWidth;
    }

    public /* synthetic */ BulletSpan(int i5, int i6, boolean z5, int i10, float f2, Paint.Style style, int i11, DefaultConstructorMarker defaultConstructorMarker) {
        this(i5, (i11 & 2) != 0 ? 2 : i6, (i11 & 4) != 0 ? true : z5, (i11 & 8) != 0 ? 4 : i10, (i11 & 16) != 0 ? 4.0f : f2, (i11 & 32) != 0 ? Paint.Style.FILL : style);
    }
}
