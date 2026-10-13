package com.discord.chat.bridge.contentnode;

import bs.d;
import bs.h1;
import bs.v1;
import com.discord.chat.bridge.botuikit.b;
import com.discord.jank_stats.JankRecordStore;
import fo.l;
import fo.m;
import java.util.List;
import kotlin.Lazy;
import kotlin.Metadata;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import kotlinx.serialization.KSerializer;
import kotlinx.serialization.descriptors.SerialDescriptor;
import kotlinx.serialization.encoding.CompositeEncoder;
import kotlinx.serialization.internal.SerializationConstructorMarker;
import org.jetbrains.annotations.NotNull;
import xr.e;

@e
@Metadata(d1 = {"\u0000P\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0004\n\u0002\u0010 \n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0010\b\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0011\n\u0002\u0010\u000b\n\u0000\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0004\b\u0087\b\u0018\u0000 02\u00020\u0001:\u0002/0BU\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\n\b\u0002\u0010\u0004\u001a\u0004\u0018\u00010\u0003\u0012\n\b\u0002\u0010\u0005\u001a\u0004\u0018\u00010\u0003\u0012\n\b\u0002\u0010\u0006\u001a\u0004\u0018\u00010\u0003\u0012\u0010\b\u0002\u0010\u0007\u001a\n\u0012\u0004\u0012\u00020\t\u0018\u00010\b\u0012\u000e\u0010\n\u001a\n\u0012\u0004\u0012\u00020\t\u0018\u00010\b¢\u0006\u0004\b\u000b\u0010\fBc\b\u0010\u0012\u0006\u0010\r\u001a\u00020\u000e\u0012\b\u0010\u0002\u001a\u0004\u0018\u00010\u0003\u0012\b\u0010\u0004\u001a\u0004\u0018\u00010\u0003\u0012\b\u0010\u0005\u001a\u0004\u0018\u00010\u0003\u0012\b\u0010\u0006\u001a\u0004\u0018\u00010\u0003\u0012\u000e\u0010\u0007\u001a\n\u0012\u0004\u0012\u00020\t\u0018\u00010\b\u0012\u000e\u0010\n\u001a\n\u0012\u0004\u0012\u00020\t\u0018\u00010\b\u0012\b\u0010\u000f\u001a\u0004\u0018\u00010\u0010¢\u0006\u0004\b\u000b\u0010\u0011J\t\u0010\u001a\u001a\u00020\u0003HÆ\u0003J\u000b\u0010\u001b\u001a\u0004\u0018\u00010\u0003HÆ\u0003J\u000b\u0010\u001c\u001a\u0004\u0018\u00010\u0003HÆ\u0003J\u000b\u0010\u001d\u001a\u0004\u0018\u00010\u0003HÆ\u0003J\u0011\u0010\u001e\u001a\n\u0012\u0004\u0012\u00020\t\u0018\u00010\bHÆ\u0003J\u0011\u0010\u001f\u001a\n\u0012\u0004\u0012\u00020\t\u0018\u00010\bHÆ\u0003J[\u0010 \u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u00032\n\b\u0002\u0010\u0004\u001a\u0004\u0018\u00010\u00032\n\b\u0002\u0010\u0005\u001a\u0004\u0018\u00010\u00032\n\b\u0002\u0010\u0006\u001a\u0004\u0018\u00010\u00032\u0010\b\u0002\u0010\u0007\u001a\n\u0012\u0004\u0012\u00020\t\u0018\u00010\b2\u0010\b\u0002\u0010\n\u001a\n\u0012\u0004\u0012\u00020\t\u0018\u00010\bHÆ\u0001J\u0013\u0010!\u001a\u00020\"2\b\u0010#\u001a\u0004\u0018\u00010$HÖ\u0003J\t\u0010%\u001a\u00020\u000eHÖ\u0001J\t\u0010&\u001a\u00020\u0003HÖ\u0001J%\u0010'\u001a\u00020(2\u0006\u0010)\u001a\u00020\u00002\u0006\u0010*\u001a\u00020+2\u0006\u0010,\u001a\u00020-H\u0001¢\u0006\u0002\b.R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0012\u0010\u0013R\u0013\u0010\u0004\u001a\u0004\u0018\u00010\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0014\u0010\u0013R\u0013\u0010\u0005\u001a\u0004\u0018\u00010\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0015\u0010\u0013R\u0013\u0010\u0006\u001a\u0004\u0018\u00010\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0016\u0010\u0013R\u0019\u0010\u0007\u001a\n\u0012\u0004\u0012\u00020\t\u0018\u00010\b¢\u0006\b\n\u0000\u001a\u0004\b\u0017\u0010\u0018R\u001c\u0010\n\u001a\n\u0012\u0004\u0012\u00020\t\u0018\u00010\bX\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\b\u0019\u0010\u0018¨\u00061"}, d2 = {"Lcom/discord/chat/bridge/contentnode/ChannelMentionContentNode;", "Lcom/discord/chat/bridge/contentnode/MentionContentNode;", "channelId", "", "guildId", "messageId", "originalLink", "inContent", "", "Lcom/discord/chat/bridge/contentnode/ContentNode;", "content", "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/util/List;Ljava/util/List;)V", "seen0", "", "serializationConstructorMarker", "Lkotlinx/serialization/internal/SerializationConstructorMarker;", "(ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/util/List;Ljava/util/List;Lkotlinx/serialization/internal/SerializationConstructorMarker;)V", "getChannelId", "()Ljava/lang/String;", "getGuildId", "getMessageId", "getOriginalLink", "getInContent", "()Ljava/util/List;", "getContent", "component1", "component2", "component3", "component4", "component5", "component6", "copy", "equals", "", JankRecordStore.SCREEN_OTHER, "", "hashCode", "toString", "write$Self", "", "self", "output", "Lkotlinx/serialization/encoding/CompositeEncoder;", "serialDesc", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "write$Self$chat_release", "$serializer", "Companion", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final /* data */ class ChannelMentionContentNode extends MentionContentNode {

    @NotNull
    private static final Lazy[] $childSerializers;

    /* renamed from: Companion, reason: from kotlin metadata */
    @NotNull
    public static final Companion INSTANCE = new Companion(null);

    @NotNull
    private final String channelId;
    private final List<ContentNode> content;
    private final String guildId;
    private final List<ContentNode> inContent;
    private final String messageId;
    private final String originalLink;

    @Metadata(d1 = {"\u0000\u0016\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\f\u0010\u0004\u001a\b\u0012\u0004\u0012\u00020\u00060\u0005¨\u0006\u0007"}, d2 = {"Lcom/discord/chat/bridge/contentnode/ChannelMentionContentNode$Companion;", "", "<init>", "()V", "serializer", "Lkotlinx/serialization/KSerializer;", "Lcom/discord/chat/bridge/contentnode/ChannelMentionContentNode;", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final class Companion {
        private Companion() {
        }

        @NotNull
        public final KSerializer serializer() {
            return ChannelMentionContentNode$$serializer.INSTANCE;
        }

        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }
    }

    static {
        m mVar = m.f8827e;
        $childSerializers = new Lazy[]{null, null, null, null, l.b(mVar, new b(4)), l.b(mVar, new b(5))};
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public /* synthetic */ ChannelMentionContentNode(int i5, String str, String str2, String str3, String str4, List list, List list2, SerializationConstructorMarker serializationConstructorMarker) {
        super(i5, serializationConstructorMarker);
        if (33 != (i5 & 33)) {
            h1.l(i5, 33, ChannelMentionContentNode$$serializer.INSTANCE.getDescriptor());
            throw null;
        }
        this.channelId = str;
        if ((i5 & 2) == 0) {
            this.guildId = null;
        } else {
            this.guildId = str2;
        }
        if ((i5 & 4) == 0) {
            this.messageId = null;
        } else {
            this.messageId = str3;
        }
        if ((i5 & 8) == 0) {
            this.originalLink = null;
        } else {
            this.originalLink = str4;
        }
        if ((i5 & 16) == 0) {
            this.inContent = null;
        } else {
            this.inContent = list;
        }
        this.content = list2;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final /* synthetic */ KSerializer _childSerializers$_anonymous_() {
        return new d(ContentNodeSerializer.INSTANCE, 0);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final /* synthetic */ KSerializer _childSerializers$_anonymous_$0() {
        return new d(ContentNodeSerializer.INSTANCE, 0);
    }

    public static /* synthetic */ ChannelMentionContentNode copy$default(ChannelMentionContentNode channelMentionContentNode, String str, String str2, String str3, String str4, List list, List list2, int i5, Object obj) {
        if ((i5 & 1) != 0) {
            str = channelMentionContentNode.channelId;
        }
        if ((i5 & 2) != 0) {
            str2 = channelMentionContentNode.guildId;
        }
        if ((i5 & 4) != 0) {
            str3 = channelMentionContentNode.messageId;
        }
        if ((i5 & 8) != 0) {
            str4 = channelMentionContentNode.originalLink;
        }
        if ((i5 & 16) != 0) {
            list = channelMentionContentNode.inContent;
        }
        if ((i5 & 32) != 0) {
            list2 = channelMentionContentNode.content;
        }
        List list3 = list;
        List list4 = list2;
        return channelMentionContentNode.copy(str, str2, str3, str4, list3, list4);
    }

    public static final /* synthetic */ void write$Self$chat_release(ChannelMentionContentNode self, CompositeEncoder output, SerialDescriptor serialDesc) {
        MentionContentNode.write$Self(self, output, serialDesc);
        Lazy[] lazyArr = $childSerializers;
        output.y(serialDesc, 0, self.channelId);
        if (output.I(serialDesc, 1) || self.guildId != null) {
            output.z(serialDesc, 1, v1.a, self.guildId);
        }
        if (output.I(serialDesc, 2) || self.messageId != null) {
            output.z(serialDesc, 2, v1.a, self.messageId);
        }
        if (output.I(serialDesc, 3) || self.originalLink != null) {
            output.z(serialDesc, 3, v1.a, self.originalLink);
        }
        if (output.I(serialDesc, 4) || self.inContent != null) {
            output.z(serialDesc, 4, (KSerializer) lazyArr[4].getValue(), self.inContent);
        }
        output.z(serialDesc, 5, (KSerializer) lazyArr[5].getValue(), self.getContent());
    }

    @NotNull
    /* renamed from: component1, reason: from getter */
    public final String getChannelId() {
        return this.channelId;
    }

    /* renamed from: component2, reason: from getter */
    public final String getGuildId() {
        return this.guildId;
    }

    /* renamed from: component3, reason: from getter */
    public final String getMessageId() {
        return this.messageId;
    }

    /* renamed from: component4, reason: from getter */
    public final String getOriginalLink() {
        return this.originalLink;
    }

    public final List<ContentNode> component5() {
        return this.inContent;
    }

    public final List<ContentNode> component6() {
        return this.content;
    }

    @NotNull
    public final ChannelMentionContentNode copy(@NotNull String channelId, String guildId, String messageId, String originalLink, List<? extends ContentNode> inContent, List<? extends ContentNode> content) {
        Intrinsics.checkNotNullParameter(channelId, "channelId");
        return new ChannelMentionContentNode(channelId, guildId, messageId, originalLink, inContent, content);
    }

    public boolean equals(Object other) {
        if (this == other) {
            return true;
        }
        if (!(other instanceof ChannelMentionContentNode)) {
            return false;
        }
        ChannelMentionContentNode channelMentionContentNode = (ChannelMentionContentNode) other;
        return Intrinsics.areEqual(this.channelId, channelMentionContentNode.channelId) && Intrinsics.areEqual(this.guildId, channelMentionContentNode.guildId) && Intrinsics.areEqual(this.messageId, channelMentionContentNode.messageId) && Intrinsics.areEqual(this.originalLink, channelMentionContentNode.originalLink) && Intrinsics.areEqual(this.inContent, channelMentionContentNode.inContent) && Intrinsics.areEqual(this.content, channelMentionContentNode.content);
    }

    @NotNull
    public final String getChannelId() {
        return this.channelId;
    }

    @Override // com.discord.chat.bridge.contentnode.MentionContentNode
    public List<ContentNode> getContent() {
        return this.content;
    }

    public final String getGuildId() {
        return this.guildId;
    }

    public final List<ContentNode> getInContent() {
        return this.inContent;
    }

    public final String getMessageId() {
        return this.messageId;
    }

    public final String getOriginalLink() {
        return this.originalLink;
    }

    public int hashCode() {
        int hashCode = this.channelId.hashCode() * 31;
        String str = this.guildId;
        int hashCode2 = (hashCode + (str == null ? 0 : str.hashCode())) * 31;
        String str2 = this.messageId;
        int hashCode3 = (hashCode2 + (str2 == null ? 0 : str2.hashCode())) * 31;
        String str3 = this.originalLink;
        int hashCode4 = (hashCode3 + (str3 == null ? 0 : str3.hashCode())) * 31;
        List<ContentNode> list = this.inContent;
        int hashCode5 = (hashCode4 + (list == null ? 0 : list.hashCode())) * 31;
        List<ContentNode> list2 = this.content;
        return hashCode5 + (list2 != null ? list2.hashCode() : 0);
    }

    @NotNull
    public String toString() {
        String str = this.channelId;
        String str2 = this.guildId;
        String str3 = this.messageId;
        String str4 = this.originalLink;
        List<ContentNode> list = this.inContent;
        List<ContentNode> list2 = this.content;
        StringBuilder t5 = a3.e.t("ChannelMentionContentNode(channelId=", str, ", guildId=", str2, ", messageId=");
        a3.e.A(t5, str3, ", originalLink=", str4, ", inContent=");
        t5.append(list);
        t5.append(", content=");
        t5.append(list2);
        t5.append(")");
        return t5.toString();
    }

    /* JADX WARN: Illegal instructions before constructor call */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public /* synthetic */ ChannelMentionContentNode(String str, String str2, String str3, String str4, List list, List list2, int i5, DefaultConstructorMarker defaultConstructorMarker) {
        this(str, str2, str3, str4, r7, r8);
        List list3;
        List list4;
        str2 = (i5 & 2) != 0 ? null : str2;
        str3 = (i5 & 4) != 0 ? null : str3;
        str4 = (i5 & 8) != 0 ? null : str4;
        if ((i5 & 16) != 0) {
            list3 = list2;
            list4 = null;
        } else {
            list3 = list2;
            list4 = list;
        }
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    /* JADX WARN: Multi-variable type inference failed */
    public ChannelMentionContentNode(@NotNull String channelId, String str, String str2, String str3, List<? extends ContentNode> list, List<? extends ContentNode> list2) {
        super(null);
        Intrinsics.checkNotNullParameter(channelId, "channelId");
        this.channelId = channelId;
        this.guildId = str;
        this.messageId = str2;
        this.originalLink = str3;
        this.inContent = list;
        this.content = list2;
    }
}
