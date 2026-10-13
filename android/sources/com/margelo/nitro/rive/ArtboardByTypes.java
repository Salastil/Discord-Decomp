package com.margelo.nitro.rive;

import androidx.annotation.Keep;
import kotlin.Metadata;
import kotlin.enums.EnumEntries;
import org.jetbrains.annotations.NotNull;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
@Keep
@Metadata(d1 = {"\u0000\u0010\n\u0002\u0018\u0002\n\u0002\u0010\u0010\n\u0002\u0010\b\n\u0002\b\u000b\b\u0087\u0081\u0002\u0018\u0000 \t2\b\u0012\u0004\u0012\u00020\u00000\u0001:\u0001\nB\u0011\b\u0002\u0012\u0006\u0010\u0003\u001a\u00020\u0002¢\u0006\u0004\b\u0004\u0010\u0005R\u001a\u0010\u0003\u001a\u00020\u00028\u0006X\u0087\u0004¢\u0006\f\n\u0004\b\u0003\u0010\u0006\u001a\u0004\b\u0007\u0010\bj\u0002\b\u000bj\u0002\b\f¨\u0006\r"}, d2 = {"Lcom/margelo/nitro/rive/ArtboardByTypes;", "", "", "value", "<init>", "(Ljava/lang/String;II)V", "I", "getValue", "()I", "Companion", "com/margelo/nitro/rive/b", "INDEX", "NAME", "rive-app_react-native_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
@ya.a
/* loaded from: classes3.dex */
public final class ArtboardByTypes {
    private static final /* synthetic */ EnumEntries $ENTRIES;
    private static final /* synthetic */ ArtboardByTypes[] $VALUES;

    @NotNull
    public static final b Companion;
    public static final ArtboardByTypes INDEX = new ArtboardByTypes("INDEX", 0, 0);
    public static final ArtboardByTypes NAME = new ArtboardByTypes("NAME", 1, 1);

    @Keep
    @ya.a
    private final int value;

    private static final /* synthetic */ ArtboardByTypes[] $values() {
        return new ArtboardByTypes[]{INDEX, NAME};
    }

    static {
        ArtboardByTypes[] $values = $values();
        $VALUES = $values;
        $ENTRIES = ki.b.p($values);
        Companion = new b();
    }

    private ArtboardByTypes(String str, int i5, int i6) {
        this.value = i6;
    }

    @NotNull
    public static EnumEntries getEntries() {
        return $ENTRIES;
    }

    public static ArtboardByTypes valueOf(String str) {
        return (ArtboardByTypes) Enum.valueOf(ArtboardByTypes.class, str);
    }

    public static ArtboardByTypes[] values() {
        return (ArtboardByTypes[]) $VALUES.clone();
    }

    public final int getValue() {
        return this.value;
    }
}
