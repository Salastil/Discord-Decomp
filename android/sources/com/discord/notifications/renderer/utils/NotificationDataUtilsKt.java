package com.discord.notifications.renderer.utils;

import a3.e;
import android.app.PendingIntent;
import android.content.Context;
import android.graphics.Bitmap;
import android.net.Uri;
import android.text.SpannableStringBuilder;
import android.text.style.ForegroundColorSpan;
import android.text.style.StyleSpan;
import androidx.core.app.NotificationCompat$Action;
import androidx.core.app.Person;
import androidx.core.app.RemoteInput;
import androidx.core.content.pm.ShortcutInfoCompat;
import androidx.core.graphics.drawable.IconCompat;
import bs.e1;
import com.discord.crash_reporting.CrashReporting;
import com.discord.device.utils.IsMetaQuestKt;
import com.discord.icons.IconUrlUtils;
import com.discord.misc.utilities.intent.PendingIntentUtils;
import com.discord.notifications.actions.intents.ContentAction;
import com.discord.notifications.actions.intents.DeleteAction;
import com.discord.notifications.actions.intents.DirectReplyAction;
import com.discord.notifications.actions.intents.DismissCallAction;
import com.discord.notifications.actions.intents.MarkAsReadAction;
import com.discord.notifications.actions.intents.MuteAction;
import com.discord.notifications.actions.intents.NotificationAction;
import com.discord.notifications.api.Component;
import com.discord.notifications.api.Embed;
import com.discord.notifications.api.EmbedField;
import com.discord.notifications.api.KvMessageEntry;
import com.discord.notifications.api.NotificationData;
import com.discord.notifications.api.NotificationMessage;
import com.discord.notifications.api.Poll;
import com.discord.notifications.api.PollMedia;
import com.discord.notifications.api.Sticker;
import com.discord.notifications.renderer.NotificationRenderer;
import com.discord.notifications.renderer.R;
import com.discord.primitives.ChannelId;
import com.discord.primitives.GuildId;
import com.discord.primitives.MessageFlag;
import com.discord.primitives.MessageFlagKt;
import com.discord.primitives.MessageId;
import com.discord.primitives.MessageIdSnowflake;
import com.discord.primitives.UserId;
import com.discord.react_strings.I18nMessage;
import com.discord.react_strings.I18nUtilsKt;
import com.discord.react_strings.RenderContext;
import com.discord.shortcuts.ShortcutData;
import com.discord.shortcuts.ShortcutUtilsKt;
import com.discord.snowflake.SnowflakeUtilsKt;
import com.discord.theme.utils.ColorUtilsKt;
import com.facebook.imagepipeline.nativecode.b;
import com.facebook.react.devsupport.StackTraceHelper;
import com.facebook.react.views.progressbar.ReactProgressBarViewManager;
import cs.h;
import java.text.SimpleDateFormat;
import java.util.ArrayList;
import java.util.Date;
import java.util.Iterator;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Locale;
import java.util.Map;
import k0.d;
import kotlin.Metadata;
import kotlin.Pair;
import kotlin.Unit;
import kotlin.collections.CollectionsKt;
import kotlin.collections.b0;
import kotlin.collections.c0;
import kotlin.collections.d0;
import kotlin.collections.m0;
import kotlin.collections.v0;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.SourceDebugExtension;
import kotlin.text.x;
import kotlinx.serialization.json.Json;
import kotlinx.serialization.json.JsonElement;
import kotlinx.serialization.json.JsonObject;
import kotlinx.serialization.json.JsonObjectBuilder;
import org.jetbrains.annotations.NotNull;
import x0.u;

