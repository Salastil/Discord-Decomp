package com.discord.sticker_picker;

import a3.e;
import com.discord.chat.bridge.botuikit.a;
import com.discord.jank_stats.JankRecordStore;
import com.facebook.react.devsupport.StackTraceHelper;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import com.facebook.react.modules.dialog.AlertFragment;
import java.util.List;
import k0.d;
import ki.b;
import kotlin.Metadata;
import kotlin.enums.EnumEntries;
import kotlin.jvm.internal.Intrinsics;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u00004\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\u0006\n\u0000\n\u0002\u0010\b\n\u0002\b\u0002\n\u0002\u0010 \n\u0002\u0018\u0002\n\u0002\b\u000f\n\u0002\u0010\u000b\n\u0002\b\u0003\n\u0002\u0010\u000e\n\u0002\b\u0002\b\u0080\b\u0018\u00002\u00020\u0001:\u0001\u001eB/\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005\u0012\u0006\u0010\u0006\u001a\u00020\u0005\u0012\u000e\u0010\u0007\u001a\n\u0012\u0006\u0012\u0004\u0018\u00010\t0\b¢\u0006\u0004\b\n\u0010\u000bJ\t\u0010\u0013\u001a\u00020\u0003HÆ\u0003J\t\u0010\u0014\u001a\u00020\u0005HÆ\u0003J\t\u0010\u0015\u001a\u00020\u0005HÆ\u0003J\u0011\u0010\u0016\u001a\n\u0012\u0006\u0012\u0004\u0018\u00010\t0\bHÆ\u0003J9\u0010\u0017\u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u00032\b\b\u0002\u0010\u0004\u001a\u00020\u00052\b\b\u0002\u0010\u0006\u001a\u00020\u00052\u0010\b\u0002\u0010\u0007\u001a\n\u0012\u0006\u0012\u0004\u0018\u00010\t0\bHÆ\u0001J\u0013\u0010\u0018\u001a\u00020\u00192\b\u0010\u001a\u001a\u0004\u0018\u00010\u0001HÖ\u0003J\t\u0010\u001b\u001a\u00020\u0005HÖ\u0001J\t\u0010\u001c\u001a\u00020\u001dHÖ\u0001R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\f\u0010\rR\u0011\u0010\u0004\u001a\u00020\u0005¢\u0006\b\n\u0000\u001a\u0004\b\u000e\u0010\u000fR\u0011\u0010\u0006\u001a\u00020\u0005¢\u0006\b\n\u0000\u001a\u0004\b\u0010\u0010\u000fR\u0019\u0010\u0007\u001a\n\u0012\u0006\u0012\u0004\u0018\u00010\t0\b¢\u0006\b\n\u0000\u001a\u0004\b\u0011\u0010\u0012¨\u0006\u001f"}, d2 = {"Lcom/discord/sticker_picker/StickerPickerRow;", "", "rowContentWidth", "", "rowContentPaddingVertical", "", "itemSize", AlertFragment.ARG_ITEMS, "", "Lcom/discord/sticker_picker/StickerPickerRow$Sticker;", "<init>", "(DIILjava/util/List;)V", "getRowContentWidth", "()D", "getRowContentPaddingVertical", "()I", "getItemSize", "getItems", "()Ljava/util/List;", "component1", "component2", "component3", "component4", "copy", "equals", "", JankRecordStore.SCREEN_OTHER, "hashCode", "toString", "", "Sticker", "sticker_picker_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final /* data */ class StickerPickerRow {
    private final int itemSize;

    @NotNull
    private final List<Sticker> items;
    private final int rowContentPaddingVertical;
    private final double rowContentWidth;

    @Metadata(d1 = {"\u0000(\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000b\n\u0002\b\u001d\n\u0002\u0010\b\n\u0002\b\u0003\b\u0086\b\u0018\u00002\u00020\u0001:\u0001(BG\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0003\u0012\u0006\u0010\u0005\u001a\u00020\u0006\u0012\u0006\u0010\u0007\u001a\u00020\b\u0012\u0006\u0010\t\u001a\u00020\u0003\u0012\u0006\u0010\n\u001a\u00020\b\u0012\u0006\u0010\u000b\u001a\u00020\b\u0012\u0006\u0010\f\u001a\u00020\b¢\u0006\u0004\b\r\u0010\u000eJ\t\u0010\u001a\u001a\u00020\u0003HÆ\u0003J\t\u0010\u001b\u001a\u00020\u0003HÆ\u0003J\t\u0010\u001c\u001a\u00020\u0006HÆ\u0003J\t\u0010\u001d\u001a\u00020\bHÆ\u0003J\t\u0010\u001e\u001a\u00020\u0003HÆ\u0003J\t\u0010\u001f\u001a\u00020\bHÆ\u0003J\t\u0010 \u001a\u00020\bHÆ\u0003J\t\u0010!\u001a\u00020\bHÆ\u0003JY\u0010\"\u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u00032\b\b\u0002\u0010\u0004\u001a\u00020\u00032\b\b\u0002\u0010\u0005\u001a\u00020\u00062\b\b\u0002\u0010\u0007\u001a\u00020\b2\b\b\u0002\u0010\t\u001a\u00020\u00032\b\b\u0002\u0010\n\u001a\u00020\b2\b\b\u0002\u0010\u000b\u001a\u00020\b2\b\b\u0002\u0010\f\u001a\u00020\bHÆ\u0001J\u0013\u0010#\u001a\u00020\b2\b\u0010$\u001a\u0004\u0018\u00010\u0001HÖ\u0003J\t\u0010%\u001a\u00020&HÖ\u0001J\t\u0010'\u001a\u00020\u0003HÖ\u0001R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u000f\u0010\u0010R\u0011\u0010\u0004\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0011\u0010\u0010R\u0011\u0010\u0005\u001a\u00020\u0006¢\u0006\b\n\u0000\u001a\u0004\b\u0012\u0010\u0013R\u0011\u0010\u0007\u001a\u00020\b¢\u0006\b\n\u0000\u001a\u0004\b\u0014\u0010\u0015R\u0011\u0010\t\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0016\u0010\u0010R\u0011\u0010\n\u001a\u00020\b¢\u0006\b\n\u0000\u001a\u0004\b\u0017\u0010\u0015R\u0011\u0010\u000b\u001a\u00020\b¢\u0006\b\n\u0000\u001a\u0004\b\u0018\u0010\u0015R\u0011\u0010\f\u001a\u00020\b¢\u0006\b\n\u0000\u001a\u0004\b\u0019\u0010\u0015¨\u0006)"}, d2 = {"Lcom/discord/sticker_picker/StickerPickerRow$Sticker;", "", StackTraceHelper.ID_KEY, "", StackTraceHelper.NAME_KEY, "type", "Lcom/discord/sticker_picker/StickerPickerRow$Sticker$Type;", "animated", "", "url", "disabled", "opaque", "locked", "<init>", "(Ljava/lang/String;Ljava/lang/String;Lcom/discord/sticker_picker/StickerPickerRow$Sticker$Type;ZLjava/lang/String;ZZZ)V", "getId", "()Ljava/lang/String;", "getName", "getType", "()Lcom/discord/sticker_picker/StickerPickerRow$Sticker$Type;", "getAnimated", "()Z", "getUrl", "getDisabled", "getOpaque", "getLocked", "component1", "component2", "component3", "component4", "component5", "component6", "component7", "component8", "copy", "equals", JankRecordStore.SCREEN_OTHER, "hashCode", "", "toString", "Type", "sticker_picker_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final /* data */ class Sticker {
        private final boolean animated;
        private final boolean disabled;

        @NotNull
        private final String id;
        private final boolean locked;

        @NotNull
        private final String name;
        private final boolean opaque;

        @NotNull
        private final Type type;

        @NotNull
        private final String url;

        /* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
        /* JADX WARN: Unknown enum class pattern. Please report as an issue! */
        @Metadata(d1 = {"\u0000\f\n\u0002\u0018\u0002\n\u0002\u0010\u0010\n\u0002\b\u0007\b\u0086\u0081\u0002\u0018\u00002\b\u0012\u0004\u0012\u00020\u00000\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003j\u0002\b\u0004j\u0002\b\u0005j\u0002\b\u0006j\u0002\b\u0007¨\u0006\b"}, d2 = {"Lcom/discord/sticker_picker/StickerPickerRow$Sticker$Type;", "", "<init>", "(Ljava/lang/String;I)V", "PNG", "APNG", "LOTTIE", "GIF", "sticker_picker_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
        public static final class Type {
            private static final /* synthetic */ EnumEntries $ENTRIES;
            private static final /* synthetic */ Type[] $VALUES;
            public static final Type PNG = new Type("PNG", 0);
            public static final Type APNG = new Type("APNG", 1);
            public static final Type LOTTIE = new Type("LOTTIE", 2);
            public static final Type GIF = new Type("GIF", 3);

            private static final /* synthetic */ Type[] $values() {
                return new Type[]{PNG, APNG, LOTTIE, GIF};
            }

            static {
                Type[] $values = $values();
                $VALUES = $values;
                $ENTRIES = b.p($values);
            }

            private Type(String str, int i5) {
            }

            @NotNull
            public static EnumEntries getEntries() {
                return $ENTRIES;
            }

            public static Type valueOf(String str) {
                return (Type) Enum.valueOf(Type.class, str);
            }

            public static Type[] values() {
                return (Type[]) $VALUES.clone();
            }
        }

        public Sticker(@NotNull String id2, @NotNull String name, @NotNull Type type, boolean z5, @NotNull String url, boolean z6, boolean z7, boolean z8) {
            Intrinsics.checkNotNullParameter(id2, "id");
            Intrinsics.checkNotNullParameter(name, "name");
            Intrinsics.checkNotNullParameter(type, "type");
            Intrinsics.checkNotNullParameter(url, "url");
            this.id = id2;
            this.name = name;
            this.type = type;
            this.animated = z5;
            this.url = url;
            this.disabled = z6;
            this.opaque = z7;
            this.locked = z8;
        }

        public static /* synthetic */ Sticker copy$default(Sticker sticker, String str, String str2, Type type, boolean z5, String str3, boolean z6, boolean z7, boolean z8, int i5, Object obj) {
            if ((i5 & 1) != 0) {
                str = sticker.id;
            }
            if ((i5 & 2) != 0) {
                str2 = sticker.name;
            }
            if ((i5 & 4) != 0) {
                type = sticker.type;
            }
            if ((i5 & 8) != 0) {
                z5 = sticker.animated;
            }
            if ((i5 & 16) != 0) {
                str3 = sticker.url;
            }
            if ((i5 & 32) != 0) {
                z6 = sticker.disabled;
            }
            if ((i5 & 64) != 0) {
                z7 = sticker.opaque;
            }
            if ((i5 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT) != 0) {
                z8 = sticker.locked;
            }
            boolean z10 = z7;
            boolean z11 = z8;
            String str4 = str3;
            boolean z12 = z6;
            return sticker.copy(str, str2, type, z5, str4, z12, z10, z11);
        }

        @NotNull
        /* renamed from: component1, reason: from getter */
        public final String getId() {
            return this.id;
        }

        @NotNull
        /* renamed from: component2, reason: from getter */
        public final String getName() {
            return this.name;
        }

        @NotNull
        /* renamed from: component3, reason: from getter */
        public final Type getType() {
            return this.type;
        }

        /* renamed from: component4, reason: from getter */
        public final boolean getAnimated() {
            return this.animated;
        }

        @NotNull
        /* renamed from: component5, reason: from getter */
        public final String getUrl() {
            return this.url;
        }

        /* renamed from: component6, reason: from getter */
        public final boolean getDisabled() {
            return this.disabled;
        }

        /* renamed from: component7, reason: from getter */
        public final boolean getOpaque() {
            return this.opaque;
        }

        /* renamed from: component8, reason: from getter */
        public final boolean getLocked() {
            return this.locked;
        }

        @NotNull
        public final Sticker copy(@NotNull String id2, @NotNull String name, @NotNull Type type, boolean animated, @NotNull String url, boolean disabled, boolean opaque, boolean locked) {
            Intrinsics.checkNotNullParameter(id2, "id");
            Intrinsics.checkNotNullParameter(name, "name");
            Intrinsics.checkNotNullParameter(type, "type");
            Intrinsics.checkNotNullParameter(url, "url");
            return new Sticker(id2, name, type, animated, url, disabled, opaque, locked);
        }

        public boolean equals(Object other) {
            if (this == other) {
                return true;
            }
            if (!(other instanceof Sticker)) {
                return false;
            }
            Sticker sticker = (Sticker) other;
            return Intrinsics.areEqual(this.id, sticker.id) && Intrinsics.areEqual(this.name, sticker.name) && this.type == sticker.type && this.animated == sticker.animated && Intrinsics.areEqual(this.url, sticker.url) && this.disabled == sticker.disabled && this.opaque == sticker.opaque && this.locked == sticker.locked;
        }

        public final boolean getAnimated() {
            return this.animated;
        }

        public final boolean getDisabled() {
            return this.disabled;
        }

        @NotNull
        public final String getId() {
            return this.id;
        }

        public final boolean getLocked() {
            return this.locked;
        }

        @NotNull
        public final String getName() {
            return this.name;
        }

        public final boolean getOpaque() {
            return this.opaque;
        }

        @NotNull
        public final Type getType() {
            return this.type;
        }

        @NotNull
        public final String getUrl() {
            return this.url;
        }

        public int hashCode() {
            return Boolean.hashCode(this.locked) + d.d(d.d(e.d(d.d((this.type.hashCode() + e.d(this.id.hashCode() * 31, 31, this.name)) * 31, 31, this.animated), 31, this.url), 31, this.disabled), 31, this.opaque);
        }

        @NotNull
        public String toString() {
            String str = this.id;
            String str2 = this.name;
            Type type = this.type;
            boolean z5 = this.animated;
            String str3 = this.url;
            boolean z6 = this.disabled;
            boolean z7 = this.opaque;
            boolean z8 = this.locked;
            StringBuilder t5 = e.t("Sticker(id=", str, ", name=", str2, ", type=");
            t5.append(type);
            t5.append(", animated=");
            t5.append(z5);
            t5.append(", url=");
            t5.append(str3);
            t5.append(", disabled=");
            t5.append(z6);
            t5.append(", opaque=");
            t5.append(z7);
            t5.append(", locked=");
            t5.append(z8);
            t5.append(")");
            return t5.toString();
        }
    }

    public StickerPickerRow(double d6, int i5, int i6, @NotNull List<Sticker> items) {
        Intrinsics.checkNotNullParameter(items, "items");
        this.rowContentWidth = d6;
        this.rowContentPaddingVertical = i5;
        this.itemSize = i6;
        this.items = items;
    }

    public static /* synthetic */ StickerPickerRow copy$default(StickerPickerRow stickerPickerRow, double d6, int i5, int i6, List list, int i10, Object obj) {
        if ((i10 & 1) != 0) {
            d6 = stickerPickerRow.rowContentWidth;
        }
        double d7 = d6;
        if ((i10 & 2) != 0) {
            i5 = stickerPickerRow.rowContentPaddingVertical;
        }
        int i11 = i5;
        if ((i10 & 4) != 0) {
            i6 = stickerPickerRow.itemSize;
        }
        int i12 = i6;
        if ((i10 & 8) != 0) {
            list = stickerPickerRow.items;
        }
        return stickerPickerRow.copy(d7, i11, i12, list);
    }

    /* renamed from: component1, reason: from getter */
    public final double getRowContentWidth() {
        return this.rowContentWidth;
    }

    /* renamed from: component2, reason: from getter */
    public final int getRowContentPaddingVertical() {
        return this.rowContentPaddingVertical;
    }

    /* renamed from: component3, reason: from getter */
    public final int getItemSize() {
        return this.itemSize;
    }

    @NotNull
    public final List<Sticker> component4() {
        return this.items;
    }

    @NotNull
    public final StickerPickerRow copy(double rowContentWidth, int rowContentPaddingVertical, int itemSize, @NotNull List<Sticker> items) {
        Intrinsics.checkNotNullParameter(items, "items");
        return new StickerPickerRow(rowContentWidth, rowContentPaddingVertical, itemSize, items);
    }

    public boolean equals(Object other) {
        if (this == other) {
            return true;
        }
        if (!(other instanceof StickerPickerRow)) {
            return false;
        }
        StickerPickerRow stickerPickerRow = (StickerPickerRow) other;
        return Double.compare(this.rowContentWidth, stickerPickerRow.rowContentWidth) == 0 && this.rowContentPaddingVertical == stickerPickerRow.rowContentPaddingVertical && this.itemSize == stickerPickerRow.itemSize && Intrinsics.areEqual(this.items, stickerPickerRow.items);
    }

    public final int getItemSize() {
        return this.itemSize;
    }

    @NotNull
    public final List<Sticker> getItems() {
        return this.items;
    }

    public final int getRowContentPaddingVertical() {
        return this.rowContentPaddingVertical;
    }

    public final double getRowContentWidth() {
        return this.rowContentWidth;
    }

    public int hashCode() {
        return this.items.hashCode() + a.u(this.itemSize, a.u(this.rowContentPaddingVertical, Double.hashCode(this.rowContentWidth) * 31, 31), 31);
    }

    @NotNull
    public String toString() {
        return "StickerPickerRow(rowContentWidth=" + this.rowContentWidth + ", rowContentPaddingVertical=" + this.rowContentPaddingVertical + ", itemSize=" + this.itemSize + ", items=" + this.items + ")";
    }
}
