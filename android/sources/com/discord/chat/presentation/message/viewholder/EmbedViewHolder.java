package com.discord.chat.presentation.message.viewholder;

import android.view.View;
import com.discord.chat.bridge.embed.Embed;
import com.discord.chat.bridge.spoiler.SpoilerConfig;
import com.discord.chat.presentation.events.ChatEventHandler;
import com.discord.chat.presentation.message.messagepart.EmbedMessageAccessory;
import com.discord.chat.presentation.message.messagepart.MessageMargins;
import com.discord.chat.presentation.message.view.EmbedView;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.Intrinsics;
import kotlin.text.StringsKt;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u0000J\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\b\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\u0010\u0006\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\u0018\u00002\u00020\u0001B\u000f\u0012\u0006\u0010\u0002\u001a\u00020\u0003¢\u0006\u0004\b\u0004\u0010\u0005Jn\u0010\u0006\u001a\u00020\u00072\u0006\u0010\b\u001a\u00020\t2\u0006\u0010\n\u001a\u00020\u000b2\u0006\u0010\f\u001a\u00020\r2\u0006\u0010\u000e\u001a\u00020\r2\f\u0010\u000f\u001a\b\u0012\u0004\u0012\u00020\u00070\u00102\b\u0010\u0011\u001a\u0004\u0018\u00010\u00122\u001c\u0010\u0013\u001a\u0018\u0012\u0006\u0012\u0004\u0018\u00010\u0015\u0012\u0006\u0012\u0004\u0018\u00010\r\u0012\u0004\u0012\u00020\u00070\u00142\b\u0010\u0016\u001a\u0004\u0018\u00010\u00172\u0006\u0010\u0018\u001a\u00020\u0015R\u000e\u0010\u0002\u001a\u00020\u0003X\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006\u0019"}, d2 = {"Lcom/discord/chat/presentation/message/viewholder/EmbedViewHolder;", "Lcom/discord/chat/presentation/message/viewholder/MessagePartViewHolder;", "embedView", "Lcom/discord/chat/presentation/message/view/EmbedView;", "<init>", "(Lcom/discord/chat/presentation/message/view/EmbedView;)V", "bind", "", "eventHandler", "Lcom/discord/chat/presentation/events/ChatEventHandler;", "accessory", "Lcom/discord/chat/presentation/message/messagepart/EmbedMessageAccessory;", "maxHeightPx", "", "radiusPx", "onTapSpoiler", "Lkotlin/Function0;", "spoilerConfig", "Lcom/discord/chat/bridge/spoiler/SpoilerConfig;", "onMediaClicked", "Lkotlin/Function2;", "", "onMediaLongClicked", "Landroid/view/View$OnLongClickListener;", "portal", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final class EmbedViewHolder extends MessagePartViewHolder {

    @NotNull
    private final EmbedView embedView;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public EmbedViewHolder(@NotNull EmbedView embedView) {
        super(embedView, null);
        Intrinsics.checkNotNullParameter(embedView, "embedView");
        this.embedView = embedView;
    }

    public final void bind(@NotNull ChatEventHandler eventHandler, @NotNull EmbedMessageAccessory accessory, int maxHeightPx, int radiusPx, @NotNull Function0<Unit> onTapSpoiler, SpoilerConfig spoilerConfig, @NotNull Function2<? super Double, ? super Integer, Unit> onMediaClicked, View.OnLongClickListener onMediaLongClicked, double portal) {
        Intrinsics.checkNotNullParameter(eventHandler, "eventHandler");
        Intrinsics.checkNotNullParameter(accessory, "accessory");
        Intrinsics.checkNotNullParameter(onTapSpoiler, "onTapSpoiler");
        Intrinsics.checkNotNullParameter(onMediaClicked, "onMediaClicked");
        String obscure = accessory.getEmbed().getObscure();
        boolean z5 = obscure == null || StringsKt.K(obscure);
        boolean z6 = !z5;
        EmbedView embedView = this.embedView;
        MessageMargins margins = accessory.getMargins();
        Embed embed = accessory.getEmbed();
        long m613getChannelIdo4g7jtM = accessory.m613getChannelIdo4g7jtM();
        String messageId = accessory.getMessageId();
        int constrainedWidth = accessory.getConstrainedWidth();
        boolean z7 = accessory.getShouldAutoPlayGifs() && z5;
        boolean shouldAnimateEmoji = accessory.getShouldAnimateEmoji();
        boolean shouldShowLinkDecorations = accessory.getShouldShowLinkDecorations();
        boolean shouldForceRevealSpoilers = accessory.getShouldForceRevealSpoilers();
        boolean shouldShowRoleDot = accessory.getShouldShowRoleDot();
        boolean shouldShowRoleOnName = accessory.getShouldShowRoleOnName();
        EmbedViewHolder$bind$1 embedViewHolder$bind$1 = new EmbedViewHolder$bind$1(eventHandler);
        EmbedViewHolder$bind$2 embedViewHolder$bind$2 = new EmbedViewHolder$bind$2(eventHandler);
        EmbedViewHolder$bind$3 embedViewHolder$bind$3 = new EmbedViewHolder$bind$3(eventHandler);
        EmbedViewHolder$bind$4 embedViewHolder$bind$4 = new EmbedViewHolder$bind$4(eventHandler);
        EmbedViewHolder$bind$5 embedViewHolder$bind$5 = new EmbedViewHolder$bind$5(eventHandler);
        EmbedViewHolder$bind$6 embedViewHolder$bind$6 = new EmbedViewHolder$bind$6(eventHandler);
        EmbedViewHolder$bind$7 embedViewHolder$bind$7 = new EmbedViewHolder$bind$7(eventHandler);
        EmbedViewHolder$bind$8 embedViewHolder$bind$8 = new EmbedViewHolder$bind$8(eventHandler);
        EmbedViewHolder$bind$9 embedViewHolder$bind$9 = new EmbedViewHolder$bind$9(eventHandler);
        EmbedViewHolder$bind$10 embedViewHolder$bind$10 = new EmbedViewHolder$bind$10(eventHandler);
        EmbedViewHolder$bind$11 embedViewHolder$bind$11 = new EmbedViewHolder$bind$11(eventHandler);
        Boolean obscureIsOpaque = accessory.getEmbed().getObscureIsOpaque();
        boolean booleanValue = obscureIsOpaque != null ? obscureIsOpaque.booleanValue() : false;
        Boolean obscureHideControls = accessory.getEmbed().getObscureHideControls();
        embedView.m751setEmbedKm7rQmo(margins, embed, m613getChannelIdo4g7jtM, messageId, constrainedWidth, maxHeightPx, radiusPx, z7, shouldAnimateEmoji, shouldShowLinkDecorations, shouldShowRoleDot, shouldShowRoleOnName, shouldForceRevealSpoilers, embedViewHolder$bind$1, embedViewHolder$bind$2, onMediaClicked, onMediaLongClicked, embedViewHolder$bind$3, embedViewHolder$bind$4, embedViewHolder$bind$5, onTapSpoiler, embedViewHolder$bind$6, embedViewHolder$bind$7, embedViewHolder$bind$8, embedViewHolder$bind$9, embedViewHolder$bind$10, embedViewHolder$bind$11, spoilerConfig, portal, z6, obscureHideControls != null ? obscureHideControls.booleanValue() : false, booleanValue, accessory.isForwardedContent());
    }
}
