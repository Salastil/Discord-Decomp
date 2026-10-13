package io.sentry.android.replay.screenshot;

import android.annotation.SuppressLint;
import android.graphics.Bitmap;
import android.graphics.Canvas;
import android.graphics.Matrix;
import android.graphics.Paint;
import android.graphics.Rect;
import android.graphics.RectF;
import android.view.PixelCopy;
import android.view.View;
import android.view.Window;
import androidx.fragment.app.e;
import fo.l;
import fo.m;
import io.sentry.SentryLevel;
import io.sentry.android.core.h1;
import io.sentry.android.core.internal.util.j;
import io.sentry.android.replay.ExecutorProvider;
import io.sentry.android.replay.ScreenshotRecorderCallback;
import io.sentry.android.replay.ScreenshotRecorderConfig;
import io.sentry.android.replay.WindowsKt;
import io.sentry.android.replay.util.DebugOverlayDrawable;
import io.sentry.android.replay.util.MainLooperHandler;
import io.sentry.android.replay.util.ReplayRunnable;
import io.sentry.android.replay.util.TextLayout;
import io.sentry.android.replay.util.ViewsKt;
import io.sentry.android.replay.viewhierarchy.ViewHierarchyNode;
import io.sentry.v5;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import java.util.concurrent.ScheduledExecutorService;
import java.util.concurrent.atomic.AtomicBoolean;
import kotlin.Lazy;
import kotlin.Metadata;
import kotlin.Pair;
import kotlin.Unit;
import kotlin.collections.b0;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u0000~\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\b\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0002\n\u0002\b\u0004\n\u0002\u0010\u000b\n\u0002\b\b\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\t\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0007\b\u0001\u0018\u00002\u00020\u0001B1\u0012\u0006\u0010\u0003\u001a\u00020\u0002\u0012\b\u0010\u0005\u001a\u0004\u0018\u00010\u0004\u0012\u0006\u0010\u0007\u001a\u00020\u0006\u0012\u0006\u0010\t\u001a\u00020\b\u0012\u0006\u0010\u000b\u001a\u00020\n¢\u0006\u0004\b\f\u0010\rJ\u001b\u0010\u0012\u001a\u00020\u0011*\u00020\u000e2\u0006\u0010\u0010\u001a\u00020\u000fH\u0002¢\u0006\u0004\b\u0012\u0010\u0013J\u0017\u0010\u0017\u001a\u00020\u00162\u0006\u0010\u0015\u001a\u00020\u0014H\u0017¢\u0006\u0004\b\u0017\u0010\u0018J\u000f\u0010\u0019\u001a\u00020\u0016H\u0016¢\u0006\u0004\b\u0019\u0010\u001aJ\u000f\u0010\u001c\u001a\u00020\u001bH\u0016¢\u0006\u0004\b\u001c\u0010\u001dJ\u000f\u0010\u001e\u001a\u00020\u0016H\u0016¢\u0006\u0004\b\u001e\u0010\u001aJ\u000f\u0010\u001f\u001a\u00020\u0016H\u0016¢\u0006\u0004\b\u001f\u0010\u001aR\u0016\u0010\u0005\u001a\u0004\u0018\u00010\u00048\u0002X\u0082\u0004¢\u0006\u0006\n\u0004\b\u0005\u0010 R\u0014\u0010\u0007\u001a\u00020\u00068\u0002X\u0082\u0004¢\u0006\u0006\n\u0004\b\u0007\u0010!R\u0014\u0010\t\u001a\u00020\b8\u0002X\u0082\u0004¢\u0006\u0006\n\u0004\b\t\u0010\"R\u0014\u0010\u000b\u001a\u00020\n8\u0002X\u0082\u0004¢\u0006\u0006\n\u0004\b\u000b\u0010#R\u0014\u0010%\u001a\u00020$8\u0002X\u0082\u0004¢\u0006\u0006\n\u0004\b%\u0010&R\u0014\u0010(\u001a\u00020'8\u0002X\u0082\u0004¢\u0006\u0006\n\u0004\b(\u0010)R\u001b\u0010.\u001a\u00020\u000e8BX\u0082\u0084\u0002¢\u0006\f\n\u0004\b*\u0010+\u001a\u0004\b,\u0010-R\u0014\u0010/\u001a\u00020\u000e8\u0002X\u0082\u0004¢\u0006\u0006\n\u0004\b/\u00100R\u001b\u00105\u001a\u0002018BX\u0082\u0084\u0002¢\u0006\f\n\u0004\b2\u0010+\u001a\u0004\b3\u00104R\u001b\u0010:\u001a\u0002068BX\u0082\u0084\u0002¢\u0006\f\n\u0004\b7\u0010+\u001a\u0004\b8\u00109R\u0014\u0010\u001c\u001a\u00020;8\u0002X\u0082\u0004¢\u0006\u0006\n\u0004\b\u001c\u0010<R\u001b\u0010A\u001a\u00020=8BX\u0082\u0084\u0002¢\u0006\f\n\u0004\b>\u0010+\u001a\u0004\b?\u0010@R\u0014\u0010B\u001a\u00020;8\u0002X\u0082\u0004¢\u0006\u0006\n\u0004\bB\u0010<R\u0014\u0010C\u001a\u00020;8\u0002X\u0082\u0004¢\u0006\u0006\n\u0004\bC\u0010<¨\u0006D"}, d2 = {"Lio/sentry/android/replay/screenshot/PixelCopyStrategy;", "Lio/sentry/android/replay/screenshot/ScreenshotStrategy;", "Lio/sentry/android/replay/ExecutorProvider;", "executorProvider", "Lio/sentry/android/replay/ScreenshotRecorderCallback;", "screenshotRecorderCallback", "Lio/sentry/v5;", "options", "Lio/sentry/android/replay/ScreenshotRecorderConfig;", "config", "Lio/sentry/android/replay/util/DebugOverlayDrawable;", "debugOverlayDrawable", "<init>", "(Lio/sentry/android/replay/ExecutorProvider;Lio/sentry/android/replay/ScreenshotRecorderCallback;Lio/sentry/v5;Lio/sentry/android/replay/ScreenshotRecorderConfig;Lio/sentry/android/replay/util/DebugOverlayDrawable;)V", "Landroid/graphics/Bitmap;", "Landroid/graphics/Rect;", "rect", "", "dominantColorForRect", "(Landroid/graphics/Bitmap;Landroid/graphics/Rect;)I", "Landroid/view/View;", "root", "", "capture", "(Landroid/view/View;)V", "onContentChanged", "()V", "", "lastCaptureSuccessful", "()Z", "emitLastScreenshot", "close", "Lio/sentry/android/replay/ScreenshotRecorderCallback;", "Lio/sentry/v5;", "Lio/sentry/android/replay/ScreenshotRecorderConfig;", "Lio/sentry/android/replay/util/DebugOverlayDrawable;", "Ljava/util/concurrent/ScheduledExecutorService;", "executor", "Ljava/util/concurrent/ScheduledExecutorService;", "Lio/sentry/android/replay/util/MainLooperHandler;", "mainLooperHandler", "Lio/sentry/android/replay/util/MainLooperHandler;", "singlePixelBitmap$delegate", "Lkotlin/Lazy;", "getSinglePixelBitmap", "()Landroid/graphics/Bitmap;", "singlePixelBitmap", "screenshot", "Landroid/graphics/Bitmap;", "Landroid/graphics/Canvas;", "singlePixelBitmapCanvas$delegate", "getSinglePixelBitmapCanvas", "()Landroid/graphics/Canvas;", "singlePixelBitmapCanvas", "Landroid/graphics/Matrix;", "prescaledMatrix$delegate", "getPrescaledMatrix", "()Landroid/graphics/Matrix;", "prescaledMatrix", "Ljava/util/concurrent/atomic/AtomicBoolean;", "Ljava/util/concurrent/atomic/AtomicBoolean;", "Landroid/graphics/Paint;", "maskingPaint$delegate", "getMaskingPaint", "()Landroid/graphics/Paint;", "maskingPaint", "contentChanged", "isClosed", "sentry-android-replay_release"}, k = 1, mv = {1, 9, 0}, xi = 48)
@SuppressLint({"UseKtx"})
/* loaded from: classes3.dex */
public final class PixelCopyStrategy implements ScreenshotStrategy {
    public static final int $stable = 8;

