package com.discord.jank_stats;

import com.discord.codegen.NativeJankStatsModuleSpec;
import com.discord.react.utilities.NativeMapExtensionsKt;
import com.facebook.react.bridge.ReactApplicationContext;
import com.facebook.react.bridge.WritableMap;
import java.util.LinkedHashSet;
import java.util.List;
import kotlin.Metadata;
import kotlin.Pair;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.SourceDebugExtension;
import kotlin.text.StringsKt;
import org.jetbrains.annotations.NotNull;
import w3.q;

@Metadata(d1 = {"\u00000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u0002\n\u0002\b\u0003\n\u0002\u0010\u0006\n\u0002\b\u0002\n\u0002\u0010\u000e\n\u0002\b\u0006\n\u0002\u0018\u0002\n\u0000\u0018\u00002\u00020\u0001B\u000f\u0012\u0006\u0010\u0002\u001a\u00020\u0003¢\u0006\u0004\b\u0004\u0010\u0005J\b\u0010\u0006\u001a\u00020\u0007H\u0016J\b\u0010\b\u001a\u00020\u0007H\u0016J\u0010\u0010\t\u001a\u00020\u00072\u0006\u0010\n\u001a\u00020\u000bH\u0016J\u0018\u0010\f\u001a\u00020\u00072\u0006\u0010\r\u001a\u00020\u000e2\u0006\u0010\u000f\u001a\u00020\u000eH\u0016J\b\u0010\u0010\u001a\u00020\u0007H\u0016J\u0018\u0010\u0011\u001a\u00020\u00072\u0006\u0010\r\u001a\u00020\u000e2\u0006\u0010\u0012\u001a\u00020\u000eH\u0016J\b\u0010\u0013\u001a\u00020\u0007H\u0016J\b\u0010\u0014\u001a\u00020\u0015H\u0016¨\u0006\u0016"}, d2 = {"Lcom/discord/jank_stats/JankStatsModule;", "Lcom/discord/codegen/NativeJankStatsModuleSpec;", "reactContext", "Lcom/facebook/react/bridge/ReactApplicationContext;", "<init>", "(Lcom/facebook/react/bridge/ReactApplicationContext;)V", "stopTracking", "", "startTracking", "setJankHeuristicMultiplier", "jankHeuristicMultiplier", "", "setScreenContext", "screen", "", "interaction", "beginScreenTransition", "nameCurrentScreen", "expectedScreenIds", "settleCurrentScreen", "requestReport", "Lcom/facebook/react/bridge/WritableMap;", "jank_stats_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
@SourceDebugExtension({"SMAP\nJankStatsModule.kt\nKotlin\n*S Kotlin\n*F\n+ 1 JankStatsModule.kt\ncom/discord/jank_stats/JankStatsModule\n+ 2 _Collections.kt\nkotlin/collections/CollectionsKt___CollectionsKt\n*L\n1#1,71:1\n865#2,2:72\n*S KotlinDebug\n*F\n+ 1 JankStatsModule.kt\ncom/discord/jank_stats/JankStatsModule\n*L\n51#1:72,2\n*E\n"})
/* loaded from: classes.dex */
public final class JankStatsModule extends NativeJankStatsModuleSpec {
    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public JankStatsModule(@NotNull ReactApplicationContext reactContext) {
        super(reactContext);
        Intrinsics.checkNotNullParameter(reactContext, "reactContext");
        if (JankSessionRecorder.INSTANCE.isPerScreenEnabled()) {
            q.f19671c = JankScreenContext.INSTANCE;
        }
    }

    @Override // com.discord.codegen.NativeJankStatsModuleSpec
    public void beginScreenTransition() {
        JankScreenContext.INSTANCE.beginTransition();
    }

    @Override // com.discord.codegen.NativeJankStatsModuleSpec
    public void nameCurrentScreen(@NotNull String screen, @NotNull String expectedScreenIds) {
        Intrinsics.checkNotNullParameter(screen, "screen");
        Intrinsics.checkNotNullParameter(expectedScreenIds, "expectedScreenIds");
        JankScreenContext jankScreenContext = JankScreenContext.INSTANCE;
        List S = StringsKt.S(expectedScreenIds, new char[]{','});
        LinkedHashSet linkedHashSet = new LinkedHashSet();
        for (Object obj : S) {
            if (((String) obj).length() > 0) {
                linkedHashSet.add(obj);
            }
        }
        jankScreenContext.nameCurrentScreen(screen, linkedHashSet);
    }

    @Override // com.discord.codegen.NativeJankStatsModuleSpec
    @NotNull
    public WritableMap requestReport() {
        JankReport issueJankReport$default = JankStatsAggregator.issueJankReport$default(JankStatsAggregator.INSTANCE, null, 1, null);
        FrameMetricsReport issueReport = FrameMetricsAggregator.INSTANCE.issueReport();
        return NativeMapExtensionsKt.nativeMapOf(new Pair("totalFrameCount", Integer.valueOf(issueJankReport$default.getNumFrames())), new Pair("jankFrameCount", Integer.valueOf(issueJankReport$default.getNumJankFrames())), new Pair("frameMetricsTotalFrameCount", Integer.valueOf(issueReport.getNumFrames())), new Pair("frameMetricsJankFrameCount", Integer.valueOf(issueReport.getNumJankFrames())));
    }

    @Override // com.discord.codegen.NativeJankStatsModuleSpec
    public void setJankHeuristicMultiplier(double jankHeuristicMultiplier) {
        JankStatsAggregator.INSTANCE.setJankHeuristicMultiplier((float) jankHeuristicMultiplier);
    }

    @Override // com.discord.codegen.NativeJankStatsModuleSpec
    public void setScreenContext(@NotNull String screen, @NotNull String interaction) {
        Intrinsics.checkNotNullParameter(screen, "screen");
        Intrinsics.checkNotNullParameter(interaction, "interaction");
        JankScreenContext.INSTANCE.set(screen, interaction);
    }

    @Override // com.discord.codegen.NativeJankStatsModuleSpec
    public void settleCurrentScreen() {
        JankScreenContext.INSTANCE.settleCurrentScreen();
    }

    @Override // com.discord.codegen.NativeJankStatsModuleSpec
    public void startTracking() {
        JankStatsAggregator.INSTANCE.enableTracking();
        FrameMetricsAggregator.INSTANCE.enableTracking();
    }

    @Override // com.discord.codegen.NativeJankStatsModuleSpec
    public void stopTracking() {
        JankStatsAggregator.INSTANCE.disableTracking();
        FrameMetricsAggregator.INSTANCE.closeReportWindow();
    }
}
