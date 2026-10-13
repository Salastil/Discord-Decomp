package com.margelo.nitro.rive;

import androidx.annotation.Keep;
import kotlin.Metadata;
import kotlin.enums.EnumEntries;
import org.jetbrains.annotations.NotNull;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
@Keep
@Metadata(d1 = {"\u0000\u0010\n\u0002\u0018\u0002\n\u0002\u0010\u0010\n\u0002\u0010\b\n\u0002\b\u0011\b\u0087\u0081\u0002\u0018\u0000 \t2\b\u0012\u0004\u0012\u00020\u00000\u0001:\u0001\nB\u0011\b\u0002\u0012\u0006\u0010\u0003\u001a\u00020\u0002¢\u0006\u0004\b\u0004\u0010\u0005R\u001a\u0010\u0003\u001a\u00020\u00028\u0006X\u0087\u0004¢\u0006\f\n\u0004\b\u0003\u0010\u0006\u001a\u0004\b\u0007\u0010\bj\u0002\b\u000bj\u0002\b\fj\u0002\b\rj\u0002\b\u000ej\u0002\b\u000fj\u0002\b\u0010j\u0002\b\u0011j\u0002\b\u0012¨\u0006\u0013"}, d2 = {"Lcom/margelo/nitro/rive/Fit;", "", "", "value", "<init>", "(Ljava/lang/String;II)V", "I", "getValue", "()I", "Companion", "com/margelo/nitro/rive/u", "FILL", "CONTAIN", "COVER", "FITWIDTH", "FITHEIGHT", "NONE", "SCALEDOWN", "LAYOUT", "rive-app_react-native_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
@ya.a
/* loaded from: classes3.dex */
public final class Fit {
    private static final /* synthetic */ EnumEntries $ENTRIES;
    private static final /* synthetic */ Fit[] $VALUES;

    @NotNull
    public static final u Companion;

    @Keep
    @ya.a
    private final int value;
    public static final Fit FILL = new Fit("FILL", 0, 0);
    public static final Fit CONTAIN = new Fit("CONTAIN", 1, 1);
    public static final Fit COVER = new Fit("COVER", 2, 2);
    public static final Fit FITWIDTH = new Fit("FITWIDTH", 3, 3);
    public static final Fit FITHEIGHT = new Fit("FITHEIGHT", 4, 4);
    public static final Fit NONE = new Fit("NONE", 5, 5);
    public static final Fit SCALEDOWN = new Fit("SCALEDOWN", 6, 6);
    public static final Fit LAYOUT = new Fit("LAYOUT", 7, 7);

    private static final /* synthetic */ Fit[] $values() {
        return new Fit[]{FILL, CONTAIN, COVER, FITWIDTH, FITHEIGHT, NONE, SCALEDOWN, LAYOUT};
    }

    static {
        Fit[] $values = $values();
        $VALUES = $values;
        $ENTRIES = ki.b.p($values);
        Companion = new u();
    }

    private Fit(String str, int i5, int i6) {
        this.value = i6;
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

    public final int getValue() {
        return this.value;
    }
}
