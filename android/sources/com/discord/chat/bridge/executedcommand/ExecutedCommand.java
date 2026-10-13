package com.discord.chat.bridge.executedcommand;

import bs.g;
import bs.h1;
import bs.v1;
import com.discord.chat.bridge.botuikit.a;
import com.discord.chat.bridge.structurabletext.AnnotatedStructurableText;
import com.discord.chat.bridge.structurabletext.AnnotatedStructurableTextSerializer;
import com.discord.jank_stats.JankRecordStore;
import com.discord.notifications.renderer.NotificationRenderer;
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
@Metadata(d1 = {"\u0000P\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0000\n\u0002\u0010\b\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000b\n\u0002\b\u0005\n\u0002\u0018\u0002\n\u0002\b$\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0004\b\u0087\b\u0018\u0000 B2\u00020\u0001:\u0002ABB_\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005\u0012\u0006\u0010\u0006\u001a\u00020\u0007\u0012\n\b\u0002\u0010\b\u001a\u0004\u0018\u00010\u0005\u0012\u0006\u0010\t\u001a\u00020\u0007\u0012\u0006\u0010\n\u001a\u00020\u000b\u0012\n\b\u0002\u0010\f\u001a\u0004\u0018\u00010\r\u0012\n\b\u0002\u0010\u000e\u001a\u0004\u0018\u00010\u000f\u0012\n\b\u0002\u0010\u0010\u001a\u0004\u0018\u00010\u000f¢\u0006\u0004\b\u0011\u0010\u0012Bq\b\u0010\u0012\u0006\u0010\u0013\u001a\u00020\u0007\u0012\b\u0010\u0002\u001a\u0004\u0018\u00010\u0003\u0012\b\u0010\u0004\u001a\u0004\u0018\u00010\u0005\u0012\u0006\u0010\u0006\u001a\u00020\u0007\u0012\b\u0010\b\u001a\u0004\u0018\u00010\u0005\u0012\u0006\u0010\t\u001a\u00020\u0007\u0012\b\u0010\n\u001a\u0004\u0018\u00010\u000b\u0012\b\u0010\f\u001a\u0004\u0018\u00010\r\u0012\b\u0010\u000e\u001a\u0004\u0018\u00010\u000f\u0012\b\u0010\u0010\u001a\u0004\u0018\u00010\u000f\u0012\b\u0010\u0014\u001a\u0004\u0018\u00010\u0015¢\u0006\u0004\b\u0011\u0010\u0016J\u0010\u0010(\u001a\u00020\u0003HÆ\u0003¢\u0006\u0004\b)\u0010\u0018J\t\u0010*\u001a\u00020\u0005HÆ\u0003J\t\u0010+\u001a\u00020\u0007HÆ\u0003J\u000b\u0010,\u001a\u0004\u0018\u00010\u0005HÆ\u0003J\t\u0010-\u001a\u00020\u0007HÆ\u0003J\t\u0010.\u001a\u00020\u000bHÆ\u0003J\u000b\u0010/\u001a\u0004\u0018\u00010\rHÆ\u0003J\u0010\u00100\u001a\u0004\u0018\u00010\u000fHÆ\u0003¢\u0006\u0002\u0010%J\u0010\u00101\u001a\u0004\u0018\u00010\u000fHÆ\u0003¢\u0006\u0002\u0010%Jr\u00102\u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u00032\b\b\u0002\u0010\u0004\u001a\u00020\u00052\b\b\u0002\u0010\u0006\u001a\u00020\u00072\n\b\u0002\u0010\b\u001a\u0004\u0018\u00010\u00052\b\b\u0002\u0010\t\u001a\u00020\u00072\b\b\u0002\u0010\n\u001a\u00020\u000b2\n\b\u0002\u0010\f\u001a\u0004\u0018\u00010\r2\n\b\u0002\u0010\u000e\u001a\u0004\u0018\u00010\u000f2\n\b\u0002\u0010\u0010\u001a\u0004\u0018\u00010\u000fHÆ\u0001¢\u0006\u0004\b3\u00104J\u0013\u00105\u001a\u00020\u000f2\b\u00106\u001a\u0004\u0018\u00010\u0001HÖ\u0003J\t\u00107\u001a\u00020\u0007HÖ\u0001J\t\u00108\u001a\u00020\u0005HÖ\u0001J%\u00109\u001a\u00020:2\u0006\u0010;\u001a\u00020\u00002\u0006\u0010<\u001a\u00020=2\u0006\u0010>\u001a\u00020?H\u0001¢\u0006\u0002\b@R\u0013\u0010\u0002\u001a\u00020\u0003¢\u0006\n\n\u0002\u0010\u0019\u001a\u0004\b\u0017\u0010\u0018R\u0011\u0010\u0004\u001a\u00020\u0005¢\u0006\b\n\u0000\u001a\u0004\b\u001a\u0010\u001bR\u0011\u0010\u0006\u001a\u00020\u0007¢\u0006\b\n\u0000\u001a\u0004\b\u001c\u0010\u001dR\u0013\u0010\b\u001a\u0004\u0018\u00010\u0005¢\u0006\b\n\u0000\u001a\u0004\b\u001e\u0010\u001bR\u0011\u0010\t\u001a\u00020\u0007¢\u0006\b\n\u0000\u001a\u0004\b\u001f\u0010\u001dR\u0011\u0010\n\u001a\u00020\u000b¢\u0006\b\n\u0000\u001a\u0004\b \u0010!R\u0013\u0010\f\u001a\u0004\u0018\u00010\r¢\u0006\b\n\u0000\u001a\u0004\b\"\u0010#R\u0015\u0010\u000e\u001a\u0004\u0018\u00010\u000f¢\u0006\n\n\u0002\u0010&\u001a\u0004\b$\u0010%R\u0015\u0010\u0010\u001a\u0004\u0018\u00010\u000f¢\u0006\n\n\u0002\u0010&\u001a\u0004\b'\u0010%¨\u0006C"}, d2 = {"Lcom/discord/chat/bridge/executedcommand/ExecutedCommand;", "", "userId", "Lcom/discord/primitives/UserId;", NotificationRenderer.USERNAME, "", "usernameColor", "", "avatarURL", "targetUsernameColor", "content", "Lcom/discord/chat/bridge/structurabletext/AnnotatedStructurableText;", "commandNameBackgroundStyles", "Lcom/discord/chat/bridge/executedcommand/ExecutedCommandBackgroundStyles;", "showAppsIcon", "", "showControllerIcon", "<init>", "(JLjava/lang/String;ILjava/lang/String;ILcom/discord/chat/bridge/structurabletext/AnnotatedStructurableText;Lcom/discord/chat/bridge/executedcommand/ExecutedCommandBackgroundStyles;Ljava/lang/Boolean;Ljava/lang/Boolean;Lkotlin/jvm/internal/DefaultConstructorMarker;)V", "seen0", "serializationConstructorMarker", "Lkotlinx/serialization/internal/SerializationConstructorMarker;", "(ILcom/discord/primitives/UserId;Ljava/lang/String;ILjava/lang/String;ILcom/discord/chat/bridge/structurabletext/AnnotatedStructurableText;Lcom/discord/chat/bridge/executedcommand/ExecutedCommandBackgroundStyles;Ljava/lang/Boolean;Ljava/lang/Boolean;Lkotlinx/serialization/internal/SerializationConstructorMarker;Lkotlin/jvm/internal/DefaultConstructorMarker;)V", "getUserId-re6GcUE", "()J", "J", "getUsername", "()Ljava/lang/String;", "getUsernameColor", "()I", "getAvatarURL", "getTargetUsernameColor", "getContent", "()Lcom/discord/chat/bridge/structurabletext/AnnotatedStructurableText;", "getCommandNameBackgroundStyles", "()Lcom/discord/chat/bridge/executedcommand/ExecutedCommandBackgroundStyles;", "getShowAppsIcon", "()Ljava/lang/Boolean;", "Ljava/lang/Boolean;", "getShowControllerIcon", "component1", "component1-re6GcUE", "component2", "component3", "component4", "component5", "component6", "component7", "component8", "component9", "copy", "copy-PDYYh3I", "(JLjava/lang/String;ILjava/lang/String;ILcom/discord/chat/bridge/structurabletext/AnnotatedStructurableText;Lcom/discord/chat/bridge/executedcommand/ExecutedCommandBackgroundStyles;Ljava/lang/Boolean;Ljava/lang/Boolean;)Lcom/discord/chat/bridge/executedcommand/ExecutedCommand;", "equals", JankRecordStore.SCREEN_OTHER, "hashCode", "toString", "write$Self", "", "self", "output", "Lkotlinx/serialization/encoding/CompositeEncoder;", "serialDesc", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "write$Self$chat_release", "$serializer", "Companion", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final /* data */ class ExecutedCommand {

    /* renamed from: Companion, reason: from kotlin metadata */
    @NotNull
    public static final Companion INSTANCE = new Companion(null);
    private final String avatarURL;
    private final ExecutedCommandBackgroundStyles commandNameBackgroundStyles;

    @NotNull
    private final AnnotatedStructurableText content;
    private final Boolean showAppsIcon;
    private final Boolean showControllerIcon;
    private final int targetUsernameColor;
    private final long userId;

    @NotNull
    private final String username;
    private final int usernameColor;

    @Metadata(d1 = {"\u0000\u0016\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\f\u0010\u0004\u001a\b\u0012\u0004\u0012\u00020\u00060\u0005¨\u0006\u0007"}, d2 = {"Lcom/discord/chat/bridge/executedcommand/ExecutedCommand$Companion;", "", "<init>", "()V", "serializer", "Lkotlinx/serialization/KSerializer;", "Lcom/discord/chat/bridge/executedcommand/ExecutedCommand;", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final class Companion {
        private Companion() {
        }

        @NotNull
        public final KSerializer serializer() {
            return ExecutedCommand$$serializer.INSTANCE;
        }

        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }
    }

    public /* synthetic */ ExecutedCommand(int i5, UserId userId, String str, int i6, String str2, int i10, AnnotatedStructurableText annotatedStructurableText, ExecutedCommandBackgroundStyles executedCommandBackgroundStyles, Boolean bool, Boolean bool2, SerializationConstructorMarker serializationConstructorMarker, DefaultConstructorMarker defaultConstructorMarker) {
        this(i5, userId, str, i6, str2, i10, annotatedStructurableText, executedCommandBackgroundStyles, bool, bool2, serializationConstructorMarker);
    }

    /* renamed from: copy-PDYYh3I$default, reason: not valid java name */
    public static /* synthetic */ ExecutedCommand m434copyPDYYh3I$default(ExecutedCommand executedCommand, long j, String str, int i5, String str2, int i6, AnnotatedStructurableText annotatedStructurableText, ExecutedCommandBackgroundStyles executedCommandBackgroundStyles, Boolean bool, Boolean bool2, int i10, Object obj) {
        if ((i10 & 1) != 0) {
            j = executedCommand.userId;
        }
        long j5 = j;
        if ((i10 & 2) != 0) {
            str = executedCommand.username;
        }
        String str3 = str;
        if ((i10 & 4) != 0) {
            i5 = executedCommand.usernameColor;
        }
        return executedCommand.m436copyPDYYh3I(j5, str3, i5, (i10 & 8) != 0 ? executedCommand.avatarURL : str2, (i10 & 16) != 0 ? executedCommand.targetUsernameColor : i6, (i10 & 32) != 0 ? executedCommand.content : annotatedStructurableText, (i10 & 64) != 0 ? executedCommand.commandNameBackgroundStyles : executedCommandBackgroundStyles, (i10 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT) != 0 ? executedCommand.showAppsIcon : bool, (i10 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER) != 0 ? executedCommand.showControllerIcon : bool2);
    }

    public static final /* synthetic */ void write$Self$chat_release(ExecutedCommand self, CompositeEncoder output, SerialDescriptor serialDesc) {
        output.g(serialDesc, 0, UserId$$serializer.INSTANCE, UserId.m1241boximpl(self.userId));
        output.y(serialDesc, 1, self.username);
        output.n(2, self.usernameColor, serialDesc);
        if (output.I(serialDesc, 3) || self.avatarURL != null) {
            output.z(serialDesc, 3, v1.a, self.avatarURL);
        }
        output.n(4, self.targetUsernameColor, serialDesc);
        output.g(serialDesc, 5, AnnotatedStructurableTextSerializer.INSTANCE, self.content);
        if (output.I(serialDesc, 6) || self.commandNameBackgroundStyles != null) {
            output.z(serialDesc, 6, ExecutedCommandBackgroundStyles$$serializer.INSTANCE, self.commandNameBackgroundStyles);
        }
        if (output.I(serialDesc, 7) || !Intrinsics.areEqual(self.showAppsIcon, Boolean.FALSE)) {
            output.z(serialDesc, 7, g.a, self.showAppsIcon);
        }
        if (!output.I(serialDesc, 8) && Intrinsics.areEqual(self.showControllerIcon, Boolean.FALSE)) {
            return;
        }
        output.z(serialDesc, 8, g.a, self.showControllerIcon);
    }

    /* renamed from: component1-re6GcUE, reason: not valid java name and from getter */
    public final long getUserId() {
        return this.userId;
    }

    @NotNull
    /* renamed from: component2, reason: from getter */
    public final String getUsername() {
        return this.username;
    }

    /* renamed from: component3, reason: from getter */
    public final int getUsernameColor() {
        return this.usernameColor;
    }

    /* renamed from: component4, reason: from getter */
    public final String getAvatarURL() {
        return this.avatarURL;
    }

    /* renamed from: component5, reason: from getter */
    public final int getTargetUsernameColor() {
        return this.targetUsernameColor;
    }

    @NotNull
    /* renamed from: component6, reason: from getter */
    public final AnnotatedStructurableText getContent() {
        return this.content;
    }

    /* renamed from: component7, reason: from getter */
    public final ExecutedCommandBackgroundStyles getCommandNameBackgroundStyles() {
        return this.commandNameBackgroundStyles;
    }

    /* renamed from: component8, reason: from getter */
    public final Boolean getShowAppsIcon() {
        return this.showAppsIcon;
    }

    /* renamed from: component9, reason: from getter */
    public final Boolean getShowControllerIcon() {
        return this.showControllerIcon;
    }

    @NotNull
    /* renamed from: copy-PDYYh3I, reason: not valid java name */
    public final ExecutedCommand m436copyPDYYh3I(long userId, @NotNull String username, int usernameColor, String avatarURL, int targetUsernameColor, @NotNull AnnotatedStructurableText content, ExecutedCommandBackgroundStyles commandNameBackgroundStyles, Boolean showAppsIcon, Boolean showControllerIcon) {
        Intrinsics.checkNotNullParameter(username, "username");
        Intrinsics.checkNotNullParameter(content, "content");
        return new ExecutedCommand(userId, username, usernameColor, avatarURL, targetUsernameColor, content, commandNameBackgroundStyles, showAppsIcon, showControllerIcon, null);
    }

    public boolean equals(Object other) {
        if (this == other) {
            return true;
        }
        if (!(other instanceof ExecutedCommand)) {
            return false;
        }
        ExecutedCommand executedCommand = (ExecutedCommand) other;
        return UserId.m1245equalsimpl0(this.userId, executedCommand.userId) && Intrinsics.areEqual(this.username, executedCommand.username) && this.usernameColor == executedCommand.usernameColor && Intrinsics.areEqual(this.avatarURL, executedCommand.avatarURL) && this.targetUsernameColor == executedCommand.targetUsernameColor && Intrinsics.areEqual(this.content, executedCommand.content) && Intrinsics.areEqual(this.commandNameBackgroundStyles, executedCommand.commandNameBackgroundStyles) && Intrinsics.areEqual(this.showAppsIcon, executedCommand.showAppsIcon) && Intrinsics.areEqual(this.showControllerIcon, executedCommand.showControllerIcon);
    }

    public final String getAvatarURL() {
        return this.avatarURL;
    }

    public final ExecutedCommandBackgroundStyles getCommandNameBackgroundStyles() {
        return this.commandNameBackgroundStyles;
    }

    @NotNull
    public final AnnotatedStructurableText getContent() {
        return this.content;
    }

    public final Boolean getShowAppsIcon() {
        return this.showAppsIcon;
    }

    public final Boolean getShowControllerIcon() {
        return this.showControllerIcon;
    }

    public final int getTargetUsernameColor() {
        return this.targetUsernameColor;
    }

    /* renamed from: getUserId-re6GcUE, reason: not valid java name */
    public final long m437getUserIdre6GcUE() {
        return this.userId;
    }

    @NotNull
    public final String getUsername() {
        return this.username;
    }

    public final int getUsernameColor() {
        return this.usernameColor;
    }

    public int hashCode() {
        int u5 = a.u(this.usernameColor, a3.e.d(UserId.m1246hashCodeimpl(this.userId) * 31, 31, this.username), 31);
        String str = this.avatarURL;
        int hashCode = (this.content.hashCode() + a.u(this.targetUsernameColor, (u5 + (str == null ? 0 : str.hashCode())) * 31, 31)) * 31;
        ExecutedCommandBackgroundStyles executedCommandBackgroundStyles = this.commandNameBackgroundStyles;
        int hashCode2 = (hashCode + (executedCommandBackgroundStyles == null ? 0 : executedCommandBackgroundStyles.hashCode())) * 31;
        Boolean bool = this.showAppsIcon;
        int hashCode3 = (hashCode2 + (bool == null ? 0 : bool.hashCode())) * 31;
        Boolean bool2 = this.showControllerIcon;
        return hashCode3 + (bool2 != null ? bool2.hashCode() : 0);
    }

    @NotNull
    public String toString() {
        String m1248toStringimpl = UserId.m1248toStringimpl(this.userId);
        String str = this.username;
        int i5 = this.usernameColor;
        String str2 = this.avatarURL;
        int i6 = this.targetUsernameColor;
        AnnotatedStructurableText annotatedStructurableText = this.content;
        ExecutedCommandBackgroundStyles executedCommandBackgroundStyles = this.commandNameBackgroundStyles;
        Boolean bool = this.showAppsIcon;
        Boolean bool2 = this.showControllerIcon;
        StringBuilder t5 = a3.e.t("ExecutedCommand(userId=", m1248toStringimpl, ", username=", str, ", usernameColor=");
        a3.e.z(t5, i5, ", avatarURL=", str2, ", targetUsernameColor=");
        t5.append(i6);
        t5.append(", content=");
        t5.append(annotatedStructurableText);
        t5.append(", commandNameBackgroundStyles=");
        t5.append(executedCommandBackgroundStyles);
        t5.append(", showAppsIcon=");
        t5.append(bool);
        t5.append(", showControllerIcon=");
        t5.append(bool2);
        t5.append(")");
        return t5.toString();
    }

    public /* synthetic */ ExecutedCommand(long j, String str, int i5, String str2, int i6, AnnotatedStructurableText annotatedStructurableText, ExecutedCommandBackgroundStyles executedCommandBackgroundStyles, Boolean bool, Boolean bool2, DefaultConstructorMarker defaultConstructorMarker) {
        this(j, str, i5, str2, i6, annotatedStructurableText, executedCommandBackgroundStyles, bool, bool2);
    }

    private /* synthetic */ ExecutedCommand(int i5, UserId userId, String str, int i6, String str2, int i10, AnnotatedStructurableText annotatedStructurableText, ExecutedCommandBackgroundStyles executedCommandBackgroundStyles, Boolean bool, Boolean bool2, SerializationConstructorMarker serializationConstructorMarker) {
        if (55 != (i5 & 55)) {
            h1.l(i5, 55, ExecutedCommand$$serializer.INSTANCE.getDescriptor());
            throw null;
        }
        this.userId = userId.m1250unboximpl();
        this.username = str;
        this.usernameColor = i6;
        if ((i5 & 8) == 0) {
            this.avatarURL = null;
        } else {
            this.avatarURL = str2;
        }
        this.targetUsernameColor = i10;
        this.content = annotatedStructurableText;
        if ((i5 & 64) == 0) {
            this.commandNameBackgroundStyles = null;
        } else {
            this.commandNameBackgroundStyles = executedCommandBackgroundStyles;
        }
        if ((i5 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT) == 0) {
            this.showAppsIcon = Boolean.FALSE;
        } else {
            this.showAppsIcon = bool;
        }
        if ((i5 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER) == 0) {
            this.showControllerIcon = Boolean.FALSE;
        } else {
            this.showControllerIcon = bool2;
        }
    }

    private ExecutedCommand(long j, String username, int i5, String str, int i6, AnnotatedStructurableText content, ExecutedCommandBackgroundStyles executedCommandBackgroundStyles, Boolean bool, Boolean bool2) {
        Intrinsics.checkNotNullParameter(username, "username");
        Intrinsics.checkNotNullParameter(content, "content");
        this.userId = j;
        this.username = username;
        this.usernameColor = i5;
        this.avatarURL = str;
        this.targetUsernameColor = i6;
        this.content = content;
        this.commandNameBackgroundStyles = executedCommandBackgroundStyles;
        this.showAppsIcon = bool;
        this.showControllerIcon = bool2;
    }

    public /* synthetic */ ExecutedCommand(long j, String str, int i5, String str2, int i6, AnnotatedStructurableText annotatedStructurableText, ExecutedCommandBackgroundStyles executedCommandBackgroundStyles, Boolean bool, Boolean bool2, int i10, DefaultConstructorMarker defaultConstructorMarker) {
        this(j, str, i5, (i10 & 8) != 0 ? null : str2, i6, annotatedStructurableText, (i10 & 64) != 0 ? null : executedCommandBackgroundStyles, (i10 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT) != 0 ? Boolean.FALSE : bool, (i10 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER) != 0 ? Boolean.FALSE : bool2, null);
    }
}
