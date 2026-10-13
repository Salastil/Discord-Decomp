package com.discord.chat.reactevents;

import bs.g;
import bs.h1;
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
@Metadata(d1 = {"\u0000D\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0000\n\u0002\u0010\b\n\u0000\n\u0002\u0010\u000b\n\u0002\b\u0005\n\u0002\u0018\u0002\n\u0002\b\u0011\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0004\b\u0087\b\u0018\u0000 +2\u00020\u0001:\u0002*+B+\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005\u0012\b\u0010\u0006\u001a\u0004\u0018\u00010\u0007\u0012\b\u0010\b\u001a\u0004\u0018\u00010\u0007¢\u0006\u0004\b\t\u0010\nBA\b\u0010\u0012\u0006\u0010\u000b\u001a\u00020\u0005\u0012\b\u0010\u0002\u001a\u0004\u0018\u00010\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005\u0012\b\u0010\u0006\u001a\u0004\u0018\u00010\u0007\u0012\b\u0010\b\u001a\u0004\u0018\u00010\u0007\u0012\b\u0010\f\u001a\u0004\u0018\u00010\r¢\u0006\u0004\b\t\u0010\u000eJ\t\u0010\u0017\u001a\u00020\u0003HÆ\u0003J\t\u0010\u0018\u001a\u00020\u0005HÆ\u0003J\u0010\u0010\u0019\u001a\u0004\u0018\u00010\u0007HÆ\u0003¢\u0006\u0002\u0010\u0014J\u0010\u0010\u001a\u001a\u0004\u0018\u00010\u0007HÆ\u0003¢\u0006\u0002\u0010\u0014J:\u0010\u001b\u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u00032\b\b\u0002\u0010\u0004\u001a\u00020\u00052\n\b\u0002\u0010\u0006\u001a\u0004\u0018\u00010\u00072\n\b\u0002\u0010\b\u001a\u0004\u0018\u00010\u0007HÆ\u0001¢\u0006\u0002\u0010\u001cJ\u0013\u0010\u001d\u001a\u00020\u00072\b\u0010\u001e\u001a\u0004\u0018\u00010\u001fHÖ\u0003J\t\u0010 \u001a\u00020\u0005HÖ\u0001J\t\u0010!\u001a\u00020\u0003HÖ\u0001J%\u0010\"\u001a\u00020#2\u0006\u0010$\u001a\u00020\u00002\u0006\u0010%\u001a\u00020&2\u0006\u0010'\u001a\u00020(H\u0001¢\u0006\u0002\b)R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u000f\u0010\u0010R\u0011\u0010\u0004\u001a\u00020\u0005¢\u0006\b\n\u0000\u001a\u0004\b\u0011\u0010\u0012R\u0015\u0010\u0006\u001a\u0004\u0018\u00010\u0007¢\u0006\n\n\u0002\u0010\u0015\u001a\u0004\b\u0013\u0010\u0014R\u0015\u0010\b\u001a\u0004\u0018\u00010\u0007¢\u0006\n\n\u0002\u0010\u0015\u001a\u0004\b\u0016\u0010\u0014¨\u0006,"}, d2 = {"Lcom/discord/chat/reactevents/TapInviteEvent;", "Lcom/discord/reactevents/ReactEvent;", "messageId", "", "index", "", "primary", "", "secondary", "<init>", "(Ljava/lang/String;ILjava/lang/Boolean;Ljava/lang/Boolean;)V", "seen0", "serializationConstructorMarker", "Lkotlinx/serialization/internal/SerializationConstructorMarker;", "(ILjava/lang/String;ILjava/lang/Boolean;Ljava/lang/Boolean;Lkotlinx/serialization/internal/SerializationConstructorMarker;)V", "getMessageId", "()Ljava/lang/String;", "getIndex", "()I", "getPrimary", "()Ljava/lang/Boolean;", "Ljava/lang/Boolean;", "getSecondary", "component1", "component2", "component3", "component4", "copy", "(Ljava/lang/String;ILjava/lang/Boolean;Ljava/lang/Boolean;)Lcom/discord/chat/reactevents/TapInviteEvent;", "equals", JankRecordStore.SCREEN_OTHER, "", "hashCode", "toString", "write$Self", "", "self", "output", "Lkotlinx/serialization/encoding/CompositeEncoder;", "serialDesc", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "write$Self$chat_release", "$serializer", "Companion", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final /* data */ class TapInviteEvent implements ReactEvent {

    /* renamed from: Companion, reason: from kotlin metadata */
    @NotNull
    public static final Companion INSTANCE = new Companion(null);
    private final int index;

    @NotNull
    private final String messageId;
    private final Boolean primary;
    private final Boolean secondary;

    @Metadata(d1 = {"\u0000\u0016\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\f\u0010\u0004\u001a\b\u0012\u0004\u0012\u00020\u00060\u0005¨\u0006\u0007"}, d2 = {"Lcom/discord/chat/reactevents/TapInviteEvent$Companion;", "", "<init>", "()V", "serializer", "Lkotlinx/serialization/KSerializer;", "Lcom/discord/chat/reactevents/TapInviteEvent;", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final class Companion {
        private Companion() {
        }

        @NotNull
        public final KSerializer serializer() {
            return TapInviteEvent$$serializer.INSTANCE;
        }

        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }
    }

    public /* synthetic */ TapInviteEvent(int i5, String str, int i6, Boolean bool, Boolean bool2, SerializationConstructorMarker serializationConstructorMarker) {
        if (15 != (i5 & 15)) {
            h1.l(i5, 15, TapInviteEvent$$serializer.INSTANCE.getDescriptor());
            throw null;
        }
        this.messageId = str;
        this.index = i6;
        this.primary = bool;
        this.secondary = bool2;
    }

    public static /* synthetic */ TapInviteEvent copy$default(TapInviteEvent tapInviteEvent, String str, int i5, Boolean bool, Boolean bool2, int i6, Object obj) {
        if ((i6 & 1) != 0) {
            str = tapInviteEvent.messageId;
        }
        if ((i6 & 2) != 0) {
            i5 = tapInviteEvent.index;
        }
        if ((i6 & 4) != 0) {
            bool = tapInviteEvent.primary;
        }
        if ((i6 & 8) != 0) {
            bool2 = tapInviteEvent.secondary;
        }
        return tapInviteEvent.copy(str, i5, bool, bool2);
    }

    public static final /* synthetic */ void write$Self$chat_release(TapInviteEvent self, CompositeEncoder output, SerialDescriptor serialDesc) {
        output.y(serialDesc, 0, self.messageId);
        output.n(1, self.index, serialDesc);
        g gVar = g.a;
        output.z(serialDesc, 2, gVar, self.primary);
        output.z(serialDesc, 3, gVar, self.secondary);
    }

    @NotNull
    /* renamed from: component1, reason: from getter */
    public final String getMessageId() {
        return this.messageId;
    }

    /* renamed from: component2, reason: from getter */
    public final int getIndex() {
        return this.index;
    }

    /* renamed from: component3, reason: from getter */
    public final Boolean getPrimary() {
        return this.primary;
    }

    /* renamed from: component4, reason: from getter */
    public final Boolean getSecondary() {
        return this.secondary;
    }

    @NotNull
    public final TapInviteEvent copy(@NotNull String messageId, int index, Boolean primary, Boolean secondary) {
        Intrinsics.checkNotNullParameter(messageId, "messageId");
        return new TapInviteEvent(messageId, index, primary, secondary);
    }

    public boolean equals(Object other) {
        if (this == other) {
            return true;
        }
        if (!(other instanceof TapInviteEvent)) {
            return false;
        }
        TapInviteEvent tapInviteEvent = (TapInviteEvent) other;
        return Intrinsics.areEqual(this.messageId, tapInviteEvent.messageId) && this.index == tapInviteEvent.index && Intrinsics.areEqual(this.primary, tapInviteEvent.primary) && Intrinsics.areEqual(this.secondary, tapInviteEvent.secondary);
    }

    public final int getIndex() {
        return this.index;
    }

    @NotNull
    public final String getMessageId() {
        return this.messageId;
    }

    public final Boolean getPrimary() {
        return this.primary;
    }

    public final Boolean getSecondary() {
        return this.secondary;
    }

    public int hashCode() {
        int u5 = com.discord.chat.bridge.botuikit.a.u(this.index, this.messageId.hashCode() * 31, 31);
        Boolean bool = this.primary;
        int hashCode = (u5 + (bool == null ? 0 : bool.hashCode())) * 31;
        Boolean bool2 = this.secondary;
        return hashCode + (bool2 != null ? bool2.hashCode() : 0);
    }

    @Override // com.discord.reactevents.ReactEvent
    @NotNull
    /* renamed from: serialize */
    public WritableMap getData() {
        return ReactEvent.DefaultImpls.serialize(this);
    }

    @NotNull
    public String toString() {
        String str = this.messageId;
        int i5 = this.index;
        Boolean bool = this.primary;
        Boolean bool2 = this.secondary;
        StringBuilder s2 = a3.e.s("TapInviteEvent(messageId=", str, ", index=", i5, ", primary=");
        s2.append(bool);
        s2.append(", secondary=");
        s2.append(bool2);
        s2.append(")");
        return s2.toString();
    }

    public TapInviteEvent(@NotNull String messageId, int i5, Boolean bool, Boolean bool2) {
        Intrinsics.checkNotNullParameter(messageId, "messageId");
        this.messageId = messageId;
        this.index = i5;
        this.primary = bool;
        this.secondary = bool2;
    }
}
