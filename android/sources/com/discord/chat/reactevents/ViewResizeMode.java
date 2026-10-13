package com.discord.chat.reactevents;

import ki.b;
import kotlin.Metadata;
import kotlin.enums.EnumEntries;
import org.jetbrains.annotations.NotNull;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
@Metadata(d1 = {"\u0000\u0012\n\u0002\u0018\u0002\n\u0002\u0010\u0010\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0007\b\u0086\u0081\u0002\u0018\u00002\b\u0012\u0004\u0012\u00020\u00000\u0001B\u0011\b\u0002\u0012\u0006\u0010\u0002\u001a\u00020\u0003¢\u0006\u0004\b\u0004\u0010\u0005R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0006\u0010\u0007j\u0002\b\bj\u0002\b\t¨\u0006\n"}, d2 = {"Lcom/discord/chat/reactevents/ViewResizeMode;", "", "value", "", "<init>", "(Ljava/lang/String;ILjava/lang/String;)V", "getValue", "()Ljava/lang/String;", "Fill", "Cover", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final class ViewResizeMode {
    private static final /* synthetic */ EnumEntries $ENTRIES;
    private static final /* synthetic */ ViewResizeMode[] $VALUES;

    @NotNull
    private final String value;
    public static final ViewResizeMode Fill = new ViewResizeMode("Fill", 0, "fill");
    public static final ViewResizeMode Cover = new ViewResizeMode("Cover", 1, "cover");

    private static final /* synthetic */ ViewResizeMode[] $values() {
        return new ViewResizeMode[]{Fill, Cover};
    }

    static {
        ViewResizeMode[] $values = $values();
        $VALUES = $values;
        $ENTRIES = b.p($values);
    }

    private ViewResizeMode(String str, int i5, String str2) {
        this.value = str2;
    }

    @NotNull
    public static EnumEntries getEntries() {
        return $ENTRIES;
    }

    public static ViewResizeMode valueOf(String str) {
        return (ViewResizeMode) Enum.valueOf(ViewResizeMode.class, str);
    }

    public static ViewResizeMode[] values() {
        return (ViewResizeMode[]) $VALUES.clone();
    }

    @NotNull
    public final String getValue() {
        return this.value;
    }
}
