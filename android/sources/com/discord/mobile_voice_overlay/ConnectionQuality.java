package com.discord.mobile_voice_overlay;

import bs.h1;
import com.discord.jank_stats.JankScreenContext;
import fo.l;
import fo.m;
import java.lang.annotation.Annotation;
import kotlin.Lazy;
import kotlin.Metadata;
import kotlin.enums.EnumEntries;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlinx.serialization.KSerializer;
import org.jetbrains.annotations.NotNull;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
@xr.e
@Metadata(d1 = {"\u0000\f\n\u0002\u0018\u0002\n\u0002\u0010\u0010\n\u0002\b\b\b\u0087\u0081\u0002\u0018\u0000 \b2\b\u0012\u0004\u0012\u00020\u00000\u0001:\u0001\bB\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003j\u0002\b\u0004j\u0002\b\u0005j\u0002\b\u0006j\u0002\b\u0007¨\u0006\t"}, d2 = {"Lcom/discord/mobile_voice_overlay/ConnectionQuality;", "", "<init>", "(Ljava/lang/String;I)V", "Fine", "Average", "Bad", "Unknown", "Companion", "mobile_voice_overlay_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final class ConnectionQuality {
    private static final /* synthetic */ EnumEntries $ENTRIES;
    private static final /* synthetic */ ConnectionQuality[] $VALUES;

    @NotNull
    private static final Lazy $cachedSerializer$delegate;

    /* renamed from: Companion, reason: from kotlin metadata */
    @NotNull
    public static final Companion INSTANCE;
    public static final ConnectionQuality Fine = new ConnectionQuality("Fine", 0);
    public static final ConnectionQuality Average = new ConnectionQuality("Average", 1);
    public static final ConnectionQuality Bad = new ConnectionQuality("Bad", 2);
    public static final ConnectionQuality Unknown = new ConnectionQuality("Unknown", 3);

    @Metadata(d1 = {"\u0000\u0016\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\f\u0010\u0004\u001a\b\u0012\u0004\u0012\u00020\u00060\u0005¨\u0006\u0007"}, d2 = {"Lcom/discord/mobile_voice_overlay/ConnectionQuality$Companion;", "", "<init>", "()V", "serializer", "Lkotlinx/serialization/KSerializer;", "Lcom/discord/mobile_voice_overlay/ConnectionQuality;", "mobile_voice_overlay_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final class Companion {
        private Companion() {
        }

        private final /* synthetic */ KSerializer get$cachedSerializer() {
            return (KSerializer) ConnectionQuality.$cachedSerializer$delegate.getValue();
        }

        @NotNull
        public final KSerializer serializer() {
            return get$cachedSerializer();
        }

        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }
    }

    private static final /* synthetic */ ConnectionQuality[] $values() {
        return new ConnectionQuality[]{Fine, Average, Bad, Unknown};
    }

    static {
        ConnectionQuality[] $values = $values();
        $VALUES = $values;
        $ENTRIES = ki.b.p($values);
        INSTANCE = new Companion(null);
        $cachedSerializer$delegate = l.b(m.f8827e, new com.discord.chat.reactevents.a(20));
    }

    private ConnectionQuality(String str, int i5) {
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final /* synthetic */ KSerializer _init_$_anonymous_() {
        return h1.e("com.discord.mobile_voice_overlay.ConnectionQuality", values(), new String[]{"fine", "average", "bad", JankScreenContext.UNKNOWN_SCREEN}, new Annotation[][]{null, null, null, null});
    }

    @NotNull
    public static EnumEntries getEntries() {
        return $ENTRIES;
    }

    public static ConnectionQuality valueOf(String str) {
        return (ConnectionQuality) Enum.valueOf(ConnectionQuality.class, str);
    }

    public static ConnectionQuality[] values() {
        return (ConnectionQuality[]) $VALUES.clone();
    }
}
