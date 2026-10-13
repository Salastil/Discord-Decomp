package com.discord.emoji_picker.react.deserialization;

import k0.d;
import ki.b;
import kotlin.Metadata;
import kotlin.enums.EnumEntries;
import kotlin.jvm.internal.DefaultConstructorMarker;
import org.jetbrains.annotations.NotNull;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
@Metadata(d1 = {"\u0000\u0018\n\u0002\u0018\u0002\n\u0002\u0010\u0010\n\u0000\n\u0002\u0010\u000e\n\u0000\n\u0002\u0010\u000b\n\u0002\b\u0010\b\u0080\u0081\u0002\u0018\u0000 \u00142\b\u0012\u0004\u0012\u00020\u00000\u0001:\u0001\u0014B\u001d\b\u0002\u0012\b\b\u0002\u0010\u0002\u001a\u00020\u0003\u0012\b\b\u0002\u0010\u0004\u001a\u00020\u0005¢\u0006\u0004\b\u0006\u0010\u0007R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\b\u0010\tR\u0011\u0010\u0004\u001a\u00020\u0005¢\u0006\b\n\u0000\u001a\u0004\b\n\u0010\u000bj\u0002\b\fj\u0002\b\rj\u0002\b\u000ej\u0002\b\u000fj\u0002\b\u0010j\u0002\b\u0011j\u0002\b\u0012j\u0002\b\u0013¨\u0006\u0015"}, d2 = {"Lcom/discord/emoji_picker/react/deserialization/EmojiPickerItemTypes;", "", "unsupported", "", "noop", "", "<init>", "(Ljava/lang/String;ILjava/lang/String;Z)V", "getUnsupported", "()Ljava/lang/String;", "getNoop", "()Z", "PLACEHOLDER", "TITLE", "EMOJI_ROW", "EMOJI_ROW_SLIM", "EMOJI_ROW_NSFW", "FOOTER_UPSELL", "PREMIUM_INLINE_ROADBLOCK", "NATIVE_SECTION", "Companion", "emoji_picker_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final class EmojiPickerItemTypes {
    private static final /* synthetic */ EnumEntries $ENTRIES;
    private static final /* synthetic */ EmojiPickerItemTypes[] $VALUES;

    /* renamed from: Companion, reason: from kotlin metadata */
    @NotNull
    public static final Companion INSTANCE;
    private final boolean noop;

    @NotNull
    private final String unsupported;
    public static final EmojiPickerItemTypes PLACEHOLDER = new EmojiPickerItemTypes("PLACEHOLDER", 0, null, true, 1, null);
    public static final EmojiPickerItemTypes TITLE = new EmojiPickerItemTypes("TITLE", 1, null, false, 3, null);
    public static final EmojiPickerItemTypes EMOJI_ROW = new EmojiPickerItemTypes("EMOJI_ROW", 2, "Unsupported; don't send full emoji rows to native.", false, 2, null);
    public static final EmojiPickerItemTypes EMOJI_ROW_SLIM = new EmojiPickerItemTypes("EMOJI_ROW_SLIM", 3, null, false, 3, null);
    public static final EmojiPickerItemTypes EMOJI_ROW_NSFW = new EmojiPickerItemTypes("EMOJI_ROW_NSFW", 4, "Unsupported; can't render NSFW rows in native.", false, 2, null);
    public static final EmojiPickerItemTypes FOOTER_UPSELL = new EmojiPickerItemTypes("FOOTER_UPSELL", 5, null, false, 3, null);
    public static final EmojiPickerItemTypes PREMIUM_INLINE_ROADBLOCK = new EmojiPickerItemTypes("PREMIUM_INLINE_ROADBLOCK", 6, "Unsupported; feature included in native section.", false, 2, null);
    public static final EmojiPickerItemTypes NATIVE_SECTION = new EmojiPickerItemTypes("NATIVE_SECTION", 7, null, false, 3, null);

    @Metadata(d1 = {"\u0000\u0018\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\b\n\u0000\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\u000e\u0010\u0004\u001a\u00020\u00052\u0006\u0010\u0006\u001a\u00020\u0007¨\u0006\b"}, d2 = {"Lcom/discord/emoji_picker/react/deserialization/EmojiPickerItemTypes$Companion;", "", "<init>", "()V", "create", "Lcom/discord/emoji_picker/react/deserialization/EmojiPickerItemTypes;", "value", "", "emoji_picker_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final class Companion {
        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }

        @NotNull
        public final EmojiPickerItemTypes create(int value) {
            EmojiPickerItemTypes[] values = EmojiPickerItemTypes.values();
            if (value < 0 || value >= values.length) {
                throw new IllegalArgumentException(d.i(value, "Unknown emoji picker item type: "));
            }
            return values[value];
        }

        private Companion() {
        }
    }

    private static final /* synthetic */ EmojiPickerItemTypes[] $values() {
        return new EmojiPickerItemTypes[]{PLACEHOLDER, TITLE, EMOJI_ROW, EMOJI_ROW_SLIM, EMOJI_ROW_NSFW, FOOTER_UPSELL, PREMIUM_INLINE_ROADBLOCK, NATIVE_SECTION};
    }

    static {
        EmojiPickerItemTypes[] $values = $values();
        $VALUES = $values;
        $ENTRIES = b.p($values);
        INSTANCE = new Companion(null);
    }

    private EmojiPickerItemTypes(String str, int i5, String str2, boolean z5) {
        this.unsupported = str2;
        this.noop = z5;
    }

    @NotNull
    public static EnumEntries getEntries() {
        return $ENTRIES;
    }

    public static EmojiPickerItemTypes valueOf(String str) {
        return (EmojiPickerItemTypes) Enum.valueOf(EmojiPickerItemTypes.class, str);
    }

    public static EmojiPickerItemTypes[] values() {
        return (EmojiPickerItemTypes[]) $VALUES.clone();
    }

    public final boolean getNoop() {
        return this.noop;
    }

    @NotNull
    public final String getUnsupported() {
        return this.unsupported;
    }

    /* JADX WARN: Illegal instructions before constructor call */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public /* synthetic */ EmojiPickerItemTypes(String str, int i5, String str2, boolean z5, int i6, DefaultConstructorMarker defaultConstructorMarker) {
        this(str, i5, str2, (i6 & 2) != 0 ? false : z5);
        if ((i6 & 1) != 0) {
            str2 = "Unhandled type: " + INSTANCE;
        }
    }
}
