package com.discord.chat.bridge.botuikit;

import androidx.recyclerview.widget.RecyclerView;
import bs.h1;
import com.discord.jank_stats.JankRecordStore;
import com.discord.primitives.UserId;
import com.discord.primitives.UserId$$serializer;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
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
@Metadata(d1 = {"\u0000d\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\b\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0007\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0002\b(\n\u0002\u0010\u000b\n\u0000\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0004\b\u0087\b\u0018\u0000 Q2\u00020\u0001:\u0002PQB\u0081\u0001\u0012\b\b\u0002\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005\u0012\u0006\u0010\u0006\u001a\u00020\u0007\u0012\u0006\u0010\b\u001a\u00020\u0007\u0012\u0006\u0010\t\u001a\u00020\u0007\u0012\u0006\u0010\n\u001a\u00020\u0003\u0012\u0006\u0010\u000b\u001a\u00020\u0007\u0012\u0006\u0010\f\u001a\u00020\u0007\u0012\u0006\u0010\r\u001a\u00020\u0007\u0012\n\b\u0002\u0010\u000e\u001a\u0004\u0018\u00010\u000f\u0012\n\b\u0002\u0010\u0010\u001a\u0004\u0018\u00010\u0011\u0012\n\b\u0002\u0010\u0012\u001a\u0004\u0018\u00010\u0013\u0012\n\b\u0002\u0010\u0014\u001a\u0004\u0018\u00010\u0015¢\u0006\u0004\b\u0016\u0010\u0017B\u0099\u0001\b\u0010\u0012\u0006\u0010\u0018\u001a\u00020\u0003\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\b\u0010\u0004\u001a\u0004\u0018\u00010\u0005\u0012\b\u0010\u0006\u001a\u0004\u0018\u00010\u0007\u0012\b\u0010\b\u001a\u0004\u0018\u00010\u0007\u0012\b\u0010\t\u001a\u0004\u0018\u00010\u0007\u0012\u0006\u0010\n\u001a\u00020\u0003\u0012\b\u0010\u000b\u001a\u0004\u0018\u00010\u0007\u0012\b\u0010\f\u001a\u0004\u0018\u00010\u0007\u0012\b\u0010\r\u001a\u0004\u0018\u00010\u0007\u0012\b\u0010\u000e\u001a\u0004\u0018\u00010\u000f\u0012\b\u0010\u0010\u001a\u0004\u0018\u00010\u0011\u0012\b\u0010\u0012\u001a\u0004\u0018\u00010\u0013\u0012\b\u0010\u0014\u001a\u0004\u0018\u00010\u0015\u0012\b\u0010\u0019\u001a\u0004\u0018\u00010\u001a¢\u0006\u0004\b\u0016\u0010\u001bJ\t\u00101\u001a\u00020\u0003HÆ\u0003J\u0010\u00102\u001a\u00020\u0005HÆ\u0003¢\u0006\u0004\b3\u0010\u001fJ\t\u00104\u001a\u00020\u0007HÆ\u0003J\t\u00105\u001a\u00020\u0007HÆ\u0003J\t\u00106\u001a\u00020\u0007HÆ\u0003J\t\u00107\u001a\u00020\u0003HÆ\u0003J\t\u00108\u001a\u00020\u0007HÆ\u0003J\t\u00109\u001a\u00020\u0007HÆ\u0003J\t\u0010:\u001a\u00020\u0007HÆ\u0003J\u000b\u0010;\u001a\u0004\u0018\u00010\u000fHÆ\u0003J\u000b\u0010<\u001a\u0004\u0018\u00010\u0011HÆ\u0003J\u000b\u0010=\u001a\u0004\u0018\u00010\u0013HÆ\u0003J\u000b\u0010>\u001a\u0004\u0018\u00010\u0015HÆ\u0003J\u009a\u0001\u0010?\u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u00032\b\b\u0002\u0010\u0004\u001a\u00020\u00052\b\b\u0002\u0010\u0006\u001a\u00020\u00072\b\b\u0002\u0010\b\u001a\u00020\u00072\b\b\u0002\u0010\t\u001a\u00020\u00072\b\b\u0002\u0010\n\u001a\u00020\u00032\b\b\u0002\u0010\u000b\u001a\u00020\u00072\b\b\u0002\u0010\f\u001a\u00020\u00072\b\b\u0002\u0010\r\u001a\u00020\u00072\n\b\u0002\u0010\u000e\u001a\u0004\u0018\u00010\u000f2\n\b\u0002\u0010\u0010\u001a\u0004\u0018\u00010\u00112\n\b\u0002\u0010\u0012\u001a\u0004\u0018\u00010\u00132\n\b\u0002\u0010\u0014\u001a\u0004\u0018\u00010\u0015HÆ\u0001¢\u0006\u0004\b@\u0010AJ\u0013\u0010B\u001a\u00020C2\b\u0010D\u001a\u0004\u0018\u00010EHÖ\u0003J\t\u0010F\u001a\u00020\u0003HÖ\u0001J\t\u0010G\u001a\u00020\u0007HÖ\u0001J%\u0010H\u001a\u00020I2\u0006\u0010J\u001a\u00020\u00002\u0006\u0010K\u001a\u00020L2\u0006\u0010M\u001a\u00020NH\u0001¢\u0006\u0002\bOR\u0014\u0010\u0002\u001a\u00020\u0003X\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\b\u001c\u0010\u001dR\u0013\u0010\u0004\u001a\u00020\u0005¢\u0006\n\n\u0002\u0010 \u001a\u0004\b\u001e\u0010\u001fR\u0011\u0010\u0006\u001a\u00020\u0007¢\u0006\b\n\u0000\u001a\u0004\b!\u0010\"R\u0011\u0010\b\u001a\u00020\u0007¢\u0006\b\n\u0000\u001a\u0004\b#\u0010\"R\u0011\u0010\t\u001a\u00020\u0007¢\u0006\b\n\u0000\u001a\u0004\b$\u0010\"R\u0011\u0010\n\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b%\u0010\u001dR\u0011\u0010\u000b\u001a\u00020\u0007¢\u0006\b\n\u0000\u001a\u0004\b&\u0010\"R\u0011\u0010\f\u001a\u00020\u0007¢\u0006\b\n\u0000\u001a\u0004\b'\u0010\"R\u0011\u0010\r\u001a\u00020\u0007¢\u0006\b\n\u0000\u001a\u0004\b(\u0010\"R\u0013\u0010\u000e\u001a\u0004\u0018\u00010\u000f¢\u0006\b\n\u0000\u001a\u0004\b)\u0010*R\u0013\u0010\u0010\u001a\u0004\u0018\u00010\u0011¢\u0006\b\n\u0000\u001a\u0004\b+\u0010,R\u0013\u0010\u0012\u001a\u0004\u0018\u00010\u0013¢\u0006\b\n\u0000\u001a\u0004\b-\u0010.R\u0013\u0010\u0014\u001a\u0004\u0018\u00010\u0015¢\u0006\b\n\u0000\u001a\u0004\b/\u00100¨\u0006R"}, d2 = {"Lcom/discord/chat/bridge/botuikit/CheckpointDataV2025;", "Lcom/discord/chat/bridge/botuikit/CheckpointData;", "version", "", "authorId", "Lcom/discord/primitives/UserId;", "cardId", "", "cardAssetUrl", "powerLevel", "powerLevelUnits", "messagesString", "voiceString", "reactionString", "clickable", "Lcom/discord/chat/bridge/botuikit/CheckpointCardClickable;", "topEmoji", "Lcom/discord/chat/bridge/botuikit/CheckpointEmoji;", "topGuild", "Lcom/discord/chat/bridge/botuikit/CheckpointGuild;", "topGame", "Lcom/discord/chat/bridge/botuikit/CheckpointApplication;", "<init>", "(IJLjava/lang/String;Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/discord/chat/bridge/botuikit/CheckpointCardClickable;Lcom/discord/chat/bridge/botuikit/CheckpointEmoji;Lcom/discord/chat/bridge/botuikit/CheckpointGuild;Lcom/discord/chat/bridge/botuikit/CheckpointApplication;Lkotlin/jvm/internal/DefaultConstructorMarker;)V", "seen0", "serializationConstructorMarker", "Lkotlinx/serialization/internal/SerializationConstructorMarker;", "(IILcom/discord/primitives/UserId;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/discord/chat/bridge/botuikit/CheckpointCardClickable;Lcom/discord/chat/bridge/botuikit/CheckpointEmoji;Lcom/discord/chat/bridge/botuikit/CheckpointGuild;Lcom/discord/chat/bridge/botuikit/CheckpointApplication;Lkotlinx/serialization/internal/SerializationConstructorMarker;Lkotlin/jvm/internal/DefaultConstructorMarker;)V", "getVersion", "()I", "getAuthorId-re6GcUE", "()J", "J", "getCardId", "()Ljava/lang/String;", "getCardAssetUrl", "getPowerLevel", "getPowerLevelUnits", "getMessagesString", "getVoiceString", "getReactionString", "getClickable", "()Lcom/discord/chat/bridge/botuikit/CheckpointCardClickable;", "getTopEmoji", "()Lcom/discord/chat/bridge/botuikit/CheckpointEmoji;", "getTopGuild", "()Lcom/discord/chat/bridge/botuikit/CheckpointGuild;", "getTopGame", "()Lcom/discord/chat/bridge/botuikit/CheckpointApplication;", "component1", "component2", "component2-re6GcUE", "component3", "component4", "component5", "component6", "component7", "component8", "component9", "component10", "component11", "component12", "component13", "copy", "copy-_o2MRsY", "(IJLjava/lang/String;Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/discord/chat/bridge/botuikit/CheckpointCardClickable;Lcom/discord/chat/bridge/botuikit/CheckpointEmoji;Lcom/discord/chat/bridge/botuikit/CheckpointGuild;Lcom/discord/chat/bridge/botuikit/CheckpointApplication;)Lcom/discord/chat/bridge/botuikit/CheckpointDataV2025;", "equals", "", JankRecordStore.SCREEN_OTHER, "", "hashCode", "toString", "write$Self", "", "self", "output", "Lkotlinx/serialization/encoding/CompositeEncoder;", "serialDesc", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "write$Self$chat_release", "$serializer", "Companion", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final /* data */ class CheckpointDataV2025 implements CheckpointData {

    /* renamed from: Companion, reason: from kotlin metadata */
    @NotNull
    public static final Companion INSTANCE = new Companion(null);
    private final long authorId;

    @NotNull
    private final String cardAssetUrl;

    @NotNull
    private final String cardId;
    private final CheckpointCardClickable clickable;

    @NotNull
    private final String messagesString;

    @NotNull
    private final String powerLevel;
    private final int powerLevelUnits;

    @NotNull
    private final String reactionString;
    private final CheckpointEmoji topEmoji;
    private final CheckpointApplication topGame;
    private final CheckpointGuild topGuild;
    private final int version;

    @NotNull
    private final String voiceString;

    @Metadata(d1 = {"\u0000\u0016\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\f\u0010\u0004\u001a\b\u0012\u0004\u0012\u00020\u00060\u0005¨\u0006\u0007"}, d2 = {"Lcom/discord/chat/bridge/botuikit/CheckpointDataV2025$Companion;", "", "<init>", "()V", "serializer", "Lkotlinx/serialization/KSerializer;", "Lcom/discord/chat/bridge/botuikit/CheckpointDataV2025;", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final class Companion {
        private Companion() {
        }

        @NotNull
        public final KSerializer serializer() {
            return CheckpointDataV2025$$serializer.INSTANCE;
        }

        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }
    }

    public /* synthetic */ CheckpointDataV2025(int i5, int i6, UserId userId, String str, String str2, String str3, int i10, String str4, String str5, String str6, CheckpointCardClickable checkpointCardClickable, CheckpointEmoji checkpointEmoji, CheckpointGuild checkpointGuild, CheckpointApplication checkpointApplication, SerializationConstructorMarker serializationConstructorMarker, DefaultConstructorMarker defaultConstructorMarker) {
        this(i5, i6, userId, str, str2, str3, i10, str4, str5, str6, checkpointCardClickable, checkpointEmoji, checkpointGuild, checkpointApplication, serializationConstructorMarker);
    }

    public static final /* synthetic */ void write$Self$chat_release(CheckpointDataV2025 self, CompositeEncoder output, SerialDescriptor serialDesc) {
        if (output.I(serialDesc, 0) || self.getVersion() != CheckpointVersion.V2025.getValue()) {
            output.n(0, self.getVersion(), serialDesc);
        }
        output.g(serialDesc, 1, UserId$$serializer.INSTANCE, UserId.m1241boximpl(self.authorId));
        output.y(serialDesc, 2, self.cardId);
        output.y(serialDesc, 3, self.cardAssetUrl);
        output.y(serialDesc, 4, self.powerLevel);
        output.n(5, self.powerLevelUnits, serialDesc);
        output.y(serialDesc, 6, self.messagesString);
        output.y(serialDesc, 7, self.voiceString);
        output.y(serialDesc, 8, self.reactionString);
        if (output.I(serialDesc, 9) || self.clickable != null) {
            output.z(serialDesc, 9, CheckpointCardClickable$$serializer.INSTANCE, self.clickable);
        }
        if (output.I(serialDesc, 10) || self.topEmoji != null) {
            output.z(serialDesc, 10, CheckpointEmoji$$serializer.INSTANCE, self.topEmoji);
        }
        if (output.I(serialDesc, 11) || self.topGuild != null) {
            output.z(serialDesc, 11, CheckpointGuild$$serializer.INSTANCE, self.topGuild);
        }
        if (!output.I(serialDesc, 12) && self.topGame == null) {
            return;
        }
        output.z(serialDesc, 12, CheckpointApplication$$serializer.INSTANCE, self.topGame);
    }

    /* renamed from: component1, reason: from getter */
    public final int getVersion() {
        return this.version;
    }

    /* renamed from: component10, reason: from getter */
    public final CheckpointCardClickable getClickable() {
        return this.clickable;
    }

    /* renamed from: component11, reason: from getter */
    public final CheckpointEmoji getTopEmoji() {
        return this.topEmoji;
    }

    /* renamed from: component12, reason: from getter */
    public final CheckpointGuild getTopGuild() {
        return this.topGuild;
    }

    /* renamed from: component13, reason: from getter */
    public final CheckpointApplication getTopGame() {
        return this.topGame;
    }

    /* renamed from: component2-re6GcUE, reason: not valid java name and from getter */
    public final long getAuthorId() {
        return this.authorId;
    }

    @NotNull
    /* renamed from: component3, reason: from getter */
    public final String getCardId() {
        return this.cardId;
    }

    @NotNull
    /* renamed from: component4, reason: from getter */
    public final String getCardAssetUrl() {
        return this.cardAssetUrl;
    }

    @NotNull
    /* renamed from: component5, reason: from getter */
    public final String getPowerLevel() {
        return this.powerLevel;
    }

    /* renamed from: component6, reason: from getter */
    public final int getPowerLevelUnits() {
        return this.powerLevelUnits;
    }

    @NotNull
    /* renamed from: component7, reason: from getter */
    public final String getMessagesString() {
        return this.messagesString;
    }

    @NotNull
    /* renamed from: component8, reason: from getter */
    public final String getVoiceString() {
        return this.voiceString;
    }

    @NotNull
    /* renamed from: component9, reason: from getter */
    public final String getReactionString() {
        return this.reactionString;
    }

    @NotNull
    /* renamed from: copy-_o2MRsY, reason: not valid java name */
    public final CheckpointDataV2025 m301copy_o2MRsY(int version, long authorId, @NotNull String cardId, @NotNull String cardAssetUrl, @NotNull String powerLevel, int powerLevelUnits, @NotNull String messagesString, @NotNull String voiceString, @NotNull String reactionString, CheckpointCardClickable clickable, CheckpointEmoji topEmoji, CheckpointGuild topGuild, CheckpointApplication topGame) {
        Intrinsics.checkNotNullParameter(cardId, "cardId");
        Intrinsics.checkNotNullParameter(cardAssetUrl, "cardAssetUrl");
        Intrinsics.checkNotNullParameter(powerLevel, "powerLevel");
        Intrinsics.checkNotNullParameter(messagesString, "messagesString");
        Intrinsics.checkNotNullParameter(voiceString, "voiceString");
        Intrinsics.checkNotNullParameter(reactionString, "reactionString");
        return new CheckpointDataV2025(version, authorId, cardId, cardAssetUrl, powerLevel, powerLevelUnits, messagesString, voiceString, reactionString, clickable, topEmoji, topGuild, topGame, null);
    }

    public boolean equals(Object other) {
        if (this == other) {
            return true;
        }
        if (!(other instanceof CheckpointDataV2025)) {
            return false;
        }
        CheckpointDataV2025 checkpointDataV2025 = (CheckpointDataV2025) other;
        return this.version == checkpointDataV2025.version && UserId.m1245equalsimpl0(this.authorId, checkpointDataV2025.authorId) && Intrinsics.areEqual(this.cardId, checkpointDataV2025.cardId) && Intrinsics.areEqual(this.cardAssetUrl, checkpointDataV2025.cardAssetUrl) && Intrinsics.areEqual(this.powerLevel, checkpointDataV2025.powerLevel) && this.powerLevelUnits == checkpointDataV2025.powerLevelUnits && Intrinsics.areEqual(this.messagesString, checkpointDataV2025.messagesString) && Intrinsics.areEqual(this.voiceString, checkpointDataV2025.voiceString) && Intrinsics.areEqual(this.reactionString, checkpointDataV2025.reactionString) && Intrinsics.areEqual(this.clickable, checkpointDataV2025.clickable) && Intrinsics.areEqual(this.topEmoji, checkpointDataV2025.topEmoji) && Intrinsics.areEqual(this.topGuild, checkpointDataV2025.topGuild) && Intrinsics.areEqual(this.topGame, checkpointDataV2025.topGame);
    }

    /* renamed from: getAuthorId-re6GcUE, reason: not valid java name */
    public final long m302getAuthorIdre6GcUE() {
        return this.authorId;
    }

    @NotNull
    public final String getCardAssetUrl() {
        return this.cardAssetUrl;
    }

    @NotNull
    public final String getCardId() {
        return this.cardId;
    }

    public final CheckpointCardClickable getClickable() {
        return this.clickable;
    }

    @NotNull
    public final String getMessagesString() {
        return this.messagesString;
    }

    @NotNull
    public final String getPowerLevel() {
        return this.powerLevel;
    }

    public final int getPowerLevelUnits() {
        return this.powerLevelUnits;
    }

    @NotNull
    public final String getReactionString() {
        return this.reactionString;
    }

    public final CheckpointEmoji getTopEmoji() {
        return this.topEmoji;
    }

    public final CheckpointApplication getTopGame() {
        return this.topGame;
    }

    public final CheckpointGuild getTopGuild() {
        return this.topGuild;
    }

    @Override // com.discord.chat.bridge.botuikit.CheckpointData
    public int getVersion() {
        return this.version;
    }

    @NotNull
    public final String getVoiceString() {
        return this.voiceString;
    }

    public int hashCode() {
        int d6 = a3.e.d(a3.e.d(a3.e.d(a.u(this.powerLevelUnits, a3.e.d(a3.e.d(a3.e.d((UserId.m1246hashCodeimpl(this.authorId) + (Integer.hashCode(this.version) * 31)) * 31, 31, this.cardId), 31, this.cardAssetUrl), 31, this.powerLevel), 31), 31, this.messagesString), 31, this.voiceString), 31, this.reactionString);
        CheckpointCardClickable checkpointCardClickable = this.clickable;
        int hashCode = (d6 + (checkpointCardClickable == null ? 0 : checkpointCardClickable.hashCode())) * 31;
        CheckpointEmoji checkpointEmoji = this.topEmoji;
        int hashCode2 = (hashCode + (checkpointEmoji == null ? 0 : checkpointEmoji.hashCode())) * 31;
        CheckpointGuild checkpointGuild = this.topGuild;
        int hashCode3 = (hashCode2 + (checkpointGuild == null ? 0 : checkpointGuild.hashCode())) * 31;
        CheckpointApplication checkpointApplication = this.topGame;
        return hashCode3 + (checkpointApplication != null ? checkpointApplication.hashCode() : 0);
    }

    @NotNull
    public String toString() {
        int i5 = this.version;
        String m1248toStringimpl = UserId.m1248toStringimpl(this.authorId);
        String str = this.cardId;
        String str2 = this.cardAssetUrl;
        String str3 = this.powerLevel;
        int i6 = this.powerLevelUnits;
        String str4 = this.messagesString;
        String str5 = this.voiceString;
        String str6 = this.reactionString;
        CheckpointCardClickable checkpointCardClickable = this.clickable;
        CheckpointEmoji checkpointEmoji = this.topEmoji;
        CheckpointGuild checkpointGuild = this.topGuild;
        CheckpointApplication checkpointApplication = this.topGame;
        StringBuilder n6 = a.n("CheckpointDataV2025(version=", ", authorId=", m1248toStringimpl, i5, ", cardId=");
        a3.e.A(n6, str, ", cardAssetUrl=", str2, ", powerLevel=");
        n6.append(str3);
        n6.append(", powerLevelUnits=");
        n6.append(i6);
        n6.append(", messagesString=");
        a3.e.A(n6, str4, ", voiceString=", str5, ", reactionString=");
        n6.append(str6);
        n6.append(", clickable=");
        n6.append(checkpointCardClickable);
        n6.append(", topEmoji=");
        n6.append(checkpointEmoji);
        n6.append(", topGuild=");
        n6.append(checkpointGuild);
        n6.append(", topGame=");
        n6.append(checkpointApplication);
        n6.append(")");
        return n6.toString();
    }

    public /* synthetic */ CheckpointDataV2025(int i5, long j, String str, String str2, String str3, int i6, String str4, String str5, String str6, CheckpointCardClickable checkpointCardClickable, CheckpointEmoji checkpointEmoji, CheckpointGuild checkpointGuild, CheckpointApplication checkpointApplication, DefaultConstructorMarker defaultConstructorMarker) {
        this(i5, j, str, str2, str3, i6, str4, str5, str6, checkpointCardClickable, checkpointEmoji, checkpointGuild, checkpointApplication);
    }

    private /* synthetic */ CheckpointDataV2025(int i5, int i6, UserId userId, String str, String str2, String str3, int i10, String str4, String str5, String str6, CheckpointCardClickable checkpointCardClickable, CheckpointEmoji checkpointEmoji, CheckpointGuild checkpointGuild, CheckpointApplication checkpointApplication, SerializationConstructorMarker serializationConstructorMarker) {
        if (510 != (i5 & 510)) {
            h1.l(i5, 510, CheckpointDataV2025$$serializer.INSTANCE.getDescriptor());
            throw null;
        }
        this.version = (i5 & 1) == 0 ? CheckpointVersion.V2025.getValue() : i6;
        this.authorId = userId.m1250unboximpl();
        this.cardId = str;
        this.cardAssetUrl = str2;
        this.powerLevel = str3;
        this.powerLevelUnits = i10;
        this.messagesString = str4;
        this.voiceString = str5;
        this.reactionString = str6;
        if ((i5 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING) == 0) {
            this.clickable = null;
        } else {
            this.clickable = checkpointCardClickable;
        }
        if ((i5 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_OVERFLOW_INSET) == 0) {
            this.topEmoji = null;
        } else {
            this.topEmoji = checkpointEmoji;
        }
        if ((i5 & RecyclerView.ItemAnimator.FLAG_MOVED) == 0) {
            this.topGuild = null;
        } else {
            this.topGuild = checkpointGuild;
        }
        if ((i5 & RecyclerView.ItemAnimator.FLAG_APPEARED_IN_PRE_LAYOUT) == 0) {
            this.topGame = null;
        } else {
            this.topGame = checkpointApplication;
        }
    }

    private CheckpointDataV2025(int i5, long j, String cardId, String cardAssetUrl, String powerLevel, int i6, String messagesString, String voiceString, String reactionString, CheckpointCardClickable checkpointCardClickable, CheckpointEmoji checkpointEmoji, CheckpointGuild checkpointGuild, CheckpointApplication checkpointApplication) {
        Intrinsics.checkNotNullParameter(cardId, "cardId");
        Intrinsics.checkNotNullParameter(cardAssetUrl, "cardAssetUrl");
        Intrinsics.checkNotNullParameter(powerLevel, "powerLevel");
        Intrinsics.checkNotNullParameter(messagesString, "messagesString");
        Intrinsics.checkNotNullParameter(voiceString, "voiceString");
        Intrinsics.checkNotNullParameter(reactionString, "reactionString");
        this.version = i5;
        this.authorId = j;
        this.cardId = cardId;
        this.cardAssetUrl = cardAssetUrl;
        this.powerLevel = powerLevel;
        this.powerLevelUnits = i6;
        this.messagesString = messagesString;
        this.voiceString = voiceString;
        this.reactionString = reactionString;
        this.clickable = checkpointCardClickable;
        this.topEmoji = checkpointEmoji;
        this.topGuild = checkpointGuild;
        this.topGame = checkpointApplication;
    }

    public /* synthetic */ CheckpointDataV2025(int i5, long j, String str, String str2, String str3, int i6, String str4, String str5, String str6, CheckpointCardClickable checkpointCardClickable, CheckpointEmoji checkpointEmoji, CheckpointGuild checkpointGuild, CheckpointApplication checkpointApplication, int i10, DefaultConstructorMarker defaultConstructorMarker) {
        this((i10 & 1) != 0 ? CheckpointVersion.V2025.getValue() : i5, j, str, str2, str3, i6, str4, str5, str6, (i10 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING) != 0 ? null : checkpointCardClickable, (i10 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_OVERFLOW_INSET) != 0 ? null : checkpointEmoji, (i10 & RecyclerView.ItemAnimator.FLAG_MOVED) != 0 ? null : checkpointGuild, (i10 & RecyclerView.ItemAnimator.FLAG_APPEARED_IN_PRE_LAYOUT) != 0 ? null : checkpointApplication, null);
    }
}
