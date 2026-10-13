package app.rive.runtime.kotlin.core;

import a3.e;
import ki.b;
import kotlin.Metadata;
import kotlin.enums.EnumEntries;
import kotlin.jvm.internal.DefaultConstructorMarker;
import org.jetbrains.annotations.NotNull;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
@Metadata(d1 = {"\u0000\f\n\u0002\u0018\u0002\n\u0002\u0010\u0010\n\u0002\b\f\b\u0086\u0081\u0002\u0018\u0000 \f2\b\u0012\u0004\u0012\u00020\u00000\u0001:\u0001\fB\u0007\b\u0002¢\u0006\u0002\u0010\u0002j\u0002\b\u0003j\u0002\b\u0004j\u0002\b\u0005j\u0002\b\u0006j\u0002\b\u0007j\u0002\b\bj\u0002\b\tj\u0002\b\nj\u0002\b\u000b¨\u0006\r"}, d2 = {"Lapp/rive/runtime/kotlin/core/Alignment;", "", "(Ljava/lang/String;I)V", "TOP_LEFT", "TOP_CENTER", "TOP_RIGHT", "CENTER_LEFT", "CENTER", "CENTER_RIGHT", "BOTTOM_LEFT", "BOTTOM_CENTER", "BOTTOM_RIGHT", "Companion", "kotlin_release"}, k = 1, mv = {1, 9, 0}, xi = 48)
/* loaded from: classes.dex */
public final class Alignment {
    private static final /* synthetic */ EnumEntries $ENTRIES;
    private static final /* synthetic */ Alignment[] $VALUES;

    /* renamed from: Companion, reason: from kotlin metadata */
    @NotNull
    public static final Companion INSTANCE;
    public static final Alignment TOP_LEFT = new Alignment("TOP_LEFT", 0);
    public static final Alignment TOP_CENTER = new Alignment("TOP_CENTER", 1);
    public static final Alignment TOP_RIGHT = new Alignment("TOP_RIGHT", 2);
    public static final Alignment CENTER_LEFT = new Alignment("CENTER_LEFT", 3);
    public static final Alignment CENTER = new Alignment("CENTER", 4);
    public static final Alignment CENTER_RIGHT = new Alignment("CENTER_RIGHT", 5);
    public static final Alignment BOTTOM_LEFT = new Alignment("BOTTOM_LEFT", 6);
    public static final Alignment BOTTOM_CENTER = new Alignment("BOTTOM_CENTER", 7);
    public static final Alignment BOTTOM_RIGHT = new Alignment("BOTTOM_RIGHT", 8);

    @Metadata(d1 = {"\u0000\u0018\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\b\n\u0000\b\u0086\u0003\u0018\u00002\u00020\u0001B\u0007\b\u0002¢\u0006\u0002\u0010\u0002J\u000e\u0010\u0003\u001a\u00020\u00042\u0006\u0010\u0005\u001a\u00020\u0006¨\u0006\u0007"}, d2 = {"Lapp/rive/runtime/kotlin/core/Alignment$Companion;", "", "()V", "fromIndex", "Lapp/rive/runtime/kotlin/core/Alignment;", "index", "", "kotlin_release"}, k = 1, mv = {1, 9, 0}, xi = 48)
    public static final class Companion {
        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }

        @NotNull
        public final Alignment fromIndex(int index) {
            int size = Alignment.getEntries().size();
            if (index < 0 || index > size) {
                throw new IndexOutOfBoundsException(e.f(index, size, "Invalid Alignment index value ", ". It must be between 0 and "));
            }
            return (Alignment) Alignment.getEntries().get(index);
        }

        private Companion() {
        }
    }

    private static final /* synthetic */ Alignment[] $values() {
        return new Alignment[]{TOP_LEFT, TOP_CENTER, TOP_RIGHT, CENTER_LEFT, CENTER, CENTER_RIGHT, BOTTOM_LEFT, BOTTOM_CENTER, BOTTOM_RIGHT};
    }

    static {
        Alignment[] $values = $values();
        $VALUES = $values;
        $ENTRIES = b.p($values);
        INSTANCE = new Companion(null);
    }

    private Alignment(String str, int i5) {
    }

    @NotNull
    public static EnumEntries getEntries() {
        return $ENTRIES;
    }

    public static Alignment valueOf(String str) {
        return (Alignment) Enum.valueOf(Alignment.class, str);
    }

    public static Alignment[] values() {
        return (Alignment[]) $VALUES.clone();
    }
}
