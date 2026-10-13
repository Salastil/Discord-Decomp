package com.discord.chat.reactevents;

import bs.h1;
import bs.v1;
import com.discord.jank_stats.JankRecordStore;
import com.discord.reactevents.ReactEvent;
import com.facebook.react.bridge.WritableMap;
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
@Metadata(d1 = {"\u0000D\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0002\b\b\n\u0002\u0010\b\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0010\n\u0002\u0010\u000b\n\u0000\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0004\b\u0081\b\u0018\u0000 -2\u00020\u0001:\u0002,-BE\u0012\b\u0010\u0002\u001a\u0004\u0018\u00010\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0003\u0012\b\u0010\u0005\u001a\u0004\u0018\u00010\u0003\u0012\b\u0010\u0006\u001a\u0004\u0018\u00010\u0003\u0012\n\b\u0002\u0010\u0007\u001a\u0004\u0018\u00010\u0003\u0012\n\b\u0002\u0010\b\u001a\u0004\u0018\u00010\u0003¢\u0006\u0004\b\t\u0010\nBW\b\u0010\u0012\u0006\u0010\u000b\u001a\u00020\f\u0012\b\u0010\u0002\u001a\u0004\u0018\u00010\u0003\u0012\b\u0010\u0004\u001a\u0004\u0018\u00010\u0003\u0012\b\u0010\u0005\u001a\u0004\u0018\u00010\u0003\u0012\b\u0010\u0006\u001a\u0004\u0018\u00010\u0003\u0012\b\u0010\u0007\u001a\u0004\u0018\u00010\u0003\u0012\b\u0010\b\u001a\u0004\u0018\u00010\u0003\u0012\b\u0010\r\u001a\u0004\u0018\u00010\u000e¢\u0006\u0004\b\t\u0010\u000fJ\u000b\u0010\u0017\u001a\u0004\u0018\u00010\u0003HÆ\u0003J\t\u0010\u0018\u001a\u00020\u0003HÆ\u0003J\u000b\u0010\u0019\u001a\u0004\u0018\u00010\u0003HÆ\u0003J\u000b\u0010\u001a\u001a\u0004\u0018\u00010\u0003HÆ\u0003J\u000b\u0010\u001b\u001a\u0004\u0018\u00010\u0003HÆ\u0003J\u000b\u0010\u001c\u001a\u0004\u0018\u00010\u0003HÆ\u0003JO\u0010\u001d\u001a\u00020\u00002\n\b\u0002\u0010\u0002\u001a\u0004\u0018\u00010\u00032\b\b\u0002\u0010\u0004\u001a\u00020\u00032\n\b\u0002\u0010\u0005\u001a\u0004\u0018\u00010\u00032\n\b\u0002\u0010\u0006\u001a\u0004\u0018\u00010\u00032\n\b\u0002\u0010\u0007\u001a\u0004\u0018\u00010\u00032\n\b\u0002\u0010\b\u001a\u0004\u0018\u00010\u0003HÆ\u0001J\u0013\u0010\u001e\u001a\u00020\u001f2\b\u0010 \u001a\u0004\u0018\u00010!HÖ\u0003J\t\u0010\"\u001a\u00020\fHÖ\u0001J\t\u0010#\u001a\u00020\u0003HÖ\u0001J%\u0010$\u001a\u00020%2\u0006\u0010&\u001a\u00020\u00002\u0006\u0010'\u001a\u00020(2\u0006\u0010)\u001a\u00020*H\u0001¢\u0006\u0002\b+R\u0013\u0010\u0002\u001a\u0004\u0018\u00010\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0010\u0010\u0011R\u0011\u0010\u0004\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0012\u0010\u0011R\u0013\u0010\u0005\u001a\u0004\u0018\u00010\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0013\u0010\u0011R\u0013\u0010\u0006\u001a\u0004\u0018\u00010\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0014\u0010\u0011R\u0013\u0010\u0007\u001a\u0004\u0018\u00010\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0015\u0010\u0011R\u0013\u0010\b\u001a\u0004\u0018\u00010\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0016\u0010\u0011¨\u0006."}, d2 = {"Lcom/discord/chat/reactevents/TapMentionData;", "Lcom/discord/reactevents/ReactEvent;", "userId", "", "channelId", "roleName", "parsedUserId", "roleId", "guildId", "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", "seen0", "", "serializationConstructorMarker", "Lkotlinx/serialization/internal/SerializationConstructorMarker;", "(ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lkotlinx/serialization/internal/SerializationConstructorMarker;)V", "getUserId", "()Ljava/lang/String;", "getChannelId", "getRoleName", "getParsedUserId", "getRoleId", "getGuildId", "component1", "component2", "component3", "component4", "component5", "component6", "copy", "equals", "", JankRecordStore.SCREEN_OTHER, "", "hashCode", "toString", "write$Self", "", "self", "output", "Lkotlinx/serialization/encoding/CompositeEncoder;", "serialDesc", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "write$Self$chat_release", "$serializer", "Companion", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final /* data */ class TapMentionData implements ReactEvent {

    /* renamed from: Companion, reason: from kotlin metadata */
    @NotNull
    public static final Companion INSTANCE = new Companion(null);

    @NotNull
    private final String channelId;
    private final String guildId;
    private final String parsedUserId;
    private final String roleId;
    private final String roleName;
    private final String userId;

    @Metadata(d1 = {"\u0000\u0016\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\f\u0010\u0004\u001a\b\u0012\u0004\u0012\u00020\u00060\u0005¨\u0006\u0007"}, d2 = {"Lcom/discord/chat/reactevents/TapMentionData$Companion;", "", "<init>", "()V", "serializer", "Lkotlinx/serialization/KSerializer;", "Lcom/discord/chat/reactevents/TapMentionData;", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final class Companion {
        private Companion() {
        }

        @NotNull
        public final KSerializer serializer() {
            return TapMentionData$$serializer.INSTANCE;
        }

        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }
    }

    public /* synthetic */ TapMentionData(int i5, String str, String str2, String str3, String str4, String str5, String str6, SerializationConstructorMarker serializationConstructorMarker) {
        if (15 != (i5 & 15)) {
            h1.l(i5, 15, TapMentionData$$serializer.INSTANCE.getDescriptor());
            throw null;
        }
        this.userId = str;
        this.channelId = str2;
        this.roleName = str3;
        this.parsedUserId = str4;
        if ((i5 & 16) == 0) {
            this.roleId = null;
        } else {
            this.roleId = str5;
        }
        if ((i5 & 32) == 0) {
            this.guildId = null;
        } else {
            this.guildId = str6;
        }
    }

    public static /* synthetic */ TapMentionData copy$default(TapMentionData tapMentionData, String str, String str2, String str3, String str4, String str5, String str6, int i5, Object obj) {
        if ((i5 & 1) != 0) {
            str = tapMentionData.userId;
        }
        if ((i5 & 2) != 0) {
            str2 = tapMentionData.channelId;
        }
        if ((i5 & 4) != 0) {
            str3 = tapMentionData.roleName;
        }
        if ((i5 & 8) != 0) {
            str4 = tapMentionData.parsedUserId;
        }
        if ((i5 & 16) != 0) {
            str5 = tapMentionData.roleId;
        }
        if ((i5 & 32) != 0) {
            str6 = tapMentionData.guildId;
        }
        String str7 = str5;
        String str8 = str6;
        return tapMentionData.copy(str, str2, str3, str4, str7, str8);
    }

    public static final /* synthetic */ void write$Self$chat_release(TapMentionData self, CompositeEncoder output, SerialDescriptor serialDesc) {
        v1 v1Var = v1.a;
        output.z(serialDesc, 0, v1Var, self.userId);
        output.y(serialDesc, 1, self.channelId);
        output.z(serialDesc, 2, v1Var, self.roleName);
        output.z(serialDesc, 3, v1Var, self.parsedUserId);
        if (output.I(serialDesc, 4) || self.roleId != null) {
            output.z(serialDesc, 4, v1Var, self.roleId);
        }
        if (!output.I(serialDesc, 5) && self.guildId == null) {
            return;
        }
        output.z(serialDesc, 5, v1Var, self.guildId);
    }

    /* renamed from: component1, reason: from getter */
    public final String getUserId() {
        return this.userId;
    }

    @NotNull
    /* renamed from: component2, reason: from getter */
    public final String getChannelId() {
        return this.channelId;
    }

    /* renamed from: component3, reason: from getter */
    public final String getRoleName() {
        return this.roleName;
    }

    /* renamed from: component4, reason: from getter */
    public final String getParsedUserId() {
        return this.parsedUserId;
    }

    /* renamed from: component5, reason: from getter */
    public final String getRoleId() {
        return this.roleId;
    }

    /* renamed from: component6, reason: from getter */
    public final String getGuildId() {
        return this.guildId;
    }

    @NotNull
    public final TapMentionData copy(String userId, @NotNull String channelId, String roleName, String parsedUserId, String roleId, String guildId) {
        Intrinsics.checkNotNullParameter(channelId, "channelId");
        return new TapMentionData(userId, channelId, roleName, parsedUserId, roleId, guildId);
    }

    public boolean equals(Object other) {
        if (this == other) {
            return true;
        }
        if (!(other instanceof TapMentionData)) {
            return false;
        }
        TapMentionData tapMentionData = (TapMentionData) other;
        return Intrinsics.areEqual(this.userId, tapMentionData.userId) && Intrinsics.areEqual(this.channelId, tapMentionData.channelId) && Intrinsics.areEqual(this.roleName, tapMentionData.roleName) && Intrinsics.areEqual(this.parsedUserId, tapMentionData.parsedUserId) && Intrinsics.areEqual(this.roleId, tapMentionData.roleId) && Intrinsics.areEqual(this.guildId, tapMentionData.guildId);
    }

    @NotNull
    public final String getChannelId() {
        return this.channelId;
    }

    public final String getGuildId() {
        return this.guildId;
    }

    public final String getParsedUserId() {
        return this.parsedUserId;
    }

    public final String getRoleId() {
        return this.roleId;
    }

    public final String getRoleName() {
        return this.roleName;
    }

    public final String getUserId() {
        return this.userId;
    }

    public int hashCode() {
        String str = this.userId;
        int d6 = a3.e.d((str == null ? 0 : str.hashCode()) * 31, 31, this.channelId);
        String str2 = this.roleName;
        int hashCode = (d6 + (str2 == null ? 0 : str2.hashCode())) * 31;
        String str3 = this.parsedUserId;
        int hashCode2 = (hashCode + (str3 == null ? 0 : str3.hashCode())) * 31;
        String str4 = this.roleId;
        int hashCode3 = (hashCode2 + (str4 == null ? 0 : str4.hashCode())) * 31;
        String str5 = this.guildId;
        return hashCode3 + (str5 != null ? str5.hashCode() : 0);
    }

    @Override // com.discord.reactevents.ReactEvent
    @NotNull
    /* renamed from: serialize */
    public WritableMap getData() {
        return ReactEvent.DefaultImpls.serialize(this);
    }

    @NotNull
    public String toString() {
        String str = this.userId;
        String str2 = this.channelId;
        String str3 = this.roleName;
        String str4 = this.parsedUserId;
        String str5 = this.roleId;
        String str6 = this.guildId;
        StringBuilder t5 = a3.e.t("TapMentionData(userId=", str, ", channelId=", str2, ", roleName=");
        a3.e.A(t5, str3, ", parsedUserId=", str4, ", roleId=");
        return com.discord.chat.bridge.botuikit.a.k(t5, str5, ", guildId=", str6, ")");
    }

    public TapMentionData(String str, @NotNull String channelId, String str2, String str3, String str4, String str5) {
        Intrinsics.checkNotNullParameter(channelId, "channelId");
        this.userId = str;
        this.channelId = channelId;
        this.roleName = str2;
        this.parsedUserId = str3;
        this.roleId = str4;
        this.guildId = str5;
    }

    public /* synthetic */ TapMentionData(String str, String str2, String str3, String str4, String str5, String str6, int i5, DefaultConstructorMarker defaultConstructorMarker) {
        this(str, str2, str3, str4, (i5 & 16) != 0 ? null : str5, (i5 & 32) != 0 ? null : str6);
    }
}
