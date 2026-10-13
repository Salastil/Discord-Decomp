package com.facebook.react.views.text;

import a1.k;
import android.content.Context;
import android.graphics.Canvas;
import android.graphics.Rect;
import android.os.Build;
import android.text.Layout;
import android.text.Spannable;
import android.text.SpannableString;
import android.text.Spanned;
import android.text.TextUtils;
import android.text.method.LinkMovementMethod;
import android.text.util.Linkify;
import android.view.KeyEvent;
import android.view.MotionEvent;
import android.view.ViewGroup;
import androidx.appcompat.widget.AppCompatTextView;
import androidx.core.view.b;
import androidx.core.view.s0;
import androidx.customview.widget.a;
import com.discord.jank_stats.JankScreenContext;
import com.facebook.react.bridge.Arguments;
import com.facebook.react.bridge.WritableMap;
import com.facebook.react.common.ReactConstants;
import com.facebook.react.common.annotations.UnstableReactNativeAPI;
import com.facebook.react.internal.SystraceSection;
import com.facebook.react.uimanager.BackgroundStyleApplicator;
import com.facebook.react.uimanager.LengthPercentage;
import com.facebook.react.uimanager.LengthPercentageType;
import com.facebook.react.uimanager.PixelUtil;
import com.facebook.react.uimanager.ReactCompoundView;
import com.facebook.react.uimanager.ViewProps;
import com.facebook.react.uimanager.style.BorderRadiusProp;
import com.facebook.react.uimanager.style.BorderStyle;
import com.facebook.react.uimanager.style.LogicalEdge;
import com.facebook.react.uimanager.style.Overflow;
import com.facebook.react.views.text.internal.span.ReactFragmentIndexSpan;
import com.facebook.react.views.text.internal.span.ReactTagSpan;
import com.facebook.react.views.text.internal.span.StrokeStyleSpan;
import com.facebook.yoga.YogaMeasureMode;

/* loaded from: classes3.dex */
public class ReactTextView extends AppCompatTextView implements ReactCompoundView {
    private static final int DEFAULT_GRAVITY = 8388659;
    private static final ViewGroup.LayoutParams EMPTY_LAYOUT_PARAMS = new ViewGroup.LayoutParams(0, 0);
    private boolean mAdjustsFontSizeToFit;
    private TextUtils.TruncateAt mEllipsizeLocation;
    private float mFontSize;
    private float mLetterSpacing;
    private int mLinkifyMaskType;
    private float mMinimumFontSize;
    private int mNumberOfLines;
    private Overflow mOverflow;
    private PreparedLayout mPreparedLayout;
    private boolean mShouldAdjustSpannableFontSize;
    private Spannable mSpanned;
    private boolean mTextIsSelectable;

    public ReactTextView(Context context) {
        super(context, null);
        this.mOverflow = Overflow.VISIBLE;
        initView();
    }

    private void applyTextAttributes() {
        if (!Float.isNaN(this.mFontSize)) {
            setTextSize(0, this.mFontSize);
        }
        if (Float.isNaN(this.mLetterSpacing)) {
            return;
        }
        super.setLetterSpacing(this.mLetterSpacing);
    }

    private void initView() {
        this.mNumberOfLines = Integer.MAX_VALUE;
        this.mAdjustsFontSizeToFit = false;
        this.mLinkifyMaskType = 0;
        this.mTextIsSelectable = false;
        this.mShouldAdjustSpannableFontSize = false;
        this.mEllipsizeLocation = TextUtils.TruncateAt.END;
        this.mFontSize = Float.NaN;
        this.mMinimumFontSize = Float.NaN;
        this.mLetterSpacing = 0.0f;
        this.mOverflow = Overflow.VISIBLE;
        this.mSpanned = null;
        this.mPreparedLayout = null;
    }

