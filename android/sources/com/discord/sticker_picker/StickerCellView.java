package com.discord.sticker_picker;

import android.content.Context;
import android.view.View;
import android.widget.FrameLayout;
import com.discord.misc.utilities.drawable.GetDrawableCompatKt;
import com.discord.misc.utilities.size.SizeUtilsKt;
import com.discord.misc.utilities.view.ViewClippingUtilsKt;
import com.discord.ripple.RippleUtilsKt;
import com.discord.sticker.StickerView;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.SourceDebugExtension;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u00004\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000b\n\u0000\n\u0002\u0010\u0002\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0004\b\u0000\u0018\u0000 \u00142\u00020\u0001:\u0001\u0014B\u000f\u0012\u0006\u0010\u0002\u001a\u00020\u0003¢\u0006\u0004\b\u0004\u0010\u0005J\u0010\u0010\u000e\u001a\u00020\u000f2\b\u0010\u0010\u001a\u0004\u0018\u00010\u0011J\u000e\u0010\u0012\u001a\u00020\u000f2\u0006\u0010\f\u001a\u00020\rJ\b\u0010\u0013\u001a\u00020\u000bH\u0002R\u0011\u0010\u0006\u001a\u00020\u0007¢\u0006\b\n\u0000\u001a\u0004\b\b\u0010\tR\u0010\u0010\n\u001a\u0004\u0018\u00010\u000bX\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\f\u001a\u00020\rX\u0082\u000e¢\u0006\u0002\n\u0000¨\u0006\u0015"}, d2 = {"Lcom/discord/sticker_picker/StickerCellView;", "Landroid/widget/FrameLayout;", "context", "Landroid/content/Context;", "<init>", "(Landroid/content/Context;)V", "stickerView", "Lcom/discord/sticker/StickerView;", "getStickerView", "()Lcom/discord/sticker/StickerView;", "lockOverlayView", "Landroid/view/View;", "locked", "", "setAccessibilityLabel", "", "label", "", "setLocked", "ensureLockOverlay", "Companion", "sticker_picker_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
@SourceDebugExtension({"SMAP\nStickerCellView.kt\nKotlin\n*S Kotlin\n*F\n+ 1 StickerCellView.kt\ncom/discord/sticker_picker/StickerCellView\n+ 2 View.kt\nandroidx/core/view/ViewKt\n+ 3 fake.kt\nkotlin/jvm/internal/FakeKt\n*L\n1#1,73:1\n257#2,2:74\n257#2,2:76\n1#3:78\n*S KotlinDebug\n*F\n+ 1 StickerCellView.kt\ncom/discord/sticker_picker/StickerCellView\n*L\n49#1:74,2\n51#1:76,2\n*E\n"})
/* loaded from: classes.dex */
public final class StickerCellView extends FrameLayout {
    private static final int LOCK_CORNER_RADIUS_DP = 4;
    private View lockOverlayView;
    private boolean locked;

    @NotNull
    private final StickerView stickerView;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public StickerCellView(@NotNull Context context) {
        super(context);
        Intrinsics.checkNotNullParameter(context, "context");
        StickerView stickerView = new StickerView(context, null, 0, 6, null);
        this.stickerView = stickerView;
        stickerView.setLayoutParams(new FrameLayout.LayoutParams(-1, -1));
        stickerView.setImportantForAccessibility(4);
        addView(stickerView);
        RippleUtilsKt.addRipple$default(this, true, 0, 2, null);
    }

    private final View ensureLockOverlay() {
        View view = this.lockOverlayView;
        if (view != null) {
            return view;
        }
        View view2 = new View(getContext());
        view2.setLayoutParams(new FrameLayout.LayoutParams(-1, -1));
        Context context = getContext();
        Intrinsics.checkNotNullExpressionValue(context, "getContext(...)");
        view2.setBackground(GetDrawableCompatKt.getDrawableCompat(context, R.drawable.lock_overlay));
        view2.setImportantForAccessibility(2);
        addView(view2);
        this.lockOverlayView = view2;
        return view2;
    }

    @NotNull
    public final StickerView getStickerView() {
        return this.stickerView;
    }

    public final void setAccessibilityLabel(String label) {
        setContentDescription(label);
        setImportantForAccessibility(label != null ? 1 : 2);
    }

    public final void setLocked(boolean locked) {
        if (this.locked == locked) {
            return;
        }
        this.locked = locked;
        if (locked) {
            ensureLockOverlay().setVisibility(0);
        } else {
            View view = this.lockOverlayView;
            if (view != null) {
                view.setVisibility(8);
            }
        }
        ViewClippingUtilsKt.clipToRoundedRectangle(this, locked ? SizeUtilsKt.getDpToPx(4) : 0);
    }
}
