package androidx.appcompat.widget;

import android.R;
import android.animation.ObjectAnimator;
import android.content.Context;
import android.content.res.ColorStateList;
import android.content.res.TypedArray;
import android.graphics.Canvas;
import android.graphics.PorterDuff;
import android.graphics.Rect;
import android.graphics.Region;
import android.graphics.Typeface;
import android.graphics.drawable.Drawable;
import android.os.Build;
import android.text.InputFilter;
import android.text.Layout;
import android.text.StaticLayout;
import android.text.TextPaint;
import android.text.TextUtils;
import android.text.method.TransformationMethod;
import android.util.Property;
import android.view.ActionMode;
import android.view.MotionEvent;
import android.view.VelocityTracker;
import android.view.View;
import android.view.ViewConfiguration;
import android.view.accessibility.AccessibilityEvent;
import android.view.accessibility.AccessibilityNodeInfo;
import android.widget.CompoundButton;
import androidx.annotation.NonNull;
import java.lang.ref.WeakReference;
import java.util.WeakHashMap;

/* loaded from: classes.dex */
public abstract class j3 extends CompoundButton {
    private static final String ACCESSIBILITY_EVENT_CLASS_NAME = "android.widget.Switch";
    private static final int MONOSPACE = 3;
    private static final int SANS = 1;
    private static final int SERIF = 2;
    private static final int THUMB_ANIMATION_DURATION = 250;
    private static final int TOUCH_MODE_DOWN = 1;
    private static final int TOUCH_MODE_DRAGGING = 2;
    private static final int TOUCH_MODE_IDLE = 0;

    @NonNull
    private AppCompatEmojiTextHelper mAppCompatEmojiTextHelper;
    private SwitchCompat$EmojiCompatInitCallback mEmojiCompatInitCallback;
    private boolean mEnforceSwitchWidth;
    private boolean mHasThumbTint;
    private boolean mHasThumbTintMode;
    private boolean mHasTrackTint;
    private boolean mHasTrackTintMode;
    private int mMinFlingVelocity;
    private Layout mOffLayout;
    private Layout mOnLayout;
    ObjectAnimator mPositionAnimator;
    private boolean mShowText;
    private boolean mSplitTrack;
    private int mSwitchBottom;
    private int mSwitchHeight;
    private int mSwitchLeft;
    private int mSwitchMinWidth;
    private int mSwitchPadding;
    private int mSwitchRight;
    private int mSwitchTop;
    private TransformationMethod mSwitchTransformationMethod;
    private int mSwitchWidth;
    private final Rect mTempRect;
    private ColorStateList mTextColors;
    private final AppCompatTextHelper mTextHelper;
    private CharSequence mTextOff;
    private CharSequence mTextOffTransformed;
    private CharSequence mTextOn;
    private CharSequence mTextOnTransformed;
    private final TextPaint mTextPaint;
    private Drawable mThumbDrawable;
    float mThumbPosition;
    private int mThumbTextPadding;
    private ColorStateList mThumbTintList;
    private PorterDuff.Mode mThumbTintMode;
    private int mThumbWidth;
    private int mTouchMode;
    private int mTouchSlop;
    private float mTouchX;
    private float mTouchY;
    private Drawable mTrackDrawable;
    private ColorStateList mTrackTintList;
    private PorterDuff.Mode mTrackTintMode;
    private VelocityTracker mVelocityTracker;
    private static final Property<j3, Float> THUMB_POS = new i3(Float.class, "thumbPos");
    private static final int[] CHECKED_STATE_SET = {R.attr.state_checked};

