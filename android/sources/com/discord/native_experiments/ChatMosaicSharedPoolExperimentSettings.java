package com.discord.native_experiments;

import com.discord.jank_stats.JankRecordStore;
import kotlin.Metadata;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u0000\u001e\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\b\n\u0000\n\u0002\u0010\u000b\n\u0002\b\r\n\u0002\u0010\u000e\n\u0000\b\u0086\b\u0018\u00002\u00020\u0001B\u0017\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005¢\u0006\u0004\b\u0006\u0010\u0007J\t\u0010\f\u001a\u00020\u0003HÆ\u0003J\t\u0010\r\u001a\u00020\u0005HÆ\u0003J\u001d\u0010\u000e\u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u00032\b\b\u0002\u0010\u0004\u001a\u00020\u0005HÆ\u0001J\u0013\u0010\u000f\u001a\u00020\u00052\b\u0010\u0010\u001a\u0004\u0018\u00010\u0001HÖ\u0003J\t\u0010\u0011\u001a\u00020\u0003HÖ\u0001J\t\u0010\u0012\u001a\u00020\u0013HÖ\u0001R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\b\u0010\tR\u0011\u0010\u0004\u001a\u00020\u0005¢\u0006\b\n\u0000\u001a\u0004\b\n\u0010\u000b¨\u0006\u0014"}, d2 = {"Lcom/discord/native_experiments/ChatMosaicSharedPoolExperimentSettings;", "", "treatmentId", "", "useSharedPool", "", "<init>", "(IZ)V", "getTreatmentId", "()I", "getUseSharedPool", "()Z", "component1", "component2", "copy", "equals", JankRecordStore.SCREEN_OTHER, "hashCode", "toString", "", "native_experiments_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final /* data */ class ChatMosaicSharedPoolExperimentSettings {
    private final int treatmentId;
    private final boolean useSharedPool;

    public ChatMosaicSharedPoolExperimentSettings(int i5, boolean z5) {
        this.treatmentId = i5;
        this.useSharedPool = z5;
    }

    public static /* synthetic */ ChatMosaicSharedPoolExperimentSettings copy$default(ChatMosaicSharedPoolExperimentSettings chatMosaicSharedPoolExperimentSettings, int i5, boolean z5, int i6, Object obj) {
        if ((i6 & 1) != 0) {
            i5 = chatMosaicSharedPoolExperimentSettings.treatmentId;
        }
        if ((i6 & 2) != 0) {
            z5 = chatMosaicSharedPoolExperimentSettings.useSharedPool;
        }
        return chatMosaicSharedPoolExperimentSettings.copy(i5, z5);
    }

    /* renamed from: component1, reason: from getter */
    public final int getTreatmentId() {
        return this.treatmentId;
    }

    /* renamed from: component2, reason: from getter */
    public final boolean getUseSharedPool() {
        return this.useSharedPool;
    }

    @NotNull
    public final ChatMosaicSharedPoolExperimentSettings copy(int treatmentId, boolean useSharedPool) {
        return new ChatMosaicSharedPoolExperimentSettings(treatmentId, useSharedPool);
    }

    public boolean equals(Object other) {
        if (this == other) {
            return true;
        }
        if (!(other instanceof ChatMosaicSharedPoolExperimentSettings)) {
            return false;
        }
        ChatMosaicSharedPoolExperimentSettings chatMosaicSharedPoolExperimentSettings = (ChatMosaicSharedPoolExperimentSettings) other;
        return this.treatmentId == chatMosaicSharedPoolExperimentSettings.treatmentId && this.useSharedPool == chatMosaicSharedPoolExperimentSettings.useSharedPool;
    }

    public final int getTreatmentId() {
        return this.treatmentId;
    }

    public final boolean getUseSharedPool() {
        return this.useSharedPool;
    }

    public int hashCode() {
        return Boolean.hashCode(this.useSharedPool) + (Integer.hashCode(this.treatmentId) * 31);
    }

    @NotNull
    public String toString() {
        return "ChatMosaicSharedPoolExperimentSettings(treatmentId=" + this.treatmentId + ", useSharedPool=" + this.useSharedPool + ")";
    }
}
