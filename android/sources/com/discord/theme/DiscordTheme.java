package com.discord.theme;

import com.facebook.react.devsupport.StackTraceHelper;
import ki.b;
import kotlin.Metadata;
import kotlin.enums.EnumEntries;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import org.jetbrains.annotations.NotNull;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
@Metadata(d1 = {"\u0000\f\n\u0002\u0018\u0002\n\u0002\u0010\u0010\n\u0002\b\b\b\u0086\u0081\u0002\u0018\u0000 \b2\b\u0012\u0004\u0012\u00020\u00000\u0001:\u0001\bB\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003j\u0002\b\u0004j\u0002\b\u0005j\u0002\b\u0006j\u0002\b\u0007¨\u0006\t"}, d2 = {"Lcom/discord/theme/DiscordTheme;", "", "<init>", "(Ljava/lang/String;I)V", "LIGHT", "DARK", "ONYX", "ASH", "Companion", "theme_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes3.dex */
public final class DiscordTheme {
    private static final /* synthetic */ EnumEntries $ENTRIES;
    private static final /* synthetic */ DiscordTheme[] $VALUES;

    /* renamed from: Companion, reason: from kotlin metadata */
    @NotNull
    public static final Companion INSTANCE;
    public static final DiscordTheme LIGHT = new DiscordTheme("LIGHT", 0);
    public static final DiscordTheme DARK = new DiscordTheme("DARK", 1);
    public static final DiscordTheme ONYX = new DiscordTheme("ONYX", 2);
    public static final DiscordTheme ASH = new DiscordTheme("ASH", 3);

    @Metadata(d1 = {"\u0000\u0018\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0000\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\u0010\u0010\u0004\u001a\u0004\u0018\u00010\u00052\u0006\u0010\u0006\u001a\u00020\u0007¨\u0006\b"}, d2 = {"Lcom/discord/theme/DiscordTheme$Companion;", "", "<init>", "()V", "fromThemeName", "Lcom/discord/theme/DiscordTheme;", StackTraceHelper.NAME_KEY, "", "theme_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final class Companion {
        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }

        public final DiscordTheme fromThemeName(@NotNull String name) {
            Intrinsics.checkNotNullParameter(name, "name");
            switch (name.hashCode()) {
                case -1640863024:
                    if (!name.equals("midnight")) {
                        return null;
                    }
                    break;
                case -1413862040:
                    if (!name.equals("amoled")) {
                        return null;
                    }
                    break;
                case -1338968413:
                    if (name.equals("darker")) {
                        return DiscordTheme.DARK;
                    }
                    return null;
                case 3075958:
                    if (name.equals("dark")) {
                        return DiscordTheme.ASH;
                    }
                    return null;
                case 102970646:
                    if (name.equals("light")) {
                        return DiscordTheme.LIGHT;
                    }
                    return null;
                default:
                    return null;
            }
            return DiscordTheme.ONYX;
        }

        private Companion() {
        }
    }

    private static final /* synthetic */ DiscordTheme[] $values() {
        return new DiscordTheme[]{LIGHT, DARK, ONYX, ASH};
    }

    static {
        DiscordTheme[] $values = $values();
        $VALUES = $values;
        $ENTRIES = b.p($values);
        INSTANCE = new Companion(null);
    }

    private DiscordTheme(String str, int i5) {
    }

    @NotNull
    public static EnumEntries getEntries() {
        return $ENTRIES;
    }

    public static DiscordTheme valueOf(String str) {
        return (DiscordTheme) Enum.valueOf(DiscordTheme.class, str);
    }

    public static DiscordTheme[] values() {
        return (DiscordTheme[]) $VALUES.clone();
    }
}