    private static WritableMap inlineViewJson(int i5, int i6, int i10, int i11, int i12, int i13) {
        WritableMap createMap = Arguments.createMap();
        if (i5 == 8) {
            createMap.putString("visibility", "gone");
            createMap.putInt("index", i6);
            return createMap;
        }
        if (i5 != 0) {
            createMap.putString("visibility", JankScreenContext.UNKNOWN_SCREEN);
            createMap.putInt("index", i6);
            return createMap;
        }
        createMap.putString("visibility", ViewProps.VISIBLE);
        createMap.putInt("index", i6);
        createMap.putDouble(ViewProps.LEFT, PixelUtil.toDIPFromPixel(i10));
        createMap.putDouble(ViewProps.TOP, PixelUtil.toDIPFromPixel(i11));
        createMap.putDouble(ViewProps.RIGHT, PixelUtil.toDIPFromPixel(i12));
        createMap.putDouble(ViewProps.BOTTOM, PixelUtil.toDIPFromPixel(i13));
        return createMap;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public /* synthetic */ void lambda$onDraw$0(Canvas canvas) {
        super.onDraw(canvas);
    }

    @Override // android.view.View
    public boolean dispatchHoverEvent(MotionEvent motionEvent) {
        if (s0.f(this) != null) {
            b e9 = s0.e(this);
            if (e9 instanceof a) {
                return ((a) e9).dispatchHoverEvent(motionEvent) || super.dispatchHoverEvent(motionEvent);
            }
        }
        return super.dispatchHoverEvent(motionEvent);
    }

    @Override // android.view.View
    public boolean dispatchKeyEvent(KeyEvent keyEvent) {
        b e9 = s0.e(this);
        return (e9 != null && getMovementMethod() == null && (e9 instanceof ReactTextViewAccessibilityDelegate) && ((ReactTextViewAccessibilityDelegate) e9).dispatchKeyEvent(keyEvent)) || super.dispatchKeyEvent(keyEvent);
    }

    public int getGravityHorizontal() {
        return getGravity() & 8388615;
    }

    @UnstableReactNativeAPI
    public PreparedLayout getPreparedLayout() {
        return this.mPreparedLayout;
    }

    public Spannable getSpanned() {
        return this.mSpanned;
    }

    @Override // android.widget.TextView, android.view.View
    public boolean hasOverlappingRendering() {
        return false;
    }

    @Override // android.widget.TextView, android.view.View
    public void onAttachedToWindow() {
        super.onAttachedToWindow();
        if (!this.mTextIsSelectable) {
            setTextIsSelectable(false);
        } else {
            setTextIsSelectable(false);
            setTextIsSelectable(true);
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:27:0x0090 A[Catch: all -> 0x0052, TRY_LEAVE, TryCatch #0 {all -> 0x0052, blocks: (B:3:0x0009, B:6:0x0013, B:8:0x0017, B:12:0x0046, B:13:0x0041, B:14:0x0055, B:16:0x005b, B:17:0x0061, B:19:0x0069, B:21:0x0073, B:24:0x0089, B:25:0x008c, B:27:0x0090), top: B:2:0x0009 }] */
    @Override // android.widget.TextView, android.view.View
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public void onDraw(Canvas canvas) {
        Canvas canvas2;
        SystraceSection systraceSection = new SystraceSection("ReactTextView.onDraw");
        try {
            Spannable spanned = getSpanned();
            if (this.mAdjustsFontSizeToFit && spanned != null && this.mShouldAdjustSpannableFontSize) {
                this.mShouldAdjustSpannableFontSize = false;
                float width = getWidth();
                YogaMeasureMode yogaMeasureMode = YogaMeasureMode.f5164e;
                TextLayoutManager.adjustSpannableFontToFit(spanned, width, yogaMeasureMode, getHeight(), yogaMeasureMode, this.mMinimumFontSize, this.mNumberOfLines, getIncludeFontPadding(), getBreakStrategy(), getHyphenationFrequency(), Layout.Alignment.ALIGN_NORMAL, Build.VERSION.SDK_INT < 26 ? -1 : getJustificationMode(), getPaint());
                setText(spanned);
            }
            Overflow overflow = this.mOverflow;
            Overflow overflow2 = Overflow.VISIBLE;
            if (overflow != overflow2) {
                canvas.save();
                BackgroundStyleApplicator.clipToPaddingBox(this, canvas);
            }
            CharSequence text = getText();
            StrokeStyleSpan strokeSpan = text instanceof Spanned ? StrokeStyleSpan.getStrokeSpan((Spanned) text) : null;
            if (strokeSpan != null) {
                canvas2 = canvas;
                if (!strokeSpan.draw(getPaint(), new k(27, this, canvas2))) {
                }
                if (this.mOverflow != overflow2) {
                    canvas2.restore();
                }
                systraceSection.close();
            }
            canvas2 = canvas;
            super.onDraw(canvas);
            if (this.mOverflow != overflow2) {
            }
            systraceSection.close();
        } finally {
        }
    }

    @Override // android.widget.TextView, android.view.View
    public final void onFocusChanged(boolean z5, int i5, Rect rect) {
        super.onFocusChanged(z5, i5, rect);
        b e9 = s0.e(this);
        if (e9 != null && (e9 instanceof ReactTextViewAccessibilityDelegate) && getMovementMethod() == null) {
            ((ReactTextViewAccessibilityDelegate) e9).onFocusChanged(z5, i5, rect);
        }
    }

    @Override // androidx.appcompat.widget.AppCompatTextView, android.widget.TextView, android.view.View
    public void onLayout(boolean z5, int i5, int i6, int i10, int i11) {
    }

    @Override // androidx.appcompat.widget.AppCompatTextView, android.widget.TextView, android.view.View
    public void onMeasure(int i5, int i6) {
        SystraceSection systraceSection = new SystraceSection("ReactTextView.onMeasure");
        try {
            super.onMeasure(i5, i6);
            systraceSection.close();
        } catch (Throwable th2) {
            try {
                systraceSection.close();
            } catch (Throwable th3) {
                th2.addSuppressed(th3);
            }
            throw th2;
        }
    }

    @Override // com.facebook.react.uimanager.ReactCompoundView
    public int reactTagForTouch(float f2, float f10) {
        int i5;
        int i6;
        CharSequence text = getText();
        int id2 = getId();
        int i10 = (int) f2;
        int i11 = (int) f10;
        Layout layout = getLayout();
        if (layout != null) {
            int lineForVertical = layout.getLineForVertical(i11);
            int lineLeft = (int) layout.getLineLeft(lineForVertical);
            int lineRight = (int) layout.getLineRight(lineForVertical);
            if ((text instanceof Spanned) && i10 >= lineLeft && i10 <= lineRight) {
                Spanned spanned = (Spanned) text;
                try {
                    int offsetForHorizontal = layout.getOffsetForHorizontal(lineForVertical, i10);
                    int i12 = 0;
                    if (this.mPreparedLayout != null) {
                        ReactFragmentIndexSpan[] reactFragmentIndexSpanArr = (ReactFragmentIndexSpan[]) spanned.getSpans(offsetForHorizontal, offsetForHorizontal, ReactFragmentIndexSpan.class);
                        if (reactFragmentIndexSpanArr != null) {
                            int length = text.length();
                            while (i12 < reactFragmentIndexSpanArr.length) {
                                int spanStart = spanned.getSpanStart(reactFragmentIndexSpanArr[i12]);
                                int spanEnd = spanned.getSpanEnd(reactFragmentIndexSpanArr[i12]);
                                if (spanEnd >= offsetForHorizontal && (i6 = spanEnd - spanStart) <= length) {
                                    id2 = this.mPreparedLayout.getReactTags()[reactFragmentIndexSpanArr[i12].getFragmentIndex()];
                                    length = i6;
                                }
                                i12++;
                            }
                            return id2;
                        }
                    } else {
                        ReactTagSpan[] reactTagSpanArr = (ReactTagSpan[]) spanned.getSpans(offsetForHorizontal, offsetForHorizontal, ReactTagSpan.class);
                        if (reactTagSpanArr != null) {
                            int length2 = text.length();
                            while (i12 < reactTagSpanArr.length) {
                                int spanStart2 = spanned.getSpanStart(reactTagSpanArr[i12]);
                                int spanEnd2 = spanned.getSpanEnd(reactTagSpanArr[i12]);
                                if (spanEnd2 >= offsetForHorizontal && (i5 = spanEnd2 - spanStart2) <= length2) {
                                    id2 = reactTagSpanArr[i12].getReactTag();
                                    length2 = i5;
                                }
                                i12++;
                            }
                            return id2;
                        }
                    }
                } catch (ArrayIndexOutOfBoundsException e9) {
                    p8.a.g(ReactConstants.TAG, "Crash in HorizontalMeasurementProvider: " + e9.getMessage());
                }
            }
        }
        return id2;
    }

    public void recycleView() {
        initView();
        if (getParent() != null) {
            ((ViewGroup) getParent()).removeView(this);
        }
        BackgroundStyleApplicator.reset(this);
        setBreakStrategy(0);
        setMovementMethod(getDefaultMovementMethod());
        int i5 = Build.VERSION.SDK_INT;
        if (i5 >= 26) {
            setJustificationMode(0);
        }
        setLayoutParams(EMPTY_LAYOUT_PARAMS);
        super.setText((CharSequence) null);
        applyTextAttributes();
        setGravity(DEFAULT_GRAVITY);
        setNumberOfLines(this.mNumberOfLines);
        setAdjustFontSizeToFit(this.mAdjustsFontSizeToFit);
        setLinkifyMask(this.mLinkifyMaskType);
        setTextIsSelectable(this.mTextIsSelectable);
        setIncludeFontPadding(true);
        setEnabled(true);
        setLinkifyMask(0);
        setEllipsizeLocation(this.mEllipsizeLocation);
        setEnabled(true);
        if (i5 >= 26) {
            setFocusable(16);
        }
        setHyphenationFrequency(0);
        updateView();
    }

    public void setAdjustFontSizeToFit(boolean z5) {
        this.mAdjustsFontSizeToFit = z5;
    }

    @Override // android.view.View
    public void setBackgroundColor(int i5) {
        BackgroundStyleApplicator.setBackgroundColor(this, Integer.valueOf(i5));
    }

    public void setBorderColor(int i5, Integer num) {
        BackgroundStyleApplicator.setBorderColor(this, LogicalEdge.values()[i5], num);
    }

    public void setBorderRadius(float f2) {
        setBorderRadius(f2, BorderRadiusProp.BORDER_RADIUS.ordinal());
    }

    public void setBorderStyle(String str) {
        BackgroundStyleApplicator.setBorderStyle(this, str == null ? null : BorderStyle.fromString(str));
    }

    public void setBorderWidth(int i5, float f2) {
        BackgroundStyleApplicator.setBorderWidth(this, LogicalEdge.values()[i5], Float.valueOf(PixelUtil.toDIPFromPixel(f2)));
    }

    @Override // android.widget.TextView
    public void setBreakStrategy(int i5) {
        super.setBreakStrategy(i5);
        this.mShouldAdjustSpannableFontSize = true;
    }

    public void setEllipsizeLocation(TextUtils.TruncateAt truncateAt) {
        this.mEllipsizeLocation = truncateAt;
    }

    public void setFontSize(float f2) {
        this.mFontSize = (float) (this.mAdjustsFontSizeToFit ? Math.ceil(PixelUtil.toPixelFromSP(f2)) : Math.ceil(PixelUtil.toPixelFromDIP(f2)));
        applyTextAttributes();
    }

    public void setGravityHorizontal(int i5) {
        if (i5 == 0) {
            i5 = 8388611;
        }
        setGravity(i5 | (getGravity() & (-8388616)));
    }

    public void setGravityVertical(int i5) {
        if (i5 == 0) {
            i5 = 48;
        }
        setGravity(i5 | (getGravity() & (-113)));
    }

    @Override // android.widget.TextView
    public void setHyphenationFrequency(int i5) {
        super.setHyphenationFrequency(i5);
        this.mShouldAdjustSpannableFontSize = true;
    }

    @Override // android.widget.TextView
    public void setIncludeFontPadding(boolean z5) {
        super.setIncludeFontPadding(z5);
        this.mShouldAdjustSpannableFontSize = true;
    }

    @Override // android.widget.TextView
    public void setLetterSpacing(float f2) {
        if (Float.isNaN(f2)) {
            return;
        }
        this.mLetterSpacing = PixelUtil.toPixelFromDIP(f2) / this.mFontSize;
        applyTextAttributes();
    }

    public void setLinkifyMask(int i5) {
        this.mLinkifyMaskType = i5;
    }

    public void setMinimumFontSize(float f2) {
        this.mMinimumFontSize = f2;
        this.mShouldAdjustSpannableFontSize = true;
    }

    public void setNumberOfLines(int i5) {
        if (i5 == 0) {
            i5 = Integer.MAX_VALUE;
        }
        this.mNumberOfLines = i5;
        setMaxLines(i5);
        this.mShouldAdjustSpannableFontSize = true;
    }

    public void setOverflow(String str) {
        if (str == null) {
            this.mOverflow = Overflow.VISIBLE;
        } else {
            Overflow fromString = Overflow.fromString(str);
            if (fromString == null) {
                fromString = Overflow.VISIBLE;
            }
            this.mOverflow = fromString;
        }
        invalidate();
    }

    public void setPreparedLayout(PreparedLayout preparedLayout) {
        this.mPreparedLayout = preparedLayout;
    }

    public void setSpanned(Spannable spannable) {
        this.mSpanned = spannable;
        this.mShouldAdjustSpannableFontSize = true;
    }

    public void setText(ReactTextUpdate reactTextUpdate) {
        SystraceSection systraceSection = new SystraceSection("ReactTextView.setText(ReactTextUpdate)");
        try {
            if (getLayoutParams() == null) {
                setLayoutParams(EMPTY_LAYOUT_PARAMS);
            }
            Spanned text = reactTextUpdate.getText();
            if (this.mLinkifyMaskType > 0) {
                if (!(text instanceof Spannable)) {
                    text = new SpannableString(text);
                }
                Linkify.addLinks((Spannable) text, this.mLinkifyMaskType);
                setMovementMethod(LinkMovementMethod.getInstance());
            }
            setText(text);
            int textAlign = reactTextUpdate.getTextAlign();
            if (textAlign != getGravityHorizontal()) {
                setGravityHorizontal(textAlign);
            }
            if (getBreakStrategy() != reactTextUpdate.getTextBreakStrategy()) {
                setBreakStrategy(reactTextUpdate.getTextBreakStrategy());
            }
            if (Build.VERSION.SDK_INT >= 26 && getJustificationMode() != reactTextUpdate.getJustificationMode()) {
                setJustificationMode(reactTextUpdate.getJustificationMode());
            }
            requestLayout();
            systraceSection.close();
        } catch (Throwable th2) {
            try {
                systraceSection.close();
            } catch (Throwable th3) {
                th2.addSuppressed(th3);
            }
            throw th2;
        }
    }

    @Override // android.widget.TextView
    public void setTextIsSelectable(boolean z5) {
        this.mTextIsSelectable = z5;
        super.setTextIsSelectable(z5);
    }

    public void updateView() {
        setEllipsize((this.mNumberOfLines == Integer.MAX_VALUE || this.mAdjustsFontSizeToFit) ? null : this.mEllipsizeLocation);
    }

    public void setBorderRadius(float f2, int i5) {
        BackgroundStyleApplicator.setBorderRadius(this, BorderRadiusProp.values()[i5], Float.isNaN(f2) ? null : new LengthPercentage(PixelUtil.toDIPFromPixel(f2), LengthPercentageType.POINT));
    }
}
