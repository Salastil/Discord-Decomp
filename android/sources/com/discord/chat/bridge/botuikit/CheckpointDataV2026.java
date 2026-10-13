package com.discord.chat.bridge.botuikit;

import bs.d;
import bs.v1;
import com.discord.jank_stats.JankRecordStore;
import fo.l;
import fo.m;
import java.util.List;
import kotlin.Lazy;
import kotlin.Metadata;
import kotlin.collections.m0;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import kotlinx.serialization.KSerializer;
import kotlinx.serialization.descriptors.SerialDescriptor;
import kotlinx.serialization.encoding.CompositeEncoder;
import kotlinx.serialization.internal.SerializationConstructorMarker;
import org.jetbrains.annotations.NotNull;
import xr.e;

@e
@Metadata(d1 = {"\u0000H\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\b\n\u0000\n\u0002\u0010 \n\u0002\u0010\u000e\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0002\b\t\n\u0002\u0010\u000b\n\u0000\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0004\b\u0087\b\u0018\u0000 #2\u00020\u0001:\u0002\"#B!\u0012\b\b\u0002\u0010\u0002\u001a\u00020\u0003\u0012\u000e\b\u0002\u0010\u0004\u001a\b\u0012\u0004\u0012\u00020\u00060\u0005¢\u0006\u0004\b\u0007\u0010\bB3\b\u0010\u0012\u0006\u0010\t\u001a\u00020\u0003\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u000e\u0010\u0004\u001a\n\u0012\u0004\u0012\u00020\u0006\u0018\u00010\u0005\u0012\b\u0010\n\u001a\u0004\u0018\u00010\u000b¢\u0006\u0004\b\u0007\u0010\fJ\t\u0010\u0011\u001a\u00020\u0003HÆ\u0003J\u000f\u0010\u0012\u001a\b\u0012\u0004\u0012\u00020\u00060\u0005HÆ\u0003J#\u0010\u0013\u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u00032\u000e\b\u0002\u0010\u0004\u001a\b\u0012\u0004\u0012\u00020\u00060\u0005HÆ\u0001J\u0013\u0010\u0014\u001a\u00020\u00152\b\u0010\u0016\u001a\u0004\u0018\u00010\u0017HÖ\u0003J\t\u0010\u0018\u001a\u00020\u0003HÖ\u0001J\t\u0010\u0019\u001a\u00020\u0006HÖ\u0001J%\u0010\u001a\u001a\u00020\u001b2\u0006\u0010\u001c\u001a\u00020\u00002\u0006\u0010\u001d\u001a\u00020\u001e2\u0006\u0010\u001f\u001a\u00020 H\u0001¢\u0006\u0002\b!R\u0014\u0010\u0002\u001a\u00020\u0003X\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\b\r\u0010\u000eR\u0017\u0010\u0004\u001a\b\u0012\u0004\u0012\u00020\u00060\u0005¢\u0006\b\n\u0000\u001a\u0004\b\u000f\u0010\u0010¨\u0006$"}, d2 = {"Lcom/discord/chat/bridge/botuikit/CheckpointDataV2026;", "Lcom/discord/chat/bridge/botuikit/CheckpointData;", "version", "", "characterLayerUrls", "", "", "<init>", "(ILjava/util/List;)V", "seen0", "serializationConstructorMarker", "Lkotlinx/serialization/internal/SerializationConstructorMarker;", "(IILjava/util/List;Lkotlinx/serialization/internal/SerializationConstructorMarker;)V", "getVersion", "()I", "getCharacterLayerUrls", "()Ljava/util/List;", "component1", "component2", "copy", "equals", "", JankRecordStore.SCREEN_OTHER, "", "hashCode", "toString", "write$Self", "", "self", "output", "Lkotlinx/serialization/encoding/CompositeEncoder;", "serialDesc", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "write$Self$chat_release", "$serializer", "Companion", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final /* data */ class CheckpointDataV2026 implements CheckpointData {

    @NotNull
    private final List<String> characterLayerUrls;
    private final int version;

    /* renamed from: Companion, reason: from kotlin metadata */
    @NotNull
    public static final Companion INSTANCE = new Companion(null);

    @NotNull
    private static final Lazy[] $childSerializers = {null, l.b(m.f8827e, new a7.a(17))};

    @Metadata(d1 = {"\u0000\u0016\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\f\u0010\u0004\u001a\b\u0012\u0004\u0012\u00020\u00060\u0005¨\u0006\u0007"}, d2 = {"Lcom/discord/chat/bridge/botuikit/CheckpointDataV2026$Companion;", "", "<init>", "()V", "serializer", "Lkotlinx/serialization/KSerializer;", "Lcom/discord/chat/bridge/botuikit/CheckpointDataV2026;", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final class Companion {
        private Companion() {
        }

        @NotNull
        public final KSerializer serializer() {
            return CheckpointDataV2026$$serializer.INSTANCE;
        }

        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }
    }

    public CheckpointDataV2026() {
        this(0, (List) null, 3, (DefaultConstructorMarker) null);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final /* synthetic */ KSerializer _childSerializers$_anonymous_() {
        return new d(v1.a, 0);
    }

    /* JADX WARN: Multi-variable type inference failed */
    public static /* synthetic */ CheckpointDataV2026 copy$default(CheckpointDataV2026 checkpointDataV2026, int i5, List list, int i6, Object obj) {
        if ((i6 & 1) != 0) {
            i5 = checkpointDataV2026.version;
        }
        if ((i6 & 2) != 0) {
            list = checkpointDataV2026.characterLayerUrls;
        }
        return checkpointDataV2026.copy(i5, list);
    }

    public static final void write$Self$chat_release(CheckpointDataV2026 self, CompositeEncoder output, SerialDescriptor serialDesc) {
        Lazy[] lazyArr = $childSerializers;
        if (output.I(serialDesc, 0) || self.getVersion() != CheckpointVersion.V2026.getValue()) {
            output.n(0, self.getVersion(), serialDesc);
        }
        if (!output.I(serialDesc, 1) && Intrinsics.areEqual(self.characterLayerUrls, m0.f13512d)) {
            return;
        }
        output.g(serialDesc, 1, (KSerializer) lazyArr[1].getValue(), self.characterLayerUrls);
    }

    /* renamed from: component1, reason: from getter */
    public final int getVersion() {
        return this.version;
    }

    @NotNull
    public final List<String> component2() {
        return this.characterLayerUrls;
    }

    @NotNull
    public final CheckpointDataV2026 copy(int version, @NotNull List<String> characterLayerUrls) {
        Intrinsics.checkNotNullParameter(characterLayerUrls, "characterLayerUrls");
        return new CheckpointDataV2026(version, characterLayerUrls);
    }

    public boolean equals(Object other) {
        if (this == other) {
            return true;
        }
        if (!(other instanceof CheckpointDataV2026)) {
            return false;
        }
        CheckpointDataV2026 checkpointDataV2026 = (CheckpointDataV2026) other;
        return this.version == checkpointDataV2026.version && Intrinsics.areEqual(this.characterLayerUrls, checkpointDataV2026.characterLayerUrls);
    }

    @NotNull
    public final List<String> getCharacterLayerUrls() {
        return this.characterLayerUrls;
    }

    @Override // com.discord.chat.bridge.botuikit.CheckpointData
    public int getVersion() {
        return this.version;
    }

    public int hashCode() {
        return this.characterLayerUrls.hashCode() + (Integer.hashCode(this.version) * 31);
    }

    @NotNull
    public String toString() {
        return "CheckpointDataV2026(version=" + this.version + ", characterLayerUrls=" + this.characterLayerUrls + ")";
    }

    public CheckpointDataV2026(int i5, int i6, List list, SerializationConstructorMarker serializationConstructorMarker) {
        this.version = (i5 & 1) == 0 ? CheckpointVersion.V2026.getValue() : i6;
        if ((i5 & 2) == 0) {
            this.characterLayerUrls = m0.f13512d;
        } else {
            this.characterLayerUrls = list;
        }
    }

    public CheckpointDataV2026(int i5, @NotNull List<String> characterLayerUrls) {
        Intrinsics.checkNotNullParameter(characterLayerUrls, "characterLayerUrls");
        this.version = i5;
        this.characterLayerUrls = characterLayerUrls;
    }

    public CheckpointDataV2026(int i5, List list, int i6, DefaultConstructorMarker defaultConstructorMarker) {
        this((i6 & 1) != 0 ? CheckpointVersion.V2026.getValue() : i5, (i6 & 2) != 0 ? m0.f13512d : list);
    }
}
