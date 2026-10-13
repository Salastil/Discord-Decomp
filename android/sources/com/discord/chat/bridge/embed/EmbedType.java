package com.discord.chat.bridge.embed;

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
import org.webrtc.MediaStreamTrack;
import xr.e;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
@e
@Metadata(d1 = {"\u0000\f\n\u0002\u0018\u0002\n\u0002\u0010\u0010\n\u0002\b\u0014\b\u0087\u0081\u0002\u0018\u0000 \u00142\b\u0012\u0004\u0012\u00020\u00000\u0001:\u0001\u0014B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003j\u0002\b\u0004j\u0002\b\u0005j\u0002\b\u0006j\u0002\b\u0007j\u0002\b\bj\u0002\b\tj\u0002\b\nj\u0002\b\u000bj\u0002\b\fj\u0002\b\rj\u0002\b\u000ej\u0002\b\u000fj\u0002\b\u0010j\u0002\b\u0011j\u0002\b\u0012j\u0002\b\u0013¨\u0006\u0015"}, d2 = {"Lcom/discord/chat/bridge/embed/EmbedType;", "", "<init>", "(Ljava/lang/String;I)V", "Article", "Image", "Video", "Tweet", "Link", "HTML", "File", "GIFV", "Rich", "Text", "ApplicationNews", "PostPreview", "SafetyPolicyNotice", "SafetySystemNotification", "Components", "Unknown", "Companion", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final class EmbedType {
    private static final /* synthetic */ EnumEntries $ENTRIES;
    private static final /* synthetic */ EmbedType[] $VALUES;

    @NotNull
    private static final Lazy $cachedSerializer$delegate;

    /* renamed from: Companion, reason: from kotlin metadata */
    @NotNull
    public static final Companion INSTANCE;
    public static final EmbedType Article = new EmbedType("Article", 0);
    public static final EmbedType Image = new EmbedType("Image", 1);
    public static final EmbedType Video = new EmbedType("Video", 2);
    public static final EmbedType Tweet = new EmbedType("Tweet", 3);
    public static final EmbedType Link = new EmbedType("Link", 4);
    public static final EmbedType HTML = new EmbedType("HTML", 5);
    public static final EmbedType File = new EmbedType("File", 6);
    public static final EmbedType GIFV = new EmbedType("GIFV", 7);
    public static final EmbedType Rich = new EmbedType("Rich", 8);
    public static final EmbedType Text = new EmbedType("Text", 9);
    public static final EmbedType ApplicationNews = new EmbedType("ApplicationNews", 10);
    public static final EmbedType PostPreview = new EmbedType("PostPreview", 11);
    public static final EmbedType SafetyPolicyNotice = new EmbedType("SafetyPolicyNotice", 12);
    public static final EmbedType SafetySystemNotification = new EmbedType("SafetySystemNotification", 13);
    public static final EmbedType Components = new EmbedType("Components", 14);
    public static final EmbedType Unknown = new EmbedType("Unknown", 15);

    @Metadata(d1 = {"\u0000\u0016\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\f\u0010\u0004\u001a\b\u0012\u0004\u0012\u00020\u00060\u0005¨\u0006\u0007"}, d2 = {"Lcom/discord/chat/bridge/embed/EmbedType$Companion;", "", "<init>", "()V", "serializer", "Lkotlinx/serialization/KSerializer;", "Lcom/discord/chat/bridge/embed/EmbedType;", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final class Companion {
        private Companion() {
        }

        private final /* synthetic */ KSerializer get$cachedSerializer() {
            return (KSerializer) EmbedType.$cachedSerializer$delegate.getValue();
        }

        @NotNull
        public final KSerializer serializer() {
            return get$cachedSerializer();
        }

        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }
    }

    private static final /* synthetic */ EmbedType[] $values() {
        return new EmbedType[]{Article, Image, Video, Tweet, Link, HTML, File, GIFV, Rich, Text, ApplicationNews, PostPreview, SafetyPolicyNotice, SafetySystemNotification, Components, Unknown};
    }

    static {
        EmbedType[] $values = $values();
        $VALUES = $values;
        $ENTRIES = ki.b.p($values);
        INSTANCE = new Companion(null);
        $cachedSerializer$delegate = l.b(m.f8827e, new com.discord.chat.bridge.botuikit.b(28));
    }

    private EmbedType(String str, int i5) {
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final /* synthetic */ KSerializer _init_$_anonymous_() {
        return h1.e("com.discord.chat.bridge.embed.EmbedType", values(), new String[]{"article", "image", MediaStreamTrack.VIDEO_TRACK_KIND, "tweet", "link", "html", "file", "gifv", "rich", "text", "application_news", "post_preview", "safety_policy_notice", "safety_system_notification", "components", JankScreenContext.UNKNOWN_SCREEN}, new Annotation[][]{null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null});
    }

    @NotNull
    public static EnumEntries getEntries() {
        return $ENTRIES;
    }

    public static EmbedType valueOf(String str) {
        return (EmbedType) Enum.valueOf(EmbedType.class, str);
    }

    public static EmbedType[] values() {
        return (EmbedType[]) $VALUES.clone();
    }
}
