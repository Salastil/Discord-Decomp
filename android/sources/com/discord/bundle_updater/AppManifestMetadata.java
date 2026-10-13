package com.discord.bundle_updater;

import bs.h1;
import bs.v1;
import com.discord.jank_stats.JankRecordStore;
import com.discord.react.utilities.NativeMapExtensionsKt;
import com.facebook.react.bridge.WritableNativeMap;
import kotlin.Metadata;
import kotlin.Pair;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import kotlinx.serialization.KSerializer;
import kotlinx.serialization.descriptors.SerialDescriptor;
import kotlinx.serialization.encoding.CompositeEncoder;
import kotlinx.serialization.internal.SerializationConstructorMarker;
import org.jetbrains.annotations.NotNull;
import xr.e;

@e
@Metadata(d1 = {"\u0000F\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0003\n\u0002\u0010\u000b\n\u0002\b\u0003\n\u0002\u0010\b\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u000b\n\u0002\u0018\u0002\n\u0002\b\n\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0004\b\u0087\b\u0018\u0000 ,2\u00020\u0001:\u0002+,B-\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\n\b\u0002\u0010\u0004\u001a\u0004\u0018\u00010\u0003\u0012\u0006\u0010\u0005\u001a\u00020\u0003\u0012\b\b\u0002\u0010\u0006\u001a\u00020\u0007¢\u0006\u0004\b\b\u0010\tBA\b\u0010\u0012\u0006\u0010\n\u001a\u00020\u000b\u0012\b\u0010\u0002\u001a\u0004\u0018\u00010\u0003\u0012\b\u0010\u0004\u001a\u0004\u0018\u00010\u0003\u0012\b\u0010\u0005\u001a\u0004\u0018\u00010\u0003\u0012\u0006\u0010\u0006\u001a\u00020\u0007\u0012\b\u0010\f\u001a\u0004\u0018\u00010\r¢\u0006\u0004\b\b\u0010\u000eJ\u0006\u0010\u0018\u001a\u00020\u0019J\t\u0010\u001a\u001a\u00020\u0003HÆ\u0003J\u000b\u0010\u001b\u001a\u0004\u0018\u00010\u0003HÆ\u0003J\t\u0010\u001c\u001a\u00020\u0003HÆ\u0003J\t\u0010\u001d\u001a\u00020\u0007HÆ\u0003J3\u0010\u001e\u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u00032\n\b\u0002\u0010\u0004\u001a\u0004\u0018\u00010\u00032\b\b\u0002\u0010\u0005\u001a\u00020\u00032\b\b\u0002\u0010\u0006\u001a\u00020\u0007HÆ\u0001J\u0013\u0010\u001f\u001a\u00020\u00072\b\u0010 \u001a\u0004\u0018\u00010\u0001HÖ\u0003J\t\u0010!\u001a\u00020\u000bHÖ\u0001J\t\u0010\"\u001a\u00020\u0003HÖ\u0001J%\u0010#\u001a\u00020$2\u0006\u0010%\u001a\u00020\u00002\u0006\u0010&\u001a\u00020'2\u0006\u0010(\u001a\u00020)H\u0001¢\u0006\u0002\b*R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u000f\u0010\u0010R\u001e\u0010\u0004\u001a\u0004\u0018\u00010\u00038\u0006X\u0087\u0004¢\u0006\u000e\n\u0000\u0012\u0004\b\u0011\u0010\u0012\u001a\u0004\b\u0013\u0010\u0010R\u0011\u0010\u0005\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0014\u0010\u0010R\u001c\u0010\u0006\u001a\u00020\u00078\u0006X\u0087\u0004¢\u0006\u000e\n\u0000\u0012\u0004\b\u0015\u0010\u0012\u001a\u0004\b\u0016\u0010\u0017¨\u0006-"}, d2 = {"Lcom/discord/bundle_updater/AppManifestMetadata;", "", "build", "", "releaseName", "commit", "confirmUpdate", "", "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Z)V", "seen0", "", "serializationConstructorMarker", "Lkotlinx/serialization/internal/SerializationConstructorMarker;", "(ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;ZLkotlinx/serialization/internal/SerializationConstructorMarker;)V", "getBuild", "()Ljava/lang/String;", "getReleaseName$annotations", "()V", "getReleaseName", "getCommit", "getConfirmUpdate$annotations", "getConfirmUpdate", "()Z", "toNativeMap", "Lcom/facebook/react/bridge/WritableNativeMap;", "component1", "component2", "component3", "component4", "copy", "equals", JankRecordStore.SCREEN_OTHER, "hashCode", "toString", "write$Self", "", "self", "output", "Lkotlinx/serialization/encoding/CompositeEncoder;", "serialDesc", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "write$Self$bundle_updater_release", "$serializer", "Companion", "bundle_updater_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final /* data */ class AppManifestMetadata {

    /* renamed from: Companion, reason: from kotlin metadata */
    @NotNull
    public static final Companion INSTANCE = new Companion(null);

    @NotNull
    private final String build;

    @NotNull
    private final String commit;
    private final boolean confirmUpdate;
    private final String releaseName;

    @Metadata(d1 = {"\u0000\u0016\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\f\u0010\u0004\u001a\b\u0012\u0004\u0012\u00020\u00060\u0005¨\u0006\u0007"}, d2 = {"Lcom/discord/bundle_updater/AppManifestMetadata$Companion;", "", "<init>", "()V", "serializer", "Lkotlinx/serialization/KSerializer;", "Lcom/discord/bundle_updater/AppManifestMetadata;", "bundle_updater_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final class Companion {
        private Companion() {
        }

        @NotNull
        public final KSerializer serializer() {
            return AppManifestMetadata$$serializer.INSTANCE;
        }

        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }
    }

    public /* synthetic */ AppManifestMetadata(int i5, String str, String str2, String str3, boolean z5, SerializationConstructorMarker serializationConstructorMarker) {
        if (5 != (i5 & 5)) {
            h1.l(i5, 5, AppManifestMetadata$$serializer.INSTANCE.getDescriptor());
            throw null;
        }
        this.build = str;
        if ((i5 & 2) == 0) {
            this.releaseName = null;
        } else {
            this.releaseName = str2;
        }
        this.commit = str3;
        if ((i5 & 8) == 0) {
            this.confirmUpdate = false;
        } else {
            this.confirmUpdate = z5;
        }
    }

    public static /* synthetic */ AppManifestMetadata copy$default(AppManifestMetadata appManifestMetadata, String str, String str2, String str3, boolean z5, int i5, Object obj) {
        if ((i5 & 1) != 0) {
            str = appManifestMetadata.build;
        }
        if ((i5 & 2) != 0) {
            str2 = appManifestMetadata.releaseName;
        }
        if ((i5 & 4) != 0) {
            str3 = appManifestMetadata.commit;
        }
        if ((i5 & 8) != 0) {
            z5 = appManifestMetadata.confirmUpdate;
        }
        return appManifestMetadata.copy(str, str2, str3, z5);
    }

    public static /* synthetic */ void getConfirmUpdate$annotations() {
    }

    public static /* synthetic */ void getReleaseName$annotations() {
    }

    public static final /* synthetic */ void write$Self$bundle_updater_release(AppManifestMetadata self, CompositeEncoder output, SerialDescriptor serialDesc) {
        output.y(serialDesc, 0, self.build);
        if (output.I(serialDesc, 1) || self.releaseName != null) {
            output.z(serialDesc, 1, v1.a, self.releaseName);
        }
        output.y(serialDesc, 2, self.commit);
        if (output.I(serialDesc, 3) || self.confirmUpdate) {
            output.x(serialDesc, 3, self.confirmUpdate);
        }
    }

    @NotNull
    /* renamed from: component1, reason: from getter */
    public final String getBuild() {
        return this.build;
    }

    /* renamed from: component2, reason: from getter */
    public final String getReleaseName() {
        return this.releaseName;
    }

    @NotNull
    /* renamed from: component3, reason: from getter */
    public final String getCommit() {
        return this.commit;
    }

    /* renamed from: component4, reason: from getter */
    public final boolean getConfirmUpdate() {
        return this.confirmUpdate;
    }

    @NotNull
    public final AppManifestMetadata copy(@NotNull String build, String releaseName, @NotNull String commit, boolean confirmUpdate) {
        Intrinsics.checkNotNullParameter(build, "build");
        Intrinsics.checkNotNullParameter(commit, "commit");
        return new AppManifestMetadata(build, releaseName, commit, confirmUpdate);
    }

    public boolean equals(Object other) {
        if (this == other) {
            return true;
        }
        if (!(other instanceof AppManifestMetadata)) {
            return false;
        }
        AppManifestMetadata appManifestMetadata = (AppManifestMetadata) other;
        return Intrinsics.areEqual(this.build, appManifestMetadata.build) && Intrinsics.areEqual(this.releaseName, appManifestMetadata.releaseName) && Intrinsics.areEqual(this.commit, appManifestMetadata.commit) && this.confirmUpdate == appManifestMetadata.confirmUpdate;
    }

    @NotNull
    public final String getBuild() {
        return this.build;
    }

    @NotNull
    public final String getCommit() {
        return this.commit;
    }

    public final boolean getConfirmUpdate() {
        return this.confirmUpdate;
    }

    public final String getReleaseName() {
        return this.releaseName;
    }

    public int hashCode() {
        int hashCode = this.build.hashCode() * 31;
        String str = this.releaseName;
        return Boolean.hashCode(this.confirmUpdate) + a3.e.d((hashCode + (str == null ? 0 : str.hashCode())) * 31, 31, this.commit);
    }

    @NotNull
    public final WritableNativeMap toNativeMap() {
        return NativeMapExtensionsKt.nativeMapOf(new Pair("build", this.build), new Pair("release_name", this.releaseName), new Pair("commit", this.commit), new Pair("confirm_update", Boolean.valueOf(this.confirmUpdate)));
    }

    @NotNull
    public String toString() {
        String str = this.build;
        String str2 = this.releaseName;
        String str3 = this.commit;
        boolean z5 = this.confirmUpdate;
        StringBuilder t5 = a3.e.t("AppManifestMetadata(build=", str, ", releaseName=", str2, ", commit=");
        t5.append(str3);
        t5.append(", confirmUpdate=");
        t5.append(z5);
        t5.append(")");
        return t5.toString();
    }

    public AppManifestMetadata(@NotNull String build, String str, @NotNull String commit, boolean z5) {
        Intrinsics.checkNotNullParameter(build, "build");
        Intrinsics.checkNotNullParameter(commit, "commit");
        this.build = build;
        this.releaseName = str;
        this.commit = commit;
        this.confirmUpdate = z5;
    }

    public /* synthetic */ AppManifestMetadata(String str, String str2, String str3, boolean z5, int i5, DefaultConstructorMarker defaultConstructorMarker) {
        this(str, (i5 & 2) != 0 ? null : str2, str3, (i5 & 8) != 0 ? false : z5);
    }
}
