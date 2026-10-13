package com.discord.chat.presentation.message.view;

import android.content.Context;
import android.graphics.Paint;
import android.text.TextPaint;
import android.util.AttributeSet;
import android.view.LayoutInflater;
import android.widget.TextView;
import androidx.constraintlayout.widget.ConstraintLayout;
import androidx.recyclerview.widget.RecyclerView;
import com.discord.chat.bridge.interaction.InteractionStatus;
import com.discord.chat.bridge.structurabletext.StructurableText;
import com.discord.chat.databinding.InteractionStatusViewBinding;
import com.discord.chat.presentation.textutils.TextUtilsKt;
import com.discord.misc.utilities.view.ViewUtilsKt;
import com.discord.progress_dots.ProgressDots;
import com.discord.react_asset_fetcher.ReactAsset;
import com.discord.react_asset_fetcher.ReactAssetUtilsKt;
import com.discord.span.utilities.BackgroundSpanDrawer;
import com.discord.span.utilities.SpannableExtensionsKt;
import com.discord.theme.ThemeManagerKt;
import com.discord.theme.utils.ColorUtilsKt;
import com.facebook.drawee.span.DraweeSpanStringBuilder;
import com.facebook.drawee.view.SimpleDraweeView;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import kotlin.Metadata;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.SourceDebugExtension;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u00002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\u0018\u00002\u00020\u0001B\u001d\b\u0007\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\n\b\u0002\u0010\u0004\u001a\u0004\u0018\u00010\u0005¢\u0006\u0004\b\u0006\u0010\u0007J\u001d\u0010\n\u001a\u00020\u000b2\u0006\u0010\f\u001a\u00020\r2\u0006\u0010\u000e\u001a\u00020\u000f¢\u0006\u0004\b\u0010\u0010\u0011R\u000e\u0010\b\u001a\u00020\tX\u0082\u000e¢\u0006\u0002\n\u0000¨\u0006\u0012"}, d2 = {"Lcom/discord/chat/presentation/message/view/InteractionStatusView;", "Landroidx/constraintlayout/widget/ConstraintLayout;", "context", "Landroid/content/Context;", "attrs", "Landroid/util/AttributeSet;", "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;)V", "binding", "Lcom/discord/chat/databinding/InteractionStatusViewBinding;", "setInteractionStatus", "", "messageId", "Lcom/discord/primitives/MessageId;", "interactionStatus", "Lcom/discord/chat/bridge/interaction/InteractionStatus;", "setInteractionStatus-ntcYbpo", "(Ljava/lang/String;Lcom/discord/chat/bridge/interaction/InteractionStatus;)V", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
@SourceDebugExtension({"SMAP\nInteractionStatusView.kt\nKotlin\n*S Kotlin\n*F\n+ 1 InteractionStatusView.kt\ncom/discord/chat/presentation/message/view/InteractionStatusView\n+ 2 View.kt\nandroidx/core/view/ViewKt\n+ 3 fake.kt\nkotlin/jvm/internal/FakeKt\n*L\n1#1,60:1\n257#2,2:61\n257#2,2:63\n1#3:65\n*S KotlinDebug\n*F\n+ 1 InteractionStatusView.kt\ncom/discord/chat/presentation/message/view/InteractionStatusView\n*L\n38#1:61,2\n39#1:63,2\n*E\n"})
/* loaded from: classes.dex */
public final class InteractionStatusView extends ConstraintLayout {

    @NotNull
    private InteractionStatusViewBinding binding;

    /* JADX WARN: 'this' call moved to the top of the method (can break code semantics) */
    /* JADX WARN: Multi-variable type inference failed */
    public InteractionStatusView(@NotNull Context context) {
        this(context, null, 2, 0 == true ? 1 : 0);
        Intrinsics.checkNotNullParameter(context, "context");
    }

