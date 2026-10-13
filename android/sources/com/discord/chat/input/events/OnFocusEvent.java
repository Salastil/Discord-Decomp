package com.discord.chat.input.events;

import bs.h1;
import com.discord.chat.bridge.botuikit.a;
import com.discord.jank_stats.JankRecordStore;
import com.discord.reactevents.ReactEvent;
import com.facebook.react.bridge.WritableMap;
import com.facebook.react.uimanager.ViewProps;
import k0.d;
import kotlin.Metadata;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlinx.serialization.KSerializer;
import kotlinx.serialization.descriptors.SerialDescriptor;
import kotlinx.serialization.encoding.CompositeEncoder;
import kotlinx.serialization.internal.SerializationConstructorMarker;
import org.jetbrains.annotations.NotNull;
import xr.e;

@e
@Metadata(d1 = {"\u0000D\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\b\n\u0002\b\u0006\n\u0002\u0018\u0002\n\u0002\b\n\n\u0002\u0010\u000b\n\u0000\n\u0002\u0010\u0000\n\u0002\b\u0002\n\u0002\u0010\u000e\n\u0000\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0004\b\u0081\b\u0018\u0000 $2\u00020\u0001:\u0002#$B!\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0003\u0012\b\b\u0002\u0010\u0005\u001a\u00020\u0003¢\u0006\u0004\b\u0006\u0010\u0007B3\b\u0010\u0012\u0006\u0010\b\u001a\u00020\u0003\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0003\u0012\u0006\u0010\u0005\u001a\u00020\u0003\u0012\b\u0010\t\u001a\u0004\u0018\u00010\n¢\u0006\u0004\b\u0006\u0010\u000bJ\t\u0010\u0010\u001a\u00020\u0003HÆ\u0003J\t\u0010\u0011\u001a\u00020\u0003HÆ\u0003J\t\u0010\u0012\u001a\u00020\u0003HÆ\u0003J'\u0010\u0013\u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u00032\b\b\u0002\u0010\u0004\u001a\u00020\u00032\b\b\u0002\u0010\u0005\u001a\u00020\u0003HÆ\u0001J\u0013\u0010\u0014\u001a\u00020\u00152\b\u0010\u0016\u001a\u0004\u0018\u00010\u0017HÖ\u0003J\t\u0010\u0018\u001a\u00020\u0003HÖ\u0001J\t\u0010\u0019\u001a\u00020\u001aHÖ\u0001J%\u0010\u001b\u001a\u00020\u001c2\u0006\u0010\u001d\u001a\u00020\u00002\u0006\u0010\u001e\u001a\u00020\u001f2\u0006\u0010 \u001a\u00020!H\u0001¢\u0006\u0002\b\"R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\f\u0010\rR\u0011\u0010\u0004\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u000e\u0010\rR\u0011\u0010\u0005\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u000f\u0010\r¨\u0006%"}, d2 = {"Lcom/discord/chat/input/events/OnFocusEvent;", "Lcom/discord/reactevents/ReactEvent;", ViewProps.START, "", ViewProps.END, "target", "<init>", "(III)V", "seen0", "serializationConstructorMarker", "Lkotlinx/serialization/internal/SerializationConstructorMarker;", "(IIIILkotlinx/serialization/internal/SerializationConstructorMarker;)V", "getStart", "()I", "getEnd", "getTarget", "component1", "component2", "component3", "copy", "equals", "", JankRecordStore.SCREEN_OTHER, "", "hashCode", "toString", "", "write$Self", "", "self", "output", "Lkotlinx/serialization/encoding/CompositeEncoder;", "serialDesc", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "write$Self$chat_input_release", "$serializer", "Companion", "chat_input_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final /* data */ class OnFocusEvent implements ReactEvent {

    /* renamed from: Companion, reason: from kotlin metadata */
    @NotNull
    public static final Companion INSTANCE = new Companion(null);
    private final int end;
    private final int start;
    private final int target;

    @Metadata(d1 = {"\u0000\u0016\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\f\u0010\u0004\u001a\b\u0012\u0004\u0012\u00020\u00060\u0005¨\u0006\u0007"}, d2 = {"Lcom/discord/chat/input/events/OnFocusEvent$Companion;", "", "<init>", "()V", "serializer", "Lkotlinx/serialization/KSerializer;", "Lcom/discord/chat/input/events/OnFocusEvent;", "chat_input_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final class Companion {
        private Companion() {
        }

        @NotNull
        public final KSerializer serializer() {
            return OnFocusEvent$$serializer.INSTANCE;
        }

        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }
    }

    public /* synthetic */ OnFocusEvent(int i5, int i6, int i10, int i11, SerializationConstructorMarker serializationConstructorMarker) {
        if (3 != (i5 & 3)) {
            h1.l(i5, 3, OnFocusEvent$$serializer.INSTANCE.getDescriptor());
            throw null;
        }
        this.start = i6;
        this.end = i10;
        if ((i5 & 4) == 0) {
            this.target = 0;
        } else {
            this.target = i11;
        }
    }

    public static /* synthetic */ OnFocusEvent copy$default(OnFocusEvent onFocusEvent, int i5, int i6, int i10, int i11, Object obj) {
        if ((i11 & 1) != 0) {
            i5 = onFocusEvent.start;
        }
        if ((i11 & 2) != 0) {
            i6 = onFocusEvent.end;
        }
        if ((i11 & 4) != 0) {
            i10 = onFocusEvent.target;
        }
        return onFocusEvent.copy(i5, i6, i10);
    }

    public static final /* synthetic */ void write$Self$chat_input_release(OnFocusEvent self, CompositeEncoder output, SerialDescriptor serialDesc) {
        output.n(0, self.start, serialDesc);
        output.n(1, self.end, serialDesc);
        if (!output.I(serialDesc, 2) && self.target == 0) {
            return;
        }
        output.n(2, self.target, serialDesc);
    }

    /* renamed from: component1, reason: from getter */
    public final int getStart() {
        return this.start;
    }

    /* renamed from: component2, reason: from getter */
    public final int getEnd() {
        return this.end;
    }

    /* renamed from: component3, reason: from getter */
    public final int getTarget() {
        return this.target;
    }

    @NotNull
    public final OnFocusEvent copy(int start, int end, int target) {
        return new OnFocusEvent(start, end, target);
    }

    public boolean equals(Object other) {
        if (this == other) {
            return true;
        }
        if (!(other instanceof OnFocusEvent)) {
            return false;
        }
        OnFocusEvent onFocusEvent = (OnFocusEvent) other;
        return this.start == onFocusEvent.start && this.end == onFocusEvent.end && this.target == onFocusEvent.target;
    }

    public final int getEnd() {
        return this.end;
    }

    public final int getStart() {
        return this.start;
    }

    public final int getTarget() {
        return this.target;
    }

    public int hashCode() {
        return Integer.hashCode(this.target) + a.u(this.end, Integer.hashCode(this.start) * 31, 31);
    }

    @Override // com.discord.reactevents.ReactEvent
    @NotNull
    /* renamed from: serialize */
    public WritableMap getData() {
        return ReactEvent.DefaultImpls.serialize(this);
    }

    @NotNull
    public String toString() {
        int i5 = this.start;
        int i6 = this.end;
        return d.m(a3.e.q(i5, "OnFocusEvent(start=", i6, ", end=", ", target="), this.target, ")");
    }

    public OnFocusEvent(int i5, int i6, int i10) {
        this.start = i5;
        this.end = i6;
        this.target = i10;
    }

    public /* synthetic */ OnFocusEvent(int i5, int i6, int i10, int i11, DefaultConstructorMarker defaultConstructorMarker) {
        this(i5, i6, (i11 & 4) != 0 ? 0 : i10);
    }
}
