package com.facebook.react.views.text;

import android.content.res.AssetManager;
import android.graphics.Color;
import android.graphics.Typeface;
import android.os.Build;
import android.text.BoringLayout;
import android.text.Layout;
import android.text.Spannable;
import android.text.SpannableString;
import android.text.SpannableStringBuilder;
import android.text.Spanned;
import android.text.StaticLayout;
import android.text.TextDirectionHeuristics;
import android.text.TextPaint;
import android.text.TextUtils;
import android.text.style.LeadingMarginSpan;
import com.discord.notifications.client.a;
import com.facebook.react.bridge.WritableArray;
import com.facebook.react.common.ReactConstants;
import com.facebook.react.common.mapbuffer.MapBuffer;
import com.facebook.react.common.mapbuffer.ReadableMapBuffer;
import com.facebook.react.internal.featureflags.ReactNativeFeatureFlags;
import com.facebook.react.uimanager.DisplayMetricsHolder;
import com.facebook.react.uimanager.PixelUtil;
import com.facebook.react.uimanager.ReactAccessibilityDelegate;
import com.facebook.react.uimanager.ViewProps;
import com.facebook.react.views.text.TextAttributeProps;
import com.facebook.react.views.text.internal.span.CustomLetterSpacingSpan;
import com.facebook.react.views.text.internal.span.CustomLineHeightSpan;
import com.facebook.react.views.text.internal.span.CustomStyleSpan;
import com.facebook.react.views.text.internal.span.LinearGradientSpan;
import com.facebook.react.views.text.internal.span.ReactAbsoluteSizeSpan;
import com.facebook.react.views.text.internal.span.ReactBackgroundColorSpan;
import com.facebook.react.views.text.internal.span.ReactClickableSpan;
import com.facebook.react.views.text.internal.span.ReactForegroundColorSpan;
import com.facebook.react.views.text.internal.span.ReactFragmentIndexSpan;
import com.facebook.react.views.text.internal.span.ReactLinkSpan;
import com.facebook.react.views.text.internal.span.ReactOpacitySpan;
import com.facebook.react.views.text.internal.span.ReactStrikethroughSpan;
import com.facebook.react.views.text.internal.span.ReactTagSpan;
import com.facebook.react.views.text.internal.span.ReactTextPaintHolderSpan;
import com.facebook.react.views.text.internal.span.ReactUnderlineSpan;
import com.facebook.react.views.text.internal.span.SetSpanOperation;
import com.facebook.react.views.text.internal.span.ShadowStyleSpan;
import com.facebook.react.views.text.internal.span.StrokeStyleSpan;
import com.facebook.react.views.text.internal.span.TextInlineViewPlaceholderSpan;
import com.facebook.yoga.YogaMeasureMode;
import fo.l;
import fo.n;
import java.lang.reflect.Method;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import java.util.concurrent.ConcurrentHashMap;
import kotlin.Lazy;
import kotlin.Metadata;
import kotlin.jvm.internal.ArrayIteratorKt;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.SourceDebugExtension;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u0000à\u0001\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\b\n\u0002\b\u0014\n\u0002\u0010\u000e\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000b\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0010\u0002\n\u0002\b\u0005\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010!\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0015\n\u0002\b\u0005\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0007\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0006\n\u0002\u0018\u0002\n\u0002\b\u0006\n\u0002\u0018\u0002\n\u0002\b\u0006\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0010\t\n\u0000\n\u0002\u0010\u0014\n\u0002\b\u0007\n\u0002\u0018\u0002\n\u0002\b\u0007\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0006\bÀ\u0002\u0018\u00002\u00020\u0001:\u0006\u0087\u0001\u0088\u0001\u0089\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\u0016\u0010*\u001a\u00020+2\u0006\u0010,\u001a\u00020\u00052\u0006\u0010-\u001a\u00020#J\u000e\u0010.\u001a\u00020+2\u0006\u0010,\u001a\u00020\u0005J\u000e\u0010/\u001a\u00020\u001f2\u0006\u00100\u001a\u000201J\u0012\u00102\u001a\u0004\u0018\u00010\u001a2\u0006\u00100\u001a\u000201H\u0002J\u0012\u00103\u001a\u00020\u00052\b\u00104\u001a\u0004\u0018\u00010\u001aH\u0002J\"\u00105\u001a\u0002062\u0006\u00100\u001a\u0002012\u0006\u00107\u001a\u00020#2\b\u00104\u001a\u0004\u0018\u00010\u001aH\u0002J\u0018\u00108\u001a\u00020\u00052\u0006\u00100\u001a\u0002012\u0006\u00107\u001a\u00020#H\u0007J8\u00109\u001a\u00020+2\u0006\u0010:\u001a\u00020;2\u0006\u0010<\u001a\u0002012\u0006\u0010=\u001a\u00020>2\f\u0010?\u001a\b\u0012\u0004\u0012\u00020A0@2\b\u0010B\u001a\u0004\u0018\u00010CH\u0002J\"\u0010D\u001a\u00020#2\u0006\u0010:\u001a\u00020;2\u0006\u0010<\u001a\u0002012\b\u0010B\u001a\u0004\u0018\u00010CH\u0002J\u0010\u0010E\u001a\u00020+2\u0006\u0010F\u001a\u00020#H\u0002J \u0010G\u001a\u00020#2\u0006\u0010:\u001a\u00020;2\u0006\u00100\u001a\u0002012\b\u0010H\u001a\u0004\u0018\u00010IJ,\u0010J\u001a\u00020#2\u0006\u0010:\u001a\u00020;2\u0006\u0010<\u001a\u0002012\b\u0010H\u001a\u0004\u0018\u00010I2\b\u0010B\u001a\u0004\u0018\u00010CH\u0002Jl\u0010K\u001a\u00020L2\u0006\u0010M\u001a\u00020#2\b\u0010N\u001a\u0004\u0018\u00010O2\u0006\u0010P\u001a\u00020Q2\u0006\u0010R\u001a\u00020S2\u0006\u0010T\u001a\u00020\u001f2\u0006\u0010U\u001a\u00020\u00052\u0006\u0010V\u001a\u00020\u00052\u0006\u0010W\u001a\u0002062\u0006\u0010X\u001a\u00020\u00052\b\u0010Y\u001a\u0004\u0018\u00010Z2\u0006\u0010[\u001a\u00020\u00052\u0006\u0010\\\u001a\u00020\u001dH\u0002JZ\u0010]\u001a\u00020L2\u0006\u0010M\u001a\u00020#2\u0006\u0010^\u001a\u00020\u00052\u0006\u0010T\u001a\u00020\u001f2\u0006\u0010U\u001a\u00020\u00052\u0006\u0010V\u001a\u00020\u00052\u0006\u0010W\u001a\u0002062\u0006\u0010X\u001a\u00020\u00052\b\u0010Y\u001a\u0004\u0018\u00010Z2\u0006\u0010[\u001a\u00020\u00052\u0006\u0010\\\u001a\u00020\u001dH\u0002J \u0010_\u001a\u00020+2\u0006\u0010\\\u001a\u00020\u001d2\u0006\u0010`\u001a\u00020a2\u0006\u0010:\u001a\u00020;H\u0002J\u0018\u0010b\u001a\u00020\u001d2\u0006\u0010`\u001a\u00020a2\u0006\u0010:\u001a\u00020;H\u0002J\u0018\u0010c\u001a\u00020\u001d2\u0006\u0010`\u001a\u00020a2\u0006\u0010:\u001a\u00020;H\u0002JJ\u0010d\u001a\u00020L2\u0006\u0010:\u001a\u00020;2\u0006\u00100\u001a\u0002012\u0006\u0010e\u001a\u0002012\u0006\u0010P\u001a\u00020Q2\u0006\u0010R\u001a\u00020S2\u0006\u0010f\u001a\u00020Q2\u0006\u0010g\u001a\u00020S2\b\u0010H\u001a\u0004\u0018\u00010IH\u0002JH\u0010K\u001a\u00020h2\u0006\u0010M\u001a\u00020#2\u0006\u0010\\\u001a\u00020\u001d2\u0006\u00100\u001a\u0002012\u0006\u0010e\u001a\u0002012\u0006\u0010P\u001a\u00020Q2\u0006\u0010R\u001a\u00020S2\u0006\u0010f\u001a\u00020Q2\u0006\u0010g\u001a\u00020SH\u0002JJ\u0010i\u001a\u00020j2\u0006\u0010:\u001a\u00020;2\u0006\u00100\u001a\u00020k2\u0006\u0010e\u001a\u00020k2\u0006\u0010P\u001a\u00020Q2\u0006\u0010R\u001a\u00020S2\u0006\u0010f\u001a\u00020Q2\u0006\u0010g\u001a\u00020S2\b\u0010H\u001a\u0004\u0018\u00010IH\u0007Jp\u0010l\u001a\u00020+2\u0006\u0010M\u001a\u00020#2\u0006\u0010P\u001a\u00020Q2\u0006\u0010R\u001a\u00020S2\u0006\u0010f\u001a\u00020Q2\u0006\u0010g\u001a\u00020S2\u0006\u0010m\u001a\u00020Q2\u0006\u0010n\u001a\u00020\u00052\u0006\u0010T\u001a\u00020\u001f2\u0006\u0010U\u001a\u00020\u00052\u0006\u0010V\u001a\u00020\u00052\u0006\u0010W\u001a\u0002062\u0006\u0010X\u001a\u00020\u00052\u0006\u0010\\\u001a\u00020\u001dH\u0007JT\u0010o\u001a\u00020p2\u0006\u0010:\u001a\u00020;2\u0006\u00100\u001a\u0002012\u0006\u0010e\u001a\u0002012\u0006\u0010P\u001a\u00020Q2\u0006\u0010R\u001a\u00020S2\u0006\u0010f\u001a\u00020Q2\u0006\u0010g\u001a\u00020S2\b\u0010H\u001a\u0004\u0018\u00010I2\b\u0010q\u001a\u0004\u0018\u00010rH\u0007J0\u0010s\u001a\u00020r2\u0006\u0010t\u001a\u00020j2\u0006\u0010P\u001a\u00020Q2\u0006\u0010R\u001a\u00020S2\u0006\u0010f\u001a\u00020Q2\u0006\u0010g\u001a\u00020SH\u0007J0\u0010u\u001a\u00020Q2\u0006\u0010v\u001a\u00020L2\u0006\u0010e\u001a\u00020k2\u0006\u0010f\u001a\u00020Q2\u0006\u0010w\u001a\u00020S2\u0006\u0010n\u001a\u00020\u0005H\u0002J\u0018\u0010x\u001a\u00020\u00052\u0006\u0010v\u001a\u00020L2\u0006\u0010n\u001a\u00020\u0005H\u0002J0\u0010y\u001a\u00020Q2\u0006\u0010v\u001a\u00020L2\u0006\u0010M\u001a\u00020z2\u0006\u0010P\u001a\u00020Q2\u0006\u0010R\u001a\u00020S2\u0006\u0010{\u001a\u00020\u0005H\u0002J(\u0010|\u001a\u00020Q2\u0006\u0010v\u001a\u00020L2\u0006\u0010f\u001a\u00020Q2\u0006\u0010g\u001a\u00020S2\u0006\u0010{\u001a\u00020\u0005H\u0002JC\u0010}\u001a\u00020\u00052\u0006\u0010v\u001a\u00020L2\u0006\u0010M\u001a\u00020z2\u0006\u0010~\u001a\u00020Q2\u0006\u0010{\u001a\u00020\u00052\u0006\u0010\u007f\u001a\u00020\u00052\u0007\u0010\u0080\u0001\u001a\u00020Q2\b\u0010\u0081\u0001\u001a\u00030\u0082\u0001H\u0002J=\u0010\u0083\u0001\u001a\u00030\u0084\u00012\u0007\u0010\u0085\u0001\u001a\u00020;2\u0006\u00100\u001a\u0002012\u0006\u0010e\u001a\u0002012\u0006\u0010P\u001a\u00020Q2\u0006\u0010f\u001a\u00020Q2\b\u0010H\u001a\u0004\u0018\u00010IH\u0007J\u001b\u0010\u0086\u0001\u001a\u0004\u0018\u00010O2\u0006\u0010M\u001a\u00020#2\u0006\u0010\\\u001a\u00020\u001dH\u0002R\u000e\u0010\u0004\u001a\u00020\u0005X\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010\u0006\u001a\u00020\u0005X\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010\u0007\u001a\u00020\u0005X\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010\b\u001a\u00020\u0005X\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010\t\u001a\u00020\u0005X\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010\n\u001a\u00020\u0005X\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010\u000b\u001a\u00020\u0005X\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010\f\u001a\u00020\u0005X\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010\r\u001a\u00020\u0005X\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010\u000e\u001a\u00020\u0005X\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010\u000f\u001a\u00020\u0005X\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010\u0010\u001a\u00020\u0005X\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010\u0011\u001a\u00020\u0005X\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010\u0012\u001a\u00020\u0005X\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010\u0013\u001a\u00020\u0005X\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010\u0014\u001a\u00020\u0005X\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010\u0015\u001a\u00020\u0005X\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010\u0016\u001a\u00020\u0005X\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010\u0017\u001a\u00020\u0005X\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010\u0018\u001a\u00020\u0005X\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010\u0019\u001a\u00020\u001aX\u0082\u0004¢\u0006\u0002\n\u0000R\u0014\u0010\u001b\u001a\b\u0012\u0004\u0012\u00020\u001d0\u001cX\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u001e\u001a\u00020\u001fX\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010 \u001a\u00020\u001fX\u0082T¢\u0006\u0002\n\u0000R\u001a\u0010!\u001a\u000e\u0012\u0004\u0012\u00020\u0005\u0012\u0004\u0012\u00020#0\"X\u0082\u0004¢\u0006\u0002\n\u0000R\u001d\u0010$\u001a\u0004\u0018\u00010%8BX\u0082\u0084\u0002¢\u0006\f\n\u0004\b(\u0010)\u001a\u0004\b&\u0010'¨\u0006\u008a\u0001"}, d2 = {"Lcom/facebook/react/views/text/TextLayoutManager;", "", "<init>", "()V", "AS_KEY_HASH", "", "AS_KEY_STRING", "AS_KEY_FRAGMENTS", "AS_KEY_CACHE_ID", "AS_KEY_BASE_ATTRIBUTES", "FR_KEY_STRING", "FR_KEY_REACT_TAG", "FR_KEY_IS_ATTACHMENT", "FR_KEY_WIDTH", "FR_KEY_HEIGHT", "FR_KEY_TEXT_ATTRIBUTES", "PA_KEY_MAX_NUMBER_OF_LINES", "PA_KEY_ELLIPSIZE_MODE", "PA_KEY_TEXT_BREAK_STRATEGY", "PA_KEY_ADJUST_FONT_SIZE_TO_FIT", "PA_KEY_INCLUDE_FONT_PADDING", "PA_KEY_HYPHENATION_FREQUENCY", "PA_KEY_MINIMUM_FONT_SIZE", "PA_KEY_MAXIMUM_FONT_SIZE", "PA_KEY_TEXT_ALIGN_VERTICAL", "TAG", "", "textPaintInstance", "Ljava/lang/ThreadLocal;", "Landroid/text/TextPaint;", "DEFAULT_INCLUDE_FONT_PADDING", "", "DEFAULT_ADJUST_FONT_SIZE_TO_FIT", "tagToSpannableCache", "Ljava/util/concurrent/ConcurrentHashMap;", "Landroid/text/Spannable;", "setUseBoundsForWidthMethod", "Ljava/lang/reflect/Method;", "getSetUseBoundsForWidthMethod", "()Ljava/lang/reflect/Method;", "setUseBoundsForWidthMethod$delegate", "Lkotlin/Lazy;", "setCachedSpannableForTag", "", "reactTag", "sp", "deleteCachedSpannableForTag", "isRTL", "attributedString", "Lcom/facebook/react/common/mapbuffer/MapBuffer;", "getTextAlignmentAttr", "getTextJustificationMode", "alignmentAttr", "getTextAlignment", "Landroid/text/Layout$Alignment;", "spanned", "getTextGravity", "buildSpannableFromFragments", "assets", "Landroid/content/res/AssetManager;", "fragments", "sb", "Landroid/text/SpannableStringBuilder;", "ops", "", "Lcom/facebook/react/views/text/internal/span/SetSpanOperation;", "outputReactTags", "", "buildSpannableFromFragmentsOptimized", "addLeadingMarginForTextEffects", "spannable", "getOrCreateSpannableForText", "reactTextViewManagerCallback", "Lcom/facebook/react/views/text/ReactTextViewManagerCallback;", "createSpannableFromAttributedString", "createLayout", "Landroid/text/Layout;", "text", "boring", "Landroid/text/BoringLayout$Metrics;", "width", "", "widthYogaMeasureMode", "Lcom/facebook/yoga/YogaMeasureMode;", ViewProps.INCLUDE_FONT_PADDING, ViewProps.TEXT_BREAK_STRATEGY, "hyphenationFrequency", "alignment", "justificationMode", ViewProps.ELLIPSIZE_MODE, "Landroid/text/TextUtils$TruncateAt;", "maxNumberOfLines", "paint", "buildLayout", "layoutWidth", "updateTextPaint", "baseTextAttributes", "Lcom/facebook/react/views/text/TextAttributeProps;", "scratchPaintWithAttributes", "newPaintWithAttributes", "createLayoutForMeasurement", "paragraphAttributes", "height", "heightYogaMeasureMode", "Lcom/facebook/react/views/text/TextLayoutManager$CreateLayoutResult;", "createPreparedLayout", "Lcom/facebook/react/views/text/PreparedLayout;", "Lcom/facebook/react/common/mapbuffer/ReadableMapBuffer;", "adjustSpannableFontToFit", "minimumFontSizeAttr", "maximumNumberOfLines", "measureText", "", "attachmentsPositions", "", "measurePreparedLayout", "preparedLayout", "getVerticalOffset", "layout", "heightMeasureMode", "calculateLineCount", "calculateWidth", "Landroid/text/Spanned;", "calculatedLineCount", "calculateHeight", "nextAttachmentMetrics", "calculatedWidth", "i", "verticalOffset", "metrics", "Lcom/facebook/react/views/text/TextLayoutManager$AttachmentMetrics;", "measureLines", "Lcom/facebook/react/bridge/WritableArray;", "assetManager", "isBoring", "FragmentAttributes", "CreateLayoutResult", "AttachmentMetrics", "ReactAndroid_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
@SourceDebugExtension({"SMAP\nTextLayoutManager.kt\nKotlin\n*S Kotlin\n*F\n+ 1 TextLayoutManager.kt\ncom/facebook/react/views/text/TextLayoutManager\n+ 2 fake.kt\nkotlin/jvm/internal/FakeKt\n*L\n1#1,1471:1\n1#2:1472\n*E\n"})
/* loaded from: classes3.dex */
public final class TextLayoutManager {
    public static final int AS_KEY_BASE_ATTRIBUTES = 4;
    public static final int AS_KEY_CACHE_ID = 3;
    public static final int AS_KEY_FRAGMENTS = 2;
    public static final int AS_KEY_HASH = 0;
    public static final int AS_KEY_STRING = 1;
    private static final boolean DEFAULT_ADJUST_FONT_SIZE_TO_FIT = false;
    private static final boolean DEFAULT_INCLUDE_FONT_PADDING = true;
    public static final int FR_KEY_HEIGHT = 4;
    public static final int FR_KEY_IS_ATTACHMENT = 2;
    public static final int FR_KEY_REACT_TAG = 1;
    public static final int FR_KEY_STRING = 0;
    public static final int FR_KEY_TEXT_ATTRIBUTES = 5;
    public static final int FR_KEY_WIDTH = 3;

