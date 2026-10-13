package com.discord.notifications.renderer;

import a3.e;
import android.app.Notification;
import android.app.PendingIntent;
import android.content.Context;
import android.content.Intent;
import android.os.Build;
import android.service.notification.StatusBarNotification;
import androidx.core.app.NotificationCompat$Builder;
import androidx.core.app.NotificationManagerCompat;
import com.discord.icons.IconUrlUtils;
import com.discord.image.fresco.FrescoModuleDiscord;
import com.discord.notifications.actions.intents.ContentAction;
import com.discord.notifications.actions.intents.DismissCallAction;
import com.discord.notifications.api.ConfiguredNotifChannel;
import com.discord.notifications.api.ConfiguredNotifGroup;
import com.discord.notifications.api.NotificationData;
import com.discord.notifications.renderer.IncomingCallActivity;
import com.discord.notifications.renderer.utils.NotificationDataUtilsKt;
import com.discord.notifications.renderer.utils.NotificationManagerUtilsKt;
import com.discord.primitives.ChannelId;
import com.discord.primitives.GuildId;
import com.discord.primitives.UserId;
import com.discord.snowflake.SnowflakeUtils;
import com.facebook.react.devsupport.StackTraceHelper;
import com.facebook.react.uimanager.ViewProps;
import java.util.Iterator;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Map;
import k0.d;
import kotlin.Metadata;
import kotlin.Pair;
import kotlin.Unit;
import kotlin.collections.v0;
import kotlin.coroutines.g;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.SourceDebugExtension;
import nr.x;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u0000d\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0010$\n\u0002\u0010\b\n\u0002\u0010\u000e\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0010\u0002\n\u0002\b\u0005\n\u0002\u0010 \n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u000b\n\u0002\u0010\u000b\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0006\n\u0002\u0018\u0002\n\u0002\b\u0006\u0018\u0000 92\u00020\u0001:\u00019B)\u0012 \u0010\u0002\u001a\u001c\u0012\u0004\u0012\u00020\u0004\u0012\u0012\u0012\u0010\u0012\u0004\u0012\u00020\u0006\u0012\u0004\u0012\u00020\u0007\u0018\u00010\u00050\u0003¢\u0006\u0004\b\b\u0010\tJ6\u0010\u0010\u001a\u00020\u00112\u0006\u0010\u0012\u001a\u00020\u00042\u0012\u0010\u0013\u001a\u000e\u0012\u0004\u0012\u00020\u0007\u0012\u0004\u0012\u00020\u00070\u00052\u0012\u0010\u0014\u001a\u000e\u0012\u0004\u0012\u00020\u0007\u0012\u0004\u0012\u00020\u00070\u0005J*\u0010\u0015\u001a\u00020\u00112\u0006\u0010\u0012\u001a\u00020\u00042\f\u0010\u0016\u001a\b\u0012\u0004\u0012\u00020\u00180\u00172\f\u0010\u0019\u001a\b\u0012\u0004\u0012\u00020\u001a0\u0017J\u000e\u0010\u001b\u001a\u00020\u00112\u0006\u0010\u0012\u001a\u00020\u0004J\u000e\u0010\u001c\u001a\u00020\u00112\u0006\u0010\u0012\u001a\u00020\u0004J\u0016\u0010\u001d\u001a\u00020\u00112\u0006\u0010\u0012\u001a\u00020\u00042\u0006\u0010\u001e\u001a\u00020\u0007J\u0016\u0010\u001f\u001a\u00020\u00112\u0006\u0010\u0012\u001a\u00020\u00042\u0006\u0010 \u001a\u00020\u0007J\u000e\u0010!\u001a\u00020\u00112\u0006\u0010\u0012\u001a\u00020\u0004J(\u0010\"\u001a\u00020\u00112\u0006\u0010\u0012\u001a\u00020\u00042\u0006\u0010#\u001a\u00020\u00072\u0006\u0010$\u001a\u00020\u00072\u0006\u0010%\u001a\u00020&H\u0007J\u0016\u0010'\u001a\u00020\u00112\u0006\u0010\u0012\u001a\u00020\u00042\u0006\u0010$\u001a\u00020\u0007J\u0018\u0010(\u001a\u00020\u00112\u0006\u0010\u0012\u001a\u00020\u00042\u0006\u0010)\u001a\u00020*H\u0007J\u001e\u0010+\u001a\u00020\u00112\u0006\u0010\u0012\u001a\u00020\u00042\u000e\u0010,\u001a\n\u0012\u0006\u0012\u0004\u0018\u00010-0\u0017J \u0010.\u001a\u00020\u00112\u0006\u0010\u0012\u001a\u00020\u00042\u000e\u0010,\u001a\n\u0012\u0006\u0012\u0004\u0018\u00010-0\u0017H\u0007J$\u0010/\u001a\u00020\u00112\u0006\u0010\u0012\u001a\u00020\u00042\u0012\u0010)\u001a\u000e\u0012\u0004\u0012\u00020\u0007\u0012\u0004\u0012\u00020\u00010\u0005H\u0007J.\u0010\f\u001a\u0004\u0018\u00010\u000b2\u0006\u0010\u0012\u001a\u00020\u00042\u0006\u0010)\u001a\u00020*2\u0012\u00100\u001a\u000e\u0012\u0004\u0012\u00020\u0007\u0012\u0004\u0012\u00020\u00070\u0005H\u0002Jf\u00101\u001a\u00020\u00112\u0006\u0010\u0012\u001a\u00020\u00042\u0006\u0010)\u001a\u00020*2\b\u00102\u001a\u0004\u0018\u00010\u00072\u0012\u00100\u001a\u000e\u0012\u0004\u0012\u00020\u0007\u0012\u0004\u0012\u00020\u00070\u00052\b\u00103\u001a\u0004\u0018\u0001042\u0006\u00105\u001a\u00020&2\u0006\u00106\u001a\u00020&2\n\b\u0002\u00107\u001a\u0004\u0018\u00010\u00072\b\b\u0002\u00108\u001a\u00020&H\u0007R(\u0010\u0002\u001a\u001c\u0012\u0004\u0012\u00020\u0004\u0012\u0012\u0012\u0010\u0012\u0004\u0012\u00020\u0006\u0012\u0004\u0012\u00020\u0007\u0018\u00010\u00050\u0003X\u0082\u0004¢\u0006\u0002\n\u0000R\u001c\u0010\n\u001a\u0004\u0018\u00010\u000bX\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\f\u0010\r\"\u0004\b\u000e\u0010\u000f¨\u0006:"}, d2 = {"Lcom/discord/notifications/renderer/NotificationRenderer;", "", "getNotifTypeMappings", "Lkotlin/Function1;", "Landroid/content/Context;", "", "", "", "<init>", "(Lkotlin/jvm/functions/Function1;)V", "fullscreenIntent", "Landroid/app/PendingIntent;", "getFullscreenIntent", "()Landroid/app/PendingIntent;", "setFullscreenIntent", "(Landroid/app/PendingIntent;)V", "initNotificationCategories", "", "context", "localizedCategoryNames", "localizedGroupNames", "initNotificationGroupsAndChannels", "groups", "", "Lcom/discord/notifications/api/ConfiguredNotifGroup;", "channels", "Lcom/discord/notifications/api/ConfiguredNotifChannel;", "initFresco", "initIconUrlUtils", "setIncomingRingtone", StackTraceHelper.NAME_KEY, "clear", "notificationTag", "clearAllNotifications", "markNotificationAsDirectReply", "tag", "channelId", "shouldIgnoreAck", "", "handleReactionAcks", "handleAcks", "notification", "Lcom/discord/notifications/api/NotificationData;", "handleCallAck", "channelIds", "Lcom/discord/primitives/ChannelId;", "handleCallRingEnd", "displayLocal", "notificationDataMap", ViewProps.DISPLAY, "currentUsername", "behaviors", "Lcom/discord/notifications/renderer/NotificationBehaviors;", "makeOrUpdateShortcut", "notifyEveryTime", "accountLabel", "preserveAccountLabel", "Companion", "notification_renderer_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
@SourceDebugExtension({"SMAP\nNotificationRenderer.kt\nKotlin\n*S Kotlin\n*F\n+ 1 NotificationRenderer.kt\ncom/discord/notifications/renderer/NotificationRenderer\n+ 2 _Collections.kt\nkotlin/collections/CollectionsKt___CollectionsKt\n*L\n1#1,506:1\n1869#2,2:507\n1869#2:509\n1869#2,2:510\n1870#2:512\n1869#2:513\n1869#2,2:514\n1870#2:516\n*S KotlinDebug\n*F\n+ 1 NotificationRenderer.kt\ncom/discord/notifications/renderer/NotificationRenderer\n*L\n138#1:507,2\n191#1:509\n195#1:510,2\n191#1:512\n213#1:513\n217#1:514,2\n213#1:516\n*E\n"})
/* loaded from: classes.dex */
public final class NotificationRenderer {

    @NotNull
    public static final String CHANNEL_NAME = "channelName";

    @NotNull
    public static final String IGNORE_ACK_KEY = "ignoreAck";

    @NotNull
    public static final String IS_DM = "isDM";

    @NotNull
    public static final String LATEST_MESSAGE_ID_KEY = "latestMessageId";

    @NotNull
    public static final String USERNAME = "username";
    private PendingIntent fullscreenIntent;

    @NotNull
    private final Function1<Context, Map<Integer, String>> getNotifTypeMappings;

    /* JADX WARN: Multi-variable type inference failed */
    public NotificationRenderer(@NotNull Function1<? super Context, ? extends Map<Integer, String>> getNotifTypeMappings) {
        Intrinsics.checkNotNullParameter(getNotifTypeMappings, "getNotifTypeMappings");
        this.getNotifTypeMappings = getNotifTypeMappings;
    }

    public final void clear(@NotNull Context context, @NotNull String notificationTag) {
        Intrinsics.checkNotNullParameter(context, "context");
        Intrinsics.checkNotNullParameter(notificationTag, "notificationTag");
        NotificationManagerUtilsKt.getNotificationManagerCompat(context).f1480b.cancel(notificationTag, 0);
    }

    public final void clearAllNotifications(@NotNull Context context) {
        Intrinsics.checkNotNullParameter(context, "context");
        NotificationManagerUtilsKt.getNotificationManagerCompat(context).f1480b.cancelAll();
    }

    public final void display(@NotNull Context context, @NotNull NotificationData notification, String currentUsername, @NotNull Map<String, String> notificationDataMap, NotificationBehaviors behaviors, boolean makeOrUpdateShortcut, boolean notifyEveryTime, String accountLabel, boolean preserveAccountLabel) {
        Intrinsics.checkNotNullParameter(context, "context");
        Intrinsics.checkNotNullParameter(notification, "notification");
        Intrinsics.checkNotNullParameter(notificationDataMap, "notificationDataMap");
        x.w(g.f13538d, new NotificationRenderer$display$1(notification, context, this, notifyEveryTime, notificationDataMap, behaviors, preserveAccountLabel, accountLabel, currentUsername, makeOrUpdateShortcut, null));
    }

    public final void displayLocal(@NotNull Context context, @NotNull Map<String, ? extends Object> notification) {
        Intrinsics.checkNotNullParameter(context, "context");
        Intrinsics.checkNotNullParameter(notification, "notification");
        x.w(g.f13538d, new NotificationRenderer$displayLocal$1(notification, context, this, null));
    }

    public final PendingIntent getFullscreenIntent() {
        return this.fullscreenIntent;
    }

    public final void handleAcks(@NotNull Context context, @NotNull NotificationData notification) {
        Intrinsics.checkNotNullParameter(context, "context");
        Intrinsics.checkNotNullParameter(notification, "notification");
        long fromTimestamp = SnowflakeUtils.INSTANCE.fromTimestamp(notification.getSentAtMillis());
        Iterator<ChannelId> it = notification.getAckChannelIds().iterator();
        while (it.hasNext()) {
            String k = e.k(NotificationData.TYPE_MESSAGE_CREATE, ChannelId.m1170toStringimpl(it.next().m1172unboximpl()));
            NotificationChannels notificationChannels = NotificationChannels.INSTANCE;
            NotificationCompat$Builder notificationBuilderOrCreate = NotificationManagerUtilsKt.getNotificationBuilderOrCreate(context, notificationChannels.getNotificationChannelId(notification, context, (Map) this.getNotifTypeMappings.invoke(context)), NotificationManagerUtilsKt.getActiveNotification(context, k));
            if (notificationBuilderOrCreate.d().getLong(LATEST_MESSAGE_ID_KEY, 0L) <= fromTimestamp) {
                if (notificationBuilderOrCreate.d().getBoolean(IGNORE_ACK_KEY, false)) {
                    markNotificationAsDirectReply(context, k, notificationChannels.getNotificationChannelId(notification, context, (Map) this.getNotifTypeMappings.invoke(context)), false);
                } else {
                    clear(context, k);
                }
            }
        }
    }

    public final void handleCallAck(@NotNull Context context, @NotNull List<ChannelId> channelIds) {
        Intrinsics.checkNotNullParameter(context, "context");
        Intrinsics.checkNotNullParameter(channelIds, "channelIds");
        if (Build.VERSION.SDK_INT < 26 || channelIds.isEmpty()) {
            return;
        }
        for (ChannelId channelId : channelIds) {
            if (channelId != null) {
                List<StatusBarNotification> m1149getCallNotificationsmJqaSGE = NotificationManagerUtilsKt.m1149getCallNotificationsmJqaSGE(context, channelId.m1172unboximpl());
                if (m1149getCallNotificationsmJqaSGE != null) {
                    Iterator<T> it = m1149getCallNotificationsmJqaSGE.iterator();
                    while (it.hasNext()) {
                        String tag = ((StatusBarNotification) it.next()).getTag();
                        Intrinsics.checkNotNullExpressionValue(tag, "getTag(...)");
                        clear(context, tag);
                    }
                }
                IncomingCallActivity.Companion companion = IncomingCallActivity.INSTANCE;
                if (companion.getSelfIntent() != null) {
                    IncomingCallActivity selfIntent = companion.getSelfIntent();
                    Intrinsics.checkNotNull(selfIntent);
                    selfIntent.finishAndRemoveTask();
                }
            }
        }
    }

    public final void handleCallRingEnd(@NotNull Context context, @NotNull List<ChannelId> channelIds) {
        Intrinsics.checkNotNullParameter(context, "context");
        Intrinsics.checkNotNullParameter(channelIds, "channelIds");
        if (Build.VERSION.SDK_INT < 26 || channelIds.isEmpty()) {
            return;
        }
        for (ChannelId channelId : channelIds) {
            if (channelId != null) {
                List<StatusBarNotification> m1149getCallNotificationsmJqaSGE = NotificationManagerUtilsKt.m1149getCallNotificationsmJqaSGE(context, channelId.m1172unboximpl());
                if (m1149getCallNotificationsmJqaSGE != null) {
                    for (StatusBarNotification statusBarNotification : m1149getCallNotificationsmJqaSGE) {
                        String string = statusBarNotification.getNotification().extras.getString(USERNAME);
                        if (string == null) {
                            return;
                        }
                        String string2 = statusBarNotification.getNotification().extras.getString(CHANNEL_NAME);
                        String missedCallText = NotificationDataUtilsKt.getMissedCallText(context, string, statusBarNotification.getNotification().extras.getBoolean(IS_DM));
                        String channelId2 = statusBarNotification.getNotification().getChannelId();
                        Intrinsics.checkNotNullExpressionValue(channelId2, "getChannelId(...)");
                        NotificationCompat$Builder notificationBuilderOrCreate = NotificationManagerUtilsKt.getNotificationBuilderOrCreate(context, channelId2, statusBarNotification.getNotification());
                        notificationBuilderOrCreate.G = NotificationChannels.INSTANCE.getSilenceCallChannelId();
                        notificationBuilderOrCreate.f1451f = NotificationCompat$Builder.e(missedCallText);
                        if (string2 != null) {
                            string = string2;
                        }
                        notificationBuilderOrCreate.f1450e = NotificationCompat$Builder.e(string);
                        notificationBuilderOrCreate.f1447b.clear();
                        NotificationManagerCompat notificationManagerCompat = NotificationManagerUtilsKt.getNotificationManagerCompat(context);
                        String tag = statusBarNotification.getTag();
                        Intrinsics.checkNotNullExpressionValue(tag, "getTag(...)");
                        NotificationManagerUtilsKt.notify$default(notificationManagerCompat, tag, notificationBuilderOrCreate, 0, 4, null);
                    }
                }
                IncomingCallActivity.Companion companion = IncomingCallActivity.INSTANCE;
                if (companion.getSelfIntent() != null) {
                    IncomingCallActivity selfIntent = companion.getSelfIntent();
                    Intrinsics.checkNotNull(selfIntent);
                    selfIntent.finishAndRemoveTask();
                }
            }
        }
    }

    public final void handleReactionAcks(@NotNull Context context, @NotNull String channelId) {
        List<StatusBarNotification> activeReactionNotifications;
        Intrinsics.checkNotNullParameter(context, "context");
        Intrinsics.checkNotNullParameter(channelId, "channelId");
        if (Build.VERSION.SDK_INT >= 26 && (activeReactionNotifications = NotificationManagerUtilsKt.getActiveReactionNotifications(context, channelId)) != null) {
            for (StatusBarNotification statusBarNotification : activeReactionNotifications) {
                String channelId2 = statusBarNotification.getNotification().getChannelId();
                Intrinsics.checkNotNullExpressionValue(channelId2, "getChannelId(...)");
                if (!NotificationManagerUtilsKt.getNotificationBuilderOrCreate(context, channelId2, statusBarNotification.getNotification()).d().getBoolean(IGNORE_ACK_KEY, false)) {
                    String tag = statusBarNotification.getTag();
                    Intrinsics.checkNotNullExpressionValue(tag, "getTag(...)");
                    clear(context, tag);
                }
            }
        }
    }

    public final void initFresco(@NotNull Context context) {
        Intrinsics.checkNotNullParameter(context, "context");
        FrescoModuleDiscord.INSTANCE.initializeFresco(context);
    }

    public final void initIconUrlUtils(@NotNull Context context) {
        Intrinsics.checkNotNullParameter(context, "context");
        IconUrlUtils.init$default(IconUrlUtils.INSTANCE, context, null, null, 6, null);
    }

    public final void initNotificationCategories(@NotNull Context context, @NotNull Map<String, String> localizedCategoryNames, @NotNull Map<String, String> localizedGroupNames) {
        Intrinsics.checkNotNullParameter(context, "context");
        Intrinsics.checkNotNullParameter(localizedCategoryNames, "localizedCategoryNames");
        Intrinsics.checkNotNullParameter(localizedGroupNames, "localizedGroupNames");
        NotificationChannels.INSTANCE.init(context, localizedCategoryNames, localizedGroupNames);
    }

    public final void initNotificationGroupsAndChannels(@NotNull Context context, @NotNull List<ConfiguredNotifGroup> groups, @NotNull List<ConfiguredNotifChannel> channels) {
        Intrinsics.checkNotNullParameter(context, "context");
        Intrinsics.checkNotNullParameter(groups, "groups");
        Intrinsics.checkNotNullParameter(channels, "channels");
        NotificationChannels.INSTANCE.initNotificationGroupsAndChannels(context, groups, channels);
    }

    public final void markNotificationAsDirectReply(@NotNull Context context, @NotNull String tag, @NotNull String channelId, boolean shouldIgnoreAck) {
        Intrinsics.checkNotNullParameter(context, "context");
        Intrinsics.checkNotNullParameter(tag, "tag");
        Intrinsics.checkNotNullParameter(channelId, "channelId");
        Notification activeNotification = NotificationManagerUtilsKt.getActiveNotification(context, tag);
        if (activeNotification != null) {
            NotificationCompat$Builder notificationBuilderOrCreate = NotificationManagerUtilsKt.getNotificationBuilderOrCreate(context, channelId, activeNotification);
            notificationBuilderOrCreate.b(com.facebook.imagepipeline.nativecode.b.c(new Pair(IGNORE_ACK_KEY, Boolean.valueOf(shouldIgnoreAck))));
            Intrinsics.checkNotNullExpressionValue(notificationBuilderOrCreate, "addExtras(...)");
            NotificationManagerUtilsKt.notify$default(NotificationManagerUtilsKt.getNotificationManagerCompat(context), tag, notificationBuilderOrCreate, 0, 4, null);
        }
    }

    public final void setFullscreenIntent(PendingIntent pendingIntent) {
        this.fullscreenIntent = pendingIntent;
    }

    public final void setIncomingRingtone(@NotNull Context context, @NotNull String name) {
        Intrinsics.checkNotNullParameter(context, "context");
        Intrinsics.checkNotNullParameter(name, "name");
        NotificationChannels.INSTANCE.setIncomingRingtone(context, name);
    }

    /* JADX INFO: Access modifiers changed from: private */
    /* JADX WARN: Code restructure failed: missing block: B:7:0x004e, code lost:
    
        if (r2.intValue() == 1) goto L13;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final PendingIntent getFullscreenIntent(Context context, NotificationData notification, Map<String, String> notificationDataMap) {
        boolean z5;
        Intent addFlags = new Intent(context, (Class<?>) IncomingCallActivity.class).addFlags(268468224);
        Intrinsics.checkNotNullExpressionValue(addFlags, "addFlags(...)");
        Pair pair = new Pair(USERNAME, notification.getUserUsername());
        Pair pair2 = new Pair(CHANNEL_NAME, NotificationDataUtilsKt.isCall(notification) ? notification.getChannelName() : d.l(notification.getChannelName(), ", ", notification.getGuildName()));
        Integer channelType = notification.getChannelType();
        if (channelType != null) {
            z5 = true;
        }
        z5 = false;
        Pair pair3 = new Pair(IS_DM, Boolean.valueOf(z5));
        Pair pair4 = new Pair("userAvatar", notification.getUserAvatar());
        Pair pair5 = new Pair("userDiscriminator", notification.getUserDiscriminator());
        Pair pair6 = new Pair("userId", String.valueOf(notification.m1128getUserIdwUX8bhU()));
        Pair pair7 = new Pair("guildId", String.valueOf(notification.m1124getGuildIdqOKuAAo()));
        Pair pair8 = new Pair("userGuildAvatar", notification.getUserGuildAvatar());
        String tag = NotificationDataUtilsKt.getTag(notification);
        LinkedHashMap o6 = v0.o(notificationDataMap);
        o6.put("type", NotificationData.TYPE_CALL_CONNECT);
        o6.put("is_fullscreen_call_ui", "true");
        Unit unit = Unit.a;
        Pair pair9 = new Pair("acceptAction", new ContentAction(tag, o6));
        String tag2 = NotificationDataUtilsKt.getTag(notification);
        ChannelId m1123getChannelIdqMVnFVQ = notification.m1123getChannelIdqMVnFVQ();
        Intrinsics.checkNotNull(m1123getChannelIdqMVnFVQ);
        long m1172unboximpl = m1123getChannelIdqMVnFVQ.m1172unboximpl();
        GuildId m1124getGuildIdqOKuAAo = notification.m1124getGuildIdqOKuAAo();
        UserId m1128getUserIdwUX8bhU = notification.m1128getUserIdwUX8bhU();
        Intrinsics.checkNotNull(m1128getUserIdwUX8bhU);
        addFlags.putExtras(com.facebook.imagepipeline.nativecode.b.c(pair, pair2, pair3, pair4, pair5, pair6, pair7, pair8, pair9, new Pair("dismissAction", new DismissCallAction(tag2, m1172unboximpl, true, m1124getGuildIdqOKuAAo, m1128getUserIdwUX8bhU.m1250unboximpl(), null))));
        return PendingIntent.getActivity(context, 0, addFlags, 335544320);
    }
}
