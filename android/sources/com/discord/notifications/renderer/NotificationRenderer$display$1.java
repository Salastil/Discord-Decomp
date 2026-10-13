package com.discord.notifications.renderer;

import android.app.KeyguardManager;
import android.app.Notification;
import android.app.PendingIntent;
import android.content.Context;
import android.graphics.Bitmap;
import android.net.Uri;
import android.os.Build;
import android.os.PowerManager;
import androidx.core.app.NotificationCompat$Action;
import androidx.core.app.NotificationCompat$Builder;
import androidx.core.app.NotificationCompat$MessagingStyle;
import androidx.core.app.Person;
import com.discord.device.utils.IsMetaQuestKt;
import com.discord.image.fresco.FrescoFetchDecodedImageKt;
import com.discord.image.fresco.postprocessors.PostProcessor;
import com.discord.notifications.api.NotificationData;
import com.discord.notifications.renderer.utils.NotificationDataUtilsKt;
import com.discord.notifications.renderer.utils.NotificationImageCacheKt;
import com.discord.notifications.renderer.utils.NotificationManagerUtilsKt;
import com.discord.primitives.MessageId;
import com.discord.primitives.MessageIdSnowflake;
import com.discord.react_strings.I18nMessage;
import com.discord.react_strings.I18nUtilsKt;
import com.discord.shortcuts.ShortcutUtilsKt;
import com.discord.theme.utils.ColorUtilsKt;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import java.util.ArrayList;
import java.util.Comparator;
import java.util.List;
import java.util.Map;
import kotlin.Metadata;
import kotlin.Pair;
import kotlin.Unit;
import kotlin.collections.CollectionsKt;
import kotlin.collections.c0;
import kotlin.collections.g0;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.Ref;
import kotlin.jvm.internal.SourceDebugExtension;
import kotlinx.coroutines.CoroutineScope;
import kotlinx.coroutines.Deferred;
import lo.d;
import lo.h;
import nr.e;
import nr.x;
import x0.q0;
import x0.y;

@Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 1, 0}, xi = 48)
@d(c = "com.discord.notifications.renderer.NotificationRenderer$display$1", f = "NotificationRenderer.kt", l = {343, 351}, m = "invokeSuspend")
@SourceDebugExtension({"SMAP\nNotificationRenderer.kt\nKotlin\n*S Kotlin\n*F\n+ 1 NotificationRenderer.kt\ncom/discord/notifications/renderer/NotificationRenderer$display$1\n+ 2 fake.kt\nkotlin/jvm/internal/FakeKt\n+ 3 _Collections.kt\nkotlin/collections/CollectionsKt___CollectionsKt\n*L\n1#1,506:1\n1#2:507\n1#2:522\n1011#3,2:508\n1869#3,2:510\n1617#3,9:512\n1869#3:521\n1870#3:523\n1626#3:524\n*S KotlinDebug\n*F\n+ 1 NotificationRenderer.kt\ncom/discord/notifications/renderer/NotificationRenderer$display$1\n*L\n486#1:522\n445#1:508,2\n446#1:510,2\n486#1:512,9\n486#1:521\n486#1:523\n486#1:524\n*E\n"})
/* loaded from: classes.dex */
public final class NotificationRenderer$display$1 extends h implements Function2<CoroutineScope, Continuation, Object> {
    final /* synthetic */ String $accountLabel;
    final /* synthetic */ NotificationBehaviors $behaviors;
    final /* synthetic */ Context $context;
    final /* synthetic */ String $currentUsername;
    final /* synthetic */ boolean $makeOrUpdateShortcut;
    final /* synthetic */ NotificationData $notification;
    final /* synthetic */ Map<String, String> $notificationDataMap;
    final /* synthetic */ boolean $notifyEveryTime;
    final /* synthetic */ boolean $preserveAccountLabel;
    int I$0;
    private /* synthetic */ Object L$0;
    Object L$1;
    Object L$2;
    int label;
    final /* synthetic */ NotificationRenderer this$0;

