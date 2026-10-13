package com.discord.chat.bridge.polls;

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
@Metadata(d1 = {"\u0000\f\n\u0002\u0018\u0002\n\u0002\u0010\u0010\n\u0002\b\b\b\u0087\u0081\u0002\u0018\u0000 \b2\b\u0012\u0004\u0012\u00020\u00000\u0001:\u0001\bB\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003j\u0002\b\u0004j\u0002\b\u0005j\u0002\b\u0006j\u0002\b\u0007¨\u0006\t"}, d2 = {"Lcom/discord/chat/bridge/polls/PollActionPresentation;", "", "<init>", "(Ljava/lang/String;I)V", "TEXT", "TEXT_BUTTON", "BUTTON", "SECONDARY_BUTTON", "Companion", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final class PollActionPresentation {
    private static final /* synthetic */ EnumEntries $ENTRIES;
    private static final /* synthetic */ PollActionPresentation[] $VALUES;

    @NotNull
    private static final Lazy $cachedSerializer$delegate;

    /* renamed from: Companion, reason: from kotlin metadata */
    @NotNull
    public static final Companion INSTANCE;
    public static final PollActionPresentation TEXT = new PollActionPresentation("TEXT", 0);
    public static final PollActionPresentation TEXT_BUTTON = new PollActionPresentation("TEXT_BUTTON", 1);
    public static final PollActionPresentation BUTTON = new PollActionPresentation("BUTTON", 2);
    public static final PollActionPresentation SECONDARY_BUTTON = new PollActionPresentation("SECONDARY_BUTTON", 3);

    @Metadata(d1 = {"\u0000\u0016\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\f\u0010\u0004\u001a\b\u0012\u0004\u0012\u00020\u00060\u0005¨\u0006\u0007"}, d2 = {"Lcom/discord/chat/bridge/polls/PollActionPresentation$Companion;", "", "<init>", "()V", "serializer", "Lkotlinx/serialization/KSerializer;", "Lcom/discord/chat/bridge/polls/PollActionPresentation;", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final class Companion {
        private Companion() {
        }

        private final /* synthetic */ KSerializer get$cachedSerializer() {
            return (KSerializer) PollActionPresentation.$cachedSerializer$delegate.getValue();
        }

        @NotNull
        public final KSerializer serializer() {
            return get$cachedSerializer();
        }

        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }
    }

    private static final /* synthetic */ PollActionPresentation[] $values() {
        return new PollActionPresentation[]{TEXT, TEXT_BUTTON, BUTTON, SECONDARY_BUTTON};
    }

    static {
        PollActionPresentation[] $values = $values();
        $VALUES = $values;
        $ENTRIES = b.p($values);
        INSTANCE = new Companion(null);
        $cachedSerializer$delegate = l.b(m.f8827e, new a(17));
    }

    private PollActionPresentation(String str, int i5) {
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final /* synthetic */ KSerializer _init_$_anonymous_() {
        return h1.e("com.discord.chat.bridge.polls.PollActionPresentation", values(), new String[]{"text", "textButton", "button", "secondaryButton"}, new Annotation[][]{null, null, null, null});
    }

    @NotNull
    public static EnumEntries getEntries() {
        return $ENTRIES;
    }

    public static PollActionPresentation valueOf(String str) {
        return (PollActionPresentation) Enum.valueOf(PollActionPresentation.class, str);
    }

    public static PollActionPresentation[] values() {
        return (PollActionPresentation[]) $VALUES.clone();
    }
}
