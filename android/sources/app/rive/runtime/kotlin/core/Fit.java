package app.rive.runtime.kotlin.core;

import a3.e;
import ki.b;
import kotlin.Metadata;
import kotlin.enums.EnumEntries;
import kotlin.jvm.internal.DefaultConstructorMarker;
import org.jetbrains.annotations.NotNull;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
@Metadata(d1 = {"\u0000\f\n\u0002\u0018\u0002\n\u0002\u0010\u0010\n\u0002\b\u000b\b\u0086\u0081\u0002\u0018\u0000 \u000b2\b\u0012\u0004\u0012\u00020\u00000\u0001:\u0001\u000bB\u0007\b\u0002¢\u0006\u0002\u0010\u0002j\u0002\b\u0003j\u0002\b\u0004j\u0002\b\u0005j\u0002\b\u0006j\u0002\b\u0007j\u0002\b\bj\u0002\b\tj\u0002\b\n¨\u0006\f"}, d2 = {"Lapp/rive/runtime/kotlin/core/Fit;", "", "(Ljava/lang/String;I)V", "FILL", "CONTAIN", "COVER", "FIT_WIDTH", "FIT_HEIGHT", "NONE", "SCALE_DOWN", "LAYOUT", "Companion", "kotlin_release"}, k = 1, mv = {1, 9, 0}, xi = 48)
/* loaded from: classes.dex */
public final class Fit {
    private static final /* synthetic */ EnumEntries $ENTRIES;
    private static final /* synthetic */ Fit[] $VALUES;

    /* renamed from: Companion, reason: from kotlin metadata */
    @NotNull
    public static final Companion INSTANCE;
    public static final Fit FILL = new Fit("FILL", 0);
    public static final Fit CONTAIN = new Fit("CONTAIN", 1);
    public static final Fit COVER = new Fit("COVER", 2);
    public static final Fit FIT_WIDTH = new Fit("FIT_WIDTH", 3);
    public static final Fit FIT_HEIGHT = new Fit("FIT_HEIGHT", 4);
    public static final Fit NONE = new Fit("NONE", 5);
    public static final Fit SCALE_DOWN = new Fit("SCALE_DOWN", 6);
    public static final Fit LAYOUT = new Fit("LAYOUT", 7);

    @Metadata(d1 = {"\u0000\u0018\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\b\n\u0000\b\u0086\u0003\u0018\u00002\u00020\u0001B\u0007\b\u0002¢\u0006\u0002\u0010\u0002J\u000e\u0010\u0003\u001a\u00020\u00042\u0006\u0010\u0005\u001a\u00020\u0006¨\u0006\u0007"}, d2 = {"Lapp/rive/runtime/kotlin/core/Fit$Companion;", "", "()V", "fromIndex", "Lapp/rive/runtime/kotlin/core/Fit;", "index", "", "kotlin_release"}, k = 1, mv = {1, 9, 0}, xi = 48)
    public static final class Companion {
        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }

        @NotNull
        public final Fit fromIndex(int index) {
            int size = Fit.getEntries().size();
            if (index < 0 || index > size) {
                throw new IndexOutOfBoundsException(e.f(index, size, "Invalid Fit index value ", ". It must be between 0 and "));
            }
            return (Fit) Fit.getEntries().get(index);
        }

        private Companion() {
        }
    }

    private static final /* synthetic */ Fit[] $values() {
        return new Fit[]{FILL, CONTAIN, COVER, FIT_WIDTH, FIT_HEIGHT, NONE, SCALE_DOWN, LAYOUT};
    }

    static {
        Fit[] $values = $values();
        $VALUES = $values;
        $ENTRIES = b.p($values);
        INSTANCE = new Companion(null);
    }

    private Fit(String str, int i5) {
    }

    @NotNull
    public static EnumEntries getEntries() {
        return $ENTRIES;
    }

    public static Fit valueOf(String str) {
        return (Fit) Enum.valueOf(Fit.class, str);
    }

    public static Fit[] values() {
        return (Fit[]) $VALUES.clone();
    }
}
