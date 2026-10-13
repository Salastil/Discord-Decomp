package com.discord.notifications.react.events;

import bs.h1;
import bs.j0;
import bs.v1;
import com.discord.jank_stats.JankRecordStore;
import com.discord.react.utilities.NativeMapExtensionsKt;
import com.discord.reactevents.ReactEvent;
import com.facebook.react.bridge.WritableNativeMap;
import f7.a;
import fo.l;
import fo.m;
import java.util.Map;
import kotlin.Lazy;
import kotlin.Metadata;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import kotlinx.serialization.KSerializer;
import kotlinx.serialization.internal.SerializationConstructorMarker;
import org.jetbrains.annotations.NotNull;
import xr.e;

@e
@Metadata(d1 = {"\u0000P\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010$\n\u0002\u0010\u000e\n\u0002\b\u0003\n\u0002\u0010\b\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u000b\n\u0000\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0004\b\u0081\b\u0018\u0000 !2\u00020\u0001:\u0002 !B\u001d\u0012\u0014\u0010\u0002\u001a\u0010\u0012\u0004\u0012\u00020\u0004\u0012\u0006\u0012\u0004\u0018\u00010\u00040\u0003¢\u0006\u0004\b\u0005\u0010\u0006B3\b\u0010\u0012\u0006\u0010\u0007\u001a\u00020\b\u0012\u0016\u0010\u0002\u001a\u0012\u0012\u0004\u0012\u00020\u0004\u0012\u0006\u0012\u0004\u0018\u00010\u0004\u0018\u00010\u0003\u0012\b\u0010\t\u001a\u0004\u0018\u00010\n¢\u0006\u0004\b\u0005\u0010\u000bJ\b\u0010\u000e\u001a\u00020\u000fH\u0016J\u0017\u0010\u0010\u001a\u0010\u0012\u0004\u0012\u00020\u0004\u0012\u0006\u0012\u0004\u0018\u00010\u00040\u0003HÆ\u0003J!\u0010\u0011\u001a\u00020\u00002\u0016\b\u0002\u0010\u0002\u001a\u0010\u0012\u0004\u0012\u00020\u0004\u0012\u0006\u0012\u0004\u0018\u00010\u00040\u0003HÆ\u0001J\u0013\u0010\u0012\u001a\u00020\u00132\b\u0010\u0014\u001a\u0004\u0018\u00010\u0015HÖ\u0003J\t\u0010\u0016\u001a\u00020\bHÖ\u0001J\t\u0010\u0017\u001a\u00020\u0004HÖ\u0001J%\u0010\u0018\u001a\u00020\u00192\u0006\u0010\u001a\u001a\u00020\u00002\u0006\u0010\u001b\u001a\u00020\u001c2\u0006\u0010\u001d\u001a\u00020\u001eH\u0001¢\u0006\u0002\b\u001fR\u001f\u0010\u0002\u001a\u0010\u0012\u0004\u0012\u00020\u0004\u0012\u0006\u0012\u0004\u0018\u00010\u00040\u0003¢\u0006\b\n\u0000\u001a\u0004\b\f\u0010\r¨\u0006\""}, d2 = {"Lcom/discord/notifications/react/events/LocalNotificationEvent;", "Lcom/discord/reactevents/ReactEvent;", "locationNotification", "", "", "<init>", "(Ljava/util/Map;)V", "seen0", "", "serializationConstructorMarker", "Lkotlinx/serialization/internal/SerializationConstructorMarker;", "(ILjava/util/Map;Lkotlinx/serialization/internal/SerializationConstructorMarker;)V", "getLocationNotification", "()Ljava/util/Map;", "serialize", "Lcom/facebook/react/bridge/WritableNativeMap;", "component1", "copy", "equals", "", JankRecordStore.SCREEN_OTHER, "", "hashCode", "toString", "write$Self", "", "self", "output", "Lkotlinx/serialization/encoding/CompositeEncoder;", "serialDesc", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "write$Self$notification_react_androidRelease", "$serializer", "Companion", "notification_react_androidRelease"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final /* data */ class LocalNotificationEvent implements ReactEvent {

    @NotNull
    private final Map<String, String> locationNotification;

    /* renamed from: Companion, reason: from kotlin metadata */
    @NotNull
    public static final Companion INSTANCE = new Companion(null);

    @NotNull
    private static final Lazy[] $childSerializers = {l.b(m.f8827e, new a(4))};

    @Metadata(d1 = {"\u0000\u0016\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\f\u0010\u0004\u001a\b\u0012\u0004\u0012\u00020\u00060\u0005¨\u0006\u0007"}, d2 = {"Lcom/discord/notifications/react/events/LocalNotificationEvent$Companion;", "", "<init>", "()V", "serializer", "Lkotlinx/serialization/KSerializer;", "Lcom/discord/notifications/react/events/LocalNotificationEvent;", "notification_react_androidRelease"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final class Companion {
        private Companion() {
        }

        @NotNull
        public final KSerializer serializer() {
            return LocalNotificationEvent$$serializer.INSTANCE;
        }

        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }
    }

    public /* synthetic */ LocalNotificationEvent(int i5, Map map, SerializationConstructorMarker serializationConstructorMarker) {
        if (1 == (i5 & 1)) {
            this.locationNotification = map;
        } else {
            h1.l(i5, 1, LocalNotificationEvent$$serializer.INSTANCE.getDescriptor());
            throw null;
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final /* synthetic */ KSerializer _childSerializers$_anonymous_() {
        v1 v1Var = v1.a;
        return new j0(v1Var, nf.e.o(v1Var), 1);
    }

    /* JADX WARN: Multi-variable type inference failed */
    public static /* synthetic */ LocalNotificationEvent copy$default(LocalNotificationEvent localNotificationEvent, Map map, int i5, Object obj) {
        if ((i5 & 1) != 0) {
            map = localNotificationEvent.locationNotification;
        }
        return localNotificationEvent.copy(map);
    }

    @NotNull
    public final Map<String, String> component1() {
        return this.locationNotification;
    }

    @NotNull
    public final LocalNotificationEvent copy(@NotNull Map<String, String> locationNotification) {
        Intrinsics.checkNotNullParameter(locationNotification, "locationNotification");
        return new LocalNotificationEvent(locationNotification);
    }

    public boolean equals(Object other) {
        if (this == other) {
            return true;
        }
        return (other instanceof LocalNotificationEvent) && Intrinsics.areEqual(this.locationNotification, ((LocalNotificationEvent) other).locationNotification);
    }

    @NotNull
    public final Map<String, String> getLocationNotification() {
        return this.locationNotification;
    }

    public int hashCode() {
        return this.locationNotification.hashCode();
    }

    @NotNull
    public String toString() {
        return "LocalNotificationEvent(locationNotification=" + this.locationNotification + ")";
    }

    public LocalNotificationEvent(@NotNull Map<String, String> locationNotification) {
        Intrinsics.checkNotNullParameter(locationNotification, "locationNotification");
        this.locationNotification = locationNotification;
    }

    @Override // com.discord.reactevents.ReactEvent
    @NotNull
    /* renamed from: serialize */
    public WritableNativeMap getData() {
        return NativeMapExtensionsKt.toNativeMap(this.locationNotification);
    }
}