    @Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u0004\u0018\u00010\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "Landroid/graphics/Bitmap;", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 1, 0}, xi = 48)
    @d(c = "com.discord.notifications.renderer.NotificationRenderer$display$1$1", f = "NotificationRenderer.kt", l = {344}, m = "invokeSuspend")
    /* renamed from: com.discord.notifications.renderer.NotificationRenderer$display$1$1, reason: invalid class name */
    public static final class AnonymousClass1 extends h implements Function2<CoroutineScope, Continuation, Object> {
        final /* synthetic */ Context $context;
        final /* synthetic */ Ref.ObjectRef<String> $iconUrl;
        final /* synthetic */ Ref.ObjectRef<PostProcessor> $postProcessor;
        int label;

        /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
        public AnonymousClass1(Ref.ObjectRef<String> objectRef, Context context, Ref.ObjectRef<PostProcessor> objectRef2, Continuation continuation) {
            super(2, continuation);
            this.$iconUrl = objectRef;
            this.$context = context;
            this.$postProcessor = objectRef2;
        }

        @Override // lo.a
        public final Continuation create(Object obj, Continuation continuation) {
            return new AnonymousClass1(this.$iconUrl, this.$context, this.$postProcessor, continuation);
        }

        @Override // lo.a
        public final Object invokeSuspend(Object obj) {
            ko.a aVar = ko.a.f13464d;
            int i5 = this.label;
            if (i5 != 0) {
                if (i5 != 1) {
                    throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                }
                ki.b.R(obj);
                return obj;
            }
            ki.b.R(obj);
            Context context = this.$context;
            Ref.ObjectRef<PostProcessor> objectRef = this.$postProcessor;
            String str = this.$iconUrl.element;
            this.label = 1;
            Object invokeSuspend$fetchImage = NotificationRenderer$display$1.invokeSuspend$fetchImage(context, objectRef, str, this);
            return invokeSuspend$fetchImage == aVar ? aVar : invokeSuspend$fetchImage;
        }

        @Override // kotlin.jvm.functions.Function2
        public final Object invoke(CoroutineScope coroutineScope, Continuation continuation) {
            return ((AnonymousClass1) create(coroutineScope, continuation)).invokeSuspend(Unit.a);
        }
    }

    @Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u0004\u0018\u00010\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "Landroid/graphics/Bitmap;", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 1, 0}, xi = 48)
    @d(c = "com.discord.notifications.renderer.NotificationRenderer$display$1$2", f = "NotificationRenderer.kt", l = {345}, m = "invokeSuspend")
    /* renamed from: com.discord.notifications.renderer.NotificationRenderer$display$1$2, reason: invalid class name */
    public static final class AnonymousClass2 extends h implements Function2<CoroutineScope, Continuation, Object> {
        final /* synthetic */ Context $context;
        final /* synthetic */ NotificationData $notification;
        final /* synthetic */ Ref.ObjectRef<PostProcessor> $postProcessor;
        int label;

        /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
        public AnonymousClass2(NotificationData notificationData, Context context, Ref.ObjectRef<PostProcessor> objectRef, Continuation continuation) {
            super(2, continuation);
            this.$notification = notificationData;
            this.$context = context;
            this.$postProcessor = objectRef;
        }

        @Override // lo.a
        public final Continuation create(Object obj, Continuation continuation) {
            return new AnonymousClass2(this.$notification, this.$context, this.$postProcessor, continuation);
        }

        @Override // lo.a
        public final Object invokeSuspend(Object obj) {
            ko.a aVar = ko.a.f13464d;
            int i5 = this.label;
            if (i5 != 0) {
                if (i5 != 1) {
                    throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                }
                ki.b.R(obj);
                return obj;
            }
            ki.b.R(obj);
            Context context = this.$context;
            Ref.ObjectRef<PostProcessor> objectRef = this.$postProcessor;
            String iconUrlForAvatar = NotificationDataUtilsKt.getIconUrlForAvatar(this.$notification, context);
            this.label = 1;
            Object invokeSuspend$fetchImage = NotificationRenderer$display$1.invokeSuspend$fetchImage(context, objectRef, iconUrlForAvatar, this);
            return invokeSuspend$fetchImage == aVar ? aVar : invokeSuspend$fetchImage;
        }

        @Override // kotlin.jvm.functions.Function2
        public final Object invoke(CoroutineScope coroutineScope, Continuation continuation) {
            return ((AnonymousClass2) create(coroutineScope, continuation)).invokeSuspend(Unit.a);
        }
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public NotificationRenderer$display$1(NotificationData notificationData, Context context, NotificationRenderer notificationRenderer, boolean z5, Map<String, String> map, NotificationBehaviors notificationBehaviors, boolean z6, String str, String str2, boolean z7, Continuation continuation) {
        super(2, continuation);
        this.$notification = notificationData;
        this.$context = context;
        this.this$0 = notificationRenderer;
        this.$notifyEveryTime = z5;
        this.$notificationDataMap = map;
        this.$behaviors = notificationBehaviors;
        this.$preserveAccountLabel = z6;
        this.$accountLabel = str;
        this.$currentUsername = str2;
        this.$makeOrUpdateShortcut = z7;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Object invokeSuspend$fetchImage(Context context, Ref.ObjectRef<PostProcessor> objectRef, String str, Continuation continuation) {
        return FrescoFetchDecodedImageKt.fetchDecodedImage(context, str, objectRef.element, true, continuation);
    }

    @Override // lo.a
    public final Continuation create(Object obj, Continuation continuation) {
        NotificationRenderer$display$1 notificationRenderer$display$1 = new NotificationRenderer$display$1(this.$notification, this.$context, this.this$0, this.$notifyEveryTime, this.$notificationDataMap, this.$behaviors, this.$preserveAccountLabel, this.$accountLabel, this.$currentUsername, this.$makeOrUpdateShortcut, continuation);
        notificationRenderer$display$1.L$0 = obj;
        return notificationRenderer$display$1;
    }

    /* JADX WARN: Code restructure failed: missing block: B:121:0x0093, code lost:
    
        if (r2 == r1) goto L23;
     */
    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Removed duplicated region for block: B:103:0x022e  */
    /* JADX WARN: Removed duplicated region for block: B:12:0x019a  */
    /* JADX WARN: Removed duplicated region for block: B:32:0x0238  */
    /* JADX WARN: Removed duplicated region for block: B:37:0x025b  */
    /* JADX WARN: Removed duplicated region for block: B:40:0x027e  */
    /* JADX WARN: Removed duplicated region for block: B:77:0x0398  */
    /* JADX WARN: Removed duplicated region for block: B:86:0x03b4  */
    /* JADX WARN: Removed duplicated region for block: B:89:0x03bf  */
    /* JADX WARN: Removed duplicated region for block: B:93:0x03c1  */
    /* JADX WARN: Removed duplicated region for block: B:98:0x0351  */
    /* JADX WARN: Removed duplicated region for block: B:9:0x0141  */
    /* JADX WARN: Type inference failed for: r10v1, types: [T, java.lang.String] */
    /* JADX WARN: Type inference failed for: r10v18 */
    /* JADX WARN: Type inference failed for: r10v8, types: [T] */
    /* JADX WARN: Type inference failed for: r10v9 */
    /* JADX WARN: Type inference failed for: r5v4 */
    /* JADX WARN: Type inference failed for: r5v5, types: [int] */
    /* JADX WARN: Type inference failed for: r5v6 */
    /* JADX WARN: Type inference failed for: r7v5 */
    /* JADX WARN: Type inference failed for: r7v6, types: [androidx.core.graphics.drawable.IconCompat, java.lang.String] */
    /* JADX WARN: Type inference failed for: r7v9 */
    /* JADX WARN: Type inference failed for: r9v0, types: [T, com.discord.image.fresco.postprocessors.PostProcessor$Circle] */
    @Override // lo.a
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final Object invokeSuspend(Object obj) {
        Object a;
        Bitmap bitmap;
        Bitmap bitmap2;
        CharSequence content;
        int activeNotificationMessageCount;
        Pair pair;
        Object storeRemoteImageViaFileProvider;
        int i5;
        Function1 function1;
        boolean z5;
        NotificationData notificationData;
        boolean z6;
        String str;
        Map<String, String> map;
        boolean z7;
        ?? r7;
        CharSequence i18nFormat$default;
        Bitmap bitmap3;
        NotificationCompat$MessagingStyle messagingStyle;
        ArrayList arrayList;
        MessageIdSnowflake m1195toSnowflakewDbSOA;
        PendingIntent fullscreenIntent;
        int i6;
        ko.a aVar = ko.a.f13464d;
        int i10 = this.label;
        if (i10 == 0) {
            ki.b.R(obj);
            CoroutineScope coroutineScope = (CoroutineScope) this.L$0;
            Ref.ObjectRef objectRef = new Ref.ObjectRef();
            objectRef.element = PostProcessor.Circle.INSTANCE;
            Ref.ObjectRef objectRef2 = new Ref.ObjectRef();
            objectRef2.element = NotificationDataUtilsKt.getIconUrl(this.$notification, this.$context);
            if (this.$notification.getImageAttachmentUrl() != null) {
                String imageAttachmentUrl = this.$notification.getImageAttachmentUrl();
                ?? r10 = imageAttachmentUrl;
                if (imageAttachmentUrl == null) {
                    r10 = "";
                }
                objectRef2.element = r10;
                objectRef.element = null;
            }
            Deferred[] deferredArr = {x.d(coroutineScope, null, new AnonymousClass1(objectRef2, this.$context, objectRef, null), 3), x.d(coroutineScope, null, new AnonymousClass2(this.$notification, this.$context, objectRef, null), 3)};
            this.label = 1;
            a = new e(deferredArr).a(this);
        } else {
            if (i10 != 1) {
                if (i10 != 2) {
                    throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                }
                i5 = this.I$0;
                content = (CharSequence) this.L$2;
                bitmap2 = (Bitmap) this.L$1;
                bitmap = (Bitmap) this.L$0;
                ki.b.R(obj);
                storeRemoteImageViaFileProvider = obj;
                pair = (Pair) storeRemoteImageViaFileProvider;
                activeNotificationMessageCount = i5;
                Context context = this.$context;
                NotificationChannels notificationChannels = NotificationChannels.INSTANCE;
                NotificationData notificationData2 = this.$notification;
                function1 = this.this$0.getNotifTypeMappings;
                NotificationCompat$Builder notificationBuilderOrCreate = NotificationManagerUtilsKt.getNotificationBuilderOrCreate(context, notificationChannels.getNotificationChannelId(notificationData2, context, (Map) function1.invoke(this.$context)), NotificationManagerUtilsKt.getActiveNotification(this.$context, NotificationDataUtilsKt.getTag(this.$notification)));
                notificationBuilderOrCreate.g(16, true);
                Notification notification = notificationBuilderOrCreate.N;
                notificationBuilderOrCreate.g(8, !this.$notifyEveryTime);
                notification.icon = NotificationDataUtilsKt.getSmallIcon(this.$notification);
                notificationBuilderOrCreate.D = ColorUtilsKt.getColorCompat(this.$context, com.discord.theme.R.color.brand_500);
                notificationBuilderOrCreate.B = NotificationDataUtilsKt.getNotificationCategory(this.$notification);
                notificationBuilderOrCreate.f1450e = NotificationCompat$Builder.e(NotificationDataUtilsKt.getTitle(this.$notification, this.$context));
                z5 = this.$preserveAccountLabel;
                String str2 = this.$accountLabel;
                if (!z5) {
                    notificationBuilderOrCreate.f1460q = NotificationCompat$Builder.e(str2);
                }
                notificationBuilderOrCreate.f1451f = NotificationCompat$Builder.e(content);
                notificationBuilderOrCreate.f1465v = NotificationDataUtilsKt.getGroupKey(this.$notification);
                notificationBuilderOrCreate.f1455l = activeNotificationMessageCount;
                notificationBuilderOrCreate.h(bitmap);
                notification.deleteIntent = NotificationDataUtilsKt.getDeletePendingIntent(this.$notification, this.$context);
                notificationBuilderOrCreate.f1453h = NotificationDataUtilsKt.getContentPendingIntent(this.$notification, this.$context, this.$notificationDataMap);
                Intrinsics.checkNotNullExpressionValue(notificationBuilderOrCreate, "setContentIntent(...)");
                Context context2 = this.$context;
                NotificationCompat$Builder legacyNotificationBehaviors = NotificationManagerUtilsKt.setLegacyNotificationBehaviors(notificationBuilderOrCreate, context2, this.$behaviors, NotificationDataUtilsKt.getSound(this.$notification, context2));
                legacyNotificationBehaviors.f1447b.clear();
                notificationData = this.$notification;
                Context context3 = this.$context;
                NotificationRenderer notificationRenderer = this.this$0;
                Map<String, String> map2 = this.$notificationDataMap;
                String str3 = this.$currentUsername;
                boolean z8 = this.$makeOrUpdateShortcut;
                if (NotificationDataUtilsKt.isCallRinging(notificationData)) {
                    if (Build.VERSION.SDK_INT >= 26) {
                        PowerManager powerManager = (PowerManager) context3.getSystemService(PowerManager.class);
                        KeyguardManager keyguardManager = (KeyguardManager) context3.getSystemService(KeyguardManager.class);
                        if (!powerManager.isInteractive() || keyguardManager.isKeyguardLocked()) {
                            fullscreenIntent = notificationRenderer.getFullscreenIntent(context3, notificationData, map2);
                            notificationRenderer.setFullscreenIntent(fullscreenIntent);
                            legacyNotificationBehaviors.f1454i = notificationRenderer.getFullscreenIntent();
                            i6 = 1;
                            legacyNotificationBehaviors.g(IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT, true);
                            legacyNotificationBehaviors.g(16, false);
                        } else {
                            i6 = 1;
                        }
                        legacyNotificationBehaviors.f1456m = i6;
                    }
                    String channelName = notificationData.getChannelName();
                    z6 = z8;
                    Pair pair2 = new Pair(NotificationRenderer.USERNAME, notificationData.getUserUsername());
                    if (!NotificationDataUtilsKt.isCall(notificationData)) {
                        channelName = k0.d.l(channelName, ", ", notificationData.getGuildName());
                    }
                    Pair pair3 = new Pair(NotificationRenderer.CHANNEL_NAME, channelName);
                    Integer channelType = notificationData.getChannelType();
                    str = str3;
                    legacyNotificationBehaviors.b(com.facebook.imagepipeline.nativecode.b.c(pair2, pair3, new Pair(NotificationRenderer.IS_DM, Boolean.valueOf(channelType != null && channelType.intValue() == 1))));
                } else {
                    z6 = z8;
                    str = str3;
                }
                String m1125getMessageIdN_6c4I0 = notificationData.m1125getMessageIdN_6c4I0();
                Long l6 = (m1125getMessageIdN_6c4I0 != null || (m1195toSnowflakewDbSOA = MessageId.m1195toSnowflakewDbSOA(m1125getMessageIdN_6c4I0)) == null) ? null : new Long(m1195toSnowflakewDbSOA.m1211unboximpl());
                Bitmap bitmap4 = bitmap;
                int i11 = activeNotificationMessageCount;
                legacyNotificationBehaviors.b(com.facebook.imagepipeline.nativecode.b.c(new Pair(NotificationRenderer.LATEST_MESSAGE_ID_KEY, new Long(Math.max(l6 != null ? l6.longValue() : 0L, legacyNotificationBehaviors.d().getLong(NotificationRenderer.LATEST_MESSAGE_ID_KEY, 0L))))));
                if (NotificationDataUtilsKt.shouldUseMessagingStyle(notificationData)) {
                    if (str != null) {
                        i18nFormat$default = str;
                        r7 = 0;
                    } else {
                        r7 = 0;
                        i18nFormat$default = I18nUtilsKt.i18nFormat$default(context3, I18nMessage.ME, null, 2, null);
                    }
                    Person person = new Person();
                    person.a = i18nFormat$default;
                    person.f1481b = r7;
                    person.f1482c = r7;
                    person.f1483d = "me";
                    person.f1484e = false;
                    person.f1485f = false;
                    NotificationCompat$MessagingStyle notificationCompat$MessagingStyle = new NotificationCompat$MessagingStyle(person);
                    notificationCompat$MessagingStyle.f1473h = NotificationDataUtilsKt.getConversationTitle(notificationData);
                    notificationCompat$MessagingStyle.f1474i = Boolean.valueOf(NotificationDataUtilsKt.isGroupConversation(notificationData));
                    Notification activeNotification = NotificationManagerUtilsKt.getActiveNotification(context3, NotificationDataUtilsKt.getTag(notificationData));
                    ArrayList<q0> arrayList2 = (activeNotification == null || (messagingStyle = NotificationManagerUtilsKt.getMessagingStyle(activeNotification)) == null || (arrayList = messagingStyle.f1470e) == null) ? new ArrayList() : CollectionsKt.j0(arrayList);
                    if (pair != null) {
                        Uri uri = (Uri) pair.f13474d;
                        String str4 = (String) pair.f13475e;
                        bitmap3 = bitmap4;
                        q0 q0Var = new q0("", NotificationDataUtilsKt.getSendTime(notificationData), NotificationDataUtilsKt.getSenderForMessageNotification(notificationData, bitmap2));
                        q0Var.f20211e = str4;
                        q0Var.f20212f = uri;
                        arrayList2.add(q0Var);
                    } else {
                        bitmap3 = bitmap4;
                    }
                    arrayList2.add(new q0(content, NotificationDataUtilsKt.getSendTime(notificationData), NotificationDataUtilsKt.getSenderForMessageNotification(notificationData, bitmap2)));
                    if (arrayList2.size() > 1) {
                        g0.n(arrayList2, new Comparator() { // from class: com.discord.notifications.renderer.NotificationRenderer$display$1$invokeSuspend$lambda$6$lambda$4$$inlined$sortBy$1
                            /* JADX WARN: Multi-variable type inference failed */
                            @Override // java.util.Comparator
                            public final int compare(T t5, T t10) {
                                return ho.a.a(Long.valueOf(((q0) t5).f20208b), Long.valueOf(((q0) t10).f20208b));
                            }
                        });
                    }
                    for (q0 q0Var2 : arrayList2) {
                        if (q0Var2 != null) {
                            ArrayList arrayList3 = notificationCompat$MessagingStyle.f1470e;
                            arrayList3.add(q0Var2);
                            if (arrayList3.size() > 25) {
                                arrayList3.remove(0);
                            }
                        }
                    }
                    legacyNotificationBehaviors.j(notificationCompat$MessagingStyle);
                    if (z6) {
                        Intrinsics.checkNotNull(legacyNotificationBehaviors);
                        map = map2;
                        ShortcutUtilsKt.addShortcut(legacyNotificationBehaviors, context3, NotificationDataUtilsKt.getShortcutInfo(notificationData, context3, map, bitmap3, bitmap2));
                    } else {
                        map = map2;
                    }
                } else {
                    map = map2;
                    if (NotificationDataUtilsKt.shouldUseBigText(notificationData)) {
                        z7 = false;
                        y yVar = new y(0);
                        yVar.f20239f = NotificationCompat$Builder.e(content);
                        legacyNotificationBehaviors.j(yVar);
                        List<NotificationCompat$Action> g6 = c0.g(NotificationDataUtilsKt.getMarkAsReadAction(notificationData, context3), NotificationDataUtilsKt.getDirectReplyAction(notificationData, context3), NotificationDataUtilsKt.getCallAction(notificationData, context3, z7, map), NotificationDataUtilsKt.getCallAction(notificationData, context3, true, map), NotificationDataUtilsKt.getTimedMuteAction(notificationData, context3, i11), NotificationDataUtilsKt.getBotDMMuteAction(notificationData, context3));
                        ArrayList arrayList4 = new ArrayList();
                        for (NotificationCompat$Action notificationCompat$Action : g6) {
                            if (notificationCompat$Action != null) {
                                legacyNotificationBehaviors.f1447b.add(notificationCompat$Action);
                            }
                            arrayList4.add(legacyNotificationBehaviors);
                        }
                        Intrinsics.checkNotNullExpressionValue(legacyNotificationBehaviors, "also(...)");
                        if (IsMetaQuestKt.isMetaQuest()) {
                            legacyNotificationBehaviors.f1456m = 1;
                        }
                        NotificationManagerUtilsKt.notify(NotificationManagerUtilsKt.getNotificationManagerCompat(this.$context), NotificationDataUtilsKt.getTag(this.$notification), legacyNotificationBehaviors, !NotificationDataUtilsKt.isCallRinging(this.$notification) ? 4 : z7);
                        return Unit.a;
                    }
                }
                z7 = false;
                List<NotificationCompat$Action> g62 = c0.g(NotificationDataUtilsKt.getMarkAsReadAction(notificationData, context3), NotificationDataUtilsKt.getDirectReplyAction(notificationData, context3), NotificationDataUtilsKt.getCallAction(notificationData, context3, z7, map), NotificationDataUtilsKt.getCallAction(notificationData, context3, true, map), NotificationDataUtilsKt.getTimedMuteAction(notificationData, context3, i11), NotificationDataUtilsKt.getBotDMMuteAction(notificationData, context3));
                ArrayList arrayList42 = new ArrayList();
                while (r2.hasNext()) {
                }
                Intrinsics.checkNotNullExpressionValue(legacyNotificationBehaviors, "also(...)");
                if (IsMetaQuestKt.isMetaQuest()) {
                }
                NotificationManagerUtilsKt.notify(NotificationManagerUtilsKt.getNotificationManagerCompat(this.$context), NotificationDataUtilsKt.getTag(this.$notification), legacyNotificationBehaviors, !NotificationDataUtilsKt.isCallRinging(this.$notification) ? 4 : z7);
                return Unit.a;
            }
            ki.b.R(obj);
            a = obj;
        }
        List list = (List) a;
        bitmap = (Bitmap) list.get(0);
        bitmap2 = (Bitmap) list.get(1);
        content = NotificationDataUtilsKt.getContent(this.$notification, this.$context, false);
        activeNotificationMessageCount = NotificationManagerUtilsKt.getActiveNotificationMessageCount(this.$context, NotificationDataUtilsKt.getTag(this.$notification)) + 1;
        String ergoImageAttachmentUrl = this.$notification.getErgoImageAttachmentUrl();
        if (ergoImageAttachmentUrl == null) {
            pair = null;
            Context context4 = this.$context;
            NotificationChannels notificationChannels2 = NotificationChannels.INSTANCE;
            NotificationData notificationData22 = this.$notification;
            function1 = this.this$0.getNotifTypeMappings;
            NotificationCompat$Builder notificationBuilderOrCreate2 = NotificationManagerUtilsKt.getNotificationBuilderOrCreate(context4, notificationChannels2.getNotificationChannelId(notificationData22, context4, (Map) function1.invoke(this.$context)), NotificationManagerUtilsKt.getActiveNotification(this.$context, NotificationDataUtilsKt.getTag(this.$notification)));
            notificationBuilderOrCreate2.g(16, true);
            Notification notification2 = notificationBuilderOrCreate2.N;
            notificationBuilderOrCreate2.g(8, !this.$notifyEveryTime);
            notification2.icon = NotificationDataUtilsKt.getSmallIcon(this.$notification);
            notificationBuilderOrCreate2.D = ColorUtilsKt.getColorCompat(this.$context, com.discord.theme.R.color.brand_500);
            notificationBuilderOrCreate2.B = NotificationDataUtilsKt.getNotificationCategory(this.$notification);
            notificationBuilderOrCreate2.f1450e = NotificationCompat$Builder.e(NotificationDataUtilsKt.getTitle(this.$notification, this.$context));
            z5 = this.$preserveAccountLabel;
            String str22 = this.$accountLabel;
            if (!z5) {
            }
            notificationBuilderOrCreate2.f1451f = NotificationCompat$Builder.e(content);
            notificationBuilderOrCreate2.f1465v = NotificationDataUtilsKt.getGroupKey(this.$notification);
            notificationBuilderOrCreate2.f1455l = activeNotificationMessageCount;
            notificationBuilderOrCreate2.h(bitmap);
            notification2.deleteIntent = NotificationDataUtilsKt.getDeletePendingIntent(this.$notification, this.$context);
            notificationBuilderOrCreate2.f1453h = NotificationDataUtilsKt.getContentPendingIntent(this.$notification, this.$context, this.$notificationDataMap);
            Intrinsics.checkNotNullExpressionValue(notificationBuilderOrCreate2, "setContentIntent(...)");
            Context context22 = this.$context;
            NotificationCompat$Builder legacyNotificationBehaviors2 = NotificationManagerUtilsKt.setLegacyNotificationBehaviors(notificationBuilderOrCreate2, context22, this.$behaviors, NotificationDataUtilsKt.getSound(this.$notification, context22));
            legacyNotificationBehaviors2.f1447b.clear();
            notificationData = this.$notification;
            Context context32 = this.$context;
            NotificationRenderer notificationRenderer2 = this.this$0;
            Map<String, String> map22 = this.$notificationDataMap;
            String str32 = this.$currentUsername;
            boolean z82 = this.$makeOrUpdateShortcut;
            if (NotificationDataUtilsKt.isCallRinging(notificationData)) {
            }
            String m1125getMessageIdN_6c4I02 = notificationData.m1125getMessageIdN_6c4I0();
            if (m1125getMessageIdN_6c4I02 != null) {
            }
            Bitmap bitmap42 = bitmap;
            int i112 = activeNotificationMessageCount;
            legacyNotificationBehaviors2.b(com.facebook.imagepipeline.nativecode.b.c(new Pair(NotificationRenderer.LATEST_MESSAGE_ID_KEY, new Long(Math.max(l6 != null ? l6.longValue() : 0L, legacyNotificationBehaviors2.d().getLong(NotificationRenderer.LATEST_MESSAGE_ID_KEY, 0L))))));
            if (NotificationDataUtilsKt.shouldUseMessagingStyle(notificationData)) {
            }
            z7 = false;
            List<NotificationCompat$Action> g622 = c0.g(NotificationDataUtilsKt.getMarkAsReadAction(notificationData, context32), NotificationDataUtilsKt.getDirectReplyAction(notificationData, context32), NotificationDataUtilsKt.getCallAction(notificationData, context32, z7, map), NotificationDataUtilsKt.getCallAction(notificationData, context32, true, map), NotificationDataUtilsKt.getTimedMuteAction(notificationData, context32, i112), NotificationDataUtilsKt.getBotDMMuteAction(notificationData, context32));
            ArrayList arrayList422 = new ArrayList();
            while (r2.hasNext()) {
            }
            Intrinsics.checkNotNullExpressionValue(legacyNotificationBehaviors2, "also(...)");
            if (IsMetaQuestKt.isMetaQuest()) {
            }
            NotificationManagerUtilsKt.notify(NotificationManagerUtilsKt.getNotificationManagerCompat(this.$context), NotificationDataUtilsKt.getTag(this.$notification), legacyNotificationBehaviors2, !NotificationDataUtilsKt.isCallRinging(this.$notification) ? 4 : z7);
            return Unit.a;
        }
        Context context5 = this.$context;
        this.L$0 = bitmap;
        this.L$1 = bitmap2;
        this.L$2 = content;
        this.I$0 = activeNotificationMessageCount;
        this.label = 2;
        storeRemoteImageViaFileProvider = NotificationImageCacheKt.storeRemoteImageViaFileProvider(context5, ergoImageAttachmentUrl, this);
        if (storeRemoteImageViaFileProvider != aVar) {
            i5 = activeNotificationMessageCount;
            pair = (Pair) storeRemoteImageViaFileProvider;
            activeNotificationMessageCount = i5;
            Context context42 = this.$context;
            NotificationChannels notificationChannels22 = NotificationChannels.INSTANCE;
            NotificationData notificationData222 = this.$notification;
            function1 = this.this$0.getNotifTypeMappings;
            NotificationCompat$Builder notificationBuilderOrCreate22 = NotificationManagerUtilsKt.getNotificationBuilderOrCreate(context42, notificationChannels22.getNotificationChannelId(notificationData222, context42, (Map) function1.invoke(this.$context)), NotificationManagerUtilsKt.getActiveNotification(this.$context, NotificationDataUtilsKt.getTag(this.$notification)));
            notificationBuilderOrCreate22.g(16, true);
            Notification notification22 = notificationBuilderOrCreate22.N;
            notificationBuilderOrCreate22.g(8, !this.$notifyEveryTime);
            notification22.icon = NotificationDataUtilsKt.getSmallIcon(this.$notification);
            notificationBuilderOrCreate22.D = ColorUtilsKt.getColorCompat(this.$context, com.discord.theme.R.color.brand_500);
            notificationBuilderOrCreate22.B = NotificationDataUtilsKt.getNotificationCategory(this.$notification);
            notificationBuilderOrCreate22.f1450e = NotificationCompat$Builder.e(NotificationDataUtilsKt.getTitle(this.$notification, this.$context));
            z5 = this.$preserveAccountLabel;
            String str222 = this.$accountLabel;
            if (!z5) {
            }
            notificationBuilderOrCreate22.f1451f = NotificationCompat$Builder.e(content);
            notificationBuilderOrCreate22.f1465v = NotificationDataUtilsKt.getGroupKey(this.$notification);
            notificationBuilderOrCreate22.f1455l = activeNotificationMessageCount;
            notificationBuilderOrCreate22.h(bitmap);
            notification22.deleteIntent = NotificationDataUtilsKt.getDeletePendingIntent(this.$notification, this.$context);
            notificationBuilderOrCreate22.f1453h = NotificationDataUtilsKt.getContentPendingIntent(this.$notification, this.$context, this.$notificationDataMap);
            Intrinsics.checkNotNullExpressionValue(notificationBuilderOrCreate22, "setContentIntent(...)");
            Context context222 = this.$context;
            NotificationCompat$Builder legacyNotificationBehaviors22 = NotificationManagerUtilsKt.setLegacyNotificationBehaviors(notificationBuilderOrCreate22, context222, this.$behaviors, NotificationDataUtilsKt.getSound(this.$notification, context222));
            legacyNotificationBehaviors22.f1447b.clear();
            notificationData = this.$notification;
            Context context322 = this.$context;
            NotificationRenderer notificationRenderer22 = this.this$0;
            Map<String, String> map222 = this.$notificationDataMap;
            String str322 = this.$currentUsername;
            boolean z822 = this.$makeOrUpdateShortcut;
            if (NotificationDataUtilsKt.isCallRinging(notificationData)) {
            }
            String m1125getMessageIdN_6c4I022 = notificationData.m1125getMessageIdN_6c4I0();
            if (m1125getMessageIdN_6c4I022 != null) {
            }
            Bitmap bitmap422 = bitmap;
            int i1122 = activeNotificationMessageCount;
            legacyNotificationBehaviors22.b(com.facebook.imagepipeline.nativecode.b.c(new Pair(NotificationRenderer.LATEST_MESSAGE_ID_KEY, new Long(Math.max(l6 != null ? l6.longValue() : 0L, legacyNotificationBehaviors22.d().getLong(NotificationRenderer.LATEST_MESSAGE_ID_KEY, 0L))))));
            if (NotificationDataUtilsKt.shouldUseMessagingStyle(notificationData)) {
            }
            z7 = false;
            List<NotificationCompat$Action> g6222 = c0.g(NotificationDataUtilsKt.getMarkAsReadAction(notificationData, context322), NotificationDataUtilsKt.getDirectReplyAction(notificationData, context322), NotificationDataUtilsKt.getCallAction(notificationData, context322, z7, map), NotificationDataUtilsKt.getCallAction(notificationData, context322, true, map), NotificationDataUtilsKt.getTimedMuteAction(notificationData, context322, i1122), NotificationDataUtilsKt.getBotDMMuteAction(notificationData, context322));
            ArrayList arrayList4222 = new ArrayList();
            while (r2.hasNext()) {
            }
            Intrinsics.checkNotNullExpressionValue(legacyNotificationBehaviors22, "also(...)");
            if (IsMetaQuestKt.isMetaQuest()) {
            }
            NotificationManagerUtilsKt.notify(NotificationManagerUtilsKt.getNotificationManagerCompat(this.$context), NotificationDataUtilsKt.getTag(this.$notification), legacyNotificationBehaviors22, !NotificationDataUtilsKt.isCallRinging(this.$notification) ? 4 : z7);
            return Unit.a;
        }
        return aVar;
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(CoroutineScope coroutineScope, Continuation continuation) {
        return ((NotificationRenderer$display$1) create(coroutineScope, continuation)).invokeSuspend(Unit.a);
    }
}
