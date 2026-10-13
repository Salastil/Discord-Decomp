package com.discord.notifications.api;

import android.os.Parcel;
import android.os.Parcelable;
import bs.g;
import bs.h1;
import bs.t0;
import com.discord.jank_stats.JankRecordStore;
import com.discord.notifications.api.StickerFormatType;
import com.discord.notifications.api.StickerType;
import com.discord.primitives.GuildId;
import com.discord.primitives.GuildId$$serializer;
import com.discord.primitives.StickerId;
import com.discord.primitives.StickerId$$serializer;
import com.facebook.react.devsupport.StackTraceHelper;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import fo.n;
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
@Metadata(d1 = {"\u0000l\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0000\n\u0002\u0010\t\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000b\n\u0002\b\u0003\n\u0002\u0010\b\n\u0000\n\u0002\u0018\u0002\n\u0002\b1\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0004\b\u0087\b\u0018\u0000 Y2\u00020\u0001:\u0002XYBe\u0012\b\b\u0002\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005\u0012\n\b\u0002\u0010\u0006\u001a\u0004\u0018\u00010\u0007\u0012\n\b\u0002\u0010\b\u001a\u0004\u0018\u00010\t\u0012\b\b\u0002\u0010\n\u001a\u00020\u0005\u0012\b\b\u0002\u0010\u000b\u001a\u00020\f\u0012\b\b\u0002\u0010\r\u001a\u00020\u0005\u0012\b\b\u0002\u0010\u000e\u001a\u00020\u000f\u0012\n\b\u0002\u0010\u0010\u001a\u0004\u0018\u00010\u0011¢\u0006\u0004\b\u0012\u0010\u0013Bu\b\u0010\u0012\u0006\u0010\u0014\u001a\u00020\u0015\u0012\b\u0010\u0002\u001a\u0004\u0018\u00010\u0003\u0012\b\u0010\u0004\u001a\u0004\u0018\u00010\u0005\u0012\b\u0010\u0006\u001a\u0004\u0018\u00010\u0007\u0012\b\u0010\b\u001a\u0004\u0018\u00010\t\u0012\b\u0010\n\u001a\u0004\u0018\u00010\u0005\u0012\b\u0010\u000b\u001a\u0004\u0018\u00010\f\u0012\b\u0010\r\u001a\u0004\u0018\u00010\u0005\u0012\b\u0010\u000e\u001a\u0004\u0018\u00010\u000f\u0012\b\u0010\u0010\u001a\u0004\u0018\u00010\u0011\u0012\b\u0010\u0016\u001a\u0004\u0018\u00010\u0017¢\u0006\u0004\b\u0012\u0010\u0018J\u0006\u00106\u001a\u00020\u0005J\u0006\u00107\u001a\u00020\u0011J\u0010\u00108\u001a\u00020\u0003HÆ\u0003¢\u0006\u0004\b9\u0010\u001cJ\t\u0010:\u001a\u00020\u0005HÆ\u0003J\u0010\u0010;\u001a\u0004\u0018\u00010\u0007HÆ\u0003¢\u0006\u0002\u0010#J\u0010\u0010<\u001a\u0004\u0018\u00010\tHÆ\u0003¢\u0006\u0002\b=J\t\u0010>\u001a\u00020\u0005HÆ\u0003J\t\u0010?\u001a\u00020\fHÆ\u0003J\t\u0010@\u001a\u00020\u0005HÆ\u0003J\t\u0010A\u001a\u00020\u000fHÆ\u0003J\u0010\u0010B\u001a\u0004\u0018\u00010\u0011HÆ\u0003¢\u0006\u0002\u00104Jp\u0010C\u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u00032\b\b\u0002\u0010\u0004\u001a\u00020\u00052\n\b\u0002\u0010\u0006\u001a\u0004\u0018\u00010\u00072\n\b\u0002\u0010\b\u001a\u0004\u0018\u00010\t2\b\b\u0002\u0010\n\u001a\u00020\u00052\b\b\u0002\u0010\u000b\u001a\u00020\f2\b\b\u0002\u0010\r\u001a\u00020\u00052\b\b\u0002\u0010\u000e\u001a\u00020\u000f2\n\b\u0002\u0010\u0010\u001a\u0004\u0018\u00010\u0011HÆ\u0001¢\u0006\u0004\bD\u0010EJ\u0006\u0010F\u001a\u00020\u0015J\u0013\u0010G\u001a\u00020\u00112\b\u0010H\u001a\u0004\u0018\u00010IHÖ\u0003J\t\u0010J\u001a\u00020\u0015HÖ\u0001J\t\u0010K\u001a\u00020\u0005HÖ\u0001J\u0016\u0010L\u001a\u00020M2\u0006\u0010N\u001a\u00020O2\u0006\u0010P\u001a\u00020\u0015J%\u0010Q\u001a\u00020M2\u0006\u0010R\u001a\u00020\u00002\u0006\u0010S\u001a\u00020T2\u0006\u0010U\u001a\u00020VH\u0001¢\u0006\u0002\bWR\u001e\u0010\u0002\u001a\u00020\u00038\u0006X\u0087\u0004¢\u0006\u0010\n\u0002\u0010\u001d\u0012\u0004\b\u0019\u0010\u001a\u001a\u0004\b\u001b\u0010\u001cR\u001c\u0010\u0004\u001a\u00020\u00058\u0006X\u0087\u0004¢\u0006\u000e\n\u0000\u0012\u0004\b\u001e\u0010\u001a\u001a\u0004\b\u001f\u0010 R \u0010\u0006\u001a\u0004\u0018\u00010\u00078\u0006X\u0087\u0004¢\u0006\u0010\n\u0002\u0010$\u0012\u0004\b!\u0010\u001a\u001a\u0004\b\"\u0010#R\u001e\u0010\b\u001a\u0004\u0018\u00010\t8\u0006X\u0087\u0004¢\u0006\u000e\n\u0000\u0012\u0004\b%\u0010\u001a\u001a\u0004\b&\u0010'R\u001c\u0010\n\u001a\u00020\u00058\u0006X\u0087\u0004¢\u0006\u000e\n\u0000\u0012\u0004\b(\u0010\u001a\u001a\u0004\b)\u0010 R\u001c\u0010\u000b\u001a\u00020\f8\u0006X\u0087\u0004¢\u0006\u000e\n\u0000\u0012\u0004\b*\u0010\u001a\u001a\u0004\b+\u0010,R\u001c\u0010\r\u001a\u00020\u00058\u0006X\u0087\u0004¢\u0006\u000e\n\u0000\u0012\u0004\b-\u0010\u001a\u001a\u0004\b.\u0010 R\u001c\u0010\u000e\u001a\u00020\u000f8\u0006X\u0087\u0004¢\u0006\u000e\n\u0000\u0012\u0004\b/\u0010\u001a\u001a\u0004\b0\u00101R \u0010\u0010\u001a\u0004\u0018\u00010\u00118\u0006X\u0087\u0004¢\u0006\u0010\n\u0002\u00105\u0012\u0004\b2\u0010\u001a\u001a\u0004\b3\u00104¨\u0006Z"}, d2 = {"Lcom/discord/notifications/api/Sticker;", "Landroid/os/Parcelable;", StackTraceHelper.ID_KEY, "Lcom/discord/primitives/StickerId;", StackTraceHelper.NAME_KEY, "", "packId", "", "guildId", "Lcom/discord/primitives/GuildId;", "description", "formatType", "Lcom/discord/notifications/api/StickerFormatType;", "tags", "type", "Lcom/discord/notifications/api/StickerType;", "available", "", "<init>", "(JLjava/lang/String;Ljava/lang/Long;Lcom/discord/primitives/GuildId;Ljava/lang/String;Lcom/discord/notifications/api/StickerFormatType;Ljava/lang/String;Lcom/discord/notifications/api/StickerType;Ljava/lang/Boolean;Lkotlin/jvm/internal/DefaultConstructorMarker;)V", "seen0", "", "serializationConstructorMarker", "Lkotlinx/serialization/internal/SerializationConstructorMarker;", "(ILcom/discord/primitives/StickerId;Ljava/lang/String;Ljava/lang/Long;Lcom/discord/primitives/GuildId;Ljava/lang/String;Lcom/discord/notifications/api/StickerFormatType;Ljava/lang/String;Lcom/discord/notifications/api/StickerType;Ljava/lang/Boolean;Lkotlinx/serialization/internal/SerializationConstructorMarker;Lkotlin/jvm/internal/DefaultConstructorMarker;)V", "getId-e_wqtJY$annotations", "()V", "getId-e_wqtJY", "()J", "J", "getName$annotations", "getName", "()Ljava/lang/String;", "getPackId$annotations", "getPackId", "()Ljava/lang/Long;", "Ljava/lang/Long;", "getGuildId-qOKuAAo$annotations", "getGuildId-qOKuAAo", "()Lcom/discord/primitives/GuildId;", "getDescription$annotations", "getDescription", "getFormatType$annotations", "getFormatType", "()Lcom/discord/notifications/api/StickerFormatType;", "getTags$annotations", "getTags", "getType$annotations", "getType", "()Lcom/discord/notifications/api/StickerType;", "getAvailable$annotations", "getAvailable", "()Ljava/lang/Boolean;", "Ljava/lang/Boolean;", "getExtension", "isAnimated", "component1", "component1-e_wqtJY", "component2", "component3", "component4", "component4-qOKuAAo", "component5", "component6", "component7", "component8", "component9", "copy", "copy-fJhvhH4", "(JLjava/lang/String;Ljava/lang/Long;Lcom/discord/primitives/GuildId;Ljava/lang/String;Lcom/discord/notifications/api/StickerFormatType;Ljava/lang/String;Lcom/discord/notifications/api/StickerType;Ljava/lang/Boolean;)Lcom/discord/notifications/api/Sticker;", "describeContents", "equals", JankRecordStore.SCREEN_OTHER, "", "hashCode", "toString", "writeToParcel", "", "dest", "Landroid/os/Parcel;", "flags", "write$Self", "self", "output", "Lkotlinx/serialization/encoding/CompositeEncoder;", "serialDesc", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "write$Self$notification_api_release", "$serializer", "Companion", "notification_api_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final /* data */ class Sticker implements Parcelable {
    private final Boolean available;

    @NotNull
    private final String description;

    @NotNull
    private final StickerFormatType formatType;
    private final GuildId guildId;
    private final long id;

    @NotNull
    private final String name;
    private final Long packId;

    @NotNull
    private final String tags;

    @NotNull
    private final StickerType type;

    /* renamed from: Companion, reason: from kotlin metadata */
    @NotNull
    public static final Companion INSTANCE = new Companion(null);

    @NotNull
    public static final Parcelable.Creator<Sticker> CREATOR = new Creator();

    @Metadata(d1 = {"\u0000\u0016\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\f\u0010\u0004\u001a\b\u0012\u0004\u0012\u00020\u00060\u0005¨\u0006\u0007"}, d2 = {"Lcom/discord/notifications/api/Sticker$Companion;", "", "<init>", "()V", "serializer", "Lkotlinx/serialization/KSerializer;", "Lcom/discord/notifications/api/Sticker;", "notification_api_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final class Companion {
        private Companion() {
        }

        @NotNull
        public final KSerializer serializer() {
            return Sticker$$serializer.INSTANCE;
        }

        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }
    }

    @Metadata(k = 3, mv = {2, 1, 0}, xi = 48)
    public static final class Creator implements Parcelable.Creator<Sticker> {
        /* JADX WARN: Can't rename method to resolve collision */
        @Override // android.os.Parcelable.Creator
        public final Sticker createFromParcel(Parcel parcel) {
            Intrinsics.checkNotNullParameter(parcel, "parcel");
            long m1237unboximpl = ((StickerId) parcel.readParcelable(Sticker.class.getClassLoader())).m1237unboximpl();
            String readString = parcel.readString();
            Boolean bool = null;
            Long valueOf = parcel.readInt() == 0 ? null : Long.valueOf(parcel.readLong());
            GuildId guildId = (GuildId) parcel.readParcelable(Sticker.class.getClassLoader());
            String readString2 = parcel.readString();
            StickerFormatType valueOf2 = StickerFormatType.valueOf(parcel.readString());
            String readString3 = parcel.readString();
            StickerType valueOf3 = StickerType.valueOf(parcel.readString());
            if (parcel.readInt() != 0) {
                bool = Boolean.valueOf(parcel.readInt() != 0);
            }
            return new Sticker(m1237unboximpl, readString, valueOf, guildId, readString2, valueOf2, readString3, valueOf3, bool, null);
        }

        /* JADX WARN: Can't rename method to resolve collision */
        @Override // android.os.Parcelable.Creator
        public final Sticker[] newArray(int i5) {
            return new Sticker[i5];
        }
    }

    @Metadata(k = 3, mv = {2, 1, 0}, xi = 48)
    public /* synthetic */ class WhenMappings {
        public static final /* synthetic */ int[] $EnumSwitchMapping$0;

        static {
            int[] iArr = new int[StickerFormatType.values().length];
            try {
                iArr[StickerFormatType.UNKNOWN.ordinal()] = 1;
            } catch (NoSuchFieldError unused) {
            }
            try {
                iArr[StickerFormatType.PNG.ordinal()] = 2;
            } catch (NoSuchFieldError unused2) {
            }
            try {
                iArr[StickerFormatType.APNG.ordinal()] = 3;
            } catch (NoSuchFieldError unused3) {
            }
            try {
                iArr[StickerFormatType.LOTTIE.ordinal()] = 4;
            } catch (NoSuchFieldError unused4) {
            }
            try {
                iArr[StickerFormatType.GIF.ordinal()] = 5;
            } catch (NoSuchFieldError unused5) {
            }
            $EnumSwitchMapping$0 = iArr;
        }
    }

    public /* synthetic */ Sticker(int i5, StickerId stickerId, String str, Long l6, GuildId guildId, String str2, StickerFormatType stickerFormatType, String str3, StickerType stickerType, Boolean bool, SerializationConstructorMarker serializationConstructorMarker, DefaultConstructorMarker defaultConstructorMarker) {
        this(i5, stickerId, str, l6, guildId, str2, stickerFormatType, str3, stickerType, bool, serializationConstructorMarker);
    }

    /* renamed from: copy-fJhvhH4$default, reason: not valid java name */
    public static /* synthetic */ Sticker m1129copyfJhvhH4$default(Sticker sticker, long j, String str, Long l6, GuildId guildId, String str2, StickerFormatType stickerFormatType, String str3, StickerType stickerType, Boolean bool, int i5, Object obj) {
        if ((i5 & 1) != 0) {
            j = sticker.id;
        }
        long j5 = j;
        if ((i5 & 2) != 0) {
            str = sticker.name;
        }
        String str4 = str;
        if ((i5 & 4) != 0) {
            l6 = sticker.packId;
        }
        return sticker.m1134copyfJhvhH4(j5, str4, l6, (i5 & 8) != 0 ? sticker.guildId : guildId, (i5 & 16) != 0 ? sticker.description : str2, (i5 & 32) != 0 ? sticker.formatType : stickerFormatType, (i5 & 64) != 0 ? sticker.tags : str3, (i5 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT) != 0 ? sticker.type : stickerType, (i5 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER) != 0 ? sticker.available : bool);
    }

    public static /* synthetic */ void getAvailable$annotations() {
    }

    public static /* synthetic */ void getDescription$annotations() {
    }

    public static /* synthetic */ void getFormatType$annotations() {
    }

    /* renamed from: getGuildId-qOKuAAo$annotations, reason: not valid java name */
    public static /* synthetic */ void m1130getGuildIdqOKuAAo$annotations() {
    }

    /* renamed from: getId-e_wqtJY$annotations, reason: not valid java name */
    public static /* synthetic */ void m1131getIde_wqtJY$annotations() {
    }

    public static /* synthetic */ void getName$annotations() {
    }

    public static /* synthetic */ void getPackId$annotations() {
    }

    public static /* synthetic */ void getTags$annotations() {
    }

    public static /* synthetic */ void getType$annotations() {
    }

    public static final /* synthetic */ void write$Self$notification_api_release(Sticker self, CompositeEncoder output, SerialDescriptor serialDesc) {
        if (output.I(serialDesc, 0) || !StickerId.m1232equalsimpl0(self.id, StickerId.m1229constructorimpl(0L))) {
            output.g(serialDesc, 0, StickerId$$serializer.INSTANCE, StickerId.m1228boximpl(self.id));
        }
        output.y(serialDesc, 1, self.name);
        if (output.I(serialDesc, 2) || self.packId != null) {
            output.z(serialDesc, 2, t0.a, self.packId);
        }
        if (output.I(serialDesc, 3) || self.guildId != null) {
            output.z(serialDesc, 3, GuildId$$serializer.INSTANCE, self.guildId);
        }
        if (output.I(serialDesc, 4) || !Intrinsics.areEqual(self.description, "")) {
            output.y(serialDesc, 4, self.description);
        }
        if (output.I(serialDesc, 5) || self.formatType != StickerFormatType.INSTANCE.fromInt(0)) {
            output.g(serialDesc, 5, StickerFormatType.Serializer.INSTANCE, self.formatType);
        }
        if (output.I(serialDesc, 6) || !Intrinsics.areEqual(self.tags, "")) {
            output.y(serialDesc, 6, self.tags);
        }
        if (output.I(serialDesc, 7) || self.type != StickerType.INSTANCE.fromInt(0)) {
            output.g(serialDesc, 7, StickerType.Serializer.INSTANCE, self.type);
        }
        if (!output.I(serialDesc, 8) && self.available == null) {
            return;
        }
        output.z(serialDesc, 8, g.a, self.available);
    }

    /* renamed from: component1-e_wqtJY, reason: not valid java name and from getter */
    public final long getId() {
        return this.id;
    }

    @NotNull
    /* renamed from: component2, reason: from getter */
    public final String getName() {
        return this.name;
    }

    /* renamed from: component3, reason: from getter */
    public final Long getPackId() {
        return this.packId;
    }

    /* renamed from: component4-qOKuAAo, reason: not valid java name and from getter */
    public final GuildId getGuildId() {
        return this.guildId;
    }

    @NotNull
    /* renamed from: component5, reason: from getter */
    public final String getDescription() {
        return this.description;
    }

    @NotNull
    /* renamed from: component6, reason: from getter */
    public final StickerFormatType getFormatType() {
        return this.formatType;
    }

    @NotNull
    /* renamed from: component7, reason: from getter */
    public final String getTags() {
        return this.tags;
    }

    @NotNull
    /* renamed from: component8, reason: from getter */
    public final StickerType getType() {
        return this.type;
    }

    /* renamed from: component9, reason: from getter */
    public final Boolean getAvailable() {
        return this.available;
    }

    @NotNull
    /* renamed from: copy-fJhvhH4, reason: not valid java name */
    public final Sticker m1134copyfJhvhH4(long id2, @NotNull String name, Long packId, GuildId guildId, @NotNull String description, @NotNull StickerFormatType formatType, @NotNull String tags, @NotNull StickerType type, Boolean available) {
        Intrinsics.checkNotNullParameter(name, "name");
        Intrinsics.checkNotNullParameter(description, "description");
        Intrinsics.checkNotNullParameter(formatType, "formatType");
        Intrinsics.checkNotNullParameter(tags, "tags");
        Intrinsics.checkNotNullParameter(type, "type");
        return new Sticker(id2, name, packId, guildId, description, formatType, tags, type, available, null);
    }

    @Override // android.os.Parcelable
    public final int describeContents() {
        return 0;
    }

    public boolean equals(Object other) {
        if (this == other) {
            return true;
        }
        if (!(other instanceof Sticker)) {
            return false;
        }
        Sticker sticker = (Sticker) other;
        return StickerId.m1232equalsimpl0(this.id, sticker.id) && Intrinsics.areEqual(this.name, sticker.name) && Intrinsics.areEqual(this.packId, sticker.packId) && Intrinsics.areEqual(this.guildId, sticker.guildId) && Intrinsics.areEqual(this.description, sticker.description) && this.formatType == sticker.formatType && Intrinsics.areEqual(this.tags, sticker.tags) && this.type == sticker.type && Intrinsics.areEqual(this.available, sticker.available);
    }

    public final Boolean getAvailable() {
        return this.available;
    }

    @NotNull
    public final String getDescription() {
        return this.description;
    }

    @NotNull
    public final String getExtension() {
        int i5 = WhenMappings.$EnumSwitchMapping$0[this.formatType.ordinal()];
        if (i5 == 1) {
            return "";
        }
        if (i5 == 2 || i5 == 3) {
            return ".png";
        }
        if (i5 == 4) {
            return ".json";
        }
        if (i5 == 5) {
            return ".gif";
        }
        throw new n();
    }

    @NotNull
    public final StickerFormatType getFormatType() {
        return this.formatType;
    }

    /* renamed from: getGuildId-qOKuAAo, reason: not valid java name */
    public final GuildId m1135getGuildIdqOKuAAo() {
        return this.guildId;
    }

    /* renamed from: getId-e_wqtJY, reason: not valid java name */
    public final long m1136getIde_wqtJY() {
        return this.id;
    }

    @NotNull
    public final String getName() {
        return this.name;
    }

    public final Long getPackId() {
        return this.packId;
    }

    @NotNull
    public final String getTags() {
        return this.tags;
    }

    @NotNull
    public final StickerType getType() {
        return this.type;
    }

    public int hashCode() {
        int d6 = a3.e.d(StickerId.m1233hashCodeimpl(this.id) * 31, 31, this.name);
        Long l6 = this.packId;
        int hashCode = (d6 + (l6 == null ? 0 : l6.hashCode())) * 31;
        GuildId guildId = this.guildId;
        int hashCode2 = (this.type.hashCode() + a3.e.d((this.formatType.hashCode() + a3.e.d((hashCode + (guildId == null ? 0 : GuildId.m1181hashCodeimpl(guildId.m1185unboximpl()))) * 31, 31, this.description)) * 31, 31, this.tags)) * 31;
        Boolean bool = this.available;
        return hashCode2 + (bool != null ? bool.hashCode() : 0);
    }

    public final boolean isAnimated() {
        StickerFormatType stickerFormatType = this.formatType;
        return stickerFormatType == StickerFormatType.APNG || stickerFormatType == StickerFormatType.LOTTIE || stickerFormatType == StickerFormatType.GIF;
    }

    @NotNull
    public String toString() {
        String m1235toStringimpl = StickerId.m1235toStringimpl(this.id);
        String str = this.name;
        Long l6 = this.packId;
        GuildId guildId = this.guildId;
        String str2 = this.description;
        StickerFormatType stickerFormatType = this.formatType;
        String str3 = this.tags;
        StickerType stickerType = this.type;
        Boolean bool = this.available;
        StringBuilder t5 = a3.e.t("Sticker(id=", m1235toStringimpl, ", name=", str, ", packId=");
        t5.append(l6);
        t5.append(", guildId=");
        t5.append(guildId);
        t5.append(", description=");
        t5.append(str2);
        t5.append(", formatType=");
        t5.append(stickerFormatType);
        t5.append(", tags=");
        t5.append(str3);
        t5.append(", type=");
        t5.append(stickerType);
        t5.append(", available=");
        t5.append(bool);
        t5.append(")");
        return t5.toString();
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(@NotNull Parcel dest, int flags) {
        Intrinsics.checkNotNullParameter(dest, "dest");
        dest.writeParcelable(StickerId.m1228boximpl(this.id), flags);
        dest.writeString(this.name);
        Long l6 = this.packId;
        if (l6 == null) {
            dest.writeInt(0);
        } else {
            dest.writeInt(1);
            dest.writeLong(l6.longValue());
        }
        dest.writeParcelable(this.guildId, flags);
        dest.writeString(this.description);
        dest.writeString(this.formatType.name());
        dest.writeString(this.tags);
        dest.writeString(this.type.name());
        Boolean bool = this.available;
        if (bool == null) {
            dest.writeInt(0);
        } else {
            dest.writeInt(1);
            dest.writeInt(bool.booleanValue() ? 1 : 0);
        }
    }

    public /* synthetic */ Sticker(long j, String str, Long l6, GuildId guildId, String str2, StickerFormatType stickerFormatType, String str3, StickerType stickerType, Boolean bool, DefaultConstructorMarker defaultConstructorMarker) {
        this(j, str, l6, guildId, str2, stickerFormatType, str3, stickerType, bool);
    }

    private /* synthetic */ Sticker(int i5, StickerId stickerId, String str, Long l6, GuildId guildId, String str2, StickerFormatType stickerFormatType, String str3, StickerType stickerType, Boolean bool, SerializationConstructorMarker serializationConstructorMarker) {
        if (2 != (i5 & 2)) {
            h1.l(i5, 2, Sticker$$serializer.INSTANCE.getDescriptor());
            throw null;
        }
        this.id = (i5 & 1) == 0 ? StickerId.m1229constructorimpl(0L) : stickerId.m1237unboximpl();
        this.name = str;
        if ((i5 & 4) == 0) {
            this.packId = null;
        } else {
            this.packId = l6;
        }
        if ((i5 & 8) == 0) {
            this.guildId = null;
        } else {
            this.guildId = guildId;
        }
        if ((i5 & 16) == 0) {
            this.description = "";
        } else {
            this.description = str2;
        }
        if ((i5 & 32) == 0) {
            this.formatType = StickerFormatType.INSTANCE.fromInt(0);
        } else {
            this.formatType = stickerFormatType;
        }
        if ((i5 & 64) == 0) {
            this.tags = "";
        } else {
            this.tags = str3;
        }
        if ((i5 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT) == 0) {
            this.type = StickerType.INSTANCE.fromInt(0);
        } else {
            this.type = stickerType;
        }
        if ((i5 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER) == 0) {
            this.available = null;
        } else {
            this.available = bool;
        }
    }

    private Sticker(long j, String name, Long l6, GuildId guildId, String description, StickerFormatType formatType, String tags, StickerType type, Boolean bool) {
        Intrinsics.checkNotNullParameter(name, "name");
        Intrinsics.checkNotNullParameter(description, "description");
        Intrinsics.checkNotNullParameter(formatType, "formatType");
        Intrinsics.checkNotNullParameter(tags, "tags");
        Intrinsics.checkNotNullParameter(type, "type");
        this.id = j;
        this.name = name;
        this.packId = l6;
        this.guildId = guildId;
        this.description = description;
        this.formatType = formatType;
        this.tags = tags;
        this.type = type;
        this.available = bool;
    }

    public /* synthetic */ Sticker(long j, String str, Long l6, GuildId guildId, String str2, StickerFormatType stickerFormatType, String str3, StickerType stickerType, Boolean bool, int i5, DefaultConstructorMarker defaultConstructorMarker) {
        this((i5 & 1) != 0 ? StickerId.m1229constructorimpl(0L) : j, str, (i5 & 4) != 0 ? null : l6, (i5 & 8) != 0 ? null : guildId, (i5 & 16) != 0 ? "" : str2, (i5 & 32) != 0 ? StickerFormatType.INSTANCE.fromInt(0) : stickerFormatType, (i5 & 64) != 0 ? "" : str3, (i5 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT) != 0 ? StickerType.INSTANCE.fromInt(0) : stickerType, (i5 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER) != 0 ? null : bool, null);
    }
}