    public j3(Context context) {
        super(context, null, com.discord.R.attr.switchStyle);
        this.mThumbTintList = null;
        this.mThumbTintMode = null;
        this.mHasThumbTint = false;
        this.mHasThumbTintMode = false;
        this.mTrackTintList = null;
        this.mTrackTintMode = null;
        this.mHasTrackTint = false;
        this.mHasTrackTintMode = false;
        this.mVelocityTracker = VelocityTracker.obtain();
        this.mEnforceSwitchWidth = true;
        this.mTempRect = new Rect();
        k3.a(this, getContext());
        TextPaint textPaint = new TextPaint(1);
        this.mTextPaint = textPaint;
        textPaint.density = getResources().getDisplayMetrics().density;
        int[] iArr = h.a.f9465w;
        e4.m b02 = e4.m.b0(context, null, iArr, com.discord.R.attr.switchStyle);
        TypedArray typedArray = (TypedArray) b02.f7964i;
        androidx.core.view.s0.o(this, context, iArr, null, typedArray, com.discord.R.attr.switchStyle, 0);
        Drawable U = b02.U(2);
        this.mThumbDrawable = U;
        if (U != null) {
            U.setCallback(this);
        }
        Drawable U2 = b02.U(11);
        this.mTrackDrawable = U2;
        if (U2 != null) {
            U2.setCallback(this);
        }
        setTextOnInternal(typedArray.getText(0));
        setTextOffInternal(typedArray.getText(1));
        this.mShowText = typedArray.getBoolean(3, true);
        this.mThumbTextPadding = typedArray.getDimensionPixelSize(8, 0);
        this.mSwitchMinWidth = typedArray.getDimensionPixelSize(5, 0);
        this.mSwitchPadding = typedArray.getDimensionPixelSize(6, 0);
        this.mSplitTrack = typedArray.getBoolean(4, false);
        ColorStateList T = b02.T(9);
        if (T != null) {
            this.mThumbTintList = T;
            this.mHasThumbTint = true;
        }
        PorterDuff.Mode c6 = n1.c(typedArray.getInt(10, -1), null);
        if (this.mThumbTintMode != c6) {
            this.mThumbTintMode = c6;
            this.mHasThumbTintMode = true;
        }
        if (this.mHasThumbTint || this.mHasThumbTintMode) {
            a();
        }
        ColorStateList T2 = b02.T(12);
        if (T2 != null) {
            this.mTrackTintList = T2;
            this.mHasTrackTint = true;
        }
        PorterDuff.Mode c8 = n1.c(typedArray.getInt(13, -1), null);
        if (this.mTrackTintMode != c8) {
            this.mTrackTintMode = c8;
            this.mHasTrackTintMode = true;
        }
        if (this.mHasTrackTint || this.mHasTrackTintMode) {
            b();
        }
        int resourceId = typedArray.getResourceId(7, 0);
        if (resourceId != 0) {
            setSwitchTextAppearance(context, resourceId);
        }
        AppCompatTextHelper appCompatTextHelper = new AppCompatTextHelper(this);
        this.mTextHelper = appCompatTextHelper;
        appCompatTextHelper.f(null, com.discord.R.attr.switchStyle);
        b02.e0();
        ViewConfiguration viewConfiguration = ViewConfiguration.get(context);
        this.mTouchSlop = viewConfiguration.getScaledTouchSlop();
        this.mMinFlingVelocity = viewConfiguration.getScaledMinimumFlingVelocity();
        getEmojiTextViewHelper().b(null, com.discord.R.attr.switchStyle);
        refreshDrawableState();
        setChecked(isChecked());
    }

    @NonNull
    private AppCompatEmojiTextHelper getEmojiTextViewHelper() {
        if (this.mAppCompatEmojiTextHelper == null) {
            this.mAppCompatEmojiTextHelper = new AppCompatEmojiTextHelper(this);
        }
        return this.mAppCompatEmojiTextHelper;
    }

    private boolean getTargetCheckedState() {
        return this.mThumbPosition > 0.5f;
    }

    private int getThumbOffset() {
        boolean z5 = f4.a;
        return (int) (((getLayoutDirection() == 1 ? 1.0f - this.mThumbPosition : this.mThumbPosition) * getThumbScrollRange()) + 0.5f);
    }

    private int getThumbScrollRange() {
        Drawable drawable = this.mTrackDrawable;
        if (drawable == null) {
            return 0;
        }
        Rect rect = this.mTempRect;
        drawable.getPadding(rect);
        Drawable drawable2 = this.mThumbDrawable;
        Rect b10 = drawable2 != null ? n1.b(drawable2) : n1.f1049c;
        return ((((this.mSwitchWidth - this.mThumbWidth) - rect.left) - rect.right) - b10.left) - b10.right;
    }

    private void setTextOffInternal(CharSequence charSequence) {
        this.mTextOff = charSequence;
        AppCompatEmojiTextHelper emojiTextViewHelper = getEmojiTextViewHelper();
        TransformationMethod O = ((zk.a) emojiTextViewHelper.f854b.f18811d).O(this.mSwitchTransformationMethod);
        if (O != null) {
            charSequence = O.getTransformation(charSequence, this);
        }
        this.mTextOffTransformed = charSequence;
        this.mOffLayout = null;
        if (this.mShowText) {
            c();
        }
    }

    private void setTextOnInternal(CharSequence charSequence) {
        this.mTextOn = charSequence;
        AppCompatEmojiTextHelper emojiTextViewHelper = getEmojiTextViewHelper();
        TransformationMethod O = ((zk.a) emojiTextViewHelper.f854b.f18811d).O(this.mSwitchTransformationMethod);
        if (O != null) {
            charSequence = O.getTransformation(charSequence, this);
        }
        this.mTextOnTransformed = charSequence;
        this.mOnLayout = null;
        if (this.mShowText) {
            c();
        }
    }

    public final void a() {
        Drawable drawable = this.mThumbDrawable;
        if (drawable != null) {
            if (this.mHasThumbTint || this.mHasThumbTintMode) {
                Drawable mutate = drawable.mutate();
                this.mThumbDrawable = mutate;
                if (this.mHasThumbTint) {
                    mutate.setTintList(this.mThumbTintList);
                }
                if (this.mHasThumbTintMode) {
                    this.mThumbDrawable.setTintMode(this.mThumbTintMode);
                }
                if (this.mThumbDrawable.isStateful()) {
                    this.mThumbDrawable.setState(getDrawableState());
                }
            }
        }
    }

