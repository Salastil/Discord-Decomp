package com.discord.notifications.renderer;

import a3.e;
import android.content.Context;
import android.media.AudioAttributes;
import android.net.Uri;
import android.os.Build;
import androidx.core.app.NotificationChannelCompat;
import androidx.core.app.NotificationManagerCompat;
import com.appsflyer.AppsFlyerProperties;
import com.discord.crash_reporting.CrashReporting;
import com.discord.jank_stats.JankRecordStore;
import com.discord.notifications.api.ConfiguredNotifChannel;
import com.discord.notifications.api.ConfiguredNotifGroup;
import com.discord.notifications.api.NotificationData;
import com.discord.notifications.renderer.NotificationChannels;
import com.discord.notifications.renderer.utils.NotificationManagerUtilsKt;
import com.discord.theme.utils.ColorUtilsKt;
import com.facebook.react.devsupport.StackTraceHelper;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.LinkedHashMap;
import java.util.LinkedHashSet;
import java.util.List;
import java.util.Map;
import kotlin.Metadata;
import kotlin.Pair;
import kotlin.Unit;
import kotlin.collections.b0;
import kotlin.collections.d0;
import kotlin.collections.u0;
import kotlin.collections.v0;
import kotlin.enums.EnumEntries;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.SourceDebugExtension;
import kotlin.text.StringsKt;
import kotlin.text.x;
import org.jetbrains.annotations.NotNull;
import x0.k;
import x0.n;

