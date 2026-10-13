package com.discord.intents.packages;

import com.discord.intents.BuildConfig;
import java.util.Iterator;
import ki.b;
import kotlin.Metadata;
import kotlin.enums.EnumEntries;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.SourceDebugExtension;
import org.jetbrains.annotations.NotNull;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
@Metadata(d1 = {"\u0000\u0012\n\u0002\u0018\u0002\n\u0002\u0010\u0010\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u000b\b\u0080\u0081\u0002\u0018\u0000 \r2\b\u0012\u0004\u0012\u00020\u00000\u0001:\u0001\rB\u0019\b\u0002\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0003¢\u0006\u0004\b\u0005\u0010\u0006R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0007\u0010\bR\u0011\u0010\u0004\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\t\u0010\bj\u0002\b\nj\u0002\b\u000bj\u0002\b\f¨\u0006\u000e"}, d2 = {"Lcom/discord/intents/packages/DiscordVariantPackage;", "", "key", "", "packageName", "<init>", "(Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;)V", "getKey", "()Ljava/lang/String;", "getPackageName", "PRODUCTION", "CI", "DEV", "Companion", "intents_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final class DiscordVariantPackage {
    private static final /* synthetic */ EnumEntries $ENTRIES;
    private static final /* synthetic */ DiscordVariantPackage[] $VALUES;

    /* renamed from: Companion, reason: from kotlin metadata */
    @NotNull
    public static final Companion INSTANCE;

    @NotNull
    private final String key;

    @NotNull
    private final String packageName;
    public static final DiscordVariantPackage PRODUCTION = new DiscordVariantPackage("PRODUCTION", 0, "production", "com.discord");
    public static final DiscordVariantPackage CI = new DiscordVariantPackage("CI", 1, "ci", BuildConfig.PACKAGE_DISCORD_CI);
    public static final DiscordVariantPackage DEV = new DiscordVariantPackage("DEV", 2, "dev", "com.discord.debug");

    @Metadata(d1 = {"\u0000\u001a\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0003\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\u0010\u0010\u0004\u001a\u0004\u0018\u00010\u00052\u0006\u0010\u0006\u001a\u00020\u0007J\u0010\u0010\b\u001a\u0004\u0018\u00010\u00052\u0006\u0010\t\u001a\u00020\u0007¨\u0006\n"}, d2 = {"Lcom/discord/intents/packages/DiscordVariantPackage$Companion;", "", "<init>", "()V", "fromKey", "Lcom/discord/intents/packages/DiscordVariantPackage;", "key", "", "fromPackageName", "packageName", "intents_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    @SourceDebugExtension({"SMAP\nDiscordVariantPackage.kt\nKotlin\n*S Kotlin\n*F\n+ 1 DiscordVariantPackage.kt\ncom/discord/intents/packages/DiscordVariantPackage$Companion\n+ 2 _Collections.kt\nkotlin/collections/CollectionsKt___CollectionsKt\n*L\n1#1,20:1\n295#2,2:21\n295#2,2:23\n*S KotlinDebug\n*F\n+ 1 DiscordVariantPackage.kt\ncom/discord/intents/packages/DiscordVariantPackage$Companion\n*L\n15#1:21,2\n17#1:23,2\n*E\n"})
    public static final class Companion {
        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }

        public final DiscordVariantPackage fromKey(@NotNull String key) {
            Object obj;
            Intrinsics.checkNotNullParameter(key, "key");
            Iterator<E> it = DiscordVariantPackage.getEntries().iterator();
            while (true) {
                if (!it.hasNext()) {
                    obj = null;
                    break;
                }
                obj = it.next();
                if (Intrinsics.areEqual(((DiscordVariantPackage) obj).getKey(), key)) {
                    break;
                }
            }
            return (DiscordVariantPackage) obj;
        }

        public final DiscordVariantPackage fromPackageName(@NotNull String packageName) {
            Object obj;
            Intrinsics.checkNotNullParameter(packageName, "packageName");
            Iterator<E> it = DiscordVariantPackage.getEntries().iterator();
            while (true) {
                if (!it.hasNext()) {
                    obj = null;
                    break;
                }
                obj = it.next();
                if (Intrinsics.areEqual(((DiscordVariantPackage) obj).getPackageName(), packageName)) {
                    break;
                }
            }
            return (DiscordVariantPackage) obj;
        }

        private Companion() {
        }
    }

    private static final /* synthetic */ DiscordVariantPackage[] $values() {
        return new DiscordVariantPackage[]{PRODUCTION, CI, DEV};
    }

    static {
        DiscordVariantPackage[] $values = $values();
        $VALUES = $values;
        $ENTRIES = b.p($values);
        INSTANCE = new Companion(null);
    }

    private DiscordVariantPackage(String str, int i5, String str2, String str3) {
        this.key = str2;
        this.packageName = str3;
    }

    @NotNull
    public static EnumEntries getEntries() {
        return $ENTRIES;
    }

    public static DiscordVariantPackage valueOf(String str) {
        return (DiscordVariantPackage) Enum.valueOf(DiscordVariantPackage.class, str);
    }

    public static DiscordVariantPackage[] values() {
        return (DiscordVariantPackage[]) $VALUES.clone();
    }

    @NotNull
    public final String getKey() {
        return this.key;
    }

    @NotNull
    public final String getPackageName() {
        return this.packageName;
    }
}
