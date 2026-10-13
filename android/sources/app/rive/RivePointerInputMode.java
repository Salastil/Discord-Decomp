package app.rive;

import ki.b;
import kotlin.Metadata;
import kotlin.enums.EnumEntries;
import org.jetbrains.annotations.NotNull;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
@Metadata(d1 = {"\u0000\f\n\u0002\u0018\u0002\n\u0002\u0010\u0010\n\u0002\b\u0005\b\u0086\u0081\u0002\u0018\u00002\b\u0012\u0004\u0012\u00020\u00000\u0001B\u0007\b\u0002¢\u0006\u0002\u0010\u0002j\u0002\b\u0003j\u0002\b\u0004j\u0002\b\u0005¨\u0006\u0006"}, d2 = {"Lapp/rive/RivePointerInputMode;", "", "(Ljava/lang/String;I)V", "Consume", "Observe", "PassThrough", "kotlin_release"}, k = 1, mv = {1, 9, 0}, xi = 48)
/* loaded from: classes.dex */
public final class RivePointerInputMode {
    private static final /* synthetic */ EnumEntries $ENTRIES;
    private static final /* synthetic */ RivePointerInputMode[] $VALUES;
    public static final RivePointerInputMode Consume = new RivePointerInputMode("Consume", 0);
    public static final RivePointerInputMode Observe = new RivePointerInputMode("Observe", 1);
    public static final RivePointerInputMode PassThrough = new RivePointerInputMode("PassThrough", 2);

    private static final /* synthetic */ RivePointerInputMode[] $values() {
        return new RivePointerInputMode[]{Consume, Observe, PassThrough};
    }

    static {
        RivePointerInputMode[] $values = $values();
        $VALUES = $values;
        $ENTRIES = b.p($values);
    }

    private RivePointerInputMode(String str, int i5) {
    }

    @NotNull
    public static EnumEntries getEntries() {
        return $ENTRIES;
    }

    public static RivePointerInputMode valueOf(String str) {
        return (RivePointerInputMode) Enum.valueOf(RivePointerInputMode.class, str);
    }

    public static RivePointerInputMode[] values() {
        return (RivePointerInputMode[]) $VALUES.clone();
    }
}
