package com.discord.chat.reactevents;

import bs.h1;
import bs.v1;
import com.discord.jank_stats.JankRecordStore;
import com.discord.primitives.MessageId;
import com.discord.primitives.MessageId$$serializer;
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
@Metadata(d1 = {"\u0000L\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\b\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0010\n\u0002\u0010\u000b\n\u0000\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0004\b\u0087\b\u0018\u0000 ,2\u00020\u0001:\u0002+,B/\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0003\u0012\n\b\u0002\u0010\u0005\u001a\u0004\u0018\u00010\u0003\u0012\n\b\u0002\u0010\u0006\u001a\u0004\u0018\u00010\u0007¢\u0006\u0004\b\b\u0010\tBC\b\u0010\u0012\u0006\u0010\n\u001a\u00020\u000b\u0012\b\u0010\u0002\u001a\u0004\u0018\u00010\u0003\u0012\b\u0010\u0004\u001a\u0004\u0018\u00010\u0003\u0012\b\u0010\u0005\u001a\u0004\u0018\u00010\u0003\u0012\b\u0010\u0006\u001a\u0004\u0018\u00010\u0007\u0012\b\u0010\f\u001a\u0004\u0018\u00010\r¢\u0006\u0004\b\b\u0010\u000eJ\t\u0010\u0015\u001a\u00020\u0003HÆ\u0003J\t\u0010\u0016\u001a\u00020\u0003HÆ\u0003J\u000b\u0010\u0017\u001a\u0004\u0018\u00010\u0003HÆ\u0003J\u0012\u0010\u0018\u001a\u0004\u0018\u00010\u0007HÆ\u0003¢\u0006\u0004\b\u0019\u0010\u0010J<\u0010\u001a\u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u00032\b\b\u0002\u0010\u0004\u001a\u00020\u00032\n\b\u0002\u0010\u0005\u001a\u0004\u0018\u00010\u00032\n\b\u0002\u0010\u0006\u001a\u0004\u0018\u00010\u0007HÆ\u0001¢\u0006\u0004\b\u001b\u0010\u001cJ\u0013\u0010\u001d\u001a\u00020\u001e2\b\u0010\u001f\u001a\u0004\u0018\u00010 HÖ\u0003J\t\u0010!\u001a\u00020\u000bHÖ\u0001J\t\u0010\"\u001a\u00020\u0003HÖ\u0001J%\u0010#\u001a\u00020$2\u0006\u0010%\u001a\u00020\u00002\u0006\u0010&\u001a\u00020'2\u0006\u0010(\u001a\u00020)H\u0001¢\u0006\u0002\b*R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u000f\u0010\u0010R\u0011\u0010\u0004\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0011\u0010\u0010R\u0013\u0010\u0005\u001a\u0004\u0018\u00010\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0012\u0010\u0010R\u0015\u0010\u0006\u001a\u0004\u0018\u00010\u0007¢\u0006\n\n\u0002\u0010\u0014\u001a\u0004\b\u0013\u0010\u0010¨\u0006-"}, d2 = {"Lcom/discord/chat/reactevents/TapSoundmojiData;", "Lcom/discord/reactevents/ReactEvent;", "soundId", "", "channelId", "guildId", "messageId", "Lcom/discord/primitives/MessageId;", "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lkotlin/jvm/internal/DefaultConstructorMarker;)V", "seen0", "", "serializationConstructorMarker", "Lkotlinx/serialization/internal/SerializationConstructorMarker;", "(ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lkotlinx/serialization/internal/SerializationConstructorMarker;Lkotlin/jvm/internal/DefaultConstructorMarker;)V", "getSoundId", "()Ljava/lang/String;", "getChannelId", "getGuildId", "getMessageId-N_6c4I0", "Ljava/lang/String;", "component1", "component2", "component3", "component4", "component4-N_6c4I0", "copy", "copy-TQNKv7g", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lcom/discord/chat/reactevents/TapSoundmojiData;", "equals", "", JankRecordStore.SCREEN_OTHER, "", "hashCode", "toString", "write$Self", "", "self", "output", "Lkotlinx/serialization/encoding/CompositeEncoder;", "serialDesc", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "write$Self$chat_release", "$serializer", "Companion", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final /* data */ class TapSoundmojiData implements ReactEvent {

    /* renamed from: Companion, reason: from kotlin metadata */
    @NotNull
    public static final Companion INSTANCE = new Companion(null);

    @NotNull
    private final String channelId;
    private final String guildId;
    private final String messageId;

    @NotNull
    private final String soundId;

    @Metadata(d1 = {"\u0000\u0016\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\f\u0010\u0004\u001a\b\u0012\u0004\u0012\u00020\u00060\u0005¨\u0006\u0007"}, d2 = {"Lcom/discord/chat/reactevents/TapSoundmojiData$Companion;", "", "<init>", "()V", "serializer", "Lkotlinx/serialization/KSerializer;", "Lcom/discord/chat/reactevents/TapSoundmojiData;", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final class Companion {
        private Companion() {
        }

        @NotNull
        public final KSerializer serializer() {
            return TapSoundmojiData$$serializer.INSTANCE;
        }

        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }
    }

    public /* synthetic */ TapSoundmojiData(int i5, String str, String str2, String str3, String str4, SerializationConstructorMarker serializationConstructorMarker, DefaultConstructorMarker defaultConstructorMarker) {
        this(i5, str, str2, str3, str4, serializationConstructorMarker);
    }

    /* renamed from: copy-TQNKv7g$default, reason: not valid java name */
    public static /* synthetic */ TapSoundmojiData m921copyTQNKv7g$default(TapSoundmojiData tapSoundmojiData, String str, String str2, String str3, String str4, int i5, Object obj) {
        if ((i5 & 1) != 0) {
            str = tapSoundmojiData.soundId;
        }
        if ((i5 & 2) != 0) {
            str2 = tapSoundmojiData.channelId;
        }
        if ((i5 & 4) != 0) {
            str3 = tapSoundmojiData.guildId;
        }
        if ((i5 & 8) != 0) {
            str4 = tapSoundmojiData.messageId;
        }
        return tapSoundmojiData.m923copyTQNKv7g(str, str2, str3, str4);
    }

    public static final /* synthetic */ void write$Self$chat_release(TapSoundmojiData self, CompositeEncoder output, SerialDescriptor serialDesc) {
        output.y(serialDesc, 0, self.soundId);
        output.y(serialDesc, 1, self.channelId);
        if (output.I(serialDesc, 2) || self.guildId != null) {
            output.z(serialDesc, 2, v1.a, self.guildId);
        }
        if (!output.I(serialDesc, 3) && self.messageId == null) {
            return;
        }
        MessageId$$serializer messageId$$serializer = MessageId$$serializer.INSTANCE;
        String str = self.messageId;
        output.z(serialDesc, 3, messageId$$serializer, str != null ? MessageId.m1189boximpl(str) : null);
    }

    @NotNull
    /* renamed from: component1, reason: from getter */
    public final String getSoundId() {
        return this.soundId;
    }

    @NotNull
    /* renamed from: component2, reason: from getter */
    public final String getChannelId() {
        return this.channelId;
    }

    /* renamed from: component3, reason: from getter */
    public final String getGuildId() {
        return this.guildId;
    }

    /* renamed from: component4-N_6c4I0, reason: not valid java name and from getter */
    public final String getMessageId() {
        return this.messageId;
    }

    @NotNull
    /* renamed from: copy-TQNKv7g, reason: not valid java name */
    public final TapSoundmojiData m923copyTQNKv7g(@NotNull String soundId, @NotNull String channelId, String guildId, String messageId) {
        Intrinsics.checkNotNullParameter(soundId, "soundId");
        Intrinsics.checkNotNullParameter(channelId, "channelId");
        return new TapSoundmojiData(soundId, channelId, guildId, messageId, null);
    }

    public boolean equals(Object other) {
        boolean m1193equalsimpl0;
        if (this == other) {
            return true;
        }
        if (!(other instanceof TapSoundmojiData)) {
            return false;
        }
        TapSoundmojiData tapSoundmojiData = (TapSoundmojiData) other;
        if (!Intrinsics.areEqual(this.soundId, tapSoundmojiData.soundId) || !Intrinsics.areEqual(this.channelId, tapSoundmojiData.channelId) || !Intrinsics.areEqual(this.guildId, tapSoundmojiData.guildId)) {
            return false;
        }
        String str = this.messageId;
        String str2 = tapSoundmojiData.messageId;
        if (str == null) {
            if (str2 == null) {
                m1193equalsimpl0 = true;
            }
            m1193equalsimpl0 = false;
        } else {
            if (str2 != null) {
                m1193equalsimpl0 = MessageId.m1193equalsimpl0(str, str2);
            }
            m1193equalsimpl0 = false;
        }
        return m1193equalsimpl0;
    }

    @NotNull
    public final String getChannelId() {
        return this.channelId;
    }

    public final String getGuildId() {
        return this.guildId;
    }

    /* renamed from: getMessageId-N_6c4I0, reason: not valid java name */
    public final String m924getMessageIdN_6c4I0() {
        return this.messageId;
    }

    @NotNull
    public final String getSoundId() {
        return this.soundId;
    }

    public int hashCode() {
        int d6 = a3.e.d(this.soundId.hashCode() * 31, 31, this.channelId);
        String str = this.guildId;
        int hashCode = (d6 + (str == null ? 0 : str.hashCode())) * 31;
        String str2 = this.messageId;
        return hashCode + (str2 != null ? MessageId.m1194hashCodeimpl(str2) : 0);
    }

    @Override // com.discord.reactevents.ReactEvent
    @NotNull
    /* renamed from: serialize */
    public WritableMap getData() {
        return ReactEvent.DefaultImpls.serialize(this);
    }

    @NotNull
    public String toString() {
        String str = this.soundId;
        String str2 = this.channelId;
        String str3 = this.guildId;
        String str4 = this.messageId;
        return com.discord.chat.bridge.botuikit.a.k(a3.e.t("TapSoundmojiData(soundId=", str, ", channelId=", str2, ", guildId="), str3, ", messageId=", str4 == null ? "null" : MessageId.m1196toStringimpl(str4), ")");
    }

    public /* synthetic */ TapSoundmojiData(String str, String str2, String str3, String str4, DefaultConstructorMarker defaultConstructorMarker) {
        this(str, str2, str3, str4);
    }

    private /* synthetic */ TapSoundmojiData(int i5, String str, String str2, String str3, String str4, SerializationConstructorMarker serializationConstructorMarker) {
        if (3 != (i5 & 3)) {
            h1.l(i5, 3, TapSoundmojiData$$serializer.INSTANCE.getDescriptor());
            throw null;
        }
        this.soundId = str;
        this.channelId = str2;
        if ((i5 & 4) == 0) {
            this.guildId = null;
        } else {
            this.guildId = str3;
        }
        if ((i5 & 8) == 0) {
            this.messageId = null;
        } else {
            this.messageId = str4;
        }
    }

    private TapSoundmojiData(String soundId, String channelId, String str, String str2) {
        Intrinsics.checkNotNullParameter(soundId, "soundId");
        Intrinsics.checkNotNullParameter(channelId, "channelId");
        this.soundId = soundId;
        this.channelId = channelId;
        this.guildId = str;
        this.messageId = str2;
    }

    public /* synthetic */ TapSoundmojiData(String str, String str2, String str3, String str4, int i5, DefaultConstructorMarker defaultConstructorMarker) {
        this(str, str2, (i5 & 4) != 0 ? null : str3, (i5 & 8) != 0 ? null : str4, null);
    }
}
