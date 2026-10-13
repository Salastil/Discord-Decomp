package com.discord.chat.presentation.message.messagepart;

import a3.e;
import com.discord.chat.bridge.forums.ForumPostActions;
import com.discord.chat.bridge.reaction.MessageReaction;
import com.discord.chat.bridge.reaction.ReactionsTheme;
import com.discord.jank_stats.JankRecordStore;
import com.discord.primitives.MessageId;
import java.util.List;
import k0.d;
import kotlin.Metadata;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u0000B\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010 \n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000b\n\u0000\n\u0002\u0010\u000e\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u001a\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\b\n\u0002\b\u0002\b\u0086\b\u0018\u00002\u00020\u0001BA\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005\u0012\u000e\u0010\u0006\u001a\n\u0012\u0004\u0012\u00020\b\u0018\u00010\u0007\u0012\u0006\u0010\t\u001a\u00020\n\u0012\u0006\u0010\u000b\u001a\u00020\f\u0012\b\u0010\r\u001a\u0004\u0018\u00010\u000e¢\u0006\u0004\b\u000f\u0010\u0010J\u0010\u0010\u001d\u001a\u00020\u0003HÆ\u0003¢\u0006\u0004\b\u001e\u0010\u0012J\t\u0010\u001f\u001a\u00020\u0005HÆ\u0003J\u0011\u0010 \u001a\n\u0012\u0004\u0012\u00020\b\u0018\u00010\u0007HÆ\u0003J\t\u0010!\u001a\u00020\nHÆ\u0003J\t\u0010\"\u001a\u00020\fHÆ\u0003J\u000b\u0010#\u001a\u0004\u0018\u00010\u000eHÆ\u0003JV\u0010$\u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u00032\b\b\u0002\u0010\u0004\u001a\u00020\u00052\u0010\b\u0002\u0010\u0006\u001a\n\u0012\u0004\u0012\u00020\b\u0018\u00010\u00072\b\b\u0002\u0010\t\u001a\u00020\n2\b\b\u0002\u0010\u000b\u001a\u00020\f2\n\b\u0002\u0010\r\u001a\u0004\u0018\u00010\u000eHÆ\u0001¢\u0006\u0004\b%\u0010&J\u0013\u0010'\u001a\u00020\n2\b\u0010(\u001a\u0004\u0018\u00010)HÖ\u0003J\t\u0010*\u001a\u00020+HÖ\u0001J\t\u0010,\u001a\u00020\fHÖ\u0001R\u0016\u0010\u0002\u001a\u00020\u0003X\u0096\u0004¢\u0006\n\n\u0002\u0010\u0013\u001a\u0004\b\u0011\u0010\u0012R\u0011\u0010\u0004\u001a\u00020\u0005¢\u0006\b\n\u0000\u001a\u0004\b\u0014\u0010\u0015R\u0019\u0010\u0006\u001a\n\u0012\u0004\u0012\u00020\b\u0018\u00010\u0007¢\u0006\b\n\u0000\u001a\u0004\b\u0016\u0010\u0017R\u0011\u0010\t\u001a\u00020\n¢\u0006\b\n\u0000\u001a\u0004\b\u0018\u0010\u0019R\u0011\u0010\u000b\u001a\u00020\f¢\u0006\b\n\u0000\u001a\u0004\b\u001a\u0010\u0012R\u0013\u0010\r\u001a\u0004\u0018\u00010\u000e¢\u0006\b\n\u0000\u001a\u0004\b\u001b\u0010\u001c¨\u0006-"}, d2 = {"Lcom/discord/chat/presentation/message/messagepart/ForumPostActionBar;", "Lcom/discord/chat/presentation/message/messagepart/MessageAccessory;", "messageId", "Lcom/discord/primitives/MessageId;", "postActions", "Lcom/discord/chat/bridge/forums/ForumPostActions;", "reactions", "", "Lcom/discord/chat/bridge/reaction/MessageReaction;", "canAddNewReactions", "", "addNewReactionAccessibilityLabel", "", "reactionsTheme", "Lcom/discord/chat/bridge/reaction/ReactionsTheme;", "<init>", "(Ljava/lang/String;Lcom/discord/chat/bridge/forums/ForumPostActions;Ljava/util/List;ZLjava/lang/String;Lcom/discord/chat/bridge/reaction/ReactionsTheme;Lkotlin/jvm/internal/DefaultConstructorMarker;)V", "getMessageId-3Eiw7ao", "()Ljava/lang/String;", "Ljava/lang/String;", "getPostActions", "()Lcom/discord/chat/bridge/forums/ForumPostActions;", "getReactions", "()Ljava/util/List;", "getCanAddNewReactions", "()Z", "getAddNewReactionAccessibilityLabel", "getReactionsTheme", "()Lcom/discord/chat/bridge/reaction/ReactionsTheme;", "component1", "component1-3Eiw7ao", "component2", "component3", "component4", "component5", "component6", "copy", "copy-LdU2QRA", "(Ljava/lang/String;Lcom/discord/chat/bridge/forums/ForumPostActions;Ljava/util/List;ZLjava/lang/String;Lcom/discord/chat/bridge/reaction/ReactionsTheme;)Lcom/discord/chat/presentation/message/messagepart/ForumPostActionBar;", "equals", JankRecordStore.SCREEN_OTHER, "", "hashCode", "", "toString", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final /* data */ class ForumPostActionBar extends MessageAccessory {

    @NotNull
    private final String addNewReactionAccessibilityLabel;
    private final boolean canAddNewReactions;

    @NotNull
    private final String messageId;

    @NotNull
    private final ForumPostActions postActions;
    private final List<MessageReaction> reactions;
    private final ReactionsTheme reactionsTheme;

    public /* synthetic */ ForumPostActionBar(String str, ForumPostActions forumPostActions, List list, boolean z5, String str2, ReactionsTheme reactionsTheme, DefaultConstructorMarker defaultConstructorMarker) {
        this(str, forumPostActions, list, z5, str2, reactionsTheme);
    }

    /* renamed from: copy-LdU2QRA$default, reason: not valid java name */
    public static /* synthetic */ ForumPostActionBar m629copyLdU2QRA$default(ForumPostActionBar forumPostActionBar, String str, ForumPostActions forumPostActions, List list, boolean z5, String str2, ReactionsTheme reactionsTheme, int i5, Object obj) {
        if ((i5 & 1) != 0) {
            str = forumPostActionBar.messageId;
        }
        if ((i5 & 2) != 0) {
            forumPostActions = forumPostActionBar.postActions;
        }
        if ((i5 & 4) != 0) {
            list = forumPostActionBar.reactions;
        }
        if ((i5 & 8) != 0) {
            z5 = forumPostActionBar.canAddNewReactions;
        }
        if ((i5 & 16) != 0) {
            str2 = forumPostActionBar.addNewReactionAccessibilityLabel;
        }
        if ((i5 & 32) != 0) {
            reactionsTheme = forumPostActionBar.reactionsTheme;
        }
        String str3 = str2;
        ReactionsTheme reactionsTheme2 = reactionsTheme;
        return forumPostActionBar.m631copyLdU2QRA(str, forumPostActions, list, z5, str3, reactionsTheme2);
    }

    @NotNull
    /* renamed from: component1-3Eiw7ao, reason: not valid java name and from getter */
    public final String getMessageId() {
        return this.messageId;
    }

    @NotNull
    /* renamed from: component2, reason: from getter */
    public final ForumPostActions getPostActions() {
        return this.postActions;
    }

    public final List<MessageReaction> component3() {
        return this.reactions;
    }

    /* renamed from: component4, reason: from getter */
    public final boolean getCanAddNewReactions() {
        return this.canAddNewReactions;
    }

    @NotNull
    /* renamed from: component5, reason: from getter */
    public final String getAddNewReactionAccessibilityLabel() {
        return this.addNewReactionAccessibilityLabel;
    }

    /* renamed from: component6, reason: from getter */
    public final ReactionsTheme getReactionsTheme() {
        return this.reactionsTheme;
    }

    @NotNull
    /* renamed from: copy-LdU2QRA, reason: not valid java name */
    public final ForumPostActionBar m631copyLdU2QRA(@NotNull String messageId, @NotNull ForumPostActions postActions, List<MessageReaction> reactions, boolean canAddNewReactions, @NotNull String addNewReactionAccessibilityLabel, ReactionsTheme reactionsTheme) {
        Intrinsics.checkNotNullParameter(messageId, "messageId");
        Intrinsics.checkNotNullParameter(postActions, "postActions");
        Intrinsics.checkNotNullParameter(addNewReactionAccessibilityLabel, "addNewReactionAccessibilityLabel");
        return new ForumPostActionBar(messageId, postActions, reactions, canAddNewReactions, addNewReactionAccessibilityLabel, reactionsTheme, null);
    }

    public boolean equals(Object other) {
        if (this == other) {
            return true;
        }
        if (!(other instanceof ForumPostActionBar)) {
            return false;
        }
        ForumPostActionBar forumPostActionBar = (ForumPostActionBar) other;
        return MessageId.m1193equalsimpl0(this.messageId, forumPostActionBar.messageId) && Intrinsics.areEqual(this.postActions, forumPostActionBar.postActions) && Intrinsics.areEqual(this.reactions, forumPostActionBar.reactions) && this.canAddNewReactions == forumPostActionBar.canAddNewReactions && Intrinsics.areEqual(this.addNewReactionAccessibilityLabel, forumPostActionBar.addNewReactionAccessibilityLabel) && Intrinsics.areEqual(this.reactionsTheme, forumPostActionBar.reactionsTheme);
    }

    @NotNull
    public final String getAddNewReactionAccessibilityLabel() {
        return this.addNewReactionAccessibilityLabel;
    }

    public final boolean getCanAddNewReactions() {
        return this.canAddNewReactions;
    }

    @Override // com.discord.chat.presentation.message.messagepart.MessageAccessory
    @NotNull
    /* renamed from: getMessageId-3Eiw7ao */
    public String getMessageId() {
        return this.messageId;
    }

    @NotNull
    public final ForumPostActions getPostActions() {
        return this.postActions;
    }

    public final List<MessageReaction> getReactions() {
        return this.reactions;
    }

    public final ReactionsTheme getReactionsTheme() {
        return this.reactionsTheme;
    }

    public int hashCode() {
        int hashCode = (this.postActions.hashCode() + (MessageId.m1194hashCodeimpl(this.messageId) * 31)) * 31;
        List<MessageReaction> list = this.reactions;
        int d6 = e.d(d.d((hashCode + (list == null ? 0 : list.hashCode())) * 31, 31, this.canAddNewReactions), 31, this.addNewReactionAccessibilityLabel);
        ReactionsTheme reactionsTheme = this.reactionsTheme;
        return d6 + (reactionsTheme != null ? reactionsTheme.hashCode() : 0);
    }

    @NotNull
    public String toString() {
        return "ForumPostActionBar(messageId=" + MessageId.m1196toStringimpl(this.messageId) + ", postActions=" + this.postActions + ", reactions=" + this.reactions + ", canAddNewReactions=" + this.canAddNewReactions + ", addNewReactionAccessibilityLabel=" + this.addNewReactionAccessibilityLabel + ", reactionsTheme=" + this.reactionsTheme + ")";
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    private ForumPostActionBar(String messageId, ForumPostActions postActions, List<MessageReaction> list, boolean z5, String addNewReactionAccessibilityLabel, ReactionsTheme reactionsTheme) {
        super(messageId, "post-actions", false, 4, null);
        Intrinsics.checkNotNullParameter(messageId, "messageId");
        Intrinsics.checkNotNullParameter(postActions, "postActions");
        Intrinsics.checkNotNullParameter(addNewReactionAccessibilityLabel, "addNewReactionAccessibilityLabel");
        this.messageId = messageId;
        this.postActions = postActions;
        this.reactions = list;
        this.canAddNewReactions = z5;
        this.addNewReactionAccessibilityLabel = addNewReactionAccessibilityLabel;
        this.reactionsTheme = reactionsTheme;
    }
}
