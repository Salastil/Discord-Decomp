package com.discord.notifications.react;

import androidx.core.app.NotificationChannelCompat;
import androidx.core.app.NotificationManagerCompat;
import bs.d;
import com.discord.codegen.NativeNotifSettingsModuleSpec;
import com.discord.notifications.api.ConfiguredNotifChannel;
import com.discord.notifications.api.ConfiguredNotifGroup;
import com.discord.notifications.api.NotifTypeMapping;
import com.discord.notifications.client.NotificationClient;
import com.discord.react.utilities.NativeMapExtensionsKt;
import com.discord.react.utilities.ReadableArrayDecoder;
import com.facebook.react.bridge.ReactApplicationContext;
import com.facebook.react.bridge.ReadableArray;
import com.facebook.react.bridge.WritableArray;
import com.facebook.react.bridge.WritableNativeArray;
import com.facebook.react.bridge.WritableNativeMap;
import java.util.LinkedHashMap;
import java.util.List;
import kotlin.Metadata;
import kotlin.collections.d0;
import kotlin.collections.u0;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.SourceDebugExtension;
import org.jetbrains.annotations.NotNull;
import x0.n;

@Metadata(d1 = {"\u0000&\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0004\u0018\u00002\u00020\u0001B\u000f\u0012\u0006\u0010\u0002\u001a\u00020\u0003¢\u0006\u0004\b\u0004\u0010\u0005J\b\u0010\u0006\u001a\u00020\u0007H\u0016J\u0018\u0010\b\u001a\u00020\t2\u0006\u0010\n\u001a\u00020\u000b2\u0006\u0010\f\u001a\u00020\u000bH\u0016J\u0010\u0010\r\u001a\u00020\t2\u0006\u0010\u000e\u001a\u00020\u000bH\u0016¨\u0006\u000f"}, d2 = {"Lcom/discord/notifications/react/NotifSettingsModule;", "Lcom/discord/codegen/NativeNotifSettingsModuleSpec;", "reactContext", "Lcom/facebook/react/bridge/ReactApplicationContext;", "<init>", "(Lcom/facebook/react/bridge/ReactApplicationContext;)V", "getAndroidNotifChannelStates", "Lcom/facebook/react/bridge/WritableArray;", "registerAndroidNotifGroupsAndChannels", "", "groups", "Lcom/facebook/react/bridge/ReadableArray;", "channels", "registerAndroidNotifTypeMappings", "mappings", "notification_react_androidRelease"}, k = 1, mv = {2, 1, 0}, xi = 48)
@SourceDebugExtension({"SMAP\nNotifSettingsModule.kt\nKotlin\n*S Kotlin\n*F\n+ 1 NotifSettingsModule.kt\ncom/discord/notifications/react/NotifSettingsModule\n+ 2 _Collections.kt\nkotlin/collections/CollectionsKt___CollectionsKt\n+ 3 WritableBuilders.kt\ncom/discord/react/utilities/WritableBuildersKt\n+ 4 Serde.kt\ncom/discord/react/utilities/SerdeKt\n*L\n1#1,55:1\n1208#2,2:56\n1236#2,4:58\n14#3:62\n8#3,9:63\n20#3,3:72\n18#3:75\n68#4,6:76\n68#4,6:82\n68#4,6:88\n*S KotlinDebug\n*F\n+ 1 NotifSettingsModule.kt\ncom/discord/notifications/react/NotifSettingsModule\n*L\n19#1:56,2\n19#1:58,4\n22#1:62\n22#1:63,9\n23#1:72,3\n22#1:75\n43#1:76,6\n44#1:82,6\n51#1:88,6\n*E\n"})
/* loaded from: classes.dex */
public final class NotifSettingsModule extends NativeNotifSettingsModuleSpec {
    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public NotifSettingsModule(@NotNull ReactApplicationContext reactContext) {
        super(reactContext);
        Intrinsics.checkNotNullParameter(reactContext, "reactContext");
    }

    @Override // com.discord.codegen.NativeNotifSettingsModuleSpec
    @NotNull
    public WritableArray getAndroidNotifChannelStates() {
        NotificationManagerCompat notificationManagerCompat = new NotificationManagerCompat(getReactApplicationContext());
        Intrinsics.checkNotNullExpressionValue(notificationManagerCompat, "from(...)");
        List e9 = notificationManagerCompat.e();
        Intrinsics.checkNotNullExpressionValue(e9, "getNotificationChannelGroupsCompat(...)");
        int a = u0.a(d0.l(e9, 10));
        if (a < 16) {
            a = 16;
        }
        LinkedHashMap linkedHashMap = new LinkedHashMap(a);
        for (Object obj : e9) {
            linkedHashMap.put(((n) obj).a, obj);
        }
        List<NotificationChannelCompat> f2 = notificationManagerCompat.f();
        Intrinsics.checkNotNullExpressionValue(f2, "getNotificationChannelsCompat(...)");
        WritableNativeArray writableNativeArray = new WritableNativeArray();
        for (NotificationChannelCompat notificationChannelCompat : f2) {
            WritableNativeMap writableNativeMap = new WritableNativeMap();
            NativeMapExtensionsKt.put(writableNativeMap, "channelId", notificationChannelCompat.a);
            n nVar = (n) linkedHashMap.get(notificationChannelCompat.f1431e);
            NativeMapExtensionsKt.put(writableNativeMap, "importance", Integer.valueOf((nVar == null || nVar.f20206d) ? 0 : notificationChannelCompat.f1429c));
            writableNativeArray.pushMap(writableNativeMap);
        }
        return writableNativeArray;
    }

    @Override // com.discord.codegen.NativeNotifSettingsModuleSpec
    public void registerAndroidNotifGroupsAndChannels(@NotNull ReadableArray groups, @NotNull ReadableArray channels) {
        Intrinsics.checkNotNullParameter(groups, "groups");
        Intrinsics.checkNotNullParameter(channels, "channels");
        NotificationClient companion = NotificationClient.INSTANCE.getInstance();
        ReactApplicationContext reactApplicationContext = getReactApplicationContext();
        Intrinsics.checkNotNullExpressionValue(reactApplicationContext, "getReactApplicationContext(...)");
        boolean z5 = false;
        int i5 = 2;
        DefaultConstructorMarker defaultConstructorMarker = null;
        companion.initNotificationGroupsAndChannels(reactApplicationContext, (List) new ReadableArrayDecoder(groups, z5, i5, defaultConstructorMarker).decodeSerializableValue(new d(ConfiguredNotifGroup.INSTANCE.serializer(), 0)), (List) new ReadableArrayDecoder(channels, z5, i5, defaultConstructorMarker).decodeSerializableValue(new d(ConfiguredNotifChannel.INSTANCE.serializer(), 0)));
    }

    @Override // com.discord.codegen.NativeNotifSettingsModuleSpec
    public void registerAndroidNotifTypeMappings(@NotNull ReadableArray mappings) {
        Intrinsics.checkNotNullParameter(mappings, "mappings");
        NotificationClient companion = NotificationClient.INSTANCE.getInstance();
        ReactApplicationContext reactApplicationContext = getReactApplicationContext();
        Intrinsics.checkNotNullExpressionValue(reactApplicationContext, "getReactApplicationContext(...)");
        companion.initNotificationTypeMappings(reactApplicationContext, (List) new ReadableArrayDecoder(mappings, false, 2, null).decodeSerializableValue(new d(NotifTypeMapping.INSTANCE.serializer(), 0)));
    }
}
