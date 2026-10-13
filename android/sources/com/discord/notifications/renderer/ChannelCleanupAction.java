package com.discord.notifications.renderer;

import kotlin.Metadata;
import kotlin.enums.EnumEntries;
import kotlin.jvm.internal.DefaultConstructorMarker;
import org.jetbrains.annotations.NotNull;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
@Metadata(d1 = {"\u0000\u0012\n\u0002\u0018\u0002\n\u0002\u0010\u0010\n\u0000\n\u0002\u0010\u000b\n\u0002\b\t\b\u0080\u0081\u0002\u0018\u00002\b\u0012\u0004\u0012\u00020\u00000\u0001B\u0013\b\u0002\u0012\b\b\u0002\u0010\u0002\u001a\u00020\u0003¢\u0006\u0004\b\u0004\u0010\u0005R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0006\u0010\u0007j\u0002\b\bj\u0002\b\tj\u0002\b\nj\u0002\b\u000b¨\u0006\f"}, d2 = {"Lcom/discord/notifications/renderer/ChannelCleanupAction;", "", "retainsGroup", "", "<init>", "(Ljava/lang/String;IZ)V", "getRetainsGroup", "()Z", "KEEP_CONFIGURED", "KEEP_ALLOWLISTED", "KEEP_PRESERVED_CONVERSATION", "DELETE", "notification_renderer_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final class ChannelCleanupAction {
    private static final /* synthetic */ EnumEntries $ENTRIES;
    private static final /* synthetic */ ChannelCleanupAction[] $VALUES;
    private final boolean retainsGroup;
    public static final ChannelCleanupAction KEEP_CONFIGURED = new ChannelCleanupAction("KEEP_CONFIGURED", 0, false, 1, null);
    public static final ChannelCleanupAction KEEP_ALLOWLISTED = new ChannelCleanupAction("KEEP_ALLOWLISTED", 1, true);
    public static final ChannelCleanupAction KEEP_PRESERVED_CONVERSATION = new ChannelCleanupAction("KEEP_PRESERVED_CONVERSATION", 2, true);
    public static final ChannelCleanupAction DELETE = new ChannelCleanupAction("DELETE", 3, false, 1, null);

    private static final /* synthetic */ ChannelCleanupAction[] $values() {
        return new ChannelCleanupAction[]{KEEP_CONFIGURED, KEEP_ALLOWLISTED, KEEP_PRESERVED_CONVERSATION, DELETE};
    }

    static {
        ChannelCleanupAction[] $values = $values();
        $VALUES = $values;
        $ENTRIES = ki.b.p($values);
    }

    private ChannelCleanupAction(String str, int i5, boolean z5) {
        this.retainsGroup = z5;
    }

    @NotNull
    public static EnumEntries getEntries() {
        return $ENTRIES;
    }

    public static ChannelCleanupAction valueOf(String str) {
        return (ChannelCleanupAction) Enum.valueOf(ChannelCleanupAction.class, str);
    }

    public static ChannelCleanupAction[] values() {
        return (ChannelCleanupAction[]) $VALUES.clone();
    }

    public final boolean getRetainsGroup() {
        return this.retainsGroup;
    }

    public /* synthetic */ ChannelCleanupAction(String str, int i5, boolean z5, int i6, DefaultConstructorMarker defaultConstructorMarker) {
        this(str, i5, (i6 & 1) != 0 ? false : z5);
    }
}
