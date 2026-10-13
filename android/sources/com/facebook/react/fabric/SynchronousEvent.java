package com.facebook.react.fabric;

import com.discord.jank_stats.JankRecordStore;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u0000\"\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\b\n\u0002\b\u0002\n\u0002\u0010\u000e\n\u0002\b\f\n\u0002\u0010\u000b\n\u0002\b\u0004\b\u0080\b\u0018\u00002\u00020\u0001B\u001f\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0003\u0012\u0006\u0010\u0005\u001a\u00020\u0006¢\u0006\u0004\b\u0007\u0010\bJ\t\u0010\u000e\u001a\u00020\u0003HÆ\u0003J\t\u0010\u000f\u001a\u00020\u0003HÆ\u0003J\t\u0010\u0010\u001a\u00020\u0006HÆ\u0003J'\u0010\u0011\u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u00032\b\b\u0002\u0010\u0004\u001a\u00020\u00032\b\b\u0002\u0010\u0005\u001a\u00020\u0006HÆ\u0001J\u0013\u0010\u0012\u001a\u00020\u00132\b\u0010\u0014\u001a\u0004\u0018\u00010\u0001HÖ\u0003J\t\u0010\u0015\u001a\u00020\u0003HÖ\u0001J\t\u0010\u0016\u001a\u00020\u0006HÖ\u0001R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\t\u0010\nR\u0011\u0010\u0004\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u000b\u0010\nR\u0011\u0010\u0005\u001a\u00020\u0006¢\u0006\b\n\u0000\u001a\u0004\b\f\u0010\r¨\u0006\u0017"}, d2 = {"Lcom/facebook/react/fabric/SynchronousEvent;", "", "surfaceId", "", "viewTag", "eventName", "", "<init>", "(IILjava/lang/String;)V", "getSurfaceId", "()I", "getViewTag", "getEventName", "()Ljava/lang/String;", "component1", "component2", "component3", "copy", "equals", "", JankRecordStore.SCREEN_OTHER, "hashCode", "toString", "ReactAndroid_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes3.dex */
public final /* data */ class SynchronousEvent {

    @NotNull
    private final String eventName;
    private final int surfaceId;
    private final int viewTag;

    public SynchronousEvent(int i5, int i6, @NotNull String eventName) {
        Intrinsics.checkNotNullParameter(eventName, "eventName");
        this.surfaceId = i5;
        this.viewTag = i6;
        this.eventName = eventName;
    }

    public static /* synthetic */ SynchronousEvent copy$default(SynchronousEvent synchronousEvent, int i5, int i6, String str, int i10, Object obj) {
        if ((i10 & 1) != 0) {
            i5 = synchronousEvent.surfaceId;
        }
        if ((i10 & 2) != 0) {
            i6 = synchronousEvent.viewTag;
        }
        if ((i10 & 4) != 0) {
            str = synchronousEvent.eventName;
        }
        return synchronousEvent.copy(i5, i6, str);
    }

    /* renamed from: component1, reason: from getter */
    public final int getSurfaceId() {
        return this.surfaceId;
    }

    /* renamed from: component2, reason: from getter */
    public final int getViewTag() {
        return this.viewTag;
    }

    @NotNull
    /* renamed from: component3, reason: from getter */
    public final String getEventName() {
        return this.eventName;
    }

    @NotNull
    public final SynchronousEvent copy(int surfaceId, int viewTag, @NotNull String eventName) {
        Intrinsics.checkNotNullParameter(eventName, "eventName");
        return new SynchronousEvent(surfaceId, viewTag, eventName);
    }

    public boolean equals(Object other) {
        if (this == other) {
            return true;
        }
        if (!(other instanceof SynchronousEvent)) {
            return false;
        }
        SynchronousEvent synchronousEvent = (SynchronousEvent) other;
        return this.surfaceId == synchronousEvent.surfaceId && this.viewTag == synchronousEvent.viewTag && Intrinsics.areEqual(this.eventName, synchronousEvent.eventName);
    }

    @NotNull
    public final String getEventName() {
        return this.eventName;
    }

    public final int getSurfaceId() {
        return this.surfaceId;
    }

    public final int getViewTag() {
        return this.viewTag;
    }

    public int hashCode() {
        return this.eventName.hashCode() + com.discord.chat.bridge.botuikit.a.u(this.viewTag, Integer.hashCode(this.surfaceId) * 31, 31);
    }

    @NotNull
    public String toString() {
        int i5 = this.surfaceId;
        int i6 = this.viewTag;
        return com.discord.chat.bridge.botuikit.a.j(a3.e.q(i5, "SynchronousEvent(surfaceId=", i6, ", viewTag=", ", eventName="), this.eventName, ")");
    }
}
