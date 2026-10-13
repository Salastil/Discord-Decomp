package com.discord.chat.presentation.message.view.botuikit;

import a3.e;
import com.discord.chat.bridge.botuikit.a;
import com.discord.jank_stats.JankRecordStore;
import com.discord.media.utils.DiscordVideoMediaSource;
import com.discord.misc.utilities.size.SizeUtilsKt;
import k0.d;
import kotlin.Metadata;
import kotlin.jvm.internal.DefaultConstructorMarker;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u0000 \n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\b\n\u0002\b\u000b\n\u0002\u0010\u000b\n\u0002\b\u000e\n\u0002\u0010\u000e\n\u0000\b\u0086\b\u0018\u00002\u00020\u0001B!\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0003\u0012\b\b\u0002\u0010\u0005\u001a\u00020\u0003¢\u0006\u0004\b\u0006\u0010\u0007J\t\u0010\u0015\u001a\u00020\u0003HÆ\u0003J\t\u0010\u0016\u001a\u00020\u0003HÆ\u0003J\u000e\u0010\u0017\u001a\u00020\u0003HÀ\u0003¢\u0006\u0002\b\u0018J'\u0010\u0019\u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u00032\b\b\u0002\u0010\u0004\u001a\u00020\u00032\b\b\u0002\u0010\u0005\u001a\u00020\u0003HÆ\u0001J\u0013\u0010\u001a\u001a\u00020\u000f2\b\u0010\u001b\u001a\u0004\u0018\u00010\u0001HÖ\u0003J\t\u0010\u001c\u001a\u00020\u0003HÖ\u0001J\t\u0010\u001d\u001a\u00020\u001eHÖ\u0001R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\b\u0010\tR\u0011\u0010\u0004\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\n\u0010\tR\u0014\u0010\u0005\u001a\u00020\u0003X\u0080\u0004¢\u0006\b\n\u0000\u001a\u0004\b\u000b\u0010\tR\u0011\u0010\f\u001a\u00020\u00038F¢\u0006\u0006\u001a\u0004\b\r\u0010\tR\u0011\u0010\u000e\u001a\u00020\u000f8F¢\u0006\u0006\u001a\u0004\b\u000e\u0010\u0010R\u0011\u0010\u0011\u001a\u00020\u000f8F¢\u0006\u0006\u001a\u0004\b\u0012\u0010\u0010R\u0014\u0010\u0013\u001a\u00020\u00038BX\u0082\u0004¢\u0006\u0006\u001a\u0004\b\u0014\u0010\t¨\u0006\u001f"}, d2 = {"Lcom/discord/chat/presentation/message/view/botuikit/WidthInfo;", "", "topLevelAvailableWidth", "", "topLevelMaxWidth", "widthReductions", "<init>", "(III)V", "getTopLevelAvailableWidth", "()I", "getTopLevelMaxWidth", "getWidthReductions$chat_release", "availableWidth", "getAvailableWidth", "isLargeWidthRenderingMode", "", "()Z", "shouldRestrictTopLevelWidth", "getShouldRestrictTopLevelWidth", "topLevelWidth", "getTopLevelWidth", "component1", "component2", "component3", "component3$chat_release", "copy", "equals", JankRecordStore.SCREEN_OTHER, "hashCode", "toString", "", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final /* data */ class WidthInfo {
    private final int topLevelAvailableWidth;
    private final int topLevelMaxWidth;
    private final int widthReductions;

    public WidthInfo(int i5, int i6, int i10) {
        this.topLevelAvailableWidth = i5;
        this.topLevelMaxWidth = i6;
        this.widthReductions = i10;
    }

    public static /* synthetic */ WidthInfo copy$default(WidthInfo widthInfo, int i5, int i6, int i10, int i11, Object obj) {
        if ((i11 & 1) != 0) {
            i5 = widthInfo.topLevelAvailableWidth;
        }
        if ((i11 & 2) != 0) {
            i6 = widthInfo.topLevelMaxWidth;
        }
        if ((i11 & 4) != 0) {
            i10 = widthInfo.widthReductions;
        }
        return widthInfo.copy(i5, i6, i10);
    }

    private final int getTopLevelWidth() {
        return Math.min(this.topLevelAvailableWidth, this.topLevelMaxWidth);
    }

    /* renamed from: component1, reason: from getter */
    public final int getTopLevelAvailableWidth() {
        return this.topLevelAvailableWidth;
    }

    /* renamed from: component2, reason: from getter */
    public final int getTopLevelMaxWidth() {
        return this.topLevelMaxWidth;
    }

    /* renamed from: component3$chat_release, reason: from getter */
    public final int getWidthReductions() {
        return this.widthReductions;
    }

    @NotNull
    public final WidthInfo copy(int topLevelAvailableWidth, int topLevelMaxWidth, int widthReductions) {
        return new WidthInfo(topLevelAvailableWidth, topLevelMaxWidth, widthReductions);
    }

    public boolean equals(Object other) {
        if (this == other) {
            return true;
        }
        if (!(other instanceof WidthInfo)) {
            return false;
        }
        WidthInfo widthInfo = (WidthInfo) other;
        return this.topLevelAvailableWidth == widthInfo.topLevelAvailableWidth && this.topLevelMaxWidth == widthInfo.topLevelMaxWidth && this.widthReductions == widthInfo.widthReductions;
    }

    public final int getAvailableWidth() {
        return getTopLevelWidth() - this.widthReductions;
    }

    public final boolean getShouldRestrictTopLevelWidth() {
        return this.topLevelAvailableWidth > this.topLevelMaxWidth;
    }

    public final int getTopLevelAvailableWidth() {
        return this.topLevelAvailableWidth;
    }

    public final int getTopLevelMaxWidth() {
        return this.topLevelMaxWidth;
    }

    public final int getWidthReductions$chat_release() {
        return this.widthReductions;
    }

    public int hashCode() {
        return Integer.hashCode(this.widthReductions) + a.u(this.topLevelMaxWidth, Integer.hashCode(this.topLevelAvailableWidth) * 31, 31);
    }

    public final boolean isLargeWidthRenderingMode() {
        return getTopLevelWidth() > SizeUtilsKt.getDpToPx(DiscordVideoMediaSource.DEFAULT_HEIGHT) && getAvailableWidth() >= SizeUtilsKt.getDpToPx(440);
    }

    @NotNull
    public String toString() {
        int i5 = this.topLevelAvailableWidth;
        int i6 = this.topLevelMaxWidth;
        return d.m(e.q(i5, "WidthInfo(topLevelAvailableWidth=", i6, ", topLevelMaxWidth=", ", widthReductions="), this.widthReductions, ")");
    }

    public /* synthetic */ WidthInfo(int i5, int i6, int i10, int i11, DefaultConstructorMarker defaultConstructorMarker) {
        this(i5, i6, (i11 & 4) != 0 ? 0 : i10);
    }
}
