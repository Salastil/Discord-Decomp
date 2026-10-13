package com.discord.native_experiments;

import com.discord.jank_stats.JankRecordStore;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u0000&\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0010\u000b\n\u0002\b\u0006\n\u0002\u0010\b\n\u0000\n\u0002\u0010\u000e\n\u0000\b\u0086\b\u0018\u00002\u00020\u0001B\u000f\u0012\u0006\u0010\u0002\u001a\u00020\u0003¢\u0006\u0004\b\u0004\u0010\u0005J\t\u0010\u000b\u001a\u00020\u0003HÆ\u0003J\u0013\u0010\f\u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u0003HÆ\u0001J\u0013\u0010\r\u001a\u00020\t2\b\u0010\u000e\u001a\u0004\u0018\u00010\u0001HÖ\u0003J\t\u0010\u000f\u001a\u00020\u0010HÖ\u0001J\t\u0010\u0011\u001a\u00020\u0012HÖ\u0001R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0006\u0010\u0007R\u0011\u0010\b\u001a\u00020\t8F¢\u0006\u0006\u001a\u0004\b\b\u0010\n¨\u0006\u0013"}, d2 = {"Lcom/discord/native_experiments/JankPerScreenExperimentSettings;", "", "state", "Lcom/discord/native_experiments/JankPerScreenExperimentState;", "<init>", "(Lcom/discord/native_experiments/JankPerScreenExperimentState;)V", "getState", "()Lcom/discord/native_experiments/JankPerScreenExperimentState;", "isPerScreenEnabled", "", "()Z", "component1", "copy", "equals", JankRecordStore.SCREEN_OTHER, "hashCode", "", "toString", "", "native_experiments_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final /* data */ class JankPerScreenExperimentSettings {

    @NotNull
    private final JankPerScreenExperimentState state;

    public JankPerScreenExperimentSettings(@NotNull JankPerScreenExperimentState state) {
        Intrinsics.checkNotNullParameter(state, "state");
        this.state = state;
    }

    public static /* synthetic */ JankPerScreenExperimentSettings copy$default(JankPerScreenExperimentSettings jankPerScreenExperimentSettings, JankPerScreenExperimentState jankPerScreenExperimentState, int i5, Object obj) {
        if ((i5 & 1) != 0) {
            jankPerScreenExperimentState = jankPerScreenExperimentSettings.state;
        }
        return jankPerScreenExperimentSettings.copy(jankPerScreenExperimentState);
    }

    @NotNull
    /* renamed from: component1, reason: from getter */
    public final JankPerScreenExperimentState getState() {
        return this.state;
    }

    @NotNull
    public final JankPerScreenExperimentSettings copy(@NotNull JankPerScreenExperimentState state) {
        Intrinsics.checkNotNullParameter(state, "state");
        return new JankPerScreenExperimentSettings(state);
    }

    public boolean equals(Object other) {
        if (this == other) {
            return true;
        }
        return (other instanceof JankPerScreenExperimentSettings) && this.state == ((JankPerScreenExperimentSettings) other).state;
    }

    @NotNull
    public final JankPerScreenExperimentState getState() {
        return this.state;
    }

    public int hashCode() {
        return this.state.hashCode();
    }

    public final boolean isPerScreenEnabled() {
        return this.state == JankPerScreenExperimentState.TREATMENT;
    }

    @NotNull
    public String toString() {
        return "JankPerScreenExperimentSettings(state=" + this.state + ")";
    }
}