    @NotNull
    public static final TextLayoutManager INSTANCE = new TextLayoutManager();
    public static final int PA_KEY_ADJUST_FONT_SIZE_TO_FIT = 3;
    public static final int PA_KEY_ELLIPSIZE_MODE = 1;
    public static final int PA_KEY_HYPHENATION_FREQUENCY = 5;
    public static final int PA_KEY_INCLUDE_FONT_PADDING = 4;
    public static final int PA_KEY_MAXIMUM_FONT_SIZE = 7;
    public static final int PA_KEY_MAX_NUMBER_OF_LINES = 0;
    public static final int PA_KEY_MINIMUM_FONT_SIZE = 6;
    public static final int PA_KEY_TEXT_ALIGN_VERTICAL = 8;
    public static final int PA_KEY_TEXT_BREAK_STRATEGY = 2;

    @NotNull
    private static final String TAG;

    /* renamed from: setUseBoundsForWidthMethod$delegate, reason: from kotlin metadata */
    @NotNull
    private static final Lazy setUseBoundsForWidthMethod;

    @NotNull
    private static final ConcurrentHashMap<Integer, Spannable> tagToSpannableCache;

    @NotNull
    private static final ThreadLocal<TextPaint> textPaintInstance;

    @Metadata(d1 = {"\u0000\u001c\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\u000b\n\u0002\b\u0005\n\u0002\u0010\u0007\n\u0002\b\u000e\b\u0002\u0018\u00002\u00020\u0001B\u0007¢\u0006\u0004\b\u0002\u0010\u0003R\u001a\u0010\u0004\u001a\u00020\u0005X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\u0006\u0010\u0007\"\u0004\b\b\u0010\tR\u001a\u0010\n\u001a\u00020\u000bX\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\f\u0010\r\"\u0004\b\u000e\u0010\u000fR\u001a\u0010\u0010\u001a\u00020\u000bX\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\u0011\u0010\r\"\u0004\b\u0012\u0010\u000fR\u001a\u0010\u0013\u001a\u00020\u000bX\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\u0014\u0010\r\"\u0004\b\u0015\u0010\u000fR\u001a\u0010\u0016\u001a\u00020\u000bX\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\u0017\u0010\r\"\u0004\b\u0018\u0010\u000f¨\u0006\u0019"}, d2 = {"Lcom/facebook/react/views/text/TextLayoutManager$AttachmentMetrics;", "", "<init>", "()V", "wasFound", "", "getWasFound", "()Z", "setWasFound", "(Z)V", ViewProps.TOP, "", "getTop", "()F", "setTop", "(F)V", ViewProps.LEFT, "getLeft", "setLeft", "width", "getWidth", "setWidth", "height", "getHeight", "setHeight", "ReactAndroid_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final class AttachmentMetrics {
        private float height;
        private float left;
        private float top;
        private boolean wasFound;
        private float width;

        public final float getHeight() {
            return this.height;
        }

        public final float getLeft() {
            return this.left;
        }

        public final float getTop() {
            return this.top;
        }

        public final boolean getWasFound() {
            return this.wasFound;
        }

        public final float getWidth() {
            return this.width;
        }

        public final void setHeight(float f2) {
            this.height = f2;
        }

        public final void setLeft(float f2) {
            this.left = f2;
        }

        public final void setTop(float f2) {
            this.top = f2;
        }

        public final void setWasFound(boolean z5) {
            this.wasFound = z5;
        }

        public final void setWidth(float f2) {
            this.width = f2;
        }
    }

    @Metadata(d1 = {"\u0000\u0018\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\b\n\u0002\b\t\b\u0002\u0018\u00002\u00020\u0001B\u001f\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005\u0012\u0006\u0010\u0006\u001a\u00020\u0005¢\u0006\u0004\b\u0007\u0010\bR\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\t\u0010\nR\u0011\u0010\u0004\u001a\u00020\u0005¢\u0006\b\n\u0000\u001a\u0004\b\u000b\u0010\fR\u0011\u0010\u0006\u001a\u00020\u0005¢\u0006\b\n\u0000\u001a\u0004\b\r\u0010\f¨\u0006\u000e"}, d2 = {"Lcom/facebook/react/views/text/TextLayoutManager$CreateLayoutResult;", "", "layout", "Landroid/text/Layout;", ViewProps.TEXT_BREAK_STRATEGY, "", "justificationMode", "<init>", "(Landroid/text/Layout;II)V", "getLayout", "()Landroid/text/Layout;", "getTextBreakStrategy", "()I", "getJustificationMode", "ReactAndroid_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final class CreateLayoutResult {
        private final int justificationMode;

        @NotNull
        private final Layout layout;
        private final int textBreakStrategy;

        public CreateLayoutResult(@NotNull Layout layout, int i5, int i6) {
            Intrinsics.checkNotNullParameter(layout, "layout");
            this.layout = layout;
            this.textBreakStrategy = i5;
            this.justificationMode = i6;
        }

        public final int getJustificationMode() {
            return this.justificationMode;
        }

        @NotNull
        public final Layout getLayout() {
            return this.layout;
        }

        public final int getTextBreakStrategy() {
            return this.textBreakStrategy;
        }
    }

    @Metadata(d1 = {"\u0000&\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\b\n\u0002\b\u0002\n\u0002\u0010\u000b\n\u0000\n\u0002\u0010\u0006\n\u0002\b\r\b\u0002\u0018\u00002\u00020\u0001B7\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005\u0012\u0006\u0010\u0006\u001a\u00020\u0005\u0012\u0006\u0010\u0007\u001a\u00020\b\u0012\u0006\u0010\t\u001a\u00020\n\u0012\u0006\u0010\u000b\u001a\u00020\n¢\u0006\u0004\b\f\u0010\rR\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u000e\u0010\u000fR\u0011\u0010\u0004\u001a\u00020\u0005¢\u0006\b\n\u0000\u001a\u0004\b\u0010\u0010\u0011R\u0011\u0010\u0006\u001a\u00020\u0005¢\u0006\b\n\u0000\u001a\u0004\b\u0012\u0010\u0011R\u0011\u0010\u0007\u001a\u00020\b¢\u0006\b\n\u0000\u001a\u0004\b\u0007\u0010\u0013R\u0011\u0010\t\u001a\u00020\n¢\u0006\b\n\u0000\u001a\u0004\b\u0014\u0010\u0015R\u0011\u0010\u000b\u001a\u00020\n¢\u0006\b\n\u0000\u001a\u0004\b\u0016\u0010\u0015¨\u0006\u0017"}, d2 = {"Lcom/facebook/react/views/text/TextLayoutManager$FragmentAttributes;", "", "props", "Lcom/facebook/react/views/text/TextAttributeProps;", "length", "", "reactTag", "isAttachment", "", "width", "", "height", "<init>", "(Lcom/facebook/react/views/text/TextAttributeProps;IIZDD)V", "getProps", "()Lcom/facebook/react/views/text/TextAttributeProps;", "getLength", "()I", "getReactTag", "()Z", "getWidth", "()D", "getHeight", "ReactAndroid_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final class FragmentAttributes {
        private final double height;
        private final boolean isAttachment;
        private final int length;

        @NotNull
        private final TextAttributeProps props;
        private final int reactTag;
        private final double width;

        public FragmentAttributes(@NotNull TextAttributeProps props, int i5, int i6, boolean z5, double d6, double d7) {
            Intrinsics.checkNotNullParameter(props, "props");
            this.props = props;
            this.length = i5;
            this.reactTag = i6;
            this.isAttachment = z5;
            this.width = d6;
            this.height = d7;
        }

        public final double getHeight() {
            return this.height;
        }

        public final int getLength() {
            return this.length;
        }

        @NotNull
        public final TextAttributeProps getProps() {
            return this.props;
        }

        public final int getReactTag() {
            return this.reactTag;
        }

        public final double getWidth() {
            return this.width;
        }

        /* renamed from: isAttachment, reason: from getter */
        public final boolean getIsAttachment() {
            return this.isAttachment;
        }
    }

    @Metadata(k = 3, mv = {2, 1, 0}, xi = 48)
    public /* synthetic */ class WhenMappings {
        public static final /* synthetic */ int[] $EnumSwitchMapping$0;
        public static final /* synthetic */ int[] $EnumSwitchMapping$1;

        static {
            int[] iArr = new int[Layout.Alignment.values().length];
            try {
                iArr[Layout.Alignment.ALIGN_NORMAL.ordinal()] = 1;
            } catch (NoSuchFieldError unused) {
            }
            try {
                iArr[Layout.Alignment.ALIGN_OPPOSITE.ordinal()] = 2;
            } catch (NoSuchFieldError unused2) {
            }
            try {
                iArr[Layout.Alignment.ALIGN_CENTER.ordinal()] = 3;
            } catch (NoSuchFieldError unused3) {
            }
            $EnumSwitchMapping$0 = iArr;
            int[] iArr2 = new int[YogaMeasureMode.values().length];
            try {
                iArr2[1] = 1;
            } catch (NoSuchFieldError unused4) {
            }
            try {
                iArr2[2] = 2;
            } catch (NoSuchFieldError unused5) {
            }
            $EnumSwitchMapping$1 = iArr2;
        }
    }

    static {
        Intrinsics.checkNotNullExpressionValue("TextLayoutManager", "getSimpleName(...)");
        TAG = "TextLayoutManager";
        textPaintInstance = new ThreadLocal<TextPaint>() { // from class: com.facebook.react.views.text.TextLayoutManager$textPaintInstance$1
            /* JADX WARN: Can't rename method to resolve collision */
            @Override // java.lang.ThreadLocal
            public TextPaint initialValue() {
                return new TextPaint(1);
            }
        };
        tagToSpannableCache = new ConcurrentHashMap<>();
        setUseBoundsForWidthMethod = l.a(new a(15));
    }

    private TextLayoutManager() {
    }

    private final void addLeadingMarginForTextEffects(Spannable spannable) {
        StrokeStyleSpan strokeSpan = StrokeStyleSpan.INSTANCE.getStrokeSpan(spannable);
        ShadowStyleSpan shadowSpan = ShadowStyleSpan.INSTANCE.getShadowSpan(spannable);
        int max = (int) Math.max(strokeSpan != null ? strokeSpan.getLeftOffset() : 0.0f, shadowSpan != null ? shadowSpan.getLeftOffset() : 0.0f);
        if (max > 0) {
            spannable.setSpan(new LeadingMarginSpan.Standard(max), 0, spannable.length(), 18);
        }
    }

    public static final void adjustSpannableFontToFit(@NotNull Spannable text, float width, @NotNull YogaMeasureMode widthYogaMeasureMode, float height, @NotNull YogaMeasureMode heightYogaMeasureMode, float minimumFontSizeAttr, int maximumNumberOfLines, boolean includeFontPadding, int textBreakStrategy, int hyphenationFrequency, @NotNull Layout.Alignment alignment, int justificationMode, @NotNull TextPaint paint) {
        int i5;
        int i6;
        Spannable text2 = text;
        TextPaint paint2 = paint;
        Intrinsics.checkNotNullParameter(text2, "text");
        Intrinsics.checkNotNullParameter(widthYogaMeasureMode, "widthYogaMeasureMode");
        Intrinsics.checkNotNullParameter(heightYogaMeasureMode, "heightYogaMeasureMode");
        Layout.Alignment alignment2 = alignment;
        Intrinsics.checkNotNullParameter(alignment2, "alignment");
        Intrinsics.checkNotNullParameter(paint2, "paint");
        BoringLayout.Metrics isBoring = INSTANCE.isBoring(text2, paint2);
        int dpToPx = (int) (Float.isNaN(minimumFontSizeAttr) ? PixelUtil.INSTANCE.dpToPx(4) : minimumFontSizeAttr);
        int i10 = 0;
        Class<ReactAbsoluteSizeSpan> cls = ReactAbsoluteSizeSpan.class;
        Iterator it = ArrayIteratorKt.iterator((ReactAbsoluteSizeSpan[]) text2.getSpans(0, text2.length(), cls));
        int i11 = dpToPx;
        while (it.hasNext()) {
            i11 = Math.max(i11, ((ReactAbsoluteSizeSpan) it.next()).getSize());
        }
        int i12 = i11;
        int i13 = dpToPx;
        while (true) {
            int i14 = ((i13 + i11) + 1) / 2;
            float f2 = i14 / i12;
            paint2.setTextSize(Math.max((int) (paint2.getTextSize() * f2), dpToPx));
            for (Iterator it2 = ArrayIteratorKt.iterator((ReactAbsoluteSizeSpan[]) text2.getSpans(i10, text2.length(), cls)); it2.hasNext(); it2 = it2) {
                ReactAbsoluteSizeSpan reactAbsoluteSizeSpan = (ReactAbsoluteSizeSpan) it2.next();
                text2.setSpan(new ReactAbsoluteSizeSpan(Math.max((int) (reactAbsoluteSizeSpan.getSize() * f2), dpToPx)), text2.getSpanStart(reactAbsoluteSizeSpan), text2.getSpanEnd(reactAbsoluteSizeSpan), text2.getSpanFlags(reactAbsoluteSizeSpan));
                text2.removeSpan(reactAbsoluteSizeSpan);
                isBoring = isBoring;
            }
            BoringLayout.Metrics metrics = isBoring;
            BoringLayout.Metrics isBoring2 = metrics != null ? INSTANCE.isBoring(text2, paint2) : metrics;
            Class<ReactAbsoluteSizeSpan> cls2 = cls;
            int i15 = i11;
            int i16 = dpToPx;
            int i17 = i13;
            Layout createLayout = INSTANCE.createLayout(text2, isBoring2, width, widthYogaMeasureMode, includeFontPadding, textBreakStrategy, hyphenationFrequency, alignment2, justificationMode, null, -1, paint2);
            if (i17 == i15) {
                return;
            }
            if (text.length() == 1) {
                i5 = 0;
                if (createLayout.getLineWidth(0) > width) {
                    i6 = 1;
                    int i18 = (heightYogaMeasureMode != YogaMeasureMode.f5163d || ((float) createLayout.getHeight()) <= height) ? i5 : 1;
                    int i19 = (maximumNumberOfLines != -1 || maximumNumberOfLines == 0 || createLayout.getLineCount() <= maximumNumberOfLines) ? i5 : 1;
                    if (i14 > i16 || (i19 == 0 && i18 == 0 && i6 == 0)) {
                        i17 = i14;
                    } else {
                        i15 = i15 - i17 == 1 ? i17 : i14;
                    }
                    alignment2 = alignment;
                    paint2 = paint;
                    i10 = i5;
                    isBoring = isBoring2;
                    i12 = i14;
                    i13 = i17;
                    cls = cls2;
                    text2 = text;
                    dpToPx = i16;
                    i11 = i15;
                }
            } else {
                i5 = 0;
            }
            i6 = i5;
            if (heightYogaMeasureMode != YogaMeasureMode.f5163d) {
            }
            if (maximumNumberOfLines != -1) {
            }
            if (i14 > i16) {
            }
            i17 = i14;
            alignment2 = alignment;
            paint2 = paint;
            i10 = i5;
            isBoring = isBoring2;
            i12 = i14;
            i13 = i17;
            cls = cls2;
            text2 = text;
            dpToPx = i16;
            i11 = i15;
        }
    }

    private final Layout buildLayout(Spannable text, int layoutWidth, boolean includeFontPadding, int textBreakStrategy, int hyphenationFrequency, Layout.Alignment alignment, int justificationMode, TextUtils.TruncateAt ellipsizeMode, int maxNumberOfLines, TextPaint paint) {
        StaticLayout.Builder hyphenationFrequency2 = StaticLayout.Builder.obtain(text, 0, text.length(), paint, layoutWidth).setAlignment(alignment).setLineSpacing(0.0f, 1.0f).setIncludePad(includeFontPadding).setBreakStrategy(textBreakStrategy).setHyphenationFrequency(hyphenationFrequency);
        Intrinsics.checkNotNullExpressionValue(hyphenationFrequency2, "setHyphenationFrequency(...)");
        if (maxNumberOfLines != -1 && maxNumberOfLines != 0) {
            hyphenationFrequency2.setEllipsize(ellipsizeMode).setMaxLines(maxNumberOfLines);
        }
        int i5 = Build.VERSION.SDK_INT;
        if (i5 >= 26) {
            hyphenationFrequency2.setJustificationMode(justificationMode);
        }
        if (i5 >= 28) {
            hyphenationFrequency2.setUseLineSpacingFromFallbacks(true);
        }
        StaticLayout build = hyphenationFrequency2.build();
        Intrinsics.checkNotNullExpressionValue(build, "build(...)");
        return build;
    }

    /* JADX WARN: Code restructure failed: missing block: B:85:0x009a, code lost:
    
        if (com.facebook.react.internal.featureflags.ReactNativeFeatureFlags.enablePreparedTextLayout() == false) goto L24;
     */
    /* JADX WARN: Code restructure failed: missing block: B:86:0x009c, code lost:
    
        r24.add(new com.facebook.react.views.text.internal.span.SetSpanOperation(r6, r8, new com.facebook.react.views.text.internal.span.ReactLinkSpan(r3)));
     */
    /* JADX WARN: Code restructure failed: missing block: B:87:0x00aa, code lost:
    
        r24.add(new com.facebook.react.views.text.internal.span.SetSpanOperation(r6, r8, new com.facebook.react.views.text.internal.span.ReactClickableSpan(r11)));
     */
    /* JADX WARN: Removed duplicated region for block: B:29:0x00ec  */
    /* JADX WARN: Removed duplicated region for block: B:31:0x00ef  */
    /* JADX WARN: Removed duplicated region for block: B:39:0x013c  */
    /* JADX WARN: Removed duplicated region for block: B:42:0x0157  */
    /* JADX WARN: Removed duplicated region for block: B:51:0x01b0  */
    /* JADX WARN: Removed duplicated region for block: B:54:0x01c3  */
    /* JADX WARN: Removed duplicated region for block: B:70:0x0247  */
    /* JADX WARN: Removed duplicated region for block: B:73:0x025e  */
    /* JADX WARN: Removed duplicated region for block: B:78:0x0270  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private final void buildSpannableFromFragments(AssetManager assets, MapBuffer fragments, SpannableStringBuilder sb2, List<SetSpanOperation> ops, int[] outputReactTags) {
        int[] gradientColors;
        Integer backgroundColor;
        Integer color;
        int count = fragments.getCount();
        int i5 = 0;
        int i6 = 0;
        while (i6 < count) {
            MapBuffer mapBuffer = fragments.getMapBuffer(i6);
            int length = sb2.length();
            TextAttributeProps fromMapBuffer = TextAttributeProps.INSTANCE.fromMapBuffer(mapBuffer.getMapBuffer(5));
            sb2.append((CharSequence) TextTransform.INSTANCE.apply(mapBuffer.getString(i5), fromMapBuffer.getTextTransform()));
            int length2 = sb2.length();
            int i10 = mapBuffer.contains(1) ? mapBuffer.getInt(1) : -1;
            if (mapBuffer.contains(2) && mapBuffer.getBoolean(2)) {
                ops.add(new SetSpanOperation(sb2.length() - 1, sb2.length(), new TextInlineViewPlaceholderSpan(i10, (int) PixelUtil.toPixelFromSP(mapBuffer.getDouble(3)), (int) PixelUtil.toPixelFromSP(mapBuffer.getDouble(4)))));
            } else if (length2 >= length) {
                if (fromMapBuffer.getRole() != null) {
                    if (fromMapBuffer.getIsColorSet() && (color = fromMapBuffer.getColor()) != null) {
                        ops.add(new SetSpanOperation(length, length2, new ReactForegroundColorSpan(color.intValue())));
                    }
                    gradientColors = fromMapBuffer.getGradientColors();
                    if (gradientColors != null && gradientColors.length >= 2) {
                        ops.add(new SetSpanOperation(length, length2, new LinearGradientSpan(length * fromMapBuffer.getFontSize(), gradientColors, !Float.isNaN(fromMapBuffer.getGradientAngle()) ? 0.0f : fromMapBuffer.getGradientAngle(), fromMapBuffer.getGradientLength(), fromMapBuffer.getGradientMode())));
                    }
                    if (fromMapBuffer.getIsBackgroundColorSet() && (backgroundColor = fromMapBuffer.getBackgroundColor()) != null) {
                        ops.add(new SetSpanOperation(length, length2, new ReactBackgroundColorSpan(backgroundColor.intValue())));
                    }
                    if (!Float.isNaN(fromMapBuffer.getOpacity())) {
                        ops.add(new SetSpanOperation(length, length2, new ReactOpacitySpan(fromMapBuffer.getOpacity())));
                    }
                    if (!Float.isNaN(fromMapBuffer.getLetterSpacing())) {
                        ops.add(new SetSpanOperation(length, length2, new CustomLetterSpacingSpan(fromMapBuffer.getLetterSpacing())));
                    }
                    ops.add(new SetSpanOperation(length, length2, new ReactAbsoluteSizeSpan(fromMapBuffer.getFontSize())));
                    if (fromMapBuffer.getFontStyle() == -1 || fromMapBuffer.getFontWeight() != -1 || fromMapBuffer.getFontFamily() != null) {
                        ops.add(new SetSpanOperation(length, length2, new CustomStyleSpan(fromMapBuffer.getFontStyle(), fromMapBuffer.getFontWeight(), fromMapBuffer.getFontFeatureSettings(), fromMapBuffer.getFontFamily(), assets)));
                    }
                    if (fromMapBuffer.getIsUnderlineTextDecorationSet()) {
                        ops.add(new SetSpanOperation(length, length2, new ReactUnderlineSpan()));
                    }
                    if (fromMapBuffer.getIsLineThroughTextDecorationSet()) {
                        ops.add(new SetSpanOperation(length, length2, new ReactStrikethroughSpan()));
                    }
                    if ((fromMapBuffer.getTextShadowOffsetDx() == 0.0f || fromMapBuffer.getTextShadowOffsetDy() != 0.0f || fromMapBuffer.getTextShadowRadius() != 0.0f) && Color.alpha(fromMapBuffer.getTextShadowColor()) != 0) {
                        ops.add(new SetSpanOperation(length, length2, new ShadowStyleSpan(fromMapBuffer.getTextShadowOffsetDx(), fromMapBuffer.getTextShadowOffsetDy(), fromMapBuffer.getTextShadowRadius(), fromMapBuffer.getTextShadowColor())));
                    }
                    if (!Float.isNaN(fromMapBuffer.getTextStrokeWidth()) && fromMapBuffer.getTextStrokeWidth() > 0.0f && fromMapBuffer.getIsTextStrokeColorSet()) {
                        ops.add(new SetSpanOperation(length, length2, new StrokeStyleSpan(fromMapBuffer.getTextStrokeWidth(), fromMapBuffer.getTextStrokeColor())));
                    }
                    if (!Float.isNaN(fromMapBuffer.getLineHeight())) {
                        ops.add(new SetSpanOperation(length, length2, new CustomLineHeightSpan(fromMapBuffer.getLineHeight())));
                    }
                    if (ReactNativeFeatureFlags.enablePreparedTextLayout()) {
                        ops.add(new SetSpanOperation(length, length2, new ReactTagSpan(i10)));
                    } else {
                        ops.add(new SetSpanOperation(length, length2, new ReactFragmentIndexSpan(i6)));
                        if (outputReactTags != null) {
                            outputReactTags[i6] = i10;
                        }
                    }
                } else {
                    if (fromMapBuffer.getIsColorSet()) {
                        ops.add(new SetSpanOperation(length, length2, new ReactForegroundColorSpan(color.intValue())));
                    }
                    gradientColors = fromMapBuffer.getGradientColors();
                    if (gradientColors != null) {
                        ops.add(new SetSpanOperation(length, length2, new LinearGradientSpan(length * fromMapBuffer.getFontSize(), gradientColors, !Float.isNaN(fromMapBuffer.getGradientAngle()) ? 0.0f : fromMapBuffer.getGradientAngle(), fromMapBuffer.getGradientLength(), fromMapBuffer.getGradientMode())));
                    }
                    if (fromMapBuffer.getIsBackgroundColorSet()) {
                        ops.add(new SetSpanOperation(length, length2, new ReactBackgroundColorSpan(backgroundColor.intValue())));
                    }
                    if (!Float.isNaN(fromMapBuffer.getOpacity())) {
                    }
                    if (!Float.isNaN(fromMapBuffer.getLetterSpacing())) {
                    }
                    ops.add(new SetSpanOperation(length, length2, new ReactAbsoluteSizeSpan(fromMapBuffer.getFontSize())));
                    if (fromMapBuffer.getFontStyle() == -1) {
                    }
                    ops.add(new SetSpanOperation(length, length2, new CustomStyleSpan(fromMapBuffer.getFontStyle(), fromMapBuffer.getFontWeight(), fromMapBuffer.getFontFeatureSettings(), fromMapBuffer.getFontFamily(), assets)));
                    if (fromMapBuffer.getIsUnderlineTextDecorationSet()) {
                    }
                    if (fromMapBuffer.getIsLineThroughTextDecorationSet()) {
                    }
                    if (fromMapBuffer.getTextShadowOffsetDx() == 0.0f) {
                    }
                    ops.add(new SetSpanOperation(length, length2, new ShadowStyleSpan(fromMapBuffer.getTextShadowOffsetDx(), fromMapBuffer.getTextShadowOffsetDy(), fromMapBuffer.getTextShadowRadius(), fromMapBuffer.getTextShadowColor())));
                    if (!Float.isNaN(fromMapBuffer.getTextStrokeWidth())) {
                        ops.add(new SetSpanOperation(length, length2, new StrokeStyleSpan(fromMapBuffer.getTextStrokeWidth(), fromMapBuffer.getTextStrokeColor())));
                    }
                    if (!Float.isNaN(fromMapBuffer.getLineHeight())) {
                    }
                    if (ReactNativeFeatureFlags.enablePreparedTextLayout()) {
                    }
                }
            }
            i6++;
            i5 = 0;
        }
    }

    private final Spannable buildSpannableFromFragmentsOptimized(AssetManager assets, MapBuffer fragments, int[] outputReactTags) {
        int i5;
        StringBuilder sb2 = new StringBuilder();
        ArrayList<FragmentAttributes> arrayList = new ArrayList(fragments.getCount());
        int count = fragments.getCount();
        int i6 = 0;
        int i10 = 0;
        while (true) {
            i5 = 2;
            if (i10 >= count) {
                break;
            }
            MapBuffer mapBuffer = fragments.getMapBuffer(i10);
            TextAttributeProps fromMapBuffer = TextAttributeProps.INSTANCE.fromMapBuffer(mapBuffer.getMapBuffer(5));
            String apply = TextTransform.INSTANCE.apply(mapBuffer.getString(0), fromMapBuffer.getTextTransform());
            sb2.append(apply);
            int length = apply.length();
            int i11 = mapBuffer.contains(1) ? mapBuffer.getInt(1) : -1;
            boolean z5 = mapBuffer.contains(2) && mapBuffer.getBoolean(2);
            double d6 = Double.NaN;
            double d7 = mapBuffer.contains(3) ? mapBuffer.getDouble(3) : Double.NaN;
            if (mapBuffer.contains(4)) {
                d6 = mapBuffer.getDouble(4);
            }
            arrayList.add(new FragmentAttributes(fromMapBuffer, length, i11, z5, d7, d6));
            i10++;
        }
        SpannableString spannableString = new SpannableString(sb2);
        int i12 = 0;
        for (FragmentAttributes fragmentAttributes : arrayList) {
            int i13 = i6 + 1;
            int length2 = fragmentAttributes.getLength() + i12;
            int i14 = i12 == 0 ? 18 : 34;
            if (fragmentAttributes.getIsAttachment()) {
                spannableString.setSpan(new TextInlineViewPlaceholderSpan(fragmentAttributes.getReactTag(), (int) PixelUtil.toPixelFromSP(fragmentAttributes.getWidth()), (int) PixelUtil.toPixelFromSP(fragmentAttributes.getHeight())), i12, length2, i14);
            } else {
                if (fragmentAttributes.getProps().getRole() == null ? fragmentAttributes.getProps().getAccessibilityRole() == ReactAccessibilityDelegate.AccessibilityRole.LINK : fragmentAttributes.getProps().getRole() == ReactAccessibilityDelegate.Role.LINK) {
                    if (ReactNativeFeatureFlags.enablePreparedTextLayout()) {
                        spannableString.setSpan(new ReactLinkSpan(i6), i12, length2, i14);
                    } else {
                        spannableString.setSpan(new ReactClickableSpan(fragmentAttributes.getReactTag()), i12, length2, i14);
                    }
                }
                if (fragmentAttributes.getProps().getIsColorSet()) {
                    Integer color = fragmentAttributes.getProps().getColor();
                    spannableString.setSpan(color != null ? new ReactForegroundColorSpan(color.intValue()) : null, i12, length2, i14);
                }
                int[] gradientColors = fragmentAttributes.getProps().getGradientColors();
                if (gradientColors != null && gradientColors.length >= i5) {
                    spannableString.setSpan(new LinearGradientSpan(i12 * fragmentAttributes.getProps().getFontSize(), gradientColors, Float.isNaN(fragmentAttributes.getProps().getGradientAngle()) ? 0.0f : fragmentAttributes.getProps().getGradientAngle(), fragmentAttributes.getProps().getGradientLength(), fragmentAttributes.getProps().getGradientMode()), i12, length2, i14);
                }
                if (fragmentAttributes.getProps().getIsBackgroundColorSet()) {
                    Integer backgroundColor = fragmentAttributes.getProps().getBackgroundColor();
                    spannableString.setSpan(backgroundColor != null ? new ReactBackgroundColorSpan(backgroundColor.intValue()) : null, i12, length2, i14);
                }
                if (!Float.isNaN(fragmentAttributes.getProps().getOpacity())) {
                    spannableString.setSpan(new ReactOpacitySpan(fragmentAttributes.getProps().getOpacity()), i12, length2, i14);
                }
                if (!Float.isNaN(fragmentAttributes.getProps().getLetterSpacing())) {
                    spannableString.setSpan(new CustomLetterSpacingSpan(fragmentAttributes.getProps().getLetterSpacing()), i12, length2, i14);
                }
                spannableString.setSpan(new ReactAbsoluteSizeSpan(fragmentAttributes.getProps().getFontSize()), i12, length2, i14);
                if (fragmentAttributes.getProps().getFontStyle() != -1 || fragmentAttributes.getProps().getFontWeight() != -1 || fragmentAttributes.getProps().getFontFamily() != null) {
                    spannableString.setSpan(new CustomStyleSpan(fragmentAttributes.getProps().getFontStyle(), fragmentAttributes.getProps().getFontWeight(), fragmentAttributes.getProps().getFontFeatureSettings(), fragmentAttributes.getProps().getFontFamily(), assets), i12, length2, i14);
                }
                if (fragmentAttributes.getProps().getIsUnderlineTextDecorationSet()) {
                    spannableString.setSpan(new ReactUnderlineSpan(), i12, length2, i14);
                }
                if (fragmentAttributes.getProps().getIsLineThroughTextDecorationSet()) {
                    spannableString.setSpan(new ReactStrikethroughSpan(), i12, length2, i14);
                }
                if ((fragmentAttributes.getProps().getTextShadowOffsetDx() != 0.0f || fragmentAttributes.getProps().getTextShadowOffsetDy() != 0.0f || fragmentAttributes.getProps().getTextShadowRadius() != 0.0f) && Color.alpha(fragmentAttributes.getProps().getTextShadowColor()) != 0) {
                    spannableString.setSpan(new ShadowStyleSpan(fragmentAttributes.getProps().getTextShadowOffsetDx(), fragmentAttributes.getProps().getTextShadowOffsetDy(), fragmentAttributes.getProps().getTextShadowRadius(), fragmentAttributes.getProps().getTextShadowColor()), i12, length2, i14);
                }
                if (!Float.isNaN(fragmentAttributes.getProps().getTextStrokeWidth()) && fragmentAttributes.getProps().getTextStrokeWidth() > 0.0f && fragmentAttributes.getProps().getIsTextStrokeColorSet()) {
                    spannableString.setSpan(new StrokeStyleSpan(fragmentAttributes.getProps().getTextStrokeWidth(), fragmentAttributes.getProps().getTextStrokeColor()), i12, length2, i14);
                }
                if (!Float.isNaN(fragmentAttributes.getProps().getLineHeight())) {
                    spannableString.setSpan(new CustomLineHeightSpan(fragmentAttributes.getProps().getLineHeight()), i12, length2, i14);
                }
                if (ReactNativeFeatureFlags.enablePreparedTextLayout()) {
                    spannableString.setSpan(new ReactFragmentIndexSpan(i6), i12, length2, i14);
                    if (outputReactTags != null) {
                        outputReactTags[i6] = fragmentAttributes.getReactTag();
                    }
                } else {
                    spannableString.setSpan(new ReactTagSpan(fragmentAttributes.getReactTag()), i12, length2, i14);
                }
            }
            i6 = i13;
            i12 = length2;
            i5 = 2;
        }
        addLeadingMarginForTextEffects(spannableString);
        return spannableString;
    }

    private final float calculateHeight(Layout layout, float height, YogaMeasureMode heightYogaMeasureMode, int calculatedLineCount) {
        if (heightYogaMeasureMode != YogaMeasureMode.f5164e) {
            float lineBottom = layout.getLineBottom(calculatedLineCount - 1);
            if (heightYogaMeasureMode != YogaMeasureMode.f5165i || lineBottom <= height) {
                return lineBottom;
            }
        }
        return height;
    }

    private final int calculateLineCount(Layout layout, int maximumNumberOfLines) {
        return (maximumNumberOfLines == -1 || maximumNumberOfLines == 0) ? layout.getLineCount() : Math.min(maximumNumberOfLines, layout.getLineCount());
    }

    private final float calculateWidth(Layout layout, Spanned text, float width, YogaMeasureMode widthYogaMeasureMode, int calculatedLineCount) {
        return widthYogaMeasureMode == YogaMeasureMode.f5164e ? width : layout.getWidth();
    }

    private final Layout createLayout(Spannable text, BoringLayout.Metrics boring, float width, YogaMeasureMode widthYogaMeasureMode, boolean includeFontPadding, int textBreakStrategy, int hyphenationFrequency, Layout.Alignment alignment, int justificationMode, TextUtils.TruncateAt ellipsizeMode, int maxNumberOfLines, TextPaint paint) {
        if (boring != null && (widthYogaMeasureMode == YogaMeasureMode.f5163d || boring.width <= ((float) Math.floor(width)))) {
            BoringLayout make = BoringLayout.make(text, paint, widthYogaMeasureMode == YogaMeasureMode.f5164e ? (int) Math.ceil(width) : boring.width, alignment, 1.0f, 0.0f, boring, includeFontPadding);
            Intrinsics.checkNotNullExpressionValue(make, "make(...)");
            return make;
        }
        int ceil = (int) Math.ceil(Layout.getDesiredWidth(text, paint));
        int ordinal = widthYogaMeasureMode.ordinal();
        if (ordinal == 1) {
            ceil = (int) Math.ceil(width);
        } else if (ordinal == 2) {
            ceil = Math.min(ceil, (int) Math.floor(width));
        }
        return buildLayout(text, ceil, includeFontPadding, textBreakStrategy, hyphenationFrequency, alignment, justificationMode, ellipsizeMode, maxNumberOfLines, paint);
    }

    private final Layout createLayoutForMeasurement(AssetManager assets, MapBuffer attributedString, MapBuffer paragraphAttributes, float width, YogaMeasureMode widthYogaMeasureMode, float height, YogaMeasureMode heightYogaMeasureMode, ReactTextViewManagerCallback reactTextViewManagerCallback) {
        Spannable orCreateSpannableForText = getOrCreateSpannableForText(assets, attributedString, reactTextViewManagerCallback);
        return createLayout(orCreateSpannableForText, attributedString.contains(3) ? ((ReactTextPaintHolderSpan[]) orCreateSpannableForText.getSpans(0, 0, ReactTextPaintHolderSpan.class))[0].getTextPaint() : scratchPaintWithAttributes(TextAttributeProps.INSTANCE.fromMapBuffer(attributedString.getMapBuffer(4)), assets), attributedString, paragraphAttributes, width, widthYogaMeasureMode, height, heightYogaMeasureMode).getLayout();
    }

    @NotNull
    public static final PreparedLayout createPreparedLayout(@NotNull AssetManager assets, @NotNull ReadableMapBuffer attributedString, @NotNull ReadableMapBuffer paragraphAttributes, float width, @NotNull YogaMeasureMode widthYogaMeasureMode, float height, @NotNull YogaMeasureMode heightYogaMeasureMode, ReactTextViewManagerCallback reactTextViewManagerCallback) {
        Intrinsics.checkNotNullParameter(assets, "assets");
        Intrinsics.checkNotNullParameter(attributedString, "attributedString");
        Intrinsics.checkNotNullParameter(paragraphAttributes, "paragraphAttributes");
        Intrinsics.checkNotNullParameter(widthYogaMeasureMode, "widthYogaMeasureMode");
        Intrinsics.checkNotNullParameter(heightYogaMeasureMode, "heightYogaMeasureMode");
        ReadableMapBuffer mapBuffer = attributedString.getMapBuffer(2);
        int[] iArr = new int[mapBuffer.getCount()];
        TextLayoutManager textLayoutManager = INSTANCE;
        CreateLayoutResult createLayout = textLayoutManager.createLayout(textLayoutManager.createSpannableFromAttributedString(assets, mapBuffer, reactTextViewManagerCallback, iArr), textLayoutManager.newPaintWithAttributes(TextAttributeProps.INSTANCE.fromMapBuffer(attributedString.getMapBuffer(4)), assets), attributedString, paragraphAttributes, width, widthYogaMeasureMode, height, heightYogaMeasureMode);
        int i5 = paragraphAttributes.contains(0) ? paragraphAttributes.getInt(0) : -1;
        return new PreparedLayout(createLayout.getLayout(), i5, textLayoutManager.getVerticalOffset(createLayout.getLayout(), paragraphAttributes, height, heightYogaMeasureMode, i5), iArr, createLayout.getTextBreakStrategy(), createLayout.getJustificationMode());
    }

    private final Spannable createSpannableFromAttributedString(AssetManager assets, MapBuffer fragments, ReactTextViewManagerCallback reactTextViewManagerCallback, int[] outputReactTags) {
        if (ReactNativeFeatureFlags.enableAndroidTextMeasurementOptimizations()) {
            Spannable buildSpannableFromFragmentsOptimized = buildSpannableFromFragmentsOptimized(assets, fragments, outputReactTags);
            if (reactTextViewManagerCallback != null) {
                reactTextViewManagerCallback.onPostProcessSpannable(buildSpannableFromFragmentsOptimized);
            }
            return buildSpannableFromFragmentsOptimized;
        }
        SpannableStringBuilder spannableStringBuilder = new SpannableStringBuilder();
        List<SetSpanOperation> arrayList = new ArrayList<>();
        buildSpannableFromFragments(assets, fragments, spannableStringBuilder, arrayList, outputReactTags);
        int size = arrayList.size();
        for (int i5 = 0; i5 < size; i5++) {
            arrayList.get((arrayList.size() - i5) - 1).execute(spannableStringBuilder, i5);
        }
        addLeadingMarginForTextEffects(spannableStringBuilder);
        if (reactTextViewManagerCallback != null) {
            reactTextViewManagerCallback.onPostProcessSpannable(spannableStringBuilder);
        }
        return spannableStringBuilder;
    }

    private final Method getSetUseBoundsForWidthMethod() {
        return (Method) setUseBoundsForWidthMethod.getValue();
    }

    private final Layout.Alignment getTextAlignment(MapBuffer attributedString, Spannable spanned, String alignmentAttr) {
        boolean z5 = isRTL(attributedString) != TextDirectionHeuristics.FIRSTSTRONG_LTR.isRtl(spanned, 0, spanned.length());
        Layout.Alignment alignment = z5 ? Layout.Alignment.ALIGN_OPPOSITE : Layout.Alignment.ALIGN_NORMAL;
        return alignmentAttr == null ? alignment : Intrinsics.areEqual(alignmentAttr, "center") ? Layout.Alignment.ALIGN_CENTER : Intrinsics.areEqual(alignmentAttr, ViewProps.RIGHT) ? z5 ? Layout.Alignment.ALIGN_NORMAL : Layout.Alignment.ALIGN_OPPOSITE : alignment;
    }

    private final String getTextAlignmentAttr(MapBuffer attributedString) {
        if (!attributedString.contains(2)) {
            return null;
        }
        MapBuffer mapBuffer = attributedString.getMapBuffer(2);
        if (mapBuffer.getCount() != 0) {
            MapBuffer mapBuffer2 = mapBuffer.getMapBuffer(0).getMapBuffer(5);
            if (mapBuffer2.contains(12)) {
                return mapBuffer2.getString(12);
            }
        }
        return null;
    }

    public static final int getTextGravity(@NotNull MapBuffer attributedString, @NotNull Spannable spanned) {
        Intrinsics.checkNotNullParameter(attributedString, "attributedString");
        Intrinsics.checkNotNullParameter(spanned, "spanned");
        TextLayoutManager textLayoutManager = INSTANCE;
        Layout.Alignment textAlignment = textLayoutManager.getTextAlignment(attributedString, spanned, textLayoutManager.getTextAlignmentAttr(attributedString));
        boolean isRtl = TextDirectionHeuristics.FIRSTSTRONG_LTR.isRtl(spanned, 0, spanned.length());
        int i5 = WhenMappings.$EnumSwitchMapping$0[textAlignment.ordinal()];
        if (i5 == 1) {
            return isRtl ? 5 : 3;
        }
        if (i5 == 2) {
            return isRtl ? 3 : 5;
        }
        if (i5 == 3) {
            return 1;
        }
        throw new n();
    }

    private final int getTextJustificationMode(String alignmentAttr) {
        if (Build.VERSION.SDK_INT < 26) {
            return -1;
        }
        return (alignmentAttr == null || !Intrinsics.areEqual(alignmentAttr, "justified")) ? 0 : 1;
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    /* JADX WARN: Code restructure failed: missing block: B:14:0x0032, code lost:
    
        if (r4.equals("auto") == false) goto L29;
     */
    /* JADX WARN: Code restructure failed: missing block: B:17:0x003b, code lost:
    
        if (r4.equals(com.facebook.react.uimanager.ViewProps.TOP) == false) goto L29;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private final float getVerticalOffset(Layout layout, ReadableMapBuffer paragraphAttributes, float height, YogaMeasureMode heightMeasureMode, int maximumNumberOfLines) {
        String string = paragraphAttributes.contains(8) ? paragraphAttributes.getString(8) : null;
        if (string == null) {
            return 0.0f;
        }
        int height2 = layout.getHeight();
        float calculateHeight = calculateHeight(layout, height, heightMeasureMode, calculateLineCount(layout, maximumNumberOfLines));
        float f2 = height2;
        if (f2 > calculateHeight) {
            return 0.0f;
        }
        switch (string.hashCode()) {
            case -1383228885:
                if (string.equals(ViewProps.BOTTOM)) {
                    break;
                }
                p8.a.v(ReactConstants.TAG, "Invalid textAlignVertical: ".concat(string));
                break;
            case -1364013995:
                if (string.equals("center")) {
                    break;
                }
                p8.a.v(ReactConstants.TAG, "Invalid textAlignVertical: ".concat(string));
                break;
            case 115029:
                break;
            case 3005871:
                break;
            default:
                p8.a.v(ReactConstants.TAG, "Invalid textAlignVertical: ".concat(string));
                break;
        }
        return 0.0f;
    }

    private final BoringLayout.Metrics isBoring(Spannable text, TextPaint paint) {
        BoringLayout.Metrics isBoring = Build.VERSION.SDK_INT < 33 ? BoringLayout.isBoring(text, paint) : BoringLayout.isBoring(text, paint, TextDirectionHeuristics.FIRSTSTRONG_LTR, true, null);
        if (isBoring == null || isBoring.width < 0) {
            return null;
        }
        return isBoring;
    }

    @NotNull
    public static final WritableArray measureLines(@NotNull AssetManager assetManager, @NotNull MapBuffer attributedString, @NotNull MapBuffer paragraphAttributes, float width, float height, ReactTextViewManagerCallback reactTextViewManagerCallback) {
        Intrinsics.checkNotNullParameter(assetManager, "assetManager");
        Intrinsics.checkNotNullParameter(attributedString, "attributedString");
        Intrinsics.checkNotNullParameter(paragraphAttributes, "paragraphAttributes");
        TextLayoutManager textLayoutManager = INSTANCE;
        YogaMeasureMode yogaMeasureMode = YogaMeasureMode.f5164e;
        Layout createLayoutForMeasurement = textLayoutManager.createLayoutForMeasurement(assetManager, attributedString, paragraphAttributes, width, yogaMeasureMode, height, yogaMeasureMode, reactTextViewManagerCallback);
        CharSequence text = createLayoutForMeasurement.getText();
        Intrinsics.checkNotNullExpressionValue(text, "getText(...)");
        return FontMetricsUtil.getFontMetrics(text, createLayoutForMeasurement, DisplayMetricsHolder.getWindowDisplayMetrics());
    }

    @NotNull
    public static final float[] measurePreparedLayout(@NotNull PreparedLayout preparedLayout, float width, @NotNull YogaMeasureMode widthYogaMeasureMode, float height, @NotNull YogaMeasureMode heightYogaMeasureMode) {
        Intrinsics.checkNotNullParameter(preparedLayout, "preparedLayout");
        Intrinsics.checkNotNullParameter(widthYogaMeasureMode, "widthYogaMeasureMode");
        Intrinsics.checkNotNullParameter(heightYogaMeasureMode, "heightYogaMeasureMode");
        Layout layout = preparedLayout.getLayout();
        CharSequence text = layout.getText();
        Intrinsics.checkNotNull(text, "null cannot be cast to non-null type android.text.Spanned");
        Spanned spanned = (Spanned) text;
        int maximumNumberOfLines = preparedLayout.getMaximumNumberOfLines();
        TextLayoutManager textLayoutManager = INSTANCE;
        int calculateLineCount = textLayoutManager.calculateLineCount(layout, maximumNumberOfLines);
        float calculateWidth = textLayoutManager.calculateWidth(layout, spanned, width, widthYogaMeasureMode, calculateLineCount);
        float calculateHeight = textLayoutManager.calculateHeight(layout, height, heightYogaMeasureMode, calculateLineCount);
        ArrayList arrayList = new ArrayList();
        PixelUtil pixelUtil = PixelUtil.INSTANCE;
        arrayList.add(Float.valueOf(pixelUtil.pxToDp(calculateWidth)));
        arrayList.add(Float.valueOf(pixelUtil.pxToDp(calculateHeight)));
        AttachmentMetrics attachmentMetrics = new AttachmentMetrics();
        int i5 = 0;
        while (i5 < spanned.length()) {
            i5 = textLayoutManager.nextAttachmentMetrics(layout, spanned, calculateWidth, calculateLineCount, i5, preparedLayout.getVerticalOffset(), attachmentMetrics);
            if (attachmentMetrics.getWasFound()) {
                PixelUtil pixelUtil2 = PixelUtil.INSTANCE;
                arrayList.add(Float.valueOf(pixelUtil2.pxToDp(attachmentMetrics.getTop())));
                arrayList.add(Float.valueOf(pixelUtil2.pxToDp(attachmentMetrics.getLeft())));
                arrayList.add(Float.valueOf(pixelUtil2.pxToDp(attachmentMetrics.getWidth())));
                arrayList.add(Float.valueOf(pixelUtil2.pxToDp(attachmentMetrics.getHeight())));
            }
        }
        float[] fArr = new float[arrayList.size()];
        int size = arrayList.size();
        for (int i6 = 0; i6 < size; i6++) {
            Object obj = arrayList.get(i6);
            Intrinsics.checkNotNullExpressionValue(obj, "get(...)");
            fArr[i6] = ((Number) obj).floatValue();
        }
        return fArr;
    }

    public static final long measureText(@NotNull AssetManager assets, @NotNull MapBuffer attributedString, @NotNull MapBuffer paragraphAttributes, float width, @NotNull YogaMeasureMode widthYogaMeasureMode, float height, @NotNull YogaMeasureMode heightYogaMeasureMode, ReactTextViewManagerCallback reactTextViewManagerCallback, float[] attachmentsPositions) {
        Intrinsics.checkNotNullParameter(assets, "assets");
        Intrinsics.checkNotNullParameter(attributedString, "attributedString");
        Intrinsics.checkNotNullParameter(paragraphAttributes, "paragraphAttributes");
        Intrinsics.checkNotNullParameter(widthYogaMeasureMode, "widthYogaMeasureMode");
        Intrinsics.checkNotNullParameter(heightYogaMeasureMode, "heightYogaMeasureMode");
        TextLayoutManager textLayoutManager = INSTANCE;
        Layout createLayoutForMeasurement = textLayoutManager.createLayoutForMeasurement(assets, attributedString, paragraphAttributes, width, widthYogaMeasureMode, height, heightYogaMeasureMode, reactTextViewManagerCallback);
        int i5 = 0;
        int i6 = paragraphAttributes.contains(0) ? paragraphAttributes.getInt(0) : -1;
        CharSequence text = createLayoutForMeasurement.getText();
        Intrinsics.checkNotNull(text, "null cannot be cast to non-null type android.text.Spanned");
        Spanned spanned = (Spanned) text;
        int calculateLineCount = textLayoutManager.calculateLineCount(createLayoutForMeasurement, i6);
        float calculateWidth = textLayoutManager.calculateWidth(createLayoutForMeasurement, spanned, width, widthYogaMeasureMode, calculateLineCount);
        float calculateHeight = textLayoutManager.calculateHeight(createLayoutForMeasurement, height, heightYogaMeasureMode, calculateLineCount);
        if (attachmentsPositions != null) {
            AttachmentMetrics attachmentMetrics = new AttachmentMetrics();
            int i10 = 0;
            while (i5 < spanned.length()) {
                i5 = INSTANCE.nextAttachmentMetrics(createLayoutForMeasurement, spanned, calculateWidth, calculateLineCount, i5, 0.0f, attachmentMetrics);
                if (attachmentMetrics.getWasFound()) {
                    PixelUtil pixelUtil = PixelUtil.INSTANCE;
                    attachmentsPositions[i10] = pixelUtil.pxToDp(attachmentMetrics.getTop());
                    attachmentsPositions[i10 + 1] = pixelUtil.pxToDp(attachmentMetrics.getLeft());
                    i10 += 2;
                }
            }
        }
        PixelUtil pixelUtil2 = PixelUtil.INSTANCE;
        return ys.l.p(pixelUtil2.pxToDp(calculateWidth), pixelUtil2.pxToDp(calculateHeight));
    }

    private final TextPaint newPaintWithAttributes(TextAttributeProps baseTextAttributes, AssetManager assets) {
        TextPaint textPaint = new TextPaint(1);
        updateTextPaint(textPaint, baseTextAttributes, assets);
        return textPaint;
    }

    /* JADX WARN: Code restructure failed: missing block: B:15:0x0042, code lost:
    
        if (r9 >= (r8.getEllipsisStart(r0) + r8.getLineStart(r0))) goto L28;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private final int nextAttachmentMetrics(Layout layout, Spanned text, float calculatedWidth, int calculatedLineCount, int i5, float verticalOffset, AttachmentMetrics metrics) {
        int nextSpanTransition = text.nextSpanTransition(i5, text.length(), TextInlineViewPlaceholderSpan.class);
        TextInlineViewPlaceholderSpan[] textInlineViewPlaceholderSpanArr = (TextInlineViewPlaceholderSpan[]) text.getSpans(i5, nextSpanTransition, TextInlineViewPlaceholderSpan.class);
        if (textInlineViewPlaceholderSpanArr.length == 0) {
            metrics.setWasFound(false);
            return nextSpanTransition;
        }
        io.sentry.config.a.d(textInlineViewPlaceholderSpanArr.length == 1);
        TextInlineViewPlaceholderSpan textInlineViewPlaceholderSpan = textInlineViewPlaceholderSpanArr[0];
        int spanStart = text.getSpanStart(textInlineViewPlaceholderSpan);
        int lineForOffset = layout.getLineForOffset(spanStart);
        boolean z5 = layout.getEllipsisCount(lineForOffset) > 0;
        if (lineForOffset <= calculatedLineCount) {
            if (z5) {
            }
            float width = textInlineViewPlaceholderSpan.getWidth();
            float height = textInlineViewPlaceholderSpan.getHeight();
            boolean isRtlCharAt = layout.isRtlCharAt(spanStart);
            float primaryHorizontal = (layout.getParagraphDirection(lineForOffset) == -1) == isRtlCharAt ? layout.getPrimaryHorizontal(spanStart) : layout.getSecondaryHorizontal(spanStart);
            if (isRtlCharAt) {
                primaryHorizontal -= width;
            }
            metrics.setTop(layout.getLineBaseline(lineForOffset) - height);
            metrics.setLeft(primaryHorizontal);
            metrics.setTop(metrics.getTop() + verticalOffset);
            metrics.setWasFound(true);
            metrics.setWidth(textInlineViewPlaceholderSpan.getWidth());
            metrics.setHeight(textInlineViewPlaceholderSpan.getHeight());
            return nextSpanTransition;
        }
        metrics.setTop(Float.NaN);
        metrics.setLeft(Float.NaN);
        metrics.setTop(metrics.getTop() + verticalOffset);
        metrics.setWasFound(true);
        metrics.setWidth(textInlineViewPlaceholderSpan.getWidth());
        metrics.setHeight(textInlineViewPlaceholderSpan.getHeight());
        return nextSpanTransition;
    }

    private final TextPaint scratchPaintWithAttributes(TextAttributeProps baseTextAttributes, AssetManager assets) {
        TextPaint textPaint = textPaintInstance.get();
        if (textPaint == null) {
            throw new IllegalStateException("Required value was null.");
        }
        TextPaint textPaint2 = textPaint;
        textPaint2.setTypeface(null);
        textPaint2.setTextSize(12.0f);
        textPaint2.setFakeBoldText(false);
        textPaint2.setTextSkewX(0.0f);
        updateTextPaint(textPaint2, baseTextAttributes, assets);
        return textPaint2;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Method setUseBoundsForWidthMethod_delegate$lambda$0() {
        try {
            return StaticLayout.Builder.class.getMethod("setUseBoundsForWidth", Boolean.TYPE);
        } catch (ReflectiveOperationException unused) {
            return null;
        }
    }

    private final void updateTextPaint(TextPaint paint, TextAttributeProps baseTextAttributes, AssetManager assets) {
        if (baseTextAttributes.getFontSize() != -1) {
            paint.setTextSize(baseTextAttributes.getFontSize());
        }
        if (baseTextAttributes.getFontStyle() == -1 && baseTextAttributes.getFontWeight() == -1 && baseTextAttributes.getFontFamily() == null) {
            return;
        }
        Typeface applyStyles = ReactTypefaceUtils.applyStyles(null, baseTextAttributes.getFontStyle(), baseTextAttributes.getFontWeight(), baseTextAttributes.getFontFamily(), assets);
        paint.setTypeface(applyStyles);
        if (baseTextAttributes.getFontStyle() == -1 || baseTextAttributes.getFontStyle() == applyStyles.getStyle()) {
            return;
        }
        int fontStyle = baseTextAttributes.getFontStyle() & (~applyStyles.getStyle());
        paint.setFakeBoldText((fontStyle & 1) != 0);
        paint.setTextSkewX((fontStyle & 2) != 0 ? -0.25f : 0.0f);
    }

    public final void deleteCachedSpannableForTag(int reactTag) {
        tagToSpannableCache.remove(Integer.valueOf(reactTag));
    }

    @NotNull
    public final Spannable getOrCreateSpannableForText(@NotNull AssetManager assets, @NotNull MapBuffer attributedString, ReactTextViewManagerCallback reactTextViewManagerCallback) {
        Intrinsics.checkNotNullParameter(assets, "assets");
        Intrinsics.checkNotNullParameter(attributedString, "attributedString");
        if (!attributedString.contains(3)) {
            return createSpannableFromAttributedString(assets, attributedString.getMapBuffer(2), reactTextViewManagerCallback, null);
        }
        Spannable spannable = tagToSpannableCache.get(Integer.valueOf(attributedString.getInt(3)));
        if (spannable != null) {
            return spannable;
        }
        throw new IllegalStateException("Required value was null.");
    }

    public final boolean isRTL(@NotNull MapBuffer attributedString) {
        Intrinsics.checkNotNullParameter(attributedString, "attributedString");
        if (!attributedString.contains(2)) {
            return false;
        }
        MapBuffer mapBuffer = attributedString.getMapBuffer(2);
        if (mapBuffer.getCount() == 0) {
            return false;
        }
        MapBuffer mapBuffer2 = mapBuffer.getMapBuffer(0).getMapBuffer(5);
        return mapBuffer2.contains(23) && TextAttributeProps.INSTANCE.getLayoutDirection(mapBuffer2.getString(23)) == 1;
    }

    public final void setCachedSpannableForTag(int reactTag, @NotNull Spannable sp2) {
        Intrinsics.checkNotNullParameter(sp2, "sp");
        tagToSpannableCache.put(Integer.valueOf(reactTag), sp2);
    }

    private final CreateLayoutResult createLayout(Spannable text, TextPaint paint, MapBuffer attributedString, MapBuffer paragraphAttributes, float width, YogaMeasureMode widthYogaMeasureMode, float height, YogaMeasureMode heightYogaMeasureMode) {
        Layout.Alignment alignment;
        BoringLayout.Metrics isBoring = isBoring(text, paint);
        TextAttributeProps.Companion companion = TextAttributeProps.INSTANCE;
        int textBreakStrategy = companion.getTextBreakStrategy(paragraphAttributes.getString(2));
        boolean z5 = paragraphAttributes.contains(4) ? paragraphAttributes.getBoolean(4) : true;
        int hyphenationFrequency = companion.getHyphenationFrequency(paragraphAttributes.getString(5));
        boolean z6 = paragraphAttributes.contains(3) ? paragraphAttributes.getBoolean(3) : false;
        int i5 = paragraphAttributes.contains(0) ? paragraphAttributes.getInt(0) : -1;
        TextUtils.TruncateAt ellipsizeMode = paragraphAttributes.contains(1) ? companion.getEllipsizeMode(paragraphAttributes.getString(1)) : null;
        String textAlignmentAttr = getTextAlignmentAttr(attributedString);
        Layout.Alignment textAlignment = getTextAlignment(attributedString, text, textAlignmentAttr);
        int textJustificationMode = getTextJustificationMode(textAlignmentAttr);
        if (z6) {
            alignment = textAlignment;
            adjustSpannableFontToFit(text, width, YogaMeasureMode.f5164e, height, heightYogaMeasureMode, paragraphAttributes.contains(6) ? (float) paragraphAttributes.getDouble(6) : Float.NaN, i5, z5, textBreakStrategy, hyphenationFrequency, alignment, textJustificationMode, paint);
            i5 = i5;
            textJustificationMode = textJustificationMode;
        } else {
            alignment = textAlignment;
        }
        return new CreateLayoutResult(createLayout(text, isBoring, width, widthYogaMeasureMode, z5, textBreakStrategy, hyphenationFrequency, alignment, textJustificationMode, ellipsizeMode, i5, paint), textBreakStrategy, textJustificationMode);
    }
}
