package com.discord.icons;

import android.content.Context;
import com.discord.chat.bridge.botuikit.a;
import com.discord.hosts.Hosts;
import com.discord.icons.media.MediaProxy;
import com.discord.primitives.ApplicationId;
import com.discord.primitives.ChannelId;
import com.discord.primitives.GuildId;
import com.discord.primitives.UserId;
import com.discord.react_asset_fetcher.ReactAsset;
import com.discord.react_asset_fetcher.ReactAssetExtensionsKt;
import com.discord.react_asset_fetcher.ReactAssetUtilsKt;
import com.discord.snowflake.SnowflakeUtils;
import com.facebook.react.devsupport.StackTraceHelper;
import fo.q;
import ki.b;
import kotlin.Metadata;
import kotlin.Result;
import kotlin.jvm.internal.Intrinsics;
import kotlin.text.StringsKt;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u0000V\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\b\n\u0000\n\u0002\u0010\u000b\n\u0002\b\u0006\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0018\u0002\n\u0002\b\n\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0010\t\n\u0002\b\u0003\bÆ\u0002\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J&\u0010\u0004\u001a\u00020\u00052\u0006\u0010\u0006\u001a\u00020\u00072\n\b\u0002\u0010\b\u001a\u0004\u0018\u00010\t2\n\b\u0002\u0010\n\u001a\u0004\u0018\u00010\tJK\u0010\u000b\u001a\u00020\t2\u0006\u0010\u0006\u001a\u00020\u00072\b\u0010\f\u001a\u0004\u0018\u00010\r2\b\u0010\u000e\u001a\u0004\u0018\u00010\t2\n\b\u0002\u0010\u000f\u001a\u0004\u0018\u00010\u00102\b\b\u0002\u0010\u0011\u001a\u00020\u00122\n\b\u0002\u0010\u0013\u001a\u0004\u0018\u00010\u0010¢\u0006\u0004\b\u0014\u0010\u0015JA\u0010\u0016\u001a\u00020\t2\b\u0010\u0017\u001a\u0004\u0018\u00010\t2\b\u0010\u0018\u001a\u0004\u0018\u00010\u00192\b\u0010\f\u001a\u0004\u0018\u00010\r2\n\b\u0002\u0010\u001a\u001a\u0004\u0018\u00010\u00102\b\b\u0002\u0010\u0011\u001a\u00020\u0012¢\u0006\u0004\b\u001b\u0010\u001cJ=\u0010\u001d\u001a\u00020\t2\u0006\u0010\u0006\u001a\u00020\u00072\b\u0010\u001e\u001a\u0004\u0018\u00010\u001f2\b\u0010 \u001a\u0004\u0018\u00010\t2\u0006\u0010!\u001a\u00020\u00122\n\b\u0002\u0010\u0013\u001a\u0004\u0018\u00010\u0010¢\u0006\u0004\b\"\u0010#JC\u0010$\u001a\u00020\t2\b\u0010\u001e\u001a\u0004\u0018\u00010\u00192\b\u0010 \u001a\u0004\u0018\u00010\t2\n\b\u0002\u0010%\u001a\u0004\u0018\u00010\t2\b\b\u0002\u0010\u0011\u001a\u00020\u00122\n\b\u0002\u0010\u0013\u001a\u0004\u0018\u00010\u0010¢\u0006\u0004\b&\u0010'J)\u0010(\u001a\u00020\t2\b\u0010)\u001a\u0004\u0018\u00010*2\b\u0010+\u001a\u0004\u0018\u00010\t2\b\b\u0002\u0010\u0013\u001a\u00020\u0010¢\u0006\u0002\b,J'\u0010-\u001a\u00020\t2\u0006\u0010.\u001a\u00020/2\u0006\u00100\u001a\u00020\u00122\n\b\u0002\u0010\u0013\u001a\u0004\u0018\u00010\u0010¢\u0006\u0002\u00101¨\u00062"}, d2 = {"Lcom/discord/icons/IconUrlUtils;", "", "<init>", "()V", "init", "", "context", "Landroid/content/Context;", "cdnHost", "", "apiHost", "getForUser", "userId", "Lcom/discord/primitives/UserId;", "userAvatar", "discriminator", "", "animated", "", "size", "getForUser-_fRzTXg", "(Landroid/content/Context;Lcom/discord/primitives/UserId;Ljava/lang/String;Ljava/lang/Integer;ZLjava/lang/Integer;)Ljava/lang/String;", "getForGuildMember", "guildMemberAvatar", "guildId", "Lcom/discord/primitives/GuildId;", "sizePx", "getForGuildMember-2tNb6hE", "(Ljava/lang/String;Lcom/discord/primitives/GuildId;Lcom/discord/primitives/UserId;Ljava/lang/Integer;Z)Ljava/lang/String;", "getForChannel", StackTraceHelper.ID_KEY, "Lcom/discord/primitives/ChannelId;", "icon", "isGroupDM", "getForChannel-JYSGpIY", "(Landroid/content/Context;Lcom/discord/primitives/ChannelId;Ljava/lang/String;ZLjava/lang/Integer;)Ljava/lang/String;", "getForGuild", "defaultIcon", "getForGuild-14CJxO4", "(Lcom/discord/primitives/GuildId;Ljava/lang/String;Ljava/lang/String;ZLjava/lang/Integer;)Ljava/lang/String;", "getApplicationIcon", "applicationId", "Lcom/discord/primitives/ApplicationId;", "imageId", "getApplicationIcon-weIltyw", "getCustomEmojiUrl", "emojiId", "", "animate", "(JZLjava/lang/Integer;)Ljava/lang/String;", "icons_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final class IconUrlUtils {

    @NotNull
    public static final IconUrlUtils INSTANCE = new IconUrlUtils();

    private IconUrlUtils() {
    }

    /* renamed from: getApplicationIcon-weIltyw$default, reason: not valid java name */
    public static /* synthetic */ String m994getApplicationIconweIltyw$default(IconUrlUtils iconUrlUtils, ApplicationId applicationId, String str, int i5, int i6, Object obj) {
        if ((i6 & 4) != 0) {
            i5 = 160;
        }
        return iconUrlUtils.m999getApplicationIconweIltyw(applicationId, str, i5);
    }

    public static /* synthetic */ String getCustomEmojiUrl$default(IconUrlUtils iconUrlUtils, long j, boolean z5, Integer num, int i5, Object obj) {
        if ((i5 & 4) != 0) {
            num = null;
        }
        return iconUrlUtils.getCustomEmojiUrl(j, z5, num);
    }

    /* renamed from: getForChannel-JYSGpIY$default, reason: not valid java name */
    public static /* synthetic */ String m995getForChannelJYSGpIY$default(IconUrlUtils iconUrlUtils, Context context, ChannelId channelId, String str, boolean z5, Integer num, int i5, Object obj) {
        if ((i5 & 16) != 0) {
            num = null;
        }
        return iconUrlUtils.m1000getForChannelJYSGpIY(context, channelId, str, z5, num);
    }

    /* renamed from: getForGuild-14CJxO4$default, reason: not valid java name */
    public static /* synthetic */ String m996getForGuild14CJxO4$default(IconUrlUtils iconUrlUtils, GuildId guildId, String str, String str2, boolean z5, Integer num, int i5, Object obj) {
        if ((i5 & 4) != 0) {
            str2 = null;
        }
        if ((i5 & 8) != 0) {
            z5 = false;
        }
        if ((i5 & 16) != 0) {
            num = null;
        }
        return iconUrlUtils.m1001getForGuild14CJxO4(guildId, str, str2, z5, num);
    }

    /* renamed from: getForGuildMember-2tNb6hE$default, reason: not valid java name */
    public static /* synthetic */ String m997getForGuildMember2tNb6hE$default(IconUrlUtils iconUrlUtils, String str, GuildId guildId, UserId userId, Integer num, boolean z5, int i5, Object obj) {
        if ((i5 & 8) != 0) {
            num = null;
        }
        Integer num2 = num;
        if ((i5 & 16) != 0) {
            z5 = false;
        }
        return iconUrlUtils.m1002getForGuildMember2tNb6hE(str, guildId, userId, num2, z5);
    }

    /* renamed from: getForUser-_fRzTXg$default, reason: not valid java name */
    public static /* synthetic */ String m998getForUser_fRzTXg$default(IconUrlUtils iconUrlUtils, Context context, UserId userId, String str, Integer num, boolean z5, Integer num2, int i5, Object obj) {
        if ((i5 & 8) != 0) {
            num = null;
        }
        if ((i5 & 16) != 0) {
            z5 = false;
        }
        if ((i5 & 32) != 0) {
            num2 = null;
        }
        return iconUrlUtils.m1003getForUser_fRzTXg(context, userId, str, num, z5, num2);
    }

    public static /* synthetic */ void init$default(IconUrlUtils iconUrlUtils, Context context, String str, String str2, int i5, Object obj) {
        if ((i5 & 2) != 0) {
            str = null;
        }
        if ((i5 & 4) != 0) {
            str2 = null;
        }
        iconUrlUtils.init(context, str, str2);
    }

    @NotNull
    /* renamed from: getApplicationIcon-weIltyw, reason: not valid java name */
    public final String m999getApplicationIconweIltyw(ApplicationId applicationId, String imageId, int size) {
        return MediaProxy.INSTANCE.withSize(Hosts.INSTANCE.getCDN() + "/app-icons/" + applicationId + "/" + imageId, false, Integer.valueOf(size), null);
    }

    @NotNull
    public final String getCustomEmojiUrl(long emojiId, boolean animate, Integer size) {
        return MediaProxy.INSTANCE.withSize(Hosts.INSTANCE.getCDN() + "/emojis/" + emojiId, animate, size, null);
    }

    @NotNull
    /* renamed from: getForChannel-JYSGpIY, reason: not valid java name */
    public final String m1000getForChannelJYSGpIY(@NotNull Context context, ChannelId id2, String icon, boolean isGroupDM, Integer size) {
        Object i5;
        Intrinsics.checkNotNullParameter(context, "context");
        if (id2 == null) {
            return "";
        }
        if (icon == null || icon.length() == 0) {
            if (!isGroupDM) {
                return "";
            }
            switch ((int) (SnowflakeUtils.INSTANCE.toTimestamp(id2) % 8)) {
                case 1:
                    return ReactAssetUtilsKt.getReactImageUrl(context, ReactAssetExtensionsKt.getUri(ReactAsset.DefaultGroup1, context));
                case 2:
                    return ReactAssetUtilsKt.getReactImageUrl(context, ReactAssetExtensionsKt.getUri(ReactAsset.DefaultGroup2, context));
                case 3:
                    return ReactAssetUtilsKt.getReactImageUrl(context, ReactAssetExtensionsKt.getUri(ReactAsset.DefaultGroup3, context));
                case 4:
                    return ReactAssetUtilsKt.getReactImageUrl(context, ReactAssetExtensionsKt.getUri(ReactAsset.DefaultGroup4, context));
                case 5:
                    return ReactAssetUtilsKt.getReactImageUrl(context, ReactAssetExtensionsKt.getUri(ReactAsset.DefaultGroup5, context));
                case 6:
                    return ReactAssetUtilsKt.getReactImageUrl(context, ReactAssetExtensionsKt.getUri(ReactAsset.DefaultGroup6, context));
                case 7:
                    return ReactAssetUtilsKt.getReactImageUrl(context, ReactAssetExtensionsKt.getUri(ReactAsset.DefaultGroup7, context));
                default:
                    return ReactAssetUtilsKt.getReactImageUrl(context, ReactAssetExtensionsKt.getUri(ReactAsset.DefaultGroup0, context));
            }
        }
        try {
            q qVar = Result.f13476e;
            i5 = MediaProxy.INSTANCE.withSize(Hosts.INSTANCE.getCDN() + "/channel-icons/" + id2 + "/" + icon, false, size, icon);
        } catch (Throwable th2) {
            q qVar2 = Result.f13476e;
            i5 = b.i(th2);
        }
        if (Result.a(i5) != null) {
            i5 = Hosts.INSTANCE.getAPI() + "/channels/" + id2 + "/icons/" + icon + ".jpg";
        }
        return (String) i5;
    }

    @NotNull
    /* renamed from: getForGuild-14CJxO4, reason: not valid java name */
    public final String m1001getForGuild14CJxO4(GuildId id2, String icon, String defaultIcon, boolean animated, Integer size) {
        Object i5;
        if (icon == null || icon.length() == 0 || id2 == null) {
            return defaultIcon == null ? "" : defaultIcon;
        }
        MediaProxy mediaProxy = MediaProxy.INSTANCE;
        try {
            q qVar = Result.f13476e;
            i5 = Hosts.INSTANCE.getCDN() + "/icons/" + id2 + "/" + icon;
        } catch (Throwable th2) {
            q qVar2 = Result.f13476e;
            i5 = b.i(th2);
        }
        if (Result.a(i5) != null) {
            i5 = Hosts.INSTANCE.getAPI() + "/guilds/" + id2 + "/icons/" + icon;
        }
        return mediaProxy.withSize((String) i5, animated, size, icon);
    }

    @NotNull
    /* renamed from: getForGuildMember-2tNb6hE, reason: not valid java name */
    public final String m1002getForGuildMember2tNb6hE(String guildMemberAvatar, GuildId guildId, UserId userId, Integer sizePx, boolean animated) {
        if (guildMemberAvatar == null || StringsKt.K(guildMemberAvatar) || guildId == null || !GuildId.m1182isValidimpl(guildId.m1185unboximpl()) || userId == null || !UserId.m1247isValidimpl(userId.m1250unboximpl())) {
            return "";
        }
        String cdn = Hosts.INSTANCE.getCDN();
        StringBuilder sb2 = new StringBuilder();
        sb2.append(cdn);
        sb2.append("/guilds/");
        sb2.append(guildId);
        sb2.append("/users/");
        sb2.append(userId);
        return MediaProxy.INSTANCE.withSize(a.j(sb2, "/avatars/", guildMemberAvatar), animated, sizePx, guildMemberAvatar);
    }

    @NotNull
    /* renamed from: getForUser-_fRzTXg, reason: not valid java name */
    public final String m1003getForUser_fRzTXg(@NotNull Context context, UserId userId, String userAvatar, Integer discriminator, boolean animated, Integer size) {
        Object i5;
        Intrinsics.checkNotNullParameter(context, "context");
        if (userId != null) {
            if (UserId.m1244equalsimpl(UserId.m1242constructorimpl(-1L), userId)) {
                return userAvatar == null ? "" : userAvatar;
            }
            if (userAvatar != null) {
                try {
                    q qVar = Result.f13476e;
                    i5 = MediaProxy.INSTANCE.withSize(Hosts.INSTANCE.getCDN() + "/avatars/" + userId + "/" + userAvatar, animated, size, userAvatar);
                } catch (Throwable th2) {
                    q qVar2 = Result.f13476e;
                    i5 = b.i(th2);
                }
                if (Result.a(i5) != null) {
                    i5 = Hosts.INSTANCE.getAPI() + "/users/" + userId + "/avatars/" + userAvatar + ".jpg";
                }
                return (String) i5;
            }
            if (discriminator != null) {
                int intValue = discriminator.intValue() % 5;
                return intValue != 1 ? intValue != 2 ? intValue != 3 ? intValue != 4 ? ReactAssetUtilsKt.getReactImageUrl(context, ReactAssetExtensionsKt.getUri(ReactAsset.DefaultAvatar0, context)) : ReactAssetUtilsKt.getReactImageUrl(context, ReactAssetExtensionsKt.getUri(ReactAsset.DefaultAvatar4, context)) : ReactAssetUtilsKt.getReactImageUrl(context, ReactAssetExtensionsKt.getUri(ReactAsset.DefaultAvatar3, context)) : ReactAssetUtilsKt.getReactImageUrl(context, ReactAssetExtensionsKt.getUri(ReactAsset.DefaultAvatar2, context)) : ReactAssetUtilsKt.getReactImageUrl(context, ReactAssetExtensionsKt.getUri(ReactAsset.DefaultAvatar1, context));
            }
        }
        return ReactAssetUtilsKt.getReactImageUrl(context, ReactAssetExtensionsKt.getUri(ReactAsset.DefaultAvatar0, context));
    }

    public final void init(@NotNull Context context, String cdnHost, String apiHost) {
        Intrinsics.checkNotNullParameter(context, "context");
        Hosts.INSTANCE.init(context, apiHost, cdnHost);
    }
}
