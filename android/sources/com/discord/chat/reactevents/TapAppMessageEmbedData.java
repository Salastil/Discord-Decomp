package com.discord.chat.reactevents;

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
@Metadata(d1 = {"\u0000D\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0006\n\u0002\u0010\b\n\u0000\n\u0002\u0018\u0002\n\u0002\b\f\n\u0002\u0010\u000b\n\u0000\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0004\b\u0081\b\u0018\u0000 '2\u00020\u0001:\u0002&'B'\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0003\u0012\u0006\u0010\u0005\u001a\u00020\u0003\u0012\u0006\u0010\u0006\u001a\u00020\u0003¢\u0006\u0004\b\u0007\u0010\bBC\b\u0010\u0012\u0006\u0010\t\u001a\u00020\n\u0012\b\u0010\u0002\u001a\u0004\u0018\u00010\u0003\u0012\b\u0010\u0004\u001a\u0004\u0018\u00010\u0003\u0012\b\u0010\u0005\u001a\u0004\u0018\u00010\u0003\u0012\b\u0010\u0006\u001a\u0004\u0018\u00010\u0003\u0012\b\u0010\u000b\u001a\u0004\u0018\u00010\f¢\u0006\u0004\b\u0007\u0010\rJ\t\u0010\u0013\u001a\u00020\u0003HÆ\u0003J\t\u0010\u0014\u001a\u00020\u0003HÆ\u0003J\t\u0010\u0015\u001a\u00020\u0003HÆ\u0003J\t\u0010\u0016\u001a\u00020\u0003HÆ\u0003J1\u0010\u0017\u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u00032\b\b\u0002\u0010\u0004\u001a\u00020\u00032\b\b\u0002\u0010\u0005\u001a\u00020\u00032\b\b\u0002\u0010\u0006\u001a\u00020\u0003HÆ\u0001J\u0013\u0010\u0018\u001a\u00020\u00192\b\u0010\u001a\u001a\u0004\u0018\u00010\u001bHÖ\u0003J\t\u0010\u001c\u001a\u00020\nHÖ\u0001J\t\u0010\u001d\u001a\u00020\u0003HÖ\u0001J%\u0010\u001e\u001a\u00020\u001f2\u0006\u0010 \u001a\u00020\u00002\u0006\u0010!\u001a\u00020\"2\u0006\u0010#\u001a\u00020$H\u0001¢\u0006\u0002\b%R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u000e\u0010\u000fR\u0011\u0010\u0004\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0010\u0010\u000fR\u0011\u0010\u0005\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0011\u0010\u000fR\u0011\u0010\u0006\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0012\u0010\u000f¨\u0006("}, d2 = {"Lcom/discord/chat/reactevents/TapAppMessageEmbedData;", "Lcom/discord/reactevents/ReactEvent;", "messageId", "", "actionId", "appId", "embedUrl", "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", "seen0", "", "serializationConstructorMarker", "Lkotlinx/serialization/internal/SerializationConstructorMarker;", "(ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lkotlinx/serialization/internal/SerializationConstructorMarker;)V", "getMessageId", "()Ljava/lang/String;", "getActionId", "getAppId", "getEmbedUrl", "component1", "component2", "component3", "component4", "copy", "equals", "", JankRecordStore.SCREEN_OTHER, "", "hashCode", "toString", "write$Self", "", "self", "output", "Lkotlinx/serialization/encoding/CompositeEncoder;", "serialDesc", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "write$Self$chat_release", "$serializer", "Companion", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final /* data */ class TapAppMessageEmbedData implements ReactEvent {

    /* renamed from: Companion, reason: from kotlin metadata */
    @NotNull
    public static final Companion INSTANCE = new Companion(null);

    @NotNull
    private final String actionId;

    @NotNull
    private final String appId;

    @NotNull
    private final String embedUrl;

    @NotNull
    private final String messageId;

    @Metadata(d1 = {"\u0000\u0016\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\f\u0010\u0004\u001a\b\u0012\u0004\u0012\u00020\u00060\u0005¨\u0006\u0007"}, d2 = {"Lcom/discord/chat/reactevents/TapAppMessageEmbedData$Companion;", "", "<init>", "()V", "serializer", "Lkotlinx/serialization/KSerializer;", "Lcom/discord/chat/reactevents/TapAppMessageEmbedData;", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final class Companion {
        private Companion() {
        }

        @NotNull
        public final KSerializer serializer() {
            return TapAppMessageEmbedData$$serializer.INSTANCE;
        }

        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }
    }

    public /* synthetic */ TapAppMessageEmbedData(int i5, String str, String str2, String str3, String str4, SerializationConstructorMarker serializationConstructorMarker) {
        if (15 != (i5 & 15)) {
            h1.l(i5, 15, TapAppMessageEmbedData$$serializer.INSTANCE.getDescriptor());
            throw null;
        }
        this.messageId = str;
        this.actionId = str2;
        this.appId = str3;
        this.embedUrl = str4;
    }

    public static /* synthetic */ TapAppMessageEmbedData copy$default(TapAppMessageEmbedData tapAppMessageEmbedData, String str, String str2, String str3, String str4, int i5, Object obj) {
        if ((i5 & 1) != 0) {
            str = tapAppMessageEmbedData.messageId;
        }
        if ((i5 & 2) != 0) {
            str2 = tapAppMessageEmbedData.actionId;
        }
        if ((i5 & 4) != 0) {
            str3 = tapAppMessageEmbedData.appId;
        }
        if ((i5 & 8) != 0) {
            str4 = tapAppMessageEmbedData.embedUrl;
        }
        return tapAppMessageEmbedData.copy(str, str2, str3, str4);
    }

    public static final /* synthetic */ void write$Self$chat_release(TapAppMessageEmbedData self, CompositeEncoder output, SerialDescriptor serialDesc) {
        output.y(serialDesc, 0, self.messageId);
        output.y(serialDesc, 1, self.actionId);
        output.y(serialDesc, 2, self.appId);
        output.y(serialDesc, 3, self.embedUrl);
    }

    @NotNull
    /* renamed from: component1, reason: from getter */
    public final String getMessageId() {
        return this.messageId;
    }

    @NotNull
    /* renamed from: component2, reason: from getter */
    public final String getActionId() {
        return this.actionId;
    }

    @NotNull
    /* renamed from: component3, reason: from getter */
    public final String getAppId() {
        return this.appId;
    }

    @NotNull
    /* renamed from: component4, reason: from getter */
    public final String getEmbedUrl() {
        return this.embedUrl;
    }

    @NotNull
    public final TapAppMessageEmbedData copy(@NotNull String messageId, @NotNull String actionId, @NotNull String appId, @NotNull String embedUrl) {
        Intrinsics.checkNotNullParameter(messageId, "messageId");
        Intrinsics.checkNotNullParameter(actionId, "actionId");
        Intrinsics.checkNotNullParameter(appId, "appId");
        Intrinsics.checkNotNullParameter(embedUrl, "embedUrl");
        return new TapAppMessageEmbedData(messageId, actionId, appId, embedUrl);
    }

    public boolean equals(Object other) {
        if (this == other) {
            return true;
        }
        if (!(other instanceof TapAppMessageEmbedData)) {
            return false;
        }
        TapAppMessageEmbedData tapAppMessageEmbedData = (TapAppMessageEmbedData) other;
        return Intrinsics.areEqual(this.messageId, tapAppMessageEmbedData.messageId) && Intrinsics.areEqual(this.actionId, tapAppMessageEmbedData.actionId) && Intrinsics.areEqual(this.appId, tapAppMessageEmbedData.appId) && Intrinsics.areEqual(this.embedUrl, tapAppMessageEmbedData.embedUrl);
    }

    @NotNull
    public final String getActionId() {
        return this.actionId;
    }

    @NotNull
    public final String getAppId() {
        return this.appId;
    }

    @NotNull
    public final String getEmbedUrl() {
        return this.embedUrl;
    }

    @NotNull
    public final String getMessageId() {
        return this.messageId;
    }

    public int hashCode() {
        return this.embedUrl.hashCode() + a3.e.d(a3.e.d(this.messageId.hashCode() * 31, 31, this.actionId), 31, this.appId);
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
        String str2 = this.actionId;
        return com.discord.chat.bridge.botuikit.a.k(a3.e.t("TapAppMessageEmbedData(messageId=", str, ", actionId=", str2, ", appId="), this.appId, ", embedUrl=", this.embedUrl, ")");
    }

    public TapAppMessageEmbedData(@NotNull String messageId, @NotNull String actionId, @NotNull String appId, @NotNull String embedUrl) {
        Intrinsics.checkNotNullParameter(messageId, "messageId");
        Intrinsics.checkNotNullParameter(actionId, "actionId");
        Intrinsics.checkNotNullParameter(appId, "appId");
        Intrinsics.checkNotNullParameter(embedUrl, "embedUrl");
        this.messageId = messageId;
        this.actionId = actionId;
        this.appId = appId;
        this.embedUrl = embedUrl;
    }
}
