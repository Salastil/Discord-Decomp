package com.discord.chat.reactevents;

import bs.v1;
import com.discord.jank_stats.JankRecordStore;
import com.discord.react.utilities.NativeMapExtensionsKt;
import com.discord.reactevents.ReactEvent;
import com.facebook.react.bridge.WritableMap;
import kotlin.Metadata;
import kotlin.Pair;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import kotlinx.serialization.KSerializer;
import kotlinx.serialization.descriptors.SerialDescriptor;
import kotlinx.serialization.encoding.CompositeEncoder;
import kotlinx.serialization.internal.SerializationConstructorMarker;
import org.jetbrains.annotations.NotNull;
import xr.e;

@e
@Metadata(d1 = {"\u0000L\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0006\n\u0002\u0010\b\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0007\n\u0002\u0018\u0002\n\u0002\b\u0006\n\u0002\u0010\u000b\n\u0000\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0004\b\u0081\b\u0018\u0000 )2\u00020\u0001:\u0002()B7\u0012\n\b\u0002\u0010\u0002\u001a\u0004\u0018\u00010\u0003\u0012\n\b\u0002\u0010\u0004\u001a\u0004\u0018\u00010\u0003\u0012\n\b\u0002\u0010\u0005\u001a\u0004\u0018\u00010\u0003\u0012\n\b\u0002\u0010\u0006\u001a\u0004\u0018\u00010\u0003¢\u0006\u0004\b\u0007\u0010\bBC\b\u0010\u0012\u0006\u0010\t\u001a\u00020\n\u0012\b\u0010\u0002\u001a\u0004\u0018\u00010\u0003\u0012\b\u0010\u0004\u001a\u0004\u0018\u00010\u0003\u0012\b\u0010\u0005\u001a\u0004\u0018\u00010\u0003\u0012\b\u0010\u0006\u001a\u0004\u0018\u00010\u0003\u0012\b\u0010\u000b\u001a\u0004\u0018\u00010\f¢\u0006\u0004\b\u0007\u0010\rJ\b\u0010\u0013\u001a\u00020\u0014H\u0016J\u000b\u0010\u0015\u001a\u0004\u0018\u00010\u0003HÆ\u0003J\u000b\u0010\u0016\u001a\u0004\u0018\u00010\u0003HÆ\u0003J\u000b\u0010\u0017\u001a\u0004\u0018\u00010\u0003HÆ\u0003J\u000b\u0010\u0018\u001a\u0004\u0018\u00010\u0003HÆ\u0003J9\u0010\u0019\u001a\u00020\u00002\n\b\u0002\u0010\u0002\u001a\u0004\u0018\u00010\u00032\n\b\u0002\u0010\u0004\u001a\u0004\u0018\u00010\u00032\n\b\u0002\u0010\u0005\u001a\u0004\u0018\u00010\u00032\n\b\u0002\u0010\u0006\u001a\u0004\u0018\u00010\u0003HÆ\u0001J\u0013\u0010\u001a\u001a\u00020\u001b2\b\u0010\u001c\u001a\u0004\u0018\u00010\u001dHÖ\u0003J\t\u0010\u001e\u001a\u00020\nHÖ\u0001J\t\u0010\u001f\u001a\u00020\u0003HÖ\u0001J%\u0010 \u001a\u00020!2\u0006\u0010\"\u001a\u00020\u00002\u0006\u0010#\u001a\u00020$2\u0006\u0010%\u001a\u00020&H\u0001¢\u0006\u0002\b'R\u0013\u0010\u0002\u001a\u0004\u0018\u00010\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u000e\u0010\u000fR\u0013\u0010\u0004\u001a\u0004\u0018\u00010\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0010\u0010\u000fR\u0013\u0010\u0005\u001a\u0004\u0018\u00010\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0011\u0010\u000fR\u0013\u0010\u0006\u001a\u0004\u0018\u00010\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0012\u0010\u000f¨\u0006*"}, d2 = {"Lcom/discord/chat/reactevents/LongPressChannelData;", "Lcom/discord/reactevents/ReactEvent;", "guildId", "", "channelId", "messageId", "originalLink", "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", "seen0", "", "serializationConstructorMarker", "Lkotlinx/serialization/internal/SerializationConstructorMarker;", "(ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lkotlinx/serialization/internal/SerializationConstructorMarker;)V", "getGuildId", "()Ljava/lang/String;", "getChannelId", "getMessageId", "getOriginalLink", "serialize", "Lcom/facebook/react/bridge/WritableMap;", "component1", "component2", "component3", "component4", "copy", "equals", "", JankRecordStore.SCREEN_OTHER, "", "hashCode", "toString", "write$Self", "", "self", "output", "Lkotlinx/serialization/encoding/CompositeEncoder;", "serialDesc", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "write$Self$chat_release", "$serializer", "Companion", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final /* data */ class LongPressChannelData implements ReactEvent {

    /* renamed from: Companion, reason: from kotlin metadata */
    @NotNull
    public static final Companion INSTANCE = new Companion(null);
    private final String channelId;
    private final String guildId;
    private final String messageId;
    private final String originalLink;

    @Metadata(d1 = {"\u0000\u0016\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\f\u0010\u0004\u001a\b\u0012\u0004\u0012\u00020\u00060\u0005¨\u0006\u0007"}, d2 = {"Lcom/discord/chat/reactevents/LongPressChannelData$Companion;", "", "<init>", "()V", "serializer", "Lkotlinx/serialization/KSerializer;", "Lcom/discord/chat/reactevents/LongPressChannelData;", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final class Companion {
        private Companion() {
        }

        @NotNull
        public final KSerializer serializer() {
            return LongPressChannelData$$serializer.INSTANCE;
        }

        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }
    }

    public LongPressChannelData() {
        this((String) null, (String) null, (String) null, (String) null, 15, (DefaultConstructorMarker) null);
    }

    public static /* synthetic */ LongPressChannelData copy$default(LongPressChannelData longPressChannelData, String str, String str2, String str3, String str4, int i5, Object obj) {
        if ((i5 & 1) != 0) {
            str = longPressChannelData.guildId;
        }
        if ((i5 & 2) != 0) {
            str2 = longPressChannelData.channelId;
        }
        if ((i5 & 4) != 0) {
            str3 = longPressChannelData.messageId;
        }
        if ((i5 & 8) != 0) {
            str4 = longPressChannelData.originalLink;
        }
        return longPressChannelData.copy(str, str2, str3, str4);
    }

    public static final /* synthetic */ void write$Self$chat_release(LongPressChannelData self, CompositeEncoder output, SerialDescriptor serialDesc) {
        if (output.I(serialDesc, 0) || self.guildId != null) {
            output.z(serialDesc, 0, v1.a, self.guildId);
        }
        if (output.I(serialDesc, 1) || self.channelId != null) {
            output.z(serialDesc, 1, v1.a, self.channelId);
        }
        if (output.I(serialDesc, 2) || self.messageId != null) {
            output.z(serialDesc, 2, v1.a, self.messageId);
        }
        if (!output.I(serialDesc, 3) && self.originalLink == null) {
            return;
        }
        output.z(serialDesc, 3, v1.a, self.originalLink);
    }

    /* renamed from: component1, reason: from getter */
    public final String getGuildId() {
        return this.guildId;
    }

    /* renamed from: component2, reason: from getter */
    public final String getChannelId() {
        return this.channelId;
    }

    /* renamed from: component3, reason: from getter */
    public final String getMessageId() {
        return this.messageId;
    }

    /* renamed from: component4, reason: from getter */
    public final String getOriginalLink() {
        return this.originalLink;
    }

    @NotNull
    public final LongPressChannelData copy(String guildId, String channelId, String messageId, String originalLink) {
        return new LongPressChannelData(guildId, channelId, messageId, originalLink);
    }

    public boolean equals(Object other) {
        if (this == other) {
            return true;
        }
        if (!(other instanceof LongPressChannelData)) {
            return false;
        }
        LongPressChannelData longPressChannelData = (LongPressChannelData) other;
        return Intrinsics.areEqual(this.guildId, longPressChannelData.guildId) && Intrinsics.areEqual(this.channelId, longPressChannelData.channelId) && Intrinsics.areEqual(this.messageId, longPressChannelData.messageId) && Intrinsics.areEqual(this.originalLink, longPressChannelData.originalLink);
    }

    public final String getChannelId() {
        return this.channelId;
    }

    public final String getGuildId() {
        return this.guildId;
    }

    public final String getMessageId() {
        return this.messageId;
    }

    public final String getOriginalLink() {
        return this.originalLink;
    }

    public int hashCode() {
        String str = this.guildId;
        int hashCode = (str == null ? 0 : str.hashCode()) * 31;
        String str2 = this.channelId;
        int hashCode2 = (hashCode + (str2 == null ? 0 : str2.hashCode())) * 31;
        String str3 = this.messageId;
        int hashCode3 = (hashCode2 + (str3 == null ? 0 : str3.hashCode())) * 31;
        String str4 = this.originalLink;
        return hashCode3 + (str4 != null ? str4.hashCode() : 0);
    }

    @Override // com.discord.reactevents.ReactEvent
    @NotNull
    /* renamed from: serialize */
    public WritableMap getData() {
        return NativeMapExtensionsKt.nativeMapOf(new Pair("data", NativeMapExtensionsKt.nativeMapOf(new Pair("guildId", this.guildId), new Pair("channelId", this.channelId), new Pair("messageId", this.messageId), new Pair("originalLink", this.originalLink))));
    }

    @NotNull
    public String toString() {
        String str = this.guildId;
        String str2 = this.channelId;
        return com.discord.chat.bridge.botuikit.a.k(a3.e.t("LongPressChannelData(guildId=", str, ", channelId=", str2, ", messageId="), this.messageId, ", originalLink=", this.originalLink, ")");
    }

    public /* synthetic */ LongPressChannelData(int i5, String str, String str2, String str3, String str4, SerializationConstructorMarker serializationConstructorMarker) {
        if ((i5 & 1) == 0) {
            this.guildId = null;
        } else {
            this.guildId = str;
        }
        if ((i5 & 2) == 0) {
            this.channelId = null;
        } else {
            this.channelId = str2;
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
    }

    public LongPressChannelData(String str, String str2, String str3, String str4) {
        this.guildId = str;
        this.channelId = str2;
        this.messageId = str3;
        this.originalLink = str4;
    }

    public /* synthetic */ LongPressChannelData(String str, String str2, String str3, String str4, int i5, DefaultConstructorMarker defaultConstructorMarker) {
        this((i5 & 1) != 0 ? null : str, (i5 & 2) != 0 ? null : str2, (i5 & 4) != 0 ? null : str3, (i5 & 8) != 0 ? null : str4);
    }
}
