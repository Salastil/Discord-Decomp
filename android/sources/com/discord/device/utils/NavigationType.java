package com.discord.device.utils;

import ki.b;
import kotlin.Metadata;
import kotlin.enums.EnumEntries;
import org.jetbrains.annotations.NotNull;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
@Metadata(d1 = {"\u0000\u0012\n\u0002\u0018\u0002\n\u0002\u0010\u0010\n\u0000\n\u0002\u0010\b\n\u0002\b\b\b\u0082\u0081\u0002\u0018\u00002\b\u0012\u0004\u0012\u00020\u00000\u0001B\u0011\b\u0002\u0012\u0006\u0010\u0002\u001a\u00020\u0003¢\u0006\u0004\b\u0004\u0010\u0005R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0006\u0010\u0007j\u0002\b\bj\u0002\b\tj\u0002\b\n¨\u0006\u000b"}, d2 = {"Lcom/discord/device/utils/NavigationType;", "", "value", "", "<init>", "(Ljava/lang/String;II)V", "getValue", "()I", "BUTTON_THREE", "BUTTON_TWO", "GESTURE", "device_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
final class NavigationType {
    private static final /* synthetic */ EnumEntries $ENTRIES;
    private static final /* synthetic */ NavigationType[] $VALUES;
    public static final NavigationType BUTTON_THREE = new NavigationType("BUTTON_THREE", 0, 0);
    public static final NavigationType BUTTON_TWO = new NavigationType("BUTTON_TWO", 1, 1);
    public static final NavigationType GESTURE = new NavigationType("GESTURE", 2, 2);
    private final int value;

    private static final /* synthetic */ NavigationType[] $values() {
        return new NavigationType[]{BUTTON_THREE, BUTTON_TWO, GESTURE};
    }

    static {
        NavigationType[] $values = $values();
        $VALUES = $values;
        $ENTRIES = b.p($values);
    }

    private NavigationType(String str, int i5, int i6) {
        this.value = i6;
    }

    @NotNull
    public static EnumEntries getEntries() {
        return $ENTRIES;
    }

    public static NavigationType valueOf(String str) {
        return (NavigationType) Enum.valueOf(NavigationType.class, str);
    }

    public static NavigationType[] values() {
        return (NavigationType[]) $VALUES.clone();
    }

    public final int getValue() {
        return this.value;
    }
}
