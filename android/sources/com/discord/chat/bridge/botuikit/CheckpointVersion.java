package com.discord.chat.bridge.botuikit;

import kotlin.Metadata;
import kotlin.enums.EnumEntries;
import org.jetbrains.annotations.NotNull;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
@Metadata(d1 = {"\u0000\u0012\n\u0002\u0018\u0002\n\u0002\u0010\u0010\n\u0000\n\u0002\u0010\b\n\u0002\b\u0007\b\u0086\u0081\u0002\u0018\u00002\b\u0012\u0004\u0012\u00020\u00000\u0001B\u0011\b\u0002\u0012\u0006\u0010\u0002\u001a\u00020\u0003¢\u0006\u0004\b\u0004\u0010\u0005R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0006\u0010\u0007j\u0002\b\bj\u0002\b\t¨\u0006\n"}, d2 = {"Lcom/discord/chat/bridge/botuikit/CheckpointVersion;", "", "value", "", "<init>", "(Ljava/lang/String;II)V", "getValue", "()I", "V2025", "V2026", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final class CheckpointVersion {
    private static final /* synthetic */ EnumEntries $ENTRIES;
    private static final /* synthetic */ CheckpointVersion[] $VALUES;
    public static final CheckpointVersion V2025 = new CheckpointVersion("V2025", 0, 0);
    public static final CheckpointVersion V2026 = new CheckpointVersion("V2026", 1, 1);
    private final int value;

    private static final /* synthetic */ CheckpointVersion[] $values() {
        return new CheckpointVersion[]{V2025, V2026};
    }

    static {
        CheckpointVersion[] $values = $values();
        $VALUES = $values;
        $ENTRIES = ki.b.p($values);
    }

    private CheckpointVersion(String str, int i5, int i6) {
        this.value = i6;
    }

    @NotNull
    public static EnumEntries getEntries() {
        return $ENTRIES;
    }

    public static CheckpointVersion valueOf(String str) {
        return (CheckpointVersion) Enum.valueOf(CheckpointVersion.class, str);
    }

    public static CheckpointVersion[] values() {
        return (CheckpointVersion[]) $VALUES.clone();
    }

    public final int getValue() {
        return this.value;
    }
}
