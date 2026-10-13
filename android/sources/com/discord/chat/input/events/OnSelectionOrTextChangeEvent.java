package com.discord.chat.input.events;

import bs.h1;
import com.discord.chat.bridge.botuikit.a;
import com.discord.jank_stats.JankRecordStore;
import com.discord.reactevents.ReactEvent;
import com.facebook.react.bridge.WritableMap;
import com.facebook.react.uimanager.ViewProps;
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
@Metadata(d1 = {"\u0000F\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\b\n\u0002\b\u0002\n\u0002\u0010\u000e\n\u0002\b\u0005\n\u0002\u0018\u0002\n\u0002\b\r\n\u0002\u0010\u000b\n\u0000\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0004\b\u0081\b\u0018\u0000 (2\u00020\u0001:\u0002'(B'\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0003\u0012\u0006\u0010\u0005\u001a\u00020\u0006\u0012\u0006\u0010\u0007\u001a\u00020\u0006¢\u0006\u0004\b\b\u0010\tB?\b\u0010\u0012\u0006\u0010\n\u001a\u00020\u0003\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0003\u0012\b\u0010\u0005\u001a\u0004\u0018\u00010\u0006\u0012\b\u0010\u0007\u001a\u0004\u0018\u00010\u0006\u0012\b\u0010\u000b\u001a\u0004\u0018\u00010\f¢\u0006\u0004\b\b\u0010\rJ\t\u0010\u0014\u001a\u00020\u0003HÆ\u0003J\t\u0010\u0015\u001a\u00020\u0003HÆ\u0003J\t\u0010\u0016\u001a\u00020\u0006HÆ\u0003J\t\u0010\u0017\u001a\u00020\u0006HÆ\u0003J1\u0010\u0018\u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u00032\b\b\u0002\u0010\u0004\u001a\u00020\u00032\b\b\u0002\u0010\u0005\u001a\u00020\u00062\b\b\u0002\u0010\u0007\u001a\u00020\u0006HÆ\u0001J\u0013\u0010\u0019\u001a\u00020\u001a2\b\u0010\u001b\u001a\u0004\u0018\u00010\u001cHÖ\u0003J\t\u0010\u001d\u001a\u00020\u0003HÖ\u0001J\t\u0010\u001e\u001a\u00020\u0006HÖ\u0001J%\u0010\u001f\u001a\u00020 2\u0006\u0010!\u001a\u00020\u00002\u0006\u0010\"\u001a\u00020#2\u0006\u0010$\u001a\u00020%H\u0001¢\u0006\u0002\b&R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u000e\u0010\u000fR\u0011\u0010\u0004\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0010\u0010\u000fR\u0011\u0010\u0005\u001a\u00020\u0006¢\u0006\b\n\u0000\u001a\u0004\b\u0011\u0010\u0012R\u0011\u0010\u0007\u001a\u00020\u0006¢\u0006\b\n\u0000\u001a\u0004\b\u0013\u0010\u0012¨\u0006)"}, d2 = {"Lcom/discord/chat/input/events/OnSelectionOrTextChangeEvent;", "Lcom/discord/reactevents/ReactEvent;", ViewProps.START, "", ViewProps.END, "text", "", "editId", "<init>", "(IILjava/lang/String;Ljava/lang/String;)V", "seen0", "serializationConstructorMarker", "Lkotlinx/serialization/internal/SerializationConstructorMarker;", "(IIILjava/lang/String;Ljava/lang/String;Lkotlinx/serialization/internal/SerializationConstructorMarker;)V", "getStart", "()I", "getEnd", "getText", "()Ljava/lang/String;", "getEditId", "component1", "component2", "component3", "component4", "copy", "equals", "", JankRecordStore.SCREEN_OTHER, "", "hashCode", "toString", "write$Self", "", "self", "output", "Lkotlinx/serialization/encoding/CompositeEncoder;", "serialDesc", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "write$Self$chat_input_release", "$serializer", "Companion", "chat_input_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final /* data */ class OnSelectionOrTextChangeEvent implements ReactEvent {

    /* renamed from: Companion, reason: from kotlin metadata */
    @NotNull
    public static final Companion INSTANCE = new Companion(null);

    @NotNull
    private final String editId;
    private final int end;
    private final int start;

    @NotNull
    private final String text;

    @Metadata(d1 = {"\u0000\u0016\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\f\u0010\u0004\u001a\b\u0012\u0004\u0012\u00020\u00060\u0005¨\u0006\u0007"}, d2 = {"Lcom/discord/chat/input/events/OnSelectionOrTextChangeEvent$Companion;", "", "<init>", "()V", "serializer", "Lkotlinx/serialization/KSerializer;", "Lcom/discord/chat/input/events/OnSelectionOrTextChangeEvent;", "chat_input_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final class Companion {
        private Companion() {
        }

        @NotNull
        public final KSerializer serializer() {
            return OnSelectionOrTextChangeEvent$$serializer.INSTANCE;
        }

        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }
    }

    public /* synthetic */ OnSelectionOrTextChangeEvent(int i5, int i6, int i10, String str, String str2, SerializationConstructorMarker serializationConstructorMarker) {
        if (15 != (i5 & 15)) {
            h1.l(i5, 15, OnSelectionOrTextChangeEvent$$serializer.INSTANCE.getDescriptor());
            throw null;
        }
        this.start = i6;
        this.end = i10;
        this.text = str;
        this.editId = str2;
    }

    public static /* synthetic */ OnSelectionOrTextChangeEvent copy$default(OnSelectionOrTextChangeEvent onSelectionOrTextChangeEvent, int i5, int i6, String str, String str2, int i10, Object obj) {
        if ((i10 & 1) != 0) {
            i5 = onSelectionOrTextChangeEvent.start;
        }
        if ((i10 & 2) != 0) {
            i6 = onSelectionOrTextChangeEvent.end;
        }
        if ((i10 & 4) != 0) {
            str = onSelectionOrTextChangeEvent.text;
        }
        if ((i10 & 8) != 0) {
            str2 = onSelectionOrTextChangeEvent.editId;
        }
        return onSelectionOrTextChangeEvent.copy(i5, i6, str, str2);
    }

    public static final /* synthetic */ void write$Self$chat_input_release(OnSelectionOrTextChangeEvent self, CompositeEncoder output, SerialDescriptor serialDesc) {
        output.n(0, self.start, serialDesc);
        output.n(1, self.end, serialDesc);
        output.y(serialDesc, 2, self.text);
        output.y(serialDesc, 3, self.editId);
    }

    /* renamed from: component1, reason: from getter */
    public final int getStart() {
        return this.start;
    }

    /* renamed from: component2, reason: from getter */
    public final int getEnd() {
        return this.end;
    }

    @NotNull
    /* renamed from: component3, reason: from getter */
    public final String getText() {
        return this.text;
    }

    @NotNull
    /* renamed from: component4, reason: from getter */
    public final String getEditId() {
        return this.editId;
    }

    @NotNull
    public final OnSelectionOrTextChangeEvent copy(int start, int end, @NotNull String text, @NotNull String editId) {
        Intrinsics.checkNotNullParameter(text, "text");
        Intrinsics.checkNotNullParameter(editId, "editId");
        return new OnSelectionOrTextChangeEvent(start, end, text, editId);
    }

    public boolean equals(Object other) {
        if (this == other) {
            return true;
        }
        if (!(other instanceof OnSelectionOrTextChangeEvent)) {
            return false;
        }
        OnSelectionOrTextChangeEvent onSelectionOrTextChangeEvent = (OnSelectionOrTextChangeEvent) other;
        return this.start == onSelectionOrTextChangeEvent.start && this.end == onSelectionOrTextChangeEvent.end && Intrinsics.areEqual(this.text, onSelectionOrTextChangeEvent.text) && Intrinsics.areEqual(this.editId, onSelectionOrTextChangeEvent.editId);
    }

    @NotNull
    public final String getEditId() {
        return this.editId;
    }

    public final int getEnd() {
        return this.end;
    }

    public final int getStart() {
        return this.start;
    }

    @NotNull
    public final String getText() {
        return this.text;
    }

    public int hashCode() {
        return this.editId.hashCode() + a3.e.d(a.u(this.end, Integer.hashCode(this.start) * 31, 31), 31, this.text);
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
        return a.k(a3.e.q(i5, "OnSelectionOrTextChangeEvent(start=", i6, ", end=", ", text="), this.text, ", editId=", this.editId, ")");
    }

    public OnSelectionOrTextChangeEvent(int i5, int i6, @NotNull String text, @NotNull String editId) {
        Intrinsics.checkNotNullParameter(text, "text");
        Intrinsics.checkNotNullParameter(editId, "editId");
        this.start = i5;
        this.end = i6;
        this.text = text;
        this.editId = editId;
    }
}
