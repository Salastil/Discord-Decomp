package com.facebook.react.modules.fresco;

import android.net.Uri;
import android.os.SystemClock;
import com.facebook.imagepipeline.backends.okhttp3.OkHttpNetworkFetcher;
import com.facebook.imagepipeline.producers.NetworkFetcher;
import com.facebook.imagepipeline.producers.ProducerContext;
import com.facebook.imagepipeline.request.ImageRequest;
import com.facebook.react.bridge.ReadableMap;
import com.facebook.react.bridge.ReadableMapKeySetIterator;
import d9.a;
import fo.n;
import java.util.HashMap;
import java.util.Map;
import java.util.concurrent.TimeUnit;
import kotlin.Metadata;
import kotlin.collections.v0;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.SourceDebugExtension;
import okhttp3.CacheControl;
import okhttp3.Headers;
import okhttp3.OkHttpClient;
import okhttp3.Request;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u00004\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010$\n\u0002\u0010\u000e\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\b\u0000\u0018\u00002\u00020\u0001B\u000f\u0012\u0006\u0010\u0002\u001a\u00020\u0003¢\u0006\u0004\b\u0004\u0010\u0005J \u0010\u0006\u001a\u0010\u0012\u0004\u0012\u00020\b\u0012\u0004\u0012\u00020\b\u0018\u00010\u00072\b\u0010\t\u001a\u0004\u0018\u00010\nH\u0002J\u0018\u0010\u000b\u001a\u00020\f2\u0006\u0010\r\u001a\u00020\u000e2\u0006\u0010\u000f\u001a\u00020\u0010H\u0016¨\u0006\u0011"}, d2 = {"Lcom/facebook/react/modules/fresco/ReactOkHttpNetworkFetcher;", "Lcom/facebook/imagepipeline/backends/okhttp3/OkHttpNetworkFetcher;", "okHttpClient", "Lokhttp3/OkHttpClient;", "<init>", "(Lokhttp3/OkHttpClient;)V", "getHeaders", "", "", "readableMap", "Lcom/facebook/react/bridge/ReadableMap;", "fetch", "", "fetchState", "Lcom/facebook/imagepipeline/backends/okhttp3/OkHttpNetworkFetcher$OkHttpNetworkFetchState;", "callback", "Lcom/facebook/imagepipeline/producers/NetworkFetcher$Callback;", "ReactAndroid_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
@SourceDebugExtension({"SMAP\nReactOkHttpNetworkFetcher.kt\nKotlin\n*S Kotlin\n*F\n+ 1 ReactOkHttpNetworkFetcher.kt\ncom/facebook/react/modules/fresco/ReactOkHttpNetworkFetcher\n+ 2 fake.kt\nkotlin/jvm/internal/FakeKt\n*L\n1#1,74:1\n1#2:75\n*E\n"})
/* loaded from: classes3.dex */
public final class ReactOkHttpNetworkFetcher extends OkHttpNetworkFetcher {

