package com.facebook.react.views.text;

import android.graphics.Rect;
import android.text.Layout;
import android.text.TextPaint;
import android.util.DisplayMetrics;
import com.facebook.react.bridge.Arguments;
import com.facebook.react.bridge.ReadableMapBuilder;
import com.facebook.react.bridge.WritableArray;
import com.facebook.react.bridge.WritableMap;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.SourceDebugExtension;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u00002\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\u000e\n\u0002\b\u0002\n\u0002\u0010\u0007\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\r\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\bÀ\u0002\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J \u0010\t\u001a\u00020\n2\u0006\u0010\u000b\u001a\u00020\f2\u0006\u0010\r\u001a\u00020\u000e2\u0006\u0010\u000f\u001a\u00020\u0010H\u0007R\u000e\u0010\u0004\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\u0006\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\u0007\u001a\u00020\bX\u0082T¢\u0006\u0002\n\u0000¨\u0006\u0011"}, d2 = {"Lcom/facebook/react/views/text/FontMetricsUtil;", "", "<init>", "()V", "CAP_HEIGHT_MEASUREMENT_TEXT", "", "X_HEIGHT_MEASUREMENT_TEXT", "AMPLIFICATION_FACTOR", "", "getFontMetrics", "Lcom/facebook/react/bridge/WritableArray;", "text", "", "layout", "Landroid/text/Layout;", "dm", "Landroid/util/DisplayMetrics;", "ReactAndroid_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
@SourceDebugExtension({"SMAP\nFontMetricsUtil.kt\nKotlin\n*S Kotlin\n*F\n+ 1 FontMetricsUtil.kt\ncom/facebook/react/views/text/FontMetricsUtil\n+ 2 fake.kt\nkotlin/jvm/internal/FakeKt\n+ 3 ReadableMapBuilder.kt\ncom/facebook/react/bridge/ReadableMapBuilderKt\n*L\n1#1,74:1\n1#2:75\n30#3,3:76\n*S KotlinDebug\n*F\n+ 1 FontMetricsUtil.kt\ncom/facebook/react/views/text/FontMetricsUtil\n*L\n57#1:76,3\n*E\n"})
/* loaded from: classes3.dex */
public final class FontMetricsUtil {
    private static final float AMPLIFICATION_FACTOR = 100.0f;

    @NotNull
    private static final String CAP_HEIGHT_MEASUREMENT_TEXT = "T";

    @NotNull
    public static final FontMetricsUtil INSTANCE = new FontMetricsUtil();

    @NotNull
    private static final String X_HEIGHT_MEASUREMENT_TEXT = "x";

    private FontMetricsUtil() {
    }

    @NotNull
    public static final WritableArray getFontMetrics(@NotNull CharSequence text, @NotNull Layout layout, @NotNull DisplayMetrics dm2) {
        Intrinsics.checkNotNullParameter(text, "text");
        Intrinsics.checkNotNullParameter(layout, "layout");
        Intrinsics.checkNotNullParameter(dm2, "dm");
        WritableArray createArray = Arguments.createArray();
        TextPaint textPaint = new TextPaint(layout.getPaint());
        textPaint.setTextSize(textPaint.getTextSize() * AMPLIFICATION_FACTOR);
        int i5 = 0;
        int i6 = 1;
        textPaint.getTextBounds(CAP_HEIGHT_MEASUREMENT_TEXT, 0, 1, new Rect());
        float height = (r6.height() / AMPLIFICATION_FACTOR) / dm2.density;
        Rect rect = new Rect();
        String str = X_HEIGHT_MEASUREMENT_TEXT;
        textPaint.getTextBounds(X_HEIGHT_MEASUREMENT_TEXT, 0, 1, rect);
        float height2 = (rect.height() / AMPLIFICATION_FACTOR) / dm2.density;
        int lineCount = layout.getLineCount();
        while (i5 < lineCount) {
            float lineWidth = (text.length() <= 0 || text.charAt(layout.getLineEnd(i5) - i6) != '\n') ? layout.getLineWidth(i5) : layout.getLineMax(i5);
            layout.getLineBounds(i5, new Rect());
            WritableMap createMap = Arguments.createMap();
            ReadableMapBuilder readableMapBuilder = new ReadableMapBuilder(createMap);
            readableMapBuilder.put(str, layout.getLineLeft(i5) / dm2.density);
            readableMapBuilder.put("y", r12.top / dm2.density);
            readableMapBuilder.put("width", lineWidth / dm2.density);
            readableMapBuilder.put("height", r12.height() / dm2.density);
            readableMapBuilder.put("descender", layout.getLineDescent(i5) / dm2.density);
            readableMapBuilder.put("ascender", (-layout.getLineAscent(i5)) / dm2.density);
            readableMapBuilder.put("baseline", layout.getLineBaseline(i5) / dm2.density);
            readableMapBuilder.put("capHeight", height);
            readableMapBuilder.put("xHeight", height2);
            readableMapBuilder.put("text", text.subSequence(layout.getLineStart(i5), layout.getLineEnd(i5)).toString());
            createArray.pushMap(createMap);
            i5++;
            str = str;
            lineCount = lineCount;
            i6 = 1;
        }
        return createArray;
    }
}
