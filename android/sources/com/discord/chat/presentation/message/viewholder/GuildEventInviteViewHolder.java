package com.discord.chat.presentation.message.viewholder;

import android.view.View;
import com.discord.chat.bridge.codedlinks.GuildEventInviteEmbedImpl;
import com.discord.chat.bridge.contentnode.LinkContentNode;
import com.discord.chat.presentation.events.ChatEventHandler;
import com.discord.chat.presentation.message.messagepart.GuildEventInviteMessageAccessory;
import com.discord.chat.presentation.message.view.GuildEventInviteView;
import com.discord.chat.presentation.message.view.botuikit.MarkdownTextRenderEventHandlers;
import com.discord.chat.presentation.message.view.botuikit.MarkdownTextRenderOptions;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u0000(\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\u0010\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0007\u0018\u00002\u00020\u0001B+\u0012\u0006\u0010\u0003\u001a\u00020\u0002\u0012\u0006\u0010\u0005\u001a\u00020\u0004\u0012\u0012\u0010\b\u001a\u000e\u0012\u0004\u0012\u00020\u0001\u0012\u0004\u0012\u00020\u00070\u0006¢\u0006\u0004\b\t\u0010\nJ\u0015\u0010\r\u001a\u00020\u00072\u0006\u0010\f\u001a\u00020\u000b¢\u0006\u0004\b\r\u0010\u000eR\u0014\u0010\u0003\u001a\u00020\u00028\u0002X\u0082\u0004¢\u0006\u0006\n\u0004\b\u0003\u0010\u000fR\u0014\u0010\u0005\u001a\u00020\u00048\u0002X\u0082\u0004¢\u0006\u0006\n\u0004\b\u0005\u0010\u0010R \u0010\b\u001a\u000e\u0012\u0004\u0012\u00020\u0001\u0012\u0004\u0012\u00020\u00070\u00068\u0002X\u0082\u0004¢\u0006\u0006\n\u0004\b\b\u0010\u0011¨\u0006\u0012"}, d2 = {"Lcom/discord/chat/presentation/message/viewholder/GuildEventInviteViewHolder;", "Lcom/discord/chat/presentation/message/viewholder/MessagePartViewHolder;", "Lcom/discord/chat/presentation/message/view/GuildEventInviteView;", "guildEventInviteView", "Lcom/discord/chat/presentation/events/ChatEventHandler;", "eventHandler", "Lkotlin/Function1;", "", "onTapSpoiler", "<init>", "(Lcom/discord/chat/presentation/message/view/GuildEventInviteView;Lcom/discord/chat/presentation/events/ChatEventHandler;Lkotlin/jvm/functions/Function1;)V", "Lcom/discord/chat/presentation/message/messagepart/GuildEventInviteMessageAccessory;", "inviteAccessory", "bind", "(Lcom/discord/chat/presentation/message/messagepart/GuildEventInviteMessageAccessory;)V", "Lcom/discord/chat/presentation/message/view/GuildEventInviteView;", "Lcom/discord/chat/presentation/events/ChatEventHandler;", "Lkotlin/jvm/functions/Function1;", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final class GuildEventInviteViewHolder extends MessagePartViewHolder {

    @NotNull
    private final ChatEventHandler eventHandler;

    @NotNull
    private final GuildEventInviteView guildEventInviteView;

    @NotNull
    private final Function1<MessagePartViewHolder, Unit> onTapSpoiler;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    /* JADX WARN: Multi-variable type inference failed */
    public GuildEventInviteViewHolder(@NotNull GuildEventInviteView guildEventInviteView, @NotNull ChatEventHandler eventHandler, @NotNull Function1<? super MessagePartViewHolder, Unit> onTapSpoiler) {
        super(guildEventInviteView, null);
        Intrinsics.checkNotNullParameter(guildEventInviteView, "guildEventInviteView");
        Intrinsics.checkNotNullParameter(eventHandler, "eventHandler");
        Intrinsics.checkNotNullParameter(onTapSpoiler, "onTapSpoiler");
        this.guildEventInviteView = guildEventInviteView;
        this.eventHandler = eventHandler;
        this.onTapSpoiler = onTapSpoiler;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit bind$lambda$0(GuildEventInviteViewHolder guildEventInviteViewHolder, GuildEventInviteMessageAccessory guildEventInviteMessageAccessory, LinkContentNode node) {
        Intrinsics.checkNotNullParameter(node, "node");
        guildEventInviteViewHolder.eventHandler.mo480onLinkClickedntcYbpo(guildEventInviteMessageAccessory.getMessageId(), node);
        return Unit.a;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit bind$lambda$1(GuildEventInviteViewHolder guildEventInviteViewHolder) {
        guildEventInviteViewHolder.onTapSpoiler.invoke(guildEventInviteViewHolder);
        return Unit.a;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit bind$lambda$6$lambda$5$lambda$2(GuildEventInviteViewHolder guildEventInviteViewHolder) {
        guildEventInviteViewHolder.onTapSpoiler.invoke(guildEventInviteViewHolder);
        return Unit.a;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void bind$lambda$6$lambda$5$lambda$3(GuildEventInviteViewHolder guildEventInviteViewHolder, GuildEventInviteMessageAccessory guildEventInviteMessageAccessory, View view) {
        guildEventInviteViewHolder.eventHandler.mo507onTapInviteEmbedAFFcxXc(guildEventInviteMessageAccessory.getMessageId(), guildEventInviteMessageAccessory.getCodedLinkIndex(), Boolean.TRUE, Boolean.FALSE);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void bind$lambda$6$lambda$5$lambda$4(GuildEventInviteViewHolder guildEventInviteViewHolder, GuildEventInviteMessageAccessory guildEventInviteMessageAccessory, View view) {
        guildEventInviteViewHolder.eventHandler.mo507onTapInviteEmbedAFFcxXc(guildEventInviteMessageAccessory.getMessageId(), guildEventInviteMessageAccessory.getCodedLinkIndex(), Boolean.FALSE, Boolean.TRUE);
    }

    public final void bind(@NotNull final GuildEventInviteMessageAccessory inviteAccessory) {
        Intrinsics.checkNotNullParameter(inviteAccessory, "inviteAccessory");
        GuildEventInviteEmbedImpl invite = inviteAccessory.getInvite();
        MarkdownTextRenderOptions markdownTextRenderOptions = new MarkdownTextRenderOptions(inviteAccessory.getMessageId(), inviteAccessory.getShouldAnimateEmoji(), inviteAccessory.getShouldShowLinkDecorations(), false, inviteAccessory.getShouldShowRoleDot(), inviteAccessory.getShouldShowRoleOnName(), 8, null);
        final int i5 = 0;
        MarkdownTextRenderEventHandlers markdownTextRenderEventHandlers = new MarkdownTextRenderEventHandlers(new b7.a(17, this, inviteAccessory), new GuildEventInviteViewHolder$bind$locationMarkdownEventHandlers$2(this.eventHandler), new GuildEventInviteViewHolder$bind$locationMarkdownEventHandlers$3(this.eventHandler), new GuildEventInviteViewHolder$bind$locationMarkdownEventHandlers$4(this.eventHandler), new GuildEventInviteViewHolder$bind$locationMarkdownEventHandlers$5(this.eventHandler), new GuildEventInviteViewHolder$bind$locationMarkdownEventHandlers$6(this.eventHandler), new GuildEventInviteViewHolder$bind$locationMarkdownEventHandlers$7(this.eventHandler), new GuildEventInviteViewHolder$bind$locationMarkdownEventHandlers$8(this.eventHandler), new GuildEventInviteViewHolder$bind$locationMarkdownEventHandlers$9(this.eventHandler), null, new Function0(this) { // from class: com.discord.chat.presentation.message.viewholder.c

            /* renamed from: e, reason: collision with root package name */
            public final /* synthetic */ GuildEventInviteViewHolder f4085e;

            {
                this.f4085e = this;
            }

            @Override // kotlin.jvm.functions.Function0
            public final Object invoke() {
                Unit bind$lambda$1;
                Unit bind$lambda$6$lambda$5$lambda$2;
                switch (i5) {
                    case 0:
                        bind$lambda$1 = GuildEventInviteViewHolder.bind$lambda$1(this.f4085e);
                        return bind$lambda$1;
                    default:
                        bind$lambda$6$lambda$5$lambda$2 = GuildEventInviteViewHolder.bind$lambda$6$lambda$5$lambda$2(this.f4085e);
                        return bind$lambda$6$lambda$5$lambda$2;
                }
            }
        }, new GuildEventInviteViewHolder$bind$locationMarkdownEventHandlers$11(this.eventHandler), new GuildEventInviteViewHolder$bind$locationMarkdownEventHandlers$12(this.eventHandler), new GuildEventInviteViewHolder$bind$locationMarkdownEventHandlers$13(this.eventHandler), new GuildEventInviteViewHolder$bind$locationMarkdownEventHandlers$14(this.eventHandler), IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING, null);
        GuildEventInviteView guildEventInviteView = this.guildEventInviteView;
        guildEventInviteView.setHeader(invite.getHeaderIcon(), invite.getHeaderText(), invite.getHeaderColor());
        guildEventInviteView.setCreatorAvatar(invite.getCreatorAvatar());
        guildEventInviteView.setBadge(invite.getBadgeIcon(), invite.getBadgeCount());
        guildEventInviteView.setTitle(invite.getTitleText(), invite.getTitleColor());
        final int i6 = 1;
        guildEventInviteView.m758setDescription63A0Z80(inviteAccessory.getMargins(), invite.getContent(), inviteAccessory.getMessageId(), inviteAccessory.getShouldAnimateEmoji(), inviteAccessory.getShouldShowLinkDecorations(), inviteAccessory.getShouldShowRoleDot(), inviteAccessory.getShouldShowRoleOnName(), new GuildEventInviteViewHolder$bind$1$1$1(this.eventHandler), new GuildEventInviteViewHolder$bind$1$1$2(this.eventHandler), new GuildEventInviteViewHolder$bind$1$1$3(this.eventHandler), new GuildEventInviteViewHolder$bind$1$1$4(this.eventHandler), new GuildEventInviteViewHolder$bind$1$1$5(this.eventHandler), new GuildEventInviteViewHolder$bind$1$1$6(this.eventHandler), new GuildEventInviteViewHolder$bind$1$1$7(this.eventHandler), new GuildEventInviteViewHolder$bind$1$1$8(this.eventHandler), new GuildEventInviteViewHolder$bind$1$1$9(this.eventHandler), new Function0(this) { // from class: com.discord.chat.presentation.message.viewholder.c

            /* renamed from: e, reason: collision with root package name */
            public final /* synthetic */ GuildEventInviteViewHolder f4085e;

            {
                this.f4085e = this;
            }

            @Override // kotlin.jvm.functions.Function0
            public final Object invoke() {
                Unit bind$lambda$1;
                Unit bind$lambda$6$lambda$5$lambda$2;
                switch (i6) {
                    case 0:
                        bind$lambda$1 = GuildEventInviteViewHolder.bind$lambda$1(this.f4085e);
                        return bind$lambda$1;
                    default:
                        bind$lambda$6$lambda$5$lambda$2 = GuildEventInviteViewHolder.bind$lambda$6$lambda$5$lambda$2(this.f4085e);
                        return bind$lambda$6$lambda$5$lambda$2;
                }
            }
        }, new GuildEventInviteViewHolder$bind$1$1$10(this.eventHandler), new GuildEventInviteViewHolder$bind$1$1$11(this.eventHandler), new GuildEventInviteViewHolder$bind$1$1$12(this.eventHandler), new GuildEventInviteViewHolder$bind$1$1$13(this.eventHandler), new GuildEventInviteViewHolder$bind$1$1$14(this.eventHandler));
        guildEventInviteView.setGuild(invite.getGuildName(), invite.getGuildIcon());
        guildEventInviteView.setChannel(invite.getChannelIcon(), invite.getChannelName(), invite.getLocationContent(), inviteAccessory.getMargins(), markdownTextRenderOptions, markdownTextRenderEventHandlers);
        String acceptLabelIcon = invite.getAcceptLabelIcon();
        String acceptLabelText = invite.getAcceptLabelText();
        Integer acceptLabelColor = invite.getAcceptLabelColor();
        Integer acceptLabelBorderColor = invite.getAcceptLabelBorderColor();
        Integer acceptLabelBackgroundColor = invite.getAcceptLabelBackgroundColor();
        final int i10 = 0;
        guildEventInviteView.setAcceptButton(acceptLabelIcon, acceptLabelText, acceptLabelColor, acceptLabelBorderColor, acceptLabelBackgroundColor, new View.OnClickListener(this) { // from class: com.discord.chat.presentation.message.viewholder.d

            /* renamed from: e, reason: collision with root package name */
            public final /* synthetic */ GuildEventInviteViewHolder f4087e;

            {
                this.f4087e = this;
            }

            @Override // android.view.View.OnClickListener
            public final void onClick(View view) {
                switch (i10) {
                    case 0:
                        GuildEventInviteViewHolder.bind$lambda$6$lambda$5$lambda$3(this.f4087e, inviteAccessory, view);
                        break;
                    default:
                        GuildEventInviteViewHolder.bind$lambda$6$lambda$5$lambda$4(this.f4087e, inviteAccessory, view);
                        break;
                }
            }
        });
        final int i11 = 1;
        guildEventInviteView.setSecondaryButton(invite.getSecondaryActionIcon(), new View.OnClickListener(this) { // from class: com.discord.chat.presentation.message.viewholder.d

            /* renamed from: e, reason: collision with root package name */
            public final /* synthetic */ GuildEventInviteViewHolder f4087e;

            {
                this.f4087e = this;
            }

            @Override // android.view.View.OnClickListener
            public final void onClick(View view) {
                switch (i11) {
                    case 0:
                        GuildEventInviteViewHolder.bind$lambda$6$lambda$5$lambda$3(this.f4087e, inviteAccessory, view);
                        break;
                    default:
                        GuildEventInviteViewHolder.bind$lambda$6$lambda$5$lambda$4(this.f4087e, inviteAccessory, view);
                        break;
                }
            }
        });
    }
}
