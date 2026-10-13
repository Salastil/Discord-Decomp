package com.discord.chat.bridge.botuikit;

import com.discord.chat.bridge.contentnode.AttachmentLinkContentNode;
import com.discord.chat.bridge.contentnode.BlockQuoteContentNode;
import com.discord.chat.bridge.contentnode.BulletListContentNode;
import com.discord.chat.bridge.contentnode.ChannelMentionContentNode;
import com.discord.chat.bridge.contentnode.ChannelNameContentNode;
import com.discord.chat.bridge.contentnode.CommandMentionContentNode;
import com.discord.chat.bridge.contentnode.EmojiContentNode;
import com.discord.chat.bridge.contentnode.EmphasisContentNode;
import com.discord.chat.bridge.contentnode.GameMentionContentNode;
import com.discord.chat.bridge.contentnode.HeadingContentNode;
import com.discord.chat.bridge.contentnode.LHeadingContentNode;
import com.discord.chat.bridge.contentnode.LinkContentNode;
import com.discord.chat.bridge.contentnode.LinkContextData;
import com.discord.chat.bridge.contentnode.MentionContentNode;
import com.discord.chat.bridge.contentnode.ParagraphContentNode;
import com.discord.chat.bridge.contentnode.SpoilerContentNode;
import com.discord.chat.bridge.contentnode.StaticChannelMentionContentNode;
import com.discord.chat.bridge.contentnode.StrikethroughContentNode;
import com.discord.chat.bridge.contentnode.StrongContentNode;
import com.discord.chat.bridge.contentnode.SubtextContentNode;
import com.discord.chat.bridge.contentnode.UnderlineContentNode;
import com.discord.chat.bridge.contentnode.UserOrRoleMentionContentNode;
import com.discord.chat.bridge.embed.Embed;
import com.discord.chat.bridge.embed.EmbedType;
import kotlin.Unit;
import kotlin.jvm.functions.Function0;
import kotlinx.serialization.KSerializer;

