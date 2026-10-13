package com.discord.core;

import android.content.Context;
import android.graphics.Bitmap;
import android.net.Uri;
import android.util.Size;
import com.discord.logging.Log;
import java.util.concurrent.ConcurrentHashMap;
import ki.b;
import ko.a;
import kotlin.Metadata;
import kotlin.Pair;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.SourceDebugExtension;
import kotlin.text.b0;
import kotlinx.coroutines.CoroutineScope;
import kotlinx.coroutines.Deferred;
import kotlinx.coroutines.sync.Mutex;
import lo.d;
import lo.h;
import nr.g0;
import nr.x;
import nr.z;
import sr.q;
import ur.e;

@Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u0004\u0018\u00010\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "Landroid/graphics/Bitmap;", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 1, 0}, xi = 48)
@d(c = "com.discord.core.ThumbnailLoader$loadThumbnail$2", f = "ThumbnailLoader.kt", l = {118, 108, 109}, m = "invokeSuspend")
@SourceDebugExtension({"SMAP\nThumbnailLoader.kt\nKotlin\n*S Kotlin\n*F\n+ 1 ThumbnailLoader.kt\ncom/discord/core/ThumbnailLoader$loadThumbnail$2\n+ 2 Mutex.kt\nkotlinx/coroutines/sync/MutexKt\n+ 3 fake.kt\nkotlin/jvm/internal/FakeKt\n*L\n1#1,112:1\n116#2,8:113\n125#2,2:122\n1#3:121\n*S KotlinDebug\n*F\n+ 1 ThumbnailLoader.kt\ncom/discord/core/ThumbnailLoader$loadThumbnail$2\n*L\n53#1:113,8\n53#1:122,2\n*E\n"})
/* loaded from: classes.dex */
public final class ThumbnailLoader$loadThumbnail$2 extends h implements Function2<CoroutineScope, Continuation, Object> {
    final /* synthetic */ Context $context;
    final /* synthetic */ Size $size;
    final /* synthetic */ Uri $uri;
    private /* synthetic */ Object L$0;
    Object L$1;
    Object L$2;
    Object L$3;
    Object L$4;
    Object L$5;
    Object L$6;
    int label;

