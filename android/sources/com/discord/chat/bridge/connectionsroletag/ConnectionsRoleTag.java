package com.discord.chat.bridge.connectionsroletag;

import bs.h1;
import com.discord.chat.bridge.botuikit.a;
import com.discord.jank_stats.JankRecordStore;
import com.facebook.react.devsupport.StackTraceHelper;
import com.facebook.react.uimanager.ViewProps;
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
@Metadata(d1 = {"\u0000@\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0002\n\u0002\u0010\b\n\u0002\b\u0005\n\u0002\u0018\u0002\n\u0002\b\r\n\u0002\u0010\u000b\n\u0002\b\u0004\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0004\b\u0087\b\u0018\u0000 '2\u00020\u0001:\u0002&'B'\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0003\u0012\u0006\u0010\u0005\u001a\u00020\u0006\u0012\u0006\u0010\u0007\u001a\u00020\u0006¢\u0006\u0004\b\b\u0010\tB?\b\u0010\u0012\u0006\u0010\n\u001a\u00020\u0006\u0012\b\u0010\u0002\u001a\u0004\u0018\u00010\u0003\u0012\b\u0010\u0004\u001a\u0004\u0018\u00010\u0003\u0012\u0006\u0010\u0005\u001a\u00020\u0006\u0012\u0006\u0010\u0007\u001a\u00020\u0006\u0012\b\u0010\u000b\u001a\u0004\u0018\u00010\f¢\u0006\u0004\b\b\u0010\rJ\t\u0010\u0014\u001a\u00020\u0003HÆ\u0003J\t\u0010\u0015\u001a\u00020\u0003HÆ\u0003J\t\u0010\u0016\u001a\u00020\u0006HÆ\u0003J\t\u0010\u0017\u001a\u00020\u0006HÆ\u0003J1\u0010\u0018\u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u00032\b\b\u0002\u0010\u0004\u001a\u00020\u00032\b\b\u0002\u0010\u0005\u001a\u00020\u00062\b\b\u0002\u0010\u0007\u001a\u00020\u0006HÆ\u0001J\u0013\u0010\u0019\u001a\u00020\u001a2\b\u0010\u001b\u001a\u0004\u0018\u00010\u0001HÖ\u0003J\t\u0010\u001c\u001a\u00020\u0006HÖ\u0001J\t\u0010\u001d\u001a\u00020\u0003HÖ\u0001J%\u0010\u001e\u001a\u00020\u001f2\u0006\u0010 \u001a\u00020\u00002\u0006\u0010!\u001a\u00020\"2\u0006\u0010#\u001a\u00020$H\u0001¢\u0006\u0002\b%R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u000e\u0010\u000fR\u0011\u0010\u0004\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0010\u0010\u000fR\u0011\u0010\u0005\u001a\u00020\u0006¢\u0006\b\n\u0000\u001a\u0004\b\u0011\u0010\u0012R\u0011\u0010\u0007\u001a\u00020\u0006¢\u0006\b\n\u0000\u001a\u0004\b\u0013\u0010\u0012¨\u0006("}, d2 = {"Lcom/discord/chat/bridge/connectionsroletag/ConnectionsRoleTag;", "", StackTraceHelper.ID_KEY, "", StackTraceHelper.NAME_KEY, ViewProps.BACKGROUND_COLOR, "", "iconColor", "<init>", "(Ljava/lang/String;Ljava/lang/String;II)V", "seen0", "serializationConstructorMarker", "Lkotlinx/serialization/internal/SerializationConstructorMarker;", "(ILjava/lang/String;Ljava/lang/String;IILkotlinx/serialization/internal/SerializationConstructorMarker;)V", "getId", "()Ljava/lang/String;", "getName", "getBackgroundColor", "()I", "getIconColor", "component1", "component2", "component3", "component4", "copy", "equals", "", JankRecordStore.SCREEN_OTHER, "hashCode", "toString", "write$Self", "", "self", "output", "Lkotlinx/serialization/encoding/CompositeEncoder;", "serialDesc", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "write$Self$chat_release", "$serializer", "Companion", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final /* data */ class ConnectionsRoleTag {

    /* renamed from: Companion, reason: from kotlin metadata */
    @NotNull
    public static final Companion INSTANCE = new Companion(null);
    private final int backgroundColor;
    private final int iconColor;

    @NotNull
    private final String id;

    @NotNull
    private final String name;

    @Metadata(d1 = {"\u0000\u0016\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\f\u0010\u0004\u001a\b\u0012\u0004\u0012\u00020\u00060\u0005¨\u0006\u0007"}, d2 = {"Lcom/discord/chat/bridge/connectionsroletag/ConnectionsRoleTag$Companion;", "", "<init>", "()V", "serializer", "Lkotlinx/serialization/KSerializer;", "Lcom/discord/chat/bridge/connectionsroletag/ConnectionsRoleTag;", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final class Companion {
        private Companion() {
        }

        @NotNull
        public final KSerializer serializer() {
            return ConnectionsRoleTag$$serializer.INSTANCE;
        }

        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }
    }

    public /* synthetic */ ConnectionsRoleTag(int i5, String str, String str2, int i6, int i10, SerializationConstructorMarker serializationConstructorMarker) {
        if (15 != (i5 & 15)) {
            h1.l(i5, 15, ConnectionsRoleTag$$serializer.INSTANCE.getDescriptor());
            throw null;
        }
        this.id = str;
        this.name = str2;
        this.backgroundColor = i6;
        this.iconColor = i10;
    }

    public static /* synthetic */ ConnectionsRoleTag copy$default(ConnectionsRoleTag connectionsRoleTag, String str, String str2, int i5, int i6, int i10, Object obj) {
        if ((i10 & 1) != 0) {
            str = connectionsRoleTag.id;
        }
        if ((i10 & 2) != 0) {
            str2 = connectionsRoleTag.name;
        }
        if ((i10 & 4) != 0) {
            i5 = connectionsRoleTag.backgroundColor;
        }
        if ((i10 & 8) != 0) {
            i6 = connectionsRoleTag.iconColor;
        }
        return connectionsRoleTag.copy(str, str2, i5, i6);
    }

    public static final /* synthetic */ void write$Self$chat_release(ConnectionsRoleTag self, CompositeEncoder output, SerialDescriptor serialDesc) {
        output.y(serialDesc, 0, self.id);
        output.y(serialDesc, 1, self.name);
        output.n(2, self.backgroundColor, serialDesc);
        output.n(3, self.iconColor, serialDesc);
    }

    @NotNull
    /* renamed from: component1, reason: from getter */
    public final String getId() {
        return this.id;
    }

    @NotNull
    /* renamed from: component2, reason: from getter */
    public final String getName() {
        return this.name;
    }

    /* renamed from: component3, reason: from getter */
    public final int getBackgroundColor() {
        return this.backgroundColor;
    }

    /* renamed from: component4, reason: from getter */
    public final int getIconColor() {
        return this.iconColor;
    }

    @NotNull
    public final ConnectionsRoleTag copy(@NotNull String id2, @NotNull String name, int backgroundColor, int iconColor) {
        Intrinsics.checkNotNullParameter(id2, "id");
        Intrinsics.checkNotNullParameter(name, "name");
        return new ConnectionsRoleTag(id2, name, backgroundColor, iconColor);
    }

    public boolean equals(Object other) {
        if (this == other) {
            return true;
        }
        if (!(other instanceof ConnectionsRoleTag)) {
            return false;
        }
        ConnectionsRoleTag connectionsRoleTag = (ConnectionsRoleTag) other;
        return Intrinsics.areEqual(this.id, connectionsRoleTag.id) && Intrinsics.areEqual(this.name, connectionsRoleTag.name) && this.backgroundColor == connectionsRoleTag.backgroundColor && this.iconColor == connectionsRoleTag.iconColor;
    }

    public final int getBackgroundColor() {
        return this.backgroundColor;
    }

    public final int getIconColor() {
        return this.iconColor;
    }

    @NotNull
    public final String getId() {
        return this.id;
    }

    @NotNull
    public final String getName() {
        return this.name;
    }

    public int hashCode() {
        return Integer.hashCode(this.iconColor) + a.u(this.backgroundColor, a3.e.d(this.id.hashCode() * 31, 31, this.name), 31);
    }

    @NotNull
    public String toString() {
        String str = this.id;
        String str2 = this.name;
        int i5 = this.backgroundColor;
        int i6 = this.iconColor;
        StringBuilder t5 = a3.e.t("ConnectionsRoleTag(id=", str, ", name=", str2, ", backgroundColor=");
        t5.append(i5);
        t5.append(", iconColor=");
        t5.append(i6);
        t5.append(")");
        return t5.toString();
    }

    public ConnectionsRoleTag(@NotNull String id2, @NotNull String name, int i5, int i6) {
        Intrinsics.checkNotNullParameter(id2, "id");
        Intrinsics.checkNotNullParameter(name, "name");
        this.id = id2;
        this.name = name;
        this.backgroundColor = i5;
        this.iconColor = i6;
    }
}
