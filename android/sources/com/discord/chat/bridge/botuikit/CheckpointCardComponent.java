package com.discord.chat.bridge.botuikit;

import bs.h1;
import com.discord.jank_stats.JankRecordStore;
import com.facebook.react.devsupport.StackTraceHelper;
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
@Metadata(d1 = {"\u0000N\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\b\n\u0000\n\u0002\u0010\u000e\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0002\b\u000e\n\u0002\u0010\u000b\n\u0000\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0004\b\u0087\b\u0018\u0000 *2\u00020\u00012\u00020\u0002:\u0002)*B\u001f\u0012\u0006\u0010\u0003\u001a\u00020\u0004\u0012\u0006\u0010\u0005\u001a\u00020\u0006\u0012\u0006\u0010\u0007\u001a\u00020\b¢\u0006\u0004\b\t\u0010\nB7\b\u0010\u0012\u0006\u0010\u000b\u001a\u00020\u0004\u0012\u0006\u0010\u0003\u001a\u00020\u0004\u0012\b\u0010\u0005\u001a\u0004\u0018\u00010\u0006\u0012\b\u0010\u0007\u001a\u0004\u0018\u00010\b\u0012\b\u0010\f\u001a\u0004\u0018\u00010\r¢\u0006\u0004\b\t\u0010\u000eJ\t\u0010\u0017\u001a\u00020\u0004HÆ\u0003J\t\u0010\u0018\u001a\u00020\u0006HÆ\u0003J\t\u0010\u0019\u001a\u00020\bHÆ\u0003J'\u0010\u001a\u001a\u00020\u00002\b\b\u0002\u0010\u0003\u001a\u00020\u00042\b\b\u0002\u0010\u0005\u001a\u00020\u00062\b\b\u0002\u0010\u0007\u001a\u00020\bHÆ\u0001J\u0013\u0010\u001b\u001a\u00020\u001c2\b\u0010\u001d\u001a\u0004\u0018\u00010\u001eHÖ\u0003J\t\u0010\u001f\u001a\u00020\u0004HÖ\u0001J\t\u0010 \u001a\u00020\u0006HÖ\u0001J%\u0010!\u001a\u00020\"2\u0006\u0010#\u001a\u00020\u00002\u0006\u0010$\u001a\u00020%2\u0006\u0010&\u001a\u00020'H\u0001¢\u0006\u0002\b(R\u0014\u0010\u0003\u001a\u00020\u0004X\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\b\u000f\u0010\u0010R\u0014\u0010\u0005\u001a\u00020\u0006X\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\b\u0011\u0010\u0012R\u0011\u0010\u0007\u001a\u00020\b¢\u0006\b\n\u0000\u001a\u0004\b\u0013\u0010\u0014R\u0014\u0010\u0015\u001a\u00020\u00068VX\u0096\u0004¢\u0006\u0006\u001a\u0004\b\u0016\u0010\u0012¨\u0006+"}, d2 = {"Lcom/discord/chat/bridge/botuikit/CheckpointCardComponent;", "Lcom/discord/chat/bridge/botuikit/Component;", "Lcom/discord/chat/bridge/botuikit/VersionedComponent;", "type", "", StackTraceHelper.ID_KEY, "", "checkpointData", "Lcom/discord/chat/bridge/botuikit/CheckpointData;", "<init>", "(ILjava/lang/String;Lcom/discord/chat/bridge/botuikit/CheckpointData;)V", "seen0", "serializationConstructorMarker", "Lkotlinx/serialization/internal/SerializationConstructorMarker;", "(IILjava/lang/String;Lcom/discord/chat/bridge/botuikit/CheckpointData;Lkotlinx/serialization/internal/SerializationConstructorMarker;)V", "getType", "()I", "getId", "()Ljava/lang/String;", "getCheckpointData", "()Lcom/discord/chat/bridge/botuikit/CheckpointData;", "componentVersionKey", "getComponentVersionKey", "component1", "component2", "component3", "copy", "equals", "", JankRecordStore.SCREEN_OTHER, "", "hashCode", "toString", "write$Self", "", "self", "output", "Lkotlinx/serialization/encoding/CompositeEncoder;", "serialDesc", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "write$Self$chat_release", "$serializer", "Companion", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final /* data */ class CheckpointCardComponent extends Component implements VersionedComponent {

    /* renamed from: Companion, reason: from kotlin metadata */
    @NotNull
    public static final Companion INSTANCE = new Companion(null);

    @NotNull
    private final CheckpointData checkpointData;

    @NotNull
    private final String id;
    private final int type;

    @Metadata(d1 = {"\u0000\u0016\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\f\u0010\u0004\u001a\b\u0012\u0004\u0012\u00020\u00060\u0005¨\u0006\u0007"}, d2 = {"Lcom/discord/chat/bridge/botuikit/CheckpointCardComponent$Companion;", "", "<init>", "()V", "serializer", "Lkotlinx/serialization/KSerializer;", "Lcom/discord/chat/bridge/botuikit/CheckpointCardComponent;", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final class Companion {
        private Companion() {
        }

        @NotNull
        public final KSerializer serializer() {
            return CheckpointCardComponent$$serializer.INSTANCE;
        }

        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public /* synthetic */ CheckpointCardComponent(int i5, int i6, String str, CheckpointData checkpointData, SerializationConstructorMarker serializationConstructorMarker) {
        super(null);
        if (7 != (i5 & 7)) {
            h1.l(i5, 7, CheckpointCardComponent$$serializer.INSTANCE.getDescriptor());
            throw null;
        }
        this.type = i6;
        this.id = str;
        this.checkpointData = checkpointData;
    }

    public static /* synthetic */ CheckpointCardComponent copy$default(CheckpointCardComponent checkpointCardComponent, int i5, String str, CheckpointData checkpointData, int i6, Object obj) {
        if ((i6 & 1) != 0) {
            i5 = checkpointCardComponent.type;
        }
        if ((i6 & 2) != 0) {
            str = checkpointCardComponent.id;
        }
        if ((i6 & 4) != 0) {
            checkpointData = checkpointCardComponent.checkpointData;
        }
        return checkpointCardComponent.copy(i5, str, checkpointData);
    }

    public static final /* synthetic */ void write$Self$chat_release(CheckpointCardComponent self, CompositeEncoder output, SerialDescriptor serialDesc) {
        output.n(0, self.getType(), serialDesc);
        output.y(serialDesc, 1, self.getId());
        output.g(serialDesc, 2, CheckpointDataSerializer.INSTANCE, self.checkpointData);
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

    @NotNull
    /* renamed from: component3, reason: from getter */
    public final CheckpointData getCheckpointData() {
        return this.checkpointData;
    }

    @NotNull
    public final CheckpointCardComponent copy(int type, @NotNull String id2, @NotNull CheckpointData checkpointData) {
        Intrinsics.checkNotNullParameter(id2, "id");
        Intrinsics.checkNotNullParameter(checkpointData, "checkpointData");
        return new CheckpointCardComponent(type, id2, checkpointData);
    }

    public boolean equals(Object other) {
        if (this == other) {
            return true;
        }
        if (!(other instanceof CheckpointCardComponent)) {
            return false;
        }
        CheckpointCardComponent checkpointCardComponent = (CheckpointCardComponent) other;
        return this.type == checkpointCardComponent.type && Intrinsics.areEqual(this.id, checkpointCardComponent.id) && Intrinsics.areEqual(this.checkpointData, checkpointCardComponent.checkpointData);
    }

    @NotNull
    public final CheckpointData getCheckpointData() {
        return this.checkpointData;
    }

    @Override // com.discord.chat.bridge.botuikit.VersionedComponent
    @NotNull
    public String getComponentVersionKey() {
        return String.valueOf(this.checkpointData.getVersion());
    }

    @Override // com.discord.chat.bridge.botuikit.Component
    @NotNull
    public String getId() {
        return this.id;
    }

    @Override // com.discord.chat.bridge.botuikit.Component
    public int getType() {
        return this.type;
    }

    public int hashCode() {
        return this.checkpointData.hashCode() + a3.e.d(Integer.hashCode(this.type) * 31, 31, this.id);
    }

    @NotNull
    public String toString() {
        int i5 = this.type;
        String str = this.id;
        CheckpointData checkpointData = this.checkpointData;
        StringBuilder n6 = a.n("CheckpointCardComponent(type=", ", id=", str, i5, ", checkpointData=");
        n6.append(checkpointData);
        n6.append(")");
        return n6.toString();
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public CheckpointCardComponent(int i5, @NotNull String id2, @NotNull CheckpointData checkpointData) {
        super(null);
        Intrinsics.checkNotNullParameter(id2, "id");
        Intrinsics.checkNotNullParameter(checkpointData, "checkpointData");
        this.type = i5;
        this.id = id2;
        this.checkpointData = checkpointData;
    }
}
