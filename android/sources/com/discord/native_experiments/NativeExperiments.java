package com.discord.native_experiments;

import com.discord.libdiscore.LibdiscoreModuleClass;
import com.discord.native_experiments.ChatMosaicSharedPoolExperimentSettings;
import com.discord.native_experiments.FrescoMemoryCacheExperimentSettings;
import com.discord.native_experiments.HermesOccupancyTargetExperimentSettings;
import com.discord.native_experiments.JankPerScreenExperimentSettings;
import com.discord.native_experiments.NativeExperiments;
import fo.l;
import kotlin.Lazy;
import kotlin.Metadata;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.internal.Intrinsics;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u0000@\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u0002\n\u0000\n\u0002\u0010\b\n\u0002\b\u0005\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0002\b\u0007\u0018\u00002\u00020\u0001B\u000f\u0012\u0006\u0010\u0002\u001a\u00020\u0003¢\u0006\u0004\b\u0004\u0010\u0005J\u0006\u0010\u0006\u001a\u00020\u0007R\u001b\u0010\b\u001a\u00020\t8FX\u0086\u0084\u0002¢\u0006\f\n\u0004\b\f\u0010\r\u001a\u0004\b\n\u0010\u000bR\u001b\u0010\u000e\u001a\u00020\u000f8FX\u0086\u0084\u0002¢\u0006\f\n\u0004\b\u0012\u0010\r\u001a\u0004\b\u0010\u0010\u0011R\u001b\u0010\u0013\u001a\u00020\u00148FX\u0086\u0084\u0002¢\u0006\f\n\u0004\b\u0017\u0010\r\u001a\u0004\b\u0015\u0010\u0016R\u001b\u0010\u0018\u001a\u00020\u00198FX\u0086\u0084\u0002¢\u0006\f\n\u0004\b\u001c\u0010\r\u001a\u0004\b\u001a\u0010\u001bR\u001b\u0010\u001d\u001a\u00020\u001e8FX\u0086\u0084\u0002¢\u0006\f\n\u0004\b!\u0010\r\u001a\u0004\b\u001f\u0010 R\u001b\u0010\"\u001a\u00020\t8FX\u0086\u0084\u0002¢\u0006\f\n\u0004\b$\u0010\r\u001a\u0004\b#\u0010\u000b¨\u0006%"}, d2 = {"Lcom/discord/native_experiments/NativeExperiments;", "", "libdiscoreModule", "Lcom/discord/libdiscore/LibdiscoreModuleClass$LibdiscoreModule;", "<init>", "(Lcom/discord/libdiscore/LibdiscoreModuleClass$LibdiscoreModule;)V", "prewarmAppStartExperiments", "", "mountingModeExperiment", "", "getMountingModeExperiment", "()I", "mountingModeExperiment$delegate", "Lkotlin/Lazy;", "hermesOccupancyTargetExperimentSettings", "Lcom/discord/native_experiments/HermesOccupancyTargetExperimentSettings;", "getHermesOccupancyTargetExperimentSettings", "()Lcom/discord/native_experiments/HermesOccupancyTargetExperimentSettings;", "hermesOccupancyTargetExperimentSettings$delegate", "frescoCacheExperimentSettings", "Lcom/discord/native_experiments/FrescoMemoryCacheExperimentSettings;", "getFrescoCacheExperimentSettings", "()Lcom/discord/native_experiments/FrescoMemoryCacheExperimentSettings;", "frescoCacheExperimentSettings$delegate", "chatMosaicSharedPoolExperimentSettings", "Lcom/discord/native_experiments/ChatMosaicSharedPoolExperimentSettings;", "getChatMosaicSharedPoolExperimentSettings", "()Lcom/discord/native_experiments/ChatMosaicSharedPoolExperimentSettings;", "chatMosaicSharedPoolExperimentSettings$delegate", "jankPerScreenExperimentSettings", "Lcom/discord/native_experiments/JankPerScreenExperimentSettings;", "getJankPerScreenExperimentSettings", "()Lcom/discord/native_experiments/JankPerScreenExperimentSettings;", "jankPerScreenExperimentSettings$delegate", "rnFlagReparenting", "getRnFlagReparenting", "rnFlagReparenting$delegate", "native_experiments_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final class NativeExperiments {

    /* renamed from: chatMosaicSharedPoolExperimentSettings$delegate, reason: from kotlin metadata */
    @NotNull
    private final Lazy chatMosaicSharedPoolExperimentSettings;

    /* renamed from: frescoCacheExperimentSettings$delegate, reason: from kotlin metadata */
    @NotNull
    private final Lazy frescoCacheExperimentSettings;

    /* renamed from: hermesOccupancyTargetExperimentSettings$delegate, reason: from kotlin metadata */
    @NotNull
    private final Lazy hermesOccupancyTargetExperimentSettings;

    /* renamed from: jankPerScreenExperimentSettings$delegate, reason: from kotlin metadata */
    @NotNull
    private final Lazy jankPerScreenExperimentSettings;

    /* renamed from: mountingModeExperiment$delegate, reason: from kotlin metadata */
    @NotNull
    private final Lazy mountingModeExperiment;

    /* renamed from: rnFlagReparenting$delegate, reason: from kotlin metadata */
    @NotNull
    private final Lazy rnFlagReparenting;

    public NativeExperiments(@NotNull final LibdiscoreModuleClass.LibdiscoreModule libdiscoreModule) {
        Intrinsics.checkNotNullParameter(libdiscoreModule, "libdiscoreModule");
        final int i5 = 0;
        this.mountingModeExperiment = l.a(new Function0() { // from class: e7.a
            @Override // kotlin.jvm.functions.Function0
            public final Object invoke() {
                int mountingModeExperiment_delegate$lambda$0;
                HermesOccupancyTargetExperimentSettings hermesOccupancyTargetExperimentSettings_delegate$lambda$1;
                FrescoMemoryCacheExperimentSettings frescoCacheExperimentSettings_delegate$lambda$2;
                ChatMosaicSharedPoolExperimentSettings chatMosaicSharedPoolExperimentSettings_delegate$lambda$3;
                JankPerScreenExperimentSettings jankPerScreenExperimentSettings_delegate$lambda$4;
                int rnFlagReparenting_delegate$lambda$5;
                switch (i5) {
                    case 0:
                        mountingModeExperiment_delegate$lambda$0 = NativeExperiments.mountingModeExperiment_delegate$lambda$0(libdiscoreModule);
                        return Integer.valueOf(mountingModeExperiment_delegate$lambda$0);
                    case 1:
                        hermesOccupancyTargetExperimentSettings_delegate$lambda$1 = NativeExperiments.hermesOccupancyTargetExperimentSettings_delegate$lambda$1(libdiscoreModule);
                        return hermesOccupancyTargetExperimentSettings_delegate$lambda$1;
                    case 2:
                        frescoCacheExperimentSettings_delegate$lambda$2 = NativeExperiments.frescoCacheExperimentSettings_delegate$lambda$2(libdiscoreModule);
                        return frescoCacheExperimentSettings_delegate$lambda$2;
                    case 3:
                        chatMosaicSharedPoolExperimentSettings_delegate$lambda$3 = NativeExperiments.chatMosaicSharedPoolExperimentSettings_delegate$lambda$3(libdiscoreModule);
                        return chatMosaicSharedPoolExperimentSettings_delegate$lambda$3;
                    case 4:
                        jankPerScreenExperimentSettings_delegate$lambda$4 = NativeExperiments.jankPerScreenExperimentSettings_delegate$lambda$4(libdiscoreModule);
                        return jankPerScreenExperimentSettings_delegate$lambda$4;
                    default:
                        rnFlagReparenting_delegate$lambda$5 = NativeExperiments.rnFlagReparenting_delegate$lambda$5(libdiscoreModule);
                        return Integer.valueOf(rnFlagReparenting_delegate$lambda$5);
                }
            }
        });
        final int i6 = 1;
        this.hermesOccupancyTargetExperimentSettings = l.a(new Function0() { // from class: e7.a
            @Override // kotlin.jvm.functions.Function0
            public final Object invoke() {
                int mountingModeExperiment_delegate$lambda$0;
                HermesOccupancyTargetExperimentSettings hermesOccupancyTargetExperimentSettings_delegate$lambda$1;
                FrescoMemoryCacheExperimentSettings frescoCacheExperimentSettings_delegate$lambda$2;
                ChatMosaicSharedPoolExperimentSettings chatMosaicSharedPoolExperimentSettings_delegate$lambda$3;
                JankPerScreenExperimentSettings jankPerScreenExperimentSettings_delegate$lambda$4;
                int rnFlagReparenting_delegate$lambda$5;
                switch (i6) {
                    case 0:
                        mountingModeExperiment_delegate$lambda$0 = NativeExperiments.mountingModeExperiment_delegate$lambda$0(libdiscoreModule);
                        return Integer.valueOf(mountingModeExperiment_delegate$lambda$0);
                    case 1:
                        hermesOccupancyTargetExperimentSettings_delegate$lambda$1 = NativeExperiments.hermesOccupancyTargetExperimentSettings_delegate$lambda$1(libdiscoreModule);
                        return hermesOccupancyTargetExperimentSettings_delegate$lambda$1;
                    case 2:
                        frescoCacheExperimentSettings_delegate$lambda$2 = NativeExperiments.frescoCacheExperimentSettings_delegate$lambda$2(libdiscoreModule);
                        return frescoCacheExperimentSettings_delegate$lambda$2;
                    case 3:
                        chatMosaicSharedPoolExperimentSettings_delegate$lambda$3 = NativeExperiments.chatMosaicSharedPoolExperimentSettings_delegate$lambda$3(libdiscoreModule);
                        return chatMosaicSharedPoolExperimentSettings_delegate$lambda$3;
                    case 4:
                        jankPerScreenExperimentSettings_delegate$lambda$4 = NativeExperiments.jankPerScreenExperimentSettings_delegate$lambda$4(libdiscoreModule);
                        return jankPerScreenExperimentSettings_delegate$lambda$4;
                    default:
                        rnFlagReparenting_delegate$lambda$5 = NativeExperiments.rnFlagReparenting_delegate$lambda$5(libdiscoreModule);
                        return Integer.valueOf(rnFlagReparenting_delegate$lambda$5);
                }
            }
        });
        final int i10 = 2;
        this.frescoCacheExperimentSettings = l.a(new Function0() { // from class: e7.a
            @Override // kotlin.jvm.functions.Function0
            public final Object invoke() {
                int mountingModeExperiment_delegate$lambda$0;
                HermesOccupancyTargetExperimentSettings hermesOccupancyTargetExperimentSettings_delegate$lambda$1;
                FrescoMemoryCacheExperimentSettings frescoCacheExperimentSettings_delegate$lambda$2;
                ChatMosaicSharedPoolExperimentSettings chatMosaicSharedPoolExperimentSettings_delegate$lambda$3;
                JankPerScreenExperimentSettings jankPerScreenExperimentSettings_delegate$lambda$4;
                int rnFlagReparenting_delegate$lambda$5;
                switch (i10) {
                    case 0:
                        mountingModeExperiment_delegate$lambda$0 = NativeExperiments.mountingModeExperiment_delegate$lambda$0(libdiscoreModule);
                        return Integer.valueOf(mountingModeExperiment_delegate$lambda$0);
                    case 1:
                        hermesOccupancyTargetExperimentSettings_delegate$lambda$1 = NativeExperiments.hermesOccupancyTargetExperimentSettings_delegate$lambda$1(libdiscoreModule);
                        return hermesOccupancyTargetExperimentSettings_delegate$lambda$1;
                    case 2:
                        frescoCacheExperimentSettings_delegate$lambda$2 = NativeExperiments.frescoCacheExperimentSettings_delegate$lambda$2(libdiscoreModule);
                        return frescoCacheExperimentSettings_delegate$lambda$2;
                    case 3:
                        chatMosaicSharedPoolExperimentSettings_delegate$lambda$3 = NativeExperiments.chatMosaicSharedPoolExperimentSettings_delegate$lambda$3(libdiscoreModule);
                        return chatMosaicSharedPoolExperimentSettings_delegate$lambda$3;
                    case 4:
                        jankPerScreenExperimentSettings_delegate$lambda$4 = NativeExperiments.jankPerScreenExperimentSettings_delegate$lambda$4(libdiscoreModule);
                        return jankPerScreenExperimentSettings_delegate$lambda$4;
                    default:
                        rnFlagReparenting_delegate$lambda$5 = NativeExperiments.rnFlagReparenting_delegate$lambda$5(libdiscoreModule);
                        return Integer.valueOf(rnFlagReparenting_delegate$lambda$5);
                }
            }
        });
        final int i11 = 3;
        this.chatMosaicSharedPoolExperimentSettings = l.a(new Function0() { // from class: e7.a
            @Override // kotlin.jvm.functions.Function0
            public final Object invoke() {
                int mountingModeExperiment_delegate$lambda$0;
                HermesOccupancyTargetExperimentSettings hermesOccupancyTargetExperimentSettings_delegate$lambda$1;
                FrescoMemoryCacheExperimentSettings frescoCacheExperimentSettings_delegate$lambda$2;
                ChatMosaicSharedPoolExperimentSettings chatMosaicSharedPoolExperimentSettings_delegate$lambda$3;
                JankPerScreenExperimentSettings jankPerScreenExperimentSettings_delegate$lambda$4;
                int rnFlagReparenting_delegate$lambda$5;
                switch (i11) {
                    case 0:
                        mountingModeExperiment_delegate$lambda$0 = NativeExperiments.mountingModeExperiment_delegate$lambda$0(libdiscoreModule);
                        return Integer.valueOf(mountingModeExperiment_delegate$lambda$0);
                    case 1:
                        hermesOccupancyTargetExperimentSettings_delegate$lambda$1 = NativeExperiments.hermesOccupancyTargetExperimentSettings_delegate$lambda$1(libdiscoreModule);
                        return hermesOccupancyTargetExperimentSettings_delegate$lambda$1;
                    case 2:
                        frescoCacheExperimentSettings_delegate$lambda$2 = NativeExperiments.frescoCacheExperimentSettings_delegate$lambda$2(libdiscoreModule);
                        return frescoCacheExperimentSettings_delegate$lambda$2;
                    case 3:
                        chatMosaicSharedPoolExperimentSettings_delegate$lambda$3 = NativeExperiments.chatMosaicSharedPoolExperimentSettings_delegate$lambda$3(libdiscoreModule);
                        return chatMosaicSharedPoolExperimentSettings_delegate$lambda$3;
                    case 4:
                        jankPerScreenExperimentSettings_delegate$lambda$4 = NativeExperiments.jankPerScreenExperimentSettings_delegate$lambda$4(libdiscoreModule);
                        return jankPerScreenExperimentSettings_delegate$lambda$4;
                    default:
                        rnFlagReparenting_delegate$lambda$5 = NativeExperiments.rnFlagReparenting_delegate$lambda$5(libdiscoreModule);
                        return Integer.valueOf(rnFlagReparenting_delegate$lambda$5);
                }
            }
        });
        final int i12 = 4;
        this.jankPerScreenExperimentSettings = l.a(new Function0() { // from class: e7.a
            @Override // kotlin.jvm.functions.Function0
            public final Object invoke() {
                int mountingModeExperiment_delegate$lambda$0;
                HermesOccupancyTargetExperimentSettings hermesOccupancyTargetExperimentSettings_delegate$lambda$1;
                FrescoMemoryCacheExperimentSettings frescoCacheExperimentSettings_delegate$lambda$2;
                ChatMosaicSharedPoolExperimentSettings chatMosaicSharedPoolExperimentSettings_delegate$lambda$3;
                JankPerScreenExperimentSettings jankPerScreenExperimentSettings_delegate$lambda$4;
                int rnFlagReparenting_delegate$lambda$5;
                switch (i12) {
                    case 0:
                        mountingModeExperiment_delegate$lambda$0 = NativeExperiments.mountingModeExperiment_delegate$lambda$0(libdiscoreModule);
                        return Integer.valueOf(mountingModeExperiment_delegate$lambda$0);
                    case 1:
                        hermesOccupancyTargetExperimentSettings_delegate$lambda$1 = NativeExperiments.hermesOccupancyTargetExperimentSettings_delegate$lambda$1(libdiscoreModule);
                        return hermesOccupancyTargetExperimentSettings_delegate$lambda$1;
                    case 2:
                        frescoCacheExperimentSettings_delegate$lambda$2 = NativeExperiments.frescoCacheExperimentSettings_delegate$lambda$2(libdiscoreModule);
                        return frescoCacheExperimentSettings_delegate$lambda$2;
                    case 3:
                        chatMosaicSharedPoolExperimentSettings_delegate$lambda$3 = NativeExperiments.chatMosaicSharedPoolExperimentSettings_delegate$lambda$3(libdiscoreModule);
                        return chatMosaicSharedPoolExperimentSettings_delegate$lambda$3;
                    case 4:
                        jankPerScreenExperimentSettings_delegate$lambda$4 = NativeExperiments.jankPerScreenExperimentSettings_delegate$lambda$4(libdiscoreModule);
                        return jankPerScreenExperimentSettings_delegate$lambda$4;
                    default:
                        rnFlagReparenting_delegate$lambda$5 = NativeExperiments.rnFlagReparenting_delegate$lambda$5(libdiscoreModule);
                        return Integer.valueOf(rnFlagReparenting_delegate$lambda$5);
                }
            }
        });
        final int i13 = 5;
        this.rnFlagReparenting = l.a(new Function0() { // from class: e7.a
            @Override // kotlin.jvm.functions.Function0
            public final Object invoke() {
                int mountingModeExperiment_delegate$lambda$0;
                HermesOccupancyTargetExperimentSettings hermesOccupancyTargetExperimentSettings_delegate$lambda$1;
                FrescoMemoryCacheExperimentSettings frescoCacheExperimentSettings_delegate$lambda$2;
                ChatMosaicSharedPoolExperimentSettings chatMosaicSharedPoolExperimentSettings_delegate$lambda$3;
                JankPerScreenExperimentSettings jankPerScreenExperimentSettings_delegate$lambda$4;
                int rnFlagReparenting_delegate$lambda$5;
                switch (i13) {
                    case 0:
                        mountingModeExperiment_delegate$lambda$0 = NativeExperiments.mountingModeExperiment_delegate$lambda$0(libdiscoreModule);
                        return Integer.valueOf(mountingModeExperiment_delegate$lambda$0);
                    case 1:
                        hermesOccupancyTargetExperimentSettings_delegate$lambda$1 = NativeExperiments.hermesOccupancyTargetExperimentSettings_delegate$lambda$1(libdiscoreModule);
                        return hermesOccupancyTargetExperimentSettings_delegate$lambda$1;
                    case 2:
                        frescoCacheExperimentSettings_delegate$lambda$2 = NativeExperiments.frescoCacheExperimentSettings_delegate$lambda$2(libdiscoreModule);
                        return frescoCacheExperimentSettings_delegate$lambda$2;
                    case 3:
                        chatMosaicSharedPoolExperimentSettings_delegate$lambda$3 = NativeExperiments.chatMosaicSharedPoolExperimentSettings_delegate$lambda$3(libdiscoreModule);
                        return chatMosaicSharedPoolExperimentSettings_delegate$lambda$3;
                    case 4:
                        jankPerScreenExperimentSettings_delegate$lambda$4 = NativeExperiments.jankPerScreenExperimentSettings_delegate$lambda$4(libdiscoreModule);
                        return jankPerScreenExperimentSettings_delegate$lambda$4;
                    default:
                        rnFlagReparenting_delegate$lambda$5 = NativeExperiments.rnFlagReparenting_delegate$lambda$5(libdiscoreModule);
                        return Integer.valueOf(rnFlagReparenting_delegate$lambda$5);
                }
            }
        });
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final ChatMosaicSharedPoolExperimentSettings chatMosaicSharedPoolExperimentSettings_delegate$lambda$3(LibdiscoreModuleClass.LibdiscoreModule libdiscoreModule) {
        return ChatMosaicSharedPoolExperimentBootstrap.INSTANCE.fromTreatmentId(libdiscoreModule.getConfigTreatmentId(ChatMosaicSharedPoolExperimentBootstrap.EXPERIMENT_ID));
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final FrescoMemoryCacheExperimentSettings frescoCacheExperimentSettings_delegate$lambda$2(LibdiscoreModuleClass.LibdiscoreModule libdiscoreModule) {
        return FrescoMemoryCacheExperimentBootstrap.INSTANCE.fromTreatmentId(libdiscoreModule.getConfigTreatmentId(FrescoMemoryCacheExperimentBootstrap.EXPERIMENT_ID));
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final HermesOccupancyTargetExperimentSettings hermesOccupancyTargetExperimentSettings_delegate$lambda$1(LibdiscoreModuleClass.LibdiscoreModule libdiscoreModule) {
        return HermesOccupancyTargetExperimentBootstrap.INSTANCE.fromTreatmentId(libdiscoreModule.getConfigTreatmentId(HermesOccupancyTargetExperimentBootstrap.EXPERIMENT_ID));
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final JankPerScreenExperimentSettings jankPerScreenExperimentSettings_delegate$lambda$4(LibdiscoreModuleClass.LibdiscoreModule libdiscoreModule) {
        return JankPerScreenExperimentBootstrap.INSTANCE.fromTreatmentId(libdiscoreModule.getConfigTreatmentId(JankPerScreenExperimentBootstrap.EXPERIMENT_ID));
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final int mountingModeExperiment_delegate$lambda$0(LibdiscoreModuleClass.LibdiscoreModule libdiscoreModule) {
        return libdiscoreModule.getConfigTreatmentId("2026-01-android-rmle");
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final int rnFlagReparenting_delegate$lambda$5(LibdiscoreModuleClass.LibdiscoreModule libdiscoreModule) {
        return libdiscoreModule.getConfigTreatmentId("2026-08-android-rn-reparenting-flag");
    }

    @NotNull
    public final ChatMosaicSharedPoolExperimentSettings getChatMosaicSharedPoolExperimentSettings() {
        return (ChatMosaicSharedPoolExperimentSettings) this.chatMosaicSharedPoolExperimentSettings.getValue();
    }

    @NotNull
    public final FrescoMemoryCacheExperimentSettings getFrescoCacheExperimentSettings() {
        return (FrescoMemoryCacheExperimentSettings) this.frescoCacheExperimentSettings.getValue();
    }

    @NotNull
    public final HermesOccupancyTargetExperimentSettings getHermesOccupancyTargetExperimentSettings() {
        return (HermesOccupancyTargetExperimentSettings) this.hermesOccupancyTargetExperimentSettings.getValue();
    }

    @NotNull
    public final JankPerScreenExperimentSettings getJankPerScreenExperimentSettings() {
        return (JankPerScreenExperimentSettings) this.jankPerScreenExperimentSettings.getValue();
    }

    public final int getMountingModeExperiment() {
        return ((Number) this.mountingModeExperiment.getValue()).intValue();
    }

    public final int getRnFlagReparenting() {
        return ((Number) this.rnFlagReparenting.getValue()).intValue();
    }

    public final void prewarmAppStartExperiments() {
        getMountingModeExperiment();
        getHermesOccupancyTargetExperimentSettings();
        getFrescoCacheExperimentSettings();
        getChatMosaicSharedPoolExperimentSettings();
        getJankPerScreenExperimentSettings();
        getRnFlagReparenting();
    }
}
