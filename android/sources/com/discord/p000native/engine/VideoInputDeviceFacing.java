package com.discord.p000native.engine;

import ki.b;
import kotlin.Metadata;
import kotlin.enums.EnumEntries;
import org.jetbrains.annotations.NotNull;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
@Metadata(d1 = {"\u0000\f\n\u0002\u0018\u0002\n\u0002\u0010\u0010\n\u0002\b\u0005\b\u0086\u0081\u0002\u0018\u00002\b\u0012\u0004\u0012\u00020\u00000\u0001B\u0007\b\u0002¢\u0006\u0002\u0010\u0002j\u0002\b\u0003j\u0002\b\u0004j\u0002\b\u0005¨\u0006\u0006"}, d2 = {"Lcom/discord/native/engine/VideoInputDeviceFacing;", "", "(Ljava/lang/String;I)V", "Unknown", "Front", "Back", "android_release"}, k = 1, mv = {1, 9, 0}, xi = 48)
/* loaded from: classes.dex */
public final class VideoInputDeviceFacing {
    private static final /* synthetic */ EnumEntries $ENTRIES;
    private static final /* synthetic */ VideoInputDeviceFacing[] $VALUES;
    public static final VideoInputDeviceFacing Unknown = new VideoInputDeviceFacing("Unknown", 0);
    public static final VideoInputDeviceFacing Front = new VideoInputDeviceFacing("Front", 1);
    public static final VideoInputDeviceFacing Back = new VideoInputDeviceFacing("Back", 2);

    private static final /* synthetic */ VideoInputDeviceFacing[] $values() {
        return new VideoInputDeviceFacing[]{Unknown, Front, Back};
    }

    static {
        VideoInputDeviceFacing[] $values = $values();
        $VALUES = $values;
        $ENTRIES = b.p($values);
    }

    private VideoInputDeviceFacing(String str, int i5) {
    }

    @NotNull
    public static EnumEntries getEntries() {
        return $ENTRIES;
    }

    public static VideoInputDeviceFacing valueOf(String str) {
        return (VideoInputDeviceFacing) Enum.valueOf(VideoInputDeviceFacing.class, str);
    }

    public static VideoInputDeviceFacing[] values() {
        return (VideoInputDeviceFacing[]) $VALUES.clone();
    }
}