@Metadata(d1 = {"\u0000\u0086\u0001\n\u0002\u0018\u0002\n\u0002\u0010\u000e\n\u0002\b\u0003\n\u0002\u0010\u000b\n\u0002\b\u0006\n\u0002\u0010\b\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\r\n\u0002\b\b\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0010\t\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010$\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0018\u0002\n\u0002\b\b\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\n\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\r\u001a\u0011\u0010\u0002\u001a\u00020\u0001*\u00020\u0000¢\u0006\u0004\b\u0002\u0010\u0003\u001a\u0013\u0010\u0004\u001a\u00020\u0001*\u00020\u0000H\u0000¢\u0006\u0004\b\u0004\u0010\u0003\u001a\u0013\u0010\u0006\u001a\u00020\u0005*\u00020\u0000H\u0000¢\u0006\u0004\b\u0006\u0010\u0007\u001a\u0013\u0010\b\u001a\u00020\u0005*\u00020\u0000H\u0000¢\u0006\u0004\b\b\u0010\u0007\u001a\u0013\u0010\t\u001a\u00020\u0005*\u00020\u0000H\u0000¢\u0006\u0004\b\t\u0010\u0007\u001a\u0013\u0010\n\u001a\u00020\u0005*\u00020\u0000H\u0000¢\u0006\u0004\b\n\u0010\u0007\u001a\u0013\u0010\u000b\u001a\u00020\u0005*\u00020\u0000H\u0000¢\u0006\u0004\b\u000b\u0010\u0007\u001a\u0013\u0010\r\u001a\u00020\f*\u00020\u0000H\u0000¢\u0006\u0004\b\r\u0010\u000e\u001a\u0013\u0010\u000f\u001a\u00020\u0001*\u00020\u0000H\u0000¢\u0006\u0004\b\u000f\u0010\u0003\u001a\u0019\u0010\u0013\u001a\u00020\u0012*\u00020\u00002\u0006\u0010\u0011\u001a\u00020\u0010¢\u0006\u0004\b\u0013\u0010\u0014\u001a\u0015\u0010\u0015\u001a\u0004\u0018\u00010\u0012*\u00020\u0000H\u0000¢\u0006\u0004\b\u0015\u0010\u0016\u001a%\u0010\u0018\u001a\u0004\u0018\u00010\u0012*\u00020\u00002\u0006\u0010\u0011\u001a\u00020\u00102\u0006\u0010\u0017\u001a\u00020\u0005H\u0000¢\u0006\u0004\b\u0018\u0010\u0019\u001a#\u0010\u001a\u001a\u0004\u0018\u00010\u0012*\u00020\u00002\u0006\u0010\u0011\u001a\u00020\u00102\u0006\u0010\u0017\u001a\u00020\u0005¢\u0006\u0004\b\u001a\u0010\u0019\u001a+\u0010 \u001a\u00020\u00122\u0006\u0010\u0011\u001a\u00020\u00102\b\u0010\u001c\u001a\u0004\u0018\u00010\u001b2\b\u0010\u001d\u001a\u0004\u0018\u00010\u0001H\u0002¢\u0006\u0004\b\u001e\u0010\u001f\u001a\u0013\u0010\"\u001a\u00020!*\u00020\u0000H\u0000¢\u0006\u0004\b\"\u0010#\u001a\u0013\u0010&\u001a\u00020%*\u00020$H\u0002¢\u0006\u0004\b&\u0010'\u001a\u001d\u0010*\u001a\u00020)*\u00020\u00002\b\u0010(\u001a\u0004\u0018\u00010$H\u0000¢\u0006\u0004\b*\u0010+\u001a\u001f\u0010,\u001a\u0004\u0018\u00010)*\u00020\u00002\b\u0010(\u001a\u0004\u0018\u00010$H\u0000¢\u0006\u0004\b,\u0010+\u001aC\u00101\u001a\u000200*\u00020\u00002\u0006\u0010\u0011\u001a\u00020\u00102\u0012\u0010.\u001a\u000e\u0012\u0004\u0012\u00020\u0001\u0012\u0004\u0012\u00020\u00010-2\b\u0010(\u001a\u0004\u0018\u00010$2\b\u0010/\u001a\u0004\u0018\u00010$H\u0000¢\u0006\u0004\b1\u00102\u001a\u001b\u00103\u001a\u00020\u0001*\u00020\u00002\u0006\u0010\u0011\u001a\u00020\u0010H\u0000¢\u0006\u0004\b3\u00104\u001a\u001b\u00105\u001a\u00020\u0001*\u00020\u00002\u0006\u0010\u0011\u001a\u00020\u0010H\u0000¢\u0006\u0004\b5\u00104\u001a\u001b\u00107\u001a\u000206*\u00020\u00002\u0006\u0010\u0011\u001a\u00020\u0010H\u0000¢\u0006\u0004\b7\u00108\u001a3\u0010:\u001a\u0002062\u0006\u0010\u0011\u001a\u00020\u00102\u0012\u0010.\u001a\u000e\u0012\u0004\u0012\u00020\u0001\u0012\u0004\u0012\u00020\u00010-2\u0006\u00109\u001a\u00020\u0001H\u0002¢\u0006\u0004\b:\u0010;\u001a/\u0010<\u001a\u000206*\u00020\u00002\u0006\u0010\u0011\u001a\u00020\u00102\u0012\u0010.\u001a\u000e\u0012\u0004\u0012\u00020\u0001\u0012\u0004\u0012\u00020\u00010-H\u0000¢\u0006\u0004\b<\u0010=\u001a/\u0010>\u001a\u000206*\u00020\u00002\u0006\u0010\u0011\u001a\u00020\u00102\u0012\u0010.\u001a\u000e\u0012\u0004\u0012\u00020\u0001\u0012\u0004\u0012\u00020\u00010-H\u0000¢\u0006\u0004\b>\u0010=\u001a\u001d\u0010@\u001a\u0004\u0018\u00010?*\u00020\u00002\u0006\u0010\u0011\u001a\u00020\u0010H\u0000¢\u0006\u0004\b@\u0010A\u001a\u001d\u0010B\u001a\u0004\u0018\u00010?*\u00020\u00002\u0006\u0010\u0011\u001a\u00020\u0010H\u0000¢\u0006\u0004\bB\u0010A\u001a\u001d\u0010D\u001a\u0004\u0018\u00010C*\u00020\u00002\u0006\u0010\u0011\u001a\u00020\u0010H\u0000¢\u0006\u0004\bD\u0010E\u001a7\u0010G\u001a\u0004\u0018\u00010?*\u00020\u00002\u0006\u0010\u0011\u001a\u00020\u00102\u0006\u0010F\u001a\u00020\u00052\u0012\u0010.\u001a\u000e\u0012\u0004\u0012\u00020\u0001\u0012\u0004\u0012\u00020\u00010-¢\u0006\u0004\bG\u0010H\u001a#\u0010J\u001a\u0004\u0018\u00010?*\u00020\u00002\u0006\u0010\u0011\u001a\u00020\u00102\u0006\u0010I\u001a\u00020\f¢\u0006\u0004\bJ\u0010K\u001a\u001b\u0010L\u001a\u0004\u0018\u00010?*\u00020\u00002\u0006\u0010\u0011\u001a\u00020\u0010¢\u0006\u0004\bL\u0010A\u001a\u001d\u0010O\u001a\u0004\u0018\u00010N*\u00020\u00002\b\u0010M\u001a\u0004\u0018\u00010\u0001¢\u0006\u0004\bO\u0010P\u001a\u0011\u0010R\u001a\u00020Q*\u00020\u0000¢\u0006\u0004\bR\u0010S\u001a\u0019\u0010U\u001a\u00020Q*\u00020\u00002\u0006\u0010T\u001a\u00020Q¢\u0006\u0004\bU\u0010V\u001a#\u0010X\u001a\u0004\u0018\u00010\u00122\u0006\u0010\u0017\u001a\u00020\u00052\b\u0010W\u001a\u0004\u0018\u00010\u0001H\u0002¢\u0006\u0004\bX\u0010Y\u001a%\u0010\\\u001a\u00020\u00012\u0006\u0010\u0011\u001a\u00020\u00102\u0006\u0010Z\u001a\u00020\u00012\u0006\u0010[\u001a\u00020\u0005¢\u0006\u0004\b\\\u0010]¨\u0006^"}, d2 = {"Lcom/discord/notifications/api/NotificationData;", "", "getTag", "(Lcom/discord/notifications/api/NotificationData;)Ljava/lang/String;", "getGroupKey", "", "isGroupConversation", "(Lcom/discord/notifications/api/NotificationData;)Z", "isCallRinging", "shouldUseBigText", "isCall", "shouldUseMessagingStyle", "", "getSmallIcon", "(Lcom/discord/notifications/api/NotificationData;)I", "getNotificationCategory", "Landroid/content/Context;", "context", "", "getTitle", "(Lcom/discord/notifications/api/NotificationData;Landroid/content/Context;)Ljava/lang/CharSequence;", "getConversationTitle", "(Lcom/discord/notifications/api/NotificationData;)Ljava/lang/CharSequence;", "forLogs", "renderMessageContent", "(Lcom/discord/notifications/api/NotificationData;Landroid/content/Context;Z)Ljava/lang/CharSequence;", "getContent", "Lcom/discord/primitives/UserId;", "userId", "userName", "getSystemMessageUserJoin-_NT-lnE", "(Landroid/content/Context;Lcom/discord/primitives/UserId;Ljava/lang/String;)Ljava/lang/CharSequence;", "getSystemMessageUserJoin", "", "getSendTime", "(Lcom/discord/notifications/api/NotificationData;)J", "Landroid/graphics/Bitmap;", "Landroidx/core/graphics/drawable/IconCompat;", "toIconCompat", "(Landroid/graphics/Bitmap;)Landroidx/core/graphics/drawable/IconCompat;", "icon", "Landroidx/core/app/Person;", "getSender", "(Lcom/discord/notifications/api/NotificationData;Landroid/graphics/Bitmap;)Landroidx/core/app/Person;", "getSenderForMessageNotification", "", "notificationDataMap", "avatar", "Landroidx/core/content/pm/ShortcutInfoCompat;", "getShortcutInfo", "(Lcom/discord/notifications/api/NotificationData;Landroid/content/Context;Ljava/util/Map;Landroid/graphics/Bitmap;Landroid/graphics/Bitmap;)Landroidx/core/content/pm/ShortcutInfoCompat;", "getIconUrl", "(Lcom/discord/notifications/api/NotificationData;Landroid/content/Context;)Ljava/lang/String;", "getIconUrlForAvatar", "Landroid/app/PendingIntent;", "getDeletePendingIntent", "(Lcom/discord/notifications/api/NotificationData;Landroid/content/Context;)Landroid/app/PendingIntent;", "tag", "getPendingIntent", "(Landroid/content/Context;Ljava/util/Map;Ljava/lang/String;)Landroid/app/PendingIntent;", "getContentPendingIntent", "(Lcom/discord/notifications/api/NotificationData;Landroid/content/Context;Ljava/util/Map;)Landroid/app/PendingIntent;", "getButtonPendingIntent", "Landroidx/core/app/NotificationCompat$Action;", "getMarkAsReadAction", "(Lcom/discord/notifications/api/NotificationData;Landroid/content/Context;)Landroidx/core/app/NotificationCompat$Action;", "getDirectReplyAction", "Landroid/net/Uri;", "getSound", "(Lcom/discord/notifications/api/NotificationData;Landroid/content/Context;)Landroid/net/Uri;", "isAcceptAction", "getCallAction", "(Lcom/discord/notifications/api/NotificationData;Landroid/content/Context;ZLjava/util/Map;)Landroidx/core/app/NotificationCompat$Action;", "numMessages", "getTimedMuteAction", "(Lcom/discord/notifications/api/NotificationData;Landroid/content/Context;I)Landroidx/core/app/NotificationCompat$Action;", "getBotDMMuteAction", "rawMessage", "Lcom/discord/notifications/api/KvMessageEntry;", "getKvMessage", "(Lcom/discord/notifications/api/NotificationData;Ljava/lang/String;)Lcom/discord/notifications/api/KvMessageEntry;", "Lkotlinx/serialization/json/JsonObject;", "getAuthor", "(Lcom/discord/notifications/api/NotificationData;)Lkotlinx/serialization/json/JsonObject;", "author", "toNotificationMessage", "(Lcom/discord/notifications/api/NotificationData;Lkotlinx/serialization/json/JsonObject;)Lkotlinx/serialization/json/JsonObject;", "messageContent", "renderLogAwareNotificationMessageContent", "(ZLjava/lang/String;)Ljava/lang/CharSequence;", NotificationRenderer.USERNAME, NotificationRenderer.IS_DM, "getMissedCallText", "(Landroid/content/Context;Ljava/lang/String;Z)Ljava/lang/String;", "notification_renderer_release"}, k = 2, mv = {2, 1, 0}, xi = 48)
@SourceDebugExtension({"SMAP\nNotificationDataUtils.kt\nKotlin\n*S Kotlin\n*F\n+ 1 NotificationDataUtils.kt\ncom/discord/notifications/renderer/utils/NotificationDataUtilsKt\n+ 2 Uri.kt\nandroidx/core/net/UriKt\n+ 3 SpannableStringBuilder.kt\nandroidx/core/text/SpannableStringBuilderKt\n+ 4 _Collections.kt\nkotlin/collections/CollectionsKt___CollectionsKt\n+ 5 JsonElementBuilders.kt\nkotlinx/serialization/json/JsonElementBuildersKt\n+ 6 fake.kt\nkotlin/jvm/internal/FakeKt\n*L\n1#1,835:1\n29#2:836\n87#3:837\n74#3,2:838\n115#3:840\n74#3,4:841\n1563#4:845\n1634#4,3:846\n29#5,3:849\n29#5,3:852\n1#6:855\n*S KotlinDebug\n*F\n+ 1 NotificationDataUtils.kt\ncom/discord/notifications/renderer/utils/NotificationDataUtilsKt\n*L\n612#1:836\n653#1:837\n653#1:838,2\n653#1:840\n653#1:841,4\n729#1:845\n729#1:846,3\n773#1:849,3\n799#1:852,3\n*E\n"})
/* loaded from: classes.dex */
public final class NotificationDataUtilsKt {
    @NotNull
    public static final JsonObject getAuthor(@NotNull NotificationData notificationData) {
        Intrinsics.checkNotNullParameter(notificationData, "<this>");
        String userAvatar = notificationData.getUserAvatar();
        UserId m1128getUserIdwUX8bhU = notificationData.m1128getUserIdwUX8bhU();
        Intrinsics.checkNotNull(m1128getUserIdwUX8bhU);
        long m1250unboximpl = m1128getUserIdwUX8bhU.m1250unboximpl();
        String userUsername = notificationData.getUserUsername();
        Intrinsics.checkNotNull(userUsername);
        JsonObjectBuilder jsonObjectBuilder = new JsonObjectBuilder();
        if (userAvatar != null) {
            b.A(jsonObjectBuilder, "avatar", userAvatar);
        }
        b.A(jsonObjectBuilder, StackTraceHelper.ID_KEY, UserId.m1248toStringimpl(m1250unboximpl));
        b.A(jsonObjectBuilder, NotificationRenderer.USERNAME, userUsername);
        b.A(jsonObjectBuilder, "globalName", notificationData.getUserGlobalName());
        Boolean bool = Boolean.TRUE;
        Intrinsics.checkNotNullParameter(jsonObjectBuilder, "<this>");
        Intrinsics.checkNotNullParameter("incomplete", "key");
        jsonObjectBuilder.b("incomplete", h.a(bool));
        return jsonObjectBuilder.a();
    }

