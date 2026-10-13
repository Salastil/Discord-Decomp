package com.discord.chat.bridge.codedlinks;

import bs.h1;
import com.discord.chat.bridge.botuikit.a;
import com.discord.chat.bridge.roleicons.RoleIcon;
import com.discord.chat.bridge.roleicons.RoleIcon$$serializer;
import com.discord.jank_stats.JankRecordStore;
import com.discord.recycler_view.utils.ItemDiffableType;
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
@Metadata(d1 = {"\u0000N\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0002\n\u0002\u0010\b\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0002\b\t\n\u0002\u0010\u0000\n\u0002\b\b\n\u0002\u0010\u000b\n\u0002\b\u0004\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0004\b\u0087\b\u0018\u0000 -2\u00020\u0001:\u0002,-B-\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0003\u0012\b\b\u0001\u0010\u0005\u001a\u00020\u0006\u0012\n\b\u0002\u0010\u0007\u001a\u0004\u0018\u00010\b¢\u0006\u0004\b\t\u0010\nBA\b\u0010\u0012\u0006\u0010\u000b\u001a\u00020\u0006\u0012\b\u0010\u0002\u001a\u0004\u0018\u00010\u0003\u0012\b\u0010\u0004\u001a\u0004\u0018\u00010\u0003\u0012\u0006\u0010\u0005\u001a\u00020\u0006\u0012\b\u0010\u0007\u001a\u0004\u0018\u00010\b\u0012\b\u0010\f\u001a\u0004\u0018\u00010\r¢\u0006\u0004\b\t\u0010\u000eJ\t\u0010\u001a\u001a\u00020\u0003HÆ\u0003J\t\u0010\u001b\u001a\u00020\u0003HÆ\u0003J\t\u0010\u001c\u001a\u00020\u0006HÆ\u0003J\u000b\u0010\u001d\u001a\u0004\u0018\u00010\bHÆ\u0003J3\u0010\u001e\u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u00032\b\b\u0002\u0010\u0004\u001a\u00020\u00032\b\b\u0003\u0010\u0005\u001a\u00020\u00062\n\b\u0002\u0010\u0007\u001a\u0004\u0018\u00010\bHÆ\u0001J\u0013\u0010\u001f\u001a\u00020 2\b\u0010!\u001a\u0004\u0018\u00010\u0017HÖ\u0003J\t\u0010\"\u001a\u00020\u0006HÖ\u0001J\t\u0010#\u001a\u00020\u0003HÖ\u0001J%\u0010$\u001a\u00020%2\u0006\u0010&\u001a\u00020\u00002\u0006\u0010'\u001a\u00020(2\u0006\u0010)\u001a\u00020*H\u0001¢\u0006\u0002\b+R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u000f\u0010\u0010R\u0011\u0010\u0004\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0011\u0010\u0010R\u0011\u0010\u0005\u001a\u00020\u0006¢\u0006\b\n\u0000\u001a\u0004\b\u0012\u0010\u0013R\u0013\u0010\u0007\u001a\u0004\u0018\u00010\b¢\u0006\b\n\u0000\u001a\u0004\b\u0014\u0010\u0015R\u0014\u0010\u0016\u001a\u00020\u00178VX\u0096\u0004¢\u0006\u0006\u001a\u0004\b\u0018\u0010\u0019¨\u0006."}, d2 = {"Lcom/discord/chat/bridge/codedlinks/InviteRole;", "Lcom/discord/recycler_view/utils/ItemDiffableType;", StackTraceHelper.ID_KEY, "", StackTraceHelper.NAME_KEY, ViewProps.COLOR, "", "roleIcon", "Lcom/discord/chat/bridge/roleicons/RoleIcon;", "<init>", "(Ljava/lang/String;Ljava/lang/String;ILcom/discord/chat/bridge/roleicons/RoleIcon;)V", "seen0", "serializationConstructorMarker", "Lkotlinx/serialization/internal/SerializationConstructorMarker;", "(ILjava/lang/String;Ljava/lang/String;ILcom/discord/chat/bridge/roleicons/RoleIcon;Lkotlinx/serialization/internal/SerializationConstructorMarker;)V", "getId", "()Ljava/lang/String;", "getName", "getColor", "()I", "getRoleIcon", "()Lcom/discord/chat/bridge/roleicons/RoleIcon;", "itemId", "", "getItemId", "()Ljava/lang/Object;", "component1", "component2", "component3", "component4", "copy", "equals", "", JankRecordStore.SCREEN_OTHER, "hashCode", "toString", "write$Self", "", "self", "output", "Lkotlinx/serialization/encoding/CompositeEncoder;", "serialDesc", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "write$Self$chat_release", "$serializer", "Companion", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final /* data */ class InviteRole implements ItemDiffableType {

    /* renamed from: Companion, reason: from kotlin metadata */
    @NotNull
    public static final Companion INSTANCE = new Companion(null);
    private final int color;

    @NotNull
    private final String id;

    @NotNull
    private final String name;
    private final RoleIcon roleIcon;

    @Metadata(d1 = {"\u0000\u0016\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\f\u0010\u0004\u001a\b\u0012\u0004\u0012\u00020\u00060\u0005¨\u0006\u0007"}, d2 = {"Lcom/discord/chat/bridge/codedlinks/InviteRole$Companion;", "", "<init>", "()V", "serializer", "Lkotlinx/serialization/KSerializer;", "Lcom/discord/chat/bridge/codedlinks/InviteRole;", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final class Companion {
        private Companion() {
        }

        @NotNull
        public final KSerializer serializer() {
            return InviteRole$$serializer.INSTANCE;
        }

        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }
    }

    public /* synthetic */ InviteRole(int i5, String str, String str2, int i6, RoleIcon roleIcon, SerializationConstructorMarker serializationConstructorMarker) {
        if (7 != (i5 & 7)) {
            h1.l(i5, 7, InviteRole$$serializer.INSTANCE.getDescriptor());
            throw null;
        }
        this.id = str;
        this.name = str2;
        this.color = i6;
        if ((i5 & 8) == 0) {
            this.roleIcon = null;
        } else {
            this.roleIcon = roleIcon;
        }
    }

    public static /* synthetic */ InviteRole copy$default(InviteRole inviteRole, String str, String str2, int i5, RoleIcon roleIcon, int i6, Object obj) {
        if ((i6 & 1) != 0) {
            str = inviteRole.id;
        }
        if ((i6 & 2) != 0) {
            str2 = inviteRole.name;
        }
        if ((i6 & 4) != 0) {
            i5 = inviteRole.color;
        }
        if ((i6 & 8) != 0) {
            roleIcon = inviteRole.roleIcon;
        }
        return inviteRole.copy(str, str2, i5, roleIcon);
    }

    public static final /* synthetic */ void write$Self$chat_release(InviteRole self, CompositeEncoder output, SerialDescriptor serialDesc) {
        output.y(serialDesc, 0, self.id);
        output.y(serialDesc, 1, self.name);
        output.n(2, self.color, serialDesc);
        if (!output.I(serialDesc, 3) && self.roleIcon == null) {
            return;
        }
        output.z(serialDesc, 3, RoleIcon$$serializer.INSTANCE, self.roleIcon);
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
    public final int getColor() {
        return this.color;
    }

    /* renamed from: component4, reason: from getter */
    public final RoleIcon getRoleIcon() {
        return this.roleIcon;
    }

    @NotNull
    public final InviteRole copy(@NotNull String id2, @NotNull String name, int color, RoleIcon roleIcon) {
        Intrinsics.checkNotNullParameter(id2, "id");
        Intrinsics.checkNotNullParameter(name, "name");
        return new InviteRole(id2, name, color, roleIcon);
    }

    public boolean equals(Object other) {
        if (this == other) {
            return true;
        }
        if (!(other instanceof InviteRole)) {
            return false;
        }
        InviteRole inviteRole = (InviteRole) other;
        return Intrinsics.areEqual(this.id, inviteRole.id) && Intrinsics.areEqual(this.name, inviteRole.name) && this.color == inviteRole.color && Intrinsics.areEqual(this.roleIcon, inviteRole.roleIcon);
    }

    public final int getColor() {
        return this.color;
    }

    @NotNull
    public final String getId() {
        return this.id;
    }

    @Override // com.discord.recycler_view.utils.ItemDiffableType
    @NotNull
    public Object getItemId() {
        return this.id;
    }

    @NotNull
    public final String getName() {
        return this.name;
    }

    public final RoleIcon getRoleIcon() {
        return this.roleIcon;
    }

    public int hashCode() {
        int u5 = a.u(this.color, a3.e.d(this.id.hashCode() * 31, 31, this.name), 31);
        RoleIcon roleIcon = this.roleIcon;
        return u5 + (roleIcon == null ? 0 : roleIcon.hashCode());
    }

    @NotNull
    public String toString() {
        String str = this.id;
        String str2 = this.name;
        int i5 = this.color;
        RoleIcon roleIcon = this.roleIcon;
        StringBuilder t5 = a3.e.t("InviteRole(id=", str, ", name=", str2, ", color=");
        t5.append(i5);
        t5.append(", roleIcon=");
        t5.append(roleIcon);
        t5.append(")");
        return t5.toString();
    }

    public InviteRole(@NotNull String id2, @NotNull String name, int i5, RoleIcon roleIcon) {
        Intrinsics.checkNotNullParameter(id2, "id");
        Intrinsics.checkNotNullParameter(name, "name");
        this.id = id2;
        this.name = name;
        this.color = i5;
        this.roleIcon = roleIcon;
    }

    public /* synthetic */ InviteRole(String str, String str2, int i5, RoleIcon roleIcon, int i6, DefaultConstructorMarker defaultConstructorMarker) {
        this(str, str2, i5, (i6 & 8) != 0 ? null : roleIcon);
    }
}
