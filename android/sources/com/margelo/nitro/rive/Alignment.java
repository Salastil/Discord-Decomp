package com.margelo.nitro.rive;

import androidx.annotation.Keep;
import kotlin.Metadata;
import kotlin.enums.EnumEntries;
import org.jetbrains.annotations.NotNull;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
@Keep
@Metadata(d1 = {"\u0000\u0010\n\u0002\u0018\u0002\n\u0002\u0010\u0010\n\u0002\u0010\b\n\u0002\b\u0012\b\u0087\u0081\u0002\u0018\u0000 \t2\b\u0012\u0004\u0012\u00020\u00000\u0001:\u0001\nB\u0011\b\u0002\u0012\u0006\u0010\u0003\u001a\u00020\u0002¢\u0006\u0004\b\u0004\u0010\u0005R\u001a\u0010\u0003\u001a\u00020\u00028\u0006X\u0087\u0004¢\u0006\f\n\u0004\b\u0003\u0010\u0006\u001a\u0004\b\u0007\u0010\bj\u0002\b\u000bj\u0002\b\fj\u0002\b\rj\u0002\b\u000ej\u0002\b\u000fj\u0002\b\u0010j\u0002\b\u0011j\u0002\b\u0012j\u0002\b\u0013¨\u0006\u0014"}, d2 = {"Lcom/margelo/nitro/rive/Alignment;", "", "", "value", "<init>", "(Ljava/lang/String;II)V", "I", "getValue", "()I", "Companion", "com/margelo/nitro/rive/a", "TOPLEFT", "TOPCENTER", "TOPRIGHT", "CENTERLEFT", "CENTER", "CENTERRIGHT", "BOTTOMLEFT", "BOTTOMCENTER", "BOTTOMRIGHT", "rive-app_react-native_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
@ya.a
/* loaded from: classes3.dex */
public final class Alignment {
    private static final /* synthetic */ EnumEntries $ENTRIES;
    private static final /* synthetic */ Alignment[] $VALUES;

    @NotNull
    public static final a Companion;

    @Keep
    @ya.a
    private final int value;
    public static final Alignment TOPLEFT = new Alignment("TOPLEFT", 0, 0);
    public static final Alignment TOPCENTER = new Alignment("TOPCENTER", 1, 1);
    public static final Alignment TOPRIGHT = new Alignment("TOPRIGHT", 2, 2);
    public static final Alignment CENTERLEFT = new Alignment("CENTERLEFT", 3, 3);
    public static final Alignment CENTER = new Alignment("CENTER", 4, 4);
    public static final Alignment CENTERRIGHT = new Alignment("CENTERRIGHT", 5, 5);
    public static final Alignment BOTTOMLEFT = new Alignment("BOTTOMLEFT", 6, 6);
    public static final Alignment BOTTOMCENTER = new Alignment("BOTTOMCENTER", 7, 7);
    public static final Alignment BOTTOMRIGHT = new Alignment("BOTTOMRIGHT", 8, 8);

    private static final /* synthetic */ Alignment[] $values() {
        return new Alignment[]{TOPLEFT, TOPCENTER, TOPRIGHT, CENTERLEFT, CENTER, CENTERRIGHT, BOTTOMLEFT, BOTTOMCENTER, BOTTOMRIGHT};
    }

    static {
        Alignment[] $values = $values();
        $VALUES = $values;
        $ENTRIES = ki.b.p($values);
        Companion = new a();
    }

    private Alignment(String str, int i5, int i6) {
        this.value = i6;
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

    public final int getValue() {
        return this.value;
    }
}
