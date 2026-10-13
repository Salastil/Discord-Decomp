package com.discord.chat.reactevents;

import androidx.recyclerview.widget.RecyclerView;
import bs.h1;
import bs.x;
import com.discord.jank_stats.JankRecordStore;
import com.discord.reactevents.ReactEvent;
import com.facebook.react.bridge.WritableMap;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import k0.d;
import kotlin.Metadata;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import kotlinx.serialization.KSerializer;
import kotlinx.serialization.descriptors.SerialDescriptor;
import kotlinx.serialization.encoding.CompositeEncoder;
import kotlinx.serialization.internal.SerializationConstructorMarker;
import org.jetbrains.annotations.NotNull;
import xr.e;

@e
@Metadata(d1 = {"\u0000L\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000b\n\u0002\b\u0007\n\u0002\u0010\b\n\u0000\n\u0002\u0010\u0006\n\u0002\b\u0007\n\u0002\u0018\u0002\n\u0002\b\u001d\n\u0002\u0010\u0000\n\u0002\b\u0002\n\u0002\u0010\u000e\n\u0000\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0004\b\u0081\b\u0018\u0000 @2\u00020\u0001:\u0002?@Bk\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0003\u0012\u0006\u0010\u0005\u001a\u00020\u0003\u0012\u0006\u0010\u0006\u001a\u00020\u0003\u0012\u0006\u0010\u0007\u001a\u00020\u0003\u0012\u0006\u0010\b\u001a\u00020\u0003\u0012\u0006\u0010\t\u001a\u00020\u0003\u0012\u0006\u0010\n\u001a\u00020\u000b\u0012\b\u0010\f\u001a\u0004\u0018\u00010\r\u0012\u0006\u0010\u000e\u001a\u00020\u000b\u0012\b\u0010\u000f\u001a\u0004\u0018\u00010\r\u0012\u0006\u0010\u0010\u001a\u00020\u000b¢\u0006\u0004\b\u0011\u0010\u0012B\u007f\b\u0010\u0012\u0006\u0010\u0013\u001a\u00020\u000b\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0003\u0012\u0006\u0010\u0005\u001a\u00020\u0003\u0012\u0006\u0010\u0006\u001a\u00020\u0003\u0012\u0006\u0010\u0007\u001a\u00020\u0003\u0012\u0006\u0010\b\u001a\u00020\u0003\u0012\u0006\u0010\t\u001a\u00020\u0003\u0012\u0006\u0010\n\u001a\u00020\u000b\u0012\b\u0010\f\u001a\u0004\u0018\u00010\r\u0012\u0006\u0010\u000e\u001a\u00020\u000b\u0012\b\u0010\u000f\u001a\u0004\u0018\u00010\r\u0012\u0006\u0010\u0010\u001a\u00020\u000b\u0012\b\u0010\u0014\u001a\u0004\u0018\u00010\u0015¢\u0006\u0004\b\u0011\u0010\u0016J\t\u0010#\u001a\u00020\u0003HÆ\u0003J\t\u0010$\u001a\u00020\u0003HÆ\u0003J\t\u0010%\u001a\u00020\u0003HÆ\u0003J\t\u0010&\u001a\u00020\u0003HÆ\u0003J\t\u0010'\u001a\u00020\u0003HÆ\u0003J\t\u0010(\u001a\u00020\u0003HÆ\u0003J\t\u0010)\u001a\u00020\u0003HÆ\u0003J\t\u0010*\u001a\u00020\u000bHÆ\u0003J\u0010\u0010+\u001a\u0004\u0018\u00010\rHÆ\u0003¢\u0006\u0002\u0010\u001eJ\t\u0010,\u001a\u00020\u000bHÆ\u0003J\u0010\u0010-\u001a\u0004\u0018\u00010\rHÆ\u0003¢\u0006\u0002\u0010\u001eJ\t\u0010.\u001a\u00020\u000bHÆ\u0003J\u008a\u0001\u0010/\u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u00032\b\b\u0002\u0010\u0004\u001a\u00020\u00032\b\b\u0002\u0010\u0005\u001a\u00020\u00032\b\b\u0002\u0010\u0006\u001a\u00020\u00032\b\b\u0002\u0010\u0007\u001a\u00020\u00032\b\b\u0002\u0010\b\u001a\u00020\u00032\b\b\u0002\u0010\t\u001a\u00020\u00032\b\b\u0002\u0010\n\u001a\u00020\u000b2\n\b\u0002\u0010\f\u001a\u0004\u0018\u00010\r2\b\b\u0002\u0010\u000e\u001a\u00020\u000b2\n\b\u0002\u0010\u000f\u001a\u0004\u0018\u00010\r2\b\b\u0002\u0010\u0010\u001a\u00020\u000bHÆ\u0001¢\u0006\u0002\u00100J\u0013\u00101\u001a\u00020\u00032\b\u00102\u001a\u0004\u0018\u000103HÖ\u0003J\t\u00104\u001a\u00020\u000bHÖ\u0001J\t\u00105\u001a\u000206HÖ\u0001J%\u00107\u001a\u0002082\u0006\u00109\u001a\u00020\u00002\u0006\u0010:\u001a\u00020;2\u0006\u0010<\u001a\u00020=H\u0001¢\u0006\u0002\b>R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0002\u0010\u0017R\u0011\u0010\u0004\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0004\u0010\u0017R\u0011\u0010\u0005\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0005\u0010\u0017R\u0011\u0010\u0006\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0018\u0010\u0017R\u0011\u0010\u0007\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0019\u0010\u0017R\u0011\u0010\b\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u001a\u0010\u0017R\u0011\u0010\t\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\t\u0010\u0017R\u0011\u0010\n\u001a\u00020\u000b¢\u0006\b\n\u0000\u001a\u0004\b\u001b\u0010\u001cR\u0015\u0010\f\u001a\u0004\u0018\u00010\r¢\u0006\n\n\u0002\u0010\u001f\u001a\u0004\b\u001d\u0010\u001eR\u0011\u0010\u000e\u001a\u00020\u000b¢\u0006\b\n\u0000\u001a\u0004\b \u0010\u001cR\u0015\u0010\u000f\u001a\u0004\u0018\u00010\r¢\u0006\n\n\u0002\u0010\u001f\u001a\u0004\b!\u0010\u001eR\u0011\u0010\u0010\u001a\u00020\u000b¢\u0006\b\n\u0000\u001a\u0004\b\"\u0010\u001c¨\u0006A"}, d2 = {"Lcom/discord/chat/reactevents/ChatScrollPositionEvent;", "Lcom/discord/reactevents/ReactEvent;", "isAtBottom", "", "isNearBottom", "isNearTop", "dragging", "decelerating", "shouldShowJumpToPresent", "isFirstMessageVisible", "firstVisibleMessageIndex", "", "firstVisibleMessagePercentVisible", "", "lastVisibleMessageIndex", "lastVisibleMessagePercentVisible", "changesetUpdateId", "<init>", "(ZZZZZZZILjava/lang/Double;ILjava/lang/Double;I)V", "seen0", "serializationConstructorMarker", "Lkotlinx/serialization/internal/SerializationConstructorMarker;", "(IZZZZZZZILjava/lang/Double;ILjava/lang/Double;ILkotlinx/serialization/internal/SerializationConstructorMarker;)V", "()Z", "getDragging", "getDecelerating", "getShouldShowJumpToPresent", "getFirstVisibleMessageIndex", "()I", "getFirstVisibleMessagePercentVisible", "()Ljava/lang/Double;", "Ljava/lang/Double;", "getLastVisibleMessageIndex", "getLastVisibleMessagePercentVisible", "getChangesetUpdateId", "component1", "component2", "component3", "component4", "component5", "component6", "component7", "component8", "component9", "component10", "component11", "component12", "copy", "(ZZZZZZZILjava/lang/Double;ILjava/lang/Double;I)Lcom/discord/chat/reactevents/ChatScrollPositionEvent;", "equals", JankRecordStore.SCREEN_OTHER, "", "hashCode", "toString", "", "write$Self", "", "self", "output", "Lkotlinx/serialization/encoding/CompositeEncoder;", "serialDesc", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "write$Self$chat_release", "$serializer", "Companion", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final /* data */ class ChatScrollPositionEvent implements ReactEvent {

    /* renamed from: Companion, reason: from kotlin metadata */
    @NotNull
    public static final Companion INSTANCE = new Companion(null);
    private final int changesetUpdateId;
    private final boolean decelerating;
    private final boolean dragging;
    private final int firstVisibleMessageIndex;
    private final Double firstVisibleMessagePercentVisible;
    private final boolean isAtBottom;
    private final boolean isFirstMessageVisible;
    private final boolean isNearBottom;
    private final boolean isNearTop;
    private final int lastVisibleMessageIndex;
    private final Double lastVisibleMessagePercentVisible;
    private final boolean shouldShowJumpToPresent;

    @Metadata(d1 = {"\u0000\u0016\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\f\u0010\u0004\u001a\b\u0012\u0004\u0012\u00020\u00060\u0005¨\u0006\u0007"}, d2 = {"Lcom/discord/chat/reactevents/ChatScrollPositionEvent$Companion;", "", "<init>", "()V", "serializer", "Lkotlinx/serialization/KSerializer;", "Lcom/discord/chat/reactevents/ChatScrollPositionEvent;", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final class Companion {
        private Companion() {
        }

        @NotNull
        public final KSerializer serializer() {
            return ChatScrollPositionEvent$$serializer.INSTANCE;
        }

        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }
    }

    public /* synthetic */ ChatScrollPositionEvent(int i5, boolean z5, boolean z6, boolean z7, boolean z8, boolean z10, boolean z11, boolean z12, int i6, Double d6, int i10, Double d7, int i11, SerializationConstructorMarker serializationConstructorMarker) {
        if (4095 != (i5 & 4095)) {
            h1.l(i5, 4095, ChatScrollPositionEvent$$serializer.INSTANCE.getDescriptor());
            throw null;
        }
        this.isAtBottom = z5;
        this.isNearBottom = z6;
        this.isNearTop = z7;
        this.dragging = z8;
        this.decelerating = z10;
        this.shouldShowJumpToPresent = z11;
        this.isFirstMessageVisible = z12;
        this.firstVisibleMessageIndex = i6;
        this.firstVisibleMessagePercentVisible = d6;
        this.lastVisibleMessageIndex = i10;
        this.lastVisibleMessagePercentVisible = d7;
        this.changesetUpdateId = i11;
    }

    public static /* synthetic */ ChatScrollPositionEvent copy$default(ChatScrollPositionEvent chatScrollPositionEvent, boolean z5, boolean z6, boolean z7, boolean z8, boolean z10, boolean z11, boolean z12, int i5, Double d6, int i6, Double d7, int i10, int i11, Object obj) {
        if ((i11 & 1) != 0) {
            z5 = chatScrollPositionEvent.isAtBottom;
        }
        if ((i11 & 2) != 0) {
            z6 = chatScrollPositionEvent.isNearBottom;
        }
        if ((i11 & 4) != 0) {
            z7 = chatScrollPositionEvent.isNearTop;
        }
        if ((i11 & 8) != 0) {
            z8 = chatScrollPositionEvent.dragging;
        }
        if ((i11 & 16) != 0) {
            z10 = chatScrollPositionEvent.decelerating;
        }
        if ((i11 & 32) != 0) {
            z11 = chatScrollPositionEvent.shouldShowJumpToPresent;
        }
        if ((i11 & 64) != 0) {
            z12 = chatScrollPositionEvent.isFirstMessageVisible;
        }
        if ((i11 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT) != 0) {
            i5 = chatScrollPositionEvent.firstVisibleMessageIndex;
        }
        if ((i11 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER) != 0) {
            d6 = chatScrollPositionEvent.firstVisibleMessagePercentVisible;
        }
        if ((i11 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING) != 0) {
            i6 = chatScrollPositionEvent.lastVisibleMessageIndex;
        }
        if ((i11 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_OVERFLOW_INSET) != 0) {
            d7 = chatScrollPositionEvent.lastVisibleMessagePercentVisible;
        }
        if ((i11 & RecyclerView.ItemAnimator.FLAG_MOVED) != 0) {
            i10 = chatScrollPositionEvent.changesetUpdateId;
        }
        Double d8 = d7;
        int i12 = i10;
        Double d10 = d6;
        int i13 = i6;
        boolean z13 = z12;
        int i14 = i5;
        boolean z14 = z10;
        boolean z15 = z11;
        return chatScrollPositionEvent.copy(z5, z6, z7, z8, z14, z15, z13, i14, d10, i13, d8, i12);
    }

    public static final /* synthetic */ void write$Self$chat_release(ChatScrollPositionEvent self, CompositeEncoder output, SerialDescriptor serialDesc) {
        output.x(serialDesc, 0, self.isAtBottom);
        output.x(serialDesc, 1, self.isNearBottom);
        output.x(serialDesc, 2, self.isNearTop);
        output.x(serialDesc, 3, self.dragging);
        output.x(serialDesc, 4, self.decelerating);
        output.x(serialDesc, 5, self.shouldShowJumpToPresent);
        output.x(serialDesc, 6, self.isFirstMessageVisible);
        output.n(7, self.firstVisibleMessageIndex, serialDesc);
        x xVar = x.a;
        output.z(serialDesc, 8, xVar, self.firstVisibleMessagePercentVisible);
        output.n(9, self.lastVisibleMessageIndex, serialDesc);
        output.z(serialDesc, 10, xVar, self.lastVisibleMessagePercentVisible);
        output.n(11, self.changesetUpdateId, serialDesc);
    }

    /* renamed from: component1, reason: from getter */
    public final boolean getIsAtBottom() {
        return this.isAtBottom;
    }

    /* renamed from: component10, reason: from getter */
    public final int getLastVisibleMessageIndex() {
        return this.lastVisibleMessageIndex;
    }

    /* renamed from: component11, reason: from getter */
    public final Double getLastVisibleMessagePercentVisible() {
        return this.lastVisibleMessagePercentVisible;
    }

    /* renamed from: component12, reason: from getter */
    public final int getChangesetUpdateId() {
        return this.changesetUpdateId;
    }

    /* renamed from: component2, reason: from getter */
    public final boolean getIsNearBottom() {
        return this.isNearBottom;
    }

    /* renamed from: component3, reason: from getter */
    public final boolean getIsNearTop() {
        return this.isNearTop;
    }

    /* renamed from: component4, reason: from getter */
    public final boolean getDragging() {
        return this.dragging;
    }

    /* renamed from: component5, reason: from getter */
    public final boolean getDecelerating() {
        return this.decelerating;
    }

    /* renamed from: component6, reason: from getter */
    public final boolean getShouldShowJumpToPresent() {
        return this.shouldShowJumpToPresent;
    }

    /* renamed from: component7, reason: from getter */
    public final boolean getIsFirstMessageVisible() {
        return this.isFirstMessageVisible;
    }

    /* renamed from: component8, reason: from getter */
    public final int getFirstVisibleMessageIndex() {
        return this.firstVisibleMessageIndex;
    }

    /* renamed from: component9, reason: from getter */
    public final Double getFirstVisibleMessagePercentVisible() {
        return this.firstVisibleMessagePercentVisible;
    }

    @NotNull
    public final ChatScrollPositionEvent copy(boolean isAtBottom, boolean isNearBottom, boolean isNearTop, boolean dragging, boolean decelerating, boolean shouldShowJumpToPresent, boolean isFirstMessageVisible, int firstVisibleMessageIndex, Double firstVisibleMessagePercentVisible, int lastVisibleMessageIndex, Double lastVisibleMessagePercentVisible, int changesetUpdateId) {
        return new ChatScrollPositionEvent(isAtBottom, isNearBottom, isNearTop, dragging, decelerating, shouldShowJumpToPresent, isFirstMessageVisible, firstVisibleMessageIndex, firstVisibleMessagePercentVisible, lastVisibleMessageIndex, lastVisibleMessagePercentVisible, changesetUpdateId);
    }

    public boolean equals(Object other) {
        if (this == other) {
            return true;
        }
        if (!(other instanceof ChatScrollPositionEvent)) {
            return false;
        }
        ChatScrollPositionEvent chatScrollPositionEvent = (ChatScrollPositionEvent) other;
        return this.isAtBottom == chatScrollPositionEvent.isAtBottom && this.isNearBottom == chatScrollPositionEvent.isNearBottom && this.isNearTop == chatScrollPositionEvent.isNearTop && this.dragging == chatScrollPositionEvent.dragging && this.decelerating == chatScrollPositionEvent.decelerating && this.shouldShowJumpToPresent == chatScrollPositionEvent.shouldShowJumpToPresent && this.isFirstMessageVisible == chatScrollPositionEvent.isFirstMessageVisible && this.firstVisibleMessageIndex == chatScrollPositionEvent.firstVisibleMessageIndex && Intrinsics.areEqual((Object) this.firstVisibleMessagePercentVisible, (Object) chatScrollPositionEvent.firstVisibleMessagePercentVisible) && this.lastVisibleMessageIndex == chatScrollPositionEvent.lastVisibleMessageIndex && Intrinsics.areEqual((Object) this.lastVisibleMessagePercentVisible, (Object) chatScrollPositionEvent.lastVisibleMessagePercentVisible) && this.changesetUpdateId == chatScrollPositionEvent.changesetUpdateId;
    }

    public final int getChangesetUpdateId() {
        return this.changesetUpdateId;
    }

    public final boolean getDecelerating() {
        return this.decelerating;
    }

    public final boolean getDragging() {
        return this.dragging;
    }

    public final int getFirstVisibleMessageIndex() {
        return this.firstVisibleMessageIndex;
    }

    public final Double getFirstVisibleMessagePercentVisible() {
        return this.firstVisibleMessagePercentVisible;
    }

    public final int getLastVisibleMessageIndex() {
        return this.lastVisibleMessageIndex;
    }

    public final Double getLastVisibleMessagePercentVisible() {
        return this.lastVisibleMessagePercentVisible;
    }

    public final boolean getShouldShowJumpToPresent() {
        return this.shouldShowJumpToPresent;
    }

    public int hashCode() {
        int u5 = com.discord.chat.bridge.botuikit.a.u(this.firstVisibleMessageIndex, d.d(d.d(d.d(d.d(d.d(d.d(Boolean.hashCode(this.isAtBottom) * 31, 31, this.isNearBottom), 31, this.isNearTop), 31, this.dragging), 31, this.decelerating), 31, this.shouldShowJumpToPresent), 31, this.isFirstMessageVisible), 31);
        Double d6 = this.firstVisibleMessagePercentVisible;
        int u6 = com.discord.chat.bridge.botuikit.a.u(this.lastVisibleMessageIndex, (u5 + (d6 == null ? 0 : d6.hashCode())) * 31, 31);
        Double d7 = this.lastVisibleMessagePercentVisible;
        return Integer.hashCode(this.changesetUpdateId) + ((u6 + (d7 != null ? d7.hashCode() : 0)) * 31);
    }

    public final boolean isAtBottom() {
        return this.isAtBottom;
    }

    public final boolean isFirstMessageVisible() {
        return this.isFirstMessageVisible;
    }

    public final boolean isNearBottom() {
        return this.isNearBottom;
    }

    public final boolean isNearTop() {
        return this.isNearTop;
    }

    @Override // com.discord.reactevents.ReactEvent
    @NotNull
    /* renamed from: serialize */
    public WritableMap getData() {
        return ReactEvent.DefaultImpls.serialize(this);
    }

    @NotNull
    public String toString() {
        boolean z5 = this.isAtBottom;
        boolean z6 = this.isNearBottom;
        boolean z7 = this.isNearTop;
        boolean z8 = this.dragging;
        boolean z10 = this.decelerating;
        boolean z11 = this.shouldShowJumpToPresent;
        boolean z12 = this.isFirstMessageVisible;
        int i5 = this.firstVisibleMessageIndex;
        Double d6 = this.firstVisibleMessagePercentVisible;
        int i6 = this.lastVisibleMessageIndex;
        Double d7 = this.lastVisibleMessagePercentVisible;
        int i10 = this.changesetUpdateId;
        StringBuilder sb2 = new StringBuilder("ChatScrollPositionEvent(isAtBottom=");
        sb2.append(z5);
        sb2.append(", isNearBottom=");
        sb2.append(z6);
        sb2.append(", isNearTop=");
        com.discord.chat.bridge.botuikit.a.s(sb2, z7, ", dragging=", z8, ", decelerating=");
        com.discord.chat.bridge.botuikit.a.s(sb2, z10, ", shouldShowJumpToPresent=", z11, ", isFirstMessageVisible=");
        sb2.append(z12);
        sb2.append(", firstVisibleMessageIndex=");
        sb2.append(i5);
        sb2.append(", firstVisibleMessagePercentVisible=");
        sb2.append(d6);
        sb2.append(", lastVisibleMessageIndex=");
        sb2.append(i6);
        sb2.append(", lastVisibleMessagePercentVisible=");
        sb2.append(d7);
        sb2.append(", changesetUpdateId=");
        sb2.append(i10);
        sb2.append(")");
        return sb2.toString();
    }

    public ChatScrollPositionEvent(boolean z5, boolean z6, boolean z7, boolean z8, boolean z10, boolean z11, boolean z12, int i5, Double d6, int i6, Double d7, int i10) {
        this.isAtBottom = z5;
        this.isNearBottom = z6;
        this.isNearTop = z7;
        this.dragging = z8;
        this.decelerating = z10;
        this.shouldShowJumpToPresent = z11;
        this.isFirstMessageVisible = z12;
        this.firstVisibleMessageIndex = i5;
        this.firstVisibleMessagePercentVisible = d6;
        this.lastVisibleMessageIndex = i6;
        this.lastVisibleMessagePercentVisible = d7;
        this.changesetUpdateId = i10;
    }
}
