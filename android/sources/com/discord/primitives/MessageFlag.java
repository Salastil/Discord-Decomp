package com.discord.primitives;

import ki.b;
import kotlin.Metadata;
import kotlin.enums.EnumEntries;
import org.jetbrains.annotations.NotNull;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
@Metadata(d1 = {"\u0000\u0012\n\u0002\u0018\u0002\n\u0002\u0010\u0010\n\u0000\n\u0002\u0010\t\n\u0002\b\u0013\b\u0086\u0081\u0002\u0018\u00002\b\u0012\u0004\u0012\u00020\u00000\u0001B\u0011\b\u0002\u0012\u0006\u0010\u0002\u001a\u00020\u0003¢\u0006\u0004\b\u0004\u0010\u0005R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0006\u0010\u0007j\u0002\b\bj\u0002\b\tj\u0002\b\nj\u0002\b\u000bj\u0002\b\fj\u0002\b\rj\u0002\b\u000ej\u0002\b\u000fj\u0002\b\u0010j\u0002\b\u0011j\u0002\b\u0012j\u0002\b\u0013j\u0002\b\u0014j\u0002\b\u0015¨\u0006\u0016"}, d2 = {"Lcom/discord/primitives/MessageFlag;", "", "value", "", "<init>", "(Ljava/lang/String;IJ)V", "getValue", "()J", "CROSSPOSTED", "IS_CROSSPOST", "SUPPRESS_EMBEDS", "SOURCE_MESSAGE_DELETED", "URGENT", "HAS_THREAD", "EPHEMERAL", "LOADING", "FAILED_TO_MENTION_SOME_ROLES_IN_THREAD", "SHOULD_SHOW_LINK_NOT_DISCORD_WARNING", "SUPPRESS_NOTIFICATIONS", "IS_VOICE_MESSAGE", "HAS_SNAPSHOT", "IS_COMPONENTS_V2", "primitives_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final class MessageFlag {
    private static final /* synthetic */ EnumEntries $ENTRIES;
    private static final /* synthetic */ MessageFlag[] $VALUES;
    private final long value;
    public static final MessageFlag CROSSPOSTED = new MessageFlag("CROSSPOSTED", 0, 1);
    public static final MessageFlag IS_CROSSPOST = new MessageFlag("IS_CROSSPOST", 1, 2);
    public static final MessageFlag SUPPRESS_EMBEDS = new MessageFlag("SUPPRESS_EMBEDS", 2, 4);
    public static final MessageFlag SOURCE_MESSAGE_DELETED = new MessageFlag("SOURCE_MESSAGE_DELETED", 3, 8);
    public static final MessageFlag URGENT = new MessageFlag("URGENT", 4, 16);
    public static final MessageFlag HAS_THREAD = new MessageFlag("HAS_THREAD", 5, 32);
    public static final MessageFlag EPHEMERAL = new MessageFlag("EPHEMERAL", 6, 64);
    public static final MessageFlag LOADING = new MessageFlag("LOADING", 7, 128);
    public static final MessageFlag FAILED_TO_MENTION_SOME_ROLES_IN_THREAD = new MessageFlag("FAILED_TO_MENTION_SOME_ROLES_IN_THREAD", 8, 256);
    public static final MessageFlag SHOULD_SHOW_LINK_NOT_DISCORD_WARNING = new MessageFlag("SHOULD_SHOW_LINK_NOT_DISCORD_WARNING", 9, 1024);
    public static final MessageFlag SUPPRESS_NOTIFICATIONS = new MessageFlag("SUPPRESS_NOTIFICATIONS", 10, 4096);
    public static final MessageFlag IS_VOICE_MESSAGE = new MessageFlag("IS_VOICE_MESSAGE", 11, 8192);
    public static final MessageFlag HAS_SNAPSHOT = new MessageFlag("HAS_SNAPSHOT", 12, 16384);
    public static final MessageFlag IS_COMPONENTS_V2 = new MessageFlag("IS_COMPONENTS_V2", 13, 32768);

    private static final /* synthetic */ MessageFlag[] $values() {
        return new MessageFlag[]{CROSSPOSTED, IS_CROSSPOST, SUPPRESS_EMBEDS, SOURCE_MESSAGE_DELETED, URGENT, HAS_THREAD, EPHEMERAL, LOADING, FAILED_TO_MENTION_SOME_ROLES_IN_THREAD, SHOULD_SHOW_LINK_NOT_DISCORD_WARNING, SUPPRESS_NOTIFICATIONS, IS_VOICE_MESSAGE, HAS_SNAPSHOT, IS_COMPONENTS_V2};
    }

    static {
        MessageFlag[] $values = $values();
        $VALUES = $values;
        $ENTRIES = b.p($values);
    }

    private MessageFlag(String str, int i5, long j) {
        this.value = j;
    }

    @NotNull
    public static EnumEntries getEntries() {
        return $ENTRIES;
    }

    public static MessageFlag valueOf(String str) {
        return (MessageFlag) Enum.valueOf(MessageFlag.class, str);
    }

    public static MessageFlag[] values() {
        return (MessageFlag[]) $VALUES.clone();
    }

    public final long getValue() {
        return this.value;
    }
}
