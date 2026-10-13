package com.discord.chat.bridge.automod;

import androidx.recyclerview.widget.RecyclerView;
import bs.g;
import bs.h1;
import bs.o0;
import bs.v1;
import com.discord.chat.bridge.botuikit.a;
import com.discord.chat.bridge.structurabletext.StructurableText;
import com.discord.chat.bridge.structurabletext.StructurableTextSerializer;
import com.discord.jank_stats.JankRecordStore;
import com.discord.notifications.renderer.NotificationRenderer;
import com.discord.primitives.ChannelId;
import com.discord.primitives.ChannelId$$serializer;
import com.discord.primitives.GuildId;
import com.discord.primitives.GuildId$$serializer;
import com.discord.primitives.MessageId;
import com.discord.primitives.MessageId$$serializer;
import com.discord.primitives.UserId;
import com.discord.primitives.UserId$$serializer;
import com.facebook.react.devsupport.StackTraceHelper;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import k0.d;
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
@Metadata(d1 = {"\u0000^\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0002\n\u0002\u0010\b\n\u0002\b\u0002\n\u0002\u0010\u000b\n\u0002\b\u0006\n\u0002\u0018\u0002\n\u0002\b2\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0004\b\u0087\b\u0018\u0000 U2\u00020\u0001:\u0002TUB\u0087\u0001\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005\u0012\n\b\u0002\u0010\u0006\u001a\u0004\u0018\u00010\u0007\u0012\n\b\u0002\u0010\b\u001a\u0004\u0018\u00010\t\u0012\n\b\u0002\u0010\n\u001a\u0004\u0018\u00010\u000b\u0012\n\b\u0002\u0010\f\u001a\u0004\u0018\u00010\r\u0012\n\b\u0002\u0010\u000e\u001a\u0004\u0018\u00010\r\u0012\u0006\u0010\u000f\u001a\u00020\u0010\u0012\n\b\u0002\u0010\u0011\u001a\u0004\u0018\u00010\u0010\u0012\u0006\u0010\u0012\u001a\u00020\u0013\u0012\n\b\u0002\u0010\u0014\u001a\u0004\u0018\u00010\r\u0012\n\b\u0002\u0010\u0015\u001a\u0004\u0018\u00010\u0013¢\u0006\u0004\b\u0016\u0010\u0017B\u008f\u0001\b\u0010\u0012\u0006\u0010\u0018\u001a\u00020\u0010\u0012\b\u0010\u0002\u001a\u0004\u0018\u00010\u0003\u0012\b\u0010\u0004\u001a\u0004\u0018\u00010\u0005\u0012\b\u0010\u0006\u001a\u0004\u0018\u00010\u0007\u0012\b\u0010\b\u001a\u0004\u0018\u00010\t\u0012\b\u0010\n\u001a\u0004\u0018\u00010\u000b\u0012\b\u0010\f\u001a\u0004\u0018\u00010\r\u0012\b\u0010\u000e\u001a\u0004\u0018\u00010\r\u0012\u0006\u0010\u000f\u001a\u00020\u0010\u0012\b\u0010\u0011\u001a\u0004\u0018\u00010\u0010\u0012\u0006\u0010\u0012\u001a\u00020\u0013\u0012\b\u0010\u0014\u001a\u0004\u0018\u00010\r\u0012\b\u0010\u0015\u001a\u0004\u0018\u00010\u0013\u0012\b\u0010\u0019\u001a\u0004\u0018\u00010\u001a¢\u0006\u0004\b\u0016\u0010\u001bJ\u0010\u00105\u001a\u00020\u0003HÆ\u0003¢\u0006\u0004\b6\u0010\u001dJ\u0010\u00107\u001a\u00020\u0005HÆ\u0003¢\u0006\u0004\b8\u0010 J\u0010\u00109\u001a\u0004\u0018\u00010\u0007HÆ\u0003¢\u0006\u0002\b:J\u0010\u0010;\u001a\u0004\u0018\u00010\tHÆ\u0003¢\u0006\u0002\b<J\u000b\u0010=\u001a\u0004\u0018\u00010\u000bHÆ\u0003J\u000b\u0010>\u001a\u0004\u0018\u00010\rHÆ\u0003J\u000b\u0010?\u001a\u0004\u0018\u00010\rHÆ\u0003J\t\u0010@\u001a\u00020\u0010HÆ\u0003J\u0010\u0010A\u001a\u0004\u0018\u00010\u0010HÆ\u0003¢\u0006\u0002\u0010-J\t\u0010B\u001a\u00020\u0013HÆ\u0003J\u000b\u0010C\u001a\u0004\u0018\u00010\rHÆ\u0003J\u0010\u0010D\u001a\u0004\u0018\u00010\u0013HÆ\u0003¢\u0006\u0002\u00103J\u0098\u0001\u0010E\u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u00032\b\b\u0002\u0010\u0004\u001a\u00020\u00052\n\b\u0002\u0010\u0006\u001a\u0004\u0018\u00010\u00072\n\b\u0002\u0010\b\u001a\u0004\u0018\u00010\t2\n\b\u0002\u0010\n\u001a\u0004\u0018\u00010\u000b2\n\b\u0002\u0010\f\u001a\u0004\u0018\u00010\r2\n\b\u0002\u0010\u000e\u001a\u0004\u0018\u00010\r2\b\b\u0002\u0010\u000f\u001a\u00020\u00102\n\b\u0002\u0010\u0011\u001a\u0004\u0018\u00010\u00102\b\b\u0002\u0010\u0012\u001a\u00020\u00132\n\b\u0002\u0010\u0014\u001a\u0004\u0018\u00010\r2\n\b\u0002\u0010\u0015\u001a\u0004\u0018\u00010\u0013HÆ\u0001¢\u0006\u0004\bF\u0010GJ\u0013\u0010H\u001a\u00020\u00132\b\u0010I\u001a\u0004\u0018\u00010\u0001HÖ\u0003J\t\u0010J\u001a\u00020\u0010HÖ\u0001J\t\u0010K\u001a\u00020\rHÖ\u0001J%\u0010L\u001a\u00020M2\u0006\u0010N\u001a\u00020\u00002\u0006\u0010O\u001a\u00020P2\u0006\u0010Q\u001a\u00020RH\u0001¢\u0006\u0002\bSR\u0013\u0010\u0002\u001a\u00020\u0003¢\u0006\n\n\u0002\u0010\u001e\u001a\u0004\b\u001c\u0010\u001dR\u0013\u0010\u0004\u001a\u00020\u0005¢\u0006\n\n\u0002\u0010!\u001a\u0004\b\u001f\u0010 R\u0013\u0010\u0006\u001a\u0004\u0018\u00010\u0007¢\u0006\b\n\u0000\u001a\u0004\b\"\u0010#R\u0013\u0010\b\u001a\u0004\u0018\u00010\t¢\u0006\b\n\u0000\u001a\u0004\b$\u0010%R\u0013\u0010\n\u001a\u0004\u0018\u00010\u000b¢\u0006\b\n\u0000\u001a\u0004\b&\u0010'R\u0013\u0010\f\u001a\u0004\u0018\u00010\r¢\u0006\b\n\u0000\u001a\u0004\b(\u0010\u001dR\u0013\u0010\u000e\u001a\u0004\u0018\u00010\r¢\u0006\b\n\u0000\u001a\u0004\b)\u0010\u001dR\u0011\u0010\u000f\u001a\u00020\u0010¢\u0006\b\n\u0000\u001a\u0004\b*\u0010+R\u0015\u0010\u0011\u001a\u0004\u0018\u00010\u0010¢\u0006\n\n\u0002\u0010.\u001a\u0004\b,\u0010-R\u0011\u0010\u0012\u001a\u00020\u0013¢\u0006\b\n\u0000\u001a\u0004\b/\u00100R\u0013\u0010\u0014\u001a\u0004\u0018\u00010\r¢\u0006\b\n\u0000\u001a\u0004\b1\u0010\u001dR\u0015\u0010\u0015\u001a\u0004\u0018\u00010\u0013¢\u0006\n\n\u0002\u00104\u001a\u0004\b2\u00103¨\u0006V"}, d2 = {"Lcom/discord/chat/bridge/automod/FlaggedMessageEmbed;", "", StackTraceHelper.ID_KEY, "Lcom/discord/primitives/MessageId;", "channelId", "Lcom/discord/primitives/ChannelId;", "guildId", "Lcom/discord/primitives/GuildId;", "userId", "Lcom/discord/primitives/UserId;", "content", "Lcom/discord/chat/bridge/structurabletext/StructurableText;", NotificationRenderer.CHANNEL_NAME, "", NotificationRenderer.USERNAME, "usernameColor", "", "roleColor", "shouldShowRoleDot", "", "avatarURL", "communicationDisabled", "<init>", "(Ljava/lang/String;JLcom/discord/primitives/GuildId;Lcom/discord/primitives/UserId;Lcom/discord/chat/bridge/structurabletext/StructurableText;Ljava/lang/String;Ljava/lang/String;ILjava/lang/Integer;ZLjava/lang/String;Ljava/lang/Boolean;Lkotlin/jvm/internal/DefaultConstructorMarker;)V", "seen0", "serializationConstructorMarker", "Lkotlinx/serialization/internal/SerializationConstructorMarker;", "(ILjava/lang/String;Lcom/discord/primitives/ChannelId;Lcom/discord/primitives/GuildId;Lcom/discord/primitives/UserId;Lcom/discord/chat/bridge/structurabletext/StructurableText;Ljava/lang/String;Ljava/lang/String;ILjava/lang/Integer;ZLjava/lang/String;Ljava/lang/Boolean;Lkotlinx/serialization/internal/SerializationConstructorMarker;Lkotlin/jvm/internal/DefaultConstructorMarker;)V", "getId-3Eiw7ao", "()Ljava/lang/String;", "Ljava/lang/String;", "getChannelId-o4g7jtM", "()J", "J", "getGuildId-qOKuAAo", "()Lcom/discord/primitives/GuildId;", "getUserId-wUX8bhU", "()Lcom/discord/primitives/UserId;", "getContent", "()Lcom/discord/chat/bridge/structurabletext/StructurableText;", "getChannelName", "getUsername", "getUsernameColor", "()I", "getRoleColor", "()Ljava/lang/Integer;", "Ljava/lang/Integer;", "getShouldShowRoleDot", "()Z", "getAvatarURL", "getCommunicationDisabled", "()Ljava/lang/Boolean;", "Ljava/lang/Boolean;", "component1", "component1-3Eiw7ao", "component2", "component2-o4g7jtM", "component3", "component3-qOKuAAo", "component4", "component4-wUX8bhU", "component5", "component6", "component7", "component8", "component9", "component10", "component11", "component12", "copy", "copy-Yv-vreA", "(Ljava/lang/String;JLcom/discord/primitives/GuildId;Lcom/discord/primitives/UserId;Lcom/discord/chat/bridge/structurabletext/StructurableText;Ljava/lang/String;Ljava/lang/String;ILjava/lang/Integer;ZLjava/lang/String;Ljava/lang/Boolean;)Lcom/discord/chat/bridge/automod/FlaggedMessageEmbed;", "equals", JankRecordStore.SCREEN_OTHER, "hashCode", "toString", "write$Self", "", "self", "output", "Lkotlinx/serialization/encoding/CompositeEncoder;", "serialDesc", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "write$Self$chat_release", "$serializer", "Companion", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final /* data */ class FlaggedMessageEmbed {

    /* renamed from: Companion, reason: from kotlin metadata */
    @NotNull
    public static final Companion INSTANCE = new Companion(null);
    private final String avatarURL;
    private final long channelId;
    private final String channelName;
    private final Boolean communicationDisabled;
    private final StructurableText content;
    private final GuildId guildId;

    @NotNull
    private final String id;
    private final Integer roleColor;
    private final boolean shouldShowRoleDot;
    private final UserId userId;
    private final String username;
    private final int usernameColor;

    @Metadata(d1 = {"\u0000\u0016\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\f\u0010\u0004\u001a\b\u0012\u0004\u0012\u00020\u00060\u0005¨\u0006\u0007"}, d2 = {"Lcom/discord/chat/bridge/automod/FlaggedMessageEmbed$Companion;", "", "<init>", "()V", "serializer", "Lkotlinx/serialization/KSerializer;", "Lcom/discord/chat/bridge/automod/FlaggedMessageEmbed;", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final class Companion {
        private Companion() {
        }

        @NotNull
        public final KSerializer serializer() {
            return FlaggedMessageEmbed$$serializer.INSTANCE;
        }

        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }
    }

    public /* synthetic */ FlaggedMessageEmbed(int i5, String str, ChannelId channelId, GuildId guildId, UserId userId, StructurableText structurableText, String str2, String str3, int i6, Integer num, boolean z5, String str4, Boolean bool, SerializationConstructorMarker serializationConstructorMarker, DefaultConstructorMarker defaultConstructorMarker) {
        this(i5, str, channelId, guildId, userId, structurableText, str2, str3, i6, num, z5, str4, bool, serializationConstructorMarker);
    }

    /* renamed from: copy-Yv-vreA$default, reason: not valid java name */
    public static /* synthetic */ FlaggedMessageEmbed m285copyYvvreA$default(FlaggedMessageEmbed flaggedMessageEmbed, String str, long j, GuildId guildId, UserId userId, StructurableText structurableText, String str2, String str3, int i5, Integer num, boolean z5, String str4, Boolean bool, int i6, Object obj) {
        if ((i6 & 1) != 0) {
            str = flaggedMessageEmbed.id;
        }
        return flaggedMessageEmbed.m290copyYvvreA(str, (i6 & 2) != 0 ? flaggedMessageEmbed.channelId : j, (i6 & 4) != 0 ? flaggedMessageEmbed.guildId : guildId, (i6 & 8) != 0 ? flaggedMessageEmbed.userId : userId, (i6 & 16) != 0 ? flaggedMessageEmbed.content : structurableText, (i6 & 32) != 0 ? flaggedMessageEmbed.channelName : str2, (i6 & 64) != 0 ? flaggedMessageEmbed.username : str3, (i6 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT) != 0 ? flaggedMessageEmbed.usernameColor : i5, (i6 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER) != 0 ? flaggedMessageEmbed.roleColor : num, (i6 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING) != 0 ? flaggedMessageEmbed.shouldShowRoleDot : z5, (i6 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_OVERFLOW_INSET) != 0 ? flaggedMessageEmbed.avatarURL : str4, (i6 & RecyclerView.ItemAnimator.FLAG_MOVED) != 0 ? flaggedMessageEmbed.communicationDisabled : bool);
    }

    public static final /* synthetic */ void write$Self$chat_release(FlaggedMessageEmbed self, CompositeEncoder output, SerialDescriptor serialDesc) {
        output.g(serialDesc, 0, MessageId$$serializer.INSTANCE, MessageId.m1189boximpl(self.id));
        output.g(serialDesc, 1, ChannelId$$serializer.INSTANCE, ChannelId.m1163boximpl(self.channelId));
        if (output.I(serialDesc, 2) || self.guildId != null) {
            output.z(serialDesc, 2, GuildId$$serializer.INSTANCE, self.guildId);
        }
        if (output.I(serialDesc, 3) || self.userId != null) {
            output.z(serialDesc, 3, UserId$$serializer.INSTANCE, self.userId);
        }
        if (output.I(serialDesc, 4) || self.content != null) {
            output.z(serialDesc, 4, StructurableTextSerializer.INSTANCE, self.content);
        }
        if (output.I(serialDesc, 5) || self.channelName != null) {
            output.z(serialDesc, 5, v1.a, self.channelName);
        }
        if (output.I(serialDesc, 6) || self.username != null) {
            output.z(serialDesc, 6, v1.a, self.username);
        }
        output.n(7, self.usernameColor, serialDesc);
        if (output.I(serialDesc, 8) || self.roleColor != null) {
            output.z(serialDesc, 8, o0.a, self.roleColor);
        }
        output.x(serialDesc, 9, self.shouldShowRoleDot);
        if (output.I(serialDesc, 10) || self.avatarURL != null) {
            output.z(serialDesc, 10, v1.a, self.avatarURL);
        }
        if (!output.I(serialDesc, 11) && Intrinsics.areEqual(self.communicationDisabled, Boolean.FALSE)) {
            return;
        }
        output.z(serialDesc, 11, g.a, self.communicationDisabled);
    }

    @NotNull
    /* renamed from: component1-3Eiw7ao, reason: not valid java name and from getter */
    public final String getId() {
        return this.id;
    }

    /* renamed from: component10, reason: from getter */
    public final boolean getShouldShowRoleDot() {
        return this.shouldShowRoleDot;
    }

    /* renamed from: component11, reason: from getter */
    public final String getAvatarURL() {
        return this.avatarURL;
    }

    /* renamed from: component12, reason: from getter */
    public final Boolean getCommunicationDisabled() {
        return this.communicationDisabled;
    }

    /* renamed from: component2-o4g7jtM, reason: not valid java name and from getter */
    public final long getChannelId() {
        return this.channelId;
    }

    /* renamed from: component3-qOKuAAo, reason: not valid java name and from getter */
    public final GuildId getGuildId() {
        return this.guildId;
    }

    /* renamed from: component4-wUX8bhU, reason: not valid java name and from getter */
    public final UserId getUserId() {
        return this.userId;
    }

    /* renamed from: component5, reason: from getter */
    public final StructurableText getContent() {
        return this.content;
    }

    /* renamed from: component6, reason: from getter */
    public final String getChannelName() {
        return this.channelName;
    }

    /* renamed from: component7, reason: from getter */
    public final String getUsername() {
        return this.username;
    }

    /* renamed from: component8, reason: from getter */
    public final int getUsernameColor() {
        return this.usernameColor;
    }

    /* renamed from: component9, reason: from getter */
    public final Integer getRoleColor() {
        return this.roleColor;
    }

    @NotNull
    /* renamed from: copy-Yv-vreA, reason: not valid java name */
    public final FlaggedMessageEmbed m290copyYvvreA(@NotNull String id2, long channelId, GuildId guildId, UserId userId, StructurableText content, String channelName, String username, int usernameColor, Integer roleColor, boolean shouldShowRoleDot, String avatarURL, Boolean communicationDisabled) {
        Intrinsics.checkNotNullParameter(id2, "id");
        return new FlaggedMessageEmbed(id2, channelId, guildId, userId, content, channelName, username, usernameColor, roleColor, shouldShowRoleDot, avatarURL, communicationDisabled, null);
    }

    public boolean equals(Object other) {
        if (this == other) {
            return true;
        }
        if (!(other instanceof FlaggedMessageEmbed)) {
            return false;
        }
        FlaggedMessageEmbed flaggedMessageEmbed = (FlaggedMessageEmbed) other;
        return MessageId.m1193equalsimpl0(this.id, flaggedMessageEmbed.id) && ChannelId.m1167equalsimpl0(this.channelId, flaggedMessageEmbed.channelId) && Intrinsics.areEqual(this.guildId, flaggedMessageEmbed.guildId) && Intrinsics.areEqual(this.userId, flaggedMessageEmbed.userId) && Intrinsics.areEqual(this.content, flaggedMessageEmbed.content) && Intrinsics.areEqual(this.channelName, flaggedMessageEmbed.channelName) && Intrinsics.areEqual(this.username, flaggedMessageEmbed.username) && this.usernameColor == flaggedMessageEmbed.usernameColor && Intrinsics.areEqual(this.roleColor, flaggedMessageEmbed.roleColor) && this.shouldShowRoleDot == flaggedMessageEmbed.shouldShowRoleDot && Intrinsics.areEqual(this.avatarURL, flaggedMessageEmbed.avatarURL) && Intrinsics.areEqual(this.communicationDisabled, flaggedMessageEmbed.communicationDisabled);
    }

    public final String getAvatarURL() {
        return this.avatarURL;
    }

    /* renamed from: getChannelId-o4g7jtM, reason: not valid java name */
    public final long m291getChannelIdo4g7jtM() {
        return this.channelId;
    }

    public final String getChannelName() {
        return this.channelName;
    }

    public final Boolean getCommunicationDisabled() {
        return this.communicationDisabled;
    }

    public final StructurableText getContent() {
        return this.content;
    }

    /* renamed from: getGuildId-qOKuAAo, reason: not valid java name */
    public final GuildId m292getGuildIdqOKuAAo() {
        return this.guildId;
    }

    @NotNull
    /* renamed from: getId-3Eiw7ao, reason: not valid java name */
    public final String m293getId3Eiw7ao() {
        return this.id;
    }

    public final Integer getRoleColor() {
        return this.roleColor;
    }

    public final boolean getShouldShowRoleDot() {
        return this.shouldShowRoleDot;
    }

    /* renamed from: getUserId-wUX8bhU, reason: not valid java name */
    public final UserId m294getUserIdwUX8bhU() {
        return this.userId;
    }

    public final String getUsername() {
        return this.username;
    }

    public final int getUsernameColor() {
        return this.usernameColor;
    }

    public int hashCode() {
        int e9 = d.e(this.channelId, MessageId.m1194hashCodeimpl(this.id) * 31, 31);
        GuildId guildId = this.guildId;
        int m1181hashCodeimpl = (e9 + (guildId == null ? 0 : GuildId.m1181hashCodeimpl(guildId.m1185unboximpl()))) * 31;
        UserId userId = this.userId;
        int m1246hashCodeimpl = (m1181hashCodeimpl + (userId == null ? 0 : UserId.m1246hashCodeimpl(userId.m1250unboximpl()))) * 31;
        StructurableText structurableText = this.content;
        int hashCode = (m1246hashCodeimpl + (structurableText == null ? 0 : structurableText.hashCode())) * 31;
        String str = this.channelName;
        int hashCode2 = (hashCode + (str == null ? 0 : str.hashCode())) * 31;
        String str2 = this.username;
        int u5 = a.u(this.usernameColor, (hashCode2 + (str2 == null ? 0 : str2.hashCode())) * 31, 31);
        Integer num = this.roleColor;
        int d6 = d.d((u5 + (num == null ? 0 : num.hashCode())) * 31, 31, this.shouldShowRoleDot);
        String str3 = this.avatarURL;
        int hashCode3 = (d6 + (str3 == null ? 0 : str3.hashCode())) * 31;
        Boolean bool = this.communicationDisabled;
        return hashCode3 + (bool != null ? bool.hashCode() : 0);
    }

    @NotNull
    public String toString() {
        String m1196toStringimpl = MessageId.m1196toStringimpl(this.id);
        String m1170toStringimpl = ChannelId.m1170toStringimpl(this.channelId);
        GuildId guildId = this.guildId;
        UserId userId = this.userId;
        StructurableText structurableText = this.content;
        String str = this.channelName;
        String str2 = this.username;
        int i5 = this.usernameColor;
        Integer num = this.roleColor;
        boolean z5 = this.shouldShowRoleDot;
        String str3 = this.avatarURL;
        Boolean bool = this.communicationDisabled;
        StringBuilder t5 = a3.e.t("FlaggedMessageEmbed(id=", m1196toStringimpl, ", channelId=", m1170toStringimpl, ", guildId=");
        t5.append(guildId);
        t5.append(", userId=");
        t5.append(userId);
        t5.append(", content=");
        t5.append(structurableText);
        t5.append(", channelName=");
        t5.append(str);
        t5.append(", username=");
        t5.append(str2);
        t5.append(", usernameColor=");
        t5.append(i5);
        t5.append(", roleColor=");
        t5.append(num);
        t5.append(", shouldShowRoleDot=");
        t5.append(z5);
        t5.append(", avatarURL=");
        t5.append(str3);
        t5.append(", communicationDisabled=");
        t5.append(bool);
        t5.append(")");
        return t5.toString();
    }

    public /* synthetic */ FlaggedMessageEmbed(String str, long j, GuildId guildId, UserId userId, StructurableText structurableText, String str2, String str3, int i5, Integer num, boolean z5, String str4, Boolean bool, DefaultConstructorMarker defaultConstructorMarker) {
        this(str, j, guildId, userId, structurableText, str2, str3, i5, num, z5, str4, bool);
    }

    private /* synthetic */ FlaggedMessageEmbed(int i5, String str, ChannelId channelId, GuildId guildId, UserId userId, StructurableText structurableText, String str2, String str3, int i6, Integer num, boolean z5, String str4, Boolean bool, SerializationConstructorMarker serializationConstructorMarker) {
        if (643 != (i5 & 643)) {
            h1.l(i5, 643, FlaggedMessageEmbed$$serializer.INSTANCE.getDescriptor());
            throw null;
        }
        this.id = str;
        this.channelId = channelId.m1172unboximpl();
        if ((i5 & 4) == 0) {
            this.guildId = null;
        } else {
            this.guildId = guildId;
        }
        if ((i5 & 8) == 0) {
            this.userId = null;
        } else {
            this.userId = userId;
        }
        if ((i5 & 16) == 0) {
            this.content = null;
        } else {
            this.content = structurableText;
        }
        if ((i5 & 32) == 0) {
            this.channelName = null;
        } else {
            this.channelName = str2;
        }
        if ((i5 & 64) == 0) {
            this.username = null;
        } else {
            this.username = str3;
        }
        this.usernameColor = i6;
        if ((i5 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER) == 0) {
            this.roleColor = null;
        } else {
            this.roleColor = num;
        }
        this.shouldShowRoleDot = z5;
        if ((i5 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_OVERFLOW_INSET) == 0) {
            this.avatarURL = null;
        } else {
            this.avatarURL = str4;
        }
        this.communicationDisabled = (i5 & RecyclerView.ItemAnimator.FLAG_MOVED) == 0 ? Boolean.FALSE : bool;
    }

    private FlaggedMessageEmbed(String id2, long j, GuildId guildId, UserId userId, StructurableText structurableText, String str, String str2, int i5, Integer num, boolean z5, String str3, Boolean bool) {
        Intrinsics.checkNotNullParameter(id2, "id");
        this.id = id2;
        this.channelId = j;
        this.guildId = guildId;
        this.userId = userId;
        this.content = structurableText;
        this.channelName = str;
        this.username = str2;
        this.usernameColor = i5;
        this.roleColor = num;
        this.shouldShowRoleDot = z5;
        this.avatarURL = str3;
        this.communicationDisabled = bool;
    }

    public /* synthetic */ FlaggedMessageEmbed(String str, long j, GuildId guildId, UserId userId, StructurableText structurableText, String str2, String str3, int i5, Integer num, boolean z5, String str4, Boolean bool, int i6, DefaultConstructorMarker defaultConstructorMarker) {
        this(str, j, (i6 & 4) != 0 ? null : guildId, (i6 & 8) != 0 ? null : userId, (i6 & 16) != 0 ? null : structurableText, (i6 & 32) != 0 ? null : str2, (i6 & 64) != 0 ? null : str3, i5, (i6 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER) != 0 ? null : num, z5, (i6 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_OVERFLOW_INSET) != 0 ? null : str4, (i6 & RecyclerView.ItemAnimator.FLAG_MOVED) != 0 ? Boolean.FALSE : bool, null);
    }
}
