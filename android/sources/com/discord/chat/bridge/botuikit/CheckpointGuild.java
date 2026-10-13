package com.discord.chat.bridge.botuikit;

import bs.h1;
import bs.v1;
import com.discord.jank_stats.JankRecordStore;
import com.discord.primitives.GuildId;
import com.discord.primitives.GuildId$$serializer;
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
@Metadata(d1 = {"\u0000D\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\u000e\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0010\b\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u000f\n\u0002\u0010\u000b\n\u0002\b\u0004\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0004\b\u0087\b\u0018\u0000 )2\u00020\u0001:\u0002()B#\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005\u0012\n\b\u0002\u0010\u0006\u001a\u0004\u0018\u00010\u0003¢\u0006\u0004\b\u0007\u0010\bB9\b\u0010\u0012\u0006\u0010\t\u001a\u00020\n\u0012\b\u0010\u0002\u001a\u0004\u0018\u00010\u0003\u0012\b\u0010\u0004\u001a\u0004\u0018\u00010\u0005\u0012\b\u0010\u0006\u001a\u0004\u0018\u00010\u0003\u0012\b\u0010\u000b\u001a\u0004\u0018\u00010\f¢\u0006\u0004\b\u0007\u0010\rJ\t\u0010\u0014\u001a\u00020\u0003HÆ\u0003J\u0010\u0010\u0015\u001a\u00020\u0005HÆ\u0003¢\u0006\u0004\b\u0016\u0010\u0011J\u000b\u0010\u0017\u001a\u0004\u0018\u00010\u0003HÆ\u0003J0\u0010\u0018\u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u00032\b\b\u0002\u0010\u0004\u001a\u00020\u00052\n\b\u0002\u0010\u0006\u001a\u0004\u0018\u00010\u0003HÆ\u0001¢\u0006\u0004\b\u0019\u0010\u001aJ\u0013\u0010\u001b\u001a\u00020\u001c2\b\u0010\u001d\u001a\u0004\u0018\u00010\u0001HÖ\u0003J\t\u0010\u001e\u001a\u00020\nHÖ\u0001J\t\u0010\u001f\u001a\u00020\u0003HÖ\u0001J%\u0010 \u001a\u00020!2\u0006\u0010\"\u001a\u00020\u00002\u0006\u0010#\u001a\u00020$2\u0006\u0010%\u001a\u00020&H\u0001¢\u0006\u0002\b'R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u000e\u0010\u000fR\u0013\u0010\u0004\u001a\u00020\u0005¢\u0006\n\n\u0002\u0010\u0012\u001a\u0004\b\u0010\u0010\u0011R\u0013\u0010\u0006\u001a\u0004\u0018\u00010\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0013\u0010\u000f¨\u0006*"}, d2 = {"Lcom/discord/chat/bridge/botuikit/CheckpointGuild;", "", "guildName", "", "guildId", "Lcom/discord/primitives/GuildId;", "guildIcon", "<init>", "(Ljava/lang/String;JLjava/lang/String;Lkotlin/jvm/internal/DefaultConstructorMarker;)V", "seen0", "", "serializationConstructorMarker", "Lkotlinx/serialization/internal/SerializationConstructorMarker;", "(ILjava/lang/String;Lcom/discord/primitives/GuildId;Ljava/lang/String;Lkotlinx/serialization/internal/SerializationConstructorMarker;Lkotlin/jvm/internal/DefaultConstructorMarker;)V", "getGuildName", "()Ljava/lang/String;", "getGuildId-fYKD8eg", "()J", "J", "getGuildIcon", "component1", "component2", "component2-fYKD8eg", "component3", "copy", "copy-PzX8qg4", "(Ljava/lang/String;JLjava/lang/String;)Lcom/discord/chat/bridge/botuikit/CheckpointGuild;", "equals", "", JankRecordStore.SCREEN_OTHER, "hashCode", "toString", "write$Self", "", "self", "output", "Lkotlinx/serialization/encoding/CompositeEncoder;", "serialDesc", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "write$Self$chat_release", "$serializer", "Companion", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final /* data */ class CheckpointGuild {

    /* renamed from: Companion, reason: from kotlin metadata */
    @NotNull
    public static final Companion INSTANCE = new Companion(null);
    private final String guildIcon;
    private final long guildId;

    @NotNull
    private final String guildName;

    @Metadata(d1 = {"\u0000\u0016\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\f\u0010\u0004\u001a\b\u0012\u0004\u0012\u00020\u00060\u0005¨\u0006\u0007"}, d2 = {"Lcom/discord/chat/bridge/botuikit/CheckpointGuild$Companion;", "", "<init>", "()V", "serializer", "Lkotlinx/serialization/KSerializer;", "Lcom/discord/chat/bridge/botuikit/CheckpointGuild;", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final class Companion {
        private Companion() {
        }

        @NotNull
        public final KSerializer serializer() {
            return CheckpointGuild$$serializer.INSTANCE;
        }

        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }
    }

    public /* synthetic */ CheckpointGuild(int i5, String str, GuildId guildId, String str2, SerializationConstructorMarker serializationConstructorMarker, DefaultConstructorMarker defaultConstructorMarker) {
        this(i5, str, guildId, str2, serializationConstructorMarker);
    }

    /* renamed from: copy-PzX8qg4$default, reason: not valid java name */
    public static /* synthetic */ CheckpointGuild m303copyPzX8qg4$default(CheckpointGuild checkpointGuild, String str, long j, String str2, int i5, Object obj) {
        if ((i5 & 1) != 0) {
            str = checkpointGuild.guildName;
        }
        if ((i5 & 2) != 0) {
            j = checkpointGuild.guildId;
        }
        if ((i5 & 4) != 0) {
            str2 = checkpointGuild.guildIcon;
        }
        return checkpointGuild.m305copyPzX8qg4(str, j, str2);
    }

    public static final /* synthetic */ void write$Self$chat_release(CheckpointGuild self, CompositeEncoder output, SerialDescriptor serialDesc) {
        output.y(serialDesc, 0, self.guildName);
        output.g(serialDesc, 1, GuildId$$serializer.INSTANCE, GuildId.m1176boximpl(self.guildId));
        if (!output.I(serialDesc, 2) && self.guildIcon == null) {
            return;
        }
        output.z(serialDesc, 2, v1.a, self.guildIcon);
    }

    @NotNull
    /* renamed from: component1, reason: from getter */
    public final String getGuildName() {
        return this.guildName;
    }

    /* renamed from: component2-fYKD8eg, reason: not valid java name and from getter */
    public final long getGuildId() {
        return this.guildId;
    }

    /* renamed from: component3, reason: from getter */
    public final String getGuildIcon() {
        return this.guildIcon;
    }

    @NotNull
    /* renamed from: copy-PzX8qg4, reason: not valid java name */
    public final CheckpointGuild m305copyPzX8qg4(@NotNull String guildName, long guildId, String guildIcon) {
        Intrinsics.checkNotNullParameter(guildName, "guildName");
        return new CheckpointGuild(guildName, guildId, guildIcon, null);
    }

    public boolean equals(Object other) {
        if (this == other) {
            return true;
        }
        if (!(other instanceof CheckpointGuild)) {
            return false;
        }
        CheckpointGuild checkpointGuild = (CheckpointGuild) other;
        return Intrinsics.areEqual(this.guildName, checkpointGuild.guildName) && GuildId.m1180equalsimpl0(this.guildId, checkpointGuild.guildId) && Intrinsics.areEqual(this.guildIcon, checkpointGuild.guildIcon);
    }

    public final String getGuildIcon() {
        return this.guildIcon;
    }

    /* renamed from: getGuildId-fYKD8eg, reason: not valid java name */
    public final long m306getGuildIdfYKD8eg() {
        return this.guildId;
    }

    @NotNull
    public final String getGuildName() {
        return this.guildName;
    }

    public int hashCode() {
        int m1181hashCodeimpl = (GuildId.m1181hashCodeimpl(this.guildId) + (this.guildName.hashCode() * 31)) * 31;
        String str = this.guildIcon;
        return m1181hashCodeimpl + (str == null ? 0 : str.hashCode());
    }

    @NotNull
    public String toString() {
        String str = this.guildName;
        String m1183toStringimpl = GuildId.m1183toStringimpl(this.guildId);
        return a.j(a3.e.t("CheckpointGuild(guildName=", str, ", guildId=", m1183toStringimpl, ", guildIcon="), this.guildIcon, ")");
    }

    public /* synthetic */ CheckpointGuild(String str, long j, String str2, DefaultConstructorMarker defaultConstructorMarker) {
        this(str, j, str2);
    }

    private /* synthetic */ CheckpointGuild(int i5, String str, GuildId guildId, String str2, SerializationConstructorMarker serializationConstructorMarker) {
        if (3 != (i5 & 3)) {
            h1.l(i5, 3, CheckpointGuild$$serializer.INSTANCE.getDescriptor());
            throw null;
        }
        this.guildName = str;
        this.guildId = guildId.m1185unboximpl();
        if ((i5 & 4) == 0) {
            this.guildIcon = null;
        } else {
            this.guildIcon = str2;
        }
    }

    private CheckpointGuild(String guildName, long j, String str) {
        Intrinsics.checkNotNullParameter(guildName, "guildName");
        this.guildName = guildName;
        this.guildId = j;
        this.guildIcon = str;
    }

    public /* synthetic */ CheckpointGuild(String str, long j, String str2, int i5, DefaultConstructorMarker defaultConstructorMarker) {
        this(str, j, (i5 & 4) != 0 ? null : str2, null);
    }
}
