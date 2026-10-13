package app.rive.runtime.kotlin.core;

import a3.e;
import ki.b;
import kotlin.Metadata;
import kotlin.enums.EnumEntries;
import kotlin.jvm.internal.DefaultConstructorMarker;
import org.jetbrains.annotations.NotNull;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
@Metadata(d1 = {"\u0000\f\n\u0002\u0018\u0002\n\u0002\u0010\u0010\n\u0002\b\u0007\b\u0086\u0081\u0002\u0018\u0000 \u00072\b\u0012\u0004\u0012\u00020\u00000\u0001:\u0001\u0007B\u0007\b\u0002¢\u0006\u0002\u0010\u0002j\u0002\b\u0003j\u0002\b\u0004j\u0002\b\u0005j\u0002\b\u0006¨\u0006\b"}, d2 = {"Lapp/rive/runtime/kotlin/core/Loop;", "", "(Ljava/lang/String;I)V", "ONESHOT", "LOOP", "PINGPONG", "AUTO", "Companion", "kotlin_release"}, k = 1, mv = {1, 9, 0}, xi = 48)
/* loaded from: classes.dex */
public final class Loop {
    private static final /* synthetic */ EnumEntries $ENTRIES;
    private static final /* synthetic */ Loop[] $VALUES;

    /* renamed from: Companion, reason: from kotlin metadata */
    @NotNull
    public static final Companion INSTANCE;
    public static final Loop ONESHOT = new Loop("ONESHOT", 0);
    public static final Loop LOOP = new Loop("LOOP", 1);
    public static final Loop PINGPONG = new Loop("PINGPONG", 2);
    public static final Loop AUTO = new Loop("AUTO", 3);

    @Metadata(d1 = {"\u0000\u0018\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\b\n\u0000\b\u0086\u0003\u0018\u00002\u00020\u0001B\u0007\b\u0002¢\u0006\u0002\u0010\u0002J\u000e\u0010\u0003\u001a\u00020\u00042\u0006\u0010\u0005\u001a\u00020\u0006¨\u0006\u0007"}, d2 = {"Lapp/rive/runtime/kotlin/core/Loop$Companion;", "", "()V", "fromIndex", "Lapp/rive/runtime/kotlin/core/Loop;", "index", "", "kotlin_release"}, k = 1, mv = {1, 9, 0}, xi = 48)
    public static final class Companion {
        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }

        @NotNull
        public final Loop fromIndex(int index) {
            int size = Loop.getEntries().size();
            if (index < 0 || index > size) {
                throw new IndexOutOfBoundsException(e.f(index, size, "Invalid Loop index value ", ". It must be between 0 and "));
            }
            return (Loop) Loop.getEntries().get(index);
        }

        private Companion() {
        }
    }

    private static final /* synthetic */ Loop[] $values() {
        return new Loop[]{ONESHOT, LOOP, PINGPONG, AUTO};
    }

    static {
        Loop[] $values = $values();
        $VALUES = $values;
        $ENTRIES = b.p($values);
        INSTANCE = new Companion(null);
    }

    private Loop(String str, int i5) {
    }

    @NotNull
    public static EnumEntries getEntries() {
        return $ENTRIES;
    }

    public static Loop valueOf(String str) {
        return (Loop) Enum.valueOf(Loop.class, str);
    }

    public static Loop[] values() {
        return (Loop[]) $VALUES.clone();
    }
}
