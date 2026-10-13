package com.discord.blur;

import android.annotation.SuppressLint;
import android.content.Context;
import android.widget.FrameLayout;
import com.discord.blur.BlurViewAPI;
import com.facebook.react.uimanager.ViewProps;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u0000D\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0000\n\u0002\u0010\b\n\u0002\b\u0002\n\u0002\u0010\u0007\n\u0002\b\u0003\n\u0002\u0010\u000b\n\u0002\b\u0003\n\u0002\u0010\u0015\n\u0000\n\u0002\u0018\u0002\n\u0002\u0010\u0002\n\u0002\b\u0011\b\u0001\u0018\u00002\u00020\u00012\u00020\u0002B3\u0012\u0006\u0010\u0003\u001a\u00020\u0004\u0012\u0006\u0010\u0005\u001a\u00020\u0006\u0012\b\b\u0003\u0010\u0007\u001a\u00020\b\u0012\b\b\u0003\u0010\t\u001a\u00020\b\u0012\u0006\u0010\n\u001a\u00020\u000b¢\u0006\u0004\b\f\u0010\rJ\b\u0010\u0017\u001a\u00020\u0016H\u0014J\b\u0010\u0018\u001a\u00020\u0016H\u0014J\u0012\u0010\u0019\u001a\u00020\u00162\b\b\u0001\u0010\u001a\u001a\u00020\bH\u0016J\u0012\u0010\u001b\u001a\u00020\u00162\b\b\u0001\u0010\u001a\u001a\u00020\bH\u0016J\u0018\u0010\u001c\u001a\u00020\u00162\u0006\u0010\u001d\u001a\u00020\b2\u0006\u0010\n\u001a\u00020\u000bH\u0016J\u0010\u0010\u001e\u001a\u00020\u00162\u0006\u0010\u001f\u001a\u00020\u0006H\u0016J0\u0010 \u001a\u00020\u00162\u0006\u0010!\u001a\u00020\u000f2\u0006\u0010\"\u001a\u00020\b2\u0006\u0010#\u001a\u00020\b2\u0006\u0010$\u001a\u00020\b2\u0006\u0010%\u001a\u00020\bH\u0014J\b\u0010&\u001a\u00020\u0016H\u0002R\u000e\u0010\u0005\u001a\u00020\u0006X\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\u0007\u001a\u00020\bX\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\t\u001a\u00020\bX\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\n\u001a\u00020\u000bX\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\u000e\u001a\u00020\u000fX\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\u0010\u001a\u00020\bX\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\u0011\u001a\u00020\bX\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\u0012\u001a\u00020\u0013X\u0082\u000e¢\u0006\u0002\n\u0000R\u0014\u0010\u0014\u001a\b\u0012\u0004\u0012\u00020\u00160\u0015X\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006'"}, d2 = {"Lcom/discord/blur/BlurViewHardwareAccelerated;", "Landroid/widget/FrameLayout;", "Lcom/discord/blur/BlurViewAPI;", "context", "Landroid/content/Context;", "blurTargetNativeId", "", "blurTint", "", "blurTintIOSParityCompensation", "blurAmount", "", "<init>", "(Landroid/content/Context;Ljava/lang/String;IIF)V", "blurViewPropertiesDirty", "", "blurViewWidth", "blurViewHeight", "blurViewLocation", "", "blurTargetChangeListener", "Lkotlin/Function0;", "", "onAttachedToWindow", "onDetachedFromWindow", "setBlurTint", ViewProps.COLOR, "setBlurTintIOSParityCompensation", "setBlurAmount", "rectId", "setBlurTargetNativeId", "nativeId", "onLayout", "changed", ViewProps.LEFT, ViewProps.TOP, ViewProps.RIGHT, ViewProps.BOTTOM, "maybeUpdate", "blur_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
@SuppressLint({"ViewConstructor"})
/* loaded from: classes.dex */
public final class BlurViewHardwareAccelerated extends FrameLayout implements BlurViewAPI {
    private float blurAmount;

    @NotNull
    private final Function0<Unit> blurTargetChangeListener;

    @NotNull
    private String blurTargetNativeId;
    private int blurTint;
    private int blurTintIOSParityCompensation;
    private int blurViewHeight;

    @NotNull
    private int[] blurViewLocation;
    private boolean blurViewPropertiesDirty;
    private int blurViewWidth;

    /* JADX WARN: Illegal instructions before constructor call */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public /* synthetic */ BlurViewHardwareAccelerated(Context context, String str, int i5, int i6, float f2, int i10, DefaultConstructorMarker defaultConstructorMarker) {
        this(context, str, i5, r6, r7);
        float f10;
        int i11;
        i5 = (i10 & 4) != 0 ? 0 : i5;
        if ((i10 & 8) != 0) {
            f10 = f2;
            i11 = 0;
        } else {
            f10 = f2;
            i11 = i6;
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit _init_$lambda$1(BlurViewHardwareAccelerated blurViewHardwareAccelerated) {
        blurViewHardwareAccelerated.maybeUpdate();
        return Unit.a;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit blurTargetChangeListener$lambda$0(BlurViewHardwareAccelerated blurViewHardwareAccelerated) {
        blurViewHardwareAccelerated.maybeUpdate();
        return Unit.a;
    }

    private final void maybeUpdate() {
        boolean z5 = this.blurViewWidth == -1 || this.blurViewHeight == -1;
        BlurViewAPI.Target target = BlurViewTargetRegistry.INSTANCE.get(this.blurTargetNativeId);
        if (target == null || z5 || !this.blurViewPropertiesDirty) {
            return;
        }
        target.setBlurAmount(getId(), this.blurAmount);
        int id2 = getId();
        int[] iArr = this.blurViewLocation;
        target.addBlurRect(id2, iArr[0], iArr[1], this.blurViewWidth, this.blurViewHeight);
        setBackgroundColor(BlurView.INSTANCE.mapBlurTint$blur_release(this.blurTintIOSParityCompensation, this.blurTint, this.blurAmount));
        this.blurViewPropertiesDirty = false;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit onAttachedToWindow$lambda$2(BlurViewHardwareAccelerated blurViewHardwareAccelerated) {
        blurViewHardwareAccelerated.maybeUpdate();
        return Unit.a;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit onDetachedFromWindow$lambda$3(BlurViewHardwareAccelerated blurViewHardwareAccelerated) {
        blurViewHardwareAccelerated.maybeUpdate();
        return Unit.a;
    }

    @Override // android.view.ViewGroup, android.view.View
    public void onAttachedToWindow() {
        super.onAttachedToWindow();
        BlurView.INSTANCE.updateListener$blur_release(this.blurTargetChangeListener, true, new b(this, 3));
    }

    @Override // android.view.ViewGroup, android.view.View
    public void onDetachedFromWindow() {
        super.onDetachedFromWindow();
        BlurView.INSTANCE.updateListener$blur_release(this.blurTargetChangeListener, false, new b(this, 2));
        BlurViewAPI.Target target = BlurViewTargetRegistry.INSTANCE.get(this.blurTargetNativeId);
        if (target != null) {
            target.removeBlurRect(getId());
        }
    }

    @Override // android.widget.FrameLayout, android.view.ViewGroup, android.view.View
    public void onLayout(boolean changed, int left, int top, int right, int bottom) {
        super.onLayout(changed, left, top, right, bottom);
        boolean z5 = (this.blurViewWidth == getWidth() && this.blurViewHeight == getHeight()) ? false : true;
        int[] iArr = this.blurViewLocation;
        int i5 = iArr[0];
        int i6 = iArr[1];
        getLocationInWindow(iArr);
        int[] iArr2 = this.blurViewLocation;
        if (iArr2[0] != i5 || iArr2[1] != i6 || z5) {
            this.blurViewWidth = getWidth();
            this.blurViewHeight = getHeight();
            this.blurViewPropertiesDirty = true;
        }
        maybeUpdate();
    }

    @Override // com.discord.blur.BlurViewAPIBase
    public void setBlurAmount(int rectId, float blurAmount) {
        if (this.blurAmount != blurAmount) {
            this.blurAmount = blurAmount;
            this.blurViewPropertiesDirty = true;
        }
        maybeUpdate();
    }

    @Override // com.discord.blur.BlurViewAPIBase
    public void setBlurTargetNativeId(@NotNull String nativeId) {
        Intrinsics.checkNotNullParameter(nativeId, "nativeId");
        if (!Intrinsics.areEqual(this.blurTargetNativeId, nativeId)) {
            this.blurTargetNativeId = nativeId;
            this.blurViewPropertiesDirty = true;
        }
        maybeUpdate();
    }

    @Override // com.discord.blur.BlurViewAPI
    public void setBlurTint(int color) {
        if (this.blurTint != color) {
            this.blurTint = color;
            this.blurViewPropertiesDirty = true;
        }
        maybeUpdate();
    }

    @Override // com.discord.blur.BlurViewAPI
    public void setBlurTintIOSParityCompensation(int color) {
        if (this.blurTintIOSParityCompensation != color) {
            this.blurTintIOSParityCompensation = color;
            this.blurViewPropertiesDirty = true;
        }
        maybeUpdate();
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public BlurViewHardwareAccelerated(@NotNull Context context, @NotNull String blurTargetNativeId, int i5, int i6, float f2) {
        super(context);
        Intrinsics.checkNotNullParameter(context, "context");
        Intrinsics.checkNotNullParameter(blurTargetNativeId, "blurTargetNativeId");
        this.blurTargetNativeId = blurTargetNativeId;
        this.blurTint = i5;
        this.blurTintIOSParityCompensation = i6;
        this.blurAmount = f2;
        this.blurViewPropertiesDirty = true;
        this.blurViewWidth = -1;
        this.blurViewHeight = -1;
        this.blurViewLocation = new int[2];
        b bVar = new b(this, 0);
        this.blurTargetChangeListener = bVar;
        BlurView.INSTANCE.updateListener$blur_release(bVar, true, new b(this, 1));
    }
}
