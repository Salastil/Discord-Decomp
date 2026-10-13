package com.discord.chat.bridge.automod;

import bs.h1;
import bs.v1;
import com.discord.jank_stats.JankRecordStore;
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
@Metadata(d1 = {"\u0000L\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0007\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\b\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0018\n\u0002\u0010\u000b\n\u0002\b\u0004\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0004\b\u0087\b\u0018\u0000 92\u00020\u0001:\u000289B_\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0003\u0012\n\b\u0002\u0010\u0005\u001a\u0004\u0018\u00010\u0003\u0012\n\b\u0002\u0010\u0006\u001a\u0004\u0018\u00010\u0003\u0012\n\b\u0002\u0010\u0007\u001a\u0004\u0018\u00010\u0003\u0012\u0006\u0010\b\u001a\u00020\u0003\u0012\u0006\u0010\t\u001a\u00020\u0003\u0012\u0006\u0010\n\u001a\u00020\u000b\u0012\n\b\u0002\u0010\f\u001a\u0004\u0018\u00010\r¢\u0006\u0004\b\u000e\u0010\u000fBu\b\u0010\u0012\u0006\u0010\u0010\u001a\u00020\u0011\u0012\b\u0010\u0002\u001a\u0004\u0018\u00010\u0003\u0012\b\u0010\u0004\u001a\u0004\u0018\u00010\u0003\u0012\b\u0010\u0005\u001a\u0004\u0018\u00010\u0003\u0012\b\u0010\u0006\u001a\u0004\u0018\u00010\u0003\u0012\b\u0010\u0007\u001a\u0004\u0018\u00010\u0003\u0012\b\u0010\b\u001a\u0004\u0018\u00010\u0003\u0012\b\u0010\t\u001a\u0004\u0018\u00010\u0003\u0012\b\u0010\n\u001a\u0004\u0018\u00010\u000b\u0012\b\u0010\f\u001a\u0004\u0018\u00010\r\u0012\b\u0010\u0012\u001a\u0004\u0018\u00010\u0013¢\u0006\u0004\b\u000e\u0010\u0014J\t\u0010!\u001a\u00020\u0003HÆ\u0003J\t\u0010\"\u001a\u00020\u0003HÆ\u0003J\u000b\u0010#\u001a\u0004\u0018\u00010\u0003HÆ\u0003J\u000b\u0010$\u001a\u0004\u0018\u00010\u0003HÆ\u0003J\u000b\u0010%\u001a\u0004\u0018\u00010\u0003HÆ\u0003J\t\u0010&\u001a\u00020\u0003HÆ\u0003J\t\u0010'\u001a\u00020\u0003HÆ\u0003J\t\u0010(\u001a\u00020\u000bHÆ\u0003J\u000b\u0010)\u001a\u0004\u0018\u00010\rHÆ\u0003Jk\u0010*\u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u00032\b\b\u0002\u0010\u0004\u001a\u00020\u00032\n\b\u0002\u0010\u0005\u001a\u0004\u0018\u00010\u00032\n\b\u0002\u0010\u0006\u001a\u0004\u0018\u00010\u00032\n\b\u0002\u0010\u0007\u001a\u0004\u0018\u00010\u00032\b\b\u0002\u0010\b\u001a\u00020\u00032\b\b\u0002\u0010\t\u001a\u00020\u00032\b\b\u0002\u0010\n\u001a\u00020\u000b2\n\b\u0002\u0010\f\u001a\u0004\u0018\u00010\rHÆ\u0001J\u0013\u0010+\u001a\u00020,2\b\u0010-\u001a\u0004\u0018\u00010\u0001HÖ\u0003J\t\u0010.\u001a\u00020\u0011HÖ\u0001J\t\u0010/\u001a\u00020\u0003HÖ\u0001J%\u00100\u001a\u0002012\u0006\u00102\u001a\u00020\u00002\u0006\u00103\u001a\u0002042\u0006\u00105\u001a\u000206H\u0001¢\u0006\u0002\b7R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0015\u0010\u0016R\u0011\u0010\u0004\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0017\u0010\u0016R\u0013\u0010\u0005\u001a\u0004\u0018\u00010\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0018\u0010\u0016R\u0013\u0010\u0006\u001a\u0004\u0018\u00010\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0019\u0010\u0016R\u0013\u0010\u0007\u001a\u0004\u0018\u00010\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u001a\u0010\u0016R\u0011\u0010\b\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u001b\u0010\u0016R\u0011\u0010\t\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u001c\u0010\u0016R\u0011\u0010\n\u001a\u00020\u000b¢\u0006\b\n\u0000\u001a\u0004\b\u001d\u0010\u001eR\u0013\u0010\f\u001a\u0004\u0018\u00010\r¢\u0006\b\n\u0000\u001a\u0004\b\u001f\u0010 ¨\u0006:"}, d2 = {"Lcom/discord/chat/bridge/automod/AutoModerationContext;", "", "headerText", "", "headerBadgeText", "ruleDisplayText", "keywordDisplayText", "actionsIconURL", "actionsText", "feedbackText", "message", "Lcom/discord/chat/bridge/automod/FlaggedMessageEmbed;", "notification", "Lcom/discord/chat/bridge/automod/AutoModerationNotification;", "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/discord/chat/bridge/automod/FlaggedMessageEmbed;Lcom/discord/chat/bridge/automod/AutoModerationNotification;)V", "seen0", "", "serializationConstructorMarker", "Lkotlinx/serialization/internal/SerializationConstructorMarker;", "(ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/discord/chat/bridge/automod/FlaggedMessageEmbed;Lcom/discord/chat/bridge/automod/AutoModerationNotification;Lkotlinx/serialization/internal/SerializationConstructorMarker;)V", "getHeaderText", "()Ljava/lang/String;", "getHeaderBadgeText", "getRuleDisplayText", "getKeywordDisplayText", "getActionsIconURL", "getActionsText", "getFeedbackText", "getMessage", "()Lcom/discord/chat/bridge/automod/FlaggedMessageEmbed;", "getNotification", "()Lcom/discord/chat/bridge/automod/AutoModerationNotification;", "component1", "component2", "component3", "component4", "component5", "component6", "component7", "component8", "component9", "copy", "equals", "", JankRecordStore.SCREEN_OTHER, "hashCode", "toString", "write$Self", "", "self", "output", "Lkotlinx/serialization/encoding/CompositeEncoder;", "serialDesc", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "write$Self$chat_release", "$serializer", "Companion", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final /* data */ class AutoModerationContext {

    /* renamed from: Companion, reason: from kotlin metadata */
    @NotNull
    public static final Companion INSTANCE = new Companion(null);
    private final String actionsIconURL;

    @NotNull
    private final String actionsText;

    @NotNull
    private final String feedbackText;

    @NotNull
    private final String headerBadgeText;

    @NotNull
    private final String headerText;
    private final String keywordDisplayText;

    @NotNull
    private final FlaggedMessageEmbed message;
    private final AutoModerationNotification notification;
    private final String ruleDisplayText;

    @Metadata(d1 = {"\u0000\u0016\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\f\u0010\u0004\u001a\b\u0012\u0004\u0012\u00020\u00060\u0005¨\u0006\u0007"}, d2 = {"Lcom/discord/chat/bridge/automod/AutoModerationContext$Companion;", "", "<init>", "()V", "serializer", "Lkotlinx/serialization/KSerializer;", "Lcom/discord/chat/bridge/automod/AutoModerationContext;", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final class Companion {
        private Companion() {
        }

        @NotNull
        public final KSerializer serializer() {
            return AutoModerationContext$$serializer.INSTANCE;
        }

        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }
    }

    public /* synthetic */ AutoModerationContext(int i5, String str, String str2, String str3, String str4, String str5, String str6, String str7, FlaggedMessageEmbed flaggedMessageEmbed, AutoModerationNotification autoModerationNotification, SerializationConstructorMarker serializationConstructorMarker) {
        if (227 != (i5 & 227)) {
            h1.l(i5, 227, AutoModerationContext$$serializer.INSTANCE.getDescriptor());
            throw null;
        }
        this.headerText = str;
        this.headerBadgeText = str2;
        if ((i5 & 4) == 0) {
            this.ruleDisplayText = null;
        } else {
            this.ruleDisplayText = str3;
        }
        if ((i5 & 8) == 0) {
            this.keywordDisplayText = null;
        } else {
            this.keywordDisplayText = str4;
        }
        if ((i5 & 16) == 0) {
            this.actionsIconURL = null;
        } else {
            this.actionsIconURL = str5;
        }
        this.actionsText = str6;
        this.feedbackText = str7;
        this.message = flaggedMessageEmbed;
        if ((i5 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER) == 0) {
            this.notification = null;
        } else {
            this.notification = autoModerationNotification;
        }
    }

    public static /* synthetic */ AutoModerationContext copy$default(AutoModerationContext autoModerationContext, String str, String str2, String str3, String str4, String str5, String str6, String str7, FlaggedMessageEmbed flaggedMessageEmbed, AutoModerationNotification autoModerationNotification, int i5, Object obj) {
        if ((i5 & 1) != 0) {
            str = autoModerationContext.headerText;
        }
        if ((i5 & 2) != 0) {
            str2 = autoModerationContext.headerBadgeText;
        }
        if ((i5 & 4) != 0) {
            str3 = autoModerationContext.ruleDisplayText;
        }
        if ((i5 & 8) != 0) {
            str4 = autoModerationContext.keywordDisplayText;
        }
        if ((i5 & 16) != 0) {
            str5 = autoModerationContext.actionsIconURL;
        }
        if ((i5 & 32) != 0) {
            str6 = autoModerationContext.actionsText;
        }
        if ((i5 & 64) != 0) {
            str7 = autoModerationContext.feedbackText;
        }
        if ((i5 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT) != 0) {
            flaggedMessageEmbed = autoModerationContext.message;
        }
        if ((i5 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER) != 0) {
            autoModerationNotification = autoModerationContext.notification;
        }
        FlaggedMessageEmbed flaggedMessageEmbed2 = flaggedMessageEmbed;
        AutoModerationNotification autoModerationNotification2 = autoModerationNotification;
        String str8 = str6;
        String str9 = str7;
        String str10 = str5;
        String str11 = str3;
        return autoModerationContext.copy(str, str2, str11, str4, str10, str8, str9, flaggedMessageEmbed2, autoModerationNotification2);
    }

    public static final /* synthetic */ void write$Self$chat_release(AutoModerationContext self, CompositeEncoder output, SerialDescriptor serialDesc) {
        output.y(serialDesc, 0, self.headerText);
        output.y(serialDesc, 1, self.headerBadgeText);
        if (output.I(serialDesc, 2) || self.ruleDisplayText != null) {
            output.z(serialDesc, 2, v1.a, self.ruleDisplayText);
        }
        if (output.I(serialDesc, 3) || self.keywordDisplayText != null) {
            output.z(serialDesc, 3, v1.a, self.keywordDisplayText);
        }
        if (output.I(serialDesc, 4) || self.actionsIconURL != null) {
            output.z(serialDesc, 4, v1.a, self.actionsIconURL);
        }
        output.y(serialDesc, 5, self.actionsText);
        output.y(serialDesc, 6, self.feedbackText);
        output.g(serialDesc, 7, FlaggedMessageEmbed$$serializer.INSTANCE, self.message);
        if (!output.I(serialDesc, 8) && self.notification == null) {
            return;
        }
        output.z(serialDesc, 8, AutoModerationNotification$$serializer.INSTANCE, self.notification);
    }

    @NotNull
    /* renamed from: component1, reason: from getter */
    public final String getHeaderText() {
        return this.headerText;
    }

    @NotNull
    /* renamed from: component2, reason: from getter */
    public final String getHeaderBadgeText() {
        return this.headerBadgeText;
    }

    /* renamed from: component3, reason: from getter */
    public final String getRuleDisplayText() {
        return this.ruleDisplayText;
    }

    /* renamed from: component4, reason: from getter */
    public final String getKeywordDisplayText() {
        return this.keywordDisplayText;
    }

    /* renamed from: component5, reason: from getter */
    public final String getActionsIconURL() {
        return this.actionsIconURL;
    }

    @NotNull
    /* renamed from: component6, reason: from getter */
    public final String getActionsText() {
        return this.actionsText;
    }

    @NotNull
    /* renamed from: component7, reason: from getter */
    public final String getFeedbackText() {
        return this.feedbackText;
    }

    @NotNull
    /* renamed from: component8, reason: from getter */
    public final FlaggedMessageEmbed getMessage() {
        return this.message;
    }

    /* renamed from: component9, reason: from getter */
    public final AutoModerationNotification getNotification() {
        return this.notification;
    }

    @NotNull
    public final AutoModerationContext copy(@NotNull String headerText, @NotNull String headerBadgeText, String ruleDisplayText, String keywordDisplayText, String actionsIconURL, @NotNull String actionsText, @NotNull String feedbackText, @NotNull FlaggedMessageEmbed message, AutoModerationNotification notification) {
        Intrinsics.checkNotNullParameter(headerText, "headerText");
        Intrinsics.checkNotNullParameter(headerBadgeText, "headerBadgeText");
        Intrinsics.checkNotNullParameter(actionsText, "actionsText");
        Intrinsics.checkNotNullParameter(feedbackText, "feedbackText");
        Intrinsics.checkNotNullParameter(message, "message");
        return new AutoModerationContext(headerText, headerBadgeText, ruleDisplayText, keywordDisplayText, actionsIconURL, actionsText, feedbackText, message, notification);
    }

    public boolean equals(Object other) {
        if (this == other) {
            return true;
        }
        if (!(other instanceof AutoModerationContext)) {
            return false;
        }
        AutoModerationContext autoModerationContext = (AutoModerationContext) other;
        return Intrinsics.areEqual(this.headerText, autoModerationContext.headerText) && Intrinsics.areEqual(this.headerBadgeText, autoModerationContext.headerBadgeText) && Intrinsics.areEqual(this.ruleDisplayText, autoModerationContext.ruleDisplayText) && Intrinsics.areEqual(this.keywordDisplayText, autoModerationContext.keywordDisplayText) && Intrinsics.areEqual(this.actionsIconURL, autoModerationContext.actionsIconURL) && Intrinsics.areEqual(this.actionsText, autoModerationContext.actionsText) && Intrinsics.areEqual(this.feedbackText, autoModerationContext.feedbackText) && Intrinsics.areEqual(this.message, autoModerationContext.message) && Intrinsics.areEqual(this.notification, autoModerationContext.notification);
    }

    public final String getActionsIconURL() {
        return this.actionsIconURL;
    }

    @NotNull
    public final String getActionsText() {
        return this.actionsText;
    }

    @NotNull
    public final String getFeedbackText() {
        return this.feedbackText;
    }

    @NotNull
    public final String getHeaderBadgeText() {
        return this.headerBadgeText;
    }

    @NotNull
    public final String getHeaderText() {
        return this.headerText;
    }

    public final String getKeywordDisplayText() {
        return this.keywordDisplayText;
    }

    @NotNull
    public final FlaggedMessageEmbed getMessage() {
        return this.message;
    }

    public final AutoModerationNotification getNotification() {
        return this.notification;
    }

    public final String getRuleDisplayText() {
        return this.ruleDisplayText;
    }

    public int hashCode() {
        int d6 = a3.e.d(this.headerText.hashCode() * 31, 31, this.headerBadgeText);
        String str = this.ruleDisplayText;
        int hashCode = (d6 + (str == null ? 0 : str.hashCode())) * 31;
        String str2 = this.keywordDisplayText;
        int hashCode2 = (hashCode + (str2 == null ? 0 : str2.hashCode())) * 31;
        String str3 = this.actionsIconURL;
        int hashCode3 = (this.message.hashCode() + a3.e.d(a3.e.d((hashCode2 + (str3 == null ? 0 : str3.hashCode())) * 31, 31, this.actionsText), 31, this.feedbackText)) * 31;
        AutoModerationNotification autoModerationNotification = this.notification;
        return hashCode3 + (autoModerationNotification != null ? autoModerationNotification.hashCode() : 0);
    }

    @NotNull
    public String toString() {
        String str = this.headerText;
        String str2 = this.headerBadgeText;
        String str3 = this.ruleDisplayText;
        String str4 = this.keywordDisplayText;
        String str5 = this.actionsIconURL;
        String str6 = this.actionsText;
        String str7 = this.feedbackText;
        FlaggedMessageEmbed flaggedMessageEmbed = this.message;
        AutoModerationNotification autoModerationNotification = this.notification;
        StringBuilder t5 = a3.e.t("AutoModerationContext(headerText=", str, ", headerBadgeText=", str2, ", ruleDisplayText=");
        a3.e.A(t5, str3, ", keywordDisplayText=", str4, ", actionsIconURL=");
        a3.e.A(t5, str5, ", actionsText=", str6, ", feedbackText=");
        t5.append(str7);
        t5.append(", message=");
        t5.append(flaggedMessageEmbed);
        t5.append(", notification=");
        t5.append(autoModerationNotification);
        t5.append(")");
        return t5.toString();
    }

    public AutoModerationContext(@NotNull String headerText, @NotNull String headerBadgeText, String str, String str2, String str3, @NotNull String actionsText, @NotNull String feedbackText, @NotNull FlaggedMessageEmbed message, AutoModerationNotification autoModerationNotification) {
        Intrinsics.checkNotNullParameter(headerText, "headerText");
        Intrinsics.checkNotNullParameter(headerBadgeText, "headerBadgeText");
        Intrinsics.checkNotNullParameter(actionsText, "actionsText");
        Intrinsics.checkNotNullParameter(feedbackText, "feedbackText");
        Intrinsics.checkNotNullParameter(message, "message");
        this.headerText = headerText;
        this.headerBadgeText = headerBadgeText;
        this.ruleDisplayText = str;
        this.keywordDisplayText = str2;
        this.actionsIconURL = str3;
        this.actionsText = actionsText;
        this.feedbackText = feedbackText;
        this.message = message;
        this.notification = autoModerationNotification;
    }

    public /* synthetic */ AutoModerationContext(String str, String str2, String str3, String str4, String str5, String str6, String str7, FlaggedMessageEmbed flaggedMessageEmbed, AutoModerationNotification autoModerationNotification, int i5, DefaultConstructorMarker defaultConstructorMarker) {
        this(str, str2, (i5 & 4) != 0 ? null : str3, (i5 & 8) != 0 ? null : str4, (i5 & 16) != 0 ? null : str5, str6, str7, flaggedMessageEmbed, (i5 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER) != 0 ? null : autoModerationNotification);
    }
}
