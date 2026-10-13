package com.discord.core;

import android.content.Context;
import android.net.Uri;
import android.util.Size;
import java.util.concurrent.ConcurrentHashMap;
import kotlin.Metadata;
import kotlin.coroutines.Continuation;
import kotlinx.coroutines.Deferred;
import kotlinx.coroutines.sync.Mutex;
import nr.x;
import org.jetbrains.annotations.NotNull;
import wr.b;

@Metadata(d1 = {"\u0000>\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\u000e\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\bÆ\u0002\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\u0018\u0010\f\u001a\u00020\u00052\u0006\u0010\r\u001a\u00020\u000e2\u0006\u0010\u000f\u001a\u00020\u0010H\u0002J(\u0010\u0011\u001a\u0004\u0018\u00010\t2\u0006\u0010\u0012\u001a\u00020\u00132\u0006\u0010\r\u001a\u00020\u000e2\u0006\u0010\u000f\u001a\u00020\u0010H\u0086@¢\u0006\u0002\u0010\u0014R\u000e\u0010\u0004\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000R\"\u0010\u0006\u001a\u0016\u0012\u0004\u0012\u00020\u0005\u0012\f\u0012\n\u0012\u0006\u0012\u0004\u0018\u00010\t0\b0\u0007X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\n\u001a\u00020\u000bX\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006\u0015"}, d2 = {"Lcom/discord/core/ThumbnailLoader;", "", "<init>", "()V", "TAG", "", "inFlightRequests", "Ljava/util/concurrent/ConcurrentHashMap;", "Lkotlinx/coroutines/Deferred;", "Landroid/graphics/Bitmap;", "mapMutex", "Lkotlinx/coroutines/sync/Mutex;", "createRequestKey", "uri", "Landroid/net/Uri;", "size", "Landroid/util/Size;", "loadThumbnail", "context", "Landroid/content/Context;", "(Landroid/content/Context;Landroid/net/Uri;Landroid/util/Size;Lkotlin/coroutines/Continuation;)Ljava/lang/Object;", "core_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final class ThumbnailLoader {

    @NotNull
    private static final String TAG = "ThumbnailLoader";

    @NotNull
    public static final ThumbnailLoader INSTANCE = new ThumbnailLoader();

    @NotNull
    private static final ConcurrentHashMap<String, Deferred> inFlightRequests = new ConcurrentHashMap<>();

    @NotNull
    private static final Mutex mapMutex = new b();

    private ThumbnailLoader() {
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final String createRequestKey(Uri uri, Size size) {
        return uri + "_" + size.getWidth() + "_" + size.getHeight();
    }

    public final Object loadThumbnail(@NotNull Context context, @NotNull Uri uri, @NotNull Size size, @NotNull Continuation continuation) {
        return x.i(new ThumbnailLoader$loadThumbnail$2(uri, size, context, null), continuation);
    }
}
