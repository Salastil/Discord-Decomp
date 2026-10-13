package com.discord.notifications.api;

import bs.d;
import bs.h1;
import bs.v1;
import com.discord.jank_stats.JankRecordStore;
import com.discord.notifications.client.a;
import com.facebook.react.devsupport.StackTraceHelper;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import fo.l;
import fo.m;
import java.util.List;
import kotlin.Lazy;
import kotlin.Metadata;
import kotlin.collections.m0;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import kotlinx.serialization.KSerializer;
import kotlinx.serialization.descriptors.SerialDescriptor;
import kotlinx.serialization.encoding.CompositeEncoder;
import kotlinx.serialization.internal.SerializationConstructorMarker;
import org.jetbrains.annotations.NotNull;
import xr.e;

@e
@Metadata(d1 = {"\u0000F\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0002\n\u0002\u0010\b\n\u0000\n\u0002\u0010\u000b\n\u0002\b\u0004\n\u0002\u0010 \n\u0002\b\u0006\n\u0002\u0018\u0002\n\u0002\b\u001f\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0004\b\u0087\b\u0018\u0000 <2\u00020\u0001:\u0002;<Bm\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0003\u0012\u0006\u0010\u0005\u001a\u00020\u0006\u0012\b\b\u0002\u0010\u0007\u001a\u00020\b\u0012\b\b\u0002\u0010\t\u001a\u00020\b\u0012\b\b\u0002\u0010\n\u001a\u00020\b\u0012\n\b\u0002\u0010\u000b\u001a\u0004\u0018\u00010\u0003\u0012\u000e\b\u0002\u0010\f\u001a\b\u0012\u0004\u0012\u00020\u00030\r\u0012\u0006\u0010\u000e\u001a\u00020\u0003\u0012\n\b\u0002\u0010\u000f\u001a\u0004\u0018\u00010\u0003¢\u0006\u0004\b\u0010\u0010\u0011B}\b\u0010\u0012\u0006\u0010\u0012\u001a\u00020\u0006\u0012\b\u0010\u0002\u001a\u0004\u0018\u00010\u0003\u0012\b\u0010\u0004\u001a\u0004\u0018\u00010\u0003\u0012\u0006\u0010\u0005\u001a\u00020\u0006\u0012\u0006\u0010\u0007\u001a\u00020\b\u0012\u0006\u0010\t\u001a\u00020\b\u0012\u0006\u0010\n\u001a\u00020\b\u0012\b\u0010\u000b\u001a\u0004\u0018\u00010\u0003\u0012\u000e\u0010\f\u001a\n\u0012\u0004\u0012\u00020\u0003\u0018\u00010\r\u0012\b\u0010\u000e\u001a\u0004\u0018\u00010\u0003\u0012\b\u0010\u000f\u001a\u0004\u0018\u00010\u0003\u0012\b\u0010\u0013\u001a\u0004\u0018\u00010\u0014¢\u0006\u0004\b\u0010\u0010\u0015J\t\u0010$\u001a\u00020\u0003HÆ\u0003J\t\u0010%\u001a\u00020\u0003HÆ\u0003J\t\u0010&\u001a\u00020\u0006HÆ\u0003J\t\u0010'\u001a\u00020\bHÆ\u0003J\t\u0010(\u001a\u00020\bHÆ\u0003J\t\u0010)\u001a\u00020\bHÆ\u0003J\u000b\u0010*\u001a\u0004\u0018\u00010\u0003HÆ\u0003J\u000f\u0010+\u001a\b\u0012\u0004\u0012\u00020\u00030\rHÆ\u0003J\t\u0010,\u001a\u00020\u0003HÆ\u0003J\u000b\u0010-\u001a\u0004\u0018\u00010\u0003HÆ\u0003Jw\u0010.\u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u00032\b\b\u0002\u0010\u0004\u001a\u00020\u00032\b\b\u0002\u0010\u0005\u001a\u00020\u00062\b\b\u0002\u0010\u0007\u001a\u00020\b2\b\b\u0002\u0010\t\u001a\u00020\b2\b\b\u0002\u0010\n\u001a\u00020\b2\n\b\u0002\u0010\u000b\u001a\u0004\u0018\u00010\u00032\u000e\b\u0002\u0010\f\u001a\b\u0012\u0004\u0012\u00020\u00030\r2\b\b\u0002\u0010\u000e\u001a\u00020\u00032\n\b\u0002\u0010\u000f\u001a\u0004\u0018\u00010\u0003HÆ\u0001J\u0013\u0010/\u001a\u00020\b2\b\u00100\u001a\u0004\u0018\u00010\u0001HÖ\u0003J\t\u00101\u001a\u00020\u0006HÖ\u0001J\t\u00102\u001a\u00020\u0003HÖ\u0001J%\u00103\u001a\u0002042\u0006\u00105\u001a\u00020\u00002\u0006\u00106\u001a\u0002072\u0006\u00108\u001a\u000209H\u0001¢\u0006\u0002\b:R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0016\u0010\u0017R\u0011\u0010\u0004\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0018\u0010\u0017R\u0011\u0010\u0005\u001a\u00020\u0006¢\u0006\b\n\u0000\u001a\u0004\b\u0019\u0010\u001aR\u0011\u0010\u0007\u001a\u00020\b¢\u0006\b\n\u0000\u001a\u0004\b\u001b\u0010\u001cR\u0011\u0010\t\u001a\u00020\b¢\u0006\b\n\u0000\u001a\u0004\b\u001d\u0010\u001cR\u0011\u0010\n\u001a\u00020\b¢\u0006\b\n\u0000\u001a\u0004\b\u001e\u0010\u001cR\u0013\u0010\u000b\u001a\u0004\u0018\u00010\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u001f\u0010\u0017R\u0017\u0010\f\u001a\b\u0012\u0004\u0012\u00020\u00030\r¢\u0006\b\n\u0000\u001a\u0004\b \u0010!R\u0011\u0010\u000e\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\"\u0010\u0017R\u0013\u0010\u000f\u001a\u0004\u0018\u00010\u0003¢\u0006\b\n\u0000\u001a\u0004\b#\u0010\u0017¨\u0006="}, d2 = {"Lcom/discord/notifications/api/ConfiguredNotifChannel;", "", StackTraceHelper.ID_KEY, "", "groupId", "importance", "", "badge", "", "vibrate", "lights", "ringtone", "aka", "", StackTraceHelper.NAME_KEY, "description", "<init>", "(Ljava/lang/String;Ljava/lang/String;IZZZLjava/lang/String;Ljava/util/List;Ljava/lang/String;Ljava/lang/String;)V", "seen0", "serializationConstructorMarker", "Lkotlinx/serialization/internal/SerializationConstructorMarker;", "(ILjava/lang/String;Ljava/lang/String;IZZZLjava/lang/String;Ljava/util/List;Ljava/lang/String;Ljava/lang/String;Lkotlinx/serialization/internal/SerializationConstructorMarker;)V", "getId", "()Ljava/lang/String;", "getGroupId", "getImportance", "()I", "getBadge", "()Z", "getVibrate", "getLights", "getRingtone", "getAka", "()Ljava/util/List;", "getName", "getDescription", "component1", "component2", "component3", "component4", "component5", "component6", "component7", "component8", "component9", "component10", "copy", "equals", JankRecordStore.SCREEN_OTHER, "hashCode", "toString", "write$Self", "", "self", "output", "Lkotlinx/serialization/encoding/CompositeEncoder;", "serialDesc", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "write$Self$notification_api_release", "$serializer", "Companion", "notification_api_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final /* data */ class ConfiguredNotifChannel {

    @NotNull
    private final List<String> aka;
    private final boolean badge;
    private final String description;

    @NotNull
    private final String groupId;

    @NotNull
    private final String id;
    private final int importance;
    private final boolean lights;

    @NotNull
    private final String name;
    private final String ringtone;
    private final boolean vibrate;

    /* renamed from: Companion, reason: from kotlin metadata */
    @NotNull
    public static final Companion INSTANCE = new Companion(null);

    @NotNull
    private static final Lazy[] $childSerializers = {null, null, null, null, null, null, null, l.b(m.f8827e, new a(25)), null, null};

    @Metadata(d1 = {"\u0000\u0016\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\f\u0010\u0004\u001a\b\u0012\u0004\u0012\u00020\u00060\u0005¨\u0006\u0007"}, d2 = {"Lcom/discord/notifications/api/ConfiguredNotifChannel$Companion;", "", "<init>", "()V", "serializer", "Lkotlinx/serialization/KSerializer;", "Lcom/discord/notifications/api/ConfiguredNotifChannel;", "notification_api_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final class Companion {
        private Companion() {
        }

        @NotNull
        public final KSerializer serializer() {
            return ConfiguredNotifChannel$$serializer.INSTANCE;
        }

        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }
    }

    public ConfiguredNotifChannel(int i5, String str, String str2, int i6, boolean z5, boolean z6, boolean z7, String str3, List list, String str4, String str5, SerializationConstructorMarker serializationConstructorMarker) {
        if (263 != (i5 & 263)) {
            h1.l(i5, 263, ConfiguredNotifChannel$$serializer.INSTANCE.getDescriptor());
            throw null;
        }
        this.id = str;
        this.groupId = str2;
        this.importance = i6;
        if ((i5 & 8) == 0) {
            this.badge = false;
        } else {
            this.badge = z5;
        }
        if ((i5 & 16) == 0) {
            this.vibrate = false;
        } else {
            this.vibrate = z6;
        }
        if ((i5 & 32) == 0) {
            this.lights = false;
        } else {
            this.lights = z7;
        }
        if ((i5 & 64) == 0) {
            this.ringtone = null;
        } else {
            this.ringtone = str3;
        }
        if ((i5 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT) == 0) {
            this.aka = m0.f13512d;
        } else {
            this.aka = list;
        }
        this.name = str4;
        if ((i5 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING) == 0) {
            this.description = null;
        } else {
            this.description = str5;
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final /* synthetic */ KSerializer _childSerializers$_anonymous_() {
        return new d(v1.a, 0);
    }

    public static /* synthetic */ ConfiguredNotifChannel copy$default(ConfiguredNotifChannel configuredNotifChannel, String str, String str2, int i5, boolean z5, boolean z6, boolean z7, String str3, List list, String str4, String str5, int i6, Object obj) {
        if ((i6 & 1) != 0) {
            str = configuredNotifChannel.id;
        }
        if ((i6 & 2) != 0) {
            str2 = configuredNotifChannel.groupId;
        }
        if ((i6 & 4) != 0) {
            i5 = configuredNotifChannel.importance;
        }
        if ((i6 & 8) != 0) {
            z5 = configuredNotifChannel.badge;
        }
        if ((i6 & 16) != 0) {
            z6 = configuredNotifChannel.vibrate;
        }
        if ((i6 & 32) != 0) {
            z7 = configuredNotifChannel.lights;
        }
        if ((i6 & 64) != 0) {
            str3 = configuredNotifChannel.ringtone;
        }
        if ((i6 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT) != 0) {
            list = configuredNotifChannel.aka;
        }
        if ((i6 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER) != 0) {
            str4 = configuredNotifChannel.name;
        }
        if ((i6 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING) != 0) {
            str5 = configuredNotifChannel.description;
        }
        String str6 = str4;
        String str7 = str5;
        String str8 = str3;
        List list2 = list;
        boolean z8 = z6;
        boolean z10 = z7;
        return configuredNotifChannel.copy(str, str2, i5, z5, z8, z10, str8, list2, str6, str7);
    }

    public static final void write$Self$notification_api_release(ConfiguredNotifChannel self, CompositeEncoder output, SerialDescriptor serialDesc) {
        Lazy[] lazyArr = $childSerializers;
        output.y(serialDesc, 0, self.id);
        output.y(serialDesc, 1, self.groupId);
        output.n(2, self.importance, serialDesc);
        if (output.I(serialDesc, 3) || self.badge) {
            output.x(serialDesc, 3, self.badge);
        }
        if (output.I(serialDesc, 4) || self.vibrate) {
            output.x(serialDesc, 4, self.vibrate);
        }
        if (output.I(serialDesc, 5) || self.lights) {
            output.x(serialDesc, 5, self.lights);
        }
        if (output.I(serialDesc, 6) || self.ringtone != null) {
            output.z(serialDesc, 6, v1.a, self.ringtone);
        }
        if (output.I(serialDesc, 7) || !Intrinsics.areEqual(self.aka, m0.f13512d)) {
            output.g(serialDesc, 7, (KSerializer) lazyArr[7].getValue(), self.aka);
        }
        output.y(serialDesc, 8, self.name);
        if (!output.I(serialDesc, 9) && self.description == null) {
            return;
        }
        output.z(serialDesc, 9, v1.a, self.description);
    }

    @NotNull
    /* renamed from: component1, reason: from getter */
    public final String getId() {
        return this.id;
    }

    /* renamed from: component10, reason: from getter */
    public final String getDescription() {
        return this.description;
    }

    @NotNull
    /* renamed from: component2, reason: from getter */
    public final String getGroupId() {
        return this.groupId;
    }

    /* renamed from: component3, reason: from getter */
    public final int getImportance() {
        return this.importance;
    }

    /* renamed from: component4, reason: from getter */
    public final boolean getBadge() {
        return this.badge;
    }

    /* renamed from: component5, reason: from getter */
    public final boolean getVibrate() {
        return this.vibrate;
    }

    /* renamed from: component6, reason: from getter */
    public final boolean getLights() {
        return this.lights;
    }

    /* renamed from: component7, reason: from getter */
    public final String getRingtone() {
        return this.ringtone;
    }

    @NotNull
    public final List<String> component8() {
        return this.aka;
    }

    @NotNull
    /* renamed from: component9, reason: from getter */
    public final String getName() {
        return this.name;
    }

    @NotNull
    public final ConfiguredNotifChannel copy(@NotNull String id2, @NotNull String groupId, int importance, boolean badge, boolean vibrate, boolean lights, String ringtone, @NotNull List<String> aka, @NotNull String name, String description) {
        Intrinsics.checkNotNullParameter(id2, "id");
        Intrinsics.checkNotNullParameter(groupId, "groupId");
        Intrinsics.checkNotNullParameter(aka, "aka");
        Intrinsics.checkNotNullParameter(name, "name");
        return new ConfiguredNotifChannel(id2, groupId, importance, badge, vibrate, lights, ringtone, aka, name, description);
    }

    public boolean equals(Object other) {
        if (this == other) {
            return true;
        }
        if (!(other instanceof ConfiguredNotifChannel)) {
            return false;
        }
        ConfiguredNotifChannel configuredNotifChannel = (ConfiguredNotifChannel) other;
        return Intrinsics.areEqual(this.id, configuredNotifChannel.id) && Intrinsics.areEqual(this.groupId, configuredNotifChannel.groupId) && this.importance == configuredNotifChannel.importance && this.badge == configuredNotifChannel.badge && this.vibrate == configuredNotifChannel.vibrate && this.lights == configuredNotifChannel.lights && Intrinsics.areEqual(this.ringtone, configuredNotifChannel.ringtone) && Intrinsics.areEqual(this.aka, configuredNotifChannel.aka) && Intrinsics.areEqual(this.name, configuredNotifChannel.name) && Intrinsics.areEqual(this.description, configuredNotifChannel.description);
    }

    @NotNull
    public final List<String> getAka() {
        return this.aka;
    }

    public final boolean getBadge() {
        return this.badge;
    }

    public final String getDescription() {
        return this.description;
    }

    @NotNull
    public final String getGroupId() {
        return this.groupId;
    }

    @NotNull
    public final String getId() {
        return this.id;
    }

    public final int getImportance() {
        return this.importance;
    }

    public final boolean getLights() {
        return this.lights;
    }

    @NotNull
    public final String getName() {
        return this.name;
    }

    public final String getRingtone() {
        return this.ringtone;
    }

    public final boolean getVibrate() {
        return this.vibrate;
    }

    public int hashCode() {
        int d6 = k0.d.d(k0.d.d(k0.d.d(com.discord.chat.bridge.botuikit.a.u(this.importance, a3.e.d(this.id.hashCode() * 31, 31, this.groupId), 31), 31, this.badge), 31, this.vibrate), 31, this.lights);
        String str = this.ringtone;
        int d7 = a3.e.d(a3.e.e(this.aka, (d6 + (str == null ? 0 : str.hashCode())) * 31, 31), 31, this.name);
        String str2 = this.description;
        return d7 + (str2 != null ? str2.hashCode() : 0);
    }

    @NotNull
    public String toString() {
        String str = this.id;
        String str2 = this.groupId;
        int i5 = this.importance;
        boolean z5 = this.badge;
        boolean z6 = this.vibrate;
        boolean z7 = this.lights;
        String str3 = this.ringtone;
        List<String> list = this.aka;
        String str4 = this.name;
        String str5 = this.description;
        StringBuilder t5 = a3.e.t("ConfiguredNotifChannel(id=", str, ", groupId=", str2, ", importance=");
        t5.append(i5);
        t5.append(", badge=");
        t5.append(z5);
        t5.append(", vibrate=");
        com.discord.chat.bridge.botuikit.a.s(t5, z6, ", lights=", z7, ", ringtone=");
        t5.append(str3);
        t5.append(", aka=");
        t5.append(list);
        t5.append(", name=");
        return com.discord.chat.bridge.botuikit.a.k(t5, str4, ", description=", str5, ")");
    }

    public ConfiguredNotifChannel(@NotNull String id2, @NotNull String groupId, int i5, boolean z5, boolean z6, boolean z7, String str, @NotNull List<String> aka, @NotNull String name, String str2) {
        Intrinsics.checkNotNullParameter(id2, "id");
        Intrinsics.checkNotNullParameter(groupId, "groupId");
        Intrinsics.checkNotNullParameter(aka, "aka");
        Intrinsics.checkNotNullParameter(name, "name");
        this.id = id2;
        this.groupId = groupId;
        this.importance = i5;
        this.badge = z5;
        this.vibrate = z6;
        this.lights = z7;
        this.ringtone = str;
        this.aka = aka;
        this.name = name;
        this.description = str2;
    }

    public ConfiguredNotifChannel(String str, String str2, int i5, boolean z5, boolean z6, boolean z7, String str3, List list, String str4, String str5, int i6, DefaultConstructorMarker defaultConstructorMarker) {
        this(str, str2, i5, (i6 & 8) != 0 ? false : z5, (i6 & 16) != 0 ? false : z6, (i6 & 32) != 0 ? false : z7, (i6 & 64) != 0 ? null : str3, (i6 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT) != 0 ? m0.f13512d : list, str4, (i6 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING) != 0 ? null : str5);
    }
}
