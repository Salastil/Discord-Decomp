package com.discord.media_player;

import java.util.Locale;
import kotlin.Metadata;
import kotlin.enums.EnumEntries;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import org.jetbrains.annotations.NotNull;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
@Metadata(d1 = {"\u0000\f\n\u0002\u0018\u0002\n\u0002\u0010\u0010\n\u0002\b\u0007\b\u0086\u0081\u0002\u0018\u0000 \u00072\b\u0012\u0004\u0012\u00020\u00000\u0001:\u0001\u0007B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003j\u0002\b\u0004j\u0002\b\u0005j\u0002\b\u0006¨\u0006\b"}, d2 = {"Lcom/discord/media_player/HttpEngine;", "", "<init>", "(Ljava/lang/String;I)V", "DEFAULT", "OKHTTP", "CRONET", "Companion", "media_player_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final class HttpEngine {
    private static final /* synthetic */ EnumEntries $ENTRIES;
    private static final /* synthetic */ HttpEngine[] $VALUES;

    /* renamed from: Companion, reason: from kotlin metadata */
    @NotNull
    public static final Companion INSTANCE;
    public static final HttpEngine DEFAULT = new HttpEngine("DEFAULT", 0);
    public static final HttpEngine OKHTTP = new HttpEngine("OKHTTP", 1);
    public static final HttpEngine CRONET = new HttpEngine("CRONET", 2);

    @Metadata(d1 = {"\u0000\u0018\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0000\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\u000e\u0010\u0004\u001a\u00020\u00052\u0006\u0010\u0006\u001a\u00020\u0007¨\u0006\b"}, d2 = {"Lcom/discord/media_player/HttpEngine$Companion;", "", "<init>", "()V", "fromString", "Lcom/discord/media_player/HttpEngine;", "value", "", "media_player_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final class Companion {
        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }

        @NotNull
        public final HttpEngine fromString(@NotNull String value) {
            Intrinsics.checkNotNullParameter(value, "value");
            String lowerCase = value.toLowerCase(Locale.ROOT);
            Intrinsics.checkNotNullExpressionValue(lowerCase, "toLowerCase(...)");
            return Intrinsics.areEqual(lowerCase, "okhttp") ? HttpEngine.OKHTTP : Intrinsics.areEqual(lowerCase, "cronet") ? HttpEngine.CRONET : HttpEngine.DEFAULT;
        }

        private Companion() {
        }
    }

    private static final /* synthetic */ HttpEngine[] $values() {
        return new HttpEngine[]{DEFAULT, OKHTTP, CRONET};
    }

    static {
        HttpEngine[] $values = $values();
        $VALUES = $values;
        $ENTRIES = ki.b.p($values);
        INSTANCE = new Companion(null);
    }

    private HttpEngine(String str, int i5) {
    }

    @NotNull
    public static EnumEntries getEntries() {
        return $ENTRIES;
    }

    public static HttpEngine valueOf(String str) {
        return (HttpEngine) Enum.valueOf(HttpEngine.class, str);
    }

    public static HttpEngine[] values() {
        return (HttpEngine[]) $VALUES.clone();
    }
}
