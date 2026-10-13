package com.discord.chat.input.views;

import android.content.Context;
import android.graphics.Bitmap;
import androidx.collection.LruCache;
import java.util.LinkedHashSet;
import java.util.Set;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;
import kotlinx.coroutines.CoroutineScope;
import nr.x;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u0000:\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\u0010\u000e\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010#\n\u0002\b\u0004\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\b\u0000\u0018\u00002\u00020\u0001B\u0017\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005¢\u0006\u0004\b\u0006\u0010\u0007J\u0010\u0010\u000f\u001a\u0004\u0018\u00010\u000b2\u0006\u0010\u0010\u001a\u00020\nJ\"\u0010\u0011\u001a\u00020\u00122\u0006\u0010\u0010\u001a\u00020\n2\u0012\u0010\u0013\u001a\u000e\u0012\u0004\u0012\u00020\u000b\u0012\u0004\u0012\u00020\u00120\u0014R\u000e\u0010\u0002\u001a\u00020\u0003X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0004\u001a\u00020\u0005X\u0082\u0004¢\u0006\u0002\n\u0000R\u001a\u0010\b\u001a\u000e\u0012\u0004\u0012\u00020\n\u0012\u0004\u0012\u00020\u000b0\tX\u0082\u0004¢\u0006\u0002\n\u0000R\u0014\u0010\f\u001a\b\u0012\u0004\u0012\u00020\n0\rX\u0082\u0004¢\u0006\u0002\n\u0000R\u0014\u0010\u000e\u001a\b\u0012\u0004\u0012\u00020\n0\rX\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006\u0015"}, d2 = {"Lcom/discord/chat/input/views/ChatInputLeadingIconLoader;", "", "context", "Landroid/content/Context;", "scope", "Lkotlinx/coroutines/CoroutineScope;", "<init>", "(Landroid/content/Context;Lkotlinx/coroutines/CoroutineScope;)V", "cache", "Landroidx/collection/LruCache;", "", "Landroid/graphics/Bitmap;", "inFlightUrls", "", "failedUrls", "cachedBitmap", "url", "load", "", "onLoaded", "Lkotlin/Function1;", "chat_input_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final class ChatInputLeadingIconLoader {

    @NotNull
    private final LruCache cache;

    @NotNull
    private final Context context;

    @NotNull
    private final Set<String> failedUrls;

    @NotNull
    private final Set<String> inFlightUrls;

    @NotNull
    private final CoroutineScope scope;

    public ChatInputLeadingIconLoader(@NotNull Context context, @NotNull CoroutineScope scope) {
        Intrinsics.checkNotNullParameter(context, "context");
        Intrinsics.checkNotNullParameter(scope, "scope");
        this.context = context;
        this.scope = scope;
        this.cache = new LruCache(32);
        this.inFlightUrls = new LinkedHashSet();
        this.failedUrls = new LinkedHashSet();
    }

    public final Bitmap cachedBitmap(@NotNull String url) {
        Intrinsics.checkNotNullParameter(url, "url");
        return (Bitmap) this.cache.a(url);
    }

    public final void load(@NotNull String url, @NotNull Function1<? super Bitmap, Unit> onLoaded) {
        Intrinsics.checkNotNullParameter(url, "url");
        Intrinsics.checkNotNullParameter(onLoaded, "onLoaded");
        if (this.failedUrls.contains(url) || !this.inFlightUrls.add(url)) {
            return;
        }
        x.t(this.scope, null, new ChatInputLeadingIconLoader$load$1(this, url, onLoaded, null), 3);
    }
}