    public final void b() {
        Drawable drawable = this.mTrackDrawable;
        if (drawable != null) {
            if (this.mHasTrackTint || this.mHasTrackTintMode) {
                Drawable mutate = drawable.mutate();
                this.mTrackDrawable = mutate;
                if (this.mHasTrackTint) {
                    mutate.setTintList(this.mTrackTintList);
                }
                if (this.mHasTrackTintMode) {
                    this.mTrackDrawable.setTintMode(this.mTrackTintMode);
                }
                if (this.mTrackDrawable.isStateful()) {
                    this.mTrackDrawable.setState(getDrawableState());
                }
            }
        }
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r1v1, types: [androidx.appcompat.widget.SwitchCompat$EmojiCompatInitCallback, k2.h] */
    public final void c() {
        if (this.mEmojiCompatInitCallback == null && ((zk.a) this.mAppCompatEmojiTextHelper.f854b.f18811d).w() && k2.j.k != null) {
            k2.j a = k2.j.a();
            int b10 = a.b();
            if (b10 == 3 || b10 == 0) {
                ?? r12 = new k2.h(this) { // from class: androidx.appcompat.widget.SwitchCompat$EmojiCompatInitCallback
                    public final WeakReference a;

                    {
                        this.a = new WeakReference(this);
                    }

                    @Override // k2.h
                    public final void a() {
                        j3 j3Var = (j3) this.a.get();
                        if (j3Var != null) {
                            j3Var.onEmojiCompatInitializedForSwitchText();
                        }
                    }

                    @Override // k2.h
                    public final void b() {
                        j3 j3Var = (j3) this.a.get();
                        if (j3Var != null) {
                            j3Var.onEmojiCompatInitializedForSwitchText();
                        }
                    }
                };
                this.mEmojiCompatInitCallback = r12;
                a.f(r12);
            }
        }
    }

    @Override // android.view.View
    public void draw(@NonNull Canvas canvas) {
        int i5;
        int i6;
        Rect rect = this.mTempRect;
        int i10 = this.mSwitchLeft;
        int i11 = this.mSwitchTop;
        int i12 = this.mSwitchRight;
        int i13 = this.mSwitchBottom;
        int thumbOffset = getThumbOffset() + i10;
        Drawable drawable = this.mThumbDrawable;
        Rect b10 = drawable != null ? n1.b(drawable) : n1.f1049c;
        Drawable drawable2 = this.mTrackDrawable;
        if (drawable2 != null) {
            drawable2.getPadding(rect);
            int i14 = rect.left;
            thumbOffset += i14;
            if (b10 != null) {
                int i15 = b10.left;
                if (i15 > i14) {
                    i10 += i15 - i14;
                }
                int i16 = b10.top;
                int i17 = rect.top;
                i5 = i16 > i17 ? (i16 - i17) + i11 : i11;
                int i18 = b10.right;
                int i19 = rect.right;
                if (i18 > i19) {
                    i12 -= i18 - i19;
                }
                int i20 = b10.bottom;
                int i21 = rect.bottom;
                if (i20 > i21) {
                    i6 = i13 - (i20 - i21);
                    this.mTrackDrawable.setBounds(i10, i5, i12, i6);
                }
            } else {
                i5 = i11;
            }
            i6 = i13;
            this.mTrackDrawable.setBounds(i10, i5, i12, i6);
        }
        Drawable drawable3 = this.mThumbDrawable;
        if (drawable3 != null) {
            drawable3.getPadding(rect);
            int i22 = thumbOffset - rect.left;
            int i23 = thumbOffset + this.mThumbWidth + rect.right;
            this.mThumbDrawable.setBounds(i22, i11, i23, i13);
            Drawable background = getBackground();
            if (background != null) {
                background.setHotspotBounds(i22, i11, i23, i13);
            }
        }
        super.draw(canvas);
    }

    @Override // android.widget.CompoundButton, android.widget.TextView, android.view.View
    public void drawableHotspotChanged(float f2, float f10) {
        super.drawableHotspotChanged(f2, f10);
        Drawable drawable = this.mThumbDrawable;
        if (drawable != null) {
            drawable.setHotspot(f2, f10);
        }
        Drawable drawable2 = this.mTrackDrawable;
        if (drawable2 != null) {
            drawable2.setHotspot(f2, f10);
        }
    }

    @Override // android.widget.CompoundButton, android.widget.TextView, android.view.View
    public void drawableStateChanged() {
        super.drawableStateChanged();
        int[] drawableState = getDrawableState();
        Drawable drawable = this.mThumbDrawable;
        boolean state = (drawable == null || !drawable.isStateful()) ? false : drawable.setState(drawableState);
        Drawable drawable2 = this.mTrackDrawable;
        if (drawable2 != null && drawable2.isStateful()) {
            state |= drawable2.setState(drawableState);
        }
        if (state) {
            invalidate();
        }
    }

    @Override // android.widget.CompoundButton, android.widget.TextView
    public int getCompoundPaddingLeft() {
        boolean z5 = f4.a;
        if (getLayoutDirection() != 1) {
            return super.getCompoundPaddingLeft();
        }
        int compoundPaddingLeft = super.getCompoundPaddingLeft() + this.mSwitchWidth;
        return !TextUtils.isEmpty(getText()) ? compoundPaddingLeft + this.mSwitchPadding : compoundPaddingLeft;
    }

    @Override // android.widget.CompoundButton, android.widget.TextView
    public int getCompoundPaddingRight() {
        boolean z5 = f4.a;
        if (getLayoutDirection() == 1) {
            return super.getCompoundPaddingRight();
        }
        int compoundPaddingRight = super.getCompoundPaddingRight() + this.mSwitchWidth;
        return !TextUtils.isEmpty(getText()) ? compoundPaddingRight + this.mSwitchPadding : compoundPaddingRight;
    }

    @Override // android.widget.TextView
    public ActionMode.Callback getCustomSelectionActionModeCallback() {
        return androidx.core.widget.h.e(super.getCustomSelectionActionModeCallback());
    }

    public boolean getShowText() {
        return this.mShowText;
    }

    public boolean getSplitTrack() {
        return this.mSplitTrack;
    }

    public int getSwitchMinWidth() {
        return this.mSwitchMinWidth;
    }

    public int getSwitchPadding() {
        return this.mSwitchPadding;
    }

    public CharSequence getTextOff() {
        return this.mTextOff;
    }

    public CharSequence getTextOn() {
        return this.mTextOn;
    }

    public Drawable getThumbDrawable() {
        return this.mThumbDrawable;
    }

    public final float getThumbPosition() {
        return this.mThumbPosition;
    }

    public int getThumbTextPadding() {
        return this.mThumbTextPadding;
    }

    public ColorStateList getThumbTintList() {
        return this.mThumbTintList;
    }

    public PorterDuff.Mode getThumbTintMode() {
        return this.mThumbTintMode;
    }

    public Drawable getTrackDrawable() {
        return this.mTrackDrawable;
    }

    public ColorStateList getTrackTintList() {
        return this.mTrackTintList;
    }

    public PorterDuff.Mode getTrackTintMode() {
        return this.mTrackTintMode;
    }

    public boolean isEmojiCompatEnabled() {
        return ((zk.a) getEmojiTextViewHelper().f854b.f18811d).w();
    }

    @Override // android.widget.CompoundButton, android.widget.TextView, android.view.View
    public void jumpDrawablesToCurrentState() {
        super.jumpDrawablesToCurrentState();
        Drawable drawable = this.mThumbDrawable;
        if (drawable != null) {
            drawable.jumpToCurrentState();
        }
        Drawable drawable2 = this.mTrackDrawable;
        if (drawable2 != null) {
            drawable2.jumpToCurrentState();
        }
        ObjectAnimator objectAnimator = this.mPositionAnimator;
        if (objectAnimator == null || !objectAnimator.isStarted()) {
            return;
        }
        this.mPositionAnimator.end();
        this.mPositionAnimator = null;
    }

    @Override // android.widget.CompoundButton, android.widget.TextView, android.view.View
    public int[] onCreateDrawableState(int i5) {
        int[] onCreateDrawableState = super.onCreateDrawableState(i5 + 1);
        if (isChecked()) {
            View.mergeDrawableStates(onCreateDrawableState, CHECKED_STATE_SET);
        }
        return onCreateDrawableState;
    }

    @Override // android.widget.CompoundButton, android.widget.TextView, android.view.View
    public void onDraw(Canvas canvas) {
        int width;
        super.onDraw(canvas);
        Rect rect = this.mTempRect;
        Drawable drawable = this.mTrackDrawable;
        if (drawable != null) {
            drawable.getPadding(rect);
        } else {
            rect.setEmpty();
        }
        int i5 = this.mSwitchTop;
        int i6 = this.mSwitchBottom;
        int i10 = i5 + rect.top;
        int i11 = i6 - rect.bottom;
        Drawable drawable2 = this.mThumbDrawable;
        if (drawable != null) {
            if (!this.mSplitTrack || drawable2 == null) {
                drawable.draw(canvas);
            } else {
                Rect b10 = n1.b(drawable2);
                drawable2.copyBounds(rect);
                rect.left += b10.left;
                rect.right -= b10.right;
                int save = canvas.save();
                canvas.clipRect(rect, Region.Op.DIFFERENCE);
                drawable.draw(canvas);
                canvas.restoreToCount(save);
            }
        }
        int save2 = canvas.save();
        if (drawable2 != null) {
            drawable2.draw(canvas);
        }
        Layout layout = getTargetCheckedState() ? this.mOnLayout : this.mOffLayout;
        if (layout != null) {
            int[] drawableState = getDrawableState();
            ColorStateList colorStateList = this.mTextColors;
            if (colorStateList != null) {
                this.mTextPaint.setColor(colorStateList.getColorForState(drawableState, 0));
            }
            this.mTextPaint.drawableState = drawableState;
            if (drawable2 != null) {
                Rect bounds = drawable2.getBounds();
                width = bounds.left + bounds.right;
            } else {
                width = getWidth();
            }
            canvas.translate((width / 2) - (layout.getWidth() / 2), ((i10 + i11) / 2) - (layout.getHeight() / 2));
            layout.draw(canvas);
        }
        canvas.restoreToCount(save2);
    }

    public void onEmojiCompatInitializedForSwitchText() {
        setTextOnInternal(this.mTextOn);
        setTextOffInternal(this.mTextOff);
        requestLayout();
    }

    @Override // android.view.View
    public void onInitializeAccessibilityEvent(AccessibilityEvent accessibilityEvent) {
        super.onInitializeAccessibilityEvent(accessibilityEvent);
        accessibilityEvent.setClassName(ACCESSIBILITY_EVENT_CLASS_NAME);
    }

    @Override // android.view.View
    public void onInitializeAccessibilityNodeInfo(AccessibilityNodeInfo accessibilityNodeInfo) {
        super.onInitializeAccessibilityNodeInfo(accessibilityNodeInfo);
        accessibilityNodeInfo.setClassName(ACCESSIBILITY_EVENT_CLASS_NAME);
        if (Build.VERSION.SDK_INT < 30) {
            CharSequence charSequence = isChecked() ? this.mTextOn : this.mTextOff;
            if (TextUtils.isEmpty(charSequence)) {
                return;
            }
            CharSequence text = accessibilityNodeInfo.getText();
            if (TextUtils.isEmpty(text)) {
                accessibilityNodeInfo.setText(charSequence);
                return;
            }
            StringBuilder sb2 = new StringBuilder();
            sb2.append(text);
            sb2.append(' ');
            sb2.append(charSequence);
            accessibilityNodeInfo.setText(sb2);
        }
    }

    @Override // android.widget.TextView, android.view.View
    public void onLayout(boolean z5, int i5, int i6, int i10, int i11) {
        int i12;
        int width;
        int i13;
        int i14;
        int i15;
        super.onLayout(z5, i5, i6, i10, i11);
        int i16 = 0;
        if (this.mThumbDrawable != null) {
            Rect rect = this.mTempRect;
            Drawable drawable = this.mTrackDrawable;
            if (drawable != null) {
                drawable.getPadding(rect);
            } else {
                rect.setEmpty();
            }
            Rect b10 = n1.b(this.mThumbDrawable);
            i12 = Math.max(0, b10.left - rect.left);
            i16 = Math.max(0, b10.right - rect.right);
        } else {
            i12 = 0;
        }
        boolean z6 = f4.a;
        if (getLayoutDirection() == 1) {
            i13 = getPaddingLeft() + i12;
            width = ((this.mSwitchWidth + i13) - i12) - i16;
        } else {
            width = (getWidth() - getPaddingRight()) - i16;
            i13 = (width - this.mSwitchWidth) + i12 + i16;
        }
        int gravity = getGravity() & 112;
        if (gravity == 16) {
            int height = ((getHeight() + getPaddingTop()) - getPaddingBottom()) / 2;
            int i17 = this.mSwitchHeight;
            int i18 = height - (i17 / 2);
            i14 = i17 + i18;
            i15 = i18;
        } else if (gravity != 80) {
            i15 = getPaddingTop();
            i14 = this.mSwitchHeight + i15;
        } else {
            i14 = getHeight() - getPaddingBottom();
            i15 = i14 - this.mSwitchHeight;
        }
        this.mSwitchLeft = i13;
        this.mSwitchTop = i15;
        this.mSwitchBottom = i14;
        this.mSwitchRight = width;
    }

    @Override // android.widget.TextView, android.view.View
    public void onMeasure(int i5, int i6) {
        int i10;
        int i11;
        int i12 = 0;
        if (this.mShowText) {
            if (this.mOnLayout == null) {
                CharSequence charSequence = this.mTextOnTransformed;
                this.mOnLayout = new StaticLayout(charSequence, this.mTextPaint, charSequence != null ? (int) Math.ceil(Layout.getDesiredWidth(charSequence, r4)) : 0, Layout.Alignment.ALIGN_NORMAL, 1.0f, 0.0f, true);
            }
            if (this.mOffLayout == null) {
                CharSequence charSequence2 = this.mTextOffTransformed;
                this.mOffLayout = new StaticLayout(charSequence2, this.mTextPaint, charSequence2 != null ? (int) Math.ceil(Layout.getDesiredWidth(charSequence2, r4)) : 0, Layout.Alignment.ALIGN_NORMAL, 1.0f, 0.0f, true);
            }
        }
        Rect rect = this.mTempRect;
        Drawable drawable = this.mThumbDrawable;
        if (drawable != null) {
            drawable.getPadding(rect);
            i10 = (this.mThumbDrawable.getIntrinsicWidth() - rect.left) - rect.right;
            i11 = this.mThumbDrawable.getIntrinsicHeight();
        } else {
            i10 = 0;
            i11 = 0;
        }
        this.mThumbWidth = Math.max(this.mShowText ? (this.mThumbTextPadding * 2) + Math.max(this.mOnLayout.getWidth(), this.mOffLayout.getWidth()) : 0, i10);
        Drawable drawable2 = this.mTrackDrawable;
        if (drawable2 != null) {
            drawable2.getPadding(rect);
            i12 = this.mTrackDrawable.getIntrinsicHeight();
        } else {
            rect.setEmpty();
        }
        int i13 = rect.left;
        int i14 = rect.right;
        Drawable drawable3 = this.mThumbDrawable;
        if (drawable3 != null) {
            Rect b10 = n1.b(drawable3);
            i13 = Math.max(i13, b10.left);
            i14 = Math.max(i14, b10.right);
        }
        int max = this.mEnforceSwitchWidth ? Math.max(this.mSwitchMinWidth, (this.mThumbWidth * 2) + i13 + i14) : this.mSwitchMinWidth;
        int max2 = Math.max(i12, i11);
        this.mSwitchWidth = max;
        this.mSwitchHeight = max2;
        super.onMeasure(i5, i6);
        if (getMeasuredHeight() < max2) {
            setMeasuredDimension(getMeasuredWidthAndState(), max2);
        }
    }

    @Override // android.view.View
    public void onPopulateAccessibilityEvent(AccessibilityEvent accessibilityEvent) {
        super.onPopulateAccessibilityEvent(accessibilityEvent);
        CharSequence charSequence = isChecked() ? this.mTextOn : this.mTextOff;
        if (charSequence != null) {
            accessibilityEvent.getText().add(charSequence);
        }
    }

    /* JADX WARN: Code restructure failed: missing block: B:6:0x0013, code lost:
    
        if (r0 != 3) goto L82;
     */
    @Override // android.widget.TextView, android.view.View
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public boolean onTouchEvent(MotionEvent motionEvent) {
        boolean z5;
        this.mVelocityTracker.addMovement(motionEvent);
        int actionMasked = motionEvent.getActionMasked();
        if (actionMasked != 0) {
            if (actionMasked != 1) {
                if (actionMasked == 2) {
                    int i5 = this.mTouchMode;
                    if (i5 == 1) {
                        float x5 = motionEvent.getX();
                        float y5 = motionEvent.getY();
                        if (Math.abs(x5 - this.mTouchX) > this.mTouchSlop || Math.abs(y5 - this.mTouchY) > this.mTouchSlop) {
                            this.mTouchMode = 2;
                            getParent().requestDisallowInterceptTouchEvent(true);
                            this.mTouchX = x5;
                            this.mTouchY = y5;
                            return true;
                        }
                    } else if (i5 == 2) {
                        float x10 = motionEvent.getX();
                        int thumbScrollRange = getThumbScrollRange();
                        float f2 = x10 - this.mTouchX;
                        float f10 = thumbScrollRange != 0 ? f2 / thumbScrollRange : f2 > 0.0f ? 1.0f : -1.0f;
                        boolean z6 = f4.a;
                        if (getLayoutDirection() == 1) {
                            f10 = -f10;
                        }
                        float f11 = this.mThumbPosition;
                        float f12 = f10 + f11;
                        float f13 = f12 >= 0.0f ? f12 > 1.0f ? 1.0f : f12 : 0.0f;
                        if (f13 != f11) {
                            this.mTouchX = x10;
                            setThumbPosition(f13);
                        }
                        return true;
                    }
                }
            }
            if (this.mTouchMode == 2) {
                this.mTouchMode = 0;
                boolean z7 = motionEvent.getAction() == 1 && isEnabled();
                boolean isChecked = isChecked();
                if (z7) {
                    this.mVelocityTracker.computeCurrentVelocity(1000);
                    float xVelocity = this.mVelocityTracker.getXVelocity();
                    if (Math.abs(xVelocity) > this.mMinFlingVelocity) {
                        boolean z8 = f4.a;
                        z5 = getLayoutDirection() != 1 ? xVelocity > 0.0f : xVelocity < 0.0f;
                    } else {
                        z5 = getTargetCheckedState();
                    }
                } else {
                    z5 = isChecked;
                }
                if (z5 != isChecked) {
                    playSoundEffect(0);
                }
                setChecked(z5);
                MotionEvent obtain = MotionEvent.obtain(motionEvent);
                obtain.setAction(3);
                super.onTouchEvent(obtain);
                obtain.recycle();
                super.onTouchEvent(motionEvent);
                return true;
            }
            this.mTouchMode = 0;
            this.mVelocityTracker.clear();
        } else {
            float x11 = motionEvent.getX();
            float y6 = motionEvent.getY();
            if (isEnabled() && this.mThumbDrawable != null) {
                int thumbOffset = getThumbOffset();
                this.mThumbDrawable.getPadding(this.mTempRect);
                int i6 = this.mSwitchTop;
                int i10 = this.mTouchSlop;
                int i11 = i6 - i10;
                int i12 = (this.mSwitchLeft + thumbOffset) - i10;
                int i13 = this.mThumbWidth + i12;
                Rect rect = this.mTempRect;
                int i14 = i13 + rect.left + rect.right + i10;
                int i15 = this.mSwitchBottom + i10;
                if (x11 > i12 && x11 < i14 && y6 > i11 && y6 < i15) {
                    this.mTouchMode = 1;
                    this.mTouchX = x11;
                    this.mTouchY = y6;
                }
            }
        }
        return super.onTouchEvent(motionEvent);
    }

    @Override // android.widget.TextView
    public void setAllCaps(boolean z5) {
        super.setAllCaps(z5);
        getEmojiTextViewHelper().c(z5);
    }

    @Override // android.widget.CompoundButton, android.widget.Checkable
    public void setChecked(boolean z5) {
        super.setChecked(z5);
        boolean isChecked = isChecked();
        if (isChecked) {
            if (Build.VERSION.SDK_INT >= 30) {
                Object obj = this.mTextOn;
                if (obj == null) {
                    obj = getResources().getString(com.discord.R.string.abc_capital_on);
                }
                Object obj2 = obj;
                WeakHashMap weakHashMap = androidx.core.view.s0.a;
                new androidx.core.view.e0(com.discord.R.id.tag_state_description, CharSequence.class, 64, 30, 2).f(this, obj2);
            }
        } else if (Build.VERSION.SDK_INT >= 30) {
            Object obj3 = this.mTextOff;
            if (obj3 == null) {
                obj3 = getResources().getString(com.discord.R.string.abc_capital_off);
            }
            Object obj4 = obj3;
            WeakHashMap weakHashMap2 = androidx.core.view.s0.a;
            new androidx.core.view.e0(com.discord.R.id.tag_state_description, CharSequence.class, 64, 30, 2).f(this, obj4);
        }
        if (getWindowToken() == null || !isLaidOut()) {
            ObjectAnimator objectAnimator = this.mPositionAnimator;
            if (objectAnimator != null) {
                objectAnimator.cancel();
            }
            setThumbPosition(isChecked ? 1.0f : 0.0f);
            return;
        }
        ObjectAnimator ofFloat = ObjectAnimator.ofFloat(this, THUMB_POS, isChecked ? 1.0f : 0.0f);
        this.mPositionAnimator = ofFloat;
        ofFloat.setDuration(250L);
        this.mPositionAnimator.setAutoCancel(true);
        this.mPositionAnimator.start();
    }

    @Override // android.widget.TextView
    public void setCustomSelectionActionModeCallback(ActionMode.Callback callback) {
        super.setCustomSelectionActionModeCallback(androidx.core.widget.h.f(callback, this));
    }

    public void setEmojiCompatEnabled(boolean z5) {
        getEmojiTextViewHelper().d(z5);
        setTextOnInternal(this.mTextOn);
        setTextOffInternal(this.mTextOff);
        requestLayout();
    }

    public final void setEnforceSwitchWidth(boolean z5) {
        this.mEnforceSwitchWidth = z5;
        invalidate();
    }

    @Override // android.widget.TextView
    public void setFilters(@NonNull InputFilter[] inputFilterArr) {
        super.setFilters(getEmojiTextViewHelper().a(inputFilterArr));
    }

    public void setShowText(boolean z5) {
        if (this.mShowText != z5) {
            this.mShowText = z5;
            requestLayout();
            if (z5) {
                c();
            }
        }
    }

    public void setSplitTrack(boolean z5) {
        this.mSplitTrack = z5;
        invalidate();
    }

    public void setSwitchMinWidth(int i5) {
        this.mSwitchMinWidth = i5;
        requestLayout();
    }

    public void setSwitchPadding(int i5) {
        this.mSwitchPadding = i5;
        requestLayout();
    }

    public void setSwitchTextAppearance(Context context, int i5) {
        ColorStateList colorStateList;
        int resourceId;
        TypedArray obtainStyledAttributes = context.obtainStyledAttributes(i5, h.a.f9466x);
        if (!obtainStyledAttributes.hasValue(3) || (resourceId = obtainStyledAttributes.getResourceId(3, 0)) == 0 || (colorStateList = y0.b.c(context, resourceId)) == null) {
            colorStateList = obtainStyledAttributes.getColorStateList(3);
        }
        if (colorStateList != null) {
            this.mTextColors = colorStateList;
        } else {
            this.mTextColors = getTextColors();
        }
        int dimensionPixelSize = obtainStyledAttributes.getDimensionPixelSize(0, 0);
        if (dimensionPixelSize != 0) {
            float f2 = dimensionPixelSize;
            if (f2 != this.mTextPaint.getTextSize()) {
                this.mTextPaint.setTextSize(f2);
                requestLayout();
            }
        }
        int i6 = obtainStyledAttributes.getInt(1, -1);
        setSwitchTypeface(i6 != 1 ? i6 != 2 ? i6 != 3 ? null : Typeface.MONOSPACE : Typeface.SERIF : Typeface.SANS_SERIF, obtainStyledAttributes.getInt(2, -1));
        if (obtainStyledAttributes.getBoolean(14, false)) {
            Context context2 = getContext();
            l.a aVar = new l.a();
            aVar.f13697d = context2.getResources().getConfiguration().locale;
            this.mSwitchTransformationMethod = aVar;
        } else {
            this.mSwitchTransformationMethod = null;
        }
        setTextOnInternal(this.mTextOn);
        setTextOffInternal(this.mTextOff);
        obtainStyledAttributes.recycle();
    }

    public void setSwitchTypeface(Typeface typeface, int i5) {
        if (i5 <= 0) {
            this.mTextPaint.setFakeBoldText(false);
            this.mTextPaint.setTextSkewX(0.0f);
            setSwitchTypeface(typeface);
        } else {
            Typeface defaultFromStyle = typeface == null ? Typeface.defaultFromStyle(i5) : Typeface.create(typeface, i5);
            setSwitchTypeface(defaultFromStyle);
            int i6 = (~(defaultFromStyle != null ? defaultFromStyle.getStyle() : 0)) & i5;
            this.mTextPaint.setFakeBoldText((i6 & 1) != 0);
            this.mTextPaint.setTextSkewX((i6 & 2) != 0 ? -0.25f : 0.0f);
        }
    }

    public void setTextOff(CharSequence charSequence) {
        setTextOffInternal(charSequence);
        requestLayout();
        if (isChecked() || Build.VERSION.SDK_INT < 30) {
            return;
        }
        Object obj = this.mTextOff;
        if (obj == null) {
            obj = getResources().getString(com.discord.R.string.abc_capital_off);
        }
        WeakHashMap weakHashMap = androidx.core.view.s0.a;
        new androidx.core.view.e0(com.discord.R.id.tag_state_description, CharSequence.class, 64, 30, 2).f(this, obj);
    }

    public void setTextOn(CharSequence charSequence) {
        setTextOnInternal(charSequence);
        requestLayout();
        if (!isChecked() || Build.VERSION.SDK_INT < 30) {
            return;
        }
        Object obj = this.mTextOn;
        if (obj == null) {
            obj = getResources().getString(com.discord.R.string.abc_capital_on);
        }
        WeakHashMap weakHashMap = androidx.core.view.s0.a;
        new androidx.core.view.e0(com.discord.R.id.tag_state_description, CharSequence.class, 64, 30, 2).f(this, obj);
    }

    public void setThumbDrawable(Drawable drawable) {
        Drawable drawable2 = this.mThumbDrawable;
        if (drawable2 != null) {
            drawable2.setCallback(null);
        }
        this.mThumbDrawable = drawable;
        if (drawable != null) {
            drawable.setCallback(this);
        }
        requestLayout();
    }

    public void setThumbPosition(float f2) {
        this.mThumbPosition = f2;
        invalidate();
    }

    public void setThumbResource(int i5) {
        setThumbDrawable(ys.d.J(getContext(), i5));
    }

    public void setThumbTextPadding(int i5) {
        this.mThumbTextPadding = i5;
        requestLayout();
    }

    public void setThumbTintList(ColorStateList colorStateList) {
        this.mThumbTintList = colorStateList;
        this.mHasThumbTint = true;
        a();
    }

    public void setThumbTintMode(PorterDuff.Mode mode) {
        this.mThumbTintMode = mode;
        this.mHasThumbTintMode = true;
        a();
    }

    public void setTrackDrawable(Drawable drawable) {
        Drawable drawable2 = this.mTrackDrawable;
        if (drawable2 != null) {
            drawable2.setCallback(null);
        }
        this.mTrackDrawable = drawable;
        if (drawable != null) {
            drawable.setCallback(this);
        }
        requestLayout();
    }

    public void setTrackResource(int i5) {
        setTrackDrawable(ys.d.J(getContext(), i5));
    }

    public void setTrackTintList(ColorStateList colorStateList) {
        this.mTrackTintList = colorStateList;
        this.mHasTrackTint = true;
        b();
    }

    public void setTrackTintMode(PorterDuff.Mode mode) {
        this.mTrackTintMode = mode;
        this.mHasTrackTintMode = true;
        b();
    }

    @Override // android.widget.CompoundButton, android.widget.Checkable
    public void toggle() {
        setChecked(!isChecked());
    }

    @Override // android.widget.CompoundButton, android.widget.TextView, android.view.View
    public boolean verifyDrawable(@NonNull Drawable drawable) {
        return super.verifyDrawable(drawable) || drawable == this.mThumbDrawable || drawable == this.mTrackDrawable;
    }

    public void setSwitchTypeface(Typeface typeface) {
        if ((this.mTextPaint.getTypeface() == null || this.mTextPaint.getTypeface().equals(typeface)) && (this.mTextPaint.getTypeface() != null || typeface == null)) {
            return;
        }
        this.mTextPaint.setTypeface(typeface);
        requestLayout();
        invalidate();
    }
}
