package com.discord.native_experiments;

import ki.b;
import kotlin.Metadata;
import kotlin.enums.EnumEntries;
import org.jetbrains.annotations.NotNull;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
@Metadata(d1 = {"\u0000\u0012\n\u0002\u0018\u0002\n\u0002\u0010\u0010\n\u0000\n\u0002\u0010\u000e\n\u0002\b\b\b\u0086\u0081\u0002\u0018\u00002\b\u0012\u0004\u0012\u00020\u00000\u0001B\u0011\b\u0002\u0012\u0006\u0010\u0002\u001a\u00020\u0003¢\u0006\u0004\b\u0004\u0010\u0005R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0006\u0010\u0007j\u0002\b\bj\u0002\b\tj\u0002\b\n¨\u0006\u000b"}, d2 = {"Lcom/discord/native_experiments/HermesOccupancyTargetExperimentState;", "", "tagValue", "", "<init>", "(Ljava/lang/String;ILjava/lang/String;)V", "getTagValue", "()Ljava/lang/String;", "UNAVAILABLE", "CONTROL", "TREATMENT", "native_experiments_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final class HermesOccupancyTargetExperimentState {
    private static final /* synthetic */ EnumEntries $ENTRIES;
    private static final /* synthetic */ HermesOccupancyTargetExperimentState[] $VALUES;

    @NotNull
    private final String tagValue;
    public static final HermesOccupancyTargetExperimentState UNAVAILABLE = new HermesOccupancyTargetExperimentState("UNAVAILABLE", 0, "unavailable");
    public static final HermesOccupancyTargetExperimentState CONTROL = new HermesOccupancyTargetExperimentState("CONTROL", 1, "control");
    public static final HermesOccupancyTargetExperimentState TREATMENT = new HermesOccupancyTargetExperimentState("TREATMENT", 2, "treatment");

    private static final /* synthetic */ HermesOccupancyTargetExperimentState[] $values() {
        return new HermesOccupancyTargetExperimentState[]{UNAVAILABLE, CONTROL, TREATMENT};
    }

    static {
        HermesOccupancyTargetExperimentState[] $values = $values();
        $VALUES = $values;
        $ENTRIES = b.p($values);
    }

    private HermesOccupancyTargetExperimentState(String str, int i5, String str2) {
        this.tagValue = str2;
    }

    @NotNull
    public static EnumEntries getEntries() {
        return $ENTRIES;
    }

    public static HermesOccupancyTargetExperimentState valueOf(String str) {
        return (HermesOccupancyTargetExperimentState) Enum.valueOf(HermesOccupancyTargetExperimentState.class, str);
    }

    public static HermesOccupancyTargetExperimentState[] values() {
        return (HermesOccupancyTargetExperimentState[]) $VALUES.clone();
    }

    @NotNull
    public final String getTagValue() {
        return this.tagValue;
    }
}
