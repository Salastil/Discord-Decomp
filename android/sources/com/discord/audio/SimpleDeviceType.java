package com.discord.audio;

import kotlin.Metadata;
import kotlin.enums.EnumEntries;
import org.jetbrains.annotations.NotNull;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
@Metadata(d1 = {"\u0000\f\n\u0002\u0018\u0002\n\u0002\u0010\u0010\n\u0002\b\t\b\u0086\u0081\u0002\u0018\u00002\b\u0012\u0004\u0012\u00020\u00000\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003j\u0002\b\u0004j\u0002\b\u0005j\u0002\b\u0006j\u0002\b\u0007j\u0002\b\bj\u0002\b\t¨\u0006\n"}, d2 = {"Lcom/discord/audio/SimpleDeviceType;", "", "<init>", "(Ljava/lang/String;I)V", "DEFAULT", "INVALID", "SPEAKERPHONE", "WIRED_HEADSET", "EARPIECE", "BLUETOOTH_HEADSET", "audio_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final class SimpleDeviceType {
    private static final /* synthetic */ EnumEntries $ENTRIES;
    private static final /* synthetic */ SimpleDeviceType[] $VALUES;
    public static final SimpleDeviceType DEFAULT = new SimpleDeviceType("DEFAULT", 0);
    public static final SimpleDeviceType INVALID = new SimpleDeviceType("INVALID", 1);
    public static final SimpleDeviceType SPEAKERPHONE = new SimpleDeviceType("SPEAKERPHONE", 2);
    public static final SimpleDeviceType WIRED_HEADSET = new SimpleDeviceType("WIRED_HEADSET", 3);
    public static final SimpleDeviceType EARPIECE = new SimpleDeviceType("EARPIECE", 4);
    public static final SimpleDeviceType BLUETOOTH_HEADSET = new SimpleDeviceType("BLUETOOTH_HEADSET", 5);

    private static final /* synthetic */ SimpleDeviceType[] $values() {
        return new SimpleDeviceType[]{DEFAULT, INVALID, SPEAKERPHONE, WIRED_HEADSET, EARPIECE, BLUETOOTH_HEADSET};
    }

    static {
        SimpleDeviceType[] $values = $values();
        $VALUES = $values;
        $ENTRIES = ki.b.p($values);
    }

    private SimpleDeviceType(String str, int i5) {
    }

    @NotNull
    public static EnumEntries getEntries() {
        return $ENTRIES;
    }

    public static SimpleDeviceType valueOf(String str) {
        return (SimpleDeviceType) Enum.valueOf(SimpleDeviceType.class, str);
    }

    public static SimpleDeviceType[] values() {
        return (SimpleDeviceType[]) $VALUES.clone();
    }
}
