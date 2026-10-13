package app.rive.runtime.kotlin.renderers;

import ki.b;
import kotlin.Metadata;
import kotlin.enums.EnumEntries;
import org.jetbrains.annotations.NotNull;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
@Metadata(d1 = {"\u0000\f\n\u0002\u0018\u0002\n\u0002\u0010\u0010\n\u0002\b\u0004\b\u0086\u0081\u0002\u0018\u00002\b\u0012\u0004\u0012\u00020\u00000\u0001B\u0007\b\u0002¢\u0006\u0002\u0010\u0002j\u0002\b\u0003j\u0002\b\u0004¨\u0006\u0005"}, d2 = {"Lapp/rive/runtime/kotlin/renderers/RenderContextEventType;", "", "(Ljava/lang/String;I)V", "Lost", "Recovered", "kotlin_release"}, k = 1, mv = {1, 9, 0}, xi = 48)
/* loaded from: classes.dex */
public final class RenderContextEventType {
    private static final /* synthetic */ EnumEntries $ENTRIES;
    private static final /* synthetic */ RenderContextEventType[] $VALUES;
    public static final RenderContextEventType Lost = new RenderContextEventType("Lost", 0);
    public static final RenderContextEventType Recovered = new RenderContextEventType("Recovered", 1);

    private static final /* synthetic */ RenderContextEventType[] $values() {
        return new RenderContextEventType[]{Lost, Recovered};
    }

    static {
        RenderContextEventType[] $values = $values();
        $VALUES = $values;
        $ENTRIES = b.p($values);
    }

    private RenderContextEventType(String str, int i5) {
    }

    @NotNull
    public static EnumEntries getEntries() {
        return $ENTRIES;
    }

    public static RenderContextEventType valueOf(String str) {
        return (RenderContextEventType) Enum.valueOf(RenderContextEventType.class, str);
    }

    public static RenderContextEventType[] values() {
        return (RenderContextEventType[]) $VALUES.clone();
    }
}