@Metadata(d1 = {"\u0000~\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\u0010\u000e\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010$\n\u0000\n\u0002\u0010 \n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\b\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0010\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\t\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000b\n\u0002\b\u0011\n\u0002\u0018\u0002\n\u0002\b\r\bÆ\u0002\u0018\u00002\u00020\u0001:\u0003MNOB\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\u0013\u0010\u0006\u001a\u00020\u0005*\u00020\u0004H\u0002¢\u0006\u0004\b\u0006\u0010\u0007J\u0019\u0010\u000b\u001a\u0004\u0018\u00010\n2\u0006\u0010\t\u001a\u00020\bH\u0002¢\u0006\u0004\b\u000b\u0010\fJ\u0017\u0010\r\u001a\u00020\u00052\u0006\u0010\t\u001a\u00020\bH\u0002¢\u0006\u0004\b\r\u0010\u000eJ\u001d\u0010\u0010\u001a\u0004\u0018\u00010\n*\u00020\u000f2\u0006\u0010\t\u001a\u00020\bH\u0002¢\u0006\u0004\b\u0010\u0010\u0011J1\u0010\u0016\u001a\b\u0012\u0004\u0012\u00020\u00150\u00142\u0006\u0010\t\u001a\u00020\b2\u0012\u0010\u0013\u001a\u000e\u0012\u0004\u0012\u00020\u0005\u0012\u0004\u0012\u00020\u00050\u0012H\u0002¢\u0006\u0004\b\u0016\u0010\u0017J+\u0010\u0016\u001a\b\u0012\u0004\u0012\u00020\u00150\u00142\u0006\u0010\t\u001a\u00020\b2\f\u0010\u0019\u001a\b\u0012\u0004\u0012\u00020\u00180\u0014H\u0002¢\u0006\u0004\b\u0016\u0010\u001aJ[\u0010#\u001a\u0004\u0018\u00010\n2\u0006\u0010\t\u001a\u00020\b2\u0006\u0010\u001b\u001a\u00020\u000f2\u0006\u0010\u001d\u001a\u00020\u001c2\u0012\u0010\u001e\u001a\u000e\u0012\u0004\u0012\u00020\u0005\u0012\u0004\u0012\u00020\u00050\u00122\u001c\b\u0002\u0010\"\u001a\u0016\u0012\u0006\u0012\u0004\u0018\u00010\n\u0012\u0004\u0012\u00020 \u0012\u0004\u0012\u00020!0\u001fH\u0002¢\u0006\u0004\b#\u0010$J)\u0010#\u001a\u00020\n2\u0006\u0010\t\u001a\u00020\b2\b\b\u0001\u0010\u001d\u001a\u00020\u001c2\u0006\u0010&\u001a\u00020%H\u0002¢\u0006\u0004\b#\u0010'J3\u0010+\u001a\u00020!2\u0006\u0010\t\u001a\u00020\b2\b\u0010(\u001a\u0004\u0018\u00010\n2\u0006\u0010)\u001a\u00020 2\b\b\u0002\u0010*\u001a\u00020\u0004H\u0002¢\u0006\u0004\b+\u0010,J!\u0010-\u001a\u00020!2\b\u0010(\u001a\u0004\u0018\u00010\n2\u0006\u0010)\u001a\u00020 H\u0002¢\u0006\u0004\b-\u0010.J\u001b\u00102\u001a\u000201*\u00020/2\u0006\u00100\u001a\u00020\u0005H\u0002¢\u0006\u0004\b2\u00103J\u001b\u00105\u001a\u000201*\u00020/2\u0006\u00104\u001a\u00020\u0005H\u0002¢\u0006\u0004\b5\u00103J/\u00107\u001a\u000201*\u00020/2\f\u00106\u001a\b\u0012\u0004\u0012\u00020\n0\u00142\f\u0010\u0019\u001a\b\u0012\u0004\u0012\u00020\u00150\u0014H\u0002¢\u0006\u0004\b7\u00108J=\u00109\u001a\u00020!2\u0006\u0010\t\u001a\u00020\b2\u0012\u0010\u001e\u001a\u000e\u0012\u0004\u0012\u00020\u0005\u0012\u0004\u0012\u00020\u00050\u00122\u0012\u0010\u0013\u001a\u000e\u0012\u0004\u0012\u00020\u0005\u0012\u0004\u0012\u00020\u00050\u0012¢\u0006\u0004\b9\u0010:J1\u0010<\u001a\u00020!2\u0006\u0010\t\u001a\u00020\b2\f\u0010\u0019\u001a\b\u0012\u0004\u0012\u00020\u00180\u00142\f\u0010;\u001a\b\u0012\u0004\u0012\u00020%0\u0014¢\u0006\u0004\b<\u0010=J\u001d\u0010?\u001a\u00020!2\u0006\u0010\t\u001a\u00020\b2\u0006\u0010>\u001a\u00020\u0005¢\u0006\u0004\b?\u0010@J\r\u0010A\u001a\u00020\u0005¢\u0006\u0004\bA\u0010BJ/\u0010E\u001a\u00020\u0005*\u00020C2\u0006\u0010\t\u001a\u00020\b2\u0014\u0010D\u001a\u0010\u0012\u0004\u0012\u00020\u001c\u0012\u0004\u0012\u00020\u0005\u0018\u00010\u0012¢\u0006\u0004\bE\u0010FR\u0014\u0010G\u001a\u00020\u00058\u0006X\u0086T¢\u0006\u0006\n\u0004\bG\u0010HR\u0014\u0010I\u001a\u00020\u00058\u0006X\u0086T¢\u0006\u0006\n\u0004\bI\u0010HR\u0014\u0010J\u001a\u00020\u00058\u0006X\u0086T¢\u0006\u0006\n\u0004\bJ\u0010HR\u0014\u0010K\u001a\u00020\u00058\u0006X\u0086T¢\u0006\u0006\n\u0004\bK\u0010HR\u0014\u0010L\u001a\u00020\u00058\u0002X\u0082T¢\u0006\u0006\n\u0004\bL\u0010H¨\u0006P"}, d2 = {"Lcom/discord/notifications/renderer/NotificationChannels;", "", "<init>", "()V", "Lcom/discord/notifications/renderer/NotificationChannels$CallRingtone;", "", "getChannelId", "(Lcom/discord/notifications/renderer/NotificationChannels$CallRingtone;)Ljava/lang/String;", "Landroid/content/Context;", "context", "Landroidx/core/app/NotificationChannelCompat;", "getCallChannel", "(Landroid/content/Context;)Landroidx/core/app/NotificationChannelCompat;", "getCallChannelId", "(Landroid/content/Context;)Ljava/lang/String;", "Lcom/discord/notifications/renderer/NotificationChannels$Category;", "getAndDeleteLegacyNotificationChannel", "(Lcom/discord/notifications/renderer/NotificationChannels$Category;Landroid/content/Context;)Landroidx/core/app/NotificationChannelCompat;", "", "localizedGroupNames", "", "Lx0/n;", "createNotificationChannelGroups", "(Landroid/content/Context;Ljava/util/Map;)Ljava/util/List;", "Lcom/discord/notifications/api/ConfiguredNotifGroup;", "groups", "(Landroid/content/Context;Ljava/util/List;)Ljava/util/List;", "category", "", "brandColor", "localizedCategoryNames", "Lkotlin/Function2;", "Landroidx/core/app/NotificationChannelCompat$Builder;", "", "onConfigure", "migrateOrCreateNotificationChannel", "(Landroid/content/Context;Lcom/discord/notifications/renderer/NotificationChannels$Category;ILjava/util/Map;Lkotlin/jvm/functions/Function2;)Landroidx/core/app/NotificationChannelCompat;", "Lcom/discord/notifications/api/ConfiguredNotifChannel;", AppsFlyerProperties.CHANNEL, "(Landroid/content/Context;ILcom/discord/notifications/api/ConfiguredNotifChannel;)Landroidx/core/app/NotificationChannelCompat;", "legacyChannel", "builder", "ringtone", "configureCallChannel", "(Landroid/content/Context;Landroidx/core/app/NotificationChannelCompat;Landroidx/core/app/NotificationChannelCompat$Builder;Lcom/discord/notifications/renderer/NotificationChannels$CallRingtone;)V", "configureMediaChannel", "(Landroidx/core/app/NotificationChannelCompat;Landroidx/core/app/NotificationChannelCompat$Builder;)V", "Landroidx/core/app/NotificationManagerCompat;", "channelId", "", "deleteNotificationChannelSafely", "(Landroidx/core/app/NotificationManagerCompat;Ljava/lang/String;)Z", "groupId", "deleteNotificationChannelGroupSafely", "notificationChannels", "createNotificationChannelsCompatSafely", "(Landroidx/core/app/NotificationManagerCompat;Ljava/util/List;Ljava/util/List;)Z", "init", "(Landroid/content/Context;Ljava/util/Map;Ljava/util/Map;)V", "channels", "initNotificationGroupsAndChannels", "(Landroid/content/Context;Ljava/util/List;Ljava/util/List;)V", StackTraceHelper.NAME_KEY, "setIncomingRingtone", "(Landroid/content/Context;Ljava/lang/String;)V", "getSilenceCallChannelId", "()Ljava/lang/String;", "Lcom/discord/notifications/api/NotificationData;", "mappings", "getNotificationChannelId", "(Lcom/discord/notifications/api/NotificationData;Landroid/content/Context;Ljava/util/Map;)Ljava/lang/String;", "MEDIA_CONNECTIONS_CHANNEL_ID", "Ljava/lang/String;", "REALTIME_GROUP_ID", "MEDIA_CONNECTIONS_DEFAULT_NAME", "REALTIME_GROUP_DEFAULT_NAME", "BASE_CALL_CHANNEL_ID", "ChannelGroup", "Category", "CallRingtone", "notification_renderer_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
@SourceDebugExtension({"SMAP\nNotificationChannels.kt\nKotlin\n*S Kotlin\n*F\n+ 1 NotificationChannels.kt\ncom/discord/notifications/renderer/NotificationChannels\n+ 2 _Arrays.kt\nkotlin/collections/ArraysKt___ArraysKt\n+ 3 fake.kt\nkotlin/jvm/internal/FakeKt\n+ 4 _Collections.kt\nkotlin/collections/CollectionsKt___CollectionsKt\n*L\n1#1,602:1\n11546#2,9:603\n13472#2:612\n13473#2:614\n11555#2:615\n11228#2:626\n11563#2,3:627\n1#3:613\n1#3:630\n1563#4:616\n1634#4,3:617\n1634#4,3:620\n1634#4,3:623\n1563#4:631\n1634#4,3:632\n1193#4,2:635\n1267#4,4:637\n*S KotlinDebug\n*F\n+ 1 NotificationChannels.kt\ncom/discord/notifications/renderer/NotificationChannels\n*L\n156#1:603,9\n156#1:612\n156#1:614\n156#1:615\n429#1:626\n429#1:627,3\n156#1:613\n190#1:616\n190#1:617,3\n196#1:620,3\n197#1:623,3\n450#1:631\n450#1:632,3\n592#1:635,2\n592#1:637,4\n*E\n"})
/* loaded from: classes.dex */
public final class NotificationChannels {

    @NotNull
    private static final String BASE_CALL_CHANNEL_ID = "calls";

    @NotNull
    public static final NotificationChannels INSTANCE = new NotificationChannels();

    @NotNull
    public static final String MEDIA_CONNECTIONS_CHANNEL_ID = "mediaConnections";

    @NotNull
    public static final String MEDIA_CONNECTIONS_DEFAULT_NAME = "Voice connected";

    @NotNull
    public static final String REALTIME_GROUP_DEFAULT_NAME = "Real-time";

    @NotNull
    public static final String REALTIME_GROUP_ID = "111_realtime";

    /* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
    /* JADX WARN: Unknown enum class pattern. Please report as an issue! */
    @Metadata(d1 = {"\u0000&\n\u0002\u0018\u0002\n\u0002\u0010\u0010\n\u0000\n\u0002\u0010\u000e\n\u0000\n\u0002\u0010\b\n\u0002\b\t\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\b\u0082\u0081\u0002\u0018\u0000 \u00122\b\u0012\u0004\u0012\u00020\u00000\u0001:\u0001\u0012B\u0019\b\u0002\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005¢\u0006\u0004\b\u0006\u0010\u0007J\u000e\u0010\u000e\u001a\u00020\u000f2\u0006\u0010\u0010\u001a\u00020\u0011R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\b\u0010\tR\u0011\u0010\u0004\u001a\u00020\u0005¢\u0006\b\n\u0000\u001a\u0004\b\n\u0010\u000bj\u0002\b\fj\u0002\b\r¨\u0006\u0013"}, d2 = {"Lcom/discord/notifications/renderer/NotificationChannels$CallRingtone;", "", StackTraceHelper.ID_KEY, "", "resource", "", "<init>", "(Ljava/lang/String;ILjava/lang/String;I)V", "getId", "()Ljava/lang/String;", "getResource", "()I", "Halloween", "Default", "getUri", "Landroid/net/Uri;", "context", "Landroid/content/Context;", "Companion", "notification_renderer_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    @SourceDebugExtension({"SMAP\nNotificationChannels.kt\nKotlin\n*S Kotlin\n*F\n+ 1 NotificationChannels.kt\ncom/discord/notifications/renderer/NotificationChannels$CallRingtone\n+ 2 Uri.kt\nandroidx/core/net/UriKt\n*L\n1#1,602:1\n29#2:603\n*S KotlinDebug\n*F\n+ 1 NotificationChannels.kt\ncom/discord/notifications/renderer/NotificationChannels$CallRingtone\n*L\n135#1:603\n*E\n"})
    public static final class CallRingtone {
        private static final /* synthetic */ EnumEntries $ENTRIES;
        private static final /* synthetic */ CallRingtone[] $VALUES;

        /* renamed from: Companion, reason: from kotlin metadata */
        @NotNull
        public static final Companion INSTANCE;

        @NotNull
        private final String id;
        private final int resource;
        public static final CallRingtone Halloween = new CallRingtone("Halloween", 0, "halloween", com.discord.sounds.R.raw.halloween_call_ringing);
        public static final CallRingtone Default = new CallRingtone("Default", 1, "default", com.discord.sounds.R.raw.call_ringing);

        @Metadata(d1 = {"\u0000\u0018\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0000\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\u000e\u0010\u0004\u001a\u00020\u00052\u0006\u0010\u0006\u001a\u00020\u0007¨\u0006\b"}, d2 = {"Lcom/discord/notifications/renderer/NotificationChannels$CallRingtone$Companion;", "", "<init>", "()V", "fromName", "Lcom/discord/notifications/renderer/NotificationChannels$CallRingtone;", StackTraceHelper.NAME_KEY, "", "notification_renderer_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
        public static final class Companion {
            public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
                this();
            }

            @NotNull
            public final CallRingtone fromName(@NotNull String name) {
                Intrinsics.checkNotNullParameter(name, "name");
                return Intrinsics.areEqual(name, "call_ringing_halloween") ? CallRingtone.Halloween : CallRingtone.Default;
            }

            private Companion() {
            }
        }

        private static final /* synthetic */ CallRingtone[] $values() {
            return new CallRingtone[]{Halloween, Default};
        }

        static {
            CallRingtone[] $values = $values();
            $VALUES = $values;
            $ENTRIES = ki.b.p($values);
            INSTANCE = new Companion(null);
        }

        private CallRingtone(String str, int i5, String str2, int i6) {
            this.id = str2;
            this.resource = i6;
        }

        @NotNull
        public static EnumEntries getEntries() {
            return $ENTRIES;
        }

        public static CallRingtone valueOf(String str) {
            return (CallRingtone) Enum.valueOf(CallRingtone.class, str);
        }

        public static CallRingtone[] values() {
            return (CallRingtone[]) $VALUES.clone();
        }

        @NotNull
        public final String getId() {
            return this.id;
        }

        public final int getResource() {
            return this.resource;
        }

        @NotNull
        public final Uri getUri(@NotNull Context context) {
            Intrinsics.checkNotNullParameter(context, "context");
            return Uri.parse("android.resource://" + context.getPackageName() + "/" + this.resource);
        }
    }

    /* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
    /* JADX WARN: Unknown enum class pattern. Please report as an issue! */
    @Metadata(d1 = {"\u0000\u0012\n\u0002\u0018\u0002\n\u0002\u0010\u0010\n\u0000\n\u0002\u0010\u000e\n\u0002\b\f\b\u0082\u0081\u0002\u0018\u0000 \u000e2\b\u0012\u0004\u0012\u00020\u00000\u0001:\u0001\u000eB\u0019\b\u0002\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0003¢\u0006\u0004\b\u0005\u0010\u0006R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0007\u0010\bR\u0011\u0010\u0004\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\t\u0010\bj\u0002\b\nj\u0002\b\u000bj\u0002\b\fj\u0002\b\r¨\u0006\u000f"}, d2 = {"Lcom/discord/notifications/renderer/NotificationChannels$ChannelGroup;", "", StackTraceHelper.ID_KEY, "", "groupId", "<init>", "(Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;)V", "getId", "()Ljava/lang/String;", "getGroupId", "Realtime", "Social", "Server", "Other", "Companion", "notification_renderer_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final class ChannelGroup {
        private static final /* synthetic */ EnumEntries $ENTRIES;
        private static final /* synthetic */ ChannelGroup[] $VALUES;

        /* renamed from: Companion, reason: from kotlin metadata */
        @NotNull
        public static final Companion INSTANCE;

        @NotNull
        private final String groupId;

        @NotNull
        private final String id;
        public static final ChannelGroup Realtime = new ChannelGroup("Realtime", 0, "realtime", NotificationChannels.REALTIME_GROUP_ID);
        public static final ChannelGroup Social = new ChannelGroup("Social", 1, "social", "222_social");
        public static final ChannelGroup Server = new ChannelGroup("Server", 2, "server", "333_server");
        public static final ChannelGroup Other = new ChannelGroup("Other", 3, JankRecordStore.SCREEN_OTHER, "444_other");

        @Metadata(d1 = {"\u0000\u0014\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\u000e\n\u0002\b\u0002\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\u000e\u0010\u0004\u001a\u00020\u00052\u0006\u0010\u0006\u001a\u00020\u0005¨\u0006\u0007"}, d2 = {"Lcom/discord/notifications/renderer/NotificationChannels$ChannelGroup$Companion;", "", "<init>", "()V", "defaultLabel", "", StackTraceHelper.ID_KEY, "notification_renderer_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
        public static final class Companion {
            public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
                this();
            }

            @NotNull
            public final String defaultLabel(@NotNull String id2) {
                Intrinsics.checkNotNullParameter(id2, "id");
                int hashCode = id2.hashCode();
                return hashCode != -905826493 ? hashCode != -897050771 ? (hashCode == -859198101 && id2.equals("realtime")) ? NotificationChannels.REALTIME_GROUP_DEFAULT_NAME : "Other" : !id2.equals("social") ? "Other" : "Social" : !id2.equals("server") ? "Other" : "Server";
            }

            private Companion() {
            }
        }

        private static final /* synthetic */ ChannelGroup[] $values() {
            return new ChannelGroup[]{Realtime, Social, Server, Other};
        }

        static {
            ChannelGroup[] $values = $values();
            $VALUES = $values;
            $ENTRIES = ki.b.p($values);
            INSTANCE = new Companion(null);
        }

        private ChannelGroup(String str, int i5, String str2, String str3) {
            this.id = str2;
            this.groupId = str3;
        }

        @NotNull
        public static EnumEntries getEntries() {
            return $ENTRIES;
        }

        public static ChannelGroup valueOf(String str) {
            return (ChannelGroup) Enum.valueOf(ChannelGroup.class, str);
        }

        public static ChannelGroup[] values() {
            return (ChannelGroup[]) $VALUES.clone();
        }

        @NotNull
        public final String getGroupId() {
            return this.groupId;
        }

        @NotNull
        public final String getId() {
            return this.id;
        }
    }

    @Metadata(k = 3, mv = {2, 1, 0}, xi = 48)
    public /* synthetic */ class WhenMappings {
        public static final /* synthetic */ int[] $EnumSwitchMapping$0;
        public static final /* synthetic */ int[] $EnumSwitchMapping$1;
        public static final /* synthetic */ int[] $EnumSwitchMapping$2;

        static {
            int[] iArr = new int[CallRingtone.values().length];
            try {
                iArr[CallRingtone.Default.ordinal()] = 1;
            } catch (NoSuchFieldError unused) {
            }
            $EnumSwitchMapping$0 = iArr;
            int[] iArr2 = new int[Category.values().length];
            try {
                iArr2[Category.Calls.ordinal()] = 1;
            } catch (NoSuchFieldError unused2) {
            }
            try {
                iArr2[Category.MediaConnections.ordinal()] = 2;
            } catch (NoSuchFieldError unused3) {
            }
            $EnumSwitchMapping$1 = iArr2;
            int[] iArr3 = new int[ChannelCleanupAction.values().length];
            try {
                iArr3[ChannelCleanupAction.KEEP_CONFIGURED.ordinal()] = 1;
            } catch (NoSuchFieldError unused4) {
            }
            try {
                iArr3[ChannelCleanupAction.KEEP_ALLOWLISTED.ordinal()] = 2;
            } catch (NoSuchFieldError unused5) {
            }
            try {
                iArr3[ChannelCleanupAction.KEEP_PRESERVED_CONVERSATION.ordinal()] = 3;
            } catch (NoSuchFieldError unused6) {
            }
            try {
                iArr3[ChannelCleanupAction.DELETE.ordinal()] = 4;
            } catch (NoSuchFieldError unused7) {
            }
            $EnumSwitchMapping$2 = iArr3;
        }
    }

    private NotificationChannels() {
    }

    private final void configureCallChannel(Context context, NotificationChannelCompat legacyChannel, NotificationChannelCompat.Builder builder, CallRingtone ringtone) {
        NotificationChannelCompat notificationChannelCompat = builder.a;
        notificationChannelCompat.k = true;
        notificationChannelCompat.f1436l = new long[]{100, 200, 300, 400, 500, 400, 300, 200, 400};
        notificationChannelCompat.f1432f = legacyChannel != null ? legacyChannel.f1432f : false;
        Uri uri = ringtone.getUri(context);
        AudioAttributes build = new AudioAttributes.Builder().setUsage(5).setContentType(2).build();
        NotificationChannelCompat notificationChannelCompat2 = builder.a;
        notificationChannelCompat2.f1433g = uri;
        notificationChannelCompat2.f1434h = build;
    }

    public static /* synthetic */ void configureCallChannel$default(NotificationChannels notificationChannels, Context context, NotificationChannelCompat notificationChannelCompat, NotificationChannelCompat.Builder builder, CallRingtone callRingtone, int i5, Object obj) {
        if ((i5 & 8) != 0) {
            callRingtone = CallRingtone.Default;
        }
        notificationChannels.configureCallChannel(context, notificationChannelCompat, builder, callRingtone);
    }

    private final void configureMediaChannel(NotificationChannelCompat legacyChannel, NotificationChannelCompat.Builder builder) {
        boolean z5 = legacyChannel != null ? legacyChannel.f1432f : false;
        NotificationChannelCompat notificationChannelCompat = builder.a;
        notificationChannelCompat.f1432f = z5;
        notificationChannelCompat.k = legacyChannel != null ? legacyChannel.k : false;
        notificationChannelCompat.f1435i = legacyChannel != null ? legacyChannel.f1435i : false;
    }

    private final List<n> createNotificationChannelGroups(Context context, Map<String, String> localizedGroupNames) {
        n nVar;
        String str;
        ChannelGroup[] values = ChannelGroup.values();
        ArrayList arrayList = new ArrayList(values.length);
        for (ChannelGroup channelGroup : values) {
            if (!localizedGroupNames.containsKey(channelGroup.getId()) || (str = localizedGroupNames.get(channelGroup.getId())) == null || StringsKt.K(str)) {
                nVar = new n(channelGroup.getGroupId());
                ChannelGroup.Companion companion = ChannelGroup.INSTANCE;
                nVar.f20204b = companion.defaultLabel(channelGroup.getId());
                nVar.f20205c = companion.defaultLabel(channelGroup.getId());
            } else {
                nVar = new n(channelGroup.getGroupId());
                nVar.f20204b = localizedGroupNames.get(channelGroup.getId());
                nVar.f20205c = localizedGroupNames.get(channelGroup.getId());
            }
            arrayList.add(nVar);
        }
        NotificationManagerUtilsKt.getNotificationManagerCompat(context).a(arrayList);
        return arrayList;
    }

    private final boolean createNotificationChannelsCompatSafely(NotificationManagerCompat notificationManagerCompat, List<? extends NotificationChannelCompat> list, List<? extends n> list2) {
        String str;
        try {
            notificationManagerCompat.b(list);
            return true;
        } catch (Exception e9) {
            CrashReporting crashReporting = CrashReporting.INSTANCE;
            int a = u0.a(d0.l(list2, 10));
            if (a < 16) {
                a = 16;
            }
            LinkedHashMap linkedHashMap = new LinkedHashMap(a);
            Iterator<T> it = list2.iterator();
            while (true) {
                boolean z5 = false;
                if (!it.hasNext()) {
                    CrashReporting.addBreadcrumb$default(crashReporting, "Failed to create notification group or channel", linkedHashMap, null, null, false, 28, null);
                    CrashReporting.captureException$default(CrashReporting.INSTANCE, e9, false, 2, null);
                    return false;
                }
                n nVar = (n) it.next();
                CharSequence charSequence = nVar.f20204b;
                if (charSequence == null || (str = charSequence.toString()) == null) {
                    str = "";
                }
                if (notificationManagerCompat.d(nVar.a) != null) {
                    z5 = true;
                }
                linkedHashMap.put(str, String.valueOf(z5));
            }
        }
    }

    private final boolean deleteNotificationChannelGroupSafely(NotificationManagerCompat notificationManagerCompat, String str) {
        try {
            if (Build.VERSION.SDK_INT >= 26) {
                k.i(notificationManagerCompat.f1480b, str);
                return true;
            }
            notificationManagerCompat.getClass();
            return true;
        } catch (SecurityException unused) {
            return false;
        } catch (Exception e9) {
            CrashReporting crashReporting = CrashReporting.INSTANCE;
            CrashReporting.addBreadcrumb$default(crashReporting, "Failed to delete notification channel group", e.u("groupId", str), null, null, false, 28, null);
            CrashReporting.captureException$default(crashReporting, e9, false, 2, null);
            return false;
        }
    }

    private final boolean deleteNotificationChannelSafely(NotificationManagerCompat notificationManagerCompat, String str) {
        try {
            if (Build.VERSION.SDK_INT >= 26) {
                k.h(notificationManagerCompat.f1480b, str);
                return true;
            }
            notificationManagerCompat.getClass();
            return true;
        } catch (SecurityException unused) {
            return false;
        } catch (Exception e9) {
            CrashReporting crashReporting = CrashReporting.INSTANCE;
            CrashReporting.addBreadcrumb$default(crashReporting, "Failed to delete notification channel", e.u("channelId", str), null, null, false, 28, null);
            CrashReporting.captureException$default(crashReporting, e9, false, 2, null);
            return false;
        }
    }

    private final NotificationChannelCompat getAndDeleteLegacyNotificationChannel(Category category, Context context) {
        NotificationChannelCompat c6;
        try {
            if (category.getLegacyId() == null || (c6 = NotificationManagerUtilsKt.getNotificationManagerCompat(context).c(category.getLegacyId())) == null) {
                return null;
            }
            NotificationManagerCompat notificationManagerCompat = NotificationManagerUtilsKt.getNotificationManagerCompat(context);
            String legacyId = category.getLegacyId();
            if (Build.VERSION.SDK_INT >= 26) {
                k.h(notificationManagerCompat.f1480b, legacyId);
                return c6;
            }
            notificationManagerCompat.getClass();
            return c6;
        } catch (Exception unused) {
            return null;
        }
    }

    private final NotificationChannelCompat getCallChannel(Context context) {
        for (NotificationChannelCompat notificationChannelCompat : NotificationManagerUtilsKt.getNotificationManagerCompat(context).f()) {
            String str = notificationChannelCompat.a;
            Intrinsics.checkNotNullExpressionValue(str, "getId(...)");
            if (x.o(str, BASE_CALL_CHANNEL_ID, false)) {
                return notificationChannelCompat;
            }
        }
        return null;
    }

    private final String getCallChannelId(Context context) {
        String str;
        NotificationChannelCompat callChannel = getCallChannel(context);
        return (callChannel == null || (str = callChannel.a) == null) ? BASE_CALL_CHANNEL_ID : str;
    }

    private final String getChannelId(CallRingtone callRingtone) {
        return WhenMappings.$EnumSwitchMapping$0[callRingtone.ordinal()] == 1 ? e.k("calls_", CallRingtone.Default.getId()) : e.k("calls_", callRingtone.getId());
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit init$lambda$1$lambda$0(Category category, Context context, NotificationChannelCompat notificationChannelCompat, NotificationChannelCompat.Builder builder) {
        Intrinsics.checkNotNullParameter(builder, "builder");
        int i5 = WhenMappings.$EnumSwitchMapping$1[category.ordinal()];
        if (i5 == 1) {
            configureCallChannel$default(INSTANCE, context, notificationChannelCompat, builder, null, 8, null);
        } else if (i5 == 2) {
            INSTANCE.configureMediaChannel(notificationChannelCompat, builder);
        }
        return Unit.a;
    }

    private final NotificationChannelCompat migrateOrCreateNotificationChannel(Context context, Category category, int brandColor, Map<String, String> localizedCategoryNames, Function2<? super NotificationChannelCompat, ? super NotificationChannelCompat.Builder, Unit> onConfigure) {
        NotificationChannelCompat andDeleteLegacyNotificationChannel = getAndDeleteLegacyNotificationChannel(category, context);
        if (!localizedCategoryNames.containsKey(category.getId())) {
            deleteNotificationChannelSafely(NotificationManagerUtilsKt.getNotificationManagerCompat(context), category.getId());
            return null;
        }
        String str = localizedCategoryNames.get(category.getId());
        String defaultLabel = (str == null || StringsKt.K(str)) ? Category.INSTANCE.defaultLabel(category) : localizedCategoryNames.get(category.getId());
        NotificationChannelCompat.Builder builder = new NotificationChannelCompat.Builder(WhenMappings.$EnumSwitchMapping$1[category.ordinal()] == 1 ? getCallChannelId(context) : category.getId(), category.getImportance());
        NotificationChannelCompat notificationChannelCompat = builder.a;
        notificationChannelCompat.f1428b = defaultLabel;
        notificationChannelCompat.f1430d = defaultLabel;
        notificationChannelCompat.f1431e = category.getGroup().getGroupId();
        notificationChannelCompat.f1432f = andDeleteLegacyNotificationChannel != null ? andDeleteLegacyNotificationChannel.f1432f : true;
        notificationChannelCompat.k = andDeleteLegacyNotificationChannel != null ? andDeleteLegacyNotificationChannel.k : true;
        notificationChannelCompat.f1435i = andDeleteLegacyNotificationChannel != null ? andDeleteLegacyNotificationChannel.f1435i : true;
        notificationChannelCompat.j = brandColor;
        Intrinsics.checkNotNull(builder);
        onConfigure.invoke(andDeleteLegacyNotificationChannel, builder);
        return notificationChannelCompat;
    }

    public static /* synthetic */ NotificationChannelCompat migrateOrCreateNotificationChannel$default(NotificationChannels notificationChannels, Context context, Category category, int i5, Map map, Function2 function2, int i6, Object obj) {
        if ((i6 & 16) != 0) {
            function2 = new com.discord.c(5);
        }
        return notificationChannels.migrateOrCreateNotificationChannel(context, category, i5, map, function2);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit migrateOrCreateNotificationChannel$lambda$13(NotificationChannelCompat notificationChannelCompat, NotificationChannelCompat.Builder builder) {
        Intrinsics.checkNotNullParameter(builder, "<unused var>");
        return Unit.a;
    }

    @NotNull
    public final String getNotificationChannelId(@NotNull NotificationData notificationData, @NotNull Context context, Map<Integer, String> map) {
        Category category;
        Intrinsics.checkNotNullParameter(notificationData, "<this>");
        Intrinsics.checkNotNullParameter(context, "context");
        String notifTypeId = notificationData.getNotifTypeId();
        Integer intOrNull = notifTypeId != null ? StringsKt.toIntOrNull(notifTypeId) : null;
        if (intOrNull != null && map != null) {
            String str = map.get(intOrNull);
            if (str != null) {
                return str;
            }
            map.isEmpty();
        }
        if (Intrinsics.areEqual(notificationData.getType(), NotificationData.TYPE_CALL_RING) || Intrinsics.areEqual(notificationData.getType(), NotificationData.TYPE_CALL_RING_END)) {
            return getCallChannelId(context);
        }
        if (Intrinsics.areEqual(notificationData.getType(), NotificationData.TYPE_LOCAL_NOTIFICATION)) {
            return Category.SystemMessages.getId();
        }
        if ((intOrNull != null && intOrNull.intValue() == 13) || ((intOrNull != null && intOrNull.intValue() == 6) || ((intOrNull != null && intOrNull.intValue() == 16) || (intOrNull != null && intOrNull.intValue() == 4)))) {
            category = Category.Social;
        } else if (intOrNull != null && intOrNull.intValue() == 15) {
            category = Category.Polls;
        } else if (intOrNull != null && intOrNull.intValue() == 23) {
            category = Category.Reactions;
        } else if (intOrNull != null && intOrNull.intValue() == 7) {
            category = Category.StageStart;
        } else if (intOrNull != null && intOrNull.intValue() == 9) {
            category = Category.ForumThreadCreated;
        } else if (intOrNull != null && intOrNull.intValue() == 3) {
            category = Category.FriendRequests;
        } else if (intOrNull != null && intOrNull.intValue() == 8) {
            category = Category.GuildEventStart;
        } else if (intOrNull != null && intOrNull.intValue() == 1) {
            Integer channelType = notificationData.getChannelType();
            category = ((channelType != null && channelType.intValue() == 3) || (channelType != null && channelType.intValue() == 1)) ? Category.MessagesDirect : Category.Messages;
        } else {
            category = ((intOrNull != null && intOrNull.intValue() == 14) || (intOrNull != null && intOrNull.intValue() == 11) || (intOrNull != null && intOrNull.intValue() == 10)) ? Category.OtherServerNotifications : ((intOrNull != null && intOrNull.intValue() == 27) || (intOrNull != null && intOrNull.intValue() == 28)) ? Category.SystemMessages : Category.Other;
        }
        return category.getId();
    }

    @NotNull
    public final String getSilenceCallChannelId() {
        return Category.Social.getId();
    }

    public final void init(@NotNull final Context context, @NotNull Map<String, String> localizedCategoryNames, @NotNull Map<String, String> localizedGroupNames) {
        Intrinsics.checkNotNullParameter(context, "context");
        Intrinsics.checkNotNullParameter(localizedCategoryNames, "localizedCategoryNames");
        Intrinsics.checkNotNullParameter(localizedGroupNames, "localizedGroupNames");
        int colorCompat = ColorUtilsKt.getColorCompat(context, com.discord.theme.R.color.brand);
        List<n> createNotificationChannelGroups = createNotificationChannelGroups(context, localizedGroupNames);
        Category[] values = Category.values();
        ArrayList arrayList = new ArrayList();
        int length = values.length;
        int i5 = 0;
        while (i5 < length) {
            final Category category = values[i5];
            Context context2 = context;
            Map<String, String> map = localizedCategoryNames;
            NotificationChannelCompat migrateOrCreateNotificationChannel = INSTANCE.migrateOrCreateNotificationChannel(context2, category, colorCompat, map, new Function2() { // from class: com.discord.notifications.renderer.c
                @Override // kotlin.jvm.functions.Function2
                public final Object invoke(Object obj, Object obj2) {
                    Unit init$lambda$1$lambda$0;
                    init$lambda$1$lambda$0 = NotificationChannels.init$lambda$1$lambda$0(NotificationChannels.Category.this, context, (NotificationChannelCompat) obj, (NotificationChannelCompat.Builder) obj2);
                    return init$lambda$1$lambda$0;
                }
            });
            if (migrateOrCreateNotificationChannel != null) {
                arrayList.add(migrateOrCreateNotificationChannel);
            }
            i5++;
            context = context2;
            localizedCategoryNames = map;
        }
        createNotificationChannelsCompatSafely(NotificationManagerUtilsKt.getNotificationManagerCompat(context), arrayList, createNotificationChannelGroups);
    }

    public final void initNotificationGroupsAndChannels(@NotNull Context context, @NotNull List<ConfiguredNotifGroup> groups, @NotNull List<ConfiguredNotifChannel> channels) {
        String str;
        Intrinsics.checkNotNullParameter(context, "context");
        Intrinsics.checkNotNullParameter(groups, "groups");
        Intrinsics.checkNotNullParameter(channels, "channels");
        NotificationManagerCompat notificationManagerCompat = NotificationManagerUtilsKt.getNotificationManagerCompat(context);
        List<n> e9 = notificationManagerCompat.e();
        Intrinsics.checkNotNullExpressionValue(e9, "getNotificationChannelGroupsCompat(...)");
        List<NotificationChannelCompat> f2 = notificationManagerCompat.f();
        Intrinsics.checkNotNullExpressionValue(f2, "getNotificationChannelsCompat(...)");
        int colorCompat = ColorUtilsKt.getColorCompat(context, com.discord.theme.R.color.brand);
        List<n> createNotificationChannelGroups = createNotificationChannelGroups(context, groups);
        ArrayList arrayList = new ArrayList(d0.l(channels, 10));
        Iterator<T> it = channels.iterator();
        while (it.hasNext()) {
            arrayList.add(INSTANCE.migrateOrCreateNotificationChannel(context, colorCompat, (ConfiguredNotifChannel) it.next()));
        }
        boolean createNotificationChannelsCompatSafely = createNotificationChannelsCompatSafely(notificationManagerCompat, arrayList, createNotificationChannelGroups);
        LinkedHashSet linkedHashSet = new LinkedHashSet();
        Iterator it2 = arrayList.iterator();
        while (it2.hasNext()) {
            linkedHashSet.add(((NotificationChannelCompat) it2.next()).a);
        }
        LinkedHashSet linkedHashSet2 = new LinkedHashSet();
        Iterator<T> it3 = createNotificationChannelGroups.iterator();
        while (it3.hasNext()) {
            linkedHashSet2.add(((n) it3.next()).a);
        }
        int i5 = 0;
        int i6 = 0;
        int i10 = 0;
        int i11 = 0;
        int i12 = 0;
        for (NotificationChannelCompat notificationChannelCompat : f2) {
            String str2 = notificationChannelCompat.a;
            Intrinsics.checkNotNullExpressionValue(str2, "getId(...)");
            ChannelCleanupAction resolveChannelCleanupAction = NotificationChannelCleanupKt.resolveChannelCleanupAction(str2, notificationChannelCompat.f1437m, linkedHashSet);
            if (resolveChannelCleanupAction.getRetainsGroup() && (str = notificationChannelCompat.f1431e) != null) {
                linkedHashSet2.add(str);
            }
            int i13 = WhenMappings.$EnumSwitchMapping$2[resolveChannelCleanupAction.ordinal()];
            if (i13 == 1) {
                i5++;
            } else if (i13 == 2) {
                i6++;
            } else if (i13 == 3) {
                i10++;
            } else {
                if (i13 != 4) {
                    throw new fo.n();
                }
                String str3 = notificationChannelCompat.a;
                Intrinsics.checkNotNullExpressionValue(str3, "getId(...)");
                if (deleteNotificationChannelSafely(notificationManagerCompat, str3)) {
                    i12++;
                } else {
                    i11++;
                }
            }
        }
        int i14 = 0;
        int i15 = 0;
        for (n nVar : e9) {
            if (!linkedHashSet2.contains(nVar.a)) {
                String str4 = nVar.a;
                Intrinsics.checkNotNullExpressionValue(str4, "getId(...)");
                if (deleteNotificationChannelGroupSafely(notificationManagerCompat, str4)) {
                    i15++;
                } else {
                    i14++;
                }
            }
        }
        CrashReporting.addBreadcrumb$default(CrashReporting.INSTANCE, "Completed initNotificationGroupsAndChannels", v0.g(new Pair("created", Boolean.valueOf(createNotificationChannelsCompatSafely)), new Pair("existingKeptChannels", Integer.valueOf(i5)), new Pair("allowedChannels", Integer.valueOf(i6)), new Pair("preservedConversationChannels", Integer.valueOf(i10)), new Pair("deletedGroups", Integer.valueOf(i15)), new Pair("deletedChannels", Integer.valueOf(i12)), new Pair("erroredGroups", Integer.valueOf(i14)), new Pair("erroredChannels", Integer.valueOf(i11))), null, null, false, 28, null);
    }

    public final void setIncomingRingtone(@NotNull Context context, @NotNull String name) {
        Intrinsics.checkNotNullParameter(context, "context");
        Intrinsics.checkNotNullParameter(name, "name");
        if (Build.VERSION.SDK_INT < 26) {
            return;
        }
        ArrayList arrayList = new ArrayList();
        CallRingtone fromName = CallRingtone.INSTANCE.fromName(name);
        for (NotificationChannelCompat notificationChannelCompat : NotificationManagerUtilsKt.getNotificationManagerCompat(context).f()) {
            String str = notificationChannelCompat.a;
            Intrinsics.checkNotNullExpressionValue(str, "getId(...)");
            if (x.o(str, BASE_CALL_CHANNEL_ID, false)) {
                Intrinsics.checkNotNull(notificationChannelCompat);
                arrayList.add(notificationChannelCompat);
            }
        }
        if (arrayList.isEmpty()) {
            return;
        }
        NotificationChannelCompat notificationChannelCompat2 = (NotificationChannelCompat) arrayList.get(0);
        int colorCompat = ColorUtilsKt.getColorCompat(context, com.discord.theme.R.color.brand);
        NotificationChannelCompat.Builder builder = new NotificationChannelCompat.Builder(getChannelId(fromName), notificationChannelCompat2.f1429c);
        CharSequence charSequence = notificationChannelCompat2.f1428b;
        String obj = charSequence != null ? charSequence.toString() : null;
        NotificationChannelCompat notificationChannelCompat3 = builder.a;
        notificationChannelCompat3.f1428b = obj;
        CharSequence charSequence2 = notificationChannelCompat2.f1428b;
        notificationChannelCompat3.f1430d = charSequence2 != null ? charSequence2.toString() : null;
        notificationChannelCompat3.f1431e = Category.Calls.getGroup().getGroupId();
        notificationChannelCompat3.k = notificationChannelCompat2.k;
        notificationChannelCompat3.f1435i = notificationChannelCompat2.f1435i;
        notificationChannelCompat3.j = colorCompat;
        NotificationChannels notificationChannels = INSTANCE;
        Intrinsics.checkNotNull(builder);
        notificationChannels.configureCallChannel(context, notificationChannelCompat2, builder, fromName);
        Intrinsics.checkNotNullExpressionValue(notificationChannelCompat3, "build(...)");
        Iterator it = arrayList.iterator();
        while (it.hasNext()) {
            NotificationChannelCompat notificationChannelCompat4 = (NotificationChannelCompat) it.next();
            NotificationManagerCompat notificationManagerCompat = NotificationManagerUtilsKt.getNotificationManagerCompat(context);
            String str2 = notificationChannelCompat4.a;
            Intrinsics.checkNotNullExpressionValue(str2, "getId(...)");
            deleteNotificationChannelSafely(notificationManagerCompat, str2);
        }
        NotificationManagerUtilsKt.getNotificationManagerCompat(context).b(b0.c(notificationChannelCompat3));
    }

    /* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
    /* JADX WARN: Unknown enum class pattern. Please report as an issue! */
    @Metadata(d1 = {"\u0000\u001e\n\u0002\u0018\u0002\n\u0002\u0010\u0010\n\u0000\n\u0002\u0010\u000e\n\u0000\n\u0002\u0010\b\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u001d\b\u0082\u0081\u0002\u0018\u0000 #2\b\u0012\u0004\u0012\u00020\u00000\u0001:\u0001#B-\b\u0002\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005\u0012\u0006\u0010\u0006\u001a\u00020\u0007\u0012\n\b\u0002\u0010\b\u001a\u0004\u0018\u00010\u0003¢\u0006\u0004\b\t\u0010\nR\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u000b\u0010\fR\u0011\u0010\u0004\u001a\u00020\u0005¢\u0006\b\n\u0000\u001a\u0004\b\r\u0010\u000eR\u0011\u0010\u0006\u001a\u00020\u0007¢\u0006\b\n\u0000\u001a\u0004\b\u000f\u0010\u0010R\u0013\u0010\b\u001a\u0004\u0018\u00010\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0011\u0010\fj\u0002\b\u0012j\u0002\b\u0013j\u0002\b\u0014j\u0002\b\u0015j\u0002\b\u0016j\u0002\b\u0017j\u0002\b\u0018j\u0002\b\u0019j\u0002\b\u001aj\u0002\b\u001bj\u0002\b\u001cj\u0002\b\u001dj\u0002\b\u001ej\u0002\b\u001fj\u0002\b j\u0002\b!j\u0002\b\"¨\u0006$"}, d2 = {"Lcom/discord/notifications/renderer/NotificationChannels$Category;", "", StackTraceHelper.ID_KEY, "", "importance", "", "group", "Lcom/discord/notifications/renderer/NotificationChannels$ChannelGroup;", "legacyId", "<init>", "(Ljava/lang/String;ILjava/lang/String;ILcom/discord/notifications/renderer/NotificationChannels$ChannelGroup;Ljava/lang/String;)V", "getId", "()Ljava/lang/String;", "getImportance", "()I", "getGroup", "()Lcom/discord/notifications/renderer/NotificationChannels$ChannelGroup;", "getLegacyId", "Calls", "MediaConnections", "GameDetection", "MessagesDirect", "FriendRequests", "Reactions", "Polls", "Social", "ForumThreadCreated", "GuildEventStart", "GuildHighlights", "Messages", "OtherServerNotifications", "StageStart", "Other", "SystemMessages", "OtherHighPriority", "Companion", "notification_renderer_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final class Category {
        private static final /* synthetic */ EnumEntries $ENTRIES;
        private static final /* synthetic */ Category[] $VALUES;
        public static final Category Calls;

        /* renamed from: Companion, reason: from kotlin metadata */
        @NotNull
        public static final Companion INSTANCE;
        public static final Category ForumThreadCreated;
        public static final Category FriendRequests;
        public static final Category GameDetection;
        public static final Category GuildEventStart;
        public static final Category GuildHighlights;
        public static final Category MediaConnections;
        public static final Category Messages;
        public static final Category MessagesDirect;
        public static final Category Other;
        public static final Category OtherHighPriority;
        public static final Category OtherServerNotifications;
        public static final Category Polls;
        public static final Category Reactions;
        public static final Category Social;
        public static final Category StageStart;
        public static final Category SystemMessages;

        @NotNull
        private final ChannelGroup group;

        @NotNull
        private final String id;
        private final int importance;
        private final String legacyId;

        @Metadata(d1 = {"\u0000\u0018\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\u000e\n\u0000\n\u0002\u0018\u0002\n\u0000\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\u000e\u0010\u0004\u001a\u00020\u00052\u0006\u0010\u0006\u001a\u00020\u0007¨\u0006\b"}, d2 = {"Lcom/discord/notifications/renderer/NotificationChannels$Category$Companion;", "", "<init>", "()V", "defaultLabel", "", "category", "Lcom/discord/notifications/renderer/NotificationChannels$Category;", "notification_renderer_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
        public static final class Companion {

            @Metadata(k = 3, mv = {2, 1, 0}, xi = 48)
            public /* synthetic */ class WhenMappings {
                public static final /* synthetic */ int[] $EnumSwitchMapping$0;

                static {
                    int[] iArr = new int[Category.values().length];
                    try {
                        iArr[Category.Calls.ordinal()] = 1;
                    } catch (NoSuchFieldError unused) {
                    }
                    try {
                        iArr[Category.MediaConnections.ordinal()] = 2;
                    } catch (NoSuchFieldError unused2) {
                    }
                    try {
                        iArr[Category.Messages.ordinal()] = 3;
                    } catch (NoSuchFieldError unused3) {
                    }
                    try {
                        iArr[Category.MessagesDirect.ordinal()] = 4;
                    } catch (NoSuchFieldError unused4) {
                    }
                    try {
                        iArr[Category.FriendRequests.ordinal()] = 5;
                    } catch (NoSuchFieldError unused5) {
                    }
                    try {
                        iArr[Category.Polls.ordinal()] = 6;
                    } catch (NoSuchFieldError unused6) {
                    }
                    try {
                        iArr[Category.Social.ordinal()] = 7;
                    } catch (NoSuchFieldError unused7) {
                    }
                    try {
                        iArr[Category.GameDetection.ordinal()] = 8;
                    } catch (NoSuchFieldError unused8) {
                    }
                    try {
                        iArr[Category.StageStart.ordinal()] = 9;
                    } catch (NoSuchFieldError unused9) {
                    }
                    try {
                        iArr[Category.SystemMessages.ordinal()] = 10;
                    } catch (NoSuchFieldError unused10) {
                    }
                    try {
                        iArr[Category.ForumThreadCreated.ordinal()] = 11;
                    } catch (NoSuchFieldError unused11) {
                    }
                    try {
                        iArr[Category.GuildEventStart.ordinal()] = 12;
                    } catch (NoSuchFieldError unused12) {
                    }
                    try {
                        iArr[Category.GuildHighlights.ordinal()] = 13;
                    } catch (NoSuchFieldError unused13) {
                    }
                    try {
                        iArr[Category.OtherServerNotifications.ordinal()] = 14;
                    } catch (NoSuchFieldError unused14) {
                    }
                    try {
                        iArr[Category.Reactions.ordinal()] = 15;
                    } catch (NoSuchFieldError unused15) {
                    }
                    $EnumSwitchMapping$0 = iArr;
                }
            }

            public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
                this();
            }

            @NotNull
            public final String defaultLabel(@NotNull Category category) {
                Intrinsics.checkNotNullParameter(category, "category");
                switch (WhenMappings.$EnumSwitchMapping$0[category.ordinal()]) {
                    case 1:
                        return "Incoming calls";
                    case 2:
                        return NotificationChannels.MEDIA_CONNECTIONS_DEFAULT_NAME;
                    case 3:
                        return "Messages";
                    case 4:
                        return "Direct messages";
                    case 5:
                        return "Friend requests";
                    case 6:
                        return "Polls";
                    case 7:
                        return "Social";
                    case 8:
                        return "Game detection";
                    case 9:
                        return "Stage notifications";
                    case 10:
                        return "Discord system messages";
                    case 11:
                        return "Forum notifications";
                    case 12:
                        return "Event notifications";
                    case 13:
                        return "Server highlights";
                    case 14:
                        return "Other server notifications";
                    case 15:
                        return "Reactions";
                    default:
                        return "Other";
                }
            }

            private Companion() {
            }
        }

        private static final /* synthetic */ Category[] $values() {
            return new Category[]{Calls, MediaConnections, GameDetection, MessagesDirect, FriendRequests, Reactions, Polls, Social, ForumThreadCreated, GuildEventStart, GuildHighlights, Messages, OtherServerNotifications, StageStart, Other, SystemMessages, OtherHighPriority};
        }

        static {
            ChannelGroup channelGroup = ChannelGroup.Realtime;
            Calls = new Category("Calls", 0, NotificationChannels.BASE_CALL_CHANNEL_ID, 4, channelGroup, "Calls");
            MediaConnections = new Category("MediaConnections", 1, NotificationChannels.MEDIA_CONNECTIONS_CHANNEL_ID, 3, channelGroup, "Media Connections");
            GameDetection = new Category("GameDetection", 2, "gameDetection", 1, channelGroup, "Game Detection");
            ChannelGroup channelGroup2 = ChannelGroup.Social;
            MessagesDirect = new Category("MessagesDirect", 3, "directMessages", 4, channelGroup2, "DirectMessages");
            String str = null;
            FriendRequests = new Category("FriendRequests", 4, "friendRequests", 4, channelGroup2, null);
            int i5 = 8;
            DefaultConstructorMarker defaultConstructorMarker = null;
            int i6 = 3;
            Reactions = new Category("Reactions", 5, "reactions", i6, channelGroup2, str, i5, defaultConstructorMarker);
            Polls = new Category("Polls", 6, "polls", i6, channelGroup2, str, i5, defaultConstructorMarker);
            Social = new Category("Social", 7, "social", 2, channelGroup2, "Social");
            ChannelGroup channelGroup3 = ChannelGroup.Server;
            ForumThreadCreated = new Category("ForumThreadCreated", 8, "forumThreadCreated", 4, channelGroup3, "Forum Post Create");
            GuildEventStart = new Category("GuildEventStart", 9, "guildEventLive", 4, channelGroup3, "Guild Event Live");
            GuildHighlights = new Category("GuildHighlights", 10, "guildHighlights", 4, channelGroup3, null);
            Messages = new Category("Messages", 11, "messages", 4, channelGroup3, "Messages");
            OtherServerNotifications = new Category("OtherServerNotifications", 12, JankRecordStore.SCREEN_OTHER, 2, channelGroup3, "General");
            StageStart = new Category("StageStart", 13, "stageLive", 4, channelGroup3, "Stage Live");
            ChannelGroup channelGroup4 = ChannelGroup.Other;
            Other = new Category("Other", 14, "default", 2, channelGroup4, null);
            SystemMessages = new Category("SystemMessages", 15, "systemMessages", 4, channelGroup4, null);
            OtherHighPriority = new Category("OtherHighPriority", 16, "otherHighPriority", 4, channelGroup4, "GeneralHigh");
            Category[] $values = $values();
            $VALUES = $values;
            $ENTRIES = ki.b.p($values);
            INSTANCE = new Companion(null);
        }

        private Category(String str, int i5, String str2, int i6, ChannelGroup channelGroup, String str3) {
            this.id = str2;
            this.importance = i6;
            this.group = channelGroup;
            this.legacyId = str3;
        }

        @NotNull
        public static EnumEntries getEntries() {
            return $ENTRIES;
        }

        public static Category valueOf(String str) {
            return (Category) Enum.valueOf(Category.class, str);
        }

        public static Category[] values() {
            return (Category[]) $VALUES.clone();
        }

        @NotNull
        public final ChannelGroup getGroup() {
            return this.group;
        }

        @NotNull
        public final String getId() {
            return this.id;
        }

        public final int getImportance() {
            return this.importance;
        }

        public final String getLegacyId() {
            return this.legacyId;
        }

        public /* synthetic */ Category(String str, int i5, String str2, int i6, ChannelGroup channelGroup, String str3, int i10, DefaultConstructorMarker defaultConstructorMarker) {
            this(str, i5, str2, i6, channelGroup, (i10 & 8) != 0 ? null : str3);
        }
    }

    private final List<n> createNotificationChannelGroups(Context context, List<ConfiguredNotifGroup> groups) {
        ArrayList arrayList = new ArrayList(d0.l(groups, 10));
        for (ConfiguredNotifGroup configuredNotifGroup : groups) {
            n nVar = new n(configuredNotifGroup.getId());
            nVar.f20204b = configuredNotifGroup.getName();
            nVar.f20205c = configuredNotifGroup.getDescription();
            arrayList.add(nVar);
        }
        NotificationManagerUtilsKt.getNotificationManagerCompat(context).a(arrayList);
        return arrayList;
    }

    private final NotificationChannelCompat migrateOrCreateNotificationChannel(Context context, int brandColor, ConfiguredNotifChannel channel) {
        NotificationChannelCompat notificationChannelCompat;
        int importance;
        boolean badge;
        boolean vibrate;
        boolean lights;
        NotificationManagerCompat notificationManagerCompat = NotificationManagerUtilsKt.getNotificationManagerCompat(context);
        Iterator<T> it = channel.getAka().iterator();
        while (true) {
            if (!it.hasNext()) {
                notificationChannelCompat = null;
                break;
            }
            notificationChannelCompat = notificationManagerCompat.c((String) it.next());
            if (notificationChannelCompat != null) {
                break;
            }
        }
        String id2 = channel.getId();
        if (notificationChannelCompat != null) {
            importance = notificationChannelCompat.f1429c;
        } else {
            importance = channel.getImportance();
        }
        NotificationChannelCompat.Builder builder = new NotificationChannelCompat.Builder(id2, importance);
        String name = channel.getName();
        NotificationChannelCompat notificationChannelCompat2 = builder.a;
        notificationChannelCompat2.f1428b = name;
        notificationChannelCompat2.f1430d = channel.getDescription();
        notificationChannelCompat2.f1431e = channel.getGroupId();
        if (notificationChannelCompat != null) {
            badge = notificationChannelCompat.f1432f;
        } else {
            badge = channel.getBadge();
        }
        notificationChannelCompat2.f1432f = badge;
        if (notificationChannelCompat != null) {
            vibrate = notificationChannelCompat.k;
        } else {
            vibrate = channel.getVibrate();
        }
        notificationChannelCompat2.k = vibrate;
        if (notificationChannelCompat != null) {
            lights = notificationChannelCompat.f1435i;
        } else {
            lights = channel.getLights();
        }
        notificationChannelCompat2.f1435i = lights;
        notificationChannelCompat2.j = brandColor;
        String ringtone = channel.getRingtone();
        if (ringtone != null) {
            NotificationChannels notificationChannels = INSTANCE;
            Intrinsics.checkNotNull(builder);
            notificationChannels.configureCallChannel(context, notificationChannelCompat, builder, CallRingtone.INSTANCE.fromName(ringtone));
        }
        Intrinsics.checkNotNullExpressionValue(notificationChannelCompat2, "build(...)");
        return notificationChannelCompat2;
    }
}
