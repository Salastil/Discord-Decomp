package com.discord.share.react.events;

import bs.h1;
import bs.v1;
import com.discord.jank_stats.JankRecordStore;
import com.discord.reactevents.ReactEvent;
import com.facebook.react.bridge.WritableMap;
import kotlin.Metadata;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import kotlinx.serialization.KSerializer;
import kotlinx.serialization.descriptors.SerialDescriptor;
import kotlinx.serialization.encoding.CompositeEncoder;
import kotlinx.serialization.internal.SerializationConstructorMarker;
import org.jetbrains.annotations.NotNull;
import s4.h;
import xr.e;

@e
@Metadata(d1 = {"\u0000D\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0004\n\u0002\u0010\b\n\u0000\n\u0002\u0018\u0002\n\u0002\b\b\n\u0002\u0010\u000b\n\u0000\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0004\b\u0081\b\u0018\u0000 !2\u00020\u0001:\u0002 !B\u0019\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\b\u0010\u0004\u001a\u0004\u0018\u00010\u0003¢\u0006\u0004\b\u0005\u0010\u0006B/\b\u0010\u0012\u0006\u0010\u0007\u001a\u00020\b\u0012\b\u0010\u0002\u001a\u0004\u0018\u00010\u0003\u0012\b\u0010\u0004\u001a\u0004\u0018\u00010\u0003\u0012\b\u0010\t\u001a\u0004\u0018\u00010\n¢\u0006\u0004\b\u0005\u0010\u000bJ\t\u0010\u000f\u001a\u00020\u0003HÆ\u0003J\u000b\u0010\u0010\u001a\u0004\u0018\u00010\u0003HÆ\u0003J\u001f\u0010\u0011\u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u00032\n\b\u0002\u0010\u0004\u001a\u0004\u0018\u00010\u0003HÆ\u0001J\u0013\u0010\u0012\u001a\u00020\u00132\b\u0010\u0014\u001a\u0004\u0018\u00010\u0015HÖ\u0003J\t\u0010\u0016\u001a\u00020\bHÖ\u0001J\t\u0010\u0017\u001a\u00020\u0003HÖ\u0001J%\u0010\u0018\u001a\u00020\u00192\u0006\u0010\u001a\u001a\u00020\u00002\u0006\u0010\u001b\u001a\u00020\u001c2\u0006\u0010\u001d\u001a\u00020\u001eH\u0001¢\u0006\u0002\b\u001fR\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\f\u0010\rR\u0013\u0010\u0004\u001a\u0004\u0018\u00010\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u000e\u0010\r¨\u0006\""}, d2 = {"Lcom/discord/share/react/events/ShareBroadcastReceiverAppClicked;", "Lcom/discord/reactevents/ReactEvent;", "app", "", "location", "<init>", "(Ljava/lang/String;Ljava/lang/String;)V", "seen0", "", "serializationConstructorMarker", "Lkotlinx/serialization/internal/SerializationConstructorMarker;", "(ILjava/lang/String;Ljava/lang/String;Lkotlinx/serialization/internal/SerializationConstructorMarker;)V", "getApp", "()Ljava/lang/String;", "getLocation", "component1", "component2", "copy", "equals", "", JankRecordStore.SCREEN_OTHER, "", "hashCode", "toString", "write$Self", "", "self", "output", "Lkotlinx/serialization/encoding/CompositeEncoder;", "serialDesc", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "write$Self$share_release", "$serializer", "Companion", "share_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final /* data */ class ShareBroadcastReceiverAppClicked implements ReactEvent {

    /* renamed from: Companion, reason: from kotlin metadata */
    @NotNull
    public static final Companion INSTANCE = new Companion(null);

    @NotNull
    private final String app;
    private final String location;

    @Metadata(d1 = {"\u0000\u0016\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\f\u0010\u0004\u001a\b\u0012\u0004\u0012\u00020\u00060\u0005¨\u0006\u0007"}, d2 = {"Lcom/discord/share/react/events/ShareBroadcastReceiverAppClicked$Companion;", "", "<init>", "()V", "serializer", "Lkotlinx/serialization/KSerializer;", "Lcom/discord/share/react/events/ShareBroadcastReceiverAppClicked;", "share_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final class Companion {
        private Companion() {
        }

        @NotNull
        public final KSerializer serializer() {
            return ShareBroadcastReceiverAppClicked$$serializer.INSTANCE;
        }

        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }
    }

    public /* synthetic */ ShareBroadcastReceiverAppClicked(int i5, String str, String str2, SerializationConstructorMarker serializationConstructorMarker) {
        if (3 != (i5 & 3)) {
            h1.l(i5, 3, ShareBroadcastReceiverAppClicked$$serializer.INSTANCE.getDescriptor());
            throw null;
        }
        this.app = str;
        this.location = str2;
    }

    public static /* synthetic */ ShareBroadcastReceiverAppClicked copy$default(ShareBroadcastReceiverAppClicked shareBroadcastReceiverAppClicked, String str, String str2, int i5, Object obj) {
        if ((i5 & 1) != 0) {
            str = shareBroadcastReceiverAppClicked.app;
        }
        if ((i5 & 2) != 0) {
            str2 = shareBroadcastReceiverAppClicked.location;
        }
        return shareBroadcastReceiverAppClicked.copy(str, str2);
    }

    public static final /* synthetic */ void write$Self$share_release(ShareBroadcastReceiverAppClicked self, CompositeEncoder output, SerialDescriptor serialDesc) {
        output.y(serialDesc, 0, self.app);
        output.z(serialDesc, 1, v1.a, self.location);
    }

    @NotNull
    /* renamed from: component1, reason: from getter */
    public final String getApp() {
        return this.app;
    }

    /* renamed from: component2, reason: from getter */
    public final String getLocation() {
        return this.location;
    }

    @NotNull
    public final ShareBroadcastReceiverAppClicked copy(@NotNull String app2, String location) {
        Intrinsics.checkNotNullParameter(app2, "app");
        return new ShareBroadcastReceiverAppClicked(app2, location);
    }

    public boolean equals(Object other) {
        if (this == other) {
            return true;
        }
        if (!(other instanceof ShareBroadcastReceiverAppClicked)) {
            return false;
        }
        ShareBroadcastReceiverAppClicked shareBroadcastReceiverAppClicked = (ShareBroadcastReceiverAppClicked) other;
        return Intrinsics.areEqual(this.app, shareBroadcastReceiverAppClicked.app) && Intrinsics.areEqual(this.location, shareBroadcastReceiverAppClicked.location);
    }

    @NotNull
    public final String getApp() {
        return this.app;
    }

    public final String getLocation() {
        return this.location;
    }

    public int hashCode() {
        int hashCode = this.app.hashCode() * 31;
        String str = this.location;
        return hashCode + (str == null ? 0 : str.hashCode());
    }

    @Override // com.discord.reactevents.ReactEvent
    @NotNull
    /* renamed from: serialize */
    public WritableMap getData() {
        return ReactEvent.DefaultImpls.serialize(this);
    }

    @NotNull
    public String toString() {
        return h.g("ShareBroadcastReceiverAppClicked(app=", this.app, ", location=", this.location, ")");
    }

    public ShareBroadcastReceiverAppClicked(@NotNull String app2, String str) {
        Intrinsics.checkNotNullParameter(app2, "app");
        this.app = app2;
        this.location = str;
    }
}