    public static final NotificationCompat$Action getBotDMMuteAction(@NotNull NotificationData notificationData, @NotNull Context context) {
        ChannelId m1123getChannelIdqMVnFVQ;
        Intrinsics.checkNotNullParameter(notificationData, "<this>");
        Intrinsics.checkNotNullParameter(context, "context");
        if (Intrinsics.areEqual(notificationData.getType(), NotificationData.TYPE_MESSAGE_CREATE) && notificationData.getAppDm() && (m1123getChannelIdqMVnFVQ = notificationData.m1123getChannelIdqMVnFVQ()) != null) {
            return new u(R.drawable.ic_notifications_off_24dp, I18nUtilsKt.i18nFormat(context, I18nMessage.NOTIFICATION_MUTE_APP_DM, new a(notificationData, 13)), NotificationAction.DefaultImpls.toPendingIntent$default(new MuteAction(getTag(notificationData), notificationData.m1124getGuildIdqOKuAAo(), m1123getChannelIdqMVnFVQ.m1172unboximpl(), -1, null), context, 0, false, 6, null)).a();
        }
        return null;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit getBotDMMuteAction$lambda$28(NotificationData notificationData, RenderContext i18nFormat) {
        Intrinsics.checkNotNullParameter(i18nFormat, "$this$i18nFormat");
        i18nFormat.getArgs().put("app", notificationData.getUserUsername());
        return Unit.a;
    }

    @NotNull
    public static final PendingIntent getButtonPendingIntent(@NotNull NotificationData notificationData, @NotNull Context context, @NotNull Map<String, String> notificationDataMap) {
        Intrinsics.checkNotNullParameter(notificationData, "<this>");
        Intrinsics.checkNotNullParameter(context, "context");
        Intrinsics.checkNotNullParameter(notificationDataMap, "notificationDataMap");
        return getPendingIntent(context, notificationDataMap, d.k(getTag(notificationData), "button"));
    }

    public static final NotificationCompat$Action getCallAction(@NotNull NotificationData notificationData, @NotNull Context context, boolean z5, @NotNull Map<String, String> notificationDataMap) {
        ChannelId m1123getChannelIdqMVnFVQ;
        Context context2;
        PendingIntent pendingIntent$default;
        Intrinsics.checkNotNullParameter(notificationData, "<this>");
        Intrinsics.checkNotNullParameter(context, "context");
        Intrinsics.checkNotNullParameter(notificationDataMap, "notificationDataMap");
        if (Intrinsics.areEqual(notificationData.getType(), NotificationData.TYPE_CALL_RING) && (m1123getChannelIdqMVnFVQ = notificationData.m1123getChannelIdqMVnFVQ()) != null) {
            long m1172unboximpl = m1123getChannelIdqMVnFVQ.m1172unboximpl();
            UserId m1128getUserIdwUX8bhU = notificationData.m1128getUserIdwUX8bhU();
            if (m1128getUserIdwUX8bhU != null) {
                long m1250unboximpl = m1128getUserIdwUX8bhU.m1250unboximpl();
                if (z5) {
                    LinkedHashMap o6 = v0.o(notificationDataMap);
                    o6.put("type", NotificationData.TYPE_CALL_CONNECT);
                    pendingIntent$default = getPendingIntent(context, o6, getTag(notificationData));
                    context2 = context;
                } else {
                    context2 = context;
                    pendingIntent$default = NotificationAction.DefaultImpls.toPendingIntent$default(new DismissCallAction(getTag(notificationData), m1172unboximpl, false, notificationData.m1124getGuildIdqOKuAAo(), m1250unboximpl, null), context2, 0, false, 6, null);
                }
                Pair pair = z5 ? new Pair(I18nUtilsKt.i18nFormat$default(context2, I18nMessage.JOIN_CALL, null, 2, null), Integer.valueOf(ColorUtilsKt.getColorCompat(context2, com.discord.theme.R.color.green_360))) : new Pair(I18nUtilsKt.i18nFormat$default(context2, I18nMessage.DECLINE, null, 2, null), Integer.valueOf(ColorUtilsKt.getColorCompat(context2, com.discord.theme.R.color.red_400)));
                CharSequence charSequence = (CharSequence) pair.f13474d;
                int intValue = ((Number) pair.f13475e).intValue();
                SpannableStringBuilder spannableStringBuilder = new SpannableStringBuilder();
                StyleSpan styleSpan = new StyleSpan(1);
                int length = spannableStringBuilder.length();
                ForegroundColorSpan foregroundColorSpan = new ForegroundColorSpan(intValue);
                int length2 = spannableStringBuilder.length();
                spannableStringBuilder.append(charSequence);
                spannableStringBuilder.setSpan(foregroundColorSpan, length2, spannableStringBuilder.length(), 17);
                spannableStringBuilder.setSpan(styleSpan, length, spannableStringBuilder.length(), 17);
                return new u(z5 ? R.drawable.ic_call_24dp : R.drawable.ic_call_disconnect_24dp, spannableStringBuilder, pendingIntent$default).a();
            }
        }
        return null;
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    /* JADX WARN: Failed to restore switch over string. Please report as a decompilation issue */
    /* JADX WARN: Removed duplicated region for block: B:104:0x01b5 A[ORIG_RETURN, RETURN] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static final CharSequence getContent(@NotNull NotificationData notificationData, @NotNull Context context, boolean z5) {
        String subtitle;
        String subtitle2;
        Integer activityType;
        Intrinsics.checkNotNullParameter(notificationData, "<this>");
        Intrinsics.checkNotNullParameter(context, "context");
        String type = notificationData.getType();
        switch (type.hashCode()) {
            case -1502317553:
                return (type.equals(NotificationData.TYPE_GENERIC_PUSH_NOTIFICATION_SENT) && (subtitle = notificationData.getSubtitle()) != null) ? subtitle : "";
            case -1489275252:
                if (type.equals(NotificationData.TYPE_GUILD_SCHEDULED_EVENT_UPDATE) && (subtitle2 = notificationData.getSubtitle()) != null) {
                    return subtitle2;
                }
                break;
            case -1327124998:
                if (type.equals(NotificationData.TYPE_RELATIONSHIP_ADD)) {
                    Integer relationshipType = notificationData.getRelationshipType();
                    if (relationshipType != null && relationshipType.intValue() == 1) {
                        return I18nUtilsKt.i18nFormat$default(context, I18nMessage.NOTIFICATION_ACCEPTED_FRIEND_REQUEST, null, 2, null);
                    }
                    if (relationshipType != null && relationshipType.intValue() == 3) {
                        return I18nUtilsKt.i18nFormat$default(context, I18nMessage.NOTIFICATION_PENDING_FRIEND_REQUEST, null, 2, null);
                    }
                }
            case -1263316859:
                if (type.equals(NotificationData.TYPE_STAGE_INSTANCE_CREATE)) {
                    return I18nUtilsKt.i18nFormat(context, I18nMessage.STAGE_START_PUSH_NOTIFICATION_BODY, new a(notificationData, 11));
                }
            case -1237752112:
                if (type.equals(NotificationData.TYPE_APPLICATION_LIBRARY_INSTALL_COMPLETE)) {
                    return I18nUtilsKt.i18nFormat(context, I18nMessage.GAME_LIBRARY_NOTIFICATION_GAME_INSTALLED_BODY, new a(notificationData, 9));
                }
            case -437641071:
                if (type.equals(NotificationData.TYPE_FORUM_THREAD_CREATED)) {
                    return I18nUtilsKt.i18nFormat(context, I18nMessage.FORUM_CHANNEL_THREAD_CREATED_PUSH_BODY_MOBILE, new a(notificationData, 12));
                }
            case -45642698:
                if (type.equals(NotificationData.TYPE_FRIEND_SUGGESTION_CREATE)) {
                    return I18nUtilsKt.i18nFormat$default(context, I18nMessage.NOTIFICATION_FRIEND_SUGGESTION_BODY, null, 2, null);
                }
            case 974015250:
                if (type.equals(NotificationData.TYPE_ACTIVITY_START) && (activityType = notificationData.getActivityType()) != null && activityType.intValue() == 0) {
                    return I18nUtilsKt.i18nFormat(context, I18nMessage.NOTIFICATION_BODY_START_GAME, new a(notificationData, 7));
                }
            case 998188116:
                if (type.equals(NotificationData.TYPE_MESSAGE_CREATE)) {
                    Integer channelType = notificationData.getChannelType();
                    if ((channelType != null && channelType.intValue() == 0) || ((channelType != null && channelType.intValue() == 2) || ((channelType != null && channelType.intValue() == 5) || ((channelType != null && channelType.intValue() == 10) || ((channelType != null && channelType.intValue() == 11) || (channelType != null && channelType.intValue() == 12)))))) {
                        Integer messageType = notificationData.getMessageType();
                        if (messageType != null && messageType.intValue() == 7) {
                            return m1148getSystemMessageUserJoin_NTlnE(context, notificationData.m1128getUserIdwUX8bhU(), notificationData.getUserUsername());
                        }
                        Integer messageActivityType = notificationData.getMessageActivityType();
                        return (messageActivityType != null && messageActivityType.intValue() == 1) ? I18nUtilsKt.i18nFormat(context, I18nMessage.NOTIFICATION_MESSAGE_CREATE_GUILD_ACTIVITY_JOIN, new a(notificationData, 5)) : renderMessageContent(notificationData, context, z5);
                    }
                    if ((channelType != null && channelType.intValue() == 3) || (channelType != null && channelType.intValue() == 1)) {
                        Integer messageActivityType2 = notificationData.getMessageActivityType();
                        return (messageActivityType2 != null && messageActivityType2.intValue() == 1) ? I18nUtilsKt.i18nFormat(context, I18nMessage.NOTIFICATION_MESSAGE_CREATE_DM_ACTIVITY_JOIN, new a(notificationData, 6)) : renderMessageContent(notificationData, context, z5);
                    }
                }
            case 1770025841:
                if (type.equals(NotificationData.TYPE_CALL_RING)) {
                    return I18nUtilsKt.i18nFormat(context, I18nMessage.OVERLAY_FRIEND_CALLING, new a(notificationData, 8));
                }
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit getContent$lambda$14(NotificationData notificationData, RenderContext i18nFormat) {
        Intrinsics.checkNotNullParameter(i18nFormat, "$this$i18nFormat");
        i18nFormat.getArgs().put("user", notificationData.getUserUsername());
        i18nFormat.getArgs().put("game", notificationData.getMessageApplicationName());
        return Unit.a;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit getContent$lambda$15(NotificationData notificationData, RenderContext i18nFormat) {
        Intrinsics.checkNotNullParameter(i18nFormat, "$this$i18nFormat");
        i18nFormat.getArgs().put("user", notificationData.getUserUsername());
        i18nFormat.getArgs().put("game", notificationData.getMessageApplicationName());
        return Unit.a;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit getContent$lambda$16(NotificationData notificationData, RenderContext i18nFormat) {
        Intrinsics.checkNotNullParameter(i18nFormat, "$this$i18nFormat");
        i18nFormat.getArgs().put(NotificationRenderer.USERNAME, notificationData.getUserUsername());
        i18nFormat.getArgs().put("gameName", notificationData.getActivityName());
        return Unit.a;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit getContent$lambda$17(NotificationData notificationData, RenderContext i18nFormat) {
        Intrinsics.checkNotNullParameter(i18nFormat, "$this$i18nFormat");
        i18nFormat.getArgs().put(StackTraceHelper.NAME_KEY, notificationData.getUserUsername());
        return Unit.a;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit getContent$lambda$18(NotificationData notificationData, RenderContext i18nFormat) {
        Intrinsics.checkNotNullParameter(i18nFormat, "$this$i18nFormat");
        i18nFormat.getArgs().put(StackTraceHelper.NAME_KEY, notificationData.getApplicationName());
        return Unit.a;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit getContent$lambda$19(NotificationData notificationData, RenderContext i18nFormat) {
        Intrinsics.checkNotNullParameter(i18nFormat, "$this$i18nFormat");
        i18nFormat.getArgs().put(NotificationRenderer.USERNAME, notificationData.getUserUsername());
        i18nFormat.getArgs().put("topic", notificationData.getStageInstanceTopic());
        return Unit.a;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit getContent$lambda$20(NotificationData notificationData, RenderContext i18nFormat) {
        Intrinsics.checkNotNullParameter(i18nFormat, "$this$i18nFormat");
        i18nFormat.getArgs().put(NotificationRenderer.CHANNEL_NAME, notificationData.getChannelName());
        i18nFormat.getArgs().put("userUsername", notificationData.getUserUsername());
        return Unit.a;
    }

    @NotNull
    public static final PendingIntent getContentPendingIntent(@NotNull NotificationData notificationData, @NotNull Context context, @NotNull Map<String, String> notificationDataMap) {
        Intrinsics.checkNotNullParameter(notificationData, "<this>");
        Intrinsics.checkNotNullParameter(context, "context");
        Intrinsics.checkNotNullParameter(notificationDataMap, "notificationDataMap");
        return getPendingIntent(context, notificationDataMap, d.k(getTag(notificationData), "content"));
    }

    public static final CharSequence getConversationTitle(@NotNull NotificationData notificationData) {
        Intrinsics.checkNotNullParameter(notificationData, "<this>");
        if (!Intrinsics.areEqual(notificationData.getType(), NotificationData.TYPE_MESSAGE_CREATE)) {
            return null;
        }
        Integer channelType = notificationData.getChannelType();
        if ((channelType != null && channelType.intValue() == 0) || ((channelType != null && channelType.intValue() == 2) || ((channelType != null && channelType.intValue() == 5) || ((channelType != null && channelType.intValue() == 10) || ((channelType != null && channelType.intValue() == 11) || (channelType != null && channelType.intValue() == 12)))))) {
            return d.l(notificationData.getGuildName(), " #", notificationData.getChannelName());
        }
        if (channelType == null || channelType.intValue() != 3) {
            return null;
        }
        String channelName = notificationData.getChannelName();
        return channelName == null ? notificationData.getUserUsername() : channelName;
    }

    @NotNull
    public static final PendingIntent getDeletePendingIntent(@NotNull NotificationData notificationData, @NotNull Context context) {
        Intrinsics.checkNotNullParameter(notificationData, "<this>");
        Intrinsics.checkNotNullParameter(context, "context");
        return NotificationAction.DefaultImpls.toPendingIntent$default(new DeleteAction(getTag(notificationData)), context, 0, false, 6, null);
    }

    public static final NotificationCompat$Action getDirectReplyAction(@NotNull NotificationData notificationData, @NotNull Context context) {
        ChannelId m1123getChannelIdqMVnFVQ;
        Intrinsics.checkNotNullParameter(notificationData, "<this>");
        Intrinsics.checkNotNullParameter(context, "context");
        if (!Intrinsics.areEqual(notificationData.getType(), NotificationData.TYPE_MESSAGE_CREATE) || !notificationData.getCanReply() || notificationData.getAppDm() || (m1123getChannelIdqMVnFVQ = notificationData.m1123getChannelIdqMVnFVQ()) == null || IsMetaQuestKt.isMetaQuest()) {
            return null;
        }
        RemoteInput remoteInput = DirectReplyAction.INSTANCE.toRemoteInput(I18nUtilsKt.i18nFormat$default(context, I18nMessage.SEND_MESSAGE, null, 2, null).toString());
        u uVar = new u(R.drawable.ic_send_white_24dp, I18nUtilsKt.i18nFormat$default(context, I18nMessage.NOTIFICATION_REPLY, null, 2, null), NotificationAction.DefaultImpls.toPendingIntent$default(new DirectReplyAction(getTag(notificationData), m1123getChannelIdqMVnFVQ.m1172unboximpl(), notificationData.getChannelName(), notificationData.getChannelType(), notificationData.getGuildName(), null), context, PendingIntentUtils.mutablePendingIntentFlag$default(PendingIntentUtils.INSTANCE, 0, 1, null), false, 4, null));
        uVar.f20221f = new ArrayList();
        if (remoteInput != null) {
            uVar.f20221f.add(remoteInput);
        }
        uVar.f20219d = true;
        uVar.f20222g = 1;
        uVar.f20223h = false;
        return uVar.a();
    }

    @NotNull
    public static final String getGroupKey(@NotNull NotificationData notificationData) {
        Intrinsics.checkNotNullParameter(notificationData, "<this>");
        return e.k("GROUP_", notificationData.getType());
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    /* JADX WARN: Code restructure failed: missing block: B:10:0x005c, code lost:
    
        if (r0.intValue() == 0) goto L52;
     */
    /* JADX WARN: Code restructure failed: missing block: B:12:0x00cf, code lost:
    
        return com.discord.icons.IconUrlUtils.m996getForGuild14CJxO4$default(com.discord.icons.IconUrlUtils.INSTANCE, r13.m1124getGuildIdqOKuAAo(), r13.getGuildIcon(), "", false, null, 24, null);
     */
    /* JADX WARN: Code restructure failed: missing block: B:14:0x005e, code lost:
    
        if (r0 != null) goto L24;
     */
    /* JADX WARN: Code restructure failed: missing block: B:16:0x0066, code lost:
    
        if (r0.intValue() == 2) goto L52;
     */
    /* JADX WARN: Code restructure failed: missing block: B:17:0x0068, code lost:
    
        if (r0 != null) goto L28;
     */
    /* JADX WARN: Code restructure failed: missing block: B:19:0x0070, code lost:
    
        if (r0.intValue() == 5) goto L52;
     */
    /* JADX WARN: Code restructure failed: missing block: B:20:0x0072, code lost:
    
        if (r0 != null) goto L32;
     */
    /* JADX WARN: Code restructure failed: missing block: B:22:0x007b, code lost:
    
        if (r0.intValue() == 10) goto L52;
     */
    /* JADX WARN: Code restructure failed: missing block: B:23:0x007d, code lost:
    
        if (r0 != null) goto L36;
     */
    /* JADX WARN: Code restructure failed: missing block: B:25:0x0086, code lost:
    
        if (r0.intValue() == 11) goto L52;
     */
    /* JADX WARN: Code restructure failed: missing block: B:26:0x0088, code lost:
    
        if (r0 != null) goto L40;
     */
    /* JADX WARN: Code restructure failed: missing block: B:28:0x0091, code lost:
    
        if (r0.intValue() != 12) goto L43;
     */
    /* JADX WARN: Code restructure failed: missing block: B:29:0x0094, code lost:
    
        r0 = com.discord.icons.IconUrlUtils.INSTANCE;
        r2 = r13.m1123getChannelIdqMVnFVQ();
        r3 = r13.getChannelIcon();
        r13 = r13.getChannelType();
     */
    /* JADX WARN: Code restructure failed: missing block: B:30:0x00a2, code lost:
    
        if (r13 != null) goto L46;
     */
    /* JADX WARN: Code restructure failed: missing block: B:32:0x00aa, code lost:
    
        if (r13.intValue() != 3) goto L49;
     */
    /* JADX WARN: Code restructure failed: missing block: B:34:0x00b9, code lost:
    
        return com.discord.icons.IconUrlUtils.m995getForChannelJYSGpIY$default(r0, r14, r2, r3, r1, null, 16, null);
     */
    /* JADX WARN: Code restructure failed: missing block: B:35:0x00ad, code lost:
    
        r1 = false;
     */
    /* JADX WARN: Code restructure failed: missing block: B:37:0x003a, code lost:
    
        if (r0.intValue() != 1) goto L13;
     */
    /* JADX WARN: Code restructure failed: missing block: B:39:0x0054, code lost:
    
        return com.discord.icons.IconUrlUtils.m998getForUser_fRzTXg$default(com.discord.icons.IconUrlUtils.INSTANCE, r14, r13.m1128getUserIdwUX8bhU(), r13.getUserAvatar(), r13.getUserDiscriminator(), false, null, 32, null);
     */
    /* JADX WARN: Code restructure failed: missing block: B:41:0x0029, code lost:
    
        if (r0.equals(com.discord.notifications.api.NotificationData.TYPE_MESSAGE_CREATE) == false) goto L83;
     */
    /* JADX WARN: Code restructure failed: missing block: B:43:0x00d6, code lost:
    
        if (r0.equals(com.discord.notifications.api.NotificationData.TYPE_ACTIVITY_START) == false) goto L83;
     */
    /* JADX WARN: Code restructure failed: missing block: B:45:0x012f, code lost:
    
        return com.discord.icons.IconUrlUtils.m994getApplicationIconweIltyw$default(com.discord.icons.IconUrlUtils.INSTANCE, r13.m1122getApplicationIdUtIrSio(), r13.getApplicationIcon(), 0, 4, null);
     */
    /* JADX WARN: Code restructure failed: missing block: B:4:0x001f, code lost:
    
        if (r0.equals(com.discord.notifications.api.NotificationData.TYPE_CALL_RING) == false) goto L83;
     */
    /* JADX WARN: Code restructure failed: missing block: B:51:0x0100, code lost:
    
        if (r0.equals(com.discord.notifications.api.NotificationData.TYPE_FORUM_THREAD_CREATED) == false) goto L83;
     */
    /* JADX WARN: Code restructure failed: missing block: B:53:0x014e, code lost:
    
        return com.discord.icons.IconUrlUtils.m996getForGuild14CJxO4$default(com.discord.icons.IconUrlUtils.INSTANCE, r13.m1124getGuildIdqOKuAAo(), r13.getGuildIcon(), "", false, null, 24, null);
     */
    /* JADX WARN: Code restructure failed: missing block: B:55:0x0109, code lost:
    
        if (r0.equals(com.discord.notifications.api.NotificationData.TYPE_APPLICATION_LIBRARY_INSTALL_COMPLETE) == false) goto L83;
     */
    /* JADX WARN: Code restructure failed: missing block: B:57:0x0112, code lost:
    
        if (r0.equals(com.discord.notifications.api.NotificationData.TYPE_STAGE_INSTANCE_CREATE) == false) goto L83;
     */
    /* JADX WARN: Code restructure failed: missing block: B:59:0x011b, code lost:
    
        if (r0.equals(com.discord.notifications.api.NotificationData.TYPE_RELATIONSHIP_ADD) == false) goto L83;
     */
    /* JADX WARN: Code restructure failed: missing block: B:5:0x002d, code lost:
    
        r0 = r13.getChannelType();
        r1 = true;
     */
    /* JADX WARN: Code restructure failed: missing block: B:61:0x0136, code lost:
    
        if (r0.equals(com.discord.notifications.api.NotificationData.TYPE_GUILD_SCHEDULED_EVENT_UPDATE) == false) goto L83;
     */
    /* JADX WARN: Code restructure failed: missing block: B:6:0x0032, code lost:
    
        if (r0 != null) goto L14;
     */
    /* JADX WARN: Code restructure failed: missing block: B:8:0x0055, code lost:
    
        if (r0 != null) goto L20;
     */
    @NotNull
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static final String getIconUrl(@NotNull NotificationData notificationData, @NotNull Context context) {
        String iconUrl;
        Intrinsics.checkNotNullParameter(notificationData, "<this>");
        Intrinsics.checkNotNullParameter(context, "context");
        String type = notificationData.getType();
        switch (type.hashCode()) {
            case -1502317553:
                return (type.equals(NotificationData.TYPE_GENERIC_PUSH_NOTIFICATION_SENT) && (iconUrl = notificationData.getIconUrl()) != null) ? iconUrl : "";
            case -1489275252:
                break;
            case -1327124998:
                break;
            case -1263316859:
                break;
            case -1237752112:
                break;
            case -437641071:
                break;
            case -45642698:
                if (type.equals(NotificationData.TYPE_FRIEND_SUGGESTION_CREATE)) {
                    return IconUrlUtils.m998getForUser_fRzTXg$default(IconUrlUtils.INSTANCE, context, notificationData.m1128getUserIdwUX8bhU(), notificationData.getUserAvatar(), null, false, null, 40, null);
                }
                return "";
            case 974015250:
                break;
            case 998188116:
                break;
            case 1770025841:
                break;
            default:
                return "";
        }
    }

    @NotNull
    public static final String getIconUrlForAvatar(@NotNull NotificationData notificationData, @NotNull Context context) {
        Intrinsics.checkNotNullParameter(notificationData, "<this>");
        Intrinsics.checkNotNullParameter(context, "context");
        IconUrlUtils iconUrlUtils = IconUrlUtils.INSTANCE;
        String m997getForGuildMember2tNb6hE$default = IconUrlUtils.m997getForGuildMember2tNb6hE$default(iconUrlUtils, notificationData.getUserGuildAvatar(), notificationData.m1124getGuildIdqOKuAAo(), notificationData.m1128getUserIdwUX8bhU(), null, false, 24, null);
        return m997getForGuildMember2tNb6hE$default.length() == 0 ? IconUrlUtils.m998getForUser_fRzTXg$default(iconUrlUtils, context, notificationData.m1128getUserIdwUX8bhU(), notificationData.getUserAvatar(), notificationData.getUserDiscriminator(), false, null, 32, null) : m997getForGuildMember2tNb6hE$default;
    }

    public static final KvMessageEntry getKvMessage(@NotNull NotificationData notificationData, String str) {
        Intrinsics.checkNotNullParameter(notificationData, "<this>");
        String m1125getMessageIdN_6c4I0 = notificationData.m1125getMessageIdN_6c4I0();
        ChannelId m1123getChannelIdqMVnFVQ = notificationData.m1123getChannelIdqMVnFVQ();
        if (m1125getMessageIdN_6c4I0 != null && m1123getChannelIdqMVnFVQ != null && Intrinsics.areEqual(notificationData.getType(), NotificationData.TYPE_MESSAGE_CREATE)) {
            NotificationMessage message = notificationData.getMessage();
            if (str != null && message != null) {
                JsonElement d6 = Json.f13606d.d(str);
                m0 m0Var = m0.f13512d;
                JsonObject author = message.getAuthor();
                Intrinsics.checkNotNull(author);
                ArrayList V = CollectionsKt.V(b0.c(author), message.getMentions());
                ArrayList arrayList = new ArrayList(d0.l(V, 10));
                Iterator it = V.iterator();
                while (it.hasNext()) {
                    LinkedHashMap o6 = v0.o((JsonObject) it.next());
                    o6.put("incomplete", h.a(Boolean.TRUE));
                    arrayList.add(new JsonObject(o6));
                }
                return new KvMessageEntry(m0Var, arrayList, h.j(d6), m1125getMessageIdN_6c4I0, m1123getChannelIdqMVnFVQ.m1172unboximpl(), null);
            }
            try {
                JsonObject author2 = getAuthor(notificationData);
                return new KvMessageEntry(m0.f13512d, b0.c(author2), toNotificationMessage(notificationData, author2), m1125getMessageIdN_6c4I0, m1123getChannelIdqMVnFVQ.m1172unboximpl(), null);
            } catch (Exception e9) {
                CrashReporting.captureException$default(CrashReporting.INSTANCE, e9, false, 2, null);
            }
        }
        return null;
    }

    public static final NotificationCompat$Action getMarkAsReadAction(@NotNull NotificationData notificationData, @NotNull Context context) {
        ChannelId m1123getChannelIdqMVnFVQ;
        Intrinsics.checkNotNullParameter(notificationData, "<this>");
        Intrinsics.checkNotNullParameter(context, "context");
        if (!Intrinsics.areEqual(notificationData.getType(), NotificationData.TYPE_MESSAGE_CREATE) || (m1123getChannelIdqMVnFVQ = notificationData.m1123getChannelIdqMVnFVQ()) == null) {
            return null;
        }
        long m1172unboximpl = m1123getChannelIdqMVnFVQ.m1172unboximpl();
        String m1125getMessageIdN_6c4I0 = notificationData.m1125getMessageIdN_6c4I0();
        if (m1125getMessageIdN_6c4I0 == null) {
            return null;
        }
        u uVar = new u(R.drawable.ic_check_grey_24dp, I18nUtilsKt.i18nFormat$default(context, I18nMessage.MARK_AS_READ, null, 2, null), NotificationAction.DefaultImpls.toPendingIntent$default(new MarkAsReadAction(getTag(notificationData), m1172unboximpl, m1125getMessageIdN_6c4I0, null), context, 0, false, 6, null));
        uVar.f20222g = 2;
        uVar.f20223h = false;
        return uVar.a();
    }

    @NotNull
    public static final String getMissedCallText(@NotNull Context context, @NotNull String username, boolean z5) {
        Intrinsics.checkNotNullParameter(context, "context");
        Intrinsics.checkNotNullParameter(username, "username");
        return z5 ? I18nUtilsKt.i18nFormat$default(context, I18nMessage.MISSED_CALL_NOTIFICATION, null, 2, null).toString() : I18nUtilsKt.i18nFormat(context, I18nMessage.MISSED_CALL_NOTIFICATION_FROM, new com.discord.chat.bridge.spoiler.a(username, 5)).toString();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit getMissedCallText$lambda$33(String str, RenderContext i18nFormat) {
        Intrinsics.checkNotNullParameter(i18nFormat, "$this$i18nFormat");
        i18nFormat.getArgs().put(StackTraceHelper.NAME_KEY, str);
        return Unit.a;
    }

    @NotNull
    public static final String getNotificationCategory(@NotNull NotificationData notificationData) {
        Intrinsics.checkNotNullParameter(notificationData, "<this>");
        String type = notificationData.getType();
        switch (type.hashCode()) {
            case -1502317553:
                return !type.equals(NotificationData.TYPE_GENERIC_PUSH_NOTIFICATION_SENT) ? "msg" : "social";
            case -1489275252:
                return !type.equals(NotificationData.TYPE_GUILD_SCHEDULED_EVENT_UPDATE) ? "msg" : "social";
            case -1327124998:
                return !type.equals(NotificationData.TYPE_RELATIONSHIP_ADD) ? "msg" : "social";
            case -1263316859:
                return !type.equals(NotificationData.TYPE_STAGE_INSTANCE_CREATE) ? "msg" : "social";
            case -1237752112:
                return !type.equals(NotificationData.TYPE_APPLICATION_LIBRARY_INSTALL_COMPLETE) ? "msg" : ReactProgressBarViewManager.PROP_PROGRESS;
            case -437641071:
                return !type.equals(NotificationData.TYPE_FORUM_THREAD_CREATED) ? "msg" : "social";
            case 974015250:
                return !type.equals(NotificationData.TYPE_ACTIVITY_START) ? "msg" : "social";
            case 1471047007:
                return !type.equals(NotificationData.TYPE_LOCAL_NOTIFICATION) ? "msg" : "status";
            case 1770025841:
                return !type.equals(NotificationData.TYPE_CALL_RING) ? "msg" : "call";
            default:
                return "msg";
        }
    }

    private static final PendingIntent getPendingIntent(Context context, Map<String, String> map, String str) {
        return NotificationAction.DefaultImpls.toPendingIntent$default(new ContentAction(str, map), context, 0, true, 2, null);
    }

    public static final long getSendTime(@NotNull NotificationData notificationData) {
        MessageIdSnowflake m1195toSnowflakewDbSOA;
        Intrinsics.checkNotNullParameter(notificationData, "<this>");
        String m1125getMessageIdN_6c4I0 = notificationData.m1125getMessageIdN_6c4I0();
        return (m1125getMessageIdN_6c4I0 == null || (m1195toSnowflakewDbSOA = MessageId.m1195toSnowflakewDbSOA(m1125getMessageIdN_6c4I0)) == null) ? System.currentTimeMillis() : SnowflakeUtilsKt.toTimestamp(m1195toSnowflakewDbSOA);
    }

    /* JADX WARN: Code restructure failed: missing block: B:7:0x0022, code lost:
    
        if (r5.intValue() == 1) goto L12;
     */
    @NotNull
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static final Person getSender(@NotNull NotificationData notificationData, Bitmap bitmap) {
        boolean z5;
        Intrinsics.checkNotNullParameter(notificationData, "<this>");
        String userUsername = notificationData.getUserUsername();
        if (userUsername == null) {
            userUsername = "";
        }
        String valueOf = String.valueOf(notificationData.m1128getUserIdwUX8bhU());
        Integer relationshipType = notificationData.getRelationshipType();
        if (relationshipType != null) {
            z5 = true;
        }
        z5 = false;
        IconCompat iconCompat = bitmap != null ? toIconCompat(bitmap) : null;
        Person person = new Person();
        person.a = userUsername;
        person.f1481b = iconCompat;
        person.f1482c = null;
        person.f1483d = valueOf;
        person.f1484e = false;
        person.f1485f = z5;
        Intrinsics.checkNotNullExpressionValue(person, "build(...)");
        return person;
    }

    public static final Person getSenderForMessageNotification(@NotNull NotificationData notificationData, Bitmap bitmap) {
        Intrinsics.checkNotNullParameter(notificationData, "<this>");
        if (notificationData.isFromCurrentUser()) {
            return null;
        }
        return getSender(notificationData, bitmap);
    }

    @NotNull
    public static final ShortcutInfoCompat getShortcutInfo(@NotNull NotificationData notificationData, @NotNull Context context, @NotNull Map<String, String> notificationDataMap, Bitmap bitmap, Bitmap bitmap2) {
        ShortcutInfoCompat createShortcut;
        Intrinsics.checkNotNullParameter(notificationData, "<this>");
        Intrinsics.checkNotNullParameter(context, "context");
        Intrinsics.checkNotNullParameter(notificationDataMap, "notificationDataMap");
        createShortcut = ShortcutUtilsKt.createShortcut(context, String.valueOf(notificationData.m1123getChannelIdqMVnFVQ()), getTitle(notificationData, context), getTitle(notificationData, context), bitmap, b0.c(getSender(notificationData, bitmap2)), ShortcutData.INSTANCE.createShortcutIntent(context, "android.intent.action.VIEW", NotificationAction.INSTANCE.getActivityClass(), getTag(notificationData), notificationDataMap), (r17 & 64) != 0 ? 0 : 0);
        return createShortcut;
    }

    /* JADX WARN: Failed to restore switch over string. Please report as a decompilation issue */
    public static final int getSmallIcon(@NotNull NotificationData notificationData) {
        Intrinsics.checkNotNullParameter(notificationData, "<this>");
        String type = notificationData.getType();
        switch (type.hashCode()) {
            case -1327124998:
                if (type.equals(NotificationData.TYPE_RELATIONSHIP_ADD)) {
                    return R.drawable.ic_notification_friends_24dp;
                }
                break;
            case -45642698:
                if (type.equals(NotificationData.TYPE_FRIEND_SUGGESTION_CREATE)) {
                    return R.drawable.ic_notification_friends_24dp;
                }
                break;
            case 998188116:
                if (type.equals(NotificationData.TYPE_MESSAGE_CREATE)) {
                    return R.drawable.ic_notification_message_24dp;
                }
                break;
            case 1770025841:
                if (type.equals(NotificationData.TYPE_CALL_RING)) {
                    return R.drawable.ic_notification_call_24dp;
                }
                break;
        }
        return R.drawable.ic_notification_24dp;
    }

    public static final Uri getSound(@NotNull NotificationData notificationData, @NotNull Context context) {
        Intrinsics.checkNotNullParameter(notificationData, "<this>");
        Intrinsics.checkNotNullParameter(context, "context");
        if (!Intrinsics.areEqual(notificationData.getType(), NotificationData.TYPE_CALL_RING)) {
            return null;
        }
        StringBuilder sb2 = new StringBuilder("android.resource://");
        sb2.append(context.getPackageName() + "/" + com.discord.sounds.R.raw.call_ringing);
        String sb3 = sb2.toString();
        Intrinsics.checkNotNullExpressionValue(sb3, "toString(...)");
        return Uri.parse(sb3);
    }

    /* renamed from: getSystemMessageUserJoin-_NT-lnE, reason: not valid java name */
    private static final CharSequence m1148getSystemMessageUserJoin_NTlnE(Context context, UserId userId, String str) {
        return I18nUtilsKt.i18nFormat(context, (I18nMessage) c0.g(I18nMessage.SYSTEM_MESSAGE_GUILD_MEMBER_JOIN_001, I18nMessage.SYSTEM_MESSAGE_GUILD_MEMBER_JOIN_002, I18nMessage.SYSTEM_MESSAGE_GUILD_MEMBER_JOIN_003, I18nMessage.SYSTEM_MESSAGE_GUILD_MEMBER_JOIN_004, I18nMessage.SYSTEM_MESSAGE_GUILD_MEMBER_JOIN_005, I18nMessage.SYSTEM_MESSAGE_GUILD_MEMBER_JOIN_006, I18nMessage.SYSTEM_MESSAGE_GUILD_MEMBER_JOIN_007, I18nMessage.SYSTEM_MESSAGE_GUILD_MEMBER_JOIN_008, I18nMessage.SYSTEM_MESSAGE_GUILD_MEMBER_JOIN_009, I18nMessage.SYSTEM_MESSAGE_GUILD_MEMBER_JOIN_010, I18nMessage.SYSTEM_MESSAGE_GUILD_MEMBER_JOIN_011, I18nMessage.SYSTEM_MESSAGE_GUILD_MEMBER_JOIN_012, I18nMessage.SYSTEM_MESSAGE_GUILD_MEMBER_JOIN_013).get((int) ((userId != null ? userId.m1250unboximpl() : 0L) % r0.size())), new com.discord.chat.bridge.spoiler.a(str, 4));
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit getSystemMessageUserJoin__NT_lnE$lambda$22$lambda$21(String str, RenderContext i18nFormat) {
        Intrinsics.checkNotNullParameter(i18nFormat, "$this$i18nFormat");
        i18nFormat.getArgs().put(NotificationRenderer.USERNAME, str);
        return Unit.a;
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    /* JADX WARN: Code restructure failed: missing block: B:17:0x0051, code lost:
    
        if (r0.equals(com.discord.notifications.api.NotificationData.TYPE_MESSAGE_CREATE) != false) goto L47;
     */
    /* JADX WARN: Code restructure failed: missing block: B:19:0x0134, code lost:
    
        return r3.getType() + r3.m1123getChannelIdqMVnFVQ();
     */
    /* JADX WARN: Code restructure failed: missing block: B:25:0x0082, code lost:
    
        if (r0.equals(com.discord.notifications.api.NotificationData.TYPE_CALL_RING_END) != false) goto L25;
     */
    /* JADX WARN: Code restructure failed: missing block: B:31:0x00c9, code lost:
    
        if (r0.equals(com.discord.notifications.api.NotificationData.TYPE_FORUM_THREAD_CREATED) != false) goto L47;
     */
    /* JADX WARN: Code restructure failed: missing block: B:37:0x00f2, code lost:
    
        if (r0.equals(com.discord.notifications.api.NotificationData.TYPE_STAGE_INSTANCE_CREATE) != false) goto L47;
     */
    /* JADX WARN: Code restructure failed: missing block: B:43:0x011b, code lost:
    
        if (r0.equals(com.discord.notifications.api.NotificationData.TYPE_GUILD_SCHEDULED_EVENT_UPDATE) != false) goto L47;
     */
    /* JADX WARN: Code restructure failed: missing block: B:4:0x0018, code lost:
    
        if (r0.equals(com.discord.notifications.api.NotificationData.TYPE_CALL_RING) != false) goto L25;
     */
    /* JADX WARN: Code restructure failed: missing block: B:6:0x00a2, code lost:
    
        return r3.getType() + r3.m1123getChannelIdqMVnFVQ() + r3.getTimeReceived();
     */
    @NotNull
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static final String getTag(@NotNull NotificationData notificationData) {
        Intrinsics.checkNotNullParameter(notificationData, "<this>");
        String type = notificationData.getType();
        switch (type.hashCode()) {
            case -1502317553:
                if (type.equals(NotificationData.TYPE_GENERIC_PUSH_NOTIFICATION_SENT)) {
                    return d.k(notificationData.getType(), notificationData.getDeeplink());
                }
                throw new IllegalArgumentException(s4.h.f("Unknown notification type: ", notificationData.getType(), "."));
            case -1489275252:
                break;
            case -1327124998:
                if (type.equals(NotificationData.TYPE_RELATIONSHIP_ADD)) {
                    return notificationData.getType() + notificationData.m1128getUserIdwUX8bhU();
                }
                throw new IllegalArgumentException(s4.h.f("Unknown notification type: ", notificationData.getType(), "."));
            case -1263316859:
                break;
            case -1237752112:
                if (type.equals(NotificationData.TYPE_APPLICATION_LIBRARY_INSTALL_COMPLETE)) {
                    return notificationData.getType() + notificationData.m1122getApplicationIdUtIrSio();
                }
                throw new IllegalArgumentException(s4.h.f("Unknown notification type: ", notificationData.getType(), "."));
            case -437641071:
                break;
            case -45642698:
                if (type.equals(NotificationData.TYPE_FRIEND_SUGGESTION_CREATE)) {
                    return notificationData.getType() + notificationData.m1128getUserIdwUX8bhU();
                }
                throw new IllegalArgumentException(s4.h.f("Unknown notification type: ", notificationData.getType(), "."));
            case 74682093:
                break;
            case 974015250:
                if (type.equals(NotificationData.TYPE_ACTIVITY_START)) {
                    return notificationData.getType() + notificationData.getActivityType() + notificationData.getActivityName();
                }
                throw new IllegalArgumentException(s4.h.f("Unknown notification type: ", notificationData.getType(), "."));
            case 998188116:
                break;
            case 1471047007:
                if (type.equals(NotificationData.TYPE_LOCAL_NOTIFICATION)) {
                    String type2 = notificationData.getType();
                    ChannelId m1123getChannelIdqMVnFVQ = notificationData.m1123getChannelIdqMVnFVQ();
                    String m1125getMessageIdN_6c4I0 = notificationData.m1125getMessageIdN_6c4I0();
                    return type2 + m1123getChannelIdqMVnFVQ + (m1125getMessageIdN_6c4I0 == null ? "null" : MessageId.m1196toStringimpl(m1125getMessageIdN_6c4I0));
                }
                throw new IllegalArgumentException(s4.h.f("Unknown notification type: ", notificationData.getType(), "."));
            case 1770025841:
                break;
            default:
                throw new IllegalArgumentException(s4.h.f("Unknown notification type: ", notificationData.getType(), "."));
        }
    }

    public static final NotificationCompat$Action getTimedMuteAction(@NotNull NotificationData notificationData, @NotNull Context context, int i5) {
        ChannelId m1123getChannelIdqMVnFVQ;
        Intrinsics.checkNotNullParameter(notificationData, "<this>");
        Intrinsics.checkNotNullParameter(context, "context");
        if (!Intrinsics.areEqual(notificationData.getType(), NotificationData.TYPE_MESSAGE_CREATE) || i5 < 2 || notificationData.getAppDm() || (m1123getChannelIdqMVnFVQ = notificationData.m1123getChannelIdqMVnFVQ()) == null) {
            return null;
        }
        return new u(R.drawable.ic_notifications_off_24dp, I18nUtilsKt.i18nFormat$default(context, I18nMessage.NOTIFICATION_MUTE_1_HOUR, null, 2, null), NotificationAction.DefaultImpls.toPendingIntent$default(new MuteAction(getTag(notificationData), notificationData.m1124getGuildIdqOKuAAo(), m1123getChannelIdqMVnFVQ.m1172unboximpl(), null, null), context, 0, false, 6, null)).a();
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    /* JADX WARN: Failed to restore switch over string. Please report as a decompilation issue */
    /* JADX WARN: Removed duplicated region for block: B:119:0x01eb A[ORIG_RETURN, RETURN] */
    @NotNull
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static final CharSequence getTitle(@NotNull NotificationData notificationData, @NotNull Context context) {
        String title;
        String title2;
        String userUsername;
        Integer activityType;
        Intrinsics.checkNotNullParameter(notificationData, "<this>");
        Intrinsics.checkNotNullParameter(context, "context");
        String type = notificationData.getType();
        switch (type.hashCode()) {
            case -1502317553:
                return (type.equals(NotificationData.TYPE_GENERIC_PUSH_NOTIFICATION_SENT) && (title = notificationData.getTitle()) != null) ? title : "";
            case -1489275252:
                if (type.equals(NotificationData.TYPE_GUILD_SCHEDULED_EVENT_UPDATE) && (title2 = notificationData.getTitle()) != null) {
                    return title2;
                }
                break;
            case -1327124998:
                if (type.equals(NotificationData.TYPE_RELATIONSHIP_ADD) && (userUsername = notificationData.getUserUsername()) != null) {
                    return userUsername;
                }
                break;
            case -1263316859:
                if (type.equals(NotificationData.TYPE_STAGE_INSTANCE_CREATE)) {
                    return I18nUtilsKt.i18nFormat(context, I18nMessage.STAGE_START_PUSH_NOTIFICATION_TITLE, new a(notificationData, 14));
                }
            case -1237752112:
                if (type.equals(NotificationData.TYPE_APPLICATION_LIBRARY_INSTALL_COMPLETE)) {
                    return I18nUtilsKt.i18nFormat$default(context, I18nMessage.GAME_LIBRARY_NOTIFICATION_GAME_INSTALLED_TITLE, null, 2, null);
                }
            case -437641071:
                if (type.equals(NotificationData.TYPE_FORUM_THREAD_CREATED)) {
                    return I18nUtilsKt.i18nFormat(context, I18nMessage.FORUM_CHANNEL_THREAD_CREATED_PUSH_TITLE_MOBILE, new a(notificationData, 15));
                }
            case -45642698:
                if (type.equals(NotificationData.TYPE_FRIEND_SUGGESTION_CREATE)) {
                    return x.i(notificationData.getPlatformUserUsername(), notificationData.getUserUsername(), false) ? I18nUtilsKt.i18nFormat(context, I18nMessage.NOTIFICATION_FRIEND_SUGGESTION_CONTACT_TITLE, new a(notificationData, 16)) : I18nUtilsKt.i18nFormat(context, I18nMessage.NOTIFICATION_FRIEND_SUGGESTION_TITLE, new a(notificationData, 17));
                }
            case 974015250:
                if (type.equals(NotificationData.TYPE_ACTIVITY_START) && (activityType = notificationData.getActivityType()) != null && activityType.intValue() == 0) {
                    return I18nUtilsKt.i18nFormat$default(context, I18nMessage.NOTIFICATION_TITLE_START_GAME, null, 2, null);
                }
            case 998188116:
                if (type.equals(NotificationData.TYPE_MESSAGE_CREATE)) {
                    Integer channelType = notificationData.getChannelType();
                    if ((channelType != null && channelType.intValue() == 0) || ((channelType != null && channelType.intValue() == 2) || ((channelType != null && channelType.intValue() == 5) || ((channelType != null && channelType.intValue() == 10) || ((channelType != null && channelType.intValue() == 11) || (channelType != null && channelType.intValue() == 12)))))) {
                        return d.l(notificationData.getGuildName(), " #", notificationData.getChannelName());
                    }
                    if (channelType != null && channelType.intValue() == 1) {
                        if (notificationData.getInviteGuildName() == null || notificationData.getUserUsername() == null) {
                            String userUsername2 = notificationData.getUserUsername();
                            if (userUsername2 != null) {
                                return userUsername2;
                            }
                        } else {
                            Integer inviteTitleVariant = notificationData.getInviteTitleVariant();
                            if (inviteTitleVariant != null && inviteTitleVariant.intValue() == 1) {
                                return I18nUtilsKt.i18nFormat(context, I18nMessage.INVITED_YOU_TO_GUILD, new a(notificationData, 0));
                            }
                            if (inviteTitleVariant != null && inviteTitleVariant.intValue() == 2) {
                                return I18nUtilsKt.i18nFormat(context, I18nMessage.GUILD_INVITE_FROM_EMOJI, new a(notificationData, 10));
                            }
                            String userUsername3 = notificationData.getUserUsername();
                            if (userUsername3 != null) {
                                return userUsername3;
                            }
                        }
                    } else if (channelType != null && channelType.intValue() == 3) {
                        String channelName = notificationData.getChannelName();
                        if (channelName != null) {
                            return channelName;
                        }
                        String userUsername4 = notificationData.getUserUsername();
                        if (userUsername4 != null) {
                            return userUsername4;
                        }
                    }
                }
            case 1770025841:
                if (type.equals(NotificationData.TYPE_CALL_RING)) {
                    Integer channelType2 = notificationData.getChannelType();
                    if (channelType2 != null && channelType2.intValue() == 1) {
                        return I18nUtilsKt.i18nFormat$default(context, I18nMessage.INCOMING_CALL, null, 2, null);
                    }
                    if (channelType2 == null || channelType2.intValue() != 3) {
                        return d.l(notificationData.getChannelName(), ", ", notificationData.getGuildName());
                    }
                    String channelName2 = notificationData.getChannelName();
                    if (channelName2 != null) {
                        return channelName2;
                    }
                }
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit getTitle$lambda$0(NotificationData notificationData, RenderContext i18nFormat) {
        Intrinsics.checkNotNullParameter(i18nFormat, "$this$i18nFormat");
        i18nFormat.getArgs().put("userName", notificationData.getUserUsername());
        return Unit.a;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit getTitle$lambda$1(NotificationData notificationData, RenderContext i18nFormat) {
        Intrinsics.checkNotNullParameter(i18nFormat, "$this$i18nFormat");
        i18nFormat.getArgs().put("userName", notificationData.getUserUsername());
        return Unit.a;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit getTitle$lambda$2(NotificationData notificationData, RenderContext i18nFormat) {
        Intrinsics.checkNotNullParameter(i18nFormat, "$this$i18nFormat");
        i18nFormat.getArgs().put("guildName", notificationData.getGuildName());
        return Unit.a;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit getTitle$lambda$3(NotificationData notificationData, RenderContext i18nFormat) {
        Intrinsics.checkNotNullParameter(i18nFormat, "$this$i18nFormat");
        i18nFormat.getArgs().put("guildName", notificationData.getGuildName());
        i18nFormat.getArgs().put(NotificationRenderer.CHANNEL_NAME, notificationData.getParentName());
        return Unit.a;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit getTitle$lambda$4(NotificationData notificationData, RenderContext i18nFormat) {
        Intrinsics.checkNotNullParameter(i18nFormat, "$this$i18nFormat");
        i18nFormat.getArgs().put("contact", notificationData.getPlatformUserUsername());
        return Unit.a;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit getTitle$lambda$5(NotificationData notificationData, RenderContext i18nFormat) {
        Intrinsics.checkNotNullParameter(i18nFormat, "$this$i18nFormat");
        i18nFormat.getArgs().put("contact", notificationData.getPlatformUserUsername());
        return Unit.a;
    }

    public static final boolean isCall(@NotNull NotificationData notificationData) {
        Integer channelType;
        Intrinsics.checkNotNullParameter(notificationData, "<this>");
        Integer channelType2 = notificationData.getChannelType();
        return (channelType2 != null && channelType2.intValue() == 1) || ((channelType = notificationData.getChannelType()) != null && channelType.intValue() == 3);
    }

    public static final boolean isCallRinging(@NotNull NotificationData notificationData) {
        Intrinsics.checkNotNullParameter(notificationData, "<this>");
        return Intrinsics.areEqual(notificationData.getType(), NotificationData.TYPE_CALL_RING);
    }

    public static final boolean isGroupConversation(@NotNull NotificationData notificationData) {
        Intrinsics.checkNotNullParameter(notificationData, "<this>");
        if (!Intrinsics.areEqual(notificationData.getType(), NotificationData.TYPE_MESSAGE_CREATE)) {
            return false;
        }
        Integer channelType = notificationData.getChannelType();
        return channelType == null || channelType.intValue() != 1;
    }

    private static final CharSequence renderLogAwareNotificationMessageContent(boolean z5, String str) {
        return (str == null || str.length() == 0) ? str : z5 ? "<Message>" : RenderNotificationMessageContentKt.renderNotificationMessageContent(str);
    }

    /* JADX WARN: Code restructure failed: missing block: B:33:0x00a2, code lost:
    
        if ((r10 != null ? r10.getSticker() : null) != null) goto L57;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static final CharSequence renderMessageContent(@NotNull NotificationData notificationData, @NotNull Context context, boolean z5) {
        Integer attachmentTextVariant;
        Integer attachmentTextVariant2;
        Integer attachmentTextVariant3;
        Intrinsics.checkNotNullParameter(notificationData, "<this>");
        Intrinsics.checkNotNullParameter(context, "context");
        NotificationMessage message = notificationData.getMessage();
        Sticker sticker = message != null ? message.getSticker() : null;
        NotificationMessage message2 = notificationData.getMessage();
        Embed embed = message2 != null ? message2.getEmbed() : null;
        NotificationMessage message3 = notificationData.getMessage();
        List<Component> components = message3 != null ? message3.getComponents() : null;
        boolean z6 = false;
        if (notificationData.isSpoilerChannel()) {
            String messageContent = notificationData.getMessageContent();
            boolean z7 = (messageContent == null || messageContent.length() == 0) && (attachmentTextVariant = notificationData.getAttachmentTextVariant()) != null && attachmentTextVariant.intValue() == 3;
            String messageContent2 = notificationData.getMessageContent();
            boolean z8 = (messageContent2 == null || messageContent2.length() == 0) && (attachmentTextVariant2 = notificationData.getAttachmentTextVariant()) != null && attachmentTextVariant2.intValue() == 1;
            String messageContent3 = notificationData.getMessageContent();
            boolean z10 = (messageContent3 == null || messageContent3.length() == 0) && (attachmentTextVariant3 = notificationData.getAttachmentTextVariant()) != null && attachmentTextVariant3.intValue() == 4;
            if (notificationData.getAttachmentTextVariant() == null && embed == null) {
                NotificationMessage message4 = notificationData.getMessage();
            }
            z6 = true;
            return z7 ? I18nUtilsKt.i18nFormat$default(context, I18nMessage.SPOILER_CHANNEL_SENT_A_GIF, null, 2, null) : z8 ? I18nUtilsKt.i18nFormat$default(context, I18nMessage.SPOILER_CHANNEL_SENT_AN_IMAGE, null, 2, null) : z10 ? I18nUtilsKt.i18nFormat$default(context, I18nMessage.SPOILER_CHANNEL_SENT_A_VIDEO, null, 2, null) : z6 ? I18nUtilsKt.i18nFormat$default(context, I18nMessage.SPOILER_CHANNEL_SENT_MESSAGE_WITH_ATTACHMENTS, null, 2, null) : I18nUtilsKt.i18nFormat$default(context, I18nMessage.SPOILER_CHANNEL_SENT_MESSAGE, null, 2, null);
        }
        if (sticker != null) {
            return I18nUtilsKt.i18nFormat(context, I18nMessage.STICKER_NOTIFICATION_BODY, new e1(23, sticker));
        }
        if ((notificationData.getMessageContent() == null || Intrinsics.areEqual(notificationData.getMessageContent(), "")) && components != null && components.size() == 1 && components.get(0).getType() == 20) {
            return I18nUtilsKt.i18nFormat$default(context, I18nMessage.CHECKPOINT_MESSAGE_NOTIFICATION_BODY, null, 2, null);
        }
        if (notificationData.getAttachmentTextVariant() != null) {
            Integer attachmentTextVariant4 = notificationData.getAttachmentTextVariant();
            return (attachmentTextVariant4 != null && attachmentTextVariant4.intValue() == 1) ? I18nUtilsKt.i18nFormat$default(context, I18nMessage.SENT_AN_IMAGE, null, 2, null) : (attachmentTextVariant4 != null && attachmentTextVariant4.intValue() == 2) ? I18nUtilsKt.i18nFormat(context, I18nMessage.SENT_IMAGES, new a(notificationData, 18)) : (attachmentTextVariant4 != null && attachmentTextVariant4.intValue() == 3) ? I18nUtilsKt.i18nFormat$default(context, I18nMessage.SENT_A_GIF, null, 2, null) : (attachmentTextVariant4 != null && attachmentTextVariant4.intValue() == 4) ? I18nUtilsKt.i18nFormat$default(context, I18nMessage.SENT_A_VIDEO, null, 2, null) : (attachmentTextVariant4 != null && attachmentTextVariant4.intValue() == 5) ? I18nUtilsKt.i18nFormat(context, I18nMessage.SENT_VIDEOS, new a(notificationData, 1)) : notificationData.getMessageContent();
        }
        Integer messageReferenceType = notificationData.getMessageReferenceType();
        if (messageReferenceType != null && messageReferenceType.intValue() == 1) {
            return I18nUtilsKt.i18nFormat$default(context, I18nMessage.MESSAGE_FORWARDED_NOTIFICATION_BODY, null, 2, null);
        }
        if (notificationData.getActivityInstanceId() != null && (notificationData.getMessageContent() == null || Intrinsics.areEqual(notificationData.getMessageContent(), ""))) {
            return I18nUtilsKt.i18nFormat(context, I18nMessage.NOTIFICATION_MESSAGE_ACTIVITY_INSTANCE, new a(notificationData, 2));
        }
        if (MessageFlagKt.hasMessageFlag(notificationData.getMessageFlags(), MessageFlag.IS_VOICE_MESSAGE)) {
            return I18nUtilsKt.i18nFormat$default(context, I18nMessage.VOICE_MESSAGES_SENT_NOTIFICATION, null, 2, null);
        }
        NotificationMessage message5 = notificationData.getMessage();
        if ((message5 != null ? message5.getPoll() : null) != null) {
            return I18nUtilsKt.i18nFormat(context, I18nMessage.POLL_SENT_NOTIFICATION, new a(notificationData, 3));
        }
        Integer messageType = notificationData.getMessageType();
        return (messageType != null && messageType.intValue() == 46) ? I18nUtilsKt.i18nFormat(context, I18nMessage.POLL_RESULTS_NOTIFICATION, new b7.a(28, embed, notificationData)) : (notificationData.getInviteChannelName() == null || notificationData.getInviteGuildName() == null) ? renderLogAwareNotificationMessageContent(z5, notificationData.getMessageContent()) : I18nUtilsKt.i18nFormat(context, I18nMessage.INVITED_TO_VOICE_CHANNEL_IN_GUILD, new a(notificationData, 4));
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit renderMessageContent$lambda$10(NotificationData notificationData, RenderContext i18nFormat) {
        String str;
        Poll poll;
        PollMedia question;
        Intrinsics.checkNotNullParameter(i18nFormat, "$this$i18nFormat");
        Map<String, String> args = i18nFormat.getArgs();
        NotificationMessage message = notificationData.getMessage();
        if (message == null || (poll = message.getPoll()) == null || (question = poll.getQuestion()) == null || (str = question.getText()) == null) {
            str = "???";
        }
        args.put("question", str);
        return Unit.a;
    }

    /* JADX INFO: Access modifiers changed from: private */
    /* JADX WARN: Code restructure failed: missing block: B:14:0x0038, code lost:
    
        if (r3 != null) goto L20;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static final Unit renderMessageContent$lambda$12(Embed embed, NotificationData notificationData, RenderContext i18nFormat) {
        String pollQuestion;
        List<EmbedField> fields;
        Object obj;
        Intrinsics.checkNotNullParameter(i18nFormat, "$this$i18nFormat");
        Map<String, String> args = i18nFormat.getArgs();
        if (embed != null && (fields = embed.getFields()) != null) {
            Iterator<T> it = fields.iterator();
            while (true) {
                if (!it.hasNext()) {
                    obj = null;
                    break;
                }
                obj = it.next();
                if (Intrinsics.areEqual(((EmbedField) obj).getName(), "poll_question_text")) {
                    break;
                }
            }
            EmbedField embedField = (EmbedField) obj;
            if (embedField != null) {
                pollQuestion = embedField.getValue();
            }
        }
        pollQuestion = notificationData.getPollQuestion();
        if (pollQuestion == null) {
            pollQuestion = "";
        }
        args.put("question", pollQuestion);
        return Unit.a;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit renderMessageContent$lambda$13(NotificationData notificationData, RenderContext i18nFormat) {
        Intrinsics.checkNotNullParameter(i18nFormat, "$this$i18nFormat");
        i18nFormat.getArgs().put(NotificationRenderer.CHANNEL_NAME, notificationData.getInviteChannelName());
        i18nFormat.getArgs().put("guildName", notificationData.getInviteGuildName());
        return Unit.a;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit renderMessageContent$lambda$6(Sticker sticker, RenderContext i18nFormat) {
        Intrinsics.checkNotNullParameter(i18nFormat, "$this$i18nFormat");
        i18nFormat.getArgs().put("stickerName", sticker.getName());
        return Unit.a;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit renderMessageContent$lambda$7(NotificationData notificationData, RenderContext i18nFormat) {
        Intrinsics.checkNotNullParameter(i18nFormat, "$this$i18nFormat");
        i18nFormat.getArgs().put("count", String.valueOf(notificationData.getImageAttachmentCount()));
        return Unit.a;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit renderMessageContent$lambda$8(NotificationData notificationData, RenderContext i18nFormat) {
        Intrinsics.checkNotNullParameter(i18nFormat, "$this$i18nFormat");
        i18nFormat.getArgs().put("count", String.valueOf(notificationData.getVideoAttachmentCount()));
        return Unit.a;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit renderMessageContent$lambda$9(NotificationData notificationData, RenderContext i18nFormat) {
        Intrinsics.checkNotNullParameter(i18nFormat, "$this$i18nFormat");
        i18nFormat.getArgs().put("user", notificationData.getUserUsername());
        return Unit.a;
    }

    public static final boolean shouldUseBigText(@NotNull NotificationData notificationData) {
        Intrinsics.checkNotNullParameter(notificationData, "<this>");
        return Intrinsics.areEqual(notificationData.getType(), NotificationData.TYPE_GENERIC_PUSH_NOTIFICATION_SENT) && Intrinsics.areEqual(notificationData.getExpandSubtitle(), Boolean.TRUE);
    }

    public static final boolean shouldUseMessagingStyle(@NotNull NotificationData notificationData) {
        Intrinsics.checkNotNullParameter(notificationData, "<this>");
        if (Intrinsics.areEqual(notificationData.getType(), NotificationData.TYPE_MESSAGE_CREATE)) {
            return true;
        }
        return Intrinsics.areEqual(notificationData.getType(), NotificationData.TYPE_GENERIC_PUSH_NOTIFICATION_SENT) && notificationData.getUserAvatar() != null;
    }

    private static final IconCompat toIconCompat(Bitmap bitmap) {
        IconCompat c6 = IconCompat.c(bitmap);
        Intrinsics.checkNotNullExpressionValue(c6, "createWithBitmap(...)");
        return c6;
    }

    @NotNull
    public static final JsonObject toNotificationMessage(@NotNull NotificationData notificationData, @NotNull JsonObject author) {
        Intrinsics.checkNotNullParameter(notificationData, "<this>");
        Intrinsics.checkNotNullParameter(author, "author");
        String messageContent = notificationData.getMessageContent();
        Intrinsics.checkNotNull(messageContent);
        Long messageFlags = notificationData.getMessageFlags();
        long longValue = messageFlags != null ? messageFlags.longValue() : 0L;
        Integer messageType = notificationData.getMessageType();
        Intrinsics.checkNotNull(messageType);
        messageType.getClass();
        String m1125getMessageIdN_6c4I0 = notificationData.m1125getMessageIdN_6c4I0();
        Intrinsics.checkNotNull(m1125getMessageIdN_6c4I0);
        ChannelId m1123getChannelIdqMVnFVQ = notificationData.m1123getChannelIdqMVnFVQ();
        Intrinsics.checkNotNull(m1123getChannelIdqMVnFVQ);
        long m1172unboximpl = m1123getChannelIdqMVnFVQ.m1172unboximpl();
        GuildId m1124getGuildIdqOKuAAo = notificationData.m1124getGuildIdqOKuAAo();
        String format = new SimpleDateFormat("yyyy-MM-dd'T'HH:mm:ss.SSSSSS", Locale.getDefault()).format(new Date());
        JsonObjectBuilder jsonObjectBuilder = new JsonObjectBuilder();
        b.A(jsonObjectBuilder, "content", messageContent);
        b.z(jsonObjectBuilder, "flags", Long.valueOf(longValue));
        b.z(jsonObjectBuilder, "type", messageType);
        b.A(jsonObjectBuilder, StackTraceHelper.ID_KEY, MessageId.m1196toStringimpl(m1125getMessageIdN_6c4I0));
        b.A(jsonObjectBuilder, "channel_id", ChannelId.m1170toStringimpl(m1172unboximpl));
        b.A(jsonObjectBuilder, "timestamp", format);
        jsonObjectBuilder.b("author", author);
        if (m1124getGuildIdqOKuAAo != null) {
            b.A(jsonObjectBuilder, "guild_id", GuildId.m1183toStringimpl(m1124getGuildIdqOKuAAo.m1185unboximpl()));
        }
        return jsonObjectBuilder.a();
    }
}
