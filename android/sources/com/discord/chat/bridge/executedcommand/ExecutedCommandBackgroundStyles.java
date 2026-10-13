package com.discord.chat.bridge.executedcommand;

import bs.g;
import bs.o0;
import com.discord.jank_stats.JankRecordStore;
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
@Metadata(d1 = {"\u0000>\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\b\n\u0002\b\u0002\n\u0002\u0010\u000b\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0002\b\u0011\n\u0002\u0010\u000e\n\u0000\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0004\b\u0087\b\u0018\u0000 '2\u00020\u0001:\u0002&'B+\u0012\n\b\u0002\u0010\u0002\u001a\u0004\u0018\u00010\u0003\u0012\n\b\u0002\u0010\u0004\u001a\u0004\u0018\u00010\u0003\u0012\n\b\u0002\u0010\u0005\u001a\u0004\u0018\u00010\u0006¢\u0006\u0004\b\u0007\u0010\bB9\b\u0010\u0012\u0006\u0010\t\u001a\u00020\u0003\u0012\b\u0010\u0002\u001a\u0004\u0018\u00010\u0003\u0012\b\u0010\u0004\u001a\u0004\u0018\u00010\u0003\u0012\b\u0010\u0005\u001a\u0004\u0018\u00010\u0006\u0012\b\u0010\n\u001a\u0004\u0018\u00010\u000b¢\u0006\u0004\b\u0007\u0010\fJ\u0010\u0010\u0014\u001a\u0004\u0018\u00010\u0003HÆ\u0003¢\u0006\u0002\u0010\u000eJ\u0010\u0010\u0015\u001a\u0004\u0018\u00010\u0003HÆ\u0003¢\u0006\u0002\u0010\u000eJ\u0010\u0010\u0016\u001a\u0004\u0018\u00010\u0006HÆ\u0003¢\u0006\u0002\u0010\u0012J2\u0010\u0017\u001a\u00020\u00002\n\b\u0002\u0010\u0002\u001a\u0004\u0018\u00010\u00032\n\b\u0002\u0010\u0004\u001a\u0004\u0018\u00010\u00032\n\b\u0002\u0010\u0005\u001a\u0004\u0018\u00010\u0006HÆ\u0001¢\u0006\u0002\u0010\u0018J\u0013\u0010\u0019\u001a\u00020\u00062\b\u0010\u001a\u001a\u0004\u0018\u00010\u0001HÖ\u0003J\t\u0010\u001b\u001a\u00020\u0003HÖ\u0001J\t\u0010\u001c\u001a\u00020\u001dHÖ\u0001J%\u0010\u001e\u001a\u00020\u001f2\u0006\u0010 \u001a\u00020\u00002\u0006\u0010!\u001a\u00020\"2\u0006\u0010#\u001a\u00020$H\u0001¢\u0006\u0002\b%R\u0015\u0010\u0002\u001a\u0004\u0018\u00010\u0003¢\u0006\n\n\u0002\u0010\u000f\u001a\u0004\b\r\u0010\u000eR\u0015\u0010\u0004\u001a\u0004\u0018\u00010\u0003¢\u0006\n\n\u0002\u0010\u000f\u001a\u0004\b\u0010\u0010\u000eR\u0015\u0010\u0005\u001a\u0004\u0018\u00010\u0006¢\u0006\n\n\u0002\u0010\u0013\u001a\u0004\b\u0011\u0010\u0012¨\u0006("}, d2 = {"Lcom/discord/chat/bridge/executedcommand/ExecutedCommandBackgroundStyles;", "", ViewProps.COLOR, "", "borderRadius", "spaceAround", "", "<init>", "(Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/Boolean;)V", "seen0", "serializationConstructorMarker", "Lkotlinx/serialization/internal/SerializationConstructorMarker;", "(ILjava/lang/Integer;Ljava/lang/Integer;Ljava/lang/Boolean;Lkotlinx/serialization/internal/SerializationConstructorMarker;)V", "getColor", "()Ljava/lang/Integer;", "Ljava/lang/Integer;", "getBorderRadius", "getSpaceAround", "()Ljava/lang/Boolean;", "Ljava/lang/Boolean;", "component1", "component2", "component3", "copy", "(Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/Boolean;)Lcom/discord/chat/bridge/executedcommand/ExecutedCommandBackgroundStyles;", "equals", JankRecordStore.SCREEN_OTHER, "hashCode", "toString", "", "write$Self", "", "self", "output", "Lkotlinx/serialization/encoding/CompositeEncoder;", "serialDesc", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "write$Self$chat_release", "$serializer", "Companion", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final /* data */ class ExecutedCommandBackgroundStyles {

    /* renamed from: Companion, reason: from kotlin metadata */
    @NotNull
    public static final Companion INSTANCE = new Companion(null);
    private final Integer borderRadius;
    private final Integer color;
    private final Boolean spaceAround;

    @Metadata(d1 = {"\u0000\u0016\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\f\u0010\u0004\u001a\b\u0012\u0004\u0012\u00020\u00060\u0005¨\u0006\u0007"}, d2 = {"Lcom/discord/chat/bridge/executedcommand/ExecutedCommandBackgroundStyles$Companion;", "", "<init>", "()V", "serializer", "Lkotlinx/serialization/KSerializer;", "Lcom/discord/chat/bridge/executedcommand/ExecutedCommandBackgroundStyles;", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final class Companion {
        private Companion() {
        }

        @NotNull
        public final KSerializer serializer() {
            return ExecutedCommandBackgroundStyles$$serializer.INSTANCE;
        }

        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }
    }

    public ExecutedCommandBackgroundStyles() {
        this((Integer) null, (Integer) null, (Boolean) null, 7, (DefaultConstructorMarker) null);
    }

    public static /* synthetic */ ExecutedCommandBackgroundStyles copy$default(ExecutedCommandBackgroundStyles executedCommandBackgroundStyles, Integer num, Integer num2, Boolean bool, int i5, Object obj) {
        if ((i5 & 1) != 0) {
            num = executedCommandBackgroundStyles.color;
        }
        if ((i5 & 2) != 0) {
            num2 = executedCommandBackgroundStyles.borderRadius;
        }
        if ((i5 & 4) != 0) {
            bool = executedCommandBackgroundStyles.spaceAround;
        }
        return executedCommandBackgroundStyles.copy(num, num2, bool);
    }

    public static final /* synthetic */ void write$Self$chat_release(ExecutedCommandBackgroundStyles self, CompositeEncoder output, SerialDescriptor serialDesc) {
        if (output.I(serialDesc, 0) || self.color != null) {
            output.z(serialDesc, 0, o0.a, self.color);
        }
        if (output.I(serialDesc, 1) || self.borderRadius != null) {
            output.z(serialDesc, 1, o0.a, self.borderRadius);
        }
        if (!output.I(serialDesc, 2) && Intrinsics.areEqual(self.spaceAround, Boolean.FALSE)) {
            return;
        }
        output.z(serialDesc, 2, g.a, self.spaceAround);
    }

    /* renamed from: component1, reason: from getter */
    public final Integer getColor() {
        return this.color;
    }

    /* renamed from: component2, reason: from getter */
    public final Integer getBorderRadius() {
        return this.borderRadius;
    }

    /* renamed from: component3, reason: from getter */
    public final Boolean getSpaceAround() {
        return this.spaceAround;
    }

    @NotNull
    public final ExecutedCommandBackgroundStyles copy(Integer color, Integer borderRadius, Boolean spaceAround) {
        return new ExecutedCommandBackgroundStyles(color, borderRadius, spaceAround);
    }

    public boolean equals(Object other) {
        if (this == other) {
            return true;
        }
        if (!(other instanceof ExecutedCommandBackgroundStyles)) {
            return false;
        }
        ExecutedCommandBackgroundStyles executedCommandBackgroundStyles = (ExecutedCommandBackgroundStyles) other;
        return Intrinsics.areEqual(this.color, executedCommandBackgroundStyles.color) && Intrinsics.areEqual(this.borderRadius, executedCommandBackgroundStyles.borderRadius) && Intrinsics.areEqual(this.spaceAround, executedCommandBackgroundStyles.spaceAround);
    }

    public final Integer getBorderRadius() {
        return this.borderRadius;
    }

    public final Integer getColor() {
        return this.color;
    }

    public final Boolean getSpaceAround() {
        return this.spaceAround;
    }

    public int hashCode() {
        Integer num = this.color;
        int hashCode = (num == null ? 0 : num.hashCode()) * 31;
        Integer num2 = this.borderRadius;
        int hashCode2 = (hashCode + (num2 == null ? 0 : num2.hashCode())) * 31;
        Boolean bool = this.spaceAround;
        return hashCode2 + (bool != null ? bool.hashCode() : 0);
    }

    @NotNull
    public String toString() {
        return "ExecutedCommandBackgroundStyles(color=" + this.color + ", borderRadius=" + this.borderRadius + ", spaceAround=" + this.spaceAround + ")";
    }

    public /* synthetic */ ExecutedCommandBackgroundStyles(int i5, Integer num, Integer num2, Boolean bool, SerializationConstructorMarker serializationConstructorMarker) {
        if ((i5 & 1) == 0) {
            this.color = null;
        } else {
            this.color = num;
        }
        if ((i5 & 2) == 0) {
            this.borderRadius = null;
        } else {
            this.borderRadius = num2;
        }
        if ((i5 & 4) == 0) {
            this.spaceAround = Boolean.FALSE;
        } else {
            this.spaceAround = bool;
        }
    }

    public ExecutedCommandBackgroundStyles(Integer num, Integer num2, Boolean bool) {
        this.color = num;
        this.borderRadius = num2;
        this.spaceAround = bool;
    }

    public /* synthetic */ ExecutedCommandBackgroundStyles(Integer num, Integer num2, Boolean bool, int i5, DefaultConstructorMarker defaultConstructorMarker) {
        this((i5 & 1) != 0 ? null : num, (i5 & 2) != 0 ? null : num2, (i5 & 4) != 0 ? Boolean.FALSE : bool);
    }
}
