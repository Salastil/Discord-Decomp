package com.discord.chat.bridge.automod;

import androidx.recyclerview.widget.RecyclerView;
import bs.h1;
import bs.o0;
import bs.v1;
import com.discord.chat.bridge.botuikit.a;
import com.discord.jank_stats.JankRecordStore;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
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
@Metadata(d1 = {"\u0000>\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\u000e\n\u0000\n\u0002\u0010\b\n\u0002\b\u0006\n\u0002\u0010\u000b\n\u0002\b\t\n\u0002\u0018\u0002\n\u0002\b'\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0004\b\u0087\b\u0018\u0000 F2\u00020\u0001:\u0002EFB\u008f\u0001\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005\u0012\u0006\u0010\u0006\u001a\u00020\u0003\u0012\u0006\u0010\u0007\u001a\u00020\u0005\u0012\n\b\u0002\u0010\b\u001a\u0004\u0018\u00010\u0003\u0012\n\b\u0002\u0010\t\u001a\u0004\u0018\u00010\u0003\u0012\n\b\u0002\u0010\n\u001a\u0004\u0018\u00010\u0003\u0012\u0006\u0010\u000b\u001a\u00020\f\u0012\n\b\u0002\u0010\r\u001a\u0004\u0018\u00010\u0003\u0012\n\b\u0002\u0010\u000e\u001a\u0004\u0018\u00010\u0003\u0012\n\b\u0002\u0010\u000f\u001a\u0004\u0018\u00010\u0005\u0012\n\b\u0002\u0010\u0010\u001a\u0004\u0018\u00010\u0003\u0012\n\b\u0002\u0010\u0011\u001a\u0004\u0018\u00010\u0003¢\u0006\u0004\b\u0012\u0010\u0013B\u0097\u0001\b\u0010\u0012\u0006\u0010\u0014\u001a\u00020\u0005\u0012\b\u0010\u0002\u001a\u0004\u0018\u00010\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005\u0012\b\u0010\u0006\u001a\u0004\u0018\u00010\u0003\u0012\u0006\u0010\u0007\u001a\u00020\u0005\u0012\b\u0010\b\u001a\u0004\u0018\u00010\u0003\u0012\b\u0010\t\u001a\u0004\u0018\u00010\u0003\u0012\b\u0010\n\u001a\u0004\u0018\u00010\u0003\u0012\u0006\u0010\u000b\u001a\u00020\f\u0012\b\u0010\r\u001a\u0004\u0018\u00010\u0003\u0012\b\u0010\u000e\u001a\u0004\u0018\u00010\u0003\u0012\b\u0010\u000f\u001a\u0004\u0018\u00010\u0005\u0012\b\u0010\u0010\u001a\u0004\u0018\u00010\u0003\u0012\b\u0010\u0011\u001a\u0004\u0018\u00010\u0003\u0012\b\u0010\u0015\u001a\u0004\u0018\u00010\u0016¢\u0006\u0004\b\u0012\u0010\u0017J\t\u0010*\u001a\u00020\u0003HÆ\u0003J\t\u0010+\u001a\u00020\u0005HÆ\u0003J\t\u0010,\u001a\u00020\u0003HÆ\u0003J\t\u0010-\u001a\u00020\u0005HÆ\u0003J\u000b\u0010.\u001a\u0004\u0018\u00010\u0003HÆ\u0003J\u000b\u0010/\u001a\u0004\u0018\u00010\u0003HÆ\u0003J\u000b\u00100\u001a\u0004\u0018\u00010\u0003HÆ\u0003J\t\u00101\u001a\u00020\fHÆ\u0003J\u000b\u00102\u001a\u0004\u0018\u00010\u0003HÆ\u0003J\u000b\u00103\u001a\u0004\u0018\u00010\u0003HÆ\u0003J\u0010\u00104\u001a\u0004\u0018\u00010\u0005HÆ\u0003¢\u0006\u0002\u0010&J\u000b\u00105\u001a\u0004\u0018\u00010\u0003HÆ\u0003J\u000b\u00106\u001a\u0004\u0018\u00010\u0003HÆ\u0003J \u0001\u00107\u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u00032\b\b\u0002\u0010\u0004\u001a\u00020\u00052\b\b\u0002\u0010\u0006\u001a\u00020\u00032\b\b\u0002\u0010\u0007\u001a\u00020\u00052\n\b\u0002\u0010\b\u001a\u0004\u0018\u00010\u00032\n\b\u0002\u0010\t\u001a\u0004\u0018\u00010\u00032\n\b\u0002\u0010\n\u001a\u0004\u0018\u00010\u00032\b\b\u0002\u0010\u000b\u001a\u00020\f2\n\b\u0002\u0010\r\u001a\u0004\u0018\u00010\u00032\n\b\u0002\u0010\u000e\u001a\u0004\u0018\u00010\u00032\n\b\u0002\u0010\u000f\u001a\u0004\u0018\u00010\u00052\n\b\u0002\u0010\u0010\u001a\u0004\u0018\u00010\u00032\n\b\u0002\u0010\u0011\u001a\u0004\u0018\u00010\u0003HÆ\u0001¢\u0006\u0002\u00108J\u0013\u00109\u001a\u00020\f2\b\u0010:\u001a\u0004\u0018\u00010\u0001HÖ\u0003J\t\u0010;\u001a\u00020\u0005HÖ\u0001J\t\u0010<\u001a\u00020\u0003HÖ\u0001J%\u0010=\u001a\u00020>2\u0006\u0010?\u001a\u00020\u00002\u0006\u0010@\u001a\u00020A2\u0006\u0010B\u001a\u00020CH\u0001¢\u0006\u0002\bDR\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0018\u0010\u0019R\u0011\u0010\u0004\u001a\u00020\u0005¢\u0006\b\n\u0000\u001a\u0004\b\u001a\u0010\u001bR\u0011\u0010\u0006\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u001c\u0010\u0019R\u0011\u0010\u0007\u001a\u00020\u0005¢\u0006\b\n\u0000\u001a\u0004\b\u001d\u0010\u001bR\u0013\u0010\b\u001a\u0004\u0018\u00010\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u001e\u0010\u0019R\u0013\u0010\t\u001a\u0004\u0018\u00010\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u001f\u0010\u0019R\u0013\u0010\n\u001a\u0004\u0018\u00010\u0003¢\u0006\b\n\u0000\u001a\u0004\b \u0010\u0019R\u0011\u0010\u000b\u001a\u00020\f¢\u0006\b\n\u0000\u001a\u0004\b!\u0010\"R\u0013\u0010\r\u001a\u0004\u0018\u00010\u0003¢\u0006\b\n\u0000\u001a\u0004\b#\u0010\u0019R\u0013\u0010\u000e\u001a\u0004\u0018\u00010\u0003¢\u0006\b\n\u0000\u001a\u0004\b$\u0010\u0019R\u0015\u0010\u000f\u001a\u0004\u0018\u00010\u0005¢\u0006\n\n\u0002\u0010'\u001a\u0004\b%\u0010&R\u0013\u0010\u0010\u001a\u0004\u0018\u00010\u0003¢\u0006\b\n\u0000\u001a\u0004\b(\u0010\u0019R\u0013\u0010\u0011\u001a\u0004\u0018\u00010\u0003¢\u0006\b\n\u0000\u001a\u0004\b)\u0010\u0019¨\u0006G"}, d2 = {"Lcom/discord/chat/bridge/automod/AutoModerationNotification;", "", "header", "", "headerColor", "", "headerIconURL", "headerIconColor", "subtitleLeft", "subtitleRight", "body", "shouldShowActions", "", "enabledByUsername", "enabledByAvatarURL", "enabledByColor", "severity", "startTime", "<init>", "(Ljava/lang/String;ILjava/lang/String;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;ZLjava/lang/String;Ljava/lang/String;Ljava/lang/Integer;Ljava/lang/String;Ljava/lang/String;)V", "seen0", "serializationConstructorMarker", "Lkotlinx/serialization/internal/SerializationConstructorMarker;", "(ILjava/lang/String;ILjava/lang/String;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;ZLjava/lang/String;Ljava/lang/String;Ljava/lang/Integer;Ljava/lang/String;Ljava/lang/String;Lkotlinx/serialization/internal/SerializationConstructorMarker;)V", "getHeader", "()Ljava/lang/String;", "getHeaderColor", "()I", "getHeaderIconURL", "getHeaderIconColor", "getSubtitleLeft", "getSubtitleRight", "getBody", "getShouldShowActions", "()Z", "getEnabledByUsername", "getEnabledByAvatarURL", "getEnabledByColor", "()Ljava/lang/Integer;", "Ljava/lang/Integer;", "getSeverity", "getStartTime", "component1", "component2", "component3", "component4", "component5", "component6", "component7", "component8", "component9", "component10", "component11", "component12", "component13", "copy", "(Ljava/lang/String;ILjava/lang/String;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;ZLjava/lang/String;Ljava/lang/String;Ljava/lang/Integer;Ljava/lang/String;Ljava/lang/String;)Lcom/discord/chat/bridge/automod/AutoModerationNotification;", "equals", JankRecordStore.SCREEN_OTHER, "hashCode", "toString", "write$Self", "", "self", "output", "Lkotlinx/serialization/encoding/CompositeEncoder;", "serialDesc", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "write$Self$chat_release", "$serializer", "Companion", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final /* data */ class AutoModerationNotification {

    /* renamed from: Companion, reason: from kotlin metadata */
    @NotNull
    public static final Companion INSTANCE = new Companion(null);
    private final String body;
    private final String enabledByAvatarURL;
    private final Integer enabledByColor;
    private final String enabledByUsername;

    @NotNull
    private final String header;
    private final int headerColor;
    private final int headerIconColor;

    @NotNull
    private final String headerIconURL;
    private final String severity;
    private final boolean shouldShowActions;
    private final String startTime;
    private final String subtitleLeft;
    private final String subtitleRight;

    @Metadata(d1 = {"\u0000\u0016\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\f\u0010\u0004\u001a\b\u0012\u0004\u0012\u00020\u00060\u0005¨\u0006\u0007"}, d2 = {"Lcom/discord/chat/bridge/automod/AutoModerationNotification$Companion;", "", "<init>", "()V", "serializer", "Lkotlinx/serialization/KSerializer;", "Lcom/discord/chat/bridge/automod/AutoModerationNotification;", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final class Companion {
        private Companion() {
        }

        @NotNull
        public final KSerializer serializer() {
            return AutoModerationNotification$$serializer.INSTANCE;
        }

        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }
    }

    public /* synthetic */ AutoModerationNotification(int i5, String str, int i6, String str2, int i10, String str3, String str4, String str5, boolean z5, String str6, String str7, Integer num, String str8, String str9, SerializationConstructorMarker serializationConstructorMarker) {
        if (143 != (i5 & 143)) {
            h1.l(i5, 143, AutoModerationNotification$$serializer.INSTANCE.getDescriptor());
            throw null;
        }
        this.header = str;
        this.headerColor = i6;
        this.headerIconURL = str2;
        this.headerIconColor = i10;
        if ((i5 & 16) == 0) {
            this.subtitleLeft = null;
        } else {
            this.subtitleLeft = str3;
        }
        if ((i5 & 32) == 0) {
            this.subtitleRight = null;
        } else {
            this.subtitleRight = str4;
        }
        if ((i5 & 64) == 0) {
            this.body = null;
        } else {
            this.body = str5;
        }
        this.shouldShowActions = z5;
        if ((i5 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER) == 0) {
            this.enabledByUsername = null;
        } else {
            this.enabledByUsername = str6;
        }
        if ((i5 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING) == 0) {
            this.enabledByAvatarURL = null;
        } else {
            this.enabledByAvatarURL = str7;
        }
        if ((i5 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_OVERFLOW_INSET) == 0) {
            this.enabledByColor = null;
        } else {
            this.enabledByColor = num;
        }
        if ((i5 & RecyclerView.ItemAnimator.FLAG_MOVED) == 0) {
            this.severity = null;
        } else {
            this.severity = str8;
        }
        if ((i5 & RecyclerView.ItemAnimator.FLAG_APPEARED_IN_PRE_LAYOUT) == 0) {
            this.startTime = null;
        } else {
            this.startTime = str9;
        }
    }

    public static /* synthetic */ AutoModerationNotification copy$default(AutoModerationNotification autoModerationNotification, String str, int i5, String str2, int i6, String str3, String str4, String str5, boolean z5, String str6, String str7, Integer num, String str8, String str9, int i10, Object obj) {
        if ((i10 & 1) != 0) {
            str = autoModerationNotification.header;
        }
        return autoModerationNotification.copy(str, (i10 & 2) != 0 ? autoModerationNotification.headerColor : i5, (i10 & 4) != 0 ? autoModerationNotification.headerIconURL : str2, (i10 & 8) != 0 ? autoModerationNotification.headerIconColor : i6, (i10 & 16) != 0 ? autoModerationNotification.subtitleLeft : str3, (i10 & 32) != 0 ? autoModerationNotification.subtitleRight : str4, (i10 & 64) != 0 ? autoModerationNotification.body : str5, (i10 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT) != 0 ? autoModerationNotification.shouldShowActions : z5, (i10 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER) != 0 ? autoModerationNotification.enabledByUsername : str6, (i10 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING) != 0 ? autoModerationNotification.enabledByAvatarURL : str7, (i10 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_OVERFLOW_INSET) != 0 ? autoModerationNotification.enabledByColor : num, (i10 & RecyclerView.ItemAnimator.FLAG_MOVED) != 0 ? autoModerationNotification.severity : str8, (i10 & RecyclerView.ItemAnimator.FLAG_APPEARED_IN_PRE_LAYOUT) != 0 ? autoModerationNotification.startTime : str9);
    }

    public static final /* synthetic */ void write$Self$chat_release(AutoModerationNotification self, CompositeEncoder output, SerialDescriptor serialDesc) {
        output.y(serialDesc, 0, self.header);
        output.n(1, self.headerColor, serialDesc);
        output.y(serialDesc, 2, self.headerIconURL);
        output.n(3, self.headerIconColor, serialDesc);
        if (output.I(serialDesc, 4) || self.subtitleLeft != null) {
            output.z(serialDesc, 4, v1.a, self.subtitleLeft);
        }
        if (output.I(serialDesc, 5) || self.subtitleRight != null) {
            output.z(serialDesc, 5, v1.a, self.subtitleRight);
        }
        if (output.I(serialDesc, 6) || self.body != null) {
            output.z(serialDesc, 6, v1.a, self.body);
        }
        output.x(serialDesc, 7, self.shouldShowActions);
        if (output.I(serialDesc, 8) || self.enabledByUsername != null) {
            output.z(serialDesc, 8, v1.a, self.enabledByUsername);
        }
        if (output.I(serialDesc, 9) || self.enabledByAvatarURL != null) {
            output.z(serialDesc, 9, v1.a, self.enabledByAvatarURL);
        }
        if (output.I(serialDesc, 10) || self.enabledByColor != null) {
            output.z(serialDesc, 10, o0.a, self.enabledByColor);
        }
        if (output.I(serialDesc, 11) || self.severity != null) {
            output.z(serialDesc, 11, v1.a, self.severity);
        }
        if (!output.I(serialDesc, 12) && self.startTime == null) {
            return;
        }
        output.z(serialDesc, 12, v1.a, self.startTime);
    }

    @NotNull
    /* renamed from: component1, reason: from getter */
    public final String getHeader() {
        return this.header;
    }

    /* renamed from: component10, reason: from getter */
    public final String getEnabledByAvatarURL() {
        return this.enabledByAvatarURL;
    }

    /* renamed from: component11, reason: from getter */
    public final Integer getEnabledByColor() {
        return this.enabledByColor;
    }

    /* renamed from: component12, reason: from getter */
    public final String getSeverity() {
        return this.severity;
    }

    /* renamed from: component13, reason: from getter */
    public final String getStartTime() {
        return this.startTime;
    }

    /* renamed from: component2, reason: from getter */
    public final int getHeaderColor() {
        return this.headerColor;
    }

    @NotNull
    /* renamed from: component3, reason: from getter */
    public final String getHeaderIconURL() {
        return this.headerIconURL;
    }

    /* renamed from: component4, reason: from getter */
    public final int getHeaderIconColor() {
        return this.headerIconColor;
    }

    /* renamed from: component5, reason: from getter */
    public final String getSubtitleLeft() {
        return this.subtitleLeft;
    }

    /* renamed from: component6, reason: from getter */
    public final String getSubtitleRight() {
        return this.subtitleRight;
    }

    /* renamed from: component7, reason: from getter */
    public final String getBody() {
        return this.body;
    }

    /* renamed from: component8, reason: from getter */
    public final boolean getShouldShowActions() {
        return this.shouldShowActions;
    }

    /* renamed from: component9, reason: from getter */
    public final String getEnabledByUsername() {
        return this.enabledByUsername;
    }

    @NotNull
    public final AutoModerationNotification copy(@NotNull String header, int headerColor, @NotNull String headerIconURL, int headerIconColor, String subtitleLeft, String subtitleRight, String body, boolean shouldShowActions, String enabledByUsername, String enabledByAvatarURL, Integer enabledByColor, String severity, String startTime) {
        Intrinsics.checkNotNullParameter(header, "header");
        Intrinsics.checkNotNullParameter(headerIconURL, "headerIconURL");
        return new AutoModerationNotification(header, headerColor, headerIconURL, headerIconColor, subtitleLeft, subtitleRight, body, shouldShowActions, enabledByUsername, enabledByAvatarURL, enabledByColor, severity, startTime);
    }

    public boolean equals(Object other) {
        if (this == other) {
            return true;
        }
        if (!(other instanceof AutoModerationNotification)) {
            return false;
        }
        AutoModerationNotification autoModerationNotification = (AutoModerationNotification) other;
        return Intrinsics.areEqual(this.header, autoModerationNotification.header) && this.headerColor == autoModerationNotification.headerColor && Intrinsics.areEqual(this.headerIconURL, autoModerationNotification.headerIconURL) && this.headerIconColor == autoModerationNotification.headerIconColor && Intrinsics.areEqual(this.subtitleLeft, autoModerationNotification.subtitleLeft) && Intrinsics.areEqual(this.subtitleRight, autoModerationNotification.subtitleRight) && Intrinsics.areEqual(this.body, autoModerationNotification.body) && this.shouldShowActions == autoModerationNotification.shouldShowActions && Intrinsics.areEqual(this.enabledByUsername, autoModerationNotification.enabledByUsername) && Intrinsics.areEqual(this.enabledByAvatarURL, autoModerationNotification.enabledByAvatarURL) && Intrinsics.areEqual(this.enabledByColor, autoModerationNotification.enabledByColor) && Intrinsics.areEqual(this.severity, autoModerationNotification.severity) && Intrinsics.areEqual(this.startTime, autoModerationNotification.startTime);
    }

    public final String getBody() {
        return this.body;
    }

    public final String getEnabledByAvatarURL() {
        return this.enabledByAvatarURL;
    }

    public final Integer getEnabledByColor() {
        return this.enabledByColor;
    }

    public final String getEnabledByUsername() {
        return this.enabledByUsername;
    }

    @NotNull
    public final String getHeader() {
        return this.header;
    }

    public final int getHeaderColor() {
        return this.headerColor;
    }

    public final int getHeaderIconColor() {
        return this.headerIconColor;
    }

    @NotNull
    public final String getHeaderIconURL() {
        return this.headerIconURL;
    }

    public final String getSeverity() {
        return this.severity;
    }

    public final boolean getShouldShowActions() {
        return this.shouldShowActions;
    }

    public final String getStartTime() {
        return this.startTime;
    }

    public final String getSubtitleLeft() {
        return this.subtitleLeft;
    }

    public final String getSubtitleRight() {
        return this.subtitleRight;
    }

    public int hashCode() {
        int u5 = a.u(this.headerIconColor, a3.e.d(a.u(this.headerColor, this.header.hashCode() * 31, 31), 31, this.headerIconURL), 31);
        String str = this.subtitleLeft;
        int hashCode = (u5 + (str == null ? 0 : str.hashCode())) * 31;
        String str2 = this.subtitleRight;
        int hashCode2 = (hashCode + (str2 == null ? 0 : str2.hashCode())) * 31;
        String str3 = this.body;
        int d6 = d.d((hashCode2 + (str3 == null ? 0 : str3.hashCode())) * 31, 31, this.shouldShowActions);
        String str4 = this.enabledByUsername;
        int hashCode3 = (d6 + (str4 == null ? 0 : str4.hashCode())) * 31;
        String str5 = this.enabledByAvatarURL;
        int hashCode4 = (hashCode3 + (str5 == null ? 0 : str5.hashCode())) * 31;
        Integer num = this.enabledByColor;
        int hashCode5 = (hashCode4 + (num == null ? 0 : num.hashCode())) * 31;
        String str6 = this.severity;
        int hashCode6 = (hashCode5 + (str6 == null ? 0 : str6.hashCode())) * 31;
        String str7 = this.startTime;
        return hashCode6 + (str7 != null ? str7.hashCode() : 0);
    }

    @NotNull
    public String toString() {
        String str = this.header;
        int i5 = this.headerColor;
        String str2 = this.headerIconURL;
        int i6 = this.headerIconColor;
        String str3 = this.subtitleLeft;
        String str4 = this.subtitleRight;
        String str5 = this.body;
        boolean z5 = this.shouldShowActions;
        String str6 = this.enabledByUsername;
        String str7 = this.enabledByAvatarURL;
        Integer num = this.enabledByColor;
        String str8 = this.severity;
        String str9 = this.startTime;
        StringBuilder s2 = a3.e.s("AutoModerationNotification(header=", str, ", headerColor=", i5, ", headerIconURL=");
        s2.append(str2);
        s2.append(", headerIconColor=");
        s2.append(i6);
        s2.append(", subtitleLeft=");
        a3.e.A(s2, str3, ", subtitleRight=", str4, ", body=");
        s2.append(str5);
        s2.append(", shouldShowActions=");
        s2.append(z5);
        s2.append(", enabledByUsername=");
        a3.e.A(s2, str6, ", enabledByAvatarURL=", str7, ", enabledByColor=");
        d.r(num, ", severity=", str8, ", startTime=", s2);
        return a.j(s2, str9, ")");
    }

    public AutoModerationNotification(@NotNull String header, int i5, @NotNull String headerIconURL, int i6, String str, String str2, String str3, boolean z5, String str4, String str5, Integer num, String str6, String str7) {
        Intrinsics.checkNotNullParameter(header, "header");
        Intrinsics.checkNotNullParameter(headerIconURL, "headerIconURL");
        this.header = header;
        this.headerColor = i5;
        this.headerIconURL = headerIconURL;
        this.headerIconColor = i6;
        this.subtitleLeft = str;
        this.subtitleRight = str2;
        this.body = str3;
        this.shouldShowActions = z5;
        this.enabledByUsername = str4;
        this.enabledByAvatarURL = str5;
        this.enabledByColor = num;
        this.severity = str6;
        this.startTime = str7;
    }

    public /* synthetic */ AutoModerationNotification(String str, int i5, String str2, int i6, String str3, String str4, String str5, boolean z5, String str6, String str7, Integer num, String str8, String str9, int i10, DefaultConstructorMarker defaultConstructorMarker) {
        this(str, i5, str2, i6, (i10 & 16) != 0 ? null : str3, (i10 & 32) != 0 ? null : str4, (i10 & 64) != 0 ? null : str5, z5, (i10 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER) != 0 ? null : str6, (i10 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING) != 0 ? null : str7, (i10 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_OVERFLOW_INSET) != 0 ? null : num, (i10 & RecyclerView.ItemAnimator.FLAG_MOVED) != 0 ? null : str8, (i10 & RecyclerView.ItemAnimator.FLAG_APPEARED_IN_PRE_LAYOUT) != 0 ? null : str9);
    }
}