    @NotNull
    private final ScreenshotRecorderConfig config;

    @NotNull
    private final AtomicBoolean contentChanged;

    @NotNull
    private final DebugOverlayDrawable debugOverlayDrawable;

    @NotNull
    private final ScheduledExecutorService executor;

    @NotNull
    private final AtomicBoolean isClosed;

    @NotNull
    private final AtomicBoolean lastCaptureSuccessful;

    @NotNull
    private final MainLooperHandler mainLooperHandler;

    /* renamed from: maskingPaint$delegate, reason: from kotlin metadata */
    @NotNull
    private final Lazy maskingPaint;

    @NotNull
    private final v5 options;

    /* renamed from: prescaledMatrix$delegate, reason: from kotlin metadata */
    @NotNull
    private final Lazy prescaledMatrix;

    @NotNull
    private final Bitmap screenshot;
    private final ScreenshotRecorderCallback screenshotRecorderCallback;

    /* renamed from: singlePixelBitmap$delegate, reason: from kotlin metadata */
    @NotNull
    private final Lazy singlePixelBitmap;

    /* renamed from: singlePixelBitmapCanvas$delegate, reason: from kotlin metadata */
    @NotNull
    private final Lazy singlePixelBitmapCanvas;

    public PixelCopyStrategy(@NotNull ExecutorProvider executorProvider, ScreenshotRecorderCallback screenshotRecorderCallback, @NotNull v5 options, @NotNull ScreenshotRecorderConfig config, @NotNull DebugOverlayDrawable debugOverlayDrawable) {
        Intrinsics.checkNotNullParameter(executorProvider, "executorProvider");
        Intrinsics.checkNotNullParameter(options, "options");
        Intrinsics.checkNotNullParameter(config, "config");
        Intrinsics.checkNotNullParameter(debugOverlayDrawable, "debugOverlayDrawable");
        this.screenshotRecorderCallback = screenshotRecorderCallback;
        this.options = options;
        this.config = config;
        this.debugOverlayDrawable = debugOverlayDrawable;
        this.executor = executorProvider.getExecutor();
        this.mainLooperHandler = executorProvider.getMainLooperHandler();
        m mVar = m.f8828i;
        this.singlePixelBitmap = l.b(mVar, new Function0<Bitmap>() { // from class: io.sentry.android.replay.screenshot.PixelCopyStrategy$singlePixelBitmap$2
            @Override // kotlin.jvm.functions.Function0
            public final Bitmap invoke() {
                Bitmap createBitmap = Bitmap.createBitmap(1, 1, Bitmap.Config.ARGB_8888);
                Intrinsics.checkNotNullExpressionValue(createBitmap, "createBitmap(...)");
                return createBitmap;
            }
        });
        Bitmap createBitmap = Bitmap.createBitmap(config.getRecordingWidth(), config.getRecordingHeight(), Bitmap.Config.ARGB_8888);
        Intrinsics.checkNotNullExpressionValue(createBitmap, "createBitmap(...)");
        this.screenshot = createBitmap;
        this.singlePixelBitmapCanvas = l.b(mVar, new Function0<Canvas>() { // from class: io.sentry.android.replay.screenshot.PixelCopyStrategy$singlePixelBitmapCanvas$2
            {
                super(0);
            }

            @Override // kotlin.jvm.functions.Function0
            public final Canvas invoke() {
                Bitmap singlePixelBitmap;
                singlePixelBitmap = PixelCopyStrategy.this.getSinglePixelBitmap();
                return new Canvas(singlePixelBitmap);
            }
        });
        this.prescaledMatrix = l.b(mVar, new Function0<Matrix>() { // from class: io.sentry.android.replay.screenshot.PixelCopyStrategy$prescaledMatrix$2
            {
                super(0);
            }

            @Override // kotlin.jvm.functions.Function0
            public final Matrix invoke() {
                ScreenshotRecorderConfig screenshotRecorderConfig;
                ScreenshotRecorderConfig screenshotRecorderConfig2;
                Matrix matrix = new Matrix();
                PixelCopyStrategy pixelCopyStrategy = PixelCopyStrategy.this;
                screenshotRecorderConfig = pixelCopyStrategy.config;
                float scaleFactorX = screenshotRecorderConfig.getScaleFactorX();
                screenshotRecorderConfig2 = pixelCopyStrategy.config;
                matrix.preScale(scaleFactorX, screenshotRecorderConfig2.getScaleFactorY());
                return matrix;
            }
        });
        this.lastCaptureSuccessful = new AtomicBoolean(false);
        this.maskingPaint = l.b(mVar, new Function0<Paint>() { // from class: io.sentry.android.replay.screenshot.PixelCopyStrategy$maskingPaint$2
            @Override // kotlin.jvm.functions.Function0
            public final Paint invoke() {
                return new Paint();
            }
        });
        this.contentChanged = new AtomicBoolean(false);
        this.isClosed = new AtomicBoolean(false);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void capture$lambda$2(PixelCopyStrategy pixelCopyStrategy, View view, int i5) {
        if (pixelCopyStrategy.isClosed.get()) {
            pixelCopyStrategy.options.getLogger().u(SentryLevel.DEBUG, "PixelCopyStrategy is closed, ignoring capture result", new Object[0]);
            return;
        }
        if (i5 != 0) {
            pixelCopyStrategy.options.getLogger().u(SentryLevel.INFO, "Failed to capture replay recording: %d", Integer.valueOf(i5));
            pixelCopyStrategy.lastCaptureSuccessful.set(false);
        } else if (pixelCopyStrategy.contentChanged.get()) {
            pixelCopyStrategy.options.getLogger().u(SentryLevel.INFO, "Failed to determine view hierarchy, not capturing", new Object[0]);
            pixelCopyStrategy.lastCaptureSuccessful.set(false);
        } else {
            ViewHierarchyNode fromView = ViewHierarchyNode.INSTANCE.fromView(view, null, 0, pixelCopyStrategy.options);
            ViewsKt.traverse(view, fromView, pixelCopyStrategy.options);
            pixelCopyStrategy.executor.submit(new ReplayRunnable("screenshot_recorder.mask", new e(pixelCopyStrategy, fromView, view)));
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void capture$lambda$2$lambda$1(final PixelCopyStrategy pixelCopyStrategy, ViewHierarchyNode viewHierarchyNode, View view) {
        if (pixelCopyStrategy.isClosed.get() || pixelCopyStrategy.screenshot.isRecycled()) {
            pixelCopyStrategy.options.getLogger().u(SentryLevel.DEBUG, "PixelCopyStrategy is closed, skipping masking", new Object[0]);
            return;
        }
        final ArrayList arrayList = new ArrayList();
        final Canvas canvas = new Canvas(pixelCopyStrategy.screenshot);
        canvas.setMatrix(pixelCopyStrategy.getPrescaledMatrix());
        viewHierarchyNode.traverse(new Function1<ViewHierarchyNode, Boolean>() { // from class: io.sentry.android.replay.screenshot.PixelCopyStrategy$capture$1$1$1
            /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
            {
                super(1);
            }

            @Override // kotlin.jvm.functions.Function1
            public final Boolean invoke(ViewHierarchyNode node) {
                Pair pair;
                Integer dominantColor;
                Paint maskingPaint;
                v5 v5Var;
                Paint maskingPaint2;
                Bitmap bitmap;
                int dominantColorForRect;
                Intrinsics.checkNotNullParameter(node, "node");
                if (node.getShouldMask() && node.getWidth() > 0 && node.getHeight() > 0) {
                    if (node.getVisibleRect() == null) {
                        return Boolean.FALSE;
                    }
                    if (node instanceof ViewHierarchyNode.ImageViewHierarchyNode) {
                        List c6 = b0.c(node.getVisibleRect());
                        PixelCopyStrategy pixelCopyStrategy2 = PixelCopyStrategy.this;
                        bitmap = pixelCopyStrategy2.screenshot;
                        dominantColorForRect = pixelCopyStrategy2.dominantColorForRect(bitmap, node.getVisibleRect());
                        pair = new Pair(c6, Integer.valueOf(dominantColorForRect));
                    } else {
                        if (node instanceof ViewHierarchyNode.TextViewHierarchyNode) {
                            ViewHierarchyNode.TextViewHierarchyNode textViewHierarchyNode = (ViewHierarchyNode.TextViewHierarchyNode) node;
                            TextLayout layout = textViewHierarchyNode.getLayout();
                            pair = new Pair(ViewsKt.getVisibleRects(textViewHierarchyNode.getLayout(), node.getVisibleRect(), textViewHierarchyNode.getPaddingLeft(), textViewHierarchyNode.getPaddingTop()), Integer.valueOf(((layout == null || (dominantColor = layout.getDominantTextColor()) == null) && (dominantColor = textViewHierarchyNode.getDominantColor()) == null) ? -16777216 : dominantColor.intValue()));
                        } else {
                            pair = new Pair(b0.c(node.getVisibleRect()), -16777216);
                        }
                    }
                    List list = (List) pair.f13474d;
                    int intValue = ((Number) pair.f13475e).intValue();
                    maskingPaint = PixelCopyStrategy.this.getMaskingPaint();
                    maskingPaint.setColor(intValue);
                    Canvas canvas2 = canvas;
                    PixelCopyStrategy pixelCopyStrategy3 = PixelCopyStrategy.this;
                    Iterator it = list.iterator();
                    while (it.hasNext()) {
                        RectF rectF = new RectF((Rect) it.next());
                        maskingPaint2 = pixelCopyStrategy3.getMaskingPaint();
                        canvas2.drawRoundRect(rectF, 10.0f, 10.0f, maskingPaint2);
                    }
                    v5Var = PixelCopyStrategy.this.options;
                    if (v5Var.getReplayController().getDebugMaskingEnabled()) {
                        arrayList.addAll(list);
                    }
                }
                return Boolean.TRUE;
            }
        });
        if (pixelCopyStrategy.options.getReplayController().getDebugMaskingEnabled()) {
            pixelCopyStrategy.mainLooperHandler.post(new e(pixelCopyStrategy, view, arrayList, 20));
        }
        ScreenshotRecorderCallback screenshotRecorderCallback = pixelCopyStrategy.screenshotRecorderCallback;
        if (screenshotRecorderCallback != null) {
            screenshotRecorderCallback.onScreenshotRecorded(pixelCopyStrategy.screenshot);
        }
        pixelCopyStrategy.lastCaptureSuccessful.set(true);
        pixelCopyStrategy.contentChanged.set(false);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void capture$lambda$2$lambda$1$lambda$0(PixelCopyStrategy pixelCopyStrategy, View view, List list) {
        if (pixelCopyStrategy.debugOverlayDrawable.getCallback() == null) {
            view.getOverlay().add(pixelCopyStrategy.debugOverlayDrawable);
        }
        pixelCopyStrategy.debugOverlayDrawable.updateMasks(list);
        view.postInvalidate();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void close$lambda$4(PixelCopyStrategy pixelCopyStrategy) {
        if (!pixelCopyStrategy.screenshot.isRecycled()) {
            synchronized (pixelCopyStrategy.screenshot) {
                try {
                    if (!pixelCopyStrategy.screenshot.isRecycled()) {
                        pixelCopyStrategy.screenshot.recycle();
                    }
                    Unit unit = Unit.a;
                } catch (Throwable th2) {
                    throw th2;
                }
            }
        }
        if (pixelCopyStrategy.getSinglePixelBitmap().isRecycled()) {
            return;
        }
        pixelCopyStrategy.getSinglePixelBitmap().recycle();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final int dominantColorForRect(Bitmap bitmap, Rect rect) {
        if (this.isClosed.get() || bitmap.isRecycled() || getSinglePixelBitmap().isRecycled()) {
            return -16777216;
        }
        Rect rect2 = new Rect(rect);
        RectF rectF = new RectF(rect2);
        getPrescaledMatrix().mapRect(rectF);
        rectF.round(rect2);
        getSinglePixelBitmapCanvas().drawBitmap(bitmap, rect2, new Rect(0, 0, 1, 1), (Paint) null);
        return getSinglePixelBitmap().getPixel(0, 0);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final Paint getMaskingPaint() {
        return (Paint) this.maskingPaint.getValue();
    }

    private final Matrix getPrescaledMatrix() {
        return (Matrix) this.prescaledMatrix.getValue();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final Bitmap getSinglePixelBitmap() {
        return (Bitmap) this.singlePixelBitmap.getValue();
    }

    private final Canvas getSinglePixelBitmapCanvas() {
        return (Canvas) this.singlePixelBitmapCanvas.getValue();
    }

    @Override // io.sentry.android.replay.screenshot.ScreenshotStrategy
    @SuppressLint({"NewApi"})
    public void capture(@NotNull View root) {
        Intrinsics.checkNotNullParameter(root, "root");
        Window phoneWindow = WindowsKt.getPhoneWindow(root);
        if (phoneWindow == null) {
            this.options.getLogger().u(SentryLevel.DEBUG, "Window is invalid, not capturing screenshot", new Object[0]);
            return;
        }
        if (this.isClosed.get()) {
            this.options.getLogger().u(SentryLevel.DEBUG, "PixelCopyStrategy is closed, not capturing screenshot", new Object[0]);
            return;
        }
        try {
            this.contentChanged.set(false);
            PixelCopy.request(phoneWindow, this.screenshot, new j(1, this, root), this.mainLooperHandler.getHandler());
        } catch (Throwable th2) {
            this.options.getLogger().k(SentryLevel.WARNING, "Failed to capture replay recording", th2);
            this.lastCaptureSuccessful.set(false);
        }
    }

    @Override // io.sentry.android.replay.screenshot.ScreenshotStrategy
    public void close() {
        this.isClosed.set(true);
        this.executor.submit(new ReplayRunnable("PixelCopyStrategy.close", new h1(4, this)));
    }

    @Override // io.sentry.android.replay.screenshot.ScreenshotStrategy
    public void emitLastScreenshot() {
        ScreenshotRecorderCallback screenshotRecorderCallback;
        if (!lastCaptureSuccessful() || this.screenshot.isRecycled() || (screenshotRecorderCallback = this.screenshotRecorderCallback) == null) {
            return;
        }
        screenshotRecorderCallback.onScreenshotRecorded(this.screenshot);
    }

    @Override // io.sentry.android.replay.screenshot.ScreenshotStrategy
    public boolean lastCaptureSuccessful() {
        return this.lastCaptureSuccessful.get();
    }

    @Override // io.sentry.android.replay.screenshot.ScreenshotStrategy
    public void onContentChanged() {
        this.contentChanged.set(true);
    }
}
