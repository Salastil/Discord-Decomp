package com.discord.chat.reactevents;

import bs.h1;
import bs.v1;
import com.discord.jank_stats.JankRecordStore;
import com.discord.primitives.ChannelId;
import com.discord.primitives.ChannelId$$serializer;
import com.discord.primitives.MessageId;
import com.discord.primitives.MessageId$$serializer;
import com.discord.reactevents.ReactEvent;
import com.facebook.react.bridge.WritableMap;
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
@Metadata(d1 = {"\u0000P\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0003\n\u0002\u0010\b\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0011\n\u0002\u0010\u000b\n\u0000\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0004\b\u0087\b\u0018\u0000 -2\u00020\u0001:\u0002,-B!\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005\u0012\b\u0010\u0006\u001a\u0004\u0018\u00010\u0007¢\u0006\u0004\b\b\u0010\tB9\b\u0010\u0012\u0006\u0010\n\u001a\u00020\u000b\u0012\b\u0010\u0002\u001a\u0004\u0018\u00010\u0003\u0012\b\u0010\u0004\u001a\u0004\u0018\u00010\u0005\u0012\b\u0010\u0006\u001a\u0004\u0018\u00010\u0007\u0012\b\u0010\f\u001a\u0004\u0018\u00010\r¢\u0006\u0004\b\b\u0010\u000eJ\u0010\u0010\u0016\u001a\u00020\u0003HÆ\u0003¢\u0006\u0004\b\u0017\u0010\u0010J\u0010\u0010\u0018\u001a\u00020\u0005HÆ\u0003¢\u0006\u0004\b\u0019\u0010\u0013J\u000b\u0010\u001a\u001a\u0004\u0018\u00010\u0007HÆ\u0003J0\u0010\u001b\u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u00032\b\b\u0002\u0010\u0004\u001a\u00020\u00052\n\b\u0002\u0010\u0006\u001a\u0004\u0018\u00010\u0007HÆ\u0001¢\u0006\u0004\b\u001c\u0010\u001dJ\u0013\u0010\u001e\u001a\u00020\u001f2\b\u0010 \u001a\u0004\u0018\u00010!HÖ\u0003J\t\u0010\"\u001a\u00020\u000bHÖ\u0001J\t\u0010#\u001a\u00020\u0007HÖ\u0001J%\u0010$\u001a\u00020%2\u0006\u0010&\u001a\u00020\u00002\u0006\u0010'\u001a\u00020(2\u0006\u0010)\u001a\u00020*H\u0001¢\u0006\u0002\b+R\u0013\u0010\u0002\u001a\u00020\u0003¢\u0006\n\n\u0002\u0010\u0011\u001a\u0004\b\u000f\u0010\u0010R\u0013\u0010\u0004\u001a\u00020\u0005¢\u0006\n\n\u0002\u0010\u0014\u001a\u0004\b\u0012\u0010\u0013R\u0013\u0010\u0006\u001a\u0004\u0018\u00010\u0007¢\u0006\b\n\u0000\u001a\u0004\b\u0015\u0010\u0010¨\u0006."}, d2 = {"Lcom/discord/chat/reactevents/TapTagData;", "Lcom/discord/reactevents/ReactEvent;", "messageId", "Lcom/discord/primitives/MessageId;", "channelId", "Lcom/discord/primitives/ChannelId;", "tagType", "", "<init>", "(Ljava/lang/String;JLjava/lang/String;Lkotlin/jvm/internal/DefaultConstructorMarker;)V", "seen0", "", "serializationConstructorMarker", "Lkotlinx/serialization/internal/SerializationConstructorMarker;", "(ILjava/lang/String;Lcom/discord/primitives/ChannelId;Ljava/lang/String;Lkotlinx/serialization/internal/SerializationConstructorMarker;Lkotlin/jvm/internal/DefaultConstructorMarker;)V", "getMessageId-3Eiw7ao", "()Ljava/lang/String;", "Ljava/lang/String;", "getChannelId-o4g7jtM", "()J", "J", "getTagType", "component1", "component1-3Eiw7ao", "component2", "component2-o4g7jtM", "component3", "copy", "copy-Eqy5D80", "(Ljava/lang/String;JLjava/lang/String;)Lcom/discord/chat/reactevents/TapTagData;", "equals", "", JankRecordStore.SCREEN_OTHER, "", "hashCode", "toString", "write$Self", "", "self", "output", "Lkotlinx/serialization/encoding/CompositeEncoder;", "serialDesc", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "write$Self$chat_release", "$serializer", "Companion", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final /* data */ class TapTagData implements ReactEvent {

    /* renamed from: Companion, reason: from kotlin metadata */
    @NotNull
    public static final Companion INSTANCE = new Companion(null);
    private final long channelId;

    @NotNull
    private final String messageId;
    private final String tagType;

    @Metadata(d1 = {"\u0000\u0016\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\f\u0010\u0004\u001a\b\u0012\u0004\u0012\u00020\u00060\u0005¨\u0006\u0007"}, d2 = {"Lcom/discord/chat/reactevents/TapTagData$Companion;", "", "<init>", "()V", "serializer", "Lkotlinx/serialization/KSerializer;", "Lcom/discord/chat/reactevents/TapTagData;", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final class Companion {
        private Companion() {
        }

        @NotNull
        public final KSerializer serializer() {
            return TapTagData$$serializer.INSTANCE;
        }

        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }
    }

    public /* synthetic */ TapTagData(int i5, String str, ChannelId channelId, String str2, SerializationConstructorMarker serializationConstructorMarker, DefaultConstructorMarker defaultConstructorMarker) {
        this(i5, str, channelId, str2, serializationConstructorMarker);
    }

    /* renamed from: copy-Eqy5D80$default, reason: not valid java name */
    public static /* synthetic */ TapTagData m929copyEqy5D80$default(TapTagData tapTagData, String str, long j, String str2, int i5, Object obj) {
        if ((i5 & 1) != 0) {
            str = tapTagData.messageId;
        }
        if ((i5 & 2) != 0) {
            j = tapTagData.channelId;
        }
        if ((i5 & 4) != 0) {
            str2 = tapTagData.tagType;
        }
        return tapTagData.m932copyEqy5D80(str, j, str2);
    }

    public static final /* synthetic */ void write$Self$chat_release(TapTagData self, CompositeEncoder output, SerialDescriptor serialDesc) {
        output.g(serialDesc, 0, MessageId$$serializer.INSTANCE, MessageId.m1189boximpl(self.messageId));
        output.g(serialDesc, 1, ChannelId$$serializer.INSTANCE, ChannelId.m1163boximpl(self.channelId));
        output.z(serialDesc, 2, v1.a, self.tagType);
    }

    @NotNull
    /* renamed from: component1-3Eiw7ao, reason: not valid java name and from getter */
    public final String getMessageId() {
        return this.messageId;
    }

    /* renamed from: component2-o4g7jtM, reason: not valid java name and from getter */
    public final long getChannelId() {
        return this.channelId;
    }

    /* renamed from: component3, reason: from getter */
    public final String getTagType() {
        return this.tagType;
    }

    @NotNull
    /* renamed from: copy-Eqy5D80, reason: not valid java name */
    public final TapTagData m932copyEqy5D80(@NotNull String messageId, long channelId, String tagType) {
        Intrinsics.checkNotNullParameter(messageId, "messageId");
        return new TapTagData(messageId, channelId, tagType, null);
    }

    public boolean equals(Object other) {
        if (this == other) {
            return true;
        }
        if (!(other instanceof TapTagData)) {
            return false;
        }
        TapTagData tapTagData = (TapTagData) other;
        return MessageId.m1193equalsimpl0(this.messageId, tapTagData.messageId) && ChannelId.m1167equalsimpl0(this.channelId, tapTagData.channelId) && Intrinsics.areEqual(this.tagType, tapTagData.tagType);
    }

    /* renamed from: getChannelId-o4g7jtM, reason: not valid java name */
    public final long m933getChannelIdo4g7jtM() {
        return this.channelId;
    }

    @NotNull
    /* renamed from: getMessageId-3Eiw7ao, reason: not valid java name */
    public final String m934getMessageId3Eiw7ao() {
        return this.messageId;
    }

    public final String getTagType() {
        return this.tagType;
    }

    public int hashCode() {
        int e9 = d.e(this.channelId, MessageId.m1194hashCodeimpl(this.messageId) * 31, 31);
        String str = this.tagType;
        return e9 + (str == null ? 0 : str.hashCode());
    }

    @Override // com.discord.reactevents.ReactEvent
    @NotNull
    /* renamed from: serialize */
    public WritableMap getData() {
        return ReactEvent.DefaultImpls.serialize(this);
    }

    @NotNull
    public String toString() {
        String m1196toStringimpl = MessageId.m1196toStringimpl(this.messageId);
        String m1170toStringimpl = ChannelId.m1170toStringimpl(this.channelId);
        return com.discord.chat.bridge.botuikit.a.j(a3.e.t("TapTagData(messageId=", m1196toStringimpl, ", channelId=", m1170toStringimpl, ", tagType="), this.tagType, ")");
    }

    public /* synthetic */ TapTagData(String str, long j, String str2, DefaultConstructorMarker defaultConstructorMarker) {
        this(str, j, str2);
    }

    private /* synthetic */ TapTagData(int i5, String str, ChannelId channelId, String str2, SerializationConstructorMarker serializationConstructorMarker) {
        if (7 != (i5 & 7)) {
            h1.l(i5, 7, TapTagData$$serializer.INSTANCE.getDescriptor());
            throw null;
        }
        this.messageId = str;
        this.channelId = channelId.m1172unboximpl();
        this.tagType = str2;
    }

    private TapTagData(String messageId, long j, String str) {
        Intrinsics.checkNotNullParameter(messageId, "messageId");
        this.messageId = messageId;
        this.channelId = j;
        this.tagType = str;
    }
}
