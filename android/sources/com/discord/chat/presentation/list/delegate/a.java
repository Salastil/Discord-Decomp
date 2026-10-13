package com.discord.chat.presentation.list.delegate;

import com.discord.chat.bridge.contentnode.CommandMentionContentNode;
import com.discord.chat.bridge.contentnode.EmojiContentNode;
import com.discord.chat.bridge.contentnode.GameMentionContentNode;
import com.discord.chat.bridge.contentnode.InlineCodeContentNode;
import com.discord.chat.bridge.contentnode.LinkContentNode;
import com.discord.chat.bridge.contentnode.SoundmojiContentNode;
import com.discord.chat.presentation.blockedmessage.BlockedMessageGroupView;
import com.discord.chat.presentation.message.view.ActivityRichPresenceInviteEmbedView;
import com.discord.chat.presentation.message.view.FlaggedMessageEmbedView;
import com.discord.chat.presentation.message.view.ForumPostActionBarView;
import com.discord.chat.presentation.message.view.MediaView;
import com.discord.chat.presentation.message.view.MessageContentView;
import com.discord.chat.presentation.message.view.polls.PollAnswerAdapter;
import com.discord.chat.presentation.message.viewholder.mosaicitem.attachments.MosaicItemMessageAttachmentVideoViewHolder;
import com.discord.chat.presentation.textutils.LinkStyle;
import com.discord.chat.presentation.textutils.RenderContext;
import com.discord.chat.presentation.textutils.TextUtilsKt;
import com.discord.media_player.reactevents.MediaPlayFinishedAnalytics;
import com.discord.reactions.ReactionView;
import kotlin.Unit;
import kotlin.jvm.functions.Function1;

