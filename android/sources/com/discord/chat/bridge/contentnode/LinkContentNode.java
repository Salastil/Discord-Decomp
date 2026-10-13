package com.discord.chat.bridge.contentnode;

import bs.d;
import bs.g;
import bs.h1;
import bs.o0;
import bs.v1;
import com.discord.chat.bridge.botuikit.b;
import com.discord.chat.bridge.contentnode.LinkContextData;
import com.discord.chat.bridge.rolecolors.RoleColors;
import com.discord.chat.bridge.rolecolors.RoleColors$$serializer;
import com.discord.jank_stats.JankRecordStore;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import fo.l;
import fo.m;
import java.util.List;
import kotlin.Lazy;
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
@Metadata(d1 = {"\u0000^\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010 \n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\b\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u000b\n\u0002\b\u0003\n\u0002\u0010\u000e\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u001a\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0004\b\u0087\b\u0018\u0000 =2\u00020\u0001:\u0002<=B\u001f\u0012\f\u0010\u0002\u001a\b\u0012\u0004\u0012\u00020\u00010\u0003\u0012\b\u0010\u0004\u001a\u0004\u0018\u00010\u0005¢\u0006\u0004\b\u0006\u0010\u0007B\u0083\u0001\b\u0010\u0012\u0006\u0010\b\u001a\u00020\t\u0012\u000e\u0010\u0002\u001a\n\u0012\u0004\u0012\u00020\u0001\u0018\u00010\u0003\u0012\b\u0010\u0004\u001a\u0004\u0018\u00010\u0005\u0012\b\u0010\n\u001a\u0004\u0018\u00010\t\u0012\b\u0010\u000b\u001a\u0004\u0018\u00010\f\u0012\b\u0010\r\u001a\u0004\u0018\u00010\t\u0012\b\u0010\u000e\u001a\u0004\u0018\u00010\u000f\u0012\b\u0010\u0010\u001a\u0004\u0018\u00010\t\u0012\b\u0010\u0011\u001a\u0004\u0018\u00010\u000f\u0012\b\u0010\u0012\u001a\u0004\u0018\u00010\u0013\u0012\u0006\u0010\u0014\u001a\u00020\u000f\u0012\b\u0010\u0015\u001a\u0004\u0018\u00010\u0016¢\u0006\u0004\b\u0006\u0010\u0017J\u000f\u0010,\u001a\b\u0012\u0004\u0012\u00020\u00010\u0003HÆ\u0003J\u000b\u0010-\u001a\u0004\u0018\u00010\u0005HÆ\u0003J%\u0010.\u001a\u00020\u00002\u000e\b\u0002\u0010\u0002\u001a\b\u0012\u0004\u0012\u00020\u00010\u00032\n\b\u0002\u0010\u0004\u001a\u0004\u0018\u00010\u0005HÆ\u0001J\u0013\u0010/\u001a\u00020\u000f2\b\u00100\u001a\u0004\u0018\u000101HÖ\u0003J\t\u00102\u001a\u00020\tHÖ\u0001J\t\u00103\u001a\u00020\u0013HÖ\u0001J%\u00104\u001a\u0002052\u0006\u00106\u001a\u00020\u00002\u0006\u00107\u001a\u0002082\u0006\u00109\u001a\u00020:H\u0001¢\u0006\u0002\b;R\u0017\u0010\u0002\u001a\b\u0012\u0004\u0012\u00020\u00010\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0018\u0010\u0019R\u0013\u0010\u0004\u001a\u0004\u0018\u00010\u0005¢\u0006\b\n\u0000\u001a\u0004\b\u001a\u0010\u001bR\u0015\u0010\n\u001a\u0004\u0018\u00010\t¢\u0006\n\n\u0002\u0010\u001e\u001a\u0004\b\u001c\u0010\u001dR\u0013\u0010\u000b\u001a\u0004\u0018\u00010\f¢\u0006\b\n\u0000\u001a\u0004\b\u001f\u0010 R\u0015\u0010\r\u001a\u0004\u0018\u00010\t¢\u0006\n\n\u0002\u0010\u001e\u001a\u0004\b!\u0010\u001dR\u0015\u0010\u000e\u001a\u0004\u0018\u00010\u000f¢\u0006\n\n\u0002\u0010$\u001a\u0004\b\"\u0010#R\u0015\u0010\u0010\u001a\u0004\u0018\u00010\t¢\u0006\n\n\u0002\u0010\u001e\u001a\u0004\b%\u0010\u001dR\u0015\u0010\u0011\u001a\u0004\u0018\u00010\u000f¢\u0006\n\n\u0002\u0010$\u001a\u0004\b&\u0010#R\u0013\u0010\u0012\u001a\u0004\u0018\u00010\u0013¢\u0006\b\n\u0000\u001a\u0004\b'\u0010(R\u0011\u0010\u0014\u001a\u00020\u000f¢\u0006\b\n\u0000\u001a\u0004\b\u0014\u0010)R\u0011\u0010*\u001a\u00020\u00138F¢\u0006\u0006\u001a\u0004\b+\u0010(¨\u0006>"}, d2 = {"Lcom/discord/chat/bridge/contentnode/LinkContentNode;", "Lcom/discord/chat/bridge/contentnode/ContentNode;", "content", "", "target", "Lcom/discord/chat/bridge/contentnode/LinkContextData;", "<init>", "(Ljava/util/List;Lcom/discord/chat/bridge/contentnode/LinkContextData;)V", "seen0", "", "linkColor", "roleColors", "Lcom/discord/chat/bridge/rolecolors/RoleColors;", "bindUserMenuRoleColor", "shouldShowRoleDot", "", "displayNameFontId", "medium", "url", "", "isUrl", "serializationConstructorMarker", "Lkotlinx/serialization/internal/SerializationConstructorMarker;", "(ILjava/util/List;Lcom/discord/chat/bridge/contentnode/LinkContextData;Ljava/lang/Integer;Lcom/discord/chat/bridge/rolecolors/RoleColors;Ljava/lang/Integer;Ljava/lang/Boolean;Ljava/lang/Integer;Ljava/lang/Boolean;Ljava/lang/String;ZLkotlinx/serialization/internal/SerializationConstructorMarker;)V", "getContent", "()Ljava/util/List;", "getTarget", "()Lcom/discord/chat/bridge/contentnode/LinkContextData;", "getLinkColor", "()Ljava/lang/Integer;", "Ljava/lang/Integer;", "getRoleColors", "()Lcom/discord/chat/bridge/rolecolors/RoleColors;", "getBindUserMenuRoleColor", "getShouldShowRoleDot", "()Ljava/lang/Boolean;", "Ljava/lang/Boolean;", "getDisplayNameFontId", "getMedium", "getUrl", "()Ljava/lang/String;", "()Z", "textContent", "getTextContent", "component1", "component2", "copy", "equals", JankRecordStore.SCREEN_OTHER, "", "hashCode", "toString", "write$Self", "", "self", "output", "Lkotlinx/serialization/encoding/CompositeEncoder;", "serialDesc", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "write$Self$chat_release", "$serializer", "Companion", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final /* data */ class LinkContentNode extends ContentNode {
    private final Integer bindUserMenuRoleColor;

    @NotNull
    private final List<ContentNode> content;
    private final Integer displayNameFontId;
    private final boolean isUrl;
    private final Integer linkColor;
    private final Boolean medium;
    private final RoleColors roleColors;
    private final Boolean shouldShowRoleDot;
    private final LinkContextData target;
    private final String url;

    /* renamed from: Companion, reason: from kotlin metadata */
    @NotNull
    public static final Companion INSTANCE = new Companion(null);

    @NotNull
    private static final Lazy[] $childSerializers = {l.b(m.f8827e, new b(13)), null, null, null, null, null, null, null, null, null};

    @Metadata(d1 = {"\u0000\u0016\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\f\u0010\u0004\u001a\b\u0012\u0004\u0012\u00020\u00060\u0005¨\u0006\u0007"}, d2 = {"Lcom/discord/chat/bridge/contentnode/LinkContentNode$Companion;", "", "<init>", "()V", "serializer", "Lkotlinx/serialization/KSerializer;", "Lcom/discord/chat/bridge/contentnode/LinkContentNode;", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final class Companion {
        private Companion() {
        }

        @NotNull
        public final KSerializer serializer() {
            return LinkContentNode$$serializer.INSTANCE;
        }

        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }
    }

    /* JADX WARN: Illegal instructions before constructor call */
    /* JADX WARN: Multi-variable type inference failed */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public /* synthetic */ LinkContentNode(int i5, List list, LinkContextData linkContextData, Integer num, RoleColors roleColors, Integer num2, Boolean bool, Integer num3, Boolean bool2, String str, boolean z5, SerializationConstructorMarker serializationConstructorMarker) {
        super(r0 == true ? 1 : 0);
        String str2 = null;
        Object[] objArr = 0;
        if (3 != (i5 & 3)) {
            h1.l(i5, 3, LinkContentNode$$serializer.INSTANCE.getDescriptor());
            throw null;
        }
        this.content = list;
        this.target = linkContextData;
        if ((i5 & 4) == 0) {
            this.linkColor = linkContextData instanceof LinkContextData.BindUserMenu ? ((LinkContextData.BindUserMenu) linkContextData).getLinkColor() : linkContextData instanceof LinkContextData.BindOpenUrl ? ((LinkContextData.BindOpenUrl) linkContextData).getLinkColor() : linkContextData instanceof LinkContextData.BindOpenGdmCustomizeActionSheet ? ((LinkContextData.BindOpenGdmCustomizeActionSheet) linkContextData).getLinkColor() : linkContextData instanceof LinkContextData.BindDoNothing ? ((LinkContextData.BindDoNothing) linkContextData).getLinkColor() : null;
        } else {
            this.linkColor = num;
        }
        if ((i5 & 8) == 0) {
            this.roleColors = linkContextData instanceof LinkContextData.BindUserMenu ? ((LinkContextData.BindUserMenu) linkContextData).getRoleColors() : null;
        } else {
            this.roleColors = roleColors;
        }
        if ((i5 & 16) == 0) {
            this.bindUserMenuRoleColor = linkContextData instanceof LinkContextData.BindUserMenu ? ((LinkContextData.BindUserMenu) linkContextData).getRoleColor() : null;
        } else {
            this.bindUserMenuRoleColor = num2;
        }
        if ((i5 & 32) == 0) {
            this.shouldShowRoleDot = linkContextData instanceof LinkContextData.BindUserMenu ? ((LinkContextData.BindUserMenu) linkContextData).getShouldShowRoleDot() : null;
        } else {
            this.shouldShowRoleDot = bool;
        }
        if ((i5 & 64) == 0) {
            this.displayNameFontId = linkContextData instanceof LinkContextData.BindUserMenu ? ((LinkContextData.BindUserMenu) linkContextData).getFontId() : null;
        } else {
            this.displayNameFontId = num3;
        }
        if ((i5 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT) == 0) {
            this.medium = linkContextData instanceof LinkContextData.BindUserMenu ? ((LinkContextData.BindUserMenu) linkContextData).getMedium() : linkContextData instanceof LinkContextData.BindOpenThreadChannel ? ((LinkContextData.BindOpenThreadChannel) linkContextData).getMedium() : linkContextData instanceof LinkContextData.BindOpenUrl ? ((LinkContextData.BindOpenUrl) linkContextData).getMedium() : linkContextData instanceof LinkContextData.BindOpenPins ? ((LinkContextData.BindOpenPins) linkContextData).getMedium() : linkContextData instanceof LinkContextData.BindGuildMenu ? ((LinkContextData.BindGuildMenu) linkContextData).getMedium() : linkContextData instanceof LinkContextData.BindOpenGdmCustomizeActionSheet ? ((LinkContextData.BindOpenGdmCustomizeActionSheet) linkContextData).getMedium() : linkContextData instanceof LinkContextData.BindJumpToMessage ? ((LinkContextData.BindJumpToMessage) linkContextData).getMedium() : linkContextData instanceof LinkContextData.BindDoNothing ? ((LinkContextData.BindDoNothing) linkContextData).getMedium() : null;
        } else {
            this.medium = bool2;
        }
        if ((i5 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER) == 0) {
            if (linkContextData instanceof LinkContextData.LinkUrl) {
                str2 = ((LinkContextData.LinkUrl) linkContextData).getUrl();
            } else if (linkContextData instanceof LinkContextData.BindOpenUrl) {
                str2 = ((LinkContextData.BindOpenUrl) linkContextData).getUrl();
            }
            this.url = str2;
        } else {
            this.url = str;
        }
        if ((i5 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING) == 0) {
            this.isUrl = this.url != null;
        } else {
            this.isUrl = z5;
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final /* synthetic */ KSerializer _childSerializers$_anonymous_() {
        return new d(ContentNodeSerializer.INSTANCE, 0);
    }

    /* JADX WARN: Multi-variable type inference failed */
    public static /* synthetic */ LinkContentNode copy$default(LinkContentNode linkContentNode, List list, LinkContextData linkContextData, int i5, Object obj) {
        if ((i5 & 1) != 0) {
            list = linkContentNode.content;
        }
        if ((i5 & 2) != 0) {
            linkContextData = linkContentNode.target;
        }
        return linkContentNode.copy(list, linkContextData);
    }

    /* JADX WARN: Code restructure failed: missing block: B:14:0x007b, code lost:
    
        if (kotlin.jvm.internal.Intrinsics.areEqual(r2, r5 instanceof com.discord.chat.bridge.contentnode.LinkContextData.BindUserMenu ? ((com.discord.chat.bridge.contentnode.LinkContextData.BindUserMenu) r5).getRoleColors() : null) == false) goto L30;
     */
    /* JADX WARN: Code restructure failed: missing block: B:21:0x00a0, code lost:
    
        if (kotlin.jvm.internal.Intrinsics.areEqual(r2, r5 instanceof com.discord.chat.bridge.contentnode.LinkContextData.BindUserMenu ? ((com.discord.chat.bridge.contentnode.LinkContextData.BindUserMenu) r5).getRoleColor() : null) == false) goto L40;
     */
    /* JADX WARN: Code restructure failed: missing block: B:28:0x00c5, code lost:
    
        if (kotlin.jvm.internal.Intrinsics.areEqual(r2, r5 instanceof com.discord.chat.bridge.contentnode.LinkContextData.BindUserMenu ? ((com.discord.chat.bridge.contentnode.LinkContextData.BindUserMenu) r5).getShouldShowRoleDot() : null) == false) goto L50;
     */
    /* JADX WARN: Code restructure failed: missing block: B:35:0x00ea, code lost:
    
        if (kotlin.jvm.internal.Intrinsics.areEqual(r2, r5 instanceof com.discord.chat.bridge.contentnode.LinkContextData.BindUserMenu ? ((com.discord.chat.bridge.contentnode.LinkContextData.BindUserMenu) r5).getFontId() : null) == false) goto L60;
     */
    /* JADX WARN: Code restructure failed: missing block: B:42:0x015d, code lost:
    
        if (kotlin.jvm.internal.Intrinsics.areEqual(r2, r5 instanceof com.discord.chat.bridge.contentnode.LinkContextData.BindUserMenu ? ((com.discord.chat.bridge.contentnode.LinkContextData.BindUserMenu) r5).getMedium() : r5 instanceof com.discord.chat.bridge.contentnode.LinkContextData.BindOpenThreadChannel ? ((com.discord.chat.bridge.contentnode.LinkContextData.BindOpenThreadChannel) r5).getMedium() : r5 instanceof com.discord.chat.bridge.contentnode.LinkContextData.BindOpenUrl ? ((com.discord.chat.bridge.contentnode.LinkContextData.BindOpenUrl) r5).getMedium() : r5 instanceof com.discord.chat.bridge.contentnode.LinkContextData.BindOpenPins ? ((com.discord.chat.bridge.contentnode.LinkContextData.BindOpenPins) r5).getMedium() : r5 instanceof com.discord.chat.bridge.contentnode.LinkContextData.BindGuildMenu ? ((com.discord.chat.bridge.contentnode.LinkContextData.BindGuildMenu) r5).getMedium() : r5 instanceof com.discord.chat.bridge.contentnode.LinkContextData.BindOpenGdmCustomizeActionSheet ? ((com.discord.chat.bridge.contentnode.LinkContextData.BindOpenGdmCustomizeActionSheet) r5).getMedium() : r5 instanceof com.discord.chat.bridge.contentnode.LinkContextData.BindJumpToMessage ? ((com.discord.chat.bridge.contentnode.LinkContextData.BindJumpToMessage) r5).getMedium() : r5 instanceof com.discord.chat.bridge.contentnode.LinkContextData.BindDoNothing ? ((com.discord.chat.bridge.contentnode.LinkContextData.BindDoNothing) r5).getMedium() : null) == false) goto L91;
     */
    /* JADX WARN: Code restructure failed: missing block: B:49:0x018c, code lost:
    
        if (kotlin.jvm.internal.Intrinsics.areEqual(r2, r4) == false) goto L103;
     */
    /* JADX WARN: Code restructure failed: missing block: B:7:0x0056, code lost:
    
        if (kotlin.jvm.internal.Intrinsics.areEqual(r2, r5 instanceof com.discord.chat.bridge.contentnode.LinkContextData.BindUserMenu ? ((com.discord.chat.bridge.contentnode.LinkContextData.BindUserMenu) r5).getLinkColor() : r5 instanceof com.discord.chat.bridge.contentnode.LinkContextData.BindOpenUrl ? ((com.discord.chat.bridge.contentnode.LinkContextData.BindOpenUrl) r5).getLinkColor() : r5 instanceof com.discord.chat.bridge.contentnode.LinkContextData.BindOpenGdmCustomizeActionSheet ? ((com.discord.chat.bridge.contentnode.LinkContextData.BindOpenGdmCustomizeActionSheet) r5).getLinkColor() : r5 instanceof com.discord.chat.bridge.contentnode.LinkContextData.BindDoNothing ? ((com.discord.chat.bridge.contentnode.LinkContextData.BindDoNothing) r5).getLinkColor() : null) == false) goto L20;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static final /* synthetic */ void write$Self$chat_release(LinkContentNode self, CompositeEncoder output, SerialDescriptor serialDesc) {
        output.g(serialDesc, 0, (KSerializer) $childSerializers[0].getValue(), self.content);
        output.z(serialDesc, 1, LinkContextDataSerializer.INSTANCE, self.target);
        String str = null;
        if (!output.I(serialDesc, 2)) {
            Integer num = self.linkColor;
            LinkContextData linkContextData = self.target;
        }
        output.z(serialDesc, 2, o0.a, self.linkColor);
        if (!output.I(serialDesc, 3)) {
            RoleColors roleColors = self.roleColors;
            LinkContextData linkContextData2 = self.target;
        }
        output.z(serialDesc, 3, RoleColors$$serializer.INSTANCE, self.roleColors);
        if (!output.I(serialDesc, 4)) {
            Integer num2 = self.bindUserMenuRoleColor;
            LinkContextData linkContextData3 = self.target;
        }
        output.z(serialDesc, 4, o0.a, self.bindUserMenuRoleColor);
        if (!output.I(serialDesc, 5)) {
            Boolean bool = self.shouldShowRoleDot;
            LinkContextData linkContextData4 = self.target;
        }
        output.z(serialDesc, 5, g.a, self.shouldShowRoleDot);
        if (!output.I(serialDesc, 6)) {
            Integer num3 = self.displayNameFontId;
            LinkContextData linkContextData5 = self.target;
        }
        output.z(serialDesc, 6, o0.a, self.displayNameFontId);
        if (!output.I(serialDesc, 7)) {
            Boolean bool2 = self.medium;
            LinkContextData linkContextData6 = self.target;
        }
        output.z(serialDesc, 7, g.a, self.medium);
        if (!output.I(serialDesc, 8)) {
            String str2 = self.url;
            LinkContextData linkContextData7 = self.target;
            if (linkContextData7 instanceof LinkContextData.LinkUrl) {
                str = ((LinkContextData.LinkUrl) linkContextData7).getUrl();
            } else if (linkContextData7 instanceof LinkContextData.BindOpenUrl) {
                str = ((LinkContextData.BindOpenUrl) linkContextData7).getUrl();
            }
        }
        output.z(serialDesc, 8, v1.a, self.url);
        if (!output.I(serialDesc, 9)) {
            if (self.isUrl == (self.url != null)) {
                return;
            }
        }
        output.x(serialDesc, 9, self.isUrl);
    }

    @NotNull
    public final List<ContentNode> component1() {
        return this.content;
    }

    /* renamed from: component2, reason: from getter */
    public final LinkContextData getTarget() {
        return this.target;
    }

    @NotNull
    public final LinkContentNode copy(@NotNull List<? extends ContentNode> content, LinkContextData target) {
        Intrinsics.checkNotNullParameter(content, "content");
        return new LinkContentNode(content, target);
    }

    public boolean equals(Object other) {
        if (this == other) {
            return true;
        }
        if (!(other instanceof LinkContentNode)) {
            return false;
        }
        LinkContentNode linkContentNode = (LinkContentNode) other;
        return Intrinsics.areEqual(this.content, linkContentNode.content) && Intrinsics.areEqual(this.target, linkContentNode.target);
    }

    public final Integer getBindUserMenuRoleColor() {
        return this.bindUserMenuRoleColor;
    }

    @NotNull
    public final List<ContentNode> getContent() {
        return this.content;
    }

    public final Integer getDisplayNameFontId() {
        return this.displayNameFontId;
    }

    public final Integer getLinkColor() {
        return this.linkColor;
    }

    public final Boolean getMedium() {
        return this.medium;
    }

    public final RoleColors getRoleColors() {
        return this.roleColors;
    }

    public final Boolean getShouldShowRoleDot() {
        return this.shouldShowRoleDot;
    }

    public final LinkContextData getTarget() {
        return this.target;
    }

    @NotNull
    public final String getTextContent() {
        return ContentNodeKt.toPlainText(this.content);
    }

    public final String getUrl() {
        return this.url;
    }

    public int hashCode() {
        int hashCode = this.content.hashCode() * 31;
        LinkContextData linkContextData = this.target;
        return hashCode + (linkContextData == null ? 0 : linkContextData.hashCode());
    }

    /* renamed from: isUrl, reason: from getter */
    public final boolean getIsUrl() {
        return this.isUrl;
    }

    @NotNull
    public String toString() {
        return "LinkContentNode(content=" + this.content + ", target=" + this.target + ")";
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    /* JADX WARN: Multi-variable type inference failed */
    public LinkContentNode(@NotNull List<? extends ContentNode> content, LinkContextData linkContextData) {
        super(0 == true ? 1 : 0);
        Integer linkColor;
        Boolean medium;
        Intrinsics.checkNotNullParameter(content, "content");
        String str = null;
        this.content = content;
        this.target = linkContextData;
        if (linkContextData instanceof LinkContextData.BindUserMenu) {
            linkColor = ((LinkContextData.BindUserMenu) linkContextData).getLinkColor();
        } else if (linkContextData instanceof LinkContextData.BindOpenUrl) {
            linkColor = ((LinkContextData.BindOpenUrl) linkContextData).getLinkColor();
        } else if (linkContextData instanceof LinkContextData.BindOpenGdmCustomizeActionSheet) {
            linkColor = ((LinkContextData.BindOpenGdmCustomizeActionSheet) linkContextData).getLinkColor();
        } else {
            linkColor = linkContextData instanceof LinkContextData.BindDoNothing ? ((LinkContextData.BindDoNothing) linkContextData).getLinkColor() : null;
        }
        this.linkColor = linkColor;
        this.roleColors = linkContextData instanceof LinkContextData.BindUserMenu ? ((LinkContextData.BindUserMenu) linkContextData).getRoleColors() : null;
        this.bindUserMenuRoleColor = linkContextData instanceof LinkContextData.BindUserMenu ? ((LinkContextData.BindUserMenu) linkContextData).getRoleColor() : null;
        this.shouldShowRoleDot = linkContextData instanceof LinkContextData.BindUserMenu ? ((LinkContextData.BindUserMenu) linkContextData).getShouldShowRoleDot() : null;
        this.displayNameFontId = linkContextData instanceof LinkContextData.BindUserMenu ? ((LinkContextData.BindUserMenu) linkContextData).getFontId() : null;
        if (linkContextData instanceof LinkContextData.BindUserMenu) {
            medium = ((LinkContextData.BindUserMenu) linkContextData).getMedium();
        } else if (linkContextData instanceof LinkContextData.BindOpenThreadChannel) {
            medium = ((LinkContextData.BindOpenThreadChannel) linkContextData).getMedium();
        } else if (linkContextData instanceof LinkContextData.BindOpenUrl) {
            medium = ((LinkContextData.BindOpenUrl) linkContextData).getMedium();
        } else if (linkContextData instanceof LinkContextData.BindOpenPins) {
            medium = ((LinkContextData.BindOpenPins) linkContextData).getMedium();
        } else if (linkContextData instanceof LinkContextData.BindGuildMenu) {
            medium = ((LinkContextData.BindGuildMenu) linkContextData).getMedium();
        } else if (linkContextData instanceof LinkContextData.BindOpenGdmCustomizeActionSheet) {
            medium = ((LinkContextData.BindOpenGdmCustomizeActionSheet) linkContextData).getMedium();
        } else if (linkContextData instanceof LinkContextData.BindJumpToMessage) {
            medium = ((LinkContextData.BindJumpToMessage) linkContextData).getMedium();
        } else {
            medium = linkContextData instanceof LinkContextData.BindDoNothing ? ((LinkContextData.BindDoNothing) linkContextData).getMedium() : null;
        }
        this.medium = medium;
        if (linkContextData instanceof LinkContextData.LinkUrl) {
            str = ((LinkContextData.LinkUrl) linkContextData).getUrl();
        } else if (linkContextData instanceof LinkContextData.BindOpenUrl) {
            str = ((LinkContextData.BindOpenUrl) linkContextData).getUrl();
        }
        this.url = str;
        this.isUrl = str != null;
    }
}
