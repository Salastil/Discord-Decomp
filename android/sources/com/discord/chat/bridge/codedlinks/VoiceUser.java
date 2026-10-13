package com.discord.chat.bridge.codedlinks;

import bs.h1;
import bs.o0;
import bs.v1;
import com.discord.jank_stats.JankRecordStore;
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
@Metadata(d1 = {"\u0000>\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0003\n\u0002\u0010\u000b\n\u0000\n\u0002\u0010\b\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0002\b\u0015\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0004\b\u0087\b\u0018\u0000 ,2\u00020\u0001:\u0002+,B9\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0003\u0012\n\b\u0002\u0010\u0005\u001a\u0004\u0018\u00010\u0003\u0012\b\b\u0002\u0010\u0006\u001a\u00020\u0007\u0012\n\b\u0002\u0010\b\u001a\u0004\u0018\u00010\t¢\u0006\u0004\b\n\u0010\u000bBK\b\u0010\u0012\u0006\u0010\f\u001a\u00020\t\u0012\b\u0010\u0002\u001a\u0004\u0018\u00010\u0003\u0012\b\u0010\u0004\u001a\u0004\u0018\u00010\u0003\u0012\b\u0010\u0005\u001a\u0004\u0018\u00010\u0003\u0012\u0006\u0010\u0006\u001a\u00020\u0007\u0012\b\u0010\b\u001a\u0004\u0018\u00010\t\u0012\b\u0010\r\u001a\u0004\u0018\u00010\u000e¢\u0006\u0004\b\n\u0010\u000fJ\t\u0010\u0018\u001a\u00020\u0003HÆ\u0003J\t\u0010\u0019\u001a\u00020\u0003HÆ\u0003J\u000b\u0010\u001a\u001a\u0004\u0018\u00010\u0003HÆ\u0003J\t\u0010\u001b\u001a\u00020\u0007HÆ\u0003J\u0010\u0010\u001c\u001a\u0004\u0018\u00010\tHÆ\u0003¢\u0006\u0002\u0010\u0016JD\u0010\u001d\u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u00032\b\b\u0002\u0010\u0004\u001a\u00020\u00032\n\b\u0002\u0010\u0005\u001a\u0004\u0018\u00010\u00032\b\b\u0002\u0010\u0006\u001a\u00020\u00072\n\b\u0002\u0010\b\u001a\u0004\u0018\u00010\tHÆ\u0001¢\u0006\u0002\u0010\u001eJ\u0013\u0010\u001f\u001a\u00020\u00072\b\u0010 \u001a\u0004\u0018\u00010\u0001HÖ\u0003J\t\u0010!\u001a\u00020\tHÖ\u0001J\t\u0010\"\u001a\u00020\u0003HÖ\u0001J%\u0010#\u001a\u00020$2\u0006\u0010%\u001a\u00020\u00002\u0006\u0010&\u001a\u00020'2\u0006\u0010(\u001a\u00020)H\u0001¢\u0006\u0002\b*R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0010\u0010\u0011R\u0011\u0010\u0004\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0012\u0010\u0011R\u0013\u0010\u0005\u001a\u0004\u0018\u00010\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0013\u0010\u0011R\u0011\u0010\u0006\u001a\u00020\u0007¢\u0006\b\n\u0000\u001a\u0004\b\u0006\u0010\u0014R\u0015\u0010\b\u001a\u0004\u0018\u00010\t¢\u0006\n\n\u0002\u0010\u0017\u001a\u0004\b\u0015\u0010\u0016¨\u0006-"}, d2 = {"Lcom/discord/chat/bridge/codedlinks/VoiceUser;", "", "userId", "", "displayName", "avatarUrl", "isStreaming", "", "fontId", "", "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;ZLjava/lang/Integer;)V", "seen0", "serializationConstructorMarker", "Lkotlinx/serialization/internal/SerializationConstructorMarker;", "(ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;ZLjava/lang/Integer;Lkotlinx/serialization/internal/SerializationConstructorMarker;)V", "getUserId", "()Ljava/lang/String;", "getDisplayName", "getAvatarUrl", "()Z", "getFontId", "()Ljava/lang/Integer;", "Ljava/lang/Integer;", "component1", "component2", "component3", "component4", "component5", "copy", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;ZLjava/lang/Integer;)Lcom/discord/chat/bridge/codedlinks/VoiceUser;", "equals", JankRecordStore.SCREEN_OTHER, "hashCode", "toString", "write$Self", "", "self", "output", "Lkotlinx/serialization/encoding/CompositeEncoder;", "serialDesc", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "write$Self$chat_release", "$serializer", "Companion", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final /* data */ class VoiceUser {

    /* renamed from: Companion, reason: from kotlin metadata */
    @NotNull
    public static final Companion INSTANCE = new Companion(null);
    private final String avatarUrl;

    @NotNull
    private final String displayName;
    private final Integer fontId;
    private final boolean isStreaming;

    @NotNull
    private final String userId;

    @Metadata(d1 = {"\u0000\u0016\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\f\u0010\u0004\u001a\b\u0012\u0004\u0012\u00020\u00060\u0005¨\u0006\u0007"}, d2 = {"Lcom/discord/chat/bridge/codedlinks/VoiceUser$Companion;", "", "<init>", "()V", "serializer", "Lkotlinx/serialization/KSerializer;", "Lcom/discord/chat/bridge/codedlinks/VoiceUser;", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final class Companion {
        private Companion() {
        }

        @NotNull
        public final KSerializer serializer() {
            return VoiceUser$$serializer.INSTANCE;
        }

        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }
    }

    public /* synthetic */ VoiceUser(int i5, String str, String str2, String str3, boolean z5, Integer num, SerializationConstructorMarker serializationConstructorMarker) {
        if (3 != (i5 & 3)) {
            h1.l(i5, 3, VoiceUser$$serializer.INSTANCE.getDescriptor());
            throw null;
        }
        this.userId = str;
        this.displayName = str2;
        if ((i5 & 4) == 0) {
            this.avatarUrl = null;
        } else {
            this.avatarUrl = str3;
        }
        if ((i5 & 8) == 0) {
            this.isStreaming = false;
        } else {
            this.isStreaming = z5;
        }
        if ((i5 & 16) == 0) {
            this.fontId = null;
        } else {
            this.fontId = num;
        }
    }

    public static /* synthetic */ VoiceUser copy$default(VoiceUser voiceUser, String str, String str2, String str3, boolean z5, Integer num, int i5, Object obj) {
        if ((i5 & 1) != 0) {
            str = voiceUser.userId;
        }
        if ((i5 & 2) != 0) {
            str2 = voiceUser.displayName;
        }
        if ((i5 & 4) != 0) {
            str3 = voiceUser.avatarUrl;
        }
        if ((i5 & 8) != 0) {
            z5 = voiceUser.isStreaming;
        }
        if ((i5 & 16) != 0) {
            num = voiceUser.fontId;
        }
        Integer num2 = num;
        String str4 = str3;
        return voiceUser.copy(str, str2, str4, z5, num2);
    }

    public static final /* synthetic */ void write$Self$chat_release(VoiceUser self, CompositeEncoder output, SerialDescriptor serialDesc) {
        output.y(serialDesc, 0, self.userId);
        output.y(serialDesc, 1, self.displayName);
        if (output.I(serialDesc, 2) || self.avatarUrl != null) {
            output.z(serialDesc, 2, v1.a, self.avatarUrl);
        }
        if (output.I(serialDesc, 3) || self.isStreaming) {
            output.x(serialDesc, 3, self.isStreaming);
        }
        if (!output.I(serialDesc, 4) && self.fontId == null) {
            return;
        }
        output.z(serialDesc, 4, o0.a, self.fontId);
    }

    @NotNull
    /* renamed from: component1, reason: from getter */
    public final String getUserId() {
        return this.userId;
    }

    @NotNull
    /* renamed from: component2, reason: from getter */
    public final String getDisplayName() {
        return this.displayName;
    }

    /* renamed from: component3, reason: from getter */
    public final String getAvatarUrl() {
        return this.avatarUrl;
    }

    /* renamed from: component4, reason: from getter */
    public final boolean getIsStreaming() {
        return this.isStreaming;
    }

    /* renamed from: component5, reason: from getter */
    public final Integer getFontId() {
        return this.fontId;
    }

    @NotNull
    public final VoiceUser copy(@NotNull String userId, @NotNull String displayName, String avatarUrl, boolean isStreaming, Integer fontId) {
        Intrinsics.checkNotNullParameter(userId, "userId");
        Intrinsics.checkNotNullParameter(displayName, "displayName");
        return new VoiceUser(userId, displayName, avatarUrl, isStreaming, fontId);
    }

    public boolean equals(Object other) {
        if (this == other) {
            return true;
        }
        if (!(other instanceof VoiceUser)) {
            return false;
        }
        VoiceUser voiceUser = (VoiceUser) other;
        return Intrinsics.areEqual(this.userId, voiceUser.userId) && Intrinsics.areEqual(this.displayName, voiceUser.displayName) && Intrinsics.areEqual(this.avatarUrl, voiceUser.avatarUrl) && this.isStreaming == voiceUser.isStreaming && Intrinsics.areEqual(this.fontId, voiceUser.fontId);
    }

    public final String getAvatarUrl() {
        return this.avatarUrl;
    }

    @NotNull
    public final String getDisplayName() {
        return this.displayName;
    }

    public final Integer getFontId() {
        return this.fontId;
    }

    @NotNull
    public final String getUserId() {
        return this.userId;
    }

    public int hashCode() {
        int d6 = a3.e.d(this.userId.hashCode() * 31, 31, this.displayName);
        String str = this.avatarUrl;
        int d7 = d.d((d6 + (str == null ? 0 : str.hashCode())) * 31, 31, this.isStreaming);
        Integer num = this.fontId;
        return d7 + (num != null ? num.hashCode() : 0);
    }

    public final boolean isStreaming() {
        return this.isStreaming;
    }

    @NotNull
    public String toString() {
        String str = this.userId;
        String str2 = this.displayName;
        String str3 = this.avatarUrl;
        boolean z5 = this.isStreaming;
        Integer num = this.fontId;
        StringBuilder t5 = a3.e.t("VoiceUser(userId=", str, ", displayName=", str2, ", avatarUrl=");
        t5.append(str3);
        t5.append(", isStreaming=");
        t5.append(z5);
        t5.append(", fontId=");
        t5.append(num);
        t5.append(")");
        return t5.toString();
    }

    public VoiceUser(@NotNull String userId, @NotNull String displayName, String str, boolean z5, Integer num) {
        Intrinsics.checkNotNullParameter(userId, "userId");
        Intrinsics.checkNotNullParameter(displayName, "displayName");
        this.userId = userId;
        this.displayName = displayName;
        this.avatarUrl = str;
        this.isStreaming = z5;
        this.fontId = num;
    }

    public /* synthetic */ VoiceUser(String str, String str2, String str3, boolean z5, Integer num, int i5, DefaultConstructorMarker defaultConstructorMarker) {
        this(str, str2, (i5 & 4) != 0 ? null : str3, (i5 & 8) != 0 ? false : z5, (i5 & 16) != 0 ? null : num);
    }
}
