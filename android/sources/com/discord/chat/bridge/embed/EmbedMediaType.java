package com.discord.chat.bridge.embed;

import kotlin.Metadata;
import kotlin.enums.EnumEntries;
import org.jetbrains.annotations.NotNull;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
@Metadata(d1 = {"\u0000\f\n\u0002\u0018\u0002\n\u0002\u0010\u0010\n\u0002\b\u0007\b\u0082\u0081\u0002\u0018\u00002\b\u0012\u0004\u0012\u00020\u00000\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003j\u0002\b\u0004j\u0002\b\u0005j\u0002\b\u0006j\u0002\b\u0007¨\u0006\b"}, d2 = {"Lcom/discord/chat/bridge/embed/EmbedMediaType;", "", "<init>", "(Ljava/lang/String;I)V", "GIFV", "VIDEO", "IMAGE", "NONE", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
final class EmbedMediaType {
    private static final /* synthetic */ EnumEntries $ENTRIES;
    private static final /* synthetic */ EmbedMediaType[] $VALUES;
    public static final EmbedMediaType GIFV = new EmbedMediaType("GIFV", 0);
    public static final EmbedMediaType VIDEO = new EmbedMediaType("VIDEO", 1);
    public static final EmbedMediaType IMAGE = new EmbedMediaType("IMAGE", 2);
    public static final EmbedMediaType NONE = new EmbedMediaType("NONE", 3);

    private static final /* synthetic */ EmbedMediaType[] $values() {
        return new EmbedMediaType[]{GIFV, VIDEO, IMAGE, NONE};
    }

    static {
        EmbedMediaType[] $values = $values();
        $VALUES = $values;
        $ENTRIES = ki.b.p($values);
    }

    private EmbedMediaType(String str, int i5) {
    }

    @NotNull
    public static EnumEntries getEntries() {
        return $ENTRIES;
    }

    public static EmbedMediaType valueOf(String str) {
        return (EmbedMediaType) Enum.valueOf(EmbedMediaType.class, str);
    }

    public static EmbedMediaType[] values() {
        return (EmbedMediaType[]) $VALUES.clone();
    }
}
