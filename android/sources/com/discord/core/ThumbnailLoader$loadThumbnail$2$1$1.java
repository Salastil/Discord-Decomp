package com.discord.core;

import android.content.ContentResolver;
import android.content.Context;
import android.graphics.Bitmap;
import android.net.Uri;
import android.os.Build;
import android.provider.MediaStore;
import android.util.Size;
import com.discord.crash_reporting.CrashReporting;
import com.discord.logging.Log;
import java.util.concurrent.ConcurrentHashMap;
import ki.b;
import ko.a;
import kotlin.Metadata;
import kotlin.Pair;
import kotlin.Unit;
import kotlin.collections.v0;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.SourceDebugExtension;
import kotlin.text.b0;
import kotlinx.coroutines.CoroutineScope;
import kotlinx.coroutines.sync.Mutex;
import lo.d;
import lo.h;

@Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u0004\u0018\u00010\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "Landroid/graphics/Bitmap;", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 1, 0}, xi = 48)
@d(c = "com.discord.core.ThumbnailLoader$loadThumbnail$2$1$1", f = "ThumbnailLoader.kt", l = {118, 118}, m = "invokeSuspend")
@SourceDebugExtension({"SMAP\nThumbnailLoader.kt\nKotlin\n*S Kotlin\n*F\n+ 1 ThumbnailLoader.kt\ncom/discord/core/ThumbnailLoader$loadThumbnail$2$1$1\n+ 2 Mutex.kt\nkotlinx/coroutines/sync/MutexKt\n*L\n1#1,112:1\n116#2,11:113\n*S KotlinDebug\n*F\n+ 1 ThumbnailLoader.kt\ncom/discord/core/ThumbnailLoader$loadThumbnail$2$1$1\n*L\n92#1:113,11\n*E\n"})
/* loaded from: classes.dex */
public final class ThumbnailLoader$loadThumbnail$2$1$1 extends h implements Function2<CoroutineScope, Continuation, Object> {
    final /* synthetic */ Context $context;
    final /* synthetic */ String $requestKey;
    final /* synthetic */ Size $size;
    final /* synthetic */ Uri $uri;
    final /* synthetic */ String $uriString;
    Object L$0;
    Object L$1;
    Object L$2;
    int label;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public ThumbnailLoader$loadThumbnail$2$1$1(String str, Size size, Context context, Uri uri, String str2, Continuation continuation) {
        super(2, continuation);
        this.$uriString = str;
        this.$size = size;
        this.$context = context;
        this.$uri = uri;
        this.$requestKey = str2;
    }

    @Override // lo.a
    public final Continuation create(Object obj, Continuation continuation) {
        return new ThumbnailLoader$loadThumbnail$2$1$1(this.$uriString, this.$size, this.$context, this.$uri, this.$requestKey, continuation);
    }

    /* JADX WARN: Code restructure failed: missing block: B:51:0x0151, code lost:
    
        if (r2.a(r25) != r4) goto L47;
     */
    @Override // lo.a
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final Object invokeSuspend(Object obj) {
        Throwable th2;
        Mutex mutex;
        String str;
        Bitmap bitmap;
        Mutex mutex2;
        Bitmap bitmap2;
        String str2;
        ConcurrentHashMap concurrentHashMap;
        ConcurrentHashMap concurrentHashMap2;
        a aVar = a.f13464d;
        int i5 = this.label;
        if (i5 == 0) {
            b.R(obj);
            try {
                Log.i$default(Log.INSTANCE, "ThumbnailLoader", "🔄 LOAD START - URI: " + b0.C(20, this.$uriString) + " - Size: " + this.$size.getWidth() + "x" + this.$size.getHeight(), (Throwable) null, 4, (Object) null);
                try {
                    if (Build.VERSION.SDK_INT >= 29) {
                        bitmap = this.$context.getContentResolver().loadThumbnail(this.$uri, this.$size, null);
                    } else {
                        ContentResolver contentResolver = this.$context.getContentResolver();
                        String lastPathSegment = this.$uri.getLastPathSegment();
                        Intrinsics.checkNotNull(lastPathSegment);
                        bitmap = MediaStore.Images.Thumbnails.getThumbnail(contentResolver, Long.parseLong(lastPathSegment), 1, null);
                    }
                } catch (Exception e9) {
                    CrashReporting.addBreadcrumb$default(CrashReporting.INSTANCE, "ThumbnailLoader - Failed to load thumbnail", v0.g(new Pair("exception", e9.toString()), new Pair("url", this.$uri.toString())), null, null, false, 28, null);
                    bitmap = null;
                }
                int allocationByteCount = bitmap != null ? bitmap.getAllocationByteCount() : 0;
                Log.i$default(Log.INSTANCE, "ThumbnailLoader", "✅ LOAD END - URI: " + b0.C(20, this.$uriString) + " - Size: " + allocationByteCount + " bytes", (Throwable) null, 4, (Object) null);
                mutex2 = ThumbnailLoader.mapMutex;
                String str3 = this.$requestKey;
                this.L$0 = bitmap;
                this.L$1 = mutex2;
                this.L$2 = str3;
                this.label = 1;
                if (mutex2.a(this) != aVar) {
                    bitmap2 = bitmap;
                    str2 = str3;
                }
            } catch (Throwable th3) {
                th2 = th3;
                mutex = ThumbnailLoader.mapMutex;
                str = this.$requestKey;
                this.L$0 = th2;
                this.L$1 = mutex;
                this.L$2 = str;
                this.label = 2;
            }
            return aVar;
        }
        if (i5 != 1) {
            if (i5 != 2) {
                throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
            }
            str = (String) this.L$2;
            mutex = (Mutex) this.L$1;
            th2 = (Throwable) this.L$0;
            b.R(obj);
            try {
                concurrentHashMap2 = ThumbnailLoader.inFlightRequests;
                throw th2;
            } finally {
            }
        }
        str2 = (String) this.L$2;
        mutex2 = (Mutex) this.L$1;
        bitmap2 = (Bitmap) this.L$0;
        b.R(obj);
        try {
            concurrentHashMap = ThumbnailLoader.inFlightRequests;
            return bitmap2;
        } finally {
        }
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(CoroutineScope coroutineScope, Continuation continuation) {
        return ((ThumbnailLoader$loadThumbnail$2$1$1) create(coroutineScope, continuation)).invokeSuspend(Unit.a);
    }
}
