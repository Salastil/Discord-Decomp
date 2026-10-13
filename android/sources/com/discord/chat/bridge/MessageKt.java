package com.discord.chat.bridge;

import android.content.Context;
import com.discord.react.utilities.ReactColorToAndroidColorKt;
import com.discord.react_asset_fetcher.ReactAssetUtilsKt;
import com.discord.theme.ThemeManagerKt;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.SourceDebugExtension;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u0000\"\n\u0000\n\u0002\u0010\u000b\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0010\b\n\u0002\b\u0007\n\u0002\u0010\u000e\n\u0000\n\u0002\u0018\u0002\n\u0000\u001a\n\u0010\u0000\u001a\u00020\u0001*\u00020\u0002\u001a\n\u0010\u0003\u001a\u00020\u0001*\u00020\u0002\u001a\n\u0010\u0004\u001a\u00020\u0001*\u00020\u0002\u001a\n\u0010\u0005\u001a\u00020\u0001*\u00020\u0002\u001a\n\u0010\u0006\u001a\u00020\u0001*\u00020\u0002\u001a\u0014\u0010\u0007\u001a\u00020\b*\u00020\u00022\b\b\u0002\u0010\t\u001a\u00020\b\u001a\u0014\u0010\n\u001a\u00020\b*\u00020\u00022\b\b\u0002\u0010\t\u001a\u00020\b\u001a\n\u0010\u000b\u001a\u00020\u0001*\u00020\u0002\u001a\n\u0010\f\u001a\u00020\u0001*\u00020\u0002\u001a\n\u0010\r\u001a\u00020\u0001*\u00020\u0002\u001a\n\u0010\u000e\u001a\u00020\u0001*\u00020\u0002\u001a\u0014\u0010\u000f\u001a\u0004\u0018\u00010\u0010*\u00020\u00022\u0006\u0010\u0011\u001a\u00020\u0012¨\u0006\u0013"}, d2 = {"isSystemMessage", "", "Lcom/discord/chat/bridge/Message;", "isAutomodSystemMessage", "isCallMessage", "isEphemeral", "isSurvey", "usernameColor", "", "defaultColor", "roleDotColor", "shouldAutoPlayGifs", "shouldAnimateEmoji", "shouldShowLinkDecorations", "shouldForceRevealSpoilers", "avatarUrl", "", "context", "Landroid/content/Context;", "chat_release"}, k = 2, mv = {2, 1, 0}, xi = 48)
@SourceDebugExtension({"SMAP\nMessage.kt\nKotlin\n*S Kotlin\n*F\n+ 1 Message.kt\ncom/discord/chat/bridge/MessageKt\n+ 2 fake.kt\nkotlin/jvm/internal/FakeKt\n*L\n1#1,247:1\n1#2:248\n*E\n"})
/* loaded from: classes.dex */
public final class MessageKt {
    public static final String avatarUrl(@NotNull Message message, @NotNull Context context) {
        Intrinsics.checkNotNullParameter(message, "<this>");
        Intrinsics.checkNotNullParameter(context, "context");
        return ReactAssetUtilsKt.inflateUrl(context, message.getAvatarURL$chat_release());
    }

    public static final boolean isAutomodSystemMessage(@NotNull Message message) {
        Intrinsics.checkNotNullParameter(message, "<this>");
        return message.getType().isAutomodSystem();
    }

    public static final boolean isCallMessage(@NotNull Message message) {
        Intrinsics.checkNotNullParameter(message, "<this>");
        return message.getType().isCall();
    }

    public static final boolean isEphemeral(@NotNull Message message) {
        Intrinsics.checkNotNullParameter(message, "<this>");
        return message.getEphemeralIndication() != null;
    }

    public static final boolean isSurvey(@NotNull Message message) {
        Intrinsics.checkNotNullParameter(message, "<this>");
        return message.getSurveyIndication() != null;
    }

    public static final boolean isSystemMessage(@NotNull Message message) {
        Intrinsics.checkNotNullParameter(message, "<this>");
        return message.getType().isSystem();
    }

    public static final int roleDotColor(@NotNull Message message, int i5) {
        Intrinsics.checkNotNullParameter(message, "<this>");
        Integer roleColor = message.getRoleColor();
        return roleColor != null ? ReactColorToAndroidColorKt.reactColorToAndroidColor(roleColor.intValue()) : i5;
    }

    public static /* synthetic */ int roleDotColor$default(Message message, int i5, int i6, Object obj) {
        if ((i6 & 1) != 0) {
            i5 = ThemeManagerKt.getTheme().getInteractiveTextActive();
        }
        return roleDotColor(message, i5);
    }

    public static final boolean shouldAnimateEmoji(@NotNull Message message) {
        Intrinsics.checkNotNullParameter(message, "<this>");
        Boolean animateEmoji = message.getAnimateEmoji();
        if (animateEmoji != null) {
            return animateEmoji.booleanValue();
        }
        return false;
    }

    public static final boolean shouldAutoPlayGifs(@NotNull Message message) {
        Intrinsics.checkNotNullParameter(message, "<this>");
        Boolean gifAutoPlay = message.getGifAutoPlay();
        if (gifAutoPlay != null) {
            return gifAutoPlay.booleanValue();
        }
        return false;
    }

    public static final boolean shouldForceRevealSpoilers(@NotNull Message message) {
        Intrinsics.checkNotNullParameter(message, "<this>");
        Boolean forceRevealSpoilers = message.getForceRevealSpoilers();
        if (forceRevealSpoilers != null) {
            return forceRevealSpoilers.booleanValue();
        }
        return false;
    }

    public static final boolean shouldShowLinkDecorations(@NotNull Message message) {
        Intrinsics.checkNotNullParameter(message, "<this>");
        Boolean showLinkDecorations = message.getShowLinkDecorations();
        if (showLinkDecorations != null) {
            return showLinkDecorations.booleanValue();
        }
        return false;
    }

    public static final int usernameColor(@NotNull Message message, int i5) {
        Intrinsics.checkNotNullParameter(message, "<this>");
        Integer usernameColor = message.getUsernameColor();
        return usernameColor != null ? ReactColorToAndroidColorKt.reactColorToAndroidColor(usernameColor.intValue()) : i5;
    }

    public static /* synthetic */ int usernameColor$default(Message message, int i5, int i6, Object obj) {
        if ((i6 & 1) != 0) {
            i5 = ThemeManagerKt.getTheme().getTextDefault();
        }
        return usernameColor(message, i5);
    }
}
