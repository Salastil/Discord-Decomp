package com.discord.media_player;

import kotlin.Metadata;
import kotlin.enums.EnumEntries;
import org.jetbrains.annotations.NotNull;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
@Metadata(d1 = {"\u0000\f\n\u0002\u0018\u0002\n\u0002\u0010\u0010\n\u0002\b\u0007\b\u0086\u0081\u0002\u0018\u00002\b\u0012\u0004\u0012\u00020\u00000\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003j\u0002\b\u0004j\u0002\b\u0005j\u0002\b\u0006j\u0002\b\u0007¨\u0006\b"}, d2 = {"Lcom/discord/media_player/MediaType;", "", "<init>", "(Ljava/lang/String;I)V", "VIDEO", "GIFV", "IMAGE", "AUDIO", "media_player_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final class MediaType {
    private static final /* synthetic */ EnumEntries $ENTRIES;
    private static final /* synthetic */ MediaType[] $VALUES;
    public static final MediaType VIDEO = new MediaType("VIDEO", 0);
    public static final MediaType GIFV = new MediaType("GIFV", 1);
    public static final MediaType IMAGE = new MediaType("IMAGE", 2);
    public static final MediaType AUDIO = new MediaType("AUDIO", 3);

    private static final /* synthetic */ MediaType[] $values() {
        return new MediaType[]{VIDEO, GIFV, IMAGE, AUDIO};
    }

    static {
        MediaType[] $values = $values();
        $VALUES = $values;
        $ENTRIES = ki.b.p($values);
    }

    private MediaType(String str, int i5) {
    }

    @NotNull
    public static EnumEntries getEntries() {
        return $ENTRIES;
    }

    public static MediaType valueOf(String str) {
        return (MediaType) Enum.valueOf(MediaType.class, str);
    }

    public static MediaType[] values() {
        return (MediaType[]) $VALUES.clone();
    }
}
