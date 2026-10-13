package com.discord.tti_manager;

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
@Metadata(d1 = {"\u0000D\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\u000e\n\u0000\n\u0002\u0010\t\n\u0002\b\u0003\n\u0002\u0010\b\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u000b\n\u0002\u0010\u000b\n\u0002\b\u0004\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0004\b\u0083\b\u0018\u0000 $2\u00020\u0001:\u0002#$B\u001b\u0012\b\b\u0002\u0010\u0002\u001a\u00020\u0003\u0012\b\b\u0002\u0010\u0004\u001a\u00020\u0005¢\u0006\u0004\b\u0006\u0010\u0007B-\b\u0010\u0012\u0006\u0010\b\u001a\u00020\t\u0012\b\u0010\u0002\u001a\u0004\u0018\u00010\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005\u0012\b\u0010\n\u001a\u0004\u0018\u00010\u000b¢\u0006\u0004\b\u0006\u0010\fJ\t\u0010\u0013\u001a\u00020\u0003HÆ\u0003J\t\u0010\u0014\u001a\u00020\u0005HÆ\u0003J\u001d\u0010\u0015\u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u00032\b\b\u0002\u0010\u0004\u001a\u00020\u0005HÆ\u0001J\u0013\u0010\u0016\u001a\u00020\u00172\b\u0010\u0018\u001a\u0004\u0018\u00010\u0001HÖ\u0003J\t\u0010\u0019\u001a\u00020\tHÖ\u0001J\t\u0010\u001a\u001a\u00020\u0003HÖ\u0001J%\u0010\u001b\u001a\u00020\u001c2\u0006\u0010\u001d\u001a\u00020\u00002\u0006\u0010\u001e\u001a\u00020\u001f2\u0006\u0010 \u001a\u00020!H\u0001¢\u0006\u0002\b\"R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\r\u0010\u000eR\u001c\u0010\u0004\u001a\u00020\u00058\u0006X\u0087\u0004¢\u0006\u000e\n\u0000\u0012\u0004\b\u000f\u0010\u0010\u001a\u0004\b\u0011\u0010\u0012¨\u0006%"}, d2 = {"Lcom/discord/tti_manager/TTIActionData;", "", "type", "", "yieldDurationMs", "", "<init>", "(Ljava/lang/String;J)V", "seen0", "", "serializationConstructorMarker", "Lkotlinx/serialization/internal/SerializationConstructorMarker;", "(ILjava/lang/String;JLkotlinx/serialization/internal/SerializationConstructorMarker;)V", "getType", "()Ljava/lang/String;", "getYieldDurationMs$annotations", "()V", "getYieldDurationMs", "()J", "component1", "component2", "copy", "equals", "", JankRecordStore.SCREEN_OTHER, "hashCode", "toString", "write$Self", "", "self", "output", "Lkotlinx/serialization/encoding/CompositeEncoder;", "serialDesc", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "write$Self$tti_manager_release", "$serializer", "Companion", "tti_manager_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes3.dex */
final /* data */ class TTIActionData {

    /* renamed from: Companion, reason: from kotlin metadata */
    @NotNull
    public static final Companion INSTANCE = new Companion(null);

    @NotNull
    private final String type;
    private final long yieldDurationMs;

    @Metadata(d1 = {"\u0000\u0016\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\f\u0010\u0004\u001a\b\u0012\u0004\u0012\u00020\u00060\u0005¨\u0006\u0007"}, d2 = {"Lcom/discord/tti_manager/TTIActionData$Companion;", "", "<init>", "()V", "serializer", "Lkotlinx/serialization/KSerializer;", "Lcom/discord/tti_manager/TTIActionData;", "tti_manager_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final class Companion {
        private Companion() {
        }

        @NotNull
        public final KSerializer serializer() {
            return TTIActionData$$serializer.INSTANCE;
        }

        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }
    }

    public TTIActionData() {
        this((String) null, 0L, 3, (DefaultConstructorMarker) null);
    }

    public static /* synthetic */ TTIActionData copy$default(TTIActionData tTIActionData, String str, long j, int i5, Object obj) {
        if ((i5 & 1) != 0) {
            str = tTIActionData.type;
        }
        if ((i5 & 2) != 0) {
            j = tTIActionData.yieldDurationMs;
        }
        return tTIActionData.copy(str, j);
    }

    public static /* synthetic */ void getYieldDurationMs$annotations() {
    }

    public static final /* synthetic */ void write$Self$tti_manager_release(TTIActionData self, CompositeEncoder output, SerialDescriptor serialDesc) {
        if (output.I(serialDesc, 0) || !Intrinsics.areEqual(self.type, "")) {
            output.y(serialDesc, 0, self.type);
        }
        if (!output.I(serialDesc, 1) && self.yieldDurationMs == 0) {
            return;
        }
        output.P(serialDesc, 1, self.yieldDurationMs);
    }

    @NotNull
    /* renamed from: component1, reason: from getter */
    public final String getType() {
        return this.type;
    }

    /* renamed from: component2, reason: from getter */
    public final long getYieldDurationMs() {
        return this.yieldDurationMs;
    }

    @NotNull
    public final TTIActionData copy(@NotNull String type, long yieldDurationMs) {
        Intrinsics.checkNotNullParameter(type, "type");
        return new TTIActionData(type, yieldDurationMs);
    }

    public boolean equals(Object other) {
        if (this == other) {
            return true;
        }
        if (!(other instanceof TTIActionData)) {
            return false;
        }
        TTIActionData tTIActionData = (TTIActionData) other;
        return Intrinsics.areEqual(this.type, tTIActionData.type) && this.yieldDurationMs == tTIActionData.yieldDurationMs;
    }

    @NotNull
    public final String getType() {
        return this.type;
    }

    public final long getYieldDurationMs() {
        return this.yieldDurationMs;
    }

    public int hashCode() {
        return Long.hashCode(this.yieldDurationMs) + (this.type.hashCode() * 31);
    }

    @NotNull
    public String toString() {
        return "TTIActionData(type=" + this.type + ", yieldDurationMs=" + this.yieldDurationMs + ")";
    }

    public /* synthetic */ TTIActionData(int i5, String str, long j, SerializationConstructorMarker serializationConstructorMarker) {
        this.type = (i5 & 1) == 0 ? "" : str;
        if ((i5 & 2) == 0) {
            this.yieldDurationMs = 0L;
        } else {
            this.yieldDurationMs = j;
        }
    }

    public TTIActionData(@NotNull String type, long j) {
        Intrinsics.checkNotNullParameter(type, "type");
        this.type = type;
        this.yieldDurationMs = j;
    }

    public /* synthetic */ TTIActionData(String str, long j, int i5, DefaultConstructorMarker defaultConstructorMarker) {
        this((i5 & 1) != 0 ? "" : str, (i5 & 2) != 0 ? 0L : j);
    }
}
