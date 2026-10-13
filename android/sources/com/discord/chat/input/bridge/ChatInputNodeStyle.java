package com.discord.chat.input.bridge;

import bs.h1;
import bs.o0;
import com.discord.jank_stats.JankRecordStore;
import com.discord.span.utilities.common.BackgroundStyle;
import com.discord.span.utilities.common.BackgroundStyle$$serializer;
import com.facebook.react.uimanager.ViewProps;
import fo.l;
import fo.m;
import kotlin.Lazy;
import kotlin.Metadata;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import kotlinx.serialization.KSerializer;
import kotlinx.serialization.descriptors.SerialDescriptor;
import kotlinx.serialization.encoding.CompositeEncoder;
import kotlinx.serialization.internal.SerializationConstructorMarker;
import org.jetbrains.annotations.NotNull;
import u7.a;
import xr.e;

@e
@Metadata(d1 = {"\u0000L\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\b\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0002\b\u0011\n\u0002\u0010\u000b\n\u0002\b\u0003\n\u0002\u0010\u000e\n\u0000\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0004\b\u0087\b\u0018\u0000 -2\u00020\u0001:\u0002,-B1\u0012\n\b\u0002\u0010\u0002\u001a\u0004\u0018\u00010\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0003\u0012\b\u0010\u0005\u001a\u0004\u0018\u00010\u0006\u0012\n\b\u0002\u0010\u0007\u001a\u0004\u0018\u00010\b¢\u0006\u0004\b\t\u0010\nBA\b\u0010\u0012\u0006\u0010\u000b\u001a\u00020\u0003\u0012\b\u0010\u0002\u001a\u0004\u0018\u00010\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0003\u0012\b\u0010\u0005\u001a\u0004\u0018\u00010\u0006\u0012\b\u0010\u0007\u001a\u0004\u0018\u00010\b\u0012\b\u0010\f\u001a\u0004\u0018\u00010\r¢\u0006\u0004\b\t\u0010\u000eJ\u0010\u0010\u0018\u001a\u0004\u0018\u00010\u0003HÆ\u0003¢\u0006\u0002\u0010\u0010J\t\u0010\u0019\u001a\u00020\u0003HÆ\u0003J\u000b\u0010\u001a\u001a\u0004\u0018\u00010\u0006HÆ\u0003J\u000b\u0010\u001b\u001a\u0004\u0018\u00010\bHÆ\u0003J<\u0010\u001c\u001a\u00020\u00002\n\b\u0002\u0010\u0002\u001a\u0004\u0018\u00010\u00032\b\b\u0002\u0010\u0004\u001a\u00020\u00032\n\b\u0002\u0010\u0005\u001a\u0004\u0018\u00010\u00062\n\b\u0002\u0010\u0007\u001a\u0004\u0018\u00010\bHÆ\u0001¢\u0006\u0002\u0010\u001dJ\u0013\u0010\u001e\u001a\u00020\u001f2\b\u0010 \u001a\u0004\u0018\u00010\u0001HÖ\u0003J\t\u0010!\u001a\u00020\u0003HÖ\u0001J\t\u0010\"\u001a\u00020#HÖ\u0001J%\u0010$\u001a\u00020%2\u0006\u0010&\u001a\u00020\u00002\u0006\u0010'\u001a\u00020(2\u0006\u0010)\u001a\u00020*H\u0001¢\u0006\u0002\b+R\u0015\u0010\u0002\u001a\u0004\u0018\u00010\u0003¢\u0006\n\n\u0002\u0010\u0011\u001a\u0004\b\u000f\u0010\u0010R\u0011\u0010\u0004\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0012\u0010\u0013R\u0013\u0010\u0005\u001a\u0004\u0018\u00010\u0006¢\u0006\b\n\u0000\u001a\u0004\b\u0014\u0010\u0015R\u0013\u0010\u0007\u001a\u0004\u0018\u00010\b¢\u0006\b\n\u0000\u001a\u0004\b\u0016\u0010\u0017¨\u0006."}, d2 = {"Lcom/discord/chat/input/bridge/ChatInputNodeStyle;", "", ViewProps.FONT_SIZE, "", ViewProps.COLOR, "backgroundStyle", "Lcom/discord/span/utilities/common/BackgroundStyle;", ViewProps.FONT_WEIGHT, "Lcom/discord/chat/input/bridge/ChatInputNodeFontWeight;", "<init>", "(Ljava/lang/Integer;ILcom/discord/span/utilities/common/BackgroundStyle;Lcom/discord/chat/input/bridge/ChatInputNodeFontWeight;)V", "seen0", "serializationConstructorMarker", "Lkotlinx/serialization/internal/SerializationConstructorMarker;", "(ILjava/lang/Integer;ILcom/discord/span/utilities/common/BackgroundStyle;Lcom/discord/chat/input/bridge/ChatInputNodeFontWeight;Lkotlinx/serialization/internal/SerializationConstructorMarker;)V", "getFontSize", "()Ljava/lang/Integer;", "Ljava/lang/Integer;", "getColor", "()I", "getBackgroundStyle", "()Lcom/discord/span/utilities/common/BackgroundStyle;", "getFontWeight", "()Lcom/discord/chat/input/bridge/ChatInputNodeFontWeight;", "component1", "component2", "component3", "component4", "copy", "(Ljava/lang/Integer;ILcom/discord/span/utilities/common/BackgroundStyle;Lcom/discord/chat/input/bridge/ChatInputNodeFontWeight;)Lcom/discord/chat/input/bridge/ChatInputNodeStyle;", "equals", "", JankRecordStore.SCREEN_OTHER, "hashCode", "toString", "", "write$Self", "", "self", "output", "Lkotlinx/serialization/encoding/CompositeEncoder;", "serialDesc", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "write$Self$chat_input_release", "$serializer", "Companion", "chat_input_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final /* data */ class ChatInputNodeStyle {
    private final BackgroundStyle backgroundStyle;
    private final int color;
    private final Integer fontSize;
    private final ChatInputNodeFontWeight fontWeight;

    /* renamed from: Companion, reason: from kotlin metadata */
    @NotNull
    public static final Companion INSTANCE = new Companion(null);

    @NotNull
    private static final Lazy[] $childSerializers = {null, null, null, l.b(m.f8827e, new a(2))};

    @Metadata(d1 = {"\u0000\u0016\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\f\u0010\u0004\u001a\b\u0012\u0004\u0012\u00020\u00060\u0005¨\u0006\u0007"}, d2 = {"Lcom/discord/chat/input/bridge/ChatInputNodeStyle$Companion;", "", "<init>", "()V", "serializer", "Lkotlinx/serialization/KSerializer;", "Lcom/discord/chat/input/bridge/ChatInputNodeStyle;", "chat_input_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final class Companion {
        private Companion() {
        }

        @NotNull
        public final KSerializer serializer() {
            return ChatInputNodeStyle$$serializer.INSTANCE;
        }

        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }
    }

    public /* synthetic */ ChatInputNodeStyle(int i5, Integer num, int i6, BackgroundStyle backgroundStyle, ChatInputNodeFontWeight chatInputNodeFontWeight, SerializationConstructorMarker serializationConstructorMarker) {
        if (6 != (i5 & 6)) {
            h1.l(i5, 6, ChatInputNodeStyle$$serializer.INSTANCE.getDescriptor());
            throw null;
        }
        if ((i5 & 1) == 0) {
            this.fontSize = null;
        } else {
            this.fontSize = num;
        }
        this.color = i6;
        this.backgroundStyle = backgroundStyle;
        if ((i5 & 8) == 0) {
            this.fontWeight = null;
        } else {
            this.fontWeight = chatInputNodeFontWeight;
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final /* synthetic */ KSerializer _childSerializers$_anonymous_() {
        return ChatInputNodeFontWeight.INSTANCE.serializer();
    }

    public static /* synthetic */ ChatInputNodeStyle copy$default(ChatInputNodeStyle chatInputNodeStyle, Integer num, int i5, BackgroundStyle backgroundStyle, ChatInputNodeFontWeight chatInputNodeFontWeight, int i6, Object obj) {
        if ((i6 & 1) != 0) {
            num = chatInputNodeStyle.fontSize;
        }
        if ((i6 & 2) != 0) {
            i5 = chatInputNodeStyle.color;
        }
        if ((i6 & 4) != 0) {
            backgroundStyle = chatInputNodeStyle.backgroundStyle;
        }
        if ((i6 & 8) != 0) {
            chatInputNodeFontWeight = chatInputNodeStyle.fontWeight;
        }
        return chatInputNodeStyle.copy(num, i5, backgroundStyle, chatInputNodeFontWeight);
    }

    public static final /* synthetic */ void write$Self$chat_input_release(ChatInputNodeStyle self, CompositeEncoder output, SerialDescriptor serialDesc) {
        Lazy[] lazyArr = $childSerializers;
        if (output.I(serialDesc, 0) || self.fontSize != null) {
            output.z(serialDesc, 0, o0.a, self.fontSize);
        }
        output.n(1, self.color, serialDesc);
        output.z(serialDesc, 2, BackgroundStyle$$serializer.INSTANCE, self.backgroundStyle);
        if (!output.I(serialDesc, 3) && self.fontWeight == null) {
            return;
        }
        output.z(serialDesc, 3, (KSerializer) lazyArr[3].getValue(), self.fontWeight);
    }

    /* renamed from: component1, reason: from getter */
    public final Integer getFontSize() {
        return this.fontSize;
    }

    /* renamed from: component2, reason: from getter */
    public final int getColor() {
        return this.color;
    }

    /* renamed from: component3, reason: from getter */
    public final BackgroundStyle getBackgroundStyle() {
        return this.backgroundStyle;
    }

    /* renamed from: component4, reason: from getter */
    public final ChatInputNodeFontWeight getFontWeight() {
        return this.fontWeight;
    }

    @NotNull
    public final ChatInputNodeStyle copy(Integer fontSize, int color, BackgroundStyle backgroundStyle, ChatInputNodeFontWeight fontWeight) {
        return new ChatInputNodeStyle(fontSize, color, backgroundStyle, fontWeight);
    }

    public boolean equals(Object other) {
        if (this == other) {
            return true;
        }
        if (!(other instanceof ChatInputNodeStyle)) {
            return false;
        }
        ChatInputNodeStyle chatInputNodeStyle = (ChatInputNodeStyle) other;
        return Intrinsics.areEqual(this.fontSize, chatInputNodeStyle.fontSize) && this.color == chatInputNodeStyle.color && Intrinsics.areEqual(this.backgroundStyle, chatInputNodeStyle.backgroundStyle) && this.fontWeight == chatInputNodeStyle.fontWeight;
    }

    public final BackgroundStyle getBackgroundStyle() {
        return this.backgroundStyle;
    }

    public final int getColor() {
        return this.color;
    }

    public final Integer getFontSize() {
        return this.fontSize;
    }

    public final ChatInputNodeFontWeight getFontWeight() {
        return this.fontWeight;
    }

    public int hashCode() {
        Integer num = this.fontSize;
        int u5 = com.discord.chat.bridge.botuikit.a.u(this.color, (num == null ? 0 : num.hashCode()) * 31, 31);
        BackgroundStyle backgroundStyle = this.backgroundStyle;
        int hashCode = (u5 + (backgroundStyle == null ? 0 : backgroundStyle.hashCode())) * 31;
        ChatInputNodeFontWeight chatInputNodeFontWeight = this.fontWeight;
        return hashCode + (chatInputNodeFontWeight != null ? chatInputNodeFontWeight.hashCode() : 0);
    }

    @NotNull
    public String toString() {
        return "ChatInputNodeStyle(fontSize=" + this.fontSize + ", color=" + this.color + ", backgroundStyle=" + this.backgroundStyle + ", fontWeight=" + this.fontWeight + ")";
    }

    public ChatInputNodeStyle(Integer num, int i5, BackgroundStyle backgroundStyle, ChatInputNodeFontWeight chatInputNodeFontWeight) {
        this.fontSize = num;
        this.color = i5;
        this.backgroundStyle = backgroundStyle;
        this.fontWeight = chatInputNodeFontWeight;
    }

    public /* synthetic */ ChatInputNodeStyle(Integer num, int i5, BackgroundStyle backgroundStyle, ChatInputNodeFontWeight chatInputNodeFontWeight, int i6, DefaultConstructorMarker defaultConstructorMarker) {
        this((i6 & 1) != 0 ? null : num, i5, backgroundStyle, (i6 & 8) != 0 ? null : chatInputNodeFontWeight);
    }
}
