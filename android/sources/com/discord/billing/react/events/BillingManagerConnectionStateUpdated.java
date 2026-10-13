package com.discord.billing.react.events;

import bs.h1;
import com.discord.jank_stats.JankRecordStore;
import com.discord.reactevents.ReactEvent;
import com.facebook.react.bridge.WritableMap;
import kotlin.Metadata;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlinx.serialization.KSerializer;
import kotlinx.serialization.internal.SerializationConstructorMarker;
import org.jetbrains.annotations.NotNull;
import s4.h;
import xr.e;

@e
@Metadata(d1 = {"\u0000D\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\b\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0002\b\u0006\n\u0002\u0010\u000b\n\u0000\n\u0002\u0010\u0000\n\u0002\b\u0002\n\u0002\u0010\u000e\n\u0000\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0004\b\u0081\b\u0018\u0000 \u001e2\u00020\u0001:\u0002\u001d\u001eB\u000f\u0012\u0006\u0010\u0002\u001a\u00020\u0003¢\u0006\u0004\b\u0004\u0010\u0005B#\b\u0010\u0012\u0006\u0010\u0006\u001a\u00020\u0003\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\b\u0010\u0007\u001a\u0004\u0018\u00010\b¢\u0006\u0004\b\u0004\u0010\tJ\t\u0010\f\u001a\u00020\u0003HÆ\u0003J\u0013\u0010\r\u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u0003HÆ\u0001J\u0013\u0010\u000e\u001a\u00020\u000f2\b\u0010\u0010\u001a\u0004\u0018\u00010\u0011HÖ\u0003J\t\u0010\u0012\u001a\u00020\u0003HÖ\u0001J\t\u0010\u0013\u001a\u00020\u0014HÖ\u0001J%\u0010\u0015\u001a\u00020\u00162\u0006\u0010\u0017\u001a\u00020\u00002\u0006\u0010\u0018\u001a\u00020\u00192\u0006\u0010\u001a\u001a\u00020\u001bH\u0001¢\u0006\u0002\b\u001cR\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\n\u0010\u000b¨\u0006\u001f"}, d2 = {"Lcom/discord/billing/react/events/BillingManagerConnectionStateUpdated;", "Lcom/discord/reactevents/ReactEvent;", "connectionState", "", "<init>", "(I)V", "seen0", "serializationConstructorMarker", "Lkotlinx/serialization/internal/SerializationConstructorMarker;", "(IILkotlinx/serialization/internal/SerializationConstructorMarker;)V", "getConnectionState", "()I", "component1", "copy", "equals", "", JankRecordStore.SCREEN_OTHER, "", "hashCode", "toString", "", "write$Self", "", "self", "output", "Lkotlinx/serialization/encoding/CompositeEncoder;", "serialDesc", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "write$Self$billing_androidRelease", "$serializer", "Companion", "billing_androidRelease"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final /* data */ class BillingManagerConnectionStateUpdated implements ReactEvent {

    /* renamed from: Companion, reason: from kotlin metadata */
    @NotNull
    public static final Companion INSTANCE = new Companion(null);
    private final int connectionState;

    @Metadata(d1 = {"\u0000\u0016\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\f\u0010\u0004\u001a\b\u0012\u0004\u0012\u00020\u00060\u0005¨\u0006\u0007"}, d2 = {"Lcom/discord/billing/react/events/BillingManagerConnectionStateUpdated$Companion;", "", "<init>", "()V", "serializer", "Lkotlinx/serialization/KSerializer;", "Lcom/discord/billing/react/events/BillingManagerConnectionStateUpdated;", "billing_androidRelease"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final class Companion {
        private Companion() {
        }

        @NotNull
        public final KSerializer serializer() {
            return BillingManagerConnectionStateUpdated$$serializer.INSTANCE;
        }

        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }
    }

    public /* synthetic */ BillingManagerConnectionStateUpdated(int i5, int i6, SerializationConstructorMarker serializationConstructorMarker) {
        if (1 == (i5 & 1)) {
            this.connectionState = i6;
        } else {
            h1.l(i5, 1, BillingManagerConnectionStateUpdated$$serializer.INSTANCE.getDescriptor());
            throw null;
        }
    }

    public static /* synthetic */ BillingManagerConnectionStateUpdated copy$default(BillingManagerConnectionStateUpdated billingManagerConnectionStateUpdated, int i5, int i6, Object obj) {
        if ((i6 & 1) != 0) {
            i5 = billingManagerConnectionStateUpdated.connectionState;
        }
        return billingManagerConnectionStateUpdated.copy(i5);
    }

    /* renamed from: component1, reason: from getter */
    public final int getConnectionState() {
        return this.connectionState;
    }

    @NotNull
    public final BillingManagerConnectionStateUpdated copy(int connectionState) {
        return new BillingManagerConnectionStateUpdated(connectionState);
    }

    public boolean equals(Object other) {
        if (this == other) {
            return true;
        }
        return (other instanceof BillingManagerConnectionStateUpdated) && this.connectionState == ((BillingManagerConnectionStateUpdated) other).connectionState;
    }

    public final int getConnectionState() {
        return this.connectionState;
    }

    public int hashCode() {
        return Integer.hashCode(this.connectionState);
    }

    @Override // com.discord.reactevents.ReactEvent
    @NotNull
    /* renamed from: serialize */
    public WritableMap getData() {
        return ReactEvent.DefaultImpls.serialize(this);
    }

    @NotNull
    public String toString() {
        return h.e(this.connectionState, "BillingManagerConnectionStateUpdated(connectionState=", ")");
    }

    public BillingManagerConnectionStateUpdated(int i5) {
        this.connectionState = i5;
    }
}
