package com.discord.native_experiments;

import kotlin.Metadata;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u0000 \n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\u000e\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0010\b\n\u0000\bÆ\u0002\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\u000e\u0010\n\u001a\u00020\u00072\u0006\u0010\u000b\u001a\u00020\fR\u000e\u0010\u0004\u001a\u00020\u0005X\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010\u0006\u001a\u00020\u0007X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\b\u001a\u00020\u0007X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\t\u001a\u00020\u0007X\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006\r"}, d2 = {"Lcom/discord/native_experiments/JankPerScreenExperimentBootstrap;", "", "<init>", "()V", "EXPERIMENT_ID", "", "unavailableSettings", "Lcom/discord/native_experiments/JankPerScreenExperimentSettings;", "controlSettings", "treatmentSettings", "fromTreatmentId", "rawTreatmentId", "", "native_experiments_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final class JankPerScreenExperimentBootstrap {

    @NotNull
    public static final String EXPERIMENT_ID = "2026-08-android-jank-per-screen";

    @NotNull
    public static final JankPerScreenExperimentBootstrap INSTANCE = new JankPerScreenExperimentBootstrap();

    @NotNull
    private static final JankPerScreenExperimentSettings unavailableSettings = new JankPerScreenExperimentSettings(JankPerScreenExperimentState.UNAVAILABLE);

    @NotNull
    private static final JankPerScreenExperimentSettings controlSettings = new JankPerScreenExperimentSettings(JankPerScreenExperimentState.CONTROL);

    @NotNull
    private static final JankPerScreenExperimentSettings treatmentSettings = new JankPerScreenExperimentSettings(JankPerScreenExperimentState.TREATMENT);

    private JankPerScreenExperimentBootstrap() {
    }

    @NotNull
    public final JankPerScreenExperimentSettings fromTreatmentId(int rawTreatmentId) {
        return rawTreatmentId != 0 ? rawTreatmentId != 1 ? unavailableSettings : treatmentSettings : controlSettings;
    }
}
