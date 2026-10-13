package com.discord.chat.bridge.botuikit;

import bs.g;
import bs.h1;
import bs.v1;
import com.discord.jank_stats.JankRecordStore;
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
@Metadata(d1 = {"\u0000N\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u000b\n\u0002\b\u0003\n\u0002\u0010\b\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0013\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0004\b\u0087\b\u0018\u0000 /2\u00020\u0001:\u0002./B;\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0003\u0012\n\b\u0002\u0010\u0005\u001a\u0004\u0018\u00010\u0006\u0012\n\b\u0002\u0010\u0007\u001a\u0004\u0018\u00010\u0003\u0012\n\b\u0002\u0010\b\u001a\u0004\u0018\u00010\t¢\u0006\u0004\b\n\u0010\u000bBM\b\u0010\u0012\u0006\u0010\f\u001a\u00020\r\u0012\b\u0010\u0002\u001a\u0004\u0018\u00010\u0003\u0012\b\u0010\u0004\u001a\u0004\u0018\u00010\u0003\u0012\b\u0010\u0005\u001a\u0004\u0018\u00010\u0006\u0012\b\u0010\u0007\u001a\u0004\u0018\u00010\u0003\u0012\b\u0010\b\u001a\u0004\u0018\u00010\t\u0012\b\u0010\u000e\u001a\u0004\u0018\u00010\u000f¢\u0006\u0004\b\n\u0010\u0010J\t\u0010\u001a\u001a\u00020\u0003HÆ\u0003J\t\u0010\u001b\u001a\u00020\u0003HÆ\u0003J\u000b\u0010\u001c\u001a\u0004\u0018\u00010\u0006HÆ\u0003J\u000b\u0010\u001d\u001a\u0004\u0018\u00010\u0003HÆ\u0003J\u0010\u0010\u001e\u001a\u0004\u0018\u00010\tHÆ\u0003¢\u0006\u0002\u0010\u0018JF\u0010\u001f\u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u00032\b\b\u0002\u0010\u0004\u001a\u00020\u00032\n\b\u0002\u0010\u0005\u001a\u0004\u0018\u00010\u00062\n\b\u0002\u0010\u0007\u001a\u0004\u0018\u00010\u00032\n\b\u0002\u0010\b\u001a\u0004\u0018\u00010\tHÆ\u0001¢\u0006\u0002\u0010 J\u0013\u0010!\u001a\u00020\t2\b\u0010\"\u001a\u0004\u0018\u00010#HÖ\u0003J\t\u0010$\u001a\u00020\rHÖ\u0001J\t\u0010%\u001a\u00020\u0003HÖ\u0001J%\u0010&\u001a\u00020'2\u0006\u0010(\u001a\u00020\u00002\u0006\u0010)\u001a\u00020*2\u0006\u0010+\u001a\u00020,H\u0001¢\u0006\u0002\b-R\u0014\u0010\u0002\u001a\u00020\u0003X\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\b\u0011\u0010\u0012R\u0014\u0010\u0004\u001a\u00020\u0003X\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\b\u0013\u0010\u0012R\u0013\u0010\u0005\u001a\u0004\u0018\u00010\u0006¢\u0006\b\n\u0000\u001a\u0004\b\u0014\u0010\u0015R\u0013\u0010\u0007\u001a\u0004\u0018\u00010\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0016\u0010\u0012R\u0015\u0010\b\u001a\u0004\u0018\u00010\t¢\u0006\n\n\u0002\u0010\u0019\u001a\u0004\b\u0017\u0010\u0018¨\u00060"}, d2 = {"Lcom/discord/chat/bridge/botuikit/StringSelectItem;", "Lcom/discord/chat/bridge/botuikit/SelectItem;", "label", "", "value", "emoji", "Lcom/discord/chat/bridge/botuikit/ComponentEmoji;", "description", "default", "", "<init>", "(Ljava/lang/String;Ljava/lang/String;Lcom/discord/chat/bridge/botuikit/ComponentEmoji;Ljava/lang/String;Ljava/lang/Boolean;)V", "seen0", "", "serializationConstructorMarker", "Lkotlinx/serialization/internal/SerializationConstructorMarker;", "(ILjava/lang/String;Ljava/lang/String;Lcom/discord/chat/bridge/botuikit/ComponentEmoji;Ljava/lang/String;Ljava/lang/Boolean;Lkotlinx/serialization/internal/SerializationConstructorMarker;)V", "getLabel", "()Ljava/lang/String;", "getValue", "getEmoji", "()Lcom/discord/chat/bridge/botuikit/ComponentEmoji;", "getDescription", "getDefault", "()Ljava/lang/Boolean;", "Ljava/lang/Boolean;", "component1", "component2", "component3", "component4", "component5", "copy", "(Ljava/lang/String;Ljava/lang/String;Lcom/discord/chat/bridge/botuikit/ComponentEmoji;Ljava/lang/String;Ljava/lang/Boolean;)Lcom/discord/chat/bridge/botuikit/StringSelectItem;", "equals", JankRecordStore.SCREEN_OTHER, "", "hashCode", "toString", "write$Self", "", "self", "output", "Lkotlinx/serialization/encoding/CompositeEncoder;", "serialDesc", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "write$Self$chat_release", "$serializer", "Companion", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final /* data */ class StringSelectItem extends SelectItem {

    /* renamed from: Companion, reason: from kotlin metadata */
    @NotNull
    public static final Companion INSTANCE = new Companion(null);
    private final Boolean default;
    private final String description;
    private final ComponentEmoji emoji;

    @NotNull
    private final String label;

    @NotNull
    private final String value;

    @Metadata(d1 = {"\u0000\u0016\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\f\u0010\u0004\u001a\b\u0012\u0004\u0012\u00020\u00060\u0005¨\u0006\u0007"}, d2 = {"Lcom/discord/chat/bridge/botuikit/StringSelectItem$Companion;", "", "<init>", "()V", "serializer", "Lkotlinx/serialization/KSerializer;", "Lcom/discord/chat/bridge/botuikit/StringSelectItem;", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final class Companion {
        private Companion() {
        }

        @NotNull
        public final KSerializer serializer() {
            return StringSelectItem$$serializer.INSTANCE;
        }

        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public /* synthetic */ StringSelectItem(int i5, String str, String str2, ComponentEmoji componentEmoji, String str3, Boolean bool, SerializationConstructorMarker serializationConstructorMarker) {
        super(i5, serializationConstructorMarker);
        if (3 != (i5 & 3)) {
            h1.l(i5, 3, StringSelectItem$$serializer.INSTANCE.getDescriptor());
            throw null;
        }
        this.label = str;
        this.value = str2;
        if ((i5 & 4) == 0) {
            this.emoji = null;
        } else {
            this.emoji = componentEmoji;
        }
        if ((i5 & 8) == 0) {
            this.description = null;
        } else {
            this.description = str3;
        }
        if ((i5 & 16) == 0) {
            this.default = Boolean.FALSE;
        } else {
            this.default = bool;
        }
    }

    public static /* synthetic */ StringSelectItem copy$default(StringSelectItem stringSelectItem, String str, String str2, ComponentEmoji componentEmoji, String str3, Boolean bool, int i5, Object obj) {
        if ((i5 & 1) != 0) {
            str = stringSelectItem.label;
        }
        if ((i5 & 2) != 0) {
            str2 = stringSelectItem.value;
        }
        if ((i5 & 4) != 0) {
            componentEmoji = stringSelectItem.emoji;
        }
        if ((i5 & 8) != 0) {
            str3 = stringSelectItem.description;
        }
        if ((i5 & 16) != 0) {
            bool = stringSelectItem.default;
        }
        Boolean bool2 = bool;
        ComponentEmoji componentEmoji2 = componentEmoji;
        return stringSelectItem.copy(str, str2, componentEmoji2, str3, bool2);
    }

    public static final /* synthetic */ void write$Self$chat_release(StringSelectItem self, CompositeEncoder output, SerialDescriptor serialDesc) {
        SelectItem.write$Self(self, output, serialDesc);
        output.y(serialDesc, 0, self.getLabel());
        output.y(serialDesc, 1, self.getValue());
        if (output.I(serialDesc, 2) || self.emoji != null) {
            output.z(serialDesc, 2, ComponentEmoji$$serializer.INSTANCE, self.emoji);
        }
        if (output.I(serialDesc, 3) || self.description != null) {
            output.z(serialDesc, 3, v1.a, self.description);
        }
        if (!output.I(serialDesc, 4) && Intrinsics.areEqual(self.default, Boolean.FALSE)) {
            return;
        }
        output.z(serialDesc, 4, g.a, self.default);
    }

    @NotNull
    /* renamed from: component1, reason: from getter */
    public final String getLabel() {
        return this.label;
    }

    @NotNull
    /* renamed from: component2, reason: from getter */
    public final String getValue() {
        return this.value;
    }

    /* renamed from: component3, reason: from getter */
    public final ComponentEmoji getEmoji() {
        return this.emoji;
    }

    /* renamed from: component4, reason: from getter */
    public final String getDescription() {
        return this.description;
    }

    /* renamed from: component5, reason: from getter */
    public final Boolean getDefault() {
        return this.default;
    }

    @NotNull
    public final StringSelectItem copy(@NotNull String label, @NotNull String value, ComponentEmoji emoji, String description, Boolean r12) {
        Intrinsics.checkNotNullParameter(label, "label");
        Intrinsics.checkNotNullParameter(value, "value");
        return new StringSelectItem(label, value, emoji, description, r12);
    }

    public boolean equals(Object other) {
        if (this == other) {
            return true;
        }
        if (!(other instanceof StringSelectItem)) {
            return false;
        }
        StringSelectItem stringSelectItem = (StringSelectItem) other;
        return Intrinsics.areEqual(this.label, stringSelectItem.label) && Intrinsics.areEqual(this.value, stringSelectItem.value) && Intrinsics.areEqual(this.emoji, stringSelectItem.emoji) && Intrinsics.areEqual(this.description, stringSelectItem.description) && Intrinsics.areEqual(this.default, stringSelectItem.default);
    }

    public final Boolean getDefault() {
        return this.default;
    }

    public final String getDescription() {
        return this.description;
    }

    public final ComponentEmoji getEmoji() {
        return this.emoji;
    }

    @Override // com.discord.chat.bridge.botuikit.SelectItem
    @NotNull
    public String getLabel() {
        return this.label;
    }

    @Override // com.discord.chat.bridge.botuikit.SelectItem
    @NotNull
    public String getValue() {
        return this.value;
    }

    public int hashCode() {
        int d6 = a3.e.d(this.label.hashCode() * 31, 31, this.value);
        ComponentEmoji componentEmoji = this.emoji;
        int hashCode = (d6 + (componentEmoji == null ? 0 : componentEmoji.hashCode())) * 31;
        String str = this.description;
        int hashCode2 = (hashCode + (str == null ? 0 : str.hashCode())) * 31;
        Boolean bool = this.default;
        return hashCode2 + (bool != null ? bool.hashCode() : 0);
    }

    @NotNull
    public String toString() {
        String str = this.label;
        String str2 = this.value;
        ComponentEmoji componentEmoji = this.emoji;
        String str3 = this.description;
        Boolean bool = this.default;
        StringBuilder t5 = a3.e.t("StringSelectItem(label=", str, ", value=", str2, ", emoji=");
        t5.append(componentEmoji);
        t5.append(", description=");
        t5.append(str3);
        t5.append(", default=");
        t5.append(bool);
        t5.append(")");
        return t5.toString();
    }

    public /* synthetic */ StringSelectItem(String str, String str2, ComponentEmoji componentEmoji, String str3, Boolean bool, int i5, DefaultConstructorMarker defaultConstructorMarker) {
        this(str, str2, (i5 & 4) != 0 ? null : componentEmoji, (i5 & 8) != 0 ? null : str3, (i5 & 16) != 0 ? Boolean.FALSE : bool);
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public StringSelectItem(@NotNull String label, @NotNull String value, ComponentEmoji componentEmoji, String str, Boolean bool) {
        super(null);
        Intrinsics.checkNotNullParameter(label, "label");
        Intrinsics.checkNotNullParameter(value, "value");
        this.label = label;
        this.value = value;
        this.emoji = componentEmoji;
        this.description = str;
        this.default = bool;
    }
}
