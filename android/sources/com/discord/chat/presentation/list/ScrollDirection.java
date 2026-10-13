package com.discord.chat.presentation.list;

import kotlin.Metadata;
import kotlin.enums.EnumEntries;
import org.jetbrains.annotations.NotNull;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
@Metadata(d1 = {"\u0000\f\n\u0002\u0018\u0002\n\u0002\u0010\u0010\n\u0002\b\u0005\b\u0086\u0081\u0002\u0018\u00002\b\u0012\u0004\u0012\u00020\u00000\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003j\u0002\b\u0004j\u0002\b\u0005¨\u0006\u0006"}, d2 = {"Lcom/discord/chat/presentation/list/ScrollDirection;", "", "<init>", "(Ljava/lang/String;I)V", "UP", "DOWN", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final class ScrollDirection {
    private static final /* synthetic */ EnumEntries $ENTRIES;
    private static final /* synthetic */ ScrollDirection[] $VALUES;
    public static final ScrollDirection UP = new ScrollDirection("UP", 0);
    public static final ScrollDirection DOWN = new ScrollDirection("DOWN", 1);

    private static final /* synthetic */ ScrollDirection[] $values() {
        return new ScrollDirection[]{UP, DOWN};
    }

    static {
        ScrollDirection[] $values = $values();
        $VALUES = $values;
        $ENTRIES = ki.b.p($values);
    }

    private ScrollDirection(String str, int i5) {
    }

    @NotNull
    public static EnumEntries getEntries() {
        return $ENTRIES;
    }

    public static ScrollDirection valueOf(String str) {
        return (ScrollDirection) Enum.valueOf(ScrollDirection.class, str);
    }

    public static ScrollDirection[] values() {
        return (ScrollDirection[]) $VALUES.clone();
    }
}
