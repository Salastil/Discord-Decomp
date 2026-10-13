package com.discord.image.fresco;

import android.net.Uri;
import java.util.Locale;
import java.util.Set;
import kotlin.Metadata;
import kotlin.collections.CollectionsKt;
import kotlin.collections.x;
import kotlin.jvm.internal.Intrinsics;
import kotlin.text.StringsKt;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u0000\u001c\n\u0000\n\u0002\u0010\"\n\u0002\u0010\u000e\n\u0000\n\u0002\u0010\u000b\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0006\u001a\u0010\u0010\u0003\u001a\u00020\u00042\u0006\u0010\u0005\u001a\u00020\u0002H\u0002\u001a\f\u0010\u0006\u001a\u00020\u0004*\u00020\u0007H\u0002\u001a\f\u0010\b\u001a\u00020\u0004*\u00020\u0007H\u0002\u001a\f\u0010\t\u001a\u00020\u0004*\u00020\u0007H\u0002\u001a\f\u0010\n\u001a\u00020\u0004*\u00020\u0007H\u0000\u001a\f\u0010\u000b\u001a\u00020\u0004*\u00020\u0007H\u0000\u001a\f\u0010\f\u001a\u00020\u0004*\u00020\u0007H\u0000\"\u0014\u0010\u0000\u001a\b\u0012\u0004\u0012\u00020\u00020\u0001X\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006\r"}, d2 = {"DISCORD_CDN_HOSTS", "", "", "isAttachmentPath", "", "path", "isDiscordCdnHost", "Landroid/net/Uri;", "isDiscordCdnHttpUri", "isLocalLowPriorityUri", "isSignedAttachmentCacheKeyCandidate", "isLowPriorityDiscordImagePath", "shouldUseSmallDiskCacheForDiscordImage", "fresco_release"}, k = 2, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final class DiscordImageUriPolicyKt {

    @NotNull
    private static final Set<String> DISCORD_CDN_HOSTS;

    static {
        String[] elements = {"cdn.discordapp.com", "media.discordapp.net", "images.discordapp.net"};
        Intrinsics.checkNotNullParameter(elements, "elements");
        DISCORD_CDN_HOSTS = x.J(elements);
    }

    private static final boolean isAttachmentPath(String str) {
        return kotlin.text.x.o(str, "/attachments/", false) || kotlin.text.x.o(str, "/ephemeral-attachments/", false);
    }

    private static final boolean isDiscordCdnHost(Uri uri) {
        return CollectionsKt.E(DISCORD_CDN_HOSTS, uri.getHost());
    }

    private static final boolean isDiscordCdnHttpUri(Uri uri) {
        return (Intrinsics.areEqual(uri.getScheme(), "https") || Intrinsics.areEqual(uri.getScheme(), "http")) && isDiscordCdnHost(uri);
    }

    private static final boolean isLocalLowPriorityUri(Uri uri) {
        String str;
        String path;
        String scheme = uri.getScheme();
        if (scheme != null) {
            str = scheme.toLowerCase(Locale.ROOT);
            Intrinsics.checkNotNullExpressionValue(str, "toLowerCase(...)");
        } else {
            str = null;
        }
        if (Intrinsics.areEqual(str, "content")) {
            return true;
        }
        return (!Intrinsics.areEqual(str, "file") || (path = uri.getPath()) == null || kotlin.text.x.o(path, "/android_asset/", false)) ? false : true;
    }

    public static final boolean isLowPriorityDiscordImagePath(@NotNull Uri uri) {
        Intrinsics.checkNotNullParameter(uri, "<this>");
        if (isLocalLowPriorityUri(uri)) {
            return true;
        }
        String path = uri.getPath();
        if (path != null && isDiscordCdnHttpUri(uri)) {
            return isAttachmentPath(path);
        }
        return false;
    }

    public static final boolean isSignedAttachmentCacheKeyCandidate(@NotNull Uri uri) {
        Intrinsics.checkNotNullParameter(uri, "<this>");
        String path = uri.getPath();
        return path != null && isDiscordCdnHost(uri) && isAttachmentPath(path);
    }

    public static final boolean shouldUseSmallDiskCacheForDiscordImage(@NotNull Uri uri) {
        Intrinsics.checkNotNullParameter(uri, "<this>");
        String path = uri.getPath();
        if (path != null && isDiscordCdnHttpUri(uri) && !isAttachmentPath(path)) {
            if (kotlin.text.x.o(path, "/avatars/", false) || kotlin.text.x.o(path, "/emojis/", false) || kotlin.text.x.o(path, "/icons/", false) || kotlin.text.x.o(path, "/channel-icons/", false) || kotlin.text.x.o(path, "/app-icons/", false)) {
                return true;
            }
            if (kotlin.text.x.o(path, "/guilds/", false) && StringsKt.D(path, "/users/", false) && StringsKt.D(path, "/avatars/", false)) {
                return true;
            }
        }
        return false;
    }
}
