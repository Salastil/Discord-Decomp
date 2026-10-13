package com.discord.chat.bridge.sticker;

import bs.h1;
import bs.o0;
import com.discord.chat.bridge.botuikit.a;
import com.discord.chat.bridge.sticker.StickerFormatType;
import com.discord.jank_stats.JankRecordStore;
import com.facebook.react.devsupport.StackTraceHelper;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
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
@Metadata(d1 = {"\u0000L\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\t\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0003\n\u0002\u0010\b\n\u0002\b\u0007\n\u0002\u0018\u0002\n\u0002\b\u001e\n\u0002\u0010\u000b\n\u0002\b\u0004\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0004\b\u0087\b\u0018\u0000 ?2\u00020\u0001:\u0002>?BW\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005\u0012\u0006\u0010\u0006\u001a\u00020\u0007\u0012\u0006\u0010\b\u001a\u00020\u0007\u0012\u0006\u0010\t\u001a\u00020\u0007\u0012\n\b\u0002\u0010\n\u001a\u0004\u0018\u00010\u000b\u0012\n\b\u0002\u0010\f\u001a\u0004\u0018\u00010\u000b\u0012\u0006\u0010\r\u001a\u00020\u000b\u0012\u0006\u0010\u000e\u001a\u00020\u0007¢\u0006\u0004\b\u000f\u0010\u0010Bq\b\u0010\u0012\u0006\u0010\u0011\u001a\u00020\u000b\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\b\u0010\u0004\u001a\u0004\u0018\u00010\u0005\u0012\b\u0010\u0006\u001a\u0004\u0018\u00010\u0007\u0012\b\u0010\b\u001a\u0004\u0018\u00010\u0007\u0012\b\u0010\t\u001a\u0004\u0018\u00010\u0007\u0012\b\u0010\n\u001a\u0004\u0018\u00010\u000b\u0012\b\u0010\f\u001a\u0004\u0018\u00010\u000b\u0012\u0006\u0010\r\u001a\u00020\u000b\u0012\b\u0010\u000e\u001a\u0004\u0018\u00010\u0007\u0012\b\u0010\u0012\u001a\u0004\u0018\u00010\u0013¢\u0006\u0004\b\u000f\u0010\u0014J\t\u0010&\u001a\u00020\u0003HÆ\u0003J\t\u0010'\u001a\u00020\u0005HÆ\u0003J\t\u0010(\u001a\u00020\u0007HÆ\u0003J\t\u0010)\u001a\u00020\u0007HÆ\u0003J\t\u0010*\u001a\u00020\u0007HÆ\u0003J\u0010\u0010+\u001a\u0004\u0018\u00010\u000bHÆ\u0003¢\u0006\u0002\u0010 J\u0010\u0010,\u001a\u0004\u0018\u00010\u000bHÆ\u0003¢\u0006\u0002\u0010 J\t\u0010-\u001a\u00020\u000bHÆ\u0003J\t\u0010.\u001a\u00020\u0007HÆ\u0003Jl\u0010/\u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u00032\b\b\u0002\u0010\u0004\u001a\u00020\u00052\b\b\u0002\u0010\u0006\u001a\u00020\u00072\b\b\u0002\u0010\b\u001a\u00020\u00072\b\b\u0002\u0010\t\u001a\u00020\u00072\n\b\u0002\u0010\n\u001a\u0004\u0018\u00010\u000b2\n\b\u0002\u0010\f\u001a\u0004\u0018\u00010\u000b2\b\b\u0002\u0010\r\u001a\u00020\u000b2\b\b\u0002\u0010\u000e\u001a\u00020\u0007HÆ\u0001¢\u0006\u0002\u00100J\u0013\u00101\u001a\u0002022\b\u00103\u001a\u0004\u0018\u00010\u0001HÖ\u0003J\t\u00104\u001a\u00020\u000bHÖ\u0001J\t\u00105\u001a\u00020\u0007HÖ\u0001J%\u00106\u001a\u0002072\u0006\u00108\u001a\u00020\u00002\u0006\u00109\u001a\u00020:2\u0006\u0010;\u001a\u00020<H\u0001¢\u0006\u0002\b=R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0015\u0010\u0016R\u001c\u0010\u0004\u001a\u00020\u00058\u0006X\u0087\u0004¢\u0006\u000e\n\u0000\u0012\u0004\b\u0017\u0010\u0018\u001a\u0004\b\u0019\u0010\u001aR\u0011\u0010\u0006\u001a\u00020\u0007¢\u0006\b\n\u0000\u001a\u0004\b\u001b\u0010\u001cR\u0011\u0010\b\u001a\u00020\u0007¢\u0006\b\n\u0000\u001a\u0004\b\u001d\u0010\u001cR\u0011\u0010\t\u001a\u00020\u0007¢\u0006\b\n\u0000\u001a\u0004\b\u001e\u0010\u001cR\u0015\u0010\n\u001a\u0004\u0018\u00010\u000b¢\u0006\n\n\u0002\u0010!\u001a\u0004\b\u001f\u0010 R\u0015\u0010\f\u001a\u0004\u0018\u00010\u000b¢\u0006\n\n\u0002\u0010!\u001a\u0004\b\"\u0010 R\u0011\u0010\r\u001a\u00020\u000b¢\u0006\b\n\u0000\u001a\u0004\b#\u0010$R\u0011\u0010\u000e\u001a\u00020\u0007¢\u0006\b\n\u0000\u001a\u0004\b%\u0010\u001c¨\u0006@"}, d2 = {"Lcom/discord/chat/bridge/sticker/Sticker;", "", StackTraceHelper.ID_KEY, "", "formatType", "Lcom/discord/chat/bridge/sticker/StickerFormatType;", StackTraceHelper.NAME_KEY, "", "asset", "url", "width", "", "height", "renderMode", ViewProps.ACCESSIBILITY_LABEL, "<init>", "(JLcom/discord/chat/bridge/sticker/StickerFormatType;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Integer;Ljava/lang/Integer;ILjava/lang/String;)V", "seen0", "serializationConstructorMarker", "Lkotlinx/serialization/internal/SerializationConstructorMarker;", "(IJLcom/discord/chat/bridge/sticker/StickerFormatType;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Integer;Ljava/lang/Integer;ILjava/lang/String;Lkotlinx/serialization/internal/SerializationConstructorMarker;)V", "getId", "()J", "getFormatType$annotations", "()V", "getFormatType", "()Lcom/discord/chat/bridge/sticker/StickerFormatType;", "getName", "()Ljava/lang/String;", "getAsset", "getUrl", "getWidth", "()Ljava/lang/Integer;", "Ljava/lang/Integer;", "getHeight", "getRenderMode", "()I", "getAccessibilityLabel", "component1", "component2", "component3", "component4", "component5", "component6", "component7", "component8", "component9", "copy", "(JLcom/discord/chat/bridge/sticker/StickerFormatType;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Integer;Ljava/lang/Integer;ILjava/lang/String;)Lcom/discord/chat/bridge/sticker/Sticker;", "equals", "", JankRecordStore.SCREEN_OTHER, "hashCode", "toString", "write$Self", "", "self", "output", "Lkotlinx/serialization/encoding/CompositeEncoder;", "serialDesc", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "write$Self$chat_release", "$serializer", "Companion", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final /* data */ class Sticker {

    /* renamed from: Companion, reason: from kotlin metadata */
    @NotNull
    public static final Companion INSTANCE = new Companion(null);

    @NotNull
    private final String accessibilityLabel;

    @NotNull
    private final String asset;

    @NotNull
    private final StickerFormatType formatType;
    private final Integer height;
    private final long id;

    @NotNull
    private final String name;
    private final int renderMode;

    @NotNull
    private final String url;
    private final Integer width;

    @Metadata(d1 = {"\u0000\u0016\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\f\u0010\u0004\u001a\b\u0012\u0004\u0012\u00020\u00060\u0005¨\u0006\u0007"}, d2 = {"Lcom/discord/chat/bridge/sticker/Sticker$Companion;", "", "<init>", "()V", "serializer", "Lkotlinx/serialization/KSerializer;", "Lcom/discord/chat/bridge/sticker/Sticker;", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
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

    public /* synthetic */ Sticker(int i5, long j, StickerFormatType stickerFormatType, String str, String str2, String str3, Integer num, Integer num2, int i6, String str4, SerializationConstructorMarker serializationConstructorMarker) {
        if (415 != (i5 & 415)) {
            h1.l(i5, 415, Sticker$$serializer.INSTANCE.getDescriptor());
            throw null;
        }
        this.id = j;
        this.formatType = stickerFormatType;
        this.name = str;
        this.asset = str2;
        this.url = str3;
        if ((i5 & 32) == 0) {
            this.width = null;
        } else {
            this.width = num;
        }
        if ((i5 & 64) == 0) {
            this.height = null;
        } else {
            this.height = num2;
        }
        this.renderMode = i6;
        this.accessibilityLabel = str4;
    }

    public static /* synthetic */ Sticker copy$default(Sticker sticker, long j, StickerFormatType stickerFormatType, String str, String str2, String str3, Integer num, Integer num2, int i5, String str4, int i6, Object obj) {
        if ((i6 & 1) != 0) {
            j = sticker.id;
        }
        long j5 = j;
        if ((i6 & 2) != 0) {
            stickerFormatType = sticker.formatType;
        }
        StickerFormatType stickerFormatType2 = stickerFormatType;
        if ((i6 & 4) != 0) {
            str = sticker.name;
        }
        return sticker.copy(j5, stickerFormatType2, str, (i6 & 8) != 0 ? sticker.asset : str2, (i6 & 16) != 0 ? sticker.url : str3, (i6 & 32) != 0 ? sticker.width : num, (i6 & 64) != 0 ? sticker.height : num2, (i6 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT) != 0 ? sticker.renderMode : i5, (i6 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER) != 0 ? sticker.accessibilityLabel : str4);
    }

    public static /* synthetic */ void getFormatType$annotations() {
    }

    public static final /* synthetic */ void write$Self$chat_release(Sticker self, CompositeEncoder output, SerialDescriptor serialDesc) {
        output.P(serialDesc, 0, self.id);
        output.g(serialDesc, 1, StickerFormatType.StickerFormatTypeSerializer.INSTANCE, self.formatType);
        output.y(serialDesc, 2, self.name);
        output.y(serialDesc, 3, self.asset);
        output.y(serialDesc, 4, self.url);
        if (output.I(serialDesc, 5) || self.width != null) {
            output.z(serialDesc, 5, o0.a, self.width);
        }
        if (output.I(serialDesc, 6) || self.height != null) {
            output.z(serialDesc, 6, o0.a, self.height);
        }
        output.n(7, self.renderMode, serialDesc);
        output.y(serialDesc, 8, self.accessibilityLabel);
    }

    /* renamed from: component1, reason: from getter */
    public final long getId() {
        return this.id;
    }

    @NotNull
    /* renamed from: component2, reason: from getter */
    public final StickerFormatType getFormatType() {
        return this.formatType;
    }

    @NotNull
    /* renamed from: component3, reason: from getter */
    public final String getName() {
        return this.name;
    }

    @NotNull
    /* renamed from: component4, reason: from getter */
    public final String getAsset() {
        return this.asset;
    }

    @NotNull
    /* renamed from: component5, reason: from getter */
    public final String getUrl() {
        return this.url;
    }

    /* renamed from: component6, reason: from getter */
    public final Integer getWidth() {
        return this.width;
    }

    /* renamed from: component7, reason: from getter */
    public final Integer getHeight() {
        return this.height;
    }

    /* renamed from: component8, reason: from getter */
    public final int getRenderMode() {
        return this.renderMode;
    }

    @NotNull
    /* renamed from: component9, reason: from getter */
    public final String getAccessibilityLabel() {
        return this.accessibilityLabel;
    }

    @NotNull
    public final Sticker copy(long id2, @NotNull StickerFormatType formatType, @NotNull String name, @NotNull String asset, @NotNull String url, Integer width, Integer height, int renderMode, @NotNull String accessibilityLabel) {
        Intrinsics.checkNotNullParameter(formatType, "formatType");
        Intrinsics.checkNotNullParameter(name, "name");
        Intrinsics.checkNotNullParameter(asset, "asset");
        Intrinsics.checkNotNullParameter(url, "url");
        Intrinsics.checkNotNullParameter(accessibilityLabel, "accessibilityLabel");
        return new Sticker(id2, formatType, name, asset, url, width, height, renderMode, accessibilityLabel);
    }

    public boolean equals(Object other) {
        if (this == other) {
            return true;
        }
        if (!(other instanceof Sticker)) {
            return false;
        }
        Sticker sticker = (Sticker) other;
        return this.id == sticker.id && this.formatType == sticker.formatType && Intrinsics.areEqual(this.name, sticker.name) && Intrinsics.areEqual(this.asset, sticker.asset) && Intrinsics.areEqual(this.url, sticker.url) && Intrinsics.areEqual(this.width, sticker.width) && Intrinsics.areEqual(this.height, sticker.height) && this.renderMode == sticker.renderMode && Intrinsics.areEqual(this.accessibilityLabel, sticker.accessibilityLabel);
    }

    @NotNull
    public final String getAccessibilityLabel() {
        return this.accessibilityLabel;
    }

    @NotNull
    public final String getAsset() {
        return this.asset;
    }

    @NotNull
    public final StickerFormatType getFormatType() {
        return this.formatType;
    }

    public final Integer getHeight() {
        return this.height;
    }

    public final long getId() {
        return this.id;
    }

    @NotNull
    public final String getName() {
        return this.name;
    }

    public final int getRenderMode() {
        return this.renderMode;
    }

    @NotNull
    public final String getUrl() {
        return this.url;
    }

    public final Integer getWidth() {
        return this.width;
    }

    public int hashCode() {
        int d6 = a3.e.d(a3.e.d(a3.e.d((this.formatType.hashCode() + (Long.hashCode(this.id) * 31)) * 31, 31, this.name), 31, this.asset), 31, this.url);
        Integer num = this.width;
        int hashCode = (d6 + (num == null ? 0 : num.hashCode())) * 31;
        Integer num2 = this.height;
        return this.accessibilityLabel.hashCode() + a.u(this.renderMode, (hashCode + (num2 != null ? num2.hashCode() : 0)) * 31, 31);
    }

    @NotNull
    public String toString() {
        long j = this.id;
        StickerFormatType stickerFormatType = this.formatType;
        String str = this.name;
        String str2 = this.asset;
        String str3 = this.url;
        Integer num = this.width;
        Integer num2 = this.height;
        int i5 = this.renderMode;
        String str4 = this.accessibilityLabel;
        StringBuilder sb2 = new StringBuilder("Sticker(id=");
        sb2.append(j);
        sb2.append(", formatType=");
        sb2.append(stickerFormatType);
        a3.e.A(sb2, ", name=", str, ", asset=", str2);
        sb2.append(", url=");
        sb2.append(str3);
        sb2.append(", width=");
        sb2.append(num);
        sb2.append(", height=");
        sb2.append(num2);
        sb2.append(", renderMode=");
        sb2.append(i5);
        return a3.e.n(sb2, ", accessibilityLabel=", str4, ")");
    }

    public Sticker(long j, @NotNull StickerFormatType formatType, @NotNull String name, @NotNull String asset, @NotNull String url, Integer num, Integer num2, int i5, @NotNull String accessibilityLabel) {
        Intrinsics.checkNotNullParameter(formatType, "formatType");
        Intrinsics.checkNotNullParameter(name, "name");
        Intrinsics.checkNotNullParameter(asset, "asset");
        Intrinsics.checkNotNullParameter(url, "url");
        Intrinsics.checkNotNullParameter(accessibilityLabel, "accessibilityLabel");
        this.id = j;
        this.formatType = formatType;
        this.name = name;
        this.asset = asset;
        this.url = url;
        this.width = num;
        this.height = num2;
        this.renderMode = i5;
        this.accessibilityLabel = accessibilityLabel;
    }

    /* JADX WARN: Illegal instructions before constructor call */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public /* synthetic */ Sticker(long j, StickerFormatType stickerFormatType, String str, String str2, String str3, Integer num, Integer num2, int i5, String str4, int i6, DefaultConstructorMarker defaultConstructorMarker) {
        this(j, stickerFormatType, str, str2, str3, num, r10, r11, r12);
        String str5;
        int i10;
        Integer num3;
        num = (i6 & 32) != 0 ? null : num;
        if ((i6 & 64) != 0) {
            str5 = str4;
            i10 = i5;
            num3 = null;
        } else {
            str5 = str4;
            i10 = i5;
            num3 = num2;
        }
    }
}
