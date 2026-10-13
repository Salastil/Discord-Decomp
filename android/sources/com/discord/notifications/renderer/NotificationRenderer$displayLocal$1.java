package com.discord.notifications.renderer;

import android.content.Context;
import androidx.core.app.NotificationCompat$Builder;
import com.discord.notifications.api.NotificationData;
import com.discord.notifications.api.NotificationDataDeserializationUtilsKt;
import com.discord.notifications.renderer.utils.NotificationDataUtilsKt;
import com.discord.notifications.renderer.utils.NotificationManagerUtilsKt;
import com.discord.theme.utils.ColorUtilsKt;
import java.util.LinkedHashMap;
import java.util.Map;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.collections.v0;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.SourceDebugExtension;
import kotlinx.coroutines.CoroutineScope;
import lo.d;
import lo.h;

@Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 1, 0}, xi = 48)
@d(c = "com.discord.notifications.renderer.NotificationRenderer$displayLocal$1", f = "NotificationRenderer.kt", l = {}, m = "invokeSuspend")
@SourceDebugExtension({"SMAP\nNotificationRenderer.kt\nKotlin\n*S Kotlin\n*F\n+ 1 NotificationRenderer.kt\ncom/discord/notifications/renderer/NotificationRenderer$displayLocal$1\n+ 2 _Maps.kt\nkotlin/collections/MapsKt___MapsKt\n*L\n1#1,506:1\n216#2,2:507\n*S KotlinDebug\n*F\n+ 1 NotificationRenderer.kt\ncom/discord/notifications/renderer/NotificationRenderer$displayLocal$1\n*L\n252#1:507,2\n*E\n"})
/* loaded from: classes.dex */
public final class NotificationRenderer$displayLocal$1 extends h implements Function2<CoroutineScope, Continuation, Object> {
    final /* synthetic */ Context $context;
    final /* synthetic */ Map<String, Object> $notification;
    int label;
    final /* synthetic */ NotificationRenderer this$0;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public NotificationRenderer$displayLocal$1(Map<String, ? extends Object> map, Context context, NotificationRenderer notificationRenderer, Continuation continuation) {
        super(2, continuation);
        this.$notification = map;
        this.$context = context;
        this.this$0 = notificationRenderer;
    }

    @Override // lo.a
    public final Continuation create(Object obj, Continuation continuation) {
        return new NotificationRenderer$displayLocal$1(this.$notification, this.$context, this.this$0, continuation);
    }

    @Override // lo.a
    public final Object invokeSuspend(Object obj) {
        Function1 function1;
        ko.a aVar = ko.a.f13464d;
        if (this.label != 0) {
            throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
        }
        ki.b.R(obj);
        NotificationData localNotificationData = NotificationDataDeserializationUtilsKt.localNotificationData(NotificationData.INSTANCE, this.$notification);
        LinkedHashMap o6 = v0.o(localNotificationData.getUserInfo());
        for (Map.Entry<String, Object> entry : this.$notification.entrySet()) {
            String key = entry.getKey();
            Object value = entry.getValue();
            if (value instanceof String) {
                o6.put(key, value);
            }
        }
        Context context = this.$context;
        NotificationChannels notificationChannels = NotificationChannels.INSTANCE;
        function1 = this.this$0.getNotifTypeMappings;
        NotificationCompat$Builder notificationCompat$Builder = new NotificationCompat$Builder(context, notificationChannels.getNotificationChannelId(localNotificationData, context, (Map) function1.invoke(this.$context)));
        notificationCompat$Builder.N.icon = NotificationDataUtilsKt.getSmallIcon(localNotificationData);
        notificationCompat$Builder.D = ColorUtilsKt.getColorCompat(this.$context, com.discord.theme.R.color.brand_500);
        notificationCompat$Builder.B = NotificationDataUtilsKt.getNotificationCategory(localNotificationData);
        notificationCompat$Builder.f1450e = NotificationCompat$Builder.e(localNotificationData.getTitle());
        notificationCompat$Builder.f1451f = NotificationCompat$Builder.e(localNotificationData.getSubtitle());
        notificationCompat$Builder.f1465v = NotificationDataUtilsKt.getGroupKey(localNotificationData);
        notificationCompat$Builder.O = localNotificationData.getSilent();
        notificationCompat$Builder.f1456m = 0;
        notificationCompat$Builder.f1453h = NotificationDataUtilsKt.getContentPendingIntent(localNotificationData, this.$context, o6);
        notificationCompat$Builder.g(16, true);
        Intrinsics.checkNotNullExpressionValue(notificationCompat$Builder, "setAutoCancel(...)");
        NotificationManagerUtilsKt.notify$default(NotificationManagerUtilsKt.getNotificationManagerCompat(this.$context), NotificationDataUtilsKt.getTag(localNotificationData), notificationCompat$Builder, 0, 4, null);
        return Unit.a;
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(CoroutineScope coroutineScope, Continuation continuation) {
        return ((NotificationRenderer$displayLocal$1) create(coroutineScope, continuation)).invokeSuspend(Unit.a);
    }
}
