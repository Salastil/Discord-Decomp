package com.margelo.nitro.rive;

import androidx.annotation.Keep;
import kotlin.Metadata;
import kotlin.enums.EnumEntries;
import org.jetbrains.annotations.NotNull;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
@Keep
@Metadata(d1 = {"\u0000\u0010\n\u0002\u0018\u0002\n\u0002\u0010\u0010\n\u0002\u0010\b\n\u0002\b\u000b\b\u0087\u0081\u0002\u0018\u0000 \t2\b\u0012\u0004\u0012\u00020\u00000\u0001:\u0001\nB\u0011\b\u0002\u0012\u0006\u0010\u0003\u001a\u00020\u0002¢\u0006\u0004\b\u0004\u0010\u0005R\u001a\u0010\u0003\u001a\u00020\u00028\u0006X\u0087\u0004¢\u0006\f\n\u0004\b\u0003\u0010\u0006\u001a\u0004\b\u0007\u0010\bj\u0002\b\u000bj\u0002\b\f¨\u0006\r"}, d2 = {"Lcom/margelo/nitro/rive/DataBindMode;", "", "", "value", "<init>", "(Ljava/lang/String;II)V", "I", "getValue", "()I", "Companion", "com/margelo/nitro/rive/f", "AUTO", "NONE", "rive-app_react-native_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
@ya.a
/* loaded from: classes3.dex */
public final class DataBindMode {
    private static final /* synthetic */ EnumEntries $ENTRIES;
    private static final /* synthetic */ DataBindMode[] $VALUES;

    @NotNull
    public static final f Companion;

    @Keep
    @ya.a
    private final int value;
    public static final DataBindMode AUTO = new DataBindMode("AUTO", 0, 0);
    public static final DataBindMode NONE = new DataBindMode("NONE", 1, 1);

    private static final /* synthetic */ DataBindMode[] $values() {
        return new DataBindMode[]{AUTO, NONE};
    }

    static {
        DataBindMode[] $values = $values();
        $VALUES = $values;
        $ENTRIES = ki.b.p($values);
        Companion = new f();
    }

    private DataBindMode(String str, int i5, int i6) {
        this.value = i6;
    }

    @NotNull
    public static EnumEntries getEntries() {
        return $ENTRIES;
    }

    public static DataBindMode valueOf(String str) {
        return (DataBindMode) Enum.valueOf(DataBindMode.class, str);
    }

    public static DataBindMode[] values() {
        return (DataBindMode[]) $VALUES.clone();
    }

    public final int getValue() {
        return this.value;
    }
}
