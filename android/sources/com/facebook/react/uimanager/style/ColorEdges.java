package com.facebook.react.uimanager.style;

import a3.e;
import com.discord.chat.bridge.botuikit.a;
import com.discord.jank_stats.JankRecordStore;
import com.facebook.react.uimanager.ViewProps;
import kotlin.Metadata;
import kotlin.jvm.internal.DefaultConstructorMarker;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u0000 \n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\b\n\u0002\b\u0010\n\u0002\u0010\u000b\n\u0002\b\u0003\n\u0002\u0010\u000e\n\u0000\b\u0080\b\u0018\u00002\u00020\u0001B/\u0012\b\b\u0003\u0010\u0002\u001a\u00020\u0003\u0012\b\b\u0003\u0010\u0004\u001a\u00020\u0003\u0012\b\b\u0003\u0010\u0005\u001a\u00020\u0003\u0012\b\b\u0003\u0010\u0006\u001a\u00020\u0003¢\u0006\u0004\b\u0007\u0010\bJ\t\u0010\u000e\u001a\u00020\u0003HÆ\u0003J\t\u0010\u000f\u001a\u00020\u0003HÆ\u0003J\t\u0010\u0010\u001a\u00020\u0003HÆ\u0003J\t\u0010\u0011\u001a\u00020\u0003HÆ\u0003J1\u0010\u0012\u001a\u00020\u00002\b\b\u0003\u0010\u0002\u001a\u00020\u00032\b\b\u0003\u0010\u0004\u001a\u00020\u00032\b\b\u0003\u0010\u0005\u001a\u00020\u00032\b\b\u0003\u0010\u0006\u001a\u00020\u0003HÆ\u0001J\u0013\u0010\u0013\u001a\u00020\u00142\b\u0010\u0015\u001a\u0004\u0018\u00010\u0001HÖ\u0003J\t\u0010\u0016\u001a\u00020\u0003HÖ\u0001J\t\u0010\u0017\u001a\u00020\u0018HÖ\u0001R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\t\u0010\nR\u0011\u0010\u0004\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u000b\u0010\nR\u0011\u0010\u0005\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\f\u0010\nR\u0011\u0010\u0006\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\r\u0010\n¨\u0006\u0019"}, d2 = {"Lcom/facebook/react/uimanager/style/ColorEdges;", "", ViewProps.LEFT, "", ViewProps.TOP, ViewProps.RIGHT, ViewProps.BOTTOM, "<init>", "(IIII)V", "getLeft", "()I", "getTop", "getRight", "getBottom", "component1", "component2", "component3", "component4", "copy", "equals", "", JankRecordStore.SCREEN_OTHER, "hashCode", "toString", "", "ReactAndroid_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes3.dex */
public final /* data */ class ColorEdges {
    private final int bottom;
    private final int left;
    private final int right;
    private final int top;

    public ColorEdges() {
        this(0, 0, 0, 0, 15, null);
    }

    public static /* synthetic */ ColorEdges copy$default(ColorEdges colorEdges, int i5, int i6, int i10, int i11, int i12, Object obj) {
        if ((i12 & 1) != 0) {
            i5 = colorEdges.left;
        }
        if ((i12 & 2) != 0) {
            i6 = colorEdges.top;
        }
        if ((i12 & 4) != 0) {
            i10 = colorEdges.right;
        }
        if ((i12 & 8) != 0) {
            i11 = colorEdges.bottom;
        }
        return colorEdges.copy(i5, i6, i10, i11);
    }

    /* renamed from: component1, reason: from getter */
    public final int getLeft() {
        return this.left;
    }

    /* renamed from: component2, reason: from getter */
    public final int getTop() {
        return this.top;
    }

    /* renamed from: component3, reason: from getter */
    public final int getRight() {
        return this.right;
    }

    /* renamed from: component4, reason: from getter */
    public final int getBottom() {
        return this.bottom;
    }

    @NotNull
    public final ColorEdges copy(int left, int top, int right, int bottom) {
        return new ColorEdges(left, top, right, bottom);
    }

    public boolean equals(Object other) {
        if (this == other) {
            return true;
        }
        if (!(other instanceof ColorEdges)) {
            return false;
        }
        ColorEdges colorEdges = (ColorEdges) other;
        return this.left == colorEdges.left && this.top == colorEdges.top && this.right == colorEdges.right && this.bottom == colorEdges.bottom;
    }

    public final int getBottom() {
        return this.bottom;
    }

    public final int getLeft() {
        return this.left;
    }

    public final int getRight() {
        return this.right;
    }

    public final int getTop() {
        return this.top;
    }

    public int hashCode() {
        return Integer.hashCode(this.bottom) + a.u(this.right, a.u(this.top, Integer.hashCode(this.left) * 31, 31), 31);
    }

    @NotNull
    public String toString() {
        int i5 = this.left;
        int i6 = this.top;
        int i10 = this.right;
        int i11 = this.bottom;
        StringBuilder q5 = e.q(i5, "ColorEdges(left=", i6, ", top=", ", right=");
        q5.append(i10);
        q5.append(", bottom=");
        q5.append(i11);
        q5.append(")");
        return q5.toString();
    }

    public ColorEdges(int i5, int i6, int i10, int i11) {
        this.left = i5;
        this.top = i6;
        this.right = i10;
        this.bottom = i11;
    }

    public /* synthetic */ ColorEdges(int i5, int i6, int i10, int i11, int i12, DefaultConstructorMarker defaultConstructorMarker) {
        this((i12 & 1) != 0 ? -16777216 : i5, (i12 & 2) != 0 ? -16777216 : i6, (i12 & 4) != 0 ? -16777216 : i10, (i12 & 8) != 0 ? -16777216 : i11);
    }
}
