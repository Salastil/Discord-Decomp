package com.discord.chat.presentation.message.viewholder;

import android.view.View;
import com.discord.activity_invites.RGBAColorModel;
import com.discord.chat.bridge.activities.ActivityRichPresenceInviteEmbed;
import com.discord.chat.bridge.activities.EmbedDisplayType;
import com.discord.chat.presentation.events.ChatEventHandler;
import com.discord.chat.presentation.message.messagepart.ActivityRichPresenceInviteEmbedMessageAccessory;
import com.discord.chat.presentation.message.messagepart.MessageMargins;
import com.discord.chat.presentation.message.u;
import com.discord.chat.presentation.message.view.ActivityRichPresenceInviteEmbedView;
import com.discord.primitives.MessageId;
import java.util.List;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u0000.\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\u0018\u00002\u00020\u0001B\u0017\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005¢\u0006\u0004\b\u0006\u0010\u0007J\"\u0010\n\u001a\u00020\u000b2\u0006\u0010\f\u001a\u00020\r2\u0012\u0010\u000e\u001a\u000e\u0012\u0004\u0012\u00020\u0010\u0012\u0004\u0012\u00020\u000b0\u000fR\u000e\u0010\u0002\u001a\u00020\u0003X\u0082\u0004¢\u0006\u0002\n\u0000R\u0011\u0010\u0004\u001a\u00020\u0005¢\u0006\b\n\u0000\u001a\u0004\b\b\u0010\t¨\u0006\u0011"}, d2 = {"Lcom/discord/chat/presentation/message/viewholder/ActivityRichPresenceInviteEmbedViewHolder;", "Lcom/discord/chat/presentation/message/viewholder/MessagePartViewHolder;", "activityRichPresenceInviteEmbedView", "Lcom/discord/chat/presentation/message/view/ActivityRichPresenceInviteEmbedView;", "eventHandler", "Lcom/discord/chat/presentation/events/ChatEventHandler;", "<init>", "(Lcom/discord/chat/presentation/message/view/ActivityRichPresenceInviteEmbedView;Lcom/discord/chat/presentation/events/ChatEventHandler;)V", "getEventHandler", "()Lcom/discord/chat/presentation/events/ChatEventHandler;", "bind", "", "accessory", "Lcom/discord/chat/presentation/message/messagepart/ActivityRichPresenceInviteEmbedMessageAccessory;", "onTapJoinRichPresence", "Lkotlin/Function1;", "Lcom/discord/primitives/MessageId;", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final class ActivityRichPresenceInviteEmbedViewHolder extends MessagePartViewHolder {

    @NotNull
    private final ActivityRichPresenceInviteEmbedView activityRichPresenceInviteEmbedView;

    @NotNull
    private final ChatEventHandler eventHandler;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public ActivityRichPresenceInviteEmbedViewHolder(@NotNull ActivityRichPresenceInviteEmbedView activityRichPresenceInviteEmbedView, @NotNull ChatEventHandler eventHandler) {
        super(activityRichPresenceInviteEmbedView, null);
        Intrinsics.checkNotNullParameter(activityRichPresenceInviteEmbedView, "activityRichPresenceInviteEmbedView");
        Intrinsics.checkNotNullParameter(eventHandler, "eventHandler");
        this.activityRichPresenceInviteEmbedView = activityRichPresenceInviteEmbedView;
        this.eventHandler = eventHandler;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void bind$lambda$0(Function1 function1, ActivityRichPresenceInviteEmbedMessageAccessory activityRichPresenceInviteEmbedMessageAccessory, View view) {
        function1.invoke(MessageId.m1189boximpl(activityRichPresenceInviteEmbedMessageAccessory.getMessageId()));
    }

    public final void bind(@NotNull ActivityRichPresenceInviteEmbedMessageAccessory accessory, @NotNull Function1<? super MessageId, Unit> onTapJoinRichPresence) {
        boolean z5;
        boolean z6;
        Intrinsics.checkNotNullParameter(accessory, "accessory");
        Intrinsics.checkNotNullParameter(onTapJoinRichPresence, "onTapJoinRichPresence");
        ActivityRichPresenceInviteEmbed activityRichPresenceInviteEmbed = accessory.getActivityRichPresenceInviteEmbed();
        ActivityRichPresenceInviteEmbedView activityRichPresenceInviteEmbedView = this.activityRichPresenceInviteEmbedView;
        MessageMargins margins = accessory.getMargins();
        EmbedDisplayType displayType = activityRichPresenceInviteEmbed.getDisplayType();
        Boolean ctaButtonEnabled = activityRichPresenceInviteEmbed.getCtaButtonEnabled();
        if (ctaButtonEnabled != null) {
            z5 = ctaButtonEnabled.booleanValue();
            z6 = false;
        } else {
            z5 = false;
            z6 = false;
        }
        String ctaButtonText = activityRichPresenceInviteEmbed.getCtaButtonText();
        Boolean ctaButtonIsLoading = activityRichPresenceInviteEmbed.getCtaButtonIsLoading();
        boolean booleanValue = ctaButtonIsLoading != null ? ctaButtonIsLoading.booleanValue() : z6;
        String footerLabel = activityRichPresenceInviteEmbed.getFooterLabel();
        boolean z7 = z6;
        boolean z8 = booleanValue;
        List<RGBAColorModel> gradientColors = activityRichPresenceInviteEmbed.getGradientColors();
        String headerText = activityRichPresenceInviteEmbed.getHeaderText();
        int i5 = z7;
        String iconSrc = activityRichPresenceInviteEmbed.getIconSrc();
        Boolean isSpotifyParty = activityRichPresenceInviteEmbed.isSpotifyParty();
        boolean booleanValue2 = isSpotifyParty != null ? isSpotifyParty.booleanValue() : i5;
        Integer maxPartySize = activityRichPresenceInviteEmbed.getMaxPartySize();
        if (maxPartySize != null) {
            i5 = maxPartySize.intValue();
        }
        activityRichPresenceInviteEmbedView.m741setActivityRichPresenceInviteEmbedUv5W4H4(margins, displayType, z5, ctaButtonText, z8, footerLabel, gradientColors, headerText, iconSrc, booleanValue2, i5, new u(9, onTapJoinRichPresence, accessory), activityRichPresenceInviteEmbed.getPartyMemberAvatarURIs(), activityRichPresenceInviteEmbed.getPartySizeText(), activityRichPresenceInviteEmbed.getPlatformIconKeys(), activityRichPresenceInviteEmbed.getCoverImageUrl(), activityRichPresenceInviteEmbed.getDetailsText(), activityRichPresenceInviteEmbed.getSubtitle(), activityRichPresenceInviteEmbed.getTitle(), activityRichPresenceInviteEmbed.getHiddenEmbedMessageContent(), accessory.getMessageId(), new ActivityRichPresenceInviteEmbedViewHolder$bind$2(this.eventHandler), new ActivityRichPresenceInviteEmbedViewHolder$bind$3(this.eventHandler), new ActivityRichPresenceInviteEmbedViewHolder$bind$4(this.eventHandler), new ActivityRichPresenceInviteEmbedViewHolder$bind$5(this.eventHandler), new ActivityRichPresenceInviteEmbedViewHolder$bind$6(this.eventHandler), new ActivityRichPresenceInviteEmbedViewHolder$bind$7(this.eventHandler), new ActivityRichPresenceInviteEmbedViewHolder$bind$8(this.eventHandler), new ActivityRichPresenceInviteEmbedViewHolder$bind$9(this.eventHandler), new ActivityRichPresenceInviteEmbedViewHolder$bind$10(this.eventHandler), new com.discord.chat.presentation.list.a(25), new ActivityRichPresenceInviteEmbedViewHolder$bind$12(this.eventHandler), new ActivityRichPresenceInviteEmbedViewHolder$bind$13(this.eventHandler), new ActivityRichPresenceInviteEmbedViewHolder$bind$14(this.eventHandler), new ActivityRichPresenceInviteEmbedViewHolder$bind$15(this.eventHandler), new ActivityRichPresenceInviteEmbedViewHolder$bind$16(this.eventHandler));
    }

    @NotNull
    public final ChatEventHandler getEventHandler() {
        return this.eventHandler;
    }
}
