package com.discord.chat.presentation.message.view.botuikit;

import com.discord.chat.bridge.botuikit.a;
import com.discord.jank_stats.JankRecordStore;
import k0.d;
import kotlin.Metadata;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u0000 \n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\u000e\n\u0000\n\u0002\u0010\u000b\n\u0002\b\u0018\n\u0002\u0010\b\n\u0002\b\u0002\b\u0086\b\u0018\u00002\u00020\u0001B9\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005\u0012\u0006\u0010\u0006\u001a\u00020\u0005\u0012\b\b\u0002\u0010\u0007\u001a\u00020\u0005\u0012\u0006\u0010\b\u001a\u00020\u0005\u0012\u0006\u0010\t\u001a\u00020\u0005¢\u0006\u0004\b\n\u0010\u000bJ\t\u0010\u0014\u001a\u00020\u0003HÆ\u0003J\t\u0010\u0015\u001a\u00020\u0005HÆ\u0003J\t\u0010\u0016\u001a\u00020\u0005HÆ\u0003J\t\u0010\u0017\u001a\u00020\u0005HÆ\u0003J\t\u0010\u0018\u001a\u00020\u0005HÆ\u0003J\t\u0010\u0019\u001a\u00020\u0005HÆ\u0003JE\u0010\u001a\u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u00032\b\b\u0002\u0010\u0004\u001a\u00020\u00052\b\b\u0002\u0010\u0006\u001a\u00020\u00052\b\b\u0002\u0010\u0007\u001a\u00020\u00052\b\b\u0002\u0010\b\u001a\u00020\u00052\b\b\u0002\u0010\t\u001a\u00020\u0005HÆ\u0001J\u0013\u0010\u001b\u001a\u00020\u00052\b\u0010\u001c\u001a\u0004\u0018\u00010\u0001HÖ\u0003J\t\u0010\u001d\u001a\u00020\u001eHÖ\u0001J\t\u0010\u001f\u001a\u00020\u0003HÖ\u0001R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\f\u0010\rR\u0011\u0010\u0004\u001a\u00020\u0005¢\u0006\b\n\u0000\u001a\u0004\b\u000e\u0010\u000fR\u0011\u0010\u0006\u001a\u00020\u0005¢\u0006\b\n\u0000\u001a\u0004\b\u0010\u0010\u000fR\u0011\u0010\u0007\u001a\u00020\u0005¢\u0006\b\n\u0000\u001a\u0004\b\u0011\u0010\u000fR\u0011\u0010\b\u001a\u00020\u0005¢\u0006\b\n\u0000\u001a\u0004\b\u0012\u0010\u000fR\u0011\u0010\t\u001a\u00020\u0005¢\u0006\b\n\u0000\u001a\u0004\b\u0013\u0010\u000f¨\u0006 "}, d2 = {"Lcom/discord/chat/presentation/message/view/botuikit/MarkdownTextRenderOptions;", "", "containerId", "", "shouldAnimateEmoji", "", "shouldShowLinkDecorations", "shouldForceRevealSpoilers", "shouldShowRoleDot", "shouldShowRoleOnName", "<init>", "(Ljava/lang/String;ZZZZZ)V", "getContainerId", "()Ljava/lang/String;", "getShouldAnimateEmoji", "()Z", "getShouldShowLinkDecorations", "getShouldForceRevealSpoilers", "getShouldShowRoleDot", "getShouldShowRoleOnName", "component1", "component2", "component3", "component4", "component5", "component6", "copy", "equals", JankRecordStore.SCREEN_OTHER, "hashCode", "", "toString", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final /* data */ class MarkdownTextRenderOptions {

    @NotNull
    private final String containerId;
    private final boolean shouldAnimateEmoji;
    private final boolean shouldForceRevealSpoilers;
    private final boolean shouldShowLinkDecorations;
    private final boolean shouldShowRoleDot;
    private final boolean shouldShowRoleOnName;

    public MarkdownTextRenderOptions(@NotNull String containerId, boolean z5, boolean z6, boolean z7, boolean z8, boolean z10) {
        Intrinsics.checkNotNullParameter(containerId, "containerId");
        this.containerId = containerId;
        this.shouldAnimateEmoji = z5;
        this.shouldShowLinkDecorations = z6;
        this.shouldForceRevealSpoilers = z7;
        this.shouldShowRoleDot = z8;
        this.shouldShowRoleOnName = z10;
    }

    public static /* synthetic */ MarkdownTextRenderOptions copy$default(MarkdownTextRenderOptions markdownTextRenderOptions, String str, boolean z5, boolean z6, boolean z7, boolean z8, boolean z10, int i5, Object obj) {
        if ((i5 & 1) != 0) {
            str = markdownTextRenderOptions.containerId;
        }
        if ((i5 & 2) != 0) {
            z5 = markdownTextRenderOptions.shouldAnimateEmoji;
        }
        if ((i5 & 4) != 0) {
            z6 = markdownTextRenderOptions.shouldShowLinkDecorations;
        }
        if ((i5 & 8) != 0) {
            z7 = markdownTextRenderOptions.shouldForceRevealSpoilers;
        }
        if ((i5 & 16) != 0) {
            z8 = markdownTextRenderOptions.shouldShowRoleDot;
        }
        if ((i5 & 32) != 0) {
            z10 = markdownTextRenderOptions.shouldShowRoleOnName;
        }
        boolean z11 = z8;
        boolean z12 = z10;
        return markdownTextRenderOptions.copy(str, z5, z6, z7, z11, z12);
    }

    @NotNull
    /* renamed from: component1, reason: from getter */
    public final String getContainerId() {
        return this.containerId;
    }

    /* renamed from: component2, reason: from getter */
    public final boolean getShouldAnimateEmoji() {
        return this.shouldAnimateEmoji;
    }

    /* renamed from: component3, reason: from getter */
    public final boolean getShouldShowLinkDecorations() {
        return this.shouldShowLinkDecorations;
    }

    /* renamed from: component4, reason: from getter */
    public final boolean getShouldForceRevealSpoilers() {
        return this.shouldForceRevealSpoilers;
    }

    /* renamed from: component5, reason: from getter */
    public final boolean getShouldShowRoleDot() {
        return this.shouldShowRoleDot;
    }

    /* renamed from: component6, reason: from getter */
    public final boolean getShouldShowRoleOnName() {
        return this.shouldShowRoleOnName;
    }

    @NotNull
    public final MarkdownTextRenderOptions copy(@NotNull String containerId, boolean shouldAnimateEmoji, boolean shouldShowLinkDecorations, boolean shouldForceRevealSpoilers, boolean shouldShowRoleDot, boolean shouldShowRoleOnName) {
        Intrinsics.checkNotNullParameter(containerId, "containerId");
        return new MarkdownTextRenderOptions(containerId, shouldAnimateEmoji, shouldShowLinkDecorations, shouldForceRevealSpoilers, shouldShowRoleDot, shouldShowRoleOnName);
    }

    public boolean equals(Object other) {
        if (this == other) {
            return true;
        }
        if (!(other instanceof MarkdownTextRenderOptions)) {
            return false;
        }
        MarkdownTextRenderOptions markdownTextRenderOptions = (MarkdownTextRenderOptions) other;
        return Intrinsics.areEqual(this.containerId, markdownTextRenderOptions.containerId) && this.shouldAnimateEmoji == markdownTextRenderOptions.shouldAnimateEmoji && this.shouldShowLinkDecorations == markdownTextRenderOptions.shouldShowLinkDecorations && this.shouldForceRevealSpoilers == markdownTextRenderOptions.shouldForceRevealSpoilers && this.shouldShowRoleDot == markdownTextRenderOptions.shouldShowRoleDot && this.shouldShowRoleOnName == markdownTextRenderOptions.shouldShowRoleOnName;
    }

    @NotNull
    public final String getContainerId() {
        return this.containerId;
    }

    public final boolean getShouldAnimateEmoji() {
        return this.shouldAnimateEmoji;
    }

    public final boolean getShouldForceRevealSpoilers() {
        return this.shouldForceRevealSpoilers;
    }

    public final boolean getShouldShowLinkDecorations() {
        return this.shouldShowLinkDecorations;
    }

    public final boolean getShouldShowRoleDot() {
        return this.shouldShowRoleDot;
    }

    public final boolean getShouldShowRoleOnName() {
        return this.shouldShowRoleOnName;
    }

    public int hashCode() {
        return Boolean.hashCode(this.shouldShowRoleOnName) + d.d(d.d(d.d(d.d(this.containerId.hashCode() * 31, 31, this.shouldAnimateEmoji), 31, this.shouldShowLinkDecorations), 31, this.shouldForceRevealSpoilers), 31, this.shouldShowRoleDot);
    }

    @NotNull
    public String toString() {
        String str = this.containerId;
        boolean z5 = this.shouldAnimateEmoji;
        boolean z6 = this.shouldShowLinkDecorations;
        boolean z7 = this.shouldForceRevealSpoilers;
        boolean z8 = this.shouldShowRoleDot;
        boolean z10 = this.shouldShowRoleOnName;
        StringBuilder sb2 = new StringBuilder("MarkdownTextRenderOptions(containerId=");
        sb2.append(str);
        sb2.append(", shouldAnimateEmoji=");
        sb2.append(z5);
        sb2.append(", shouldShowLinkDecorations=");
        a.s(sb2, z6, ", shouldForceRevealSpoilers=", z7, ", shouldShowRoleDot=");
        sb2.append(z8);
        sb2.append(", shouldShowRoleOnName=");
        sb2.append(z10);
        sb2.append(")");
        return sb2.toString();
    }

    public /* synthetic */ MarkdownTextRenderOptions(String str, boolean z5, boolean z6, boolean z7, boolean z8, boolean z10, int i5, DefaultConstructorMarker defaultConstructorMarker) {
        this(str, z5, z6, (i5 & 8) != 0 ? false : z7, z8, z10);
    }
}