/* loaded from: classes.dex */
public final /* synthetic */ class a implements Function1 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f3884d;

    public /* synthetic */ a(int i5) {
        this.f3884d = i5;
    }

    @Override // kotlin.jvm.functions.Function1
    public final Object invoke(Object obj) {
        Unit _init_$lambda$0;
        Unit activityRichPresenceInviteEmbed_Uv5W4H4$lambda$12;
        Unit activityRichPresenceInviteEmbed_Uv5W4H4$lambda$13;
        Unit activityRichPresenceInviteEmbed_Uv5W4H4$lambda$15;
        Unit activityRichPresenceInviteEmbed_Uv5W4H4$lambda$6;
        Unit activityRichPresenceInviteEmbed_Uv5W4H4$lambda$16;
        Unit activityRichPresenceInviteEmbed_Uv5W4H4$lambda$17;
        Unit activityRichPresenceInviteEmbed_Uv5W4H4$lambda$18;
        Unit activityRichPresenceInviteEmbed_Uv5W4H4$lambda$9;
        Unit configureMessageContent$lambda$18$lambda$7;
        Unit configureMessageContent$lambda$18$lambda$10;
        Unit configureMessageContent$lambda$18$lambda$11;
        Unit configureMessageContent$lambda$18$lambda$3;
        Unit configureMessageContent$lambda$18$lambda$13;
        Unit configureMessageContent$lambda$18$lambda$14;
        Unit configureMessageContent$lambda$18$lambda$15;
        Unit configureMessageContent$lambda$18$lambda$16;
        LinkStyle configureMessageContent$lambda$18$lambda$17;
        Unit configureMessageContent$lambda$18$lambda$4;
        Unit reactions$lambda$12;
        Unit onMediaPlayFinishedAnalytics$lambda$1;
        Unit messageContent_L36UwhI$lambda$2;
        LinkStyle messageContent_L36UwhI$lambda$3;
        LinkStyle messageContent$lambda$1;
        Unit onTapAnswer$lambda$0;
        Unit bindGalleryItem$lambda$0;
        Unit _init_$lambda$02;
        Unit _init_$lambda$1;
        Unit spannable$lambda$0;
        Unit spannable$lambda$4;
        switch (this.f3884d) {
            case 0:
                _init_$lambda$0 = BlockedGroupDelegate._init_$lambda$0((BlockedMessageGroupView) obj);
                return _init_$lambda$0;
            case 1:
                activityRichPresenceInviteEmbed_Uv5W4H4$lambda$12 = ActivityRichPresenceInviteEmbedView.setActivityRichPresenceInviteEmbed_Uv5W4H4$lambda$12((CommandMentionContentNode) obj);
                return activityRichPresenceInviteEmbed_Uv5W4H4$lambda$12;
            case 2:
                activityRichPresenceInviteEmbed_Uv5W4H4$lambda$13 = ActivityRichPresenceInviteEmbedView.setActivityRichPresenceInviteEmbed_Uv5W4H4$lambda$13((CommandMentionContentNode) obj);
                return activityRichPresenceInviteEmbed_Uv5W4H4$lambda$13;
            case 3:
                activityRichPresenceInviteEmbed_Uv5W4H4$lambda$15 = ActivityRichPresenceInviteEmbedView.setActivityRichPresenceInviteEmbed_Uv5W4H4$lambda$15((String) obj);
                return activityRichPresenceInviteEmbed_Uv5W4H4$lambda$15;
            case 4:
                activityRichPresenceInviteEmbed_Uv5W4H4$lambda$6 = ActivityRichPresenceInviteEmbedView.setActivityRichPresenceInviteEmbed_Uv5W4H4$lambda$6((LinkContentNode) obj);
                return activityRichPresenceInviteEmbed_Uv5W4H4$lambda$6;
            case 5:
                activityRichPresenceInviteEmbed_Uv5W4H4$lambda$16 = ActivityRichPresenceInviteEmbedView.setActivityRichPresenceInviteEmbed_Uv5W4H4$lambda$16((InlineCodeContentNode) obj);
                return activityRichPresenceInviteEmbed_Uv5W4H4$lambda$16;
            case 6:
                activityRichPresenceInviteEmbed_Uv5W4H4$lambda$17 = ActivityRichPresenceInviteEmbedView.setActivityRichPresenceInviteEmbed_Uv5W4H4$lambda$17((EmojiContentNode) obj);
                return activityRichPresenceInviteEmbed_Uv5W4H4$lambda$17;
            case 7:
                activityRichPresenceInviteEmbed_Uv5W4H4$lambda$18 = ActivityRichPresenceInviteEmbedView.setActivityRichPresenceInviteEmbed_Uv5W4H4$lambda$18((SoundmojiContentNode) obj);
                return activityRichPresenceInviteEmbed_Uv5W4H4$lambda$18;
            case 8:
                activityRichPresenceInviteEmbed_Uv5W4H4$lambda$9 = ActivityRichPresenceInviteEmbedView.setActivityRichPresenceInviteEmbed_Uv5W4H4$lambda$9((String) obj);
                return activityRichPresenceInviteEmbed_Uv5W4H4$lambda$9;
            case 9:
                configureMessageContent$lambda$18$lambda$7 = FlaggedMessageEmbedView.configureMessageContent$lambda$18$lambda$7((String) obj);
                return configureMessageContent$lambda$18$lambda$7;
            case 10:
                configureMessageContent$lambda$18$lambda$10 = FlaggedMessageEmbedView.configureMessageContent$lambda$18$lambda$10((CommandMentionContentNode) obj);
                return configureMessageContent$lambda$18$lambda$10;
            case 11:
                configureMessageContent$lambda$18$lambda$11 = FlaggedMessageEmbedView.configureMessageContent$lambda$18$lambda$11((CommandMentionContentNode) obj);
                return configureMessageContent$lambda$18$lambda$11;
            case 12:
                configureMessageContent$lambda$18$lambda$3 = FlaggedMessageEmbedView.configureMessageContent$lambda$18$lambda$3((LinkContentNode) obj);
                return configureMessageContent$lambda$18$lambda$3;
            case 13:
                configureMessageContent$lambda$18$lambda$13 = FlaggedMessageEmbedView.configureMessageContent$lambda$18$lambda$13((String) obj);
                return configureMessageContent$lambda$18$lambda$13;
            case 14:
                configureMessageContent$lambda$18$lambda$14 = FlaggedMessageEmbedView.configureMessageContent$lambda$18$lambda$14((InlineCodeContentNode) obj);
                return configureMessageContent$lambda$18$lambda$14;
            case 15:
                configureMessageContent$lambda$18$lambda$15 = FlaggedMessageEmbedView.configureMessageContent$lambda$18$lambda$15((EmojiContentNode) obj);
                return configureMessageContent$lambda$18$lambda$15;
            case 16:
                configureMessageContent$lambda$18$lambda$16 = FlaggedMessageEmbedView.configureMessageContent$lambda$18$lambda$16((SoundmojiContentNode) obj);
                return configureMessageContent$lambda$18$lambda$16;
            case 17:
                configureMessageContent$lambda$18$lambda$17 = FlaggedMessageEmbedView.configureMessageContent$lambda$18$lambda$17((LinkContentNode) obj);
                return configureMessageContent$lambda$18$lambda$17;
            case 18:
                configureMessageContent$lambda$18$lambda$4 = FlaggedMessageEmbedView.configureMessageContent$lambda$18$lambda$4((LinkContentNode) obj);
                return configureMessageContent$lambda$18$lambda$4;
            case 19:
                reactions$lambda$12 = ForumPostActionBarView.setReactions$lambda$12((ReactionView.Reaction) obj);
                return reactions$lambda$12;
            case 20:
                onMediaPlayFinishedAnalytics$lambda$1 = MediaView.onMediaPlayFinishedAnalytics$lambda$1((MediaPlayFinishedAnalytics) obj);
                return onMediaPlayFinishedAnalytics$lambda$1;
            case 21:
                messageContent_L36UwhI$lambda$2 = MessageContentView.setMessageContent_L36UwhI$lambda$2((GameMentionContentNode) obj);
                return messageContent_L36UwhI$lambda$2;
            case 22:
                messageContent_L36UwhI$lambda$3 = MessageContentView.setMessageContent_L36UwhI$lambda$3((LinkContentNode) obj);
                return messageContent_L36UwhI$lambda$3;
            case 23:
                messageContent$lambda$1 = MessageContentView.setMessageContent$lambda$1((LinkContentNode) obj);
                return messageContent$lambda$1;
            case 24:
                onTapAnswer$lambda$0 = PollAnswerAdapter.onTapAnswer$lambda$0((String) obj);
                return onTapAnswer$lambda$0;
            case 25:
                bindGalleryItem$lambda$0 = MosaicItemMessageAttachmentVideoViewHolder.bindGalleryItem$lambda$0((MediaPlayFinishedAnalytics) obj);
                return bindGalleryItem$lambda$0;
            case 26:
                _init_$lambda$02 = RenderContext._init_$lambda$0((GameMentionContentNode) obj);
                return _init_$lambda$02;
            case 27:
                _init_$lambda$1 = RenderContext._init_$lambda$1((SoundmojiContentNode) obj);
                return _init_$lambda$1;
            case 28:
                spannable$lambda$0 = TextUtilsKt.toSpannable$lambda$0((LinkContentNode) obj);
                return spannable$lambda$0;
            default:
                spannable$lambda$4 = TextUtilsKt.toSpannable$lambda$4((String) obj);
                return spannable$lambda$4;
        }
    }
}
