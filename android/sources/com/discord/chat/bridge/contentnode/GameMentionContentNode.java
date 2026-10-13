package com.discord.chat.bridge.contentnode;

import bs.d;
import bs.h1;
import bs.v1;
import com.discord.chat.bridge.botuikit.b;
import com.discord.jank_stats.JankRecordStore;
import com.discord.primitives.ChannelId;
import com.discord.primitives.ChannelId$$serializer;
import fo.l;
import fo.m;
import java.util.List;
import kotlin.Lazy;
import kotlin.Metadata;
import kotlin.collections.m0;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import kotlinx.serialization.KSerializer;
import kotlinx.serialization.descriptors.SerialDescriptor;
import kotlinx.serialization.encoding.CompositeEncoder;
import kotlinx.serialization.internal.SerializationConstructorMarker;
import org.jetbrains.annotations.NotNull;
import xr.e;

@e
@Metadata(d1 = {"\u0000V\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0003\n\u0002\u0010 \n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\b\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0014\n\u0002\u0010\u000b\n\u0000\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0004\b\u0087\b\u0018\u0000 32\u00020\u0001:\u000223B?\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\n\b\u0002\u0010\u0004\u001a\u0004\u0018\u00010\u0005\u0012\u0006\u0010\u0006\u001a\u00020\u0005\u0012\n\b\u0002\u0010\u0007\u001a\u0004\u0018\u00010\u0005\u0012\u000e\b\u0002\u0010\b\u001a\b\u0012\u0004\u0012\u00020\n0\t¢\u0006\u0004\b\u000b\u0010\fBS\b\u0010\u0012\u0006\u0010\r\u001a\u00020\u000e\u0012\b\u0010\u0002\u001a\u0004\u0018\u00010\u0003\u0012\b\u0010\u0004\u001a\u0004\u0018\u00010\u0005\u0012\b\u0010\u0006\u001a\u0004\u0018\u00010\u0005\u0012\b\u0010\u0007\u001a\u0004\u0018\u00010\u0005\u0012\u000e\u0010\b\u001a\n\u0012\u0004\u0012\u00020\n\u0018\u00010\t\u0012\b\u0010\u000f\u001a\u0004\u0018\u00010\u0010¢\u0006\u0004\b\u000b\u0010\u0011J\u0010\u0010\u001b\u001a\u00020\u0003HÆ\u0003¢\u0006\u0004\b\u001c\u0010\u0013J\u000b\u0010\u001d\u001a\u0004\u0018\u00010\u0005HÆ\u0003J\t\u0010\u001e\u001a\u00020\u0005HÆ\u0003J\u000b\u0010\u001f\u001a\u0004\u0018\u00010\u0005HÆ\u0003J\u000f\u0010 \u001a\b\u0012\u0004\u0012\u00020\n0\tHÆ\u0003JL\u0010!\u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u00032\n\b\u0002\u0010\u0004\u001a\u0004\u0018\u00010\u00052\b\b\u0002\u0010\u0006\u001a\u00020\u00052\n\b\u0002\u0010\u0007\u001a\u0004\u0018\u00010\u00052\u000e\b\u0002\u0010\b\u001a\b\u0012\u0004\u0012\u00020\n0\tHÆ\u0001¢\u0006\u0004\b\"\u0010#J\u0013\u0010$\u001a\u00020%2\b\u0010&\u001a\u0004\u0018\u00010'HÖ\u0003J\t\u0010(\u001a\u00020\u000eHÖ\u0001J\t\u0010)\u001a\u00020\u0005HÖ\u0001J%\u0010*\u001a\u00020+2\u0006\u0010,\u001a\u00020\u00002\u0006\u0010-\u001a\u00020.2\u0006\u0010/\u001a\u000200H\u0001¢\u0006\u0002\b1R\u0013\u0010\u0002\u001a\u00020\u0003¢\u0006\n\n\u0002\u0010\u0014\u001a\u0004\b\u0012\u0010\u0013R\u0013\u0010\u0004\u001a\u0004\u0018\u00010\u0005¢\u0006\b\n\u0000\u001a\u0004\b\u0015\u0010\u0016R\u0011\u0010\u0006\u001a\u00020\u0005¢\u0006\b\n\u0000\u001a\u0004\b\u0017\u0010\u0016R\u0013\u0010\u0007\u001a\u0004\u0018\u00010\u0005¢\u0006\b\n\u0000\u001a\u0004\b\u0018\u0010\u0016R\u001a\u0010\b\u001a\b\u0012\u0004\u0012\u00020\n0\tX\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\b\u0019\u0010\u001a¨\u00064"}, d2 = {"Lcom/discord/chat/bridge/contentnode/GameMentionContentNode;", "Lcom/discord/chat/bridge/contentnode/MentionContentNode;", "channelId", "Lcom/discord/primitives/ChannelId;", "icon", "", "gameId", "displayName", "content", "", "Lcom/discord/chat/bridge/contentnode/ContentNode;", "<init>", "(JLjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/util/List;Lkotlin/jvm/internal/DefaultConstructorMarker;)V", "seen0", "", "serializationConstructorMarker", "Lkotlinx/serialization/internal/SerializationConstructorMarker;", "(ILcom/discord/primitives/ChannelId;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/util/List;Lkotlinx/serialization/internal/SerializationConstructorMarker;Lkotlin/jvm/internal/DefaultConstructorMarker;)V", "getChannelId-o4g7jtM", "()J", "J", "getIcon", "()Ljava/lang/String;", "getGameId", "getDisplayName", "getContent", "()Ljava/util/List;", "component1", "component1-o4g7jtM", "component2", "component3", "component4", "component5", "copy", "copy-JrbBJuM", "(JLjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/util/List;)Lcom/discord/chat/bridge/contentnode/GameMentionContentNode;", "equals", "", JankRecordStore.SCREEN_OTHER, "", "hashCode", "toString", "write$Self", "", "self", "output", "Lkotlinx/serialization/encoding/CompositeEncoder;", "serialDesc", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "write$Self$chat_release", "$serializer", "Companion", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final /* data */ class GameMentionContentNode extends MentionContentNode {
    private final long channelId;

    @NotNull
    private final List<ContentNode> content;
    private final String displayName;

    @NotNull
    private final String gameId;
    private final String icon;

    /* renamed from: Companion, reason: from kotlin metadata */
    @NotNull
    public static final Companion INSTANCE = new Companion(null);

    @NotNull
    private static final Lazy[] $childSerializers = {null, null, null, null, l.b(m.f8827e, new b(10))};

    @Metadata(d1 = {"\u0000\u0016\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\f\u0010\u0004\u001a\b\u0012\u0004\u0012\u00020\u00060\u0005¨\u0006\u0007"}, d2 = {"Lcom/discord/chat/bridge/contentnode/GameMentionContentNode$Companion;", "", "<init>", "()V", "serializer", "Lkotlinx/serialization/KSerializer;", "Lcom/discord/chat/bridge/contentnode/GameMentionContentNode;", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final class Companion {
        private Companion() {
        }

        @NotNull
        public final KSerializer serializer() {
            return GameMentionContentNode$$serializer.INSTANCE;
        }

        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }
    }

    public /* synthetic */ GameMentionContentNode(int i5, ChannelId channelId, String str, String str2, String str3, List list, SerializationConstructorMarker serializationConstructorMarker, DefaultConstructorMarker defaultConstructorMarker) {
        this(i5, channelId, str, str2, str3, list, serializationConstructorMarker);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final /* synthetic */ KSerializer _childSerializers$_anonymous_() {
        return new d(ContentNodeSerializer.INSTANCE, 0);
    }

    /* renamed from: copy-JrbBJuM$default, reason: not valid java name */
    public static /* synthetic */ GameMentionContentNode m338copyJrbBJuM$default(GameMentionContentNode gameMentionContentNode, long j, String str, String str2, String str3, List list, int i5, Object obj) {
        if ((i5 & 1) != 0) {
            j = gameMentionContentNode.channelId;
        }
        long j5 = j;
        if ((i5 & 2) != 0) {
            str = gameMentionContentNode.icon;
        }
        String str4 = str;
        if ((i5 & 4) != 0) {
            str2 = gameMentionContentNode.gameId;
        }
        String str5 = str2;
        if ((i5 & 8) != 0) {
            str3 = gameMentionContentNode.displayName;
        }
        String str6 = str3;
        if ((i5 & 16) != 0) {
            list = gameMentionContentNode.content;
        }
        return gameMentionContentNode.m340copyJrbBJuM(j5, str4, str5, str6, list);
    }

    public static final void write$Self$chat_release(GameMentionContentNode self, CompositeEncoder output, SerialDescriptor serialDesc) {
        MentionContentNode.write$Self(self, output, serialDesc);
        Lazy[] lazyArr = $childSerializers;
        output.g(serialDesc, 0, ChannelId$$serializer.INSTANCE, ChannelId.m1163boximpl(self.channelId));
        if (output.I(serialDesc, 1) || self.icon != null) {
            output.z(serialDesc, 1, v1.a, self.icon);
        }
        output.y(serialDesc, 2, self.gameId);
        if (output.I(serialDesc, 3) || self.displayName != null) {
            output.z(serialDesc, 3, v1.a, self.displayName);
        }
        if (!output.I(serialDesc, 4) && Intrinsics.areEqual(self.getContent(), m0.f13512d)) {
            return;
        }
        output.g(serialDesc, 4, (KSerializer) lazyArr[4].getValue(), self.getContent());
    }

    /* renamed from: component1-o4g7jtM, reason: not valid java name and from getter */
    public final long getChannelId() {
        return this.channelId;
    }

    /* renamed from: component2, reason: from getter */
    public final String getIcon() {
        return this.icon;
    }

    @NotNull
    /* renamed from: component3, reason: from getter */
    public final String getGameId() {
        return this.gameId;
    }

    /* renamed from: component4, reason: from getter */
    public final String getDisplayName() {
        return this.displayName;
    }

    @NotNull
    public final List<ContentNode> component5() {
        return this.content;
    }

    @NotNull
    /* renamed from: copy-JrbBJuM, reason: not valid java name */
    public final GameMentionContentNode m340copyJrbBJuM(long channelId, String icon, @NotNull String gameId, String displayName, @NotNull List<? extends ContentNode> content) {
        Intrinsics.checkNotNullParameter(gameId, "gameId");
        Intrinsics.checkNotNullParameter(content, "content");
        return new GameMentionContentNode(channelId, icon, gameId, displayName, content, null);
    }

    public boolean equals(Object other) {
        if (this == other) {
            return true;
        }
        if (!(other instanceof GameMentionContentNode)) {
            return false;
        }
        GameMentionContentNode gameMentionContentNode = (GameMentionContentNode) other;
        return ChannelId.m1167equalsimpl0(this.channelId, gameMentionContentNode.channelId) && Intrinsics.areEqual(this.icon, gameMentionContentNode.icon) && Intrinsics.areEqual(this.gameId, gameMentionContentNode.gameId) && Intrinsics.areEqual(this.displayName, gameMentionContentNode.displayName) && Intrinsics.areEqual(this.content, gameMentionContentNode.content);
    }

    /* renamed from: getChannelId-o4g7jtM, reason: not valid java name */
    public final long m341getChannelIdo4g7jtM() {
        return this.channelId;
    }

    @Override // com.discord.chat.bridge.contentnode.MentionContentNode
    @NotNull
    public List<ContentNode> getContent() {
        return this.content;
    }

    public final String getDisplayName() {
        return this.displayName;
    }

    @NotNull
    public final String getGameId() {
        return this.gameId;
    }

    public final String getIcon() {
        return this.icon;
    }

    public int hashCode() {
        int m1168hashCodeimpl = ChannelId.m1168hashCodeimpl(this.channelId) * 31;
        String str = this.icon;
        int d6 = a3.e.d((m1168hashCodeimpl + (str == null ? 0 : str.hashCode())) * 31, 31, this.gameId);
        String str2 = this.displayName;
        return this.content.hashCode() + ((d6 + (str2 != null ? str2.hashCode() : 0)) * 31);
    }

    @NotNull
    public String toString() {
        String m1170toStringimpl = ChannelId.m1170toStringimpl(this.channelId);
        String str = this.icon;
        String str2 = this.gameId;
        String str3 = this.displayName;
        List<ContentNode> list = this.content;
        StringBuilder t5 = a3.e.t("GameMentionContentNode(channelId=", m1170toStringimpl, ", icon=", str, ", gameId=");
        a3.e.A(t5, str2, ", displayName=", str3, ", content=");
        t5.append(list);
        t5.append(")");
        return t5.toString();
    }

    public /* synthetic */ GameMentionContentNode(long j, String str, String str2, String str3, List list, DefaultConstructorMarker defaultConstructorMarker) {
        this(j, str, str2, str3, list);
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    private GameMentionContentNode(int i5, ChannelId channelId, String str, String str2, String str3, List list, SerializationConstructorMarker serializationConstructorMarker) {
        super(i5, serializationConstructorMarker);
        if (5 != (i5 & 5)) {
            h1.l(i5, 5, GameMentionContentNode$$serializer.INSTANCE.getDescriptor());
            throw null;
        }
        this.channelId = channelId.m1172unboximpl();
        if ((i5 & 2) == 0) {
            this.icon = null;
        } else {
            this.icon = str;
        }
        this.gameId = str2;
        if ((i5 & 8) == 0) {
            this.displayName = null;
        } else {
            this.displayName = str3;
        }
        if ((i5 & 16) == 0) {
            this.content = m0.f13512d;
        } else {
            this.content = list;
        }
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    /* JADX WARN: Multi-variable type inference failed */
    private GameMentionContentNode(long j, String str, String gameId, String str2, List<? extends ContentNode> content) {
        super(null);
        Intrinsics.checkNotNullParameter(gameId, "gameId");
        Intrinsics.checkNotNullParameter(content, "content");
        this.channelId = j;
        this.icon = str;
        this.gameId = gameId;
        this.displayName = str2;
        this.content = content;
    }

    public GameMentionContentNode(long j, String str, String str2, String str3, List list, int i5, DefaultConstructorMarker defaultConstructorMarker) {
        this(j, (i5 & 2) != 0 ? null : str, str2, (i5 & 8) != 0 ? null : str3, (i5 & 16) != 0 ? m0.f13512d : list, null);
    }
}
