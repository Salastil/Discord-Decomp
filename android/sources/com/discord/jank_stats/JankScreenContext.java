package com.discord.jank_stats;

import com.swmansion.rnscreens.i0;
import java.util.Set;
import kotlin.Metadata;
import kotlin.collections.o0;
import kotlin.jvm.internal.Intrinsics;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u0000*\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u000b\n\u0002\b\u0002\n\u0002\u0010\u000e\n\u0000\n\u0002\u0010\u0002\n\u0002\b\u0004\n\u0002\u0010\"\n\u0002\b\u000f\bÆ\u0002\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\u000f\u0010\u0005\u001a\u00020\u0004H\u0002¢\u0006\u0004\b\u0005\u0010\u0006J\u0019\u0010\n\u001a\u00020\t2\b\u0010\b\u001a\u0004\u0018\u00010\u0007H\u0002¢\u0006\u0004\b\n\u0010\u000bJ\r\u0010\f\u001a\u00020\t¢\u0006\u0004\b\f\u0010\u0003J#\u0010\u0010\u001a\u00020\t2\u0006\u0010\r\u001a\u00020\u00072\f\u0010\u000f\u001a\b\u0012\u0004\u0012\u00020\u00070\u000e¢\u0006\u0004\b\u0010\u0010\u0011J\r\u0010\u0012\u001a\u00020\t¢\u0006\u0004\b\u0012\u0010\u0003J\u001d\u0010\u0014\u001a\u00020\t2\u0006\u0010\r\u001a\u00020\u00072\u0006\u0010\u0013\u001a\u00020\u0007¢\u0006\u0004\b\u0014\u0010\u0015J\u0019\u0010\u0016\u001a\u00020\t2\b\u0010\b\u001a\u0004\u0018\u00010\u0007H\u0016¢\u0006\u0004\b\u0016\u0010\u000bJ\u0019\u0010\u0017\u001a\u00020\t2\b\u0010\b\u001a\u0004\u0018\u00010\u0007H\u0016¢\u0006\u0004\b\u0017\u0010\u000bR\u0014\u0010\u0018\u001a\u00020\u00078\u0006X\u0086T¢\u0006\u0006\n\u0004\b\u0018\u0010\u0019R\u0014\u0010\u001a\u001a\u00020\u00078\u0006X\u0086T¢\u0006\u0006\n\u0004\b\u001a\u0010\u0019R\u0014\u0010\u001b\u001a\u00020\u00078\u0006X\u0086T¢\u0006\u0006\n\u0004\b\u001b\u0010\u0019R\u001c\u0010\u000f\u001a\b\u0012\u0004\u0012\u00020\u00070\u000e8\u0002@\u0002X\u0082\u000e¢\u0006\u0006\n\u0004\b\u000f\u0010\u001c¨\u0006\u001d"}, d2 = {"Lcom/discord/jank_stats/JankScreenContext;", "Lcom/swmansion/rnscreens/i0;", "<init>", "()V", "", "isTransitioning", "()Z", "", "screenId", "", "endTransition", "(Ljava/lang/String;)V", "beginTransition", "screen", "", "expectedScreenIds", "nameCurrentScreen", "(Ljava/lang/String;Ljava/util/Set;)V", "settleCurrentScreen", "interaction", "set", "(Ljava/lang/String;Ljava/lang/String;)V", "onScreenDidAppear", "onScreenBecameTopMost", "UNKNOWN_SCREEN", "Ljava/lang/String;", "INTERACTION_NONE", "INTERACTION_TRANSITION", "Ljava/util/Set;", "jank_stats_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final class JankScreenContext implements i0 {

    @NotNull
    public static final String INTERACTION_NONE = "none";

    @NotNull
    public static final String INTERACTION_TRANSITION = "transition";

    @NotNull
    public static final String UNKNOWN_SCREEN = "unknown";

    @NotNull
    public static final JankScreenContext INSTANCE = new JankScreenContext();

    @NotNull
    private static volatile Set<String> expectedScreenIds = o0.f13515d;

    private JankScreenContext() {
    }

    private final void endTransition(String screenId) {
        if (isTransitioning()) {
            Set<String> set = expectedScreenIds;
            if (set.isEmpty() || screenId == null || set.contains(screenId)) {
                expectedScreenIds = o0.f13515d;
                JankSessionRecorder.INSTANCE.settleOpenSegment();
            }
        }
    }

    private final boolean isTransitioning() {
        return Intrinsics.areEqual(JankSessionRecorder.INSTANCE.openInteraction(), INTERACTION_TRANSITION);
    }

    public final void beginTransition() {
        expectedScreenIds = o0.f13515d;
        JankSessionRecorder.INSTANCE.openSegmentKeepingLabel(INTERACTION_TRANSITION);
    }

    public final void nameCurrentScreen(@NotNull String screen, @NotNull Set<String> expectedScreenIds2) {
        Intrinsics.checkNotNullParameter(screen, "screen");
        Intrinsics.checkNotNullParameter(expectedScreenIds2, "expectedScreenIds");
        expectedScreenIds = expectedScreenIds2;
        JankSessionRecorder.INSTANCE.renameOpenSegment(screen);
    }

    @Override // com.swmansion.rnscreens.i0
    public void onScreenBecameTopMost(String screenId) {
        endTransition(screenId);
    }

    @Override // com.swmansion.rnscreens.i0
    public void onScreenDidAppear(String screenId) {
        endTransition(screenId);
    }

    public final void set(@NotNull String screen, @NotNull String interaction) {
        Intrinsics.checkNotNullParameter(screen, "screen");
        Intrinsics.checkNotNullParameter(interaction, "interaction");
        if (!isTransitioning()) {
            expectedScreenIds = o0.f13515d;
            JankSessionRecorder.INSTANCE.openSegment(screen, interaction);
        } else {
            if (Intrinsics.areEqual(interaction, INTERACTION_TRANSITION)) {
                return;
            }
            expectedScreenIds = o0.f13515d;
            JankSessionRecorder.INSTANCE.renameAndSettleOpenSegment(screen);
        }
    }

    public final void settleCurrentScreen() {
        expectedScreenIds = o0.f13515d;
        if (isTransitioning()) {
            JankSessionRecorder.INSTANCE.settleOpenSegment();
        }
    }
}
