package com.discord.chat.bridge.botuikit;

import bs.h1;
import com.discord.chat.bridge.botuikit.SeparatorSpacingSize;
import com.discord.jank_stats.JankRecordStore;
import com.facebook.react.devsupport.StackTraceHelper;
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
@Metadata(d1 = {"\u0000J\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\b\n\u0000\n\u0002\u0010\u000e\n\u0000\n\u0002\u0010\u000b\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0002\b\u0010\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0004\b\u0087\b\u0018\u0000 +2\u00020\u0001:\u0002*+B'\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005\u0012\u0006\u0010\u0006\u001a\u00020\u0007\u0012\u0006\u0010\b\u001a\u00020\t¢\u0006\u0004\b\n\u0010\u000bB?\b\u0010\u0012\u0006\u0010\f\u001a\u00020\u0003\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\b\u0010\u0004\u001a\u0004\u0018\u00010\u0005\u0012\u0006\u0010\u0006\u001a\u00020\u0007\u0012\b\u0010\b\u001a\u0004\u0018\u00010\t\u0012\b\u0010\r\u001a\u0004\u0018\u00010\u000e¢\u0006\u0004\b\n\u0010\u000fJ\t\u0010\u0018\u001a\u00020\u0003HÆ\u0003J\t\u0010\u0019\u001a\u00020\u0005HÆ\u0003J\t\u0010\u001a\u001a\u00020\u0007HÆ\u0003J\t\u0010\u001b\u001a\u00020\tHÆ\u0003J1\u0010\u001c\u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u00032\b\b\u0002\u0010\u0004\u001a\u00020\u00052\b\b\u0002\u0010\u0006\u001a\u00020\u00072\b\b\u0002\u0010\b\u001a\u00020\tHÆ\u0001J\u0013\u0010\u001d\u001a\u00020\u00072\b\u0010\u001e\u001a\u0004\u0018\u00010\u001fHÖ\u0003J\t\u0010 \u001a\u00020\u0003HÖ\u0001J\t\u0010!\u001a\u00020\u0005HÖ\u0001J%\u0010\"\u001a\u00020#2\u0006\u0010$\u001a\u00020\u00002\u0006\u0010%\u001a\u00020&2\u0006\u0010'\u001a\u00020(H\u0001¢\u0006\u0002\b)R\u0014\u0010\u0002\u001a\u00020\u0003X\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\b\u0010\u0010\u0011R\u0014\u0010\u0004\u001a\u00020\u0005X\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\b\u0012\u0010\u0013R\u0011\u0010\u0006\u001a\u00020\u0007¢\u0006\b\n\u0000\u001a\u0004\b\u0014\u0010\u0015R\u0011\u0010\b\u001a\u00020\t¢\u0006\b\n\u0000\u001a\u0004\b\u0016\u0010\u0017¨\u0006,"}, d2 = {"Lcom/discord/chat/bridge/botuikit/SeparatorDisplayComponent;", "Lcom/discord/chat/bridge/botuikit/Component;", "type", "", StackTraceHelper.ID_KEY, "", "divider", "", "spacing", "Lcom/discord/chat/bridge/botuikit/SeparatorSpacingSize;", "<init>", "(ILjava/lang/String;ZLcom/discord/chat/bridge/botuikit/SeparatorSpacingSize;)V", "seen0", "serializationConstructorMarker", "Lkotlinx/serialization/internal/SerializationConstructorMarker;", "(IILjava/lang/String;ZLcom/discord/chat/bridge/botuikit/SeparatorSpacingSize;Lkotlinx/serialization/internal/SerializationConstructorMarker;)V", "getType", "()I", "getId", "()Ljava/lang/String;", "getDivider", "()Z", "getSpacing", "()Lcom/discord/chat/bridge/botuikit/SeparatorSpacingSize;", "component1", "component2", "component3", "component4", "copy", "equals", JankRecordStore.SCREEN_OTHER, "", "hashCode", "toString", "write$Self", "", "self", "output", "Lkotlinx/serialization/encoding/CompositeEncoder;", "serialDesc", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "write$Self$chat_release", "$serializer", "Companion", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final /* data */ class SeparatorDisplayComponent extends Component {

    /* renamed from: Companion, reason: from kotlin metadata */
    @NotNull
    public static final Companion INSTANCE = new Companion(null);
    private final boolean divider;

    @NotNull
    private final String id;

    @NotNull
    private final SeparatorSpacingSize spacing;
    private final int type;

    @Metadata(d1 = {"\u0000\u0016\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\f\u0010\u0004\u001a\b\u0012\u0004\u0012\u00020\u00060\u0005¨\u0006\u0007"}, d2 = {"Lcom/discord/chat/bridge/botuikit/SeparatorDisplayComponent$Companion;", "", "<init>", "()V", "serializer", "Lkotlinx/serialization/KSerializer;", "Lcom/discord/chat/bridge/botuikit/SeparatorDisplayComponent;", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final class Companion {
        private Companion() {
        }

        @NotNull
        public final KSerializer serializer() {
            return SeparatorDisplayComponent$$serializer.INSTANCE;
        }

        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public /* synthetic */ SeparatorDisplayComponent(int i5, int i6, String str, boolean z5, SeparatorSpacingSize separatorSpacingSize, SerializationConstructorMarker serializationConstructorMarker) {
        super(null);
        if (15 != (i5 & 15)) {
            h1.l(i5, 15, SeparatorDisplayComponent$$serializer.INSTANCE.getDescriptor());
            throw null;
        }
        this.type = i6;
        this.id = str;
        this.divider = z5;
        this.spacing = separatorSpacingSize;
    }

    public static /* synthetic */ SeparatorDisplayComponent copy$default(SeparatorDisplayComponent separatorDisplayComponent, int i5, String str, boolean z5, SeparatorSpacingSize separatorSpacingSize, int i6, Object obj) {
        if ((i6 & 1) != 0) {
            i5 = separatorDisplayComponent.type;
        }
        if ((i6 & 2) != 0) {
            str = separatorDisplayComponent.id;
        }
        if ((i6 & 4) != 0) {
            z5 = separatorDisplayComponent.divider;
        }
        if ((i6 & 8) != 0) {
            separatorSpacingSize = separatorDisplayComponent.spacing;
        }
        return separatorDisplayComponent.copy(i5, str, z5, separatorSpacingSize);
    }

    public static final /* synthetic */ void write$Self$chat_release(SeparatorDisplayComponent self, CompositeEncoder output, SerialDescriptor serialDesc) {
        output.n(0, self.getType(), serialDesc);
        output.y(serialDesc, 1, self.getId());
        output.x(serialDesc, 2, self.divider);
        output.g(serialDesc, 3, SeparatorSpacingSize.Serializer.INSTANCE, self.spacing);
    }

    /* renamed from: component1, reason: from getter */
    public final int getType() {
        return this.type;
    }

    @NotNull
    /* renamed from: component2, reason: from getter */
    public final String getId() {
        return this.id;
    }

    /* renamed from: component3, reason: from getter */
    public final boolean getDivider() {
        return this.divider;
    }

    @NotNull
    /* renamed from: component4, reason: from getter */
    public final SeparatorSpacingSize getSpacing() {
        return this.spacing;
    }

    @NotNull
    public final SeparatorDisplayComponent copy(int type, @NotNull String id2, boolean divider, @NotNull SeparatorSpacingSize spacing) {
        Intrinsics.checkNotNullParameter(id2, "id");
        Intrinsics.checkNotNullParameter(spacing, "spacing");
        return new SeparatorDisplayComponent(type, id2, divider, spacing);
    }

    public boolean equals(Object other) {
        if (this == other) {
            return true;
        }
        if (!(other instanceof SeparatorDisplayComponent)) {
            return false;
        }
        SeparatorDisplayComponent separatorDisplayComponent = (SeparatorDisplayComponent) other;
        return this.type == separatorDisplayComponent.type && Intrinsics.areEqual(this.id, separatorDisplayComponent.id) && this.divider == separatorDisplayComponent.divider && this.spacing == separatorDisplayComponent.spacing;
    }

    public final boolean getDivider() {
        return this.divider;
    }

    @Override // com.discord.chat.bridge.botuikit.Component
    @NotNull
    public String getId() {
        return this.id;
    }

    @NotNull
    public final SeparatorSpacingSize getSpacing() {
        return this.spacing;
    }

    @Override // com.discord.chat.bridge.botuikit.Component
    public int getType() {
        return this.type;
    }

    public int hashCode() {
        return this.spacing.hashCode() + d.d(a3.e.d(Integer.hashCode(this.type) * 31, 31, this.id), 31, this.divider);
    }

    @NotNull
    public String toString() {
        int i5 = this.type;
        String str = this.id;
        boolean z5 = this.divider;
        SeparatorSpacingSize separatorSpacingSize = this.spacing;
        StringBuilder n6 = a.n("SeparatorDisplayComponent(type=", ", id=", str, i5, ", divider=");
        n6.append(z5);
        n6.append(", spacing=");
        n6.append(separatorSpacingSize);
        n6.append(")");
        return n6.toString();
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public SeparatorDisplayComponent(int i5, @NotNull String id2, boolean z5, @NotNull SeparatorSpacingSize spacing) {
        super(null);
        Intrinsics.checkNotNullParameter(id2, "id");
        Intrinsics.checkNotNullParameter(spacing, "spacing");
        this.type = i5;
        this.id = id2;
        this.divider = z5;
        this.spacing = spacing;
    }
}