    @Metadata(k = 3, mv = {2, 1, 0}, xi = 48)
    public /* synthetic */ class WhenMappings {
        public static final /* synthetic */ int[] $EnumSwitchMapping$0;

        static {
            int[] iArr = new int[ImageCacheControl.values().length];
            try {
                iArr[ImageCacheControl.RELOAD.ordinal()] = 1;
            } catch (NoSuchFieldError unused) {
            }
            try {
                iArr[ImageCacheControl.FORCE_CACHE.ordinal()] = 2;
            } catch (NoSuchFieldError unused2) {
            }
            try {
                iArr[ImageCacheControl.ONLY_IF_CACHED.ordinal()] = 3;
            } catch (NoSuchFieldError unused3) {
            }
            try {
                iArr[ImageCacheControl.DEFAULT.ordinal()] = 4;
            } catch (NoSuchFieldError unused4) {
            }
            $EnumSwitchMapping$0 = iArr;
        }
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public ReactOkHttpNetworkFetcher(@NotNull OkHttpClient okHttpClient) {
        super(okHttpClient);
        Intrinsics.checkNotNullParameter(okHttpClient, "okHttpClient");
    }

    private final Map<String, String> getHeaders(ReadableMap readableMap) {
        if (readableMap == null) {
            return null;
        }
        ReadableMapKeySetIterator keySetIterator = readableMap.keySetIterator();
        HashMap hashMap = new HashMap();
        while (keySetIterator.hasNextKey()) {
            String nextKey = keySetIterator.nextKey();
            String string = readableMap.getString(nextKey);
            if (string != null) {
                hashMap.put(nextKey, string);
            }
        }
        return hashMap;
    }

    @Override // com.facebook.imagepipeline.backends.okhttp3.OkHttpNetworkFetcher, com.facebook.imagepipeline.producers.NetworkFetcher
    public void fetch(@NotNull OkHttpNetworkFetcher.OkHttpNetworkFetchState fetchState, @NotNull NetworkFetcher.Callback callback) {
        boolean z5;
        Map<String, String> map;
        boolean z6;
        int i5;
        boolean z7;
        boolean z8;
        Intrinsics.checkNotNullParameter(fetchState, "fetchState");
        Intrinsics.checkNotNullParameter(callback, "callback");
        fetchState.f4563f = SystemClock.elapsedRealtime();
        ProducerContext producerContext = fetchState.f4691b;
        Uri sourceUri = producerContext.g().getSourceUri();
        Intrinsics.checkNotNullExpressionValue(sourceUri, "getUri(...)");
        boolean z10 = true;
        boolean z11 = false;
        int i6 = -1;
        if (producerContext.g() instanceof ReactNetworkImageRequest) {
            ImageRequest g6 = producerContext.g();
            Intrinsics.checkNotNull(g6, "null cannot be cast to non-null type com.facebook.react.modules.fresco.ReactNetworkImageRequest");
            ReactNetworkImageRequest reactNetworkImageRequest = (ReactNetworkImageRequest) g6;
            map = getHeaders(reactNetworkImageRequest.getHeaders());
            int i10 = WhenMappings.$EnumSwitchMapping$0[reactNetworkImageRequest.getCacheControl().ordinal()];
            if (i10 != 1) {
                if (i10 == 2) {
                    TimeUnit timeUnit = TimeUnit.SECONDS;
                    TimeUnit timeUnit2 = TimeUnit.SECONDS;
                    Intrinsics.checkNotNullParameter(timeUnit2, "timeUnit");
                    long seconds = timeUnit2.toSeconds(Integer.MAX_VALUE);
                    i6 = seconds > 2147483647L ? Integer.MAX_VALUE : (int) seconds;
                    z8 = false;
                } else if (i10 == 3) {
                    TimeUnit timeUnit3 = TimeUnit.SECONDS;
                    TimeUnit timeUnit4 = TimeUnit.SECONDS;
                    Intrinsics.checkNotNullParameter(timeUnit4, "timeUnit");
                    long seconds2 = timeUnit4.toSeconds(Integer.MAX_VALUE);
                    i6 = seconds2 > 2147483647L ? Integer.MAX_VALUE : (int) seconds2;
                    z8 = true;
                    z10 = false;
                } else {
                    if (i10 != 4) {
                        throw new n();
                    }
                    z8 = false;
                    z11 = true;
                }
                z10 = z8;
            } else {
                z8 = false;
                z11 = true;
            }
            z6 = z8;
            z5 = z11;
            i5 = i6;
            z7 = z10;
        } else {
            z5 = true;
            map = null;
            z6 = false;
            i5 = -1;
            z7 = false;
        }
        if (map == null) {
            map = v0.d();
        }
        Headers b10 = a.b(map);
        Request.Builder builder = new Request.Builder();
        builder.e(b10);
        builder.c(new CacheControl(z7, z5, -1, -1, false, false, false, i5, -1, z6, false, false, null));
        String uri = sourceUri.toString();
        Intrinsics.checkNotNullExpressionValue(uri, "toString(...)");
        builder.i(uri);
        builder.f("GET", null);
        fetchWithRequest(fetchState, callback, builder.b());
    }
}
