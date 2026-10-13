package com.discord.chat.presentation.message.view.voicemessages;

import android.content.Context;
import android.graphics.Canvas;
import android.graphics.Paint;
import android.graphics.PorterDuff;
import android.graphics.PorterDuffColorFilter;
import android.util.AttributeSet;
import android.view.View;
import android.view.ViewGroup;
import com.discord.misc.utilities.coroutines.CoroutineViewUtilsKt;
import com.discord.misc.utilities.size.SizeUtilsKt;
import com.discord.theme.ThemeManagerKt;
import com.facebook.react.uimanager.ViewProps;
import com.facebook.react.views.progressbar.ReactProgressBarViewManager;
import java.util.Arrays;
import kotlin.Metadata;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.SourceDebugExtension;
import kotlin.time.Duration;
import kotlinx.coroutines.Job;
import nr.x;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u0000h\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\b\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0012\n\u0002\b\n\n\u0002\u0010\u0007\n\u0002\b\u0004\n\u0002\u0010\t\n\u0002\b\u0007\n\u0002\u0010\u000b\n\u0002\b\u0005\n\u0002\u0018\u0002\n\u0002\b\t\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0007\n\u0002\u0018\u0002\n\u0002\b\u0011\u0018\u0000 Q2\u00020\u00012\u00020\u0002:\u0001QB'\b\u0007\u0012\u0006\u0010\u0003\u001a\u00020\u0004\u0012\n\b\u0002\u0010\u0005\u001a\u0004\u0018\u00010\u0006\u0012\b\b\u0002\u0010\u0007\u001a\u00020\b¢\u0006\u0004\b\t\u0010\nJ\f\u00105\u001a\u00020,*\u00020,H\u0002J\u001a\u0010\u001b\u001a\u0002062\b\b\u0001\u0010\u001a\u001a\u00020\u00192\u0006\u00107\u001a\u00020&H\u0016J\b\u00107\u001a\u000206H\u0002J$\u0010>\u001a\u0002062\b\b\u0002\u0010\u0015\u001a\u00020\u000e2\b\b\u0002\u0010\u0012\u001a\u00020\b2\u0006\u0010?\u001a\u00020&H\u0002J&\u0010@\u001a\u000206*\u00020A2\u0006\u0010B\u001a\u00020\u00192\u0006\u0010C\u001a\u00020,2\b\b\u0002\u0010D\u001a\u00020&H\u0002J\u0010\u0010E\u001a\u0002062\u0006\u0010F\u001a\u00020AH\u0014J\u0018\u0010G\u001a\u0002062\u0006\u0010H\u001a\u00020\b2\u0006\u0010I\u001a\u00020\bH\u0014J0\u0010J\u001a\u0002062\u0006\u0010K\u001a\u00020&2\u0006\u0010L\u001a\u00020\b2\u0006\u0010M\u001a\u00020\b2\u0006\u0010N\u001a\u00020\b2\u0006\u0010O\u001a\u00020\bH\u0014J\u0006\u0010P\u001a\u000206R\u000e\u0010\u000b\u001a\u00020\fX\u0082\u0004¢\u0006\u0002\n\u0000R\u001e\u0010\u000f\u001a\u00020\u000e2\u0006\u0010\r\u001a\u00020\u000e@BX\u0082\u000e¢\u0006\b\n\u0000\"\u0004\b\u0010\u0010\u0011R\u001e\u0010\u0012\u001a\u00020\b2\u0006\u0010\r\u001a\u00020\b@BX\u0082\u000e¢\u0006\b\n\u0000\"\u0004\b\u0013\u0010\u0014R$\u0010\u0015\u001a\u00020\u000e2\u0006\u0010\r\u001a\u00020\u000e@FX\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\u0016\u0010\u0017\"\u0004\b\u0018\u0010\u0011R&\u0010\u001a\u001a\u0004\u0018\u00010\u00192\b\u0010\r\u001a\u0004\u0018\u00010\u00198\u0002@BX\u0083\u000e¢\u0006\n\n\u0002\u0010\u001d\"\u0004\b\u001b\u0010\u001cR*\u0010\u001f\u001a\u0004\u0018\u00010\u001e2\b\u0010\r\u001a\u0004\u0018\u00010\u001e@FX\u0086\u000e¢\u0006\u0010\n\u0002\u0010$\u001a\u0004\b \u0010!\"\u0004\b\"\u0010#R\u001a\u0010%\u001a\u00020&X\u0096\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b'\u0010(\"\u0004\b)\u0010*R\u000e\u0010+\u001a\u00020,X\u0082\u0004¢\u0006\u0002\n\u0000R&\u0010-\u001a\u00020\b2\u0006\u0010\r\u001a\u00020\b8\u0016@VX\u0097\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b.\u0010/\"\u0004\b0\u0010\u0014R\u000e\u00101\u001a\u00020,X\u0082\u0004¢\u0006\u0002\n\u0000R&\u00102\u001a\u00020\b2\u0006\u0010\r\u001a\u00020\b8\u0016@VX\u0097\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b3\u0010/\"\u0004\b4\u0010\u0014R\u001c\u00108\u001a\u0004\u0018\u000109X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b:\u0010;\"\u0004\b<\u0010=¨\u0006R"}, d2 = {"Lcom/discord/chat/presentation/message/view/voicemessages/AudioWaveView;", "Landroid/view/View;", "Lcom/discord/chat/presentation/message/view/voicemessages/AudioProgressView;", "context", "Landroid/content/Context;", "attrs", "Landroid/util/AttributeSet;", "defStyleAttr", "", "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;I)V", "animationManager", "Lcom/discord/chat/presentation/message/view/voicemessages/AudioWaveAnimationManager;", "value", "", "downSampleData", "setDownSampleData", "([B)V", "numChunks", "setNumChunks", "(I)V", "originalSampleData", "getOriginalSampleData", "()[B", "setOriginalSampleData", "", "audioProgress", "setAudioProgress", "(Ljava/lang/Float;)V", "Ljava/lang/Float;", "", "duration", "getDuration", "()Ljava/lang/Long;", "setDuration", "(Ljava/lang/Long;)V", "Ljava/lang/Long;", "shouldAnimate", "", "getShouldAnimate", "()Z", "setShouldAnimate", "(Z)V", "defaultPaint", "Landroid/graphics/Paint;", "defaultPaintColor", "getDefaultPaintColor", "()I", "setDefaultPaintColor", "audioProgressPaint", "audioProgressPaintColor", "getAudioProgressPaintColor", "setAudioProgressPaintColor", "init", "", "finishAnimation", "animationJob", "Lkotlinx/coroutines/Job;", "getAnimationJob", "()Lkotlinx/coroutines/Job;", "setAnimationJob", "(Lkotlinx/coroutines/Job;)V", "recalculateSampleData", "downSample", "draw", "Landroid/graphics/Canvas;", ReactProgressBarViewManager.PROP_PROGRESS, "paint", "animate", "onDraw", "canvas", "onMeasure", "widthMeasureSpec", "heightMeasureSpec", "onLayout", "changed", ViewProps.LEFT, ViewProps.TOP, ViewProps.RIGHT, ViewProps.BOTTOM, "reset", "Companion", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
@SourceDebugExtension({"SMAP\nAudioWaveView.kt\nKotlin\n*S Kotlin\n*F\n+ 1 AudioWaveView.kt\ncom/discord/chat/presentation/message/view/voicemessages/AudioWaveView\n+ 2 _Arrays.kt\nkotlin/collections/ArraysKt___ArraysKt\n+ 3 Canvas.kt\nandroidx/core/graphics/CanvasKt\n+ 4 View.kt\nandroidx/core/view/ViewKt\n*L\n1#1,273:1\n13547#2,3:274\n27#3,7:277\n376#4,2:284\n388#4,2:286\n*S KotlinDebug\n*F\n+ 1 AudioWaveView.kt\ncom/discord/chat/presentation/message/view/voicemessages/AudioWaveView\n*L\n168#1:274,3\n210#1:277,7\n227#1:284,2\n227#1:286,2\n*E\n"})
/* loaded from: classes.dex */
public final class AudioWaveView extends View implements AudioProgressView {
    private static final float CHUNK_MAX_HEIGHT;
    private static final float CHUNK_MIN_HEIGHT;
    private static final int CHUNK_SIZE;
    private static final int CHUNK_SPACING;
    private static final int CHUNK_WIDTH;
    private static final int FINISH_ANIMATION_NUM_REPEAT = 10;
    private static final long MAX_DURATION;
    private static final int MAX_WIDTH;
    private static final int MIN_CHUNK_NUMBER = 5;
    private static final int MIN_WIDTH;
    private Job animationJob;

    @NotNull
    private final AudioWaveAnimationManager animationManager;
    private Float audioProgress;

    @NotNull
    private final Paint audioProgressPaint;
    private int audioProgressPaintColor;

    @NotNull
    private final Paint defaultPaint;
    private int defaultPaintColor;

    @NotNull
    private byte[] downSampleData;
    private Long duration;
    private int numChunks;

    @NotNull
    private byte[] originalSampleData;
    private boolean shouldAnimate;
    private static final int CHUNK_RADIUS = SizeUtilsKt.getDpToPx(8);

    static {
        int dpToPx = SizeUtilsKt.getDpToPx(2);
        CHUNK_WIDTH = dpToPx;
        int dpToPx2 = SizeUtilsKt.getDpToPx(4);
        CHUNK_SPACING = dpToPx2;
        CHUNK_MIN_HEIGHT = SizeUtilsKt.getDpToPx(1);
        CHUNK_MAX_HEIGHT = SizeUtilsKt.getDpToPx(12);
        int i5 = dpToPx + dpToPx2;
        CHUNK_SIZE = i5;
        lr.a aVar = Duration.f13595e;
        MAX_DURATION = Duration.d(lr.c.g(30, lr.d.f14212v));
        MIN_WIDTH = i5 * 5;
        MAX_WIDTH = SizeUtilsKt.getDpToPx(600);
    }

    /* JADX WARN: 'this' call moved to the top of the method (can break code semantics) */
    public AudioWaveView(@NotNull Context context) {
        this(context, null, 0, 6, null);
        Intrinsics.checkNotNullParameter(context, "context");
    }

    private final void draw(Canvas canvas, float f2, Paint paint, boolean z5) {
        if (f2 == 0.0f || this.duration == null) {
            return;
        }
        int height = canvas.getHeight() / 2;
        byte[] bArr = this.downSampleData;
        float length = 1 / bArr.length;
        int length2 = bArr.length;
        int i5 = 0;
        int i6 = 0;
        while (i5 < length2) {
            byte b10 = bArr[i5];
            int i10 = i6 + 1;
            float f10 = i6;
            float f11 = f10 * length;
            if (f11 > f2) {
                this.animationManager.resetIndex(i6);
                return;
            }
            float abs = (SamplerKt.getAbs(b10) / 127) * CHUNK_MAX_HEIGHT;
            float f12 = CHUNK_MIN_HEIGHT;
            float max = (Math.max(abs, f12) - f12) + f12;
            paint.setAlpha(255);
            if (z5) {
                max = this.animationManager.getAnimationValues(i6, (f2 - f11) / length, max);
            }
            float f13 = f10 * CHUNK_SIZE;
            float f14 = height;
            int i11 = CHUNK_RADIUS;
            canvas.drawRoundRect(f13, f14 - max, (i6 * r10) + CHUNK_WIDTH, f14 + max, i11, i11, paint);
            i5++;
            i6 = i10;
        }
    }

    public static /* synthetic */ void draw$default(AudioWaveView audioWaveView, Canvas canvas, float f2, Paint paint, boolean z5, int i5, Object obj) {
        if ((i5 & 4) != 0) {
            z5 = true;
        }
        audioWaveView.draw(canvas, f2, paint, z5);
    }

    private final void finishAnimation() {
        Job job = this.animationJob;
        if (job != null) {
            job.f(null);
        }
        this.animationJob = x.t(CoroutineViewUtilsKt.getAttachedScope(this), null, new AudioWaveView$finishAnimation$1(this, null), 3);
    }

    private final Paint init(Paint paint) {
        paint.setAntiAlias(true);
        paint.setStrokeWidth(0.0f);
        return paint;
    }

    private final void recalculateSampleData(byte[] originalSampleData, int numChunks, boolean downSample) {
        if (!downSample || numChunks == this.downSampleData.length) {
            invalidate();
        } else {
            x.t(CoroutineViewUtilsKt.getAttachedScope(this), null, new AudioWaveView$recalculateSampleData$1(this, originalSampleData, numChunks, null), 3);
        }
    }

    public static /* synthetic */ void recalculateSampleData$default(AudioWaveView audioWaveView, byte[] bArr, int i5, boolean z5, int i6, Object obj) {
        if ((i6 & 1) != 0) {
            bArr = audioWaveView.originalSampleData;
        }
        if ((i6 & 2) != 0) {
            i5 = audioWaveView.numChunks;
        }
        audioWaveView.recalculateSampleData(bArr, i5, z5);
    }

    private final void setAudioProgress(Float f2) {
        this.audioProgress = f2;
        postInvalidate();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final void setDownSampleData(byte[] bArr) {
        this.animationManager.setData(bArr);
        this.downSampleData = bArr;
    }

    private final void setNumChunks(int i5) {
        recalculateSampleData$default(this, null, i5, this.numChunks != i5, 1, null);
        this.numChunks = i5;
    }

    public final Job getAnimationJob() {
        return this.animationJob;
    }

    @Override // com.discord.chat.presentation.message.view.voicemessages.AudioProgressView
    public int getAudioProgressPaintColor() {
        return this.audioProgressPaintColor;
    }

    @Override // com.discord.chat.presentation.message.view.voicemessages.AudioProgressView
    public int getDefaultPaintColor() {
        return this.defaultPaintColor;
    }

    public final Long getDuration() {
        return this.duration;
    }

    @NotNull
    public final byte[] getOriginalSampleData() {
        return this.originalSampleData;
    }

    @Override // com.discord.chat.presentation.message.view.voicemessages.AudioProgressView
    public boolean getShouldAnimate() {
        return this.shouldAnimate;
    }

    @Override // android.view.View
    public void onDraw(@NotNull Canvas canvas) {
        Intrinsics.checkNotNullParameter(canvas, "canvas");
        super.onDraw(canvas);
        if (this.numChunks != this.downSampleData.length) {
            recalculateSampleData$default(this, null, 0, true, 3, null);
            return;
        }
        int save = canvas.save();
        try {
            draw(canvas, 1.0f, this.defaultPaint, false);
            Float f2 = this.audioProgress;
            draw(canvas, f2 != null ? f2.floatValue() : 0.0f, this.audioProgressPaint, getShouldAnimate());
            canvas.restoreToCount(save);
        } catch (Throwable th2) {
            canvas.restoreToCount(save);
            throw th2;
        }
    }

    @Override // android.view.View
    public void onLayout(boolean changed, int left, int top, int right, int bottom) {
        super.onLayout(changed, left, top, right, bottom);
        if (changed) {
            int width = getWidth();
            int i5 = CHUNK_SIZE;
            int i6 = width % i5 > CHUNK_WIDTH ? 1 : 0;
            int i10 = this.numChunks;
            int width2 = (getWidth() / i5) + i6;
            if (width2 < 5) {
                width2 = 5;
            }
            setNumChunks(width2);
            recalculateSampleData$default(this, null, 0, i10 != this.numChunks, 3, null);
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:11:0x0025  */
    /* JADX WARN: Removed duplicated region for block: B:20:0x0056  */
    /* JADX WARN: Removed duplicated region for block: B:23:0x005b  */
    /* JADX WARN: Removed duplicated region for block: B:28:0x004e  */
    @Override // android.view.View
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public void onMeasure(int widthMeasureSpec, int heightMeasureSpec) {
        float f2;
        int size;
        int i5;
        int i6;
        Long l6 = this.duration;
        long longValue = l6 != null ? l6.longValue() : 0L;
        if (longValue != 0) {
            long j = MAX_DURATION;
            if (longValue <= j) {
                f2 = longValue / j;
                if (View.MeasureSpec.getMode(widthMeasureSpec) != Integer.MIN_VALUE) {
                    int size2 = View.MeasureSpec.getSize(widthMeasureSpec);
                    ViewGroup.LayoutParams layoutParams = getLayoutParams();
                    int marginStart = size2 - (layoutParams instanceof ViewGroup.MarginLayoutParams ? ((ViewGroup.MarginLayoutParams) layoutParams).getMarginStart() : 0);
                    size = (int) ((marginStart - (getLayoutParams() instanceof ViewGroup.MarginLayoutParams ? ((ViewGroup.MarginLayoutParams) r0).getMarginEnd() : 0)) * f2);
                } else {
                    size = View.MeasureSpec.getSize(widthMeasureSpec);
                }
                i5 = MAX_WIDTH;
                if (size > i5) {
                    size = i5;
                }
                i6 = MIN_WIDTH;
                if (size < i6) {
                    size = i6;
                }
                setMeasuredDimension(size, View.MeasureSpec.getSize(heightMeasureSpec));
            }
        }
        f2 = 1.0f;
        if (View.MeasureSpec.getMode(widthMeasureSpec) != Integer.MIN_VALUE) {
        }
        i5 = MAX_WIDTH;
        if (size > i5) {
        }
        i6 = MIN_WIDTH;
        if (size < i6) {
        }
        setMeasuredDimension(size, View.MeasureSpec.getSize(heightMeasureSpec));
    }

    public final void reset() {
        this.animationManager.reset();
    }

    public final void setAnimationJob(Job job) {
        this.animationJob = job;
    }

    @Override // com.discord.chat.presentation.message.view.voicemessages.AudioProgressView
    public void setAudioProgressPaintColor(int i5) {
        if (i5 != this.audioProgressPaintColor) {
            this.audioProgressPaint.setColorFilter(new PorterDuffColorFilter(i5, PorterDuff.Mode.SRC_IN));
            postInvalidate();
        }
        this.audioProgressPaintColor = i5;
    }

    @Override // com.discord.chat.presentation.message.view.voicemessages.AudioProgressView
    public void setDefaultPaintColor(int i5) {
        if (i5 != this.defaultPaintColor) {
            this.defaultPaint.setColor(i5);
            postInvalidate();
        }
        this.defaultPaintColor = i5;
    }

    public final void setDuration(Long l6) {
        this.duration = l6;
        requestLayout();
    }

    public final void setOriginalSampleData(@NotNull byte[] value) {
        Intrinsics.checkNotNullParameter(value, "value");
        recalculateSampleData$default(this, value, 0, !Arrays.equals(this.originalSampleData, value), 2, null);
        this.originalSampleData = value;
    }

    @Override // com.discord.chat.presentation.message.view.voicemessages.AudioProgressView
    public void setShouldAnimate(boolean z5) {
        this.shouldAnimate = z5;
    }

    /* JADX WARN: 'this' call moved to the top of the method (can break code semantics) */
    public AudioWaveView(@NotNull Context context, AttributeSet attributeSet) {
        this(context, attributeSet, 0, 4, null);
        Intrinsics.checkNotNullParameter(context, "context");
    }

    public /* synthetic */ AudioWaveView(Context context, AttributeSet attributeSet, int i5, int i6, DefaultConstructorMarker defaultConstructorMarker) {
        this(context, (i6 & 2) != 0 ? null : attributeSet, (i6 & 4) != 0 ? 0 : i5);
    }

    @Override // com.discord.chat.presentation.message.view.voicemessages.AudioProgressView
    public void setAudioProgress(float audioProgress, boolean finishAnimation) {
        setAudioProgress(Float.valueOf(audioProgress));
        if (getShouldAnimate() && finishAnimation) {
            finishAnimation();
        }
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public AudioWaveView(@NotNull Context context, AttributeSet attributeSet, int i5) {
        super(context, attributeSet, i5);
        Intrinsics.checkNotNullParameter(context, "context");
        this.animationManager = new AudioWaveAnimationManager();
        this.downSampleData = new byte[0];
        this.originalSampleData = new byte[0];
        this.shouldAnimate = true;
        Paint init = init(new Paint());
        this.defaultPaint = init;
        this.defaultPaintColor = ThemeManagerKt.getTheme().getInteractiveTextDefault();
        Paint init2 = init(new Paint());
        this.audioProgressPaint = init2;
        this.audioProgressPaintColor = ThemeManagerKt.getTheme().getInteractiveTextActive();
        init.setColor(ThemeManagerKt.getTheme().getInteractiveTextDefault());
        init2.setColorFilter(new PorterDuffColorFilter(ThemeManagerKt.getTheme().getInteractiveTextActive(), PorterDuff.Mode.SRC_IN));
    }
}
