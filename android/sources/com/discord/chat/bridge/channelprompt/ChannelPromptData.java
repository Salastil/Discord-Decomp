package com.discord.chat.bridge.channelprompt;

import bs.v1;
import com.discord.chat.bridge.botuikit.a;
import com.discord.jank_stats.JankRecordStore;
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
@Metadata(d1 = {"\u0000>\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\u000e\n\u0002\b\t\n\u0002\u0010\b\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0012\n\u0002\u0010\u000b\n\u0002\b\u0004\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0004\b\u0087\b\u0018\u0000 /2\u00020\u0001:\u0002./B[\u0012\n\b\u0002\u0010\u0002\u001a\u0004\u0018\u00010\u0003\u0012\n\b\u0002\u0010\u0004\u001a\u0004\u0018\u00010\u0003\u0012\n\b\u0002\u0010\u0005\u001a\u0004\u0018\u00010\u0003\u0012\n\b\u0002\u0010\u0006\u001a\u0004\u0018\u00010\u0003\u0012\n\b\u0002\u0010\u0007\u001a\u0004\u0018\u00010\u0003\u0012\n\b\u0002\u0010\b\u001a\u0004\u0018\u00010\u0003\u0012\n\b\u0002\u0010\t\u001a\u0004\u0018\u00010\u0003¢\u0006\u0004\b\n\u0010\u000bBa\b\u0010\u0012\u0006\u0010\f\u001a\u00020\r\u0012\b\u0010\u0002\u001a\u0004\u0018\u00010\u0003\u0012\b\u0010\u0004\u001a\u0004\u0018\u00010\u0003\u0012\b\u0010\u0005\u001a\u0004\u0018\u00010\u0003\u0012\b\u0010\u0006\u001a\u0004\u0018\u00010\u0003\u0012\b\u0010\u0007\u001a\u0004\u0018\u00010\u0003\u0012\b\u0010\b\u001a\u0004\u0018\u00010\u0003\u0012\b\u0010\t\u001a\u0004\u0018\u00010\u0003\u0012\b\u0010\u000e\u001a\u0004\u0018\u00010\u000f¢\u0006\u0004\b\n\u0010\u0010J\u000b\u0010\u0019\u001a\u0004\u0018\u00010\u0003HÆ\u0003J\u000b\u0010\u001a\u001a\u0004\u0018\u00010\u0003HÆ\u0003J\u000b\u0010\u001b\u001a\u0004\u0018\u00010\u0003HÆ\u0003J\u000b\u0010\u001c\u001a\u0004\u0018\u00010\u0003HÆ\u0003J\u000b\u0010\u001d\u001a\u0004\u0018\u00010\u0003HÆ\u0003J\u000b\u0010\u001e\u001a\u0004\u0018\u00010\u0003HÆ\u0003J\u000b\u0010\u001f\u001a\u0004\u0018\u00010\u0003HÆ\u0003J]\u0010 \u001a\u00020\u00002\n\b\u0002\u0010\u0002\u001a\u0004\u0018\u00010\u00032\n\b\u0002\u0010\u0004\u001a\u0004\u0018\u00010\u00032\n\b\u0002\u0010\u0005\u001a\u0004\u0018\u00010\u00032\n\b\u0002\u0010\u0006\u001a\u0004\u0018\u00010\u00032\n\b\u0002\u0010\u0007\u001a\u0004\u0018\u00010\u00032\n\b\u0002\u0010\b\u001a\u0004\u0018\u00010\u00032\n\b\u0002\u0010\t\u001a\u0004\u0018\u00010\u0003HÆ\u0001J\u0013\u0010!\u001a\u00020\"2\b\u0010#\u001a\u0004\u0018\u00010\u0001HÖ\u0003J\t\u0010$\u001a\u00020\rHÖ\u0001J\t\u0010%\u001a\u00020\u0003HÖ\u0001J%\u0010&\u001a\u00020'2\u0006\u0010(\u001a\u00020\u00002\u0006\u0010)\u001a\u00020*2\u0006\u0010+\u001a\u00020,H\u0001¢\u0006\u0002\b-R\u0013\u0010\u0002\u001a\u0004\u0018\u00010\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0011\u0010\u0012R\u0013\u0010\u0004\u001a\u0004\u0018\u00010\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0013\u0010\u0012R\u0013\u0010\u0005\u001a\u0004\u0018\u00010\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0014\u0010\u0012R\u0013\u0010\u0006\u001a\u0004\u0018\u00010\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0015\u0010\u0012R\u0013\u0010\u0007\u001a\u0004\u0018\u00010\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0016\u0010\u0012R\u0013\u0010\b\u001a\u0004\u0018\u00010\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0017\u0010\u0012R\u0013\u0010\t\u001a\u0004\u0018\u00010\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0018\u0010\u0012¨\u00060"}, d2 = {"Lcom/discord/chat/bridge/channelprompt/ChannelPromptData;", "", "cameraButtonIcon", "", "gifButtonIcon", "emojiButtonIcon", "gamingStatsButtonText", "cameraButtonText", "gifButtonText", "emojiButtonText", "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", "seen0", "", "serializationConstructorMarker", "Lkotlinx/serialization/internal/SerializationConstructorMarker;", "(ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lkotlinx/serialization/internal/SerializationConstructorMarker;)V", "getCameraButtonIcon", "()Ljava/lang/String;", "getGifButtonIcon", "getEmojiButtonIcon", "getGamingStatsButtonText", "getCameraButtonText", "getGifButtonText", "getEmojiButtonText", "component1", "component2", "component3", "component4", "component5", "component6", "component7", "copy", "equals", "", JankRecordStore.SCREEN_OTHER, "hashCode", "toString", "write$Self", "", "self", "output", "Lkotlinx/serialization/encoding/CompositeEncoder;", "serialDesc", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "write$Self$chat_release", "$serializer", "Companion", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final /* data */ class ChannelPromptData {

    /* renamed from: Companion, reason: from kotlin metadata */
    @NotNull
    public static final Companion INSTANCE = new Companion(null);
    private final String cameraButtonIcon;
    private final String cameraButtonText;
    private final String emojiButtonIcon;
    private final String emojiButtonText;
    private final String gamingStatsButtonText;
    private final String gifButtonIcon;
    private final String gifButtonText;

    @Metadata(d1 = {"\u0000\u0016\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\f\u0010\u0004\u001a\b\u0012\u0004\u0012\u00020\u00060\u0005¨\u0006\u0007"}, d2 = {"Lcom/discord/chat/bridge/channelprompt/ChannelPromptData$Companion;", "", "<init>", "()V", "serializer", "Lkotlinx/serialization/KSerializer;", "Lcom/discord/chat/bridge/channelprompt/ChannelPromptData;", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final class Companion {
        private Companion() {
        }

        @NotNull
        public final KSerializer serializer() {
            return ChannelPromptData$$serializer.INSTANCE;
        }

        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }
    }

    public ChannelPromptData() {
        this((String) null, (String) null, (String) null, (String) null, (String) null, (String) null, (String) null, 127, (DefaultConstructorMarker) null);
    }

    public static /* synthetic */ ChannelPromptData copy$default(ChannelPromptData channelPromptData, String str, String str2, String str3, String str4, String str5, String str6, String str7, int i5, Object obj) {
        if ((i5 & 1) != 0) {
            str = channelPromptData.cameraButtonIcon;
        }
        if ((i5 & 2) != 0) {
            str2 = channelPromptData.gifButtonIcon;
        }
        if ((i5 & 4) != 0) {
            str3 = channelPromptData.emojiButtonIcon;
        }
        if ((i5 & 8) != 0) {
            str4 = channelPromptData.gamingStatsButtonText;
        }
        if ((i5 & 16) != 0) {
            str5 = channelPromptData.cameraButtonText;
        }
        if ((i5 & 32) != 0) {
            str6 = channelPromptData.gifButtonText;
        }
        if ((i5 & 64) != 0) {
            str7 = channelPromptData.emojiButtonText;
        }
        String str8 = str6;
        String str9 = str7;
        String str10 = str5;
        String str11 = str3;
        return channelPromptData.copy(str, str2, str11, str4, str10, str8, str9);
    }

    public static final /* synthetic */ void write$Self$chat_release(ChannelPromptData self, CompositeEncoder output, SerialDescriptor serialDesc) {
        if (output.I(serialDesc, 0) || self.cameraButtonIcon != null) {
            output.z(serialDesc, 0, v1.a, self.cameraButtonIcon);
        }
        if (output.I(serialDesc, 1) || self.gifButtonIcon != null) {
            output.z(serialDesc, 1, v1.a, self.gifButtonIcon);
        }
        if (output.I(serialDesc, 2) || self.emojiButtonIcon != null) {
            output.z(serialDesc, 2, v1.a, self.emojiButtonIcon);
        }
        if (output.I(serialDesc, 3) || self.gamingStatsButtonText != null) {
            output.z(serialDesc, 3, v1.a, self.gamingStatsButtonText);
        }
        if (output.I(serialDesc, 4) || self.cameraButtonText != null) {
            output.z(serialDesc, 4, v1.a, self.cameraButtonText);
        }
        if (output.I(serialDesc, 5) || self.gifButtonText != null) {
            output.z(serialDesc, 5, v1.a, self.gifButtonText);
        }
        if (!output.I(serialDesc, 6) && self.emojiButtonText == null) {
            return;
        }
        output.z(serialDesc, 6, v1.a, self.emojiButtonText);
    }

    /* renamed from: component1, reason: from getter */
    public final String getCameraButtonIcon() {
        return this.cameraButtonIcon;
    }

    /* renamed from: component2, reason: from getter */
    public final String getGifButtonIcon() {
        return this.gifButtonIcon;
    }

    /* renamed from: component3, reason: from getter */
    public final String getEmojiButtonIcon() {
        return this.emojiButtonIcon;
    }

    /* renamed from: component4, reason: from getter */
    public final String getGamingStatsButtonText() {
        return this.gamingStatsButtonText;
    }

    /* renamed from: component5, reason: from getter */
    public final String getCameraButtonText() {
        return this.cameraButtonText;
    }

    /* renamed from: component6, reason: from getter */
    public final String getGifButtonText() {
        return this.gifButtonText;
    }

    /* renamed from: component7, reason: from getter */
    public final String getEmojiButtonText() {
        return this.emojiButtonText;
    }

    @NotNull
    public final ChannelPromptData copy(String cameraButtonIcon, String gifButtonIcon, String emojiButtonIcon, String gamingStatsButtonText, String cameraButtonText, String gifButtonText, String emojiButtonText) {
        return new ChannelPromptData(cameraButtonIcon, gifButtonIcon, emojiButtonIcon, gamingStatsButtonText, cameraButtonText, gifButtonText, emojiButtonText);
    }

    public boolean equals(Object other) {
        if (this == other) {
            return true;
        }
        if (!(other instanceof ChannelPromptData)) {
            return false;
        }
        ChannelPromptData channelPromptData = (ChannelPromptData) other;
        return Intrinsics.areEqual(this.cameraButtonIcon, channelPromptData.cameraButtonIcon) && Intrinsics.areEqual(this.gifButtonIcon, channelPromptData.gifButtonIcon) && Intrinsics.areEqual(this.emojiButtonIcon, channelPromptData.emojiButtonIcon) && Intrinsics.areEqual(this.gamingStatsButtonText, channelPromptData.gamingStatsButtonText) && Intrinsics.areEqual(this.cameraButtonText, channelPromptData.cameraButtonText) && Intrinsics.areEqual(this.gifButtonText, channelPromptData.gifButtonText) && Intrinsics.areEqual(this.emojiButtonText, channelPromptData.emojiButtonText);
    }

    public final String getCameraButtonIcon() {
        return this.cameraButtonIcon;
    }

    public final String getCameraButtonText() {
        return this.cameraButtonText;
    }

    public final String getEmojiButtonIcon() {
        return this.emojiButtonIcon;
    }

    public final String getEmojiButtonText() {
        return this.emojiButtonText;
    }

    public final String getGamingStatsButtonText() {
        return this.gamingStatsButtonText;
    }

    public final String getGifButtonIcon() {
        return this.gifButtonIcon;
    }

    public final String getGifButtonText() {
        return this.gifButtonText;
    }

    public int hashCode() {
        String str = this.cameraButtonIcon;
        int hashCode = (str == null ? 0 : str.hashCode()) * 31;
        String str2 = this.gifButtonIcon;
        int hashCode2 = (hashCode + (str2 == null ? 0 : str2.hashCode())) * 31;
        String str3 = this.emojiButtonIcon;
        int hashCode3 = (hashCode2 + (str3 == null ? 0 : str3.hashCode())) * 31;
        String str4 = this.gamingStatsButtonText;
        int hashCode4 = (hashCode3 + (str4 == null ? 0 : str4.hashCode())) * 31;
        String str5 = this.cameraButtonText;
        int hashCode5 = (hashCode4 + (str5 == null ? 0 : str5.hashCode())) * 31;
        String str6 = this.gifButtonText;
        int hashCode6 = (hashCode5 + (str6 == null ? 0 : str6.hashCode())) * 31;
        String str7 = this.emojiButtonText;
        return hashCode6 + (str7 != null ? str7.hashCode() : 0);
    }

    @NotNull
    public String toString() {
        String str = this.cameraButtonIcon;
        String str2 = this.gifButtonIcon;
        String str3 = this.emojiButtonIcon;
        String str4 = this.gamingStatsButtonText;
        String str5 = this.cameraButtonText;
        String str6 = this.gifButtonText;
        String str7 = this.emojiButtonText;
        StringBuilder t5 = a3.e.t("ChannelPromptData(cameraButtonIcon=", str, ", gifButtonIcon=", str2, ", emojiButtonIcon=");
        a3.e.A(t5, str3, ", gamingStatsButtonText=", str4, ", cameraButtonText=");
        a3.e.A(t5, str5, ", gifButtonText=", str6, ", emojiButtonText=");
        return a.j(t5, str7, ")");
    }

    public /* synthetic */ ChannelPromptData(int i5, String str, String str2, String str3, String str4, String str5, String str6, String str7, SerializationConstructorMarker serializationConstructorMarker) {
        if ((i5 & 1) == 0) {
            this.cameraButtonIcon = null;
        } else {
            this.cameraButtonIcon = str;
        }
        if ((i5 & 2) == 0) {
            this.gifButtonIcon = null;
        } else {
            this.gifButtonIcon = str2;
        }
        if ((i5 & 4) == 0) {
            this.emojiButtonIcon = null;
        } else {
            this.emojiButtonIcon = str3;
        }
        if ((i5 & 8) == 0) {
            this.gamingStatsButtonText = null;
        } else {
            this.gamingStatsButtonText = str4;
        }
        if ((i5 & 16) == 0) {
            this.cameraButtonText = null;
        } else {
            this.cameraButtonText = str5;
        }
        if ((i5 & 32) == 0) {
            this.gifButtonText = null;
        } else {
            this.gifButtonText = str6;
        }
        if ((i5 & 64) == 0) {
            this.emojiButtonText = null;
        } else {
            this.emojiButtonText = str7;
        }
    }

    public ChannelPromptData(String str, String str2, String str3, String str4, String str5, String str6, String str7) {
        this.cameraButtonIcon = str;
        this.gifButtonIcon = str2;
        this.emojiButtonIcon = str3;
        this.gamingStatsButtonText = str4;
        this.cameraButtonText = str5;
        this.gifButtonText = str6;
        this.emojiButtonText = str7;
    }

    public /* synthetic */ ChannelPromptData(String str, String str2, String str3, String str4, String str5, String str6, String str7, int i5, DefaultConstructorMarker defaultConstructorMarker) {
        this((i5 & 1) != 0 ? null : str, (i5 & 2) != 0 ? null : str2, (i5 & 4) != 0 ? null : str3, (i5 & 8) != 0 ? null : str4, (i5 & 16) != 0 ? null : str5, (i5 & 32) != 0 ? null : str6, (i5 & 64) != 0 ? null : str7);
    }
}