/* loaded from: classes.dex */
public final /* synthetic */ class b implements Function0 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f3845d;

    public /* synthetic */ b(int i5) {
        this.f3845d = i5;
    }

    @Override // kotlin.jvm.functions.Function0
    public final Object invoke() {
        KSerializer _childSerializers$_anonymous_;
        KSerializer _childSerializers$_anonymous_2;
        KSerializer _childSerializers$_anonymous_3;
        KSerializer _childSerializers$_anonymous_4;
        KSerializer _childSerializers$_anonymous_5;
        KSerializer _childSerializers$_anonymous_$0;
        KSerializer _childSerializers$_anonymous_6;
        KSerializer _childSerializers$_anonymous_7;
        KSerializer _init_$_anonymous_;
        KSerializer _childSerializers$_anonymous_8;
        KSerializer _childSerializers$_anonymous_9;
        KSerializer _childSerializers$_anonymous_10;
        KSerializer _childSerializers$_anonymous_11;
        KSerializer _childSerializers$_anonymous_12;
        KSerializer _init_$_anonymous_2;
        KSerializer _init_$_anonymous_3;
        KSerializer _childSerializers$_anonymous_13;
        KSerializer _childSerializers$_anonymous_14;
        KSerializer _childSerializers$_anonymous_15;
        KSerializer _childSerializers$_anonymous_16;
        KSerializer _childSerializers$_anonymous_17;
        KSerializer _childSerializers$_anonymous_18;
        KSerializer _childSerializers$_anonymous_19;
        KSerializer _childSerializers$_anonymous_20;
        KSerializer _childSerializers$_anonymous_21;
        KSerializer _childSerializers$_anonymous_$6;
        KSerializer _childSerializers$_anonymous_$7;
        KSerializer _childSerializers$_anonymous_$8;
        KSerializer _init_$_anonymous_4;
        Unit unit;
        switch (this.f3845d) {
            case 0:
                _childSerializers$_anonymous_ = UserSelectComponent._childSerializers$_anonymous_();
                return _childSerializers$_anonymous_;
            case 1:
                _childSerializers$_anonymous_2 = AttachmentLinkContentNode._childSerializers$_anonymous_();
                return _childSerializers$_anonymous_2;
            case 2:
                _childSerializers$_anonymous_3 = BlockQuoteContentNode._childSerializers$_anonymous_();
                return _childSerializers$_anonymous_3;
            case 3:
                _childSerializers$_anonymous_4 = BulletListContentNode._childSerializers$_anonymous_();
                return _childSerializers$_anonymous_4;
            case 4:
                _childSerializers$_anonymous_5 = ChannelMentionContentNode._childSerializers$_anonymous_();
                return _childSerializers$_anonymous_5;
            case 5:
                _childSerializers$_anonymous_$0 = ChannelMentionContentNode._childSerializers$_anonymous_$0();
                return _childSerializers$_anonymous_$0;
            case 6:
                _childSerializers$_anonymous_6 = ChannelNameContentNode._childSerializers$_anonymous_();
                return _childSerializers$_anonymous_6;
            case 7:
                _childSerializers$_anonymous_7 = CommandMentionContentNode._childSerializers$_anonymous_();
                return _childSerializers$_anonymous_7;
            case 8:
                _init_$_anonymous_ = EmojiContentNode._init_$_anonymous_();
                return _init_$_anonymous_;
            case 9:
                _childSerializers$_anonymous_8 = EmphasisContentNode._childSerializers$_anonymous_();
                return _childSerializers$_anonymous_8;
            case 10:
                _childSerializers$_anonymous_9 = GameMentionContentNode._childSerializers$_anonymous_();
                return _childSerializers$_anonymous_9;
            case 11:
                _childSerializers$_anonymous_10 = HeadingContentNode._childSerializers$_anonymous_();
                return _childSerializers$_anonymous_10;
            case 12:
                _childSerializers$_anonymous_11 = LHeadingContentNode._childSerializers$_anonymous_();
                return _childSerializers$_anonymous_11;
            case 13:
                _childSerializers$_anonymous_12 = LinkContentNode._childSerializers$_anonymous_();
                return _childSerializers$_anonymous_12;
            case 14:
                _init_$_anonymous_2 = LinkContextData.LinkContext._init_$_anonymous_();
                return _init_$_anonymous_2;
            case 15:
                _init_$_anonymous_3 = MentionContentNode._init_$_anonymous_();
                return _init_$_anonymous_3;
            case 16:
                _childSerializers$_anonymous_13 = ParagraphContentNode._childSerializers$_anonymous_();
                return _childSerializers$_anonymous_13;
            case 17:
                _childSerializers$_anonymous_14 = SpoilerContentNode._childSerializers$_anonymous_();
                return _childSerializers$_anonymous_14;
            case 18:
                _childSerializers$_anonymous_15 = StaticChannelMentionContentNode._childSerializers$_anonymous_();
                return _childSerializers$_anonymous_15;
            case 19:
                _childSerializers$_anonymous_16 = StrikethroughContentNode._childSerializers$_anonymous_();
                return _childSerializers$_anonymous_16;
            case 20:
                _childSerializers$_anonymous_17 = StrongContentNode._childSerializers$_anonymous_();
                return _childSerializers$_anonymous_17;
            case 21:
                _childSerializers$_anonymous_18 = SubtextContentNode._childSerializers$_anonymous_();
                return _childSerializers$_anonymous_18;
            case 22:
                _childSerializers$_anonymous_19 = UnderlineContentNode._childSerializers$_anonymous_();
                return _childSerializers$_anonymous_19;
            case 23:
                _childSerializers$_anonymous_20 = UserOrRoleMentionContentNode._childSerializers$_anonymous_();
                return _childSerializers$_anonymous_20;
            case 24:
                _childSerializers$_anonymous_21 = Embed._childSerializers$_anonymous_();
                return _childSerializers$_anonymous_21;
            case 25:
                _childSerializers$_anonymous_$6 = Embed._childSerializers$_anonymous_$6();
                return _childSerializers$_anonymous_$6;
            case 26:
                _childSerializers$_anonymous_$7 = Embed._childSerializers$_anonymous_$7();
                return _childSerializers$_anonymous_$7;
            case 27:
                _childSerializers$_anonymous_$8 = Embed._childSerializers$_anonymous_$8();
                return _childSerializers$_anonymous_$8;
            case 28:
                _init_$_anonymous_4 = EmbedType._init_$_anonymous_();
                return _init_$_anonymous_4;
            default:
                unit = Unit.a;
                return unit;
        }
    }
}
