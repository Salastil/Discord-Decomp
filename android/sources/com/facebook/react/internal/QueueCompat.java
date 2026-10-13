package com.facebook.react.internal;

import android.os.Build;
import java.util.Queue;
import java.util.concurrent.ConcurrentLinkedQueue;
import java.util.concurrent.LinkedBlockingQueue;
import kotlin.Metadata;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u0000\u001a\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u000b\n\u0000\bÆ\u0002\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\u0014\u0010\u0004\u001a\b\u0012\u0004\u0012\u0002H\u00060\u0005\"\u0004\b\u0000\u0010\u0006H\u0007J\b\u0010\u0007\u001a\u00020\bH\u0007¨\u0006\t"}, d2 = {"Lcom/facebook/react/internal/QueueCompat;", "", "<init>", "()V", "create", "Ljava/util/Queue;", "E", "isAffectedRuntime", "", "ReactAndroid_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes3.dex */
public final class QueueCompat {

    @NotNull
    public static final QueueCompat INSTANCE = new QueueCompat();

    private QueueCompat() {
    }

    @NotNull
    public static final <E> Queue<E> create() {
        return isAffectedRuntime() ? new LinkedBlockingQueue() : new ConcurrentLinkedQueue();
    }

    public static final boolean isAffectedRuntime() {
        return Build.VERSION.SDK_INT == 31;
    }
}
