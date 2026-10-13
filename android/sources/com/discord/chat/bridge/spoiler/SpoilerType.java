package com.discord.chat.bridge.spoiler;

import ki.b;
import kotlin.Metadata;
import kotlin.enums.EnumEntries;
import org.jetbrains.annotations.NotNull;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
@Metadata(d1 = {"\u0000\f\n\u0002\u0018\u0002\n\u0002\u0010\u0010\n\u0002\b\u0005\b\u0086\u0081\u0002\u0018\u00002\b\u0012\u0004\u0012\u00020\u00000\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003j\u0002\b\u0004j\u0002\b\u0005¨\u0006\u0006"}, d2 = {"Lcom/discord/chat/bridge/spoiler/SpoilerType;", "", "<init>", "(Ljava/lang/String;I)V", "SPOILER", "OBSCURE", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final class SpoilerType {
    private static final /* synthetic */ EnumEntries $ENTRIES;
    private static final /* synthetic */ SpoilerType[] $VALUES;
    public static final SpoilerType SPOILER = new SpoilerType("SPOILER", 0);
    public static final SpoilerType OBSCURE = new SpoilerType("OBSCURE", 1);

    private static final /* synthetic */ SpoilerType[] $values() {
        return new SpoilerType[]{SPOILER, OBSCURE};
    }

    static {
        SpoilerType[] $values = $values();
        $VALUES = $values;
        $ENTRIES = b.p($values);
    }

    private SpoilerType(String str, int i5) {
    }

    @NotNull
    public static EnumEntries getEntries() {
        return $ENTRIES;
    }

    public static SpoilerType valueOf(String str) {
        return (SpoilerType) Enum.valueOf(SpoilerType.class, str);
    }

    public static SpoilerType[] values() {
        return (SpoilerType[]) $VALUES.clone();
    }
}
