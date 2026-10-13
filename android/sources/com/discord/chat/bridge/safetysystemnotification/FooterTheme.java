package com.discord.chat.bridge.safetysystemnotification;

import bs.h1;
import fo.l;
import fo.m;
import java.lang.annotation.Annotation;
import ki.b;
import kotlin.Lazy;
import kotlin.Metadata;
import kotlin.enums.EnumEntries;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlinx.serialization.KSerializer;
import o5.a;
import org.jetbrains.annotations.NotNull;
import xr.e;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
@e
@Metadata(d1 = {"\u0000\f\n\u0002\u0018\u0002\n\u0002\u0010\u0010\n\u0002\b\u0006\b\u0087\u0081\u0002\u0018\u0000 \u00062\b\u0012\u0004\u0012\u00020\u00000\u0001:\u0001\u0006B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003j\u0002\b\u0004j\u0002\b\u0005¨\u0006\u0007"}, d2 = {"Lcom/discord/chat/bridge/safetysystemnotification/FooterTheme;", "", "<init>", "(Ljava/lang/String;I)V", "DANGER", "DEFAULT", "Companion", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final class FooterTheme {
    private static final /* synthetic */ EnumEntries $ENTRIES;
    private static final /* synthetic */ FooterTheme[] $VALUES;

    @NotNull
    private static final Lazy $cachedSerializer$delegate;

    /* renamed from: Companion, reason: from kotlin metadata */
    @NotNull
    public static final Companion INSTANCE;
    public static final FooterTheme DANGER = new FooterTheme("DANGER", 0);
    public static final FooterTheme DEFAULT = new FooterTheme("DEFAULT", 1);

    @Metadata(d1 = {"\u0000\u0016\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\f\u0010\u0004\u001a\b\u0012\u0004\u0012\u00020\u00060\u0005¨\u0006\u0007"}, d2 = {"Lcom/discord/chat/bridge/safetysystemnotification/FooterTheme$Companion;", "", "<init>", "()V", "serializer", "Lkotlinx/serialization/KSerializer;", "Lcom/discord/chat/bridge/safetysystemnotification/FooterTheme;", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final class Companion {
        private Companion() {
        }

        private final /* synthetic */ KSerializer get$cachedSerializer() {
            return (KSerializer) FooterTheme.$cachedSerializer$delegate.getValue();
        }

        @NotNull
        public final KSerializer serializer() {
            return get$cachedSerializer();
        }

        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }
    }

    private static final /* synthetic */ FooterTheme[] $values() {
        return new FooterTheme[]{DANGER, DEFAULT};
    }

    static {
        FooterTheme[] $values = $values();
        $VALUES = $values;
        $ENTRIES = b.p($values);
        INSTANCE = new Companion(null);
        $cachedSerializer$delegate = l.b(m.f8827e, new a(27));
    }

    private FooterTheme(String str, int i5) {
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final /* synthetic */ KSerializer _init_$_anonymous_() {
        return h1.e("com.discord.chat.bridge.safetysystemnotification.FooterTheme", values(), new String[]{"danger", "default"}, new Annotation[][]{null, null});
    }

    @NotNull
    public static EnumEntries getEntries() {
        return $ENTRIES;
    }

    public static FooterTheme valueOf(String str) {
        return (FooterTheme) Enum.valueOf(FooterTheme.class, str);
    }

    public static FooterTheme[] values() {
        return (FooterTheme[]) $VALUES.clone();
    }
}
