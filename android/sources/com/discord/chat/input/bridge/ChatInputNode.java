package com.discord.chat.input.bridge;

import bs.g0;
import bs.h1;
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
@Metadata(d1 = {"\u0000R\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\b\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000b\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u000e\n\u0000\n\u0002\u0010\u0007\n\u0002\b\u0006\n\u0002\u0018\u0002\n\u0002\b%\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0004\b\u0087\b\u0018\u0000 E2\u00020\u0001:\u0002DEB{\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0003\u0012\u0006\u0010\u0005\u001a\u00020\u0003\u0012\n\b\u0002\u0010\u0006\u001a\u0004\u0018\u00010\u0007\u0012\b\b\u0002\u0010\b\u001a\u00020\t\u0012\n\b\u0002\u0010\n\u001a\u0004\u0018\u00010\u000b\u0012\b\b\u0002\u0010\f\u001a\u00020\t\u0012\n\b\u0002\u0010\r\u001a\u0004\u0018\u00010\u000e\u0012\n\b\u0002\u0010\u000f\u001a\u0004\u0018\u00010\u0010\u0012\n\b\u0002\u0010\u0011\u001a\u0004\u0018\u00010\u0010\u0012\n\b\u0002\u0010\u0012\u001a\u0004\u0018\u00010\u0010¢\u0006\u0004\b\u0013\u0010\u0014B\u007f\b\u0010\u0012\u0006\u0010\u0015\u001a\u00020\u0003\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0003\u0012\u0006\u0010\u0005\u001a\u00020\u0003\u0012\b\u0010\u0006\u001a\u0004\u0018\u00010\u0007\u0012\u0006\u0010\b\u001a\u00020\t\u0012\b\u0010\n\u001a\u0004\u0018\u00010\u000b\u0012\u0006\u0010\f\u001a\u00020\t\u0012\b\u0010\r\u001a\u0004\u0018\u00010\u000e\u0012\b\u0010\u000f\u001a\u0004\u0018\u00010\u0010\u0012\b\u0010\u0011\u001a\u0004\u0018\u00010\u0010\u0012\b\u0010\u0012\u001a\u0004\u0018\u00010\u0010\u0012\b\u0010\u0016\u001a\u0004\u0018\u00010\u0017¢\u0006\u0004\b\u0013\u0010\u0018J\t\u0010+\u001a\u00020\u0003HÆ\u0003J\t\u0010,\u001a\u00020\u0003HÆ\u0003J\t\u0010-\u001a\u00020\u0003HÆ\u0003J\u000b\u0010.\u001a\u0004\u0018\u00010\u0007HÆ\u0003J\t\u0010/\u001a\u00020\tHÆ\u0003J\u000b\u00100\u001a\u0004\u0018\u00010\u000bHÆ\u0003J\t\u00101\u001a\u00020\tHÆ\u0003J\u000b\u00102\u001a\u0004\u0018\u00010\u000eHÆ\u0003J\u0010\u00103\u001a\u0004\u0018\u00010\u0010HÆ\u0003¢\u0006\u0002\u0010'J\u0010\u00104\u001a\u0004\u0018\u00010\u0010HÆ\u0003¢\u0006\u0002\u0010'J\u0010\u00105\u001a\u0004\u0018\u00010\u0010HÆ\u0003¢\u0006\u0002\u0010'J\u0088\u0001\u00106\u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u00032\b\b\u0002\u0010\u0004\u001a\u00020\u00032\b\b\u0002\u0010\u0005\u001a\u00020\u00032\n\b\u0002\u0010\u0006\u001a\u0004\u0018\u00010\u00072\b\b\u0002\u0010\b\u001a\u00020\t2\n\b\u0002\u0010\n\u001a\u0004\u0018\u00010\u000b2\b\b\u0002\u0010\f\u001a\u00020\t2\n\b\u0002\u0010\r\u001a\u0004\u0018\u00010\u000e2\n\b\u0002\u0010\u000f\u001a\u0004\u0018\u00010\u00102\n\b\u0002\u0010\u0011\u001a\u0004\u0018\u00010\u00102\n\b\u0002\u0010\u0012\u001a\u0004\u0018\u00010\u0010HÆ\u0001¢\u0006\u0002\u00107J\u0013\u00108\u001a\u00020\t2\b\u00109\u001a\u0004\u0018\u00010\u0001HÖ\u0003J\t\u0010:\u001a\u00020\u0003HÖ\u0001J\t\u0010;\u001a\u00020\u000eHÖ\u0001J%\u0010<\u001a\u00020=2\u0006\u0010>\u001a\u00020\u00002\u0006\u0010?\u001a\u00020@2\u0006\u0010A\u001a\u00020BH\u0001¢\u0006\u0002\bCR\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0019\u0010\u001aR\u0011\u0010\u0004\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u001b\u0010\u001aR\u0011\u0010\u0005\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u001c\u0010\u001aR\u0013\u0010\u0006\u001a\u0004\u0018\u00010\u0007¢\u0006\b\n\u0000\u001a\u0004\b\u001d\u0010\u001eR\u0011\u0010\b\u001a\u00020\t¢\u0006\b\n\u0000\u001a\u0004\b\u001f\u0010 R\u0013\u0010\n\u001a\u0004\u0018\u00010\u000b¢\u0006\b\n\u0000\u001a\u0004\b!\u0010\"R\u0011\u0010\f\u001a\u00020\t¢\u0006\b\n\u0000\u001a\u0004\b#\u0010 R\u0013\u0010\r\u001a\u0004\u0018\u00010\u000e¢\u0006\b\n\u0000\u001a\u0004\b$\u0010%R\u0015\u0010\u000f\u001a\u0004\u0018\u00010\u0010¢\u0006\n\n\u0002\u0010(\u001a\u0004\b&\u0010'R\u0015\u0010\u0011\u001a\u0004\u0018\u00010\u0010¢\u0006\n\n\u0002\u0010(\u001a\u0004\b)\u0010'R\u0015\u0010\u0012\u001a\u0004\u0018\u00010\u0010¢\u0006\n\n\u0002\u0010(\u001a\u0004\b*\u0010'¨\u0006F"}, d2 = {"Lcom/discord/chat/input/bridge/ChatInputNode;", "", "type", "", "location", "length", "style", "Lcom/discord/chat/input/bridge/ChatInputNodeStyle;", "deleteNodeOnBackspace", "", "tapAction", "Lcom/discord/chat/input/bridge/TapAction;", "editDisabled", "icon", "", "iconSize", "", "iconCornerRadius", "iconSpacing", "<init>", "(IIILcom/discord/chat/input/bridge/ChatInputNodeStyle;ZLcom/discord/chat/input/bridge/TapAction;ZLjava/lang/String;Ljava/lang/Float;Ljava/lang/Float;Ljava/lang/Float;)V", "seen0", "serializationConstructorMarker", "Lkotlinx/serialization/internal/SerializationConstructorMarker;", "(IIIILcom/discord/chat/input/bridge/ChatInputNodeStyle;ZLcom/discord/chat/input/bridge/TapAction;ZLjava/lang/String;Ljava/lang/Float;Ljava/lang/Float;Ljava/lang/Float;Lkotlinx/serialization/internal/SerializationConstructorMarker;)V", "getType", "()I", "getLocation", "getLength", "getStyle", "()Lcom/discord/chat/input/bridge/ChatInputNodeStyle;", "getDeleteNodeOnBackspace", "()Z", "getTapAction", "()Lcom/discord/chat/input/bridge/TapAction;", "getEditDisabled", "getIcon", "()Ljava/lang/String;", "getIconSize", "()Ljava/lang/Float;", "Ljava/lang/Float;", "getIconCornerRadius", "getIconSpacing", "component1", "component2", "component3", "component4", "component5", "component6", "component7", "component8", "component9", "component10", "component11", "copy", "(IIILcom/discord/chat/input/bridge/ChatInputNodeStyle;ZLcom/discord/chat/input/bridge/TapAction;ZLjava/lang/String;Ljava/lang/Float;Ljava/lang/Float;Ljava/lang/Float;)Lcom/discord/chat/input/bridge/ChatInputNode;", "equals", JankRecordStore.SCREEN_OTHER, "hashCode", "toString", "write$Self", "", "self", "output", "Lkotlinx/serialization/encoding/CompositeEncoder;", "serialDesc", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "write$Self$chat_input_release", "$serializer", "Companion", "chat_input_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final /* data */ class ChatInputNode {

    /* renamed from: Companion, reason: from kotlin metadata */
    @NotNull
    public static final Companion INSTANCE = new Companion(null);
    private final boolean deleteNodeOnBackspace;
    private final boolean editDisabled;
    private final String icon;
    private final Float iconCornerRadius;
    private final Float iconSize;
    private final Float iconSpacing;
    private final int length;
    private final int location;
    private final ChatInputNodeStyle style;
    private final TapAction tapAction;
    private final int type;

    @Metadata(d1 = {"\u0000\u0016\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\f\u0010\u0004\u001a\b\u0012\u0004\u0012\u00020\u00060\u0005¨\u0006\u0007"}, d2 = {"Lcom/discord/chat/input/bridge/ChatInputNode$Companion;", "", "<init>", "()V", "serializer", "Lkotlinx/serialization/KSerializer;", "Lcom/discord/chat/input/bridge/ChatInputNode;", "chat_input_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final class Companion {
        private Companion() {
        }

        @NotNull
        public final KSerializer serializer() {
            return ChatInputNode$$serializer.INSTANCE;
        }

        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }
    }

    public /* synthetic */ ChatInputNode(int i5, int i6, int i10, int i11, ChatInputNodeStyle chatInputNodeStyle, boolean z5, TapAction tapAction, boolean z6, String str, Float f2, Float f10, Float f11, SerializationConstructorMarker serializationConstructorMarker) {
        if (7 != (i5 & 7)) {
            h1.l(i5, 7, ChatInputNode$$serializer.INSTANCE.getDescriptor());
            throw null;
        }
        this.type = i6;
        this.location = i10;
        this.length = i11;
        if ((i5 & 8) == 0) {
            this.style = null;
        } else {
            this.style = chatInputNodeStyle;
        }
        if ((i5 & 16) == 0) {
            this.deleteNodeOnBackspace = false;
        } else {
            this.deleteNodeOnBackspace = z5;
        }
        if ((i5 & 32) == 0) {
            this.tapAction = null;
        } else {
            this.tapAction = tapAction;
        }
        if ((i5 & 64) == 0) {
            this.editDisabled = false;
        } else {
            this.editDisabled = z6;
        }
        if ((i5 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT) == 0) {
            this.icon = null;
        } else {
            this.icon = str;
        }
        if ((i5 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER) == 0) {
            this.iconSize = null;
        } else {
            this.iconSize = f2;
        }
        if ((i5 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING) == 0) {
            this.iconCornerRadius = null;
        } else {
            this.iconCornerRadius = f10;
        }
        if ((i5 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_OVERFLOW_INSET) == 0) {
            this.iconSpacing = null;
        } else {
            this.iconSpacing = f11;
        }
    }

    public static /* synthetic */ ChatInputNode copy$default(ChatInputNode chatInputNode, int i5, int i6, int i10, ChatInputNodeStyle chatInputNodeStyle, boolean z5, TapAction tapAction, boolean z6, String str, Float f2, Float f10, Float f11, int i11, Object obj) {
        if ((i11 & 1) != 0) {
            i5 = chatInputNode.type;
        }
        if ((i11 & 2) != 0) {
            i6 = chatInputNode.location;
        }
        if ((i11 & 4) != 0) {
            i10 = chatInputNode.length;
        }
        if ((i11 & 8) != 0) {
            chatInputNodeStyle = chatInputNode.style;
        }
        if ((i11 & 16) != 0) {
            z5 = chatInputNode.deleteNodeOnBackspace;
        }
        if ((i11 & 32) != 0) {
            tapAction = chatInputNode.tapAction;
        }
        if ((i11 & 64) != 0) {
            z6 = chatInputNode.editDisabled;
        }
        if ((i11 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT) != 0) {
            str = chatInputNode.icon;
        }
        if ((i11 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER) != 0) {
            f2 = chatInputNode.iconSize;
        }
        if ((i11 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING) != 0) {
            f10 = chatInputNode.iconCornerRadius;
        }
        if ((i11 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_OVERFLOW_INSET) != 0) {
            f11 = chatInputNode.iconSpacing;
        }
        Float f12 = f10;
        Float f13 = f11;
        String str2 = str;
        Float f14 = f2;
        TapAction tapAction2 = tapAction;
        boolean z7 = z6;
        boolean z8 = z5;
        int i12 = i10;
        return chatInputNode.copy(i5, i6, i12, chatInputNodeStyle, z8, tapAction2, z7, str2, f14, f12, f13);
    }

    public static final /* synthetic */ void write$Self$chat_input_release(ChatInputNode self, CompositeEncoder output, SerialDescriptor serialDesc) {
        output.n(0, self.type, serialDesc);
        output.n(1, self.location, serialDesc);
        output.n(2, self.length, serialDesc);
        if (output.I(serialDesc, 3) || self.style != null) {
            output.z(serialDesc, 3, ChatInputNodeStyle$$serializer.INSTANCE, self.style);
        }
        if (output.I(serialDesc, 4) || self.deleteNodeOnBackspace) {
            output.x(serialDesc, 4, self.deleteNodeOnBackspace);
        }
        if (output.I(serialDesc, 5) || self.tapAction != null) {
            output.z(serialDesc, 5, TapAction$$serializer.INSTANCE, self.tapAction);
        }
        if (output.I(serialDesc, 6) || self.editDisabled) {
            output.x(serialDesc, 6, self.editDisabled);
        }
        if (output.I(serialDesc, 7) || self.icon != null) {
            output.z(serialDesc, 7, v1.a, self.icon);
        }
        if (output.I(serialDesc, 8) || self.iconSize != null) {
            output.z(serialDesc, 8, g0.a, self.iconSize);
        }
        if (output.I(serialDesc, 9) || self.iconCornerRadius != null) {
            output.z(serialDesc, 9, g0.a, self.iconCornerRadius);
        }
        if (!output.I(serialDesc, 10) && self.iconSpacing == null) {
            return;
        }
        output.z(serialDesc, 10, g0.a, self.iconSpacing);
    }

    /* renamed from: component1, reason: from getter */
    public final int getType() {
        return this.type;
    }

    /* renamed from: component10, reason: from getter */
    public final Float getIconCornerRadius() {
        return this.iconCornerRadius;
    }

    /* renamed from: component11, reason: from getter */
    public final Float getIconSpacing() {
        return this.iconSpacing;
    }

    /* renamed from: component2, reason: from getter */
    public final int getLocation() {
        return this.location;
    }

    /* renamed from: component3, reason: from getter */
    public final int getLength() {
        return this.length;
    }

    /* renamed from: component4, reason: from getter */
    public final ChatInputNodeStyle getStyle() {
        return this.style;
    }

    /* renamed from: component5, reason: from getter */
    public final boolean getDeleteNodeOnBackspace() {
        return this.deleteNodeOnBackspace;
    }

    /* renamed from: component6, reason: from getter */
    public final TapAction getTapAction() {
        return this.tapAction;
    }

    /* renamed from: component7, reason: from getter */
    public final boolean getEditDisabled() {
        return this.editDisabled;
    }

    /* renamed from: component8, reason: from getter */
    public final String getIcon() {
        return this.icon;
    }

    /* renamed from: component9, reason: from getter */
    public final Float getIconSize() {
        return this.iconSize;
    }

    @NotNull
    public final ChatInputNode copy(int type, int location, int length, ChatInputNodeStyle style, boolean deleteNodeOnBackspace, TapAction tapAction, boolean editDisabled, String icon, Float iconSize, Float iconCornerRadius, Float iconSpacing) {
        return new ChatInputNode(type, location, length, style, deleteNodeOnBackspace, tapAction, editDisabled, icon, iconSize, iconCornerRadius, iconSpacing);
    }

    public boolean equals(Object other) {
        if (this == other) {
            return true;
        }
        if (!(other instanceof ChatInputNode)) {
            return false;
        }
        ChatInputNode chatInputNode = (ChatInputNode) other;
        return this.type == chatInputNode.type && this.location == chatInputNode.location && this.length == chatInputNode.length && Intrinsics.areEqual(this.style, chatInputNode.style) && this.deleteNodeOnBackspace == chatInputNode.deleteNodeOnBackspace && Intrinsics.areEqual(this.tapAction, chatInputNode.tapAction) && this.editDisabled == chatInputNode.editDisabled && Intrinsics.areEqual(this.icon, chatInputNode.icon) && Intrinsics.areEqual((Object) this.iconSize, (Object) chatInputNode.iconSize) && Intrinsics.areEqual((Object) this.iconCornerRadius, (Object) chatInputNode.iconCornerRadius) && Intrinsics.areEqual((Object) this.iconSpacing, (Object) chatInputNode.iconSpacing);
    }

    public final boolean getDeleteNodeOnBackspace() {
        return this.deleteNodeOnBackspace;
    }

    public final boolean getEditDisabled() {
        return this.editDisabled;
    }

    public final String getIcon() {
        return this.icon;
    }

    public final Float getIconCornerRadius() {
        return this.iconCornerRadius;
    }

    public final Float getIconSize() {
        return this.iconSize;
    }

    public final Float getIconSpacing() {
        return this.iconSpacing;
    }

    public final int getLength() {
        return this.length;
    }

    public final int getLocation() {
        return this.location;
    }

    public final ChatInputNodeStyle getStyle() {
        return this.style;
    }

    public final TapAction getTapAction() {
        return this.tapAction;
    }

    public final int getType() {
        return this.type;
    }

    public int hashCode() {
        int u5 = a.u(this.length, a.u(this.location, Integer.hashCode(this.type) * 31, 31), 31);
        ChatInputNodeStyle chatInputNodeStyle = this.style;
        int d6 = d.d((u5 + (chatInputNodeStyle == null ? 0 : chatInputNodeStyle.hashCode())) * 31, 31, this.deleteNodeOnBackspace);
        TapAction tapAction = this.tapAction;
        int d7 = d.d((d6 + (tapAction == null ? 0 : tapAction.hashCode())) * 31, 31, this.editDisabled);
        String str = this.icon;
        int hashCode = (d7 + (str == null ? 0 : str.hashCode())) * 31;
        Float f2 = this.iconSize;
        int hashCode2 = (hashCode + (f2 == null ? 0 : f2.hashCode())) * 31;
        Float f10 = this.iconCornerRadius;
        int hashCode3 = (hashCode2 + (f10 == null ? 0 : f10.hashCode())) * 31;
        Float f11 = this.iconSpacing;
        return hashCode3 + (f11 != null ? f11.hashCode() : 0);
    }

    @NotNull
    public String toString() {
        int i5 = this.type;
        int i6 = this.location;
        int i10 = this.length;
        ChatInputNodeStyle chatInputNodeStyle = this.style;
        boolean z5 = this.deleteNodeOnBackspace;
        TapAction tapAction = this.tapAction;
        boolean z6 = this.editDisabled;
        String str = this.icon;
        Float f2 = this.iconSize;
        Float f10 = this.iconCornerRadius;
        Float f11 = this.iconSpacing;
        StringBuilder q5 = a3.e.q(i5, "ChatInputNode(type=", i6, ", location=", ", length=");
        q5.append(i10);
        q5.append(", style=");
        q5.append(chatInputNodeStyle);
        q5.append(", deleteNodeOnBackspace=");
        q5.append(z5);
        q5.append(", tapAction=");
        q5.append(tapAction);
        q5.append(", editDisabled=");
        q5.append(z6);
        q5.append(", icon=");
        q5.append(str);
        q5.append(", iconSize=");
        q5.append(f2);
        q5.append(", iconCornerRadius=");
        q5.append(f10);
        q5.append(", iconSpacing=");
        q5.append(f11);
        q5.append(")");
        return q5.toString();
    }

    public ChatInputNode(int i5, int i6, int i10, ChatInputNodeStyle chatInputNodeStyle, boolean z5, TapAction tapAction, boolean z6, String str, Float f2, Float f10, Float f11) {
        this.type = i5;
        this.location = i6;
        this.length = i10;
        this.style = chatInputNodeStyle;
        this.deleteNodeOnBackspace = z5;
        this.tapAction = tapAction;
        this.editDisabled = z6;
        this.icon = str;
        this.iconSize = f2;
        this.iconCornerRadius = f10;
        this.iconSpacing = f11;
    }

    public /* synthetic */ ChatInputNode(int i5, int i6, int i10, ChatInputNodeStyle chatInputNodeStyle, boolean z5, TapAction tapAction, boolean z6, String str, Float f2, Float f10, Float f11, int i11, DefaultConstructorMarker defaultConstructorMarker) {
        this(i5, i6, i10, (i11 & 8) != 0 ? null : chatInputNodeStyle, (i11 & 16) != 0 ? false : z5, (i11 & 32) != 0 ? null : tapAction, (i11 & 64) != 0 ? false : z6, (i11 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT) != 0 ? null : str, (i11 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER) != 0 ? null : f2, (i11 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING) != 0 ? null : f10, (i11 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_OVERFLOW_INSET) != 0 ? null : f11);
    }
}
