package com.discord.jank_stats;

import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;
import org.jetbrains.annotations.NotNull;
import s4.h;

@Metadata(d1 = {"\u0000\"\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\u000e\n\u0002\b\n\n\u0002\u0010\u000b\n\u0002\b\u0002\n\u0002\u0010\b\n\u0002\b\u0002\b\u0086\b\u0018\u00002\u00020\u0001B\u0017\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0003¢\u0006\u0004\b\u0005\u0010\u0006J\t\u0010\n\u001a\u00020\u0003HÆ\u0003J\t\u0010\u000b\u001a\u00020\u0003HÆ\u0003J\u001d\u0010\f\u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u00032\b\b\u0002\u0010\u0004\u001a\u00020\u0003HÆ\u0001J\u0013\u0010\r\u001a\u00020\u000e2\b\u0010\u000f\u001a\u0004\u0018\u00010\u0001HÖ\u0003J\t\u0010\u0010\u001a\u00020\u0011HÖ\u0001J\t\u0010\u0012\u001a\u00020\u0003HÖ\u0001R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0007\u0010\bR\u0011\u0010\u0004\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\t\u0010\b¨\u0006\u0013"}, d2 = {"Lcom/discord/jank_stats/ScreenContext;", "", "screen", "", "interaction", "<init>", "(Ljava/lang/String;Ljava/lang/String;)V", "getScreen", "()Ljava/lang/String;", "getInteraction", "component1", "component2", "copy", "equals", "", JankRecordStore.SCREEN_OTHER, "hashCode", "", "toString", "jank_stats_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final /* data */ class ScreenContext {

    @NotNull
    private final String interaction;

    @NotNull
    private final String screen;

    public ScreenContext(@NotNull String screen, @NotNull String interaction) {
        Intrinsics.checkNotNullParameter(screen, "screen");
        Intrinsics.checkNotNullParameter(interaction, "interaction");
        this.screen = screen;
        this.interaction = interaction;
    }

    public static /* synthetic */ ScreenContext copy$default(ScreenContext screenContext, String str, String str2, int i5, Object obj) {
        if ((i5 & 1) != 0) {
            str = screenContext.screen;
        }
        if ((i5 & 2) != 0) {
            str2 = screenContext.interaction;
        }
        return screenContext.copy(str, str2);
    }

    @NotNull
    /* renamed from: component1, reason: from getter */
    public final String getScreen() {
        return this.screen;
    }

    @NotNull
    /* renamed from: component2, reason: from getter */
    public final String getInteraction() {
        return this.interaction;
    }

    @NotNull
    public final ScreenContext copy(@NotNull String screen, @NotNull String interaction) {
        Intrinsics.checkNotNullParameter(screen, "screen");
        Intrinsics.checkNotNullParameter(interaction, "interaction");
        return new ScreenContext(screen, interaction);
    }

    public boolean equals(Object other) {
        if (this == other) {
            return true;
        }
        if (!(other instanceof ScreenContext)) {
            return false;
        }
        ScreenContext screenContext = (ScreenContext) other;
        return Intrinsics.areEqual(this.screen, screenContext.screen) && Intrinsics.areEqual(this.interaction, screenContext.interaction);
    }

    @NotNull
    public final String getInteraction() {
        return this.interaction;
    }

    @NotNull
    public final String getScreen() {
        return this.screen;
    }

    public int hashCode() {
        return this.interaction.hashCode() + (this.screen.hashCode() * 31);
    }

    @NotNull
    public String toString() {
        return h.g("ScreenContext(screen=", this.screen, ", interaction=", this.interaction, ")");
    }
}
