package com.discord.sticker_picker;

import android.content.Context;
import android.view.View;
import android.widget.LinearLayout;
import androidx.core.view.v0;
import com.discord.chat.presentation.message.t;
import com.discord.chat.presentation.message.u;
import com.discord.misc.utilities.measure.ViewMeasureExtensionsKt;
import com.discord.misc.utilities.size.SizeUtilsKt;
import com.discord.react_gesture_handler.nested_touch.NestedScrollOnTouchUtilsKt;
import com.discord.sticker.StickerView;
import com.discord.sticker_picker.StickerPickerRow;
import cs.p;
import fo.n;
import java.util.Iterator;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.collections.c0;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.SourceDebugExtension;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u00002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0002\n\u0002\b\u0006\n\u0002\u0010\u000b\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\u0010\u000e\n\u0002\b\n\b\u0000\u0018\u00002\u00020\u0001B\u000f\u0012\u0006\u0010\u0003\u001a\u00020\u0002¢\u0006\u0004\b\u0004\u0010\u0005J\u0017\u0010\t\u001a\u00020\b2\u0006\u0010\u0007\u001a\u00020\u0006H\u0002¢\u0006\u0004\b\t\u0010\nJ\u0017\u0010\u000b\u001a\u00020\b2\u0006\u0010\u0007\u001a\u00020\u0006H\u0002¢\u0006\u0004\b\u000b\u0010\nJ\r\u0010\f\u001a\u00020\b¢\u0006\u0004\b\f\u0010\rJ\u0015\u0010\u000e\u001a\u00020\b2\u0006\u0010\u0007\u001a\u00020\u0006¢\u0006\u0004\b\u000e\u0010\nR\u0016\u0010\u0010\u001a\u00020\u000f8\u0002@\u0002X\u0082\u000e¢\u0006\u0006\n\u0004\b\u0010\u0010\u0011R.\u0010\u0014\u001a\u000e\u0012\u0004\u0012\u00020\u0013\u0012\u0004\u0012\u00020\b0\u00128\u0006@\u0006X\u0086\u000e¢\u0006\u0012\n\u0004\b\u0014\u0010\u0015\u001a\u0004\b\u0016\u0010\u0017\"\u0004\b\u0018\u0010\u0019R.\u0010\u001a\u001a\u000e\u0012\u0004\u0012\u00020\u0013\u0012\u0004\u0012\u00020\b0\u00128\u0006@\u0006X\u0086\u000e¢\u0006\u0012\n\u0004\b\u001a\u0010\u0015\u001a\u0004\b\u001b\u0010\u0017\"\u0004\b\u001c\u0010\u0019¨\u0006\u001d"}, d2 = {"Lcom/discord/sticker_picker/StickerPickerRowView;", "Landroid/widget/LinearLayout;", "Landroid/content/Context;", "context", "<init>", "(Landroid/content/Context;)V", "Lcom/discord/sticker_picker/StickerPickerRow;", "rowData", "", "configureRowStickerViews", "(Lcom/discord/sticker_picker/StickerPickerRow;)V", "createRowStickerViews", "clean", "()V", "setRowData", "", "firstRenderPass", "Z", "Lkotlin/Function1;", "", "onPressSticker", "Lkotlin/jvm/functions/Function1;", "getOnPressSticker", "()Lkotlin/jvm/functions/Function1;", "setOnPressSticker", "(Lkotlin/jvm/functions/Function1;)V", "onLongPressSticker", "getOnLongPressSticker", "setOnLongPressSticker", "sticker_picker_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
@SourceDebugExtension({"SMAP\nStickerPickerRowView.kt\nKotlin\n*S Kotlin\n*F\n+ 1 StickerPickerRowView.kt\ncom/discord/sticker_picker/StickerPickerRowView\n+ 2 _Sequences.kt\nkotlin/sequences/SequencesKt___SequencesKt\n+ 3 _Collections.kt\nkotlin/collections/CollectionsKt___CollectionsKt\n+ 4 View.kt\nandroidx/core/view/ViewKt\n*L\n1#1,140:1\n1321#2,2:141\n1878#3,2:143\n1880#3:149\n1878#3,3:150\n278#4,2:145\n257#4,2:147\n*S KotlinDebug\n*F\n+ 1 StickerPickerRowView.kt\ncom/discord/sticker_picker/StickerPickerRowView\n*L\n26#1:141,2\n45#1:143,2\n45#1:149\n124#1:150,3\n49#1:145,2\n56#1:147,2\n*E\n"})
/* loaded from: classes.dex */
public final class StickerPickerRowView extends LinearLayout {
    private boolean firstRenderPass;

    @NotNull
    private Function1<? super String, Unit> onLongPressSticker;

    @NotNull
    private Function1<? super String, Unit> onPressSticker;

    @Metadata(k = 3, mv = {2, 1, 0}, xi = 48)
    public /* synthetic */ class WhenMappings {
        public static final /* synthetic */ int[] $EnumSwitchMapping$0;

        static {
            int[] iArr = new int[StickerPickerRow.Sticker.Type.values().length];
            try {
                iArr[StickerPickerRow.Sticker.Type.PNG.ordinal()] = 1;
            } catch (NoSuchFieldError unused) {
            }
            try {
                iArr[StickerPickerRow.Sticker.Type.APNG.ordinal()] = 2;
            } catch (NoSuchFieldError unused2) {
            }
            try {
                iArr[StickerPickerRow.Sticker.Type.LOTTIE.ordinal()] = 3;
            } catch (NoSuchFieldError unused3) {
            }
            try {
                iArr[StickerPickerRow.Sticker.Type.GIF.ordinal()] = 4;
            } catch (NoSuchFieldError unused4) {
            }
            $EnumSwitchMapping$0 = iArr;
        }
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public StickerPickerRowView(@NotNull Context context) {
        super(context);
        Intrinsics.checkNotNullParameter(context, "context");
        this.onPressSticker = new p(3);
        this.onLongPressSticker = new p(4);
        setOrientation(0);
    }

    private final void configureRowStickerViews(StickerPickerRow rowData) {
        int i5 = 0;
        for (Object obj : rowData.getItems()) {
            int i6 = i5 + 1;
            if (i5 < 0) {
                c0.k();
                throw null;
            }
            StickerPickerRow.Sticker sticker = (StickerPickerRow.Sticker) obj;
            View childAt = getChildAt(i5);
            Intrinsics.checkNotNull(childAt, "null cannot be cast to non-null type com.discord.sticker_picker.StickerCellView");
            StickerCellView stickerCellView = (StickerCellView) childAt;
            StickerView stickerView = stickerCellView.getStickerView();
            if (sticker == null) {
                stickerCellView.setVisibility(4);
                stickerCellView.setLocked(false);
                stickerCellView.setAccessibilityLabel(null);
                NestedScrollOnTouchUtilsKt.setOnClickListenerNested$default(stickerCellView, false, null, 1, null);
                NestedScrollOnTouchUtilsKt.setOnLongClickListenerNested$default(stickerCellView, false, null, 1, null);
                stickerView.recycle();
            } else {
                stickerCellView.setVisibility(0);
                stickerCellView.setEnabled(!sticker.getDisabled());
                stickerCellView.setLocked(sticker.getLocked());
                stickerCellView.setAccessibilityLabel(sticker.getName());
                NestedScrollOnTouchUtilsKt.setOnClickListenerNested$default(stickerCellView, false, new u(16, this, sticker), 1, null);
                NestedScrollOnTouchUtilsKt.setOnLongClickListenerNested$default(stickerCellView, false, new t(7, this, sticker), 1, null);
                stickerView.setAlpha(sticker.getOpaque() ? 1.0f : 0.3f);
                int i10 = WhenMappings.$EnumSwitchMapping$0[sticker.getType().ordinal()];
                if (i10 == 1) {
                    stickerView.asPng(sticker.getUrl(), Integer.valueOf(rowData.getItemSize()), Integer.valueOf(rowData.getItemSize()), sticker.getName());
                } else if (i10 == 2) {
                    stickerView.asApng(sticker.getUrl(), Integer.valueOf(rowData.getItemSize()), Integer.valueOf(rowData.getItemSize()), sticker.getAnimated(), sticker.getName());
                } else if (i10 == 3) {
                    stickerView.asLottie(sticker.getUrl(), rowData.getItemSize(), rowData.getItemSize(), sticker.getAnimated(), sticker.getId(), !sticker.getAnimated() ? 1 : 0, sticker.getName());
                } else {
                    if (i10 != 4) {
                        throw new n();
                    }
                    stickerView.asGif(sticker.getUrl(), Integer.valueOf(rowData.getItemSize()), Integer.valueOf(rowData.getItemSize()), sticker.getAnimated(), sticker.getName());
                }
            }
            i5 = i6;
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void configureRowStickerViews$lambda$5$lambda$3(StickerPickerRowView stickerPickerRowView, StickerPickerRow.Sticker sticker, View view) {
        stickerPickerRowView.onPressSticker.invoke(sticker.getId());
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final boolean configureRowStickerViews$lambda$5$lambda$4(StickerPickerRowView stickerPickerRowView, StickerPickerRow.Sticker sticker, View view) {
        stickerPickerRowView.onLongPressSticker.invoke(sticker.getId());
        return true;
    }

    private final void createRowStickerViews(StickerPickerRow rowData) {
        removeAllViews();
        int dpToPx = SizeUtilsKt.getDpToPx(rowData.getItemSize());
        int size = rowData.getItems().size();
        int dpToPx2 = (SizeUtilsKt.getDpToPx(rowData.getRowContentWidth()) - (dpToPx * size)) / (size - 1);
        int dpToPx3 = SizeUtilsKt.getDpToPx(rowData.getRowContentPaddingVertical());
        int i5 = 0;
        for (Object obj : rowData.getItems()) {
            int i6 = i5 + 1;
            if (i5 < 0) {
                c0.k();
                throw null;
            }
            int i10 = i5 == 0 ? 0 : dpToPx2;
            Context context = getContext();
            Intrinsics.checkNotNullExpressionValue(context, "getContext(...)");
            View stickerCellView = new StickerCellView(context);
            LinearLayout.LayoutParams layoutParams = new LinearLayout.LayoutParams(dpToPx, dpToPx);
            layoutParams.setMargins(i10, dpToPx3, 0, dpToPx3);
            stickerCellView.setLayoutParams(layoutParams);
            addView(stickerCellView);
            i5 = i6;
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit onLongPressSticker$lambda$1(String it) {
        Intrinsics.checkNotNullParameter(it, "it");
        return Unit.a;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit onPressSticker$lambda$0(String it) {
        Intrinsics.checkNotNullParameter(it, "it");
        return Unit.a;
    }

    public final void clean() {
        Iterator it = new v0(this).iterator();
        while (it.hasNext()) {
            View view = (View) it.next();
            Intrinsics.checkNotNull(view, "null cannot be cast to non-null type com.discord.sticker_picker.StickerCellView");
            ((StickerCellView) view).getStickerView().recycle();
        }
    }

    @NotNull
    public final Function1<String, Unit> getOnLongPressSticker() {
        return this.onLongPressSticker;
    }

    @NotNull
    public final Function1<String, Unit> getOnPressSticker() {
        return this.onPressSticker;
    }

    public final void setOnLongPressSticker(@NotNull Function1<? super String, Unit> function1) {
        Intrinsics.checkNotNullParameter(function1, "<set-?>");
        this.onLongPressSticker = function1;
    }

    public final void setOnPressSticker(@NotNull Function1<? super String, Unit> function1) {
        Intrinsics.checkNotNullParameter(function1, "<set-?>");
        this.onPressSticker = function1;
    }

    public final void setRowData(@NotNull StickerPickerRow rowData) {
        Intrinsics.checkNotNullParameter(rowData, "rowData");
        if (rowData.getItems().size() != getChildCount()) {
            createRowStickerViews(rowData);
        }
        configureRowStickerViews(rowData);
        if (this.firstRenderPass) {
            this.firstRenderPass = false;
        } else {
            ViewMeasureExtensionsKt.measureAndLayout(this);
        }
    }
}