    /* renamed from: setInteractionStatus-ntcYbpo, reason: not valid java name */
    public final void m759setInteractionStatusntcYbpo(@NotNull String messageId, @NotNull InteractionStatus interactionStatus) {
        DraweeSpanStringBuilder spannable;
        Intrinsics.checkNotNullParameter(messageId, "messageId");
        Intrinsics.checkNotNullParameter(interactionStatus, "interactionStatus");
        ProgressDots viewInteractionStatusLoadingDots = this.binding.viewInteractionStatusLoadingDots;
        Intrinsics.checkNotNullExpressionValue(viewInteractionStatusLoadingDots, "viewInteractionStatusLoadingDots");
        viewInteractionStatusLoadingDots.setVisibility(interactionStatus.isLoading() ? 0 : 8);
        SimpleDraweeView viewInteractionStatusDangerIcon = this.binding.viewInteractionStatusDangerIcon;
        Intrinsics.checkNotNullExpressionValue(viewInteractionStatusDangerIcon, "viewInteractionStatusDangerIcon");
        viewInteractionStatusDangerIcon.setVisibility(interactionStatus.isFailed() ? 0 : 8);
        TextView textView = this.binding.viewInteractionStatusLabelMessage;
        Intrinsics.checkNotNull(textView);
        StructurableText text = interactionStatus.getText();
        Context context = textView.getContext();
        Intrinsics.checkNotNullExpressionValue(context, "getContext(...)");
        Paint.FontMetrics fontMetrics = textView.getPaint().getFontMetrics();
        Intrinsics.checkNotNullExpressionValue(fontMetrics, "getFontMetrics(...)");
        float baselineHeightPx = TextUtilsKt.getBaselineHeightPx(fontMetrics);
        TextPaint paint = textView.getPaint();
        Intrinsics.checkNotNullExpressionValue(paint, "getPaint(...)");
        spannable = TextUtilsKt.toSpannable(text, context, messageId, false, false, false, false, paint, (r63 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT) != 0 ? false : false, (r63 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER) != 0 ? new com.discord.chat.presentation.list.delegate.a(28) : null, (r63 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING) != 0 ? new com.discord.chat.presentation.textutils.c(8) : null, (r63 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_OVERFLOW_INSET) != 0 ? new b(2) : null, (r63 & RecyclerView.ItemAnimator.FLAG_MOVED) != 0 ? new c(2) : null, (r63 & RecyclerView.ItemAnimator.FLAG_APPEARED_IN_PRE_LAYOUT) != 0 ? new com.discord.chat.presentation.list.delegate.a(29) : null, (r63 & 8192) != 0 ? new com.discord.c(4) : null, (r63 & 16384) != 0 ? new d(3) : null, (32768 & r63) != 0 ? new com.discord.chat.presentation.textutils.c(0) : null, (65536 & r63) != 0 ? new com.discord.chat.presentation.textutils.c(1) : null, (131072 & r63) != 0 ? new com.discord.chat.presentation.textutils.c(2) : null, (262144 & r63) != 0 ? new com.discord.chat.presentation.textutils.c(3) : null, (524288 & r63) != 0 ? new com.discord.chat.presentation.textutils.c(4) : null, (1048576 & r63) != 0 ? new com.discord.chat.presentation.textutils.c(5) : null, (2097152 & r63) != 0 ? new com.discord.chat.presentation.textutils.c(6) : null, (4194304 & r63) != 0 ? new com.discord.chat.presentation.list.a(29) : null, (8388608 & r63) != 0 ? new com.discord.chat.presentation.textutils.c(7) : null, (16777216 & r63) != 0 ? false : false, (33554432 & r63) != 0 ? ThemeManagerKt.getTheme() : null, (67108864 & r63) != 0 ? -1.0f : baselineHeightPx, (134217728 & r63) != 0 ? null : null, (r63 & 268435456) != 0 ? false : false);
        SpannableExtensionsKt.coverWithSpan(spannable, new BackgroundSpanDrawer(textView));
        ViewUtilsKt.setOptionalText(textView, spannable);
        textView.setTextColor(interactionStatus.isFailed() ? ThemeManagerKt.getTheme().getTextFeedbackCritical() : ThemeManagerKt.getTheme().getTextMuted());
    }

    public /* synthetic */ InteractionStatusView(Context context, AttributeSet attributeSet, int i5, DefaultConstructorMarker defaultConstructorMarker) {
        this(context, (i5 & 2) != 0 ? null : attributeSet);
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public InteractionStatusView(@NotNull Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
        Intrinsics.checkNotNullParameter(context, "context");
        InteractionStatusViewBinding inflate = InteractionStatusViewBinding.inflate(LayoutInflater.from(context), this);
        Intrinsics.checkNotNullExpressionValue(inflate, "inflate(...)");
        this.binding = inflate;
        SimpleDraweeView simpleDraweeView = inflate.viewInteractionStatusDangerIcon;
        Intrinsics.checkNotNull(simpleDraweeView);
        ReactAssetUtilsKt.setReactAsset(simpleDraweeView, ReactAsset.CircleErrorIcon);
        ColorUtilsKt.setTintColor(simpleDraweeView, Integer.valueOf(ThemeManagerKt.getTheme().getTextFeedbackCritical()));
    }
}