    @Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u0004\u0018\u00010\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "Landroid/graphics/Bitmap;", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 1, 0}, xi = 48)
    @d(c = "com.discord.core.ThumbnailLoader$loadThumbnail$2$2", f = "ThumbnailLoader.kt", l = {}, m = "invokeSuspend")
    /* renamed from: com.discord.core.ThumbnailLoader$loadThumbnail$2$2, reason: invalid class name */
    public static final class AnonymousClass2 extends h implements Function2<CoroutineScope, Continuation, Object> {
        final /* synthetic */ Bitmap $bitmap;
        int label;

        /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
        public AnonymousClass2(Bitmap bitmap, Continuation continuation) {
            super(2, continuation);
            this.$bitmap = bitmap;
        }

        @Override // lo.a
        public final Continuation create(Object obj, Continuation continuation) {
            return new AnonymousClass2(this.$bitmap, continuation);
        }

        @Override // lo.a
        public final Object invokeSuspend(Object obj) {
            a aVar = a.f13464d;
            if (this.label != 0) {
                throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
            }
            b.R(obj);
            return this.$bitmap;
        }

        @Override // kotlin.jvm.functions.Function2
        public final Object invoke(CoroutineScope coroutineScope, Continuation continuation) {
            return ((AnonymousClass2) create(coroutineScope, continuation)).invokeSuspend(Unit.a);
        }
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public ThumbnailLoader$loadThumbnail$2(Uri uri, Size size, Context context, Continuation continuation) {
        super(2, continuation);
        this.$uri = uri;
        this.$size = size;
        this.$context = context;
    }

    @Override // lo.a
    public final Continuation create(Object obj, Continuation continuation) {
        ThumbnailLoader$loadThumbnail$2 thumbnailLoader$loadThumbnail$2 = new ThumbnailLoader$loadThumbnail$2(this.$uri, this.$size, this.$context, continuation);
        thumbnailLoader$loadThumbnail$2.L$0 = obj;
        return thumbnailLoader$loadThumbnail$2;
    }

    /* JADX WARN: Code restructure failed: missing block: B:26:0x011a, code lost:
    
        if (r2 == r0) goto L32;
     */
    @Override // lo.a
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final Object invokeSuspend(Object obj) {
        CoroutineScope coroutineScope;
        String uri;
        String createRequestKey;
        Mutex mutex;
        Size size;
        Context context;
        Uri uri2;
        Size size2;
        String str;
        ConcurrentHashMap concurrentHashMap;
        ConcurrentHashMap concurrentHashMap2;
        Pair pair;
        Object A;
        a aVar = a.f13464d;
        int i5 = this.label;
        try {
            if (i5 == 0) {
                b.R(obj);
                coroutineScope = (CoroutineScope) this.L$0;
                uri = this.$uri.toString();
                Intrinsics.checkNotNullExpressionValue(uri, "toString(...)");
                createRequestKey = ThumbnailLoader.INSTANCE.createRequestKey(this.$uri, this.$size);
                mutex = ThumbnailLoader.mapMutex;
                size = this.$size;
                Context context2 = this.$context;
                Uri uri3 = this.$uri;
                this.L$0 = coroutineScope;
                this.L$1 = uri;
                this.L$2 = createRequestKey;
                this.L$3 = mutex;
                this.L$4 = size;
                this.L$5 = context2;
                this.L$6 = uri3;
                this.label = 1;
                if (mutex.a(this) != aVar) {
                    context = context2;
                    uri2 = uri3;
                }
            }
            if (i5 != 1) {
                if (i5 != 2) {
                    if (i5 != 3) {
                        throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                    }
                    b.R(obj);
                    return obj;
                }
                b.R(obj);
                A = obj;
                e eVar = g0.a;
                or.d dVar = q.a;
                AnonymousClass2 anonymousClass2 = new AnonymousClass2((Bitmap) A, null);
                this.label = 3;
                Object A2 = x.A(dVar, anonymousClass2, this);
                return A2 == aVar ? aVar : A2;
            }
            Uri uri4 = (Uri) this.L$6;
            Context context3 = (Context) this.L$5;
            size = (Size) this.L$4;
            mutex = (Mutex) this.L$3;
            createRequestKey = (String) this.L$2;
            uri = (String) this.L$1;
            coroutineScope = (CoroutineScope) this.L$0;
            b.R(obj);
            uri2 = uri4;
            context = context3;
            concurrentHashMap = ThumbnailLoader.inFlightRequests;
            Deferred deferred = (Deferred) concurrentHashMap.get(createRequestKey);
            if (deferred != null) {
                pair = new Pair(deferred, Boolean.TRUE);
            } else {
                e eVar2 = g0.a;
                z d6 = x.d(coroutineScope, ur.d.f19093i, new ThumbnailLoader$loadThumbnail$2$1$1(str, size2, context, uri2, createRequestKey, null), 2);
                concurrentHashMap2 = ThumbnailLoader.inFlightRequests;
                concurrentHashMap2.put(createRequestKey, d6);
                pair = new Pair(d6, Boolean.FALSE);
            }
            mutex.b(null);
            Deferred deferred2 = (Deferred) pair.f13474d;
            if (((Boolean) pair.f13475e).booleanValue()) {
                Log log = Log.INSTANCE;
                String C = b0.C(20, str);
                int width = this.$size.getWidth();
                int height = this.$size.getHeight();
                StringBuilder s2 = a3.e.s("♻ REUSING REQUEST - URI: ", C, " - Size: ", width, "x");
                s2.append(height);
                Log.i$default(log, "ThumbnailLoader", s2.toString(), (Throwable) null, 4, (Object) null);
            }
            this.L$0 = null;
            this.L$1 = null;
            this.L$2 = null;
            this.L$3 = null;
            this.L$4 = null;
            this.L$5 = null;
            this.L$6 = null;
            this.label = 2;
            A = deferred2.A(this);
        } catch (Throwable th2) {
            mutex.b(null);
            throw th2;
        }
        size2 = size;
        str = uri;
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(CoroutineScope coroutineScope, Continuation continuation) {
        return ((ThumbnailLoader$loadThumbnail$2) create(coroutineScope, continuation)).invokeSuspend(Unit.a);
    }
}
