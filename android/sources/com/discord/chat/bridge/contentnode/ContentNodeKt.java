package com.discord.chat.bridge.contentnode;

import ab.a;
import fo.n;
import java.util.List;
import kotlin.Metadata;
import kotlin.collections.CollectionsKt;
import kotlin.collections.m0;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.Reflection;
import kotlin.reflect.KClass;
import kotlinx.serialization.KSerializer;
import kotlinx.serialization.SealedClassSerializer;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u0000\u0018\n\u0000\n\u0002\u0010\u000e\n\u0002\u0010 \n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\u001a\u0010\u0010\u0000\u001a\u00020\u0001*\b\u0012\u0004\u0012\u00020\u00030\u0002\u001a\n\u0010\u0000\u001a\u00020\u0001*\u00020\u0003\"\u001c\u0010\u0004\u001a\b\u0012\u0004\u0012\u00020\u00030\u00058\u0002X\u0083\u0004¢\u0006\b\n\u0000\u0012\u0004\b\u0006\u0010\u0007¨\u0006\b"}, d2 = {"toPlainText", "", "", "Lcom/discord/chat/bridge/contentnode/ContentNode;", "sealedClassSerializer", "Lkotlinx/serialization/SealedClassSerializer;", "getSealedClassSerializer$annotations", "()V", "chat_release"}, k = 2, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final class ContentNodeKt {

    @NotNull
    private static final SealedClassSerializer sealedClassSerializer = new SealedClassSerializer("ContentNode", Reflection.getOrCreateKotlinClass(ContentNode.class), new KClass[]{Reflection.getOrCreateKotlinClass(AttachmentLinkContentNode.class), Reflection.getOrCreateKotlinClass(BlockQuoteContentNode.class), Reflection.getOrCreateKotlinClass(BulletListContentNode.class), Reflection.getOrCreateKotlinClass(ChannelMentionContentNode.class), Reflection.getOrCreateKotlinClass(ChannelNameContentNode.class), Reflection.getOrCreateKotlinClass(CodeBlockContentNode.class), Reflection.getOrCreateKotlinClass(CommandMentionContentNode.class), Reflection.getOrCreateKotlinClass(GameMentionContentNode.class), Reflection.getOrCreateKotlinClass(CustomEmojiContentNode.class), Reflection.getOrCreateKotlinClass(EmojiContentNode.class), Reflection.getOrCreateKotlinClass(EmphasisContentNode.class), Reflection.getOrCreateKotlinClass(GuildNameContentNode.class), Reflection.getOrCreateKotlinClass(HeadingContentNode.class), Reflection.getOrCreateKotlinClass(InlineCodeContentNode.class), Reflection.getOrCreateKotlinClass(LineBreakContentNode.class), Reflection.getOrCreateKotlinClass(LinkContentNode.class), Reflection.getOrCreateKotlinClass(LHeadingContentNode.class), Reflection.getOrCreateKotlinClass(MentionContentNode.class), Reflection.getOrCreateKotlinClass(NewLineContentNode.class), Reflection.getOrCreateKotlinClass(ParagraphContentNode.class), Reflection.getOrCreateKotlinClass(SoundmojiContentNode.class), Reflection.getOrCreateKotlinClass(SpoilerContentNode.class), Reflection.getOrCreateKotlinClass(StaticChannelMentionContentNode.class), Reflection.getOrCreateKotlinClass(StrikethroughContentNode.class), Reflection.getOrCreateKotlinClass(StrongContentNode.class), Reflection.getOrCreateKotlinClass(SubtextContentNode.class), Reflection.getOrCreateKotlinClass(TextContentNode.class), Reflection.getOrCreateKotlinClass(TimestampContentNode.class), Reflection.getOrCreateKotlinClass(UnderlineContentNode.class), Reflection.getOrCreateKotlinClass(UnicodeEmojiContentNode.class), Reflection.getOrCreateKotlinClass(UserOrRoleMentionContentNode.class)}, new KSerializer[]{AttachmentLinkContentNode.INSTANCE.serializer(), BlockQuoteContentNode.INSTANCE.serializer(), BulletListContentNode.INSTANCE.serializer(), ChannelMentionContentNode.INSTANCE.serializer(), ChannelNameContentNode.INSTANCE.serializer(), CodeBlockContentNode.INSTANCE.serializer(), CommandMentionContentNode.INSTANCE.serializer(), GameMentionContentNode.INSTANCE.serializer(), CustomEmojiContentNode.INSTANCE.serializer(), EmojiContentNode.INSTANCE.serializer(), EmphasisContentNode.INSTANCE.serializer(), GuildNameContentNode.INSTANCE.serializer(), HeadingContentNode.INSTANCE.serializer(), InlineCodeContentNode.INSTANCE.serializer(), LineBreakContentNode.INSTANCE.serializer(), LinkContentNode.INSTANCE.serializer(), LHeadingContentNode.INSTANCE.serializer(), MentionContentNode.INSTANCE.serializer(), NewLineContentNode.INSTANCE.serializer(), ParagraphContentNode.INSTANCE.serializer(), SoundmojiContentNode.INSTANCE.serializer(), SpoilerContentNode.INSTANCE.serializer(), StaticChannelMentionContentNode.INSTANCE.serializer(), StrikethroughContentNode.INSTANCE.serializer(), StrongContentNode.INSTANCE.serializer(), SubtextContentNode.INSTANCE.serializer(), TextContentNode.INSTANCE.serializer(), TimestampContentNode.INSTANCE.serializer(), UnderlineContentNode.INSTANCE.serializer(), UnicodeEmojiContentNode.INSTANCE.serializer(), UserOrRoleMentionContentNode.INSTANCE.serializer()});

    private static /* synthetic */ void getSealedClassSerializer$annotations() {
    }

    @NotNull
    public static final String toPlainText(@NotNull List<? extends ContentNode> list) {
        Intrinsics.checkNotNullParameter(list, "<this>");
        return CollectionsKt.O(list, "", null, null, new a(22), 30);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final CharSequence toPlainText$lambda$0(ContentNode it) {
        Intrinsics.checkNotNullParameter(it, "it");
        return toPlainText(it);
    }

    @NotNull
    public static final String toPlainText(@NotNull ContentNode contentNode) {
        Intrinsics.checkNotNullParameter(contentNode, "<this>");
        if (contentNode instanceof TextContentNode) {
            String content = ((TextContentNode) contentNode).getContent();
            return content == null ? "" : content;
        }
        if (contentNode instanceof InlineCodeContentNode) {
            return ((InlineCodeContentNode) contentNode).getContent();
        }
        if (contentNode instanceof CodeBlockContentNode) {
            return ((CodeBlockContentNode) contentNode).getContent();
        }
        if (contentNode instanceof GuildNameContentNode) {
            return ((GuildNameContentNode) contentNode).getContent();
        }
        if (contentNode instanceof UnicodeEmojiContentNode) {
            return ((UnicodeEmojiContentNode) contentNode).getSurrogate();
        }
        if (!(contentNode instanceof CustomEmojiContentNode) && !(contentNode instanceof TimestampContentNode) && !(contentNode instanceof LineBreakContentNode) && !(contentNode instanceof NewLineContentNode)) {
            if (contentNode instanceof StrongContentNode) {
                return toPlainText(((StrongContentNode) contentNode).getContent());
            }
            if (contentNode instanceof EmphasisContentNode) {
                return toPlainText(((EmphasisContentNode) contentNode).getContent());
            }
            if (contentNode instanceof UnderlineContentNode) {
                return toPlainText(((UnderlineContentNode) contentNode).getContent());
            }
            if (contentNode instanceof StrikethroughContentNode) {
                return toPlainText(((StrikethroughContentNode) contentNode).getContent());
            }
            if (contentNode instanceof SpoilerContentNode) {
                return toPlainText(((SpoilerContentNode) contentNode).getContent());
            }
            if (contentNode instanceof SubtextContentNode) {
                return toPlainText(((SubtextContentNode) contentNode).getContent());
            }
            if (contentNode instanceof ParagraphContentNode) {
                return toPlainText(((ParagraphContentNode) contentNode).getContent());
            }
            if (contentNode instanceof HeadingContentNode) {
                return toPlainText(((HeadingContentNode) contentNode).getContent());
            }
            if (contentNode instanceof LHeadingContentNode) {
                return toPlainText(((LHeadingContentNode) contentNode).getContent());
            }
            if (contentNode instanceof BlockQuoteContentNode) {
                return toPlainText(((BlockQuoteContentNode) contentNode).getContent());
            }
            if (contentNode instanceof ChannelNameContentNode) {
                return toPlainText(((ChannelNameContentNode) contentNode).getContent());
            }
            if (contentNode instanceof LinkContentNode) {
                return toPlainText(((LinkContentNode) contentNode).getContent());
            }
            if (contentNode instanceof MentionContentNode) {
                List<ContentNode> content2 = ((MentionContentNode) contentNode).getContent();
                if (content2 == null) {
                    content2 = m0.f13512d;
                }
                return toPlainText(content2);
            }
            if (!(contentNode instanceof BulletListContentNode) && !(contentNode instanceof SoundmojiContentNode) && !(contentNode instanceof ErrorContentNode)) {
                throw new n();
            }
        }
        return "";
    }
}
