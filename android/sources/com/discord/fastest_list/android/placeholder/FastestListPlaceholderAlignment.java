package com.discord.fastest_list.android.placeholder;

import com.facebook.react.uimanager.ViewProps;
import ki.b;
import kotlin.Metadata;
import kotlin.enums.EnumEntries;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u0000\f\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0005\bÀ\u0002\u0018\u00002\u00020\u0001:\u0002\u0004\u0005B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003¨\u0006\u0006"}, d2 = {"Lcom/discord/fastest_list/android/placeholder/FastestListPlaceholderAlignment;", "", "<init>", "()V", "Horizontal", "Vertical", "fastest_list_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final class FastestListPlaceholderAlignment {

    @NotNull
    public static final FastestListPlaceholderAlignment INSTANCE = new FastestListPlaceholderAlignment();

    /* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
    /* JADX WARN: Unknown enum class pattern. Please report as an issue! */
    @Metadata(d1 = {"\u0000\f\n\u0002\u0018\u0002\n\u0002\u0010\u0010\n\u0002\b\u0007\b\u0086\u0081\u0002\u0018\u0000 \u00072\b\u0012\u0004\u0012\u00020\u00000\u0001:\u0001\u0007B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003j\u0002\b\u0004j\u0002\b\u0005j\u0002\b\u0006¨\u0006\b"}, d2 = {"Lcom/discord/fastest_list/android/placeholder/FastestListPlaceholderAlignment$Horizontal;", "", "<init>", "(Ljava/lang/String;I)V", "LEFT", "RIGHT", "CENTER", "Companion", "fastest_list_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final class Horizontal {
        private static final /* synthetic */ EnumEntries $ENTRIES;
        private static final /* synthetic */ Horizontal[] $VALUES;

        /* renamed from: Companion, reason: from kotlin metadata */
        @NotNull
        public static final Companion INSTANCE;
        public static final Horizontal LEFT = new Horizontal("LEFT", 0);
        public static final Horizontal RIGHT = new Horizontal("RIGHT", 1);
        public static final Horizontal CENTER = new Horizontal("CENTER", 2);

        @Metadata(d1 = {"\u0000\u0018\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0000\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\u000e\u0010\u0004\u001a\u00020\u00052\u0006\u0010\u0006\u001a\u00020\u0007¨\u0006\b"}, d2 = {"Lcom/discord/fastest_list/android/placeholder/FastestListPlaceholderAlignment$Horizontal$Companion;", "", "<init>", "()V", "parse", "Lcom/discord/fastest_list/android/placeholder/FastestListPlaceholderAlignment$Horizontal;", "value", "", "fastest_list_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
        public static final class Companion {
            public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
                this();
            }

            @NotNull
            public final Horizontal parse(@NotNull String value) {
                Intrinsics.checkNotNullParameter(value, "value");
                int hashCode = value.hashCode();
                if (hashCode != -1364013995) {
                    if (hashCode != 3317767) {
                        if (hashCode == 108511772 && value.equals(ViewProps.RIGHT)) {
                            return Horizontal.RIGHT;
                        }
                    } else if (value.equals(ViewProps.LEFT)) {
                        return Horizontal.LEFT;
                    }
                } else if (value.equals("center")) {
                    return Horizontal.CENTER;
                }
                throw new IllegalStateException("Unknown alignment: ".concat(value).toString());
            }

            private Companion() {
            }
        }

        private static final /* synthetic */ Horizontal[] $values() {
            return new Horizontal[]{LEFT, RIGHT, CENTER};
        }

        static {
            Horizontal[] $values = $values();
            $VALUES = $values;
            $ENTRIES = b.p($values);
            INSTANCE = new Companion(null);
        }

        private Horizontal(String str, int i5) {
        }

        @NotNull
        public static EnumEntries getEntries() {
            return $ENTRIES;
        }

        public static Horizontal valueOf(String str) {
            return (Horizontal) Enum.valueOf(Horizontal.class, str);
        }

        public static Horizontal[] values() {
            return (Horizontal[]) $VALUES.clone();
        }
    }

    /* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
    /* JADX WARN: Unknown enum class pattern. Please report as an issue! */
    @Metadata(d1 = {"\u0000\f\n\u0002\u0018\u0002\n\u0002\u0010\u0010\n\u0002\b\u0007\b\u0086\u0081\u0002\u0018\u0000 \u00072\b\u0012\u0004\u0012\u00020\u00000\u0001:\u0001\u0007B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003j\u0002\b\u0004j\u0002\b\u0005j\u0002\b\u0006¨\u0006\b"}, d2 = {"Lcom/discord/fastest_list/android/placeholder/FastestListPlaceholderAlignment$Vertical;", "", "<init>", "(Ljava/lang/String;I)V", "TOP", "BOTTOM", "CENTER", "Companion", "fastest_list_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final class Vertical {
        private static final /* synthetic */ EnumEntries $ENTRIES;
        private static final /* synthetic */ Vertical[] $VALUES;

        /* renamed from: Companion, reason: from kotlin metadata */
        @NotNull
        public static final Companion INSTANCE;
        public static final Vertical TOP = new Vertical("TOP", 0);
        public static final Vertical BOTTOM = new Vertical("BOTTOM", 1);
        public static final Vertical CENTER = new Vertical("CENTER", 2);

        @Metadata(d1 = {"\u0000\u0018\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0000\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\u000e\u0010\u0004\u001a\u00020\u00052\u0006\u0010\u0006\u001a\u00020\u0007¨\u0006\b"}, d2 = {"Lcom/discord/fastest_list/android/placeholder/FastestListPlaceholderAlignment$Vertical$Companion;", "", "<init>", "()V", "parse", "Lcom/discord/fastest_list/android/placeholder/FastestListPlaceholderAlignment$Vertical;", "value", "", "fastest_list_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
        public static final class Companion {
            public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
                this();
            }

            @NotNull
            public final Vertical parse(@NotNull String value) {
                Intrinsics.checkNotNullParameter(value, "value");
                int hashCode = value.hashCode();
                if (hashCode != -1383228885) {
                    if (hashCode != -1364013995) {
                        if (hashCode == 115029 && value.equals(ViewProps.TOP)) {
                            return Vertical.TOP;
                        }
                    } else if (value.equals("center")) {
                        return Vertical.CENTER;
                    }
                } else if (value.equals(ViewProps.BOTTOM)) {
                    return Vertical.BOTTOM;
                }
                throw new IllegalStateException("Unknown alignment: ".concat(value).toString());
            }

            private Companion() {
            }
        }

        private static final /* synthetic */ Vertical[] $values() {
            return new Vertical[]{TOP, BOTTOM, CENTER};
        }

        static {
            Vertical[] $values = $values();
            $VALUES = $values;
            $ENTRIES = b.p($values);
            INSTANCE = new Companion(null);
        }

        private Vertical(String str, int i5) {
        }

        @NotNull
        public static EnumEntries getEntries() {
            return $ENTRIES;
        }

        public static Vertical valueOf(String str) {
            return (Vertical) Enum.valueOf(Vertical.class, str);
        }

        public static Vertical[] values() {
            return (Vertical[]) $VALUES.clone();
        }
    }

    private FastestListPlaceholderAlignment() {
    }
}
