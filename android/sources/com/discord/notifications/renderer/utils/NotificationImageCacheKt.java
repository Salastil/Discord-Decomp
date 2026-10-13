package com.discord.notifications.renderer.utils;

import android.content.Context;
import java.io.File;
import java.util.ArrayList;
import java.util.Iterator;
import kotlin.Metadata;
import kotlin.coroutines.Continuation;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.SourceDebugExtension;
import nr.g0;
import nr.x;
import org.jetbrains.annotations.NotNull;
import ur.d;
import ur.e;

@Metadata(d1 = {"\u0000,\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\t\n\u0000\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0010\u000e\n\u0002\b\u0004\u001a\u0010\u0010\u0007\u001a\u00020\b2\u0006\u0010\t\u001a\u00020\u0001H\u0002\u001a,\u0010\n\u001a\u0010\u0012\u0004\u0012\u00020\f\u0012\u0004\u0012\u00020\r\u0018\u00010\u000b2\u0006\u0010\u000e\u001a\u00020\u00022\u0006\u0010\u000f\u001a\u00020\rH\u0086@¢\u0006\u0002\u0010\u0010\"\u0015\u0010\u0000\u001a\u00020\u0001*\u00020\u00028F¢\u0006\u0006\u001a\u0004\b\u0003\u0010\u0004\"\u000e\u0010\u0005\u001a\u00020\u0006X\u0082T¢\u0006\u0002\n\u0000¨\u0006\u0011"}, d2 = {"notificationsDir", "Ljava/io/File;", "Landroid/content/Context;", "getNotificationsDir", "(Landroid/content/Context;)Ljava/io/File;", "MAX_NOTIFICATIONS_CACHE_TTL_MILLIS", "", "enforceNotificationsCacheTTL", "", "directory", "storeRemoteImageViaFileProvider", "Lkotlin/Pair;", "Landroid/net/Uri;", "", "context", "imageUrl", "(Landroid/content/Context;Ljava/lang/String;Lkotlin/coroutines/Continuation;)Ljava/lang/Object;", "notification_renderer_release"}, k = 2, mv = {2, 1, 0}, xi = 48)
@SourceDebugExtension({"SMAP\nNotificationImageCache.kt\nKotlin\n*S Kotlin\n*F\n+ 1 NotificationImageCache.kt\ncom/discord/notifications/renderer/utils/NotificationImageCacheKt\n+ 2 _Arrays.kt\nkotlin/collections/ArraysKt___ArraysKt\n+ 3 _Collections.kt\nkotlin/collections/CollectionsKt___CollectionsKt\n*L\n1#1,81:1\n3829#2:82\n4344#2,2:83\n1869#3,2:85\n*S KotlinDebug\n*F\n+ 1 NotificationImageCache.kt\ncom/discord/notifications/renderer/utils/NotificationImageCacheKt\n*L\n29#1:82\n29#1:83,2\n31#1:85,2\n*E\n"})
/* loaded from: classes.dex */
public final class NotificationImageCacheKt {
    private static final long MAX_NOTIFICATIONS_CACHE_TTL_MILLIS = 864000000;

    /* JADX INFO: Access modifiers changed from: private */
    public static final void enforceNotificationsCacheTTL(File file) {
        if (file.exists()) {
            long currentTimeMillis = System.currentTimeMillis();
            File[] listFiles = file.listFiles();
            if (listFiles != null) {
                ArrayList arrayList = new ArrayList();
                for (File file2 : listFiles) {
                    if (file2.isFile() && currentTimeMillis - file2.lastModified() > MAX_NOTIFICATIONS_CACHE_TTL_MILLIS) {
                        arrayList.add(file2);
                    }
                }
                Iterator it = arrayList.iterator();
                while (it.hasNext()) {
                    ((File) it.next()).delete();
                }
            }
        }
    }

    @NotNull
    public static final File getNotificationsDir(@NotNull Context context) {
        Intrinsics.checkNotNullParameter(context, "<this>");
        return new File(context.getCacheDir(), "notifications");
    }

    public static final Object storeRemoteImageViaFileProvider(@NotNull Context context, @NotNull String str, @NotNull Continuation continuation) {
        e eVar = g0.a;
        return x.A(d.f19093i, new NotificationImageCacheKt$storeRemoteImageViaFileProvider$2(context, str, null), continuation);
    }
}
