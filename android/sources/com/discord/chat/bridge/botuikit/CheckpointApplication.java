package com.discord.chat.bridge.botuikit;

import bs.h1;
import bs.v1;
import com.discord.jank_stats.JankRecordStore;
import com.discord.primitives.ApplicationId;
import com.discord.primitives.ApplicationId$$serializer;
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
@Metadata(d1 = {"\u0000D\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0004\n\u0002\u0010\b\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u000f\n\u0002\u0010\u000b\n\u0002\b\u0004\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0004\b\u0087\b\u0018\u0000 )2\u00020\u0001:\u0002()B#\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\n\b\u0002\u0010\u0004\u001a\u0004\u0018\u00010\u0005\u0012\u0006\u0010\u0006\u001a\u00020\u0005¢\u0006\u0004\b\u0007\u0010\bB9\b\u0010\u0012\u0006\u0010\t\u001a\u00020\n\u0012\b\u0010\u0002\u001a\u0004\u0018\u00010\u0003\u0012\b\u0010\u0004\u001a\u0004\u0018\u00010\u0005\u0012\b\u0010\u0006\u001a\u0004\u0018\u00010\u0005\u0012\b\u0010\u000b\u001a\u0004\u0018\u00010\f¢\u0006\u0004\b\u0007\u0010\rJ\u0010\u0010\u0014\u001a\u00020\u0003HÆ\u0003¢\u0006\u0004\b\u0015\u0010\u000fJ\u000b\u0010\u0016\u001a\u0004\u0018\u00010\u0005HÆ\u0003J\t\u0010\u0017\u001a\u00020\u0005HÆ\u0003J0\u0010\u0018\u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u00032\n\b\u0002\u0010\u0004\u001a\u0004\u0018\u00010\u00052\b\b\u0002\u0010\u0006\u001a\u00020\u0005HÆ\u0001¢\u0006\u0004\b\u0019\u0010\u001aJ\u0013\u0010\u001b\u001a\u00020\u001c2\b\u0010\u001d\u001a\u0004\u0018\u00010\u0001HÖ\u0003J\t\u0010\u001e\u001a\u00020\nHÖ\u0001J\t\u0010\u001f\u001a\u00020\u0005HÖ\u0001J%\u0010 \u001a\u00020!2\u0006\u0010\"\u001a\u00020\u00002\u0006\u0010#\u001a\u00020$2\u0006\u0010%\u001a\u00020&H\u0001¢\u0006\u0002\b'R\u0013\u0010\u0002\u001a\u00020\u0003¢\u0006\n\n\u0002\u0010\u0010\u001a\u0004\b\u000e\u0010\u000fR\u0013\u0010\u0004\u001a\u0004\u0018\u00010\u0005¢\u0006\b\n\u0000\u001a\u0004\b\u0011\u0010\u0012R\u0011\u0010\u0006\u001a\u00020\u0005¢\u0006\b\n\u0000\u001a\u0004\b\u0013\u0010\u0012¨\u0006*"}, d2 = {"Lcom/discord/chat/bridge/botuikit/CheckpointApplication;", "", "applicationId", "Lcom/discord/primitives/ApplicationId;", "applicationImageId", "", "applicationName", "<init>", "(JLjava/lang/String;Ljava/lang/String;Lkotlin/jvm/internal/DefaultConstructorMarker;)V", "seen0", "", "serializationConstructorMarker", "Lkotlinx/serialization/internal/SerializationConstructorMarker;", "(ILcom/discord/primitives/ApplicationId;Ljava/lang/String;Ljava/lang/String;Lkotlinx/serialization/internal/SerializationConstructorMarker;Lkotlin/jvm/internal/DefaultConstructorMarker;)V", "getApplicationId-VavddsQ", "()J", "J", "getApplicationImageId", "()Ljava/lang/String;", "getApplicationName", "component1", "component1-VavddsQ", "component2", "component3", "copy", "copy-0O3FufA", "(JLjava/lang/String;Ljava/lang/String;)Lcom/discord/chat/bridge/botuikit/CheckpointApplication;", "equals", "", JankRecordStore.SCREEN_OTHER, "hashCode", "toString", "write$Self", "", "self", "output", "Lkotlinx/serialization/encoding/CompositeEncoder;", "serialDesc", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "write$Self$chat_release", "$serializer", "Companion", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final /* data */ class CheckpointApplication {

    /* renamed from: Companion, reason: from kotlin metadata */
    @NotNull
    public static final Companion INSTANCE = new Companion(null);
    private final long applicationId;
    private final String applicationImageId;

    @NotNull
    private final String applicationName;

    @Metadata(d1 = {"\u0000\u0016\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\f\u0010\u0004\u001a\b\u0012\u0004\u0012\u00020\u00060\u0005¨\u0006\u0007"}, d2 = {"Lcom/discord/chat/bridge/botuikit/CheckpointApplication$Companion;", "", "<init>", "()V", "serializer", "Lkotlinx/serialization/KSerializer;", "Lcom/discord/chat/bridge/botuikit/CheckpointApplication;", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final class Companion {
        private Companion() {
        }

        @NotNull
        public final KSerializer serializer() {
            return CheckpointApplication$$serializer.INSTANCE;
        }

        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }
    }

    public /* synthetic */ CheckpointApplication(int i5, ApplicationId applicationId, String str, String str2, SerializationConstructorMarker serializationConstructorMarker, DefaultConstructorMarker defaultConstructorMarker) {
        this(i5, applicationId, str, str2, serializationConstructorMarker);
    }

    /* renamed from: copy-0O3FufA$default, reason: not valid java name */
    public static /* synthetic */ CheckpointApplication m295copy0O3FufA$default(CheckpointApplication checkpointApplication, long j, String str, String str2, int i5, Object obj) {
        if ((i5 & 1) != 0) {
            j = checkpointApplication.applicationId;
        }
        if ((i5 & 2) != 0) {
            str = checkpointApplication.applicationImageId;
        }
        if ((i5 & 4) != 0) {
            str2 = checkpointApplication.applicationName;
        }
        return checkpointApplication.m297copy0O3FufA(j, str, str2);
    }

    public static final /* synthetic */ void write$Self$chat_release(CheckpointApplication self, CompositeEncoder output, SerialDescriptor serialDesc) {
        output.g(serialDesc, 0, ApplicationId$$serializer.INSTANCE, ApplicationId.m1150boximpl(self.applicationId));
        if (output.I(serialDesc, 1) || self.applicationImageId != null) {
            output.z(serialDesc, 1, v1.a, self.applicationImageId);
        }
        output.y(serialDesc, 2, self.applicationName);
    }

    /* renamed from: component1-VavddsQ, reason: not valid java name and from getter */
    public final long getApplicationId() {
        return this.applicationId;
    }

    /* renamed from: component2, reason: from getter */
    public final String getApplicationImageId() {
        return this.applicationImageId;
    }

    @NotNull
    /* renamed from: component3, reason: from getter */
    public final String getApplicationName() {
        return this.applicationName;
    }

    @NotNull
    /* renamed from: copy-0O3FufA, reason: not valid java name */
    public final CheckpointApplication m297copy0O3FufA(long applicationId, String applicationImageId, @NotNull String applicationName) {
        Intrinsics.checkNotNullParameter(applicationName, "applicationName");
        return new CheckpointApplication(applicationId, applicationImageId, applicationName, null);
    }

    public boolean equals(Object other) {
        if (this == other) {
            return true;
        }
        if (!(other instanceof CheckpointApplication)) {
            return false;
        }
        CheckpointApplication checkpointApplication = (CheckpointApplication) other;
        return ApplicationId.m1154equalsimpl0(this.applicationId, checkpointApplication.applicationId) && Intrinsics.areEqual(this.applicationImageId, checkpointApplication.applicationImageId) && Intrinsics.areEqual(this.applicationName, checkpointApplication.applicationName);
    }

    /* renamed from: getApplicationId-VavddsQ, reason: not valid java name */
    public final long m298getApplicationIdVavddsQ() {
        return this.applicationId;
    }

    public final String getApplicationImageId() {
        return this.applicationImageId;
    }

    @NotNull
    public final String getApplicationName() {
        return this.applicationName;
    }

    public int hashCode() {
        int m1155hashCodeimpl = ApplicationId.m1155hashCodeimpl(this.applicationId) * 31;
        String str = this.applicationImageId;
        return this.applicationName.hashCode() + ((m1155hashCodeimpl + (str == null ? 0 : str.hashCode())) * 31);
    }

    @NotNull
    public String toString() {
        String m1157toStringimpl = ApplicationId.m1157toStringimpl(this.applicationId);
        String str = this.applicationImageId;
        return a.j(a3.e.t("CheckpointApplication(applicationId=", m1157toStringimpl, ", applicationImageId=", str, ", applicationName="), this.applicationName, ")");
    }

    public /* synthetic */ CheckpointApplication(long j, String str, String str2, DefaultConstructorMarker defaultConstructorMarker) {
        this(j, str, str2);
    }

    private /* synthetic */ CheckpointApplication(int i5, ApplicationId applicationId, String str, String str2, SerializationConstructorMarker serializationConstructorMarker) {
        if (5 != (i5 & 5)) {
            h1.l(i5, 5, CheckpointApplication$$serializer.INSTANCE.getDescriptor());
            throw null;
        }
        this.applicationId = applicationId.m1159unboximpl();
        if ((i5 & 2) == 0) {
            this.applicationImageId = null;
        } else {
            this.applicationImageId = str;
        }
        this.applicationName = str2;
    }

    private CheckpointApplication(long j, String str, String applicationName) {
        Intrinsics.checkNotNullParameter(applicationName, "applicationName");
        this.applicationId = j;
        this.applicationImageId = str;
        this.applicationName = applicationName;
    }

    public /* synthetic */ CheckpointApplication(long j, String str, String str2, int i5, DefaultConstructorMarker defaultConstructorMarker) {
        this(j, (i5 & 2) != 0 ? null : str, str2, null);
    }
}
