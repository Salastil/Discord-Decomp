package com.facebook.imagepipeline.backends.okhttp3;

import android.net.Uri;
import android.os.SystemClock;
import com.facebook.imagepipeline.common.BytesRange;
import com.facebook.imagepipeline.producers.Consumer;
import com.facebook.imagepipeline.producers.FetchState;
import com.facebook.imagepipeline.producers.NetworkFetcher;
import com.facebook.imagepipeline.producers.ProducerContext;
import com.facebook.imagepipeline.producers.d;
import com.facebook.imagepipeline.producers.v0;
import fo.u;
import java.io.IOException;
import java.util.Arrays;
import java.util.Map;
import java.util.concurrent.Executor;
import java.util.concurrent.ExecutorService;
import kotlin.Pair;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.StringCompanionObject;
import okhttp3.CacheControl;
import okhttp3.Call;
import okhttp3.OkHttpClient;
import okhttp3.Request;
import okhttp3.Response;
import org.jetbrains.annotations.NotNull;
import ts.h;

/* loaded from: classes3.dex */
public class OkHttpNetworkFetcher extends d {

    @NotNull
    private static final Companion Companion = new Companion();

    @NotNull
    private static final String FETCH_TIME = "fetch_time";

    @NotNull
    private static final String IMAGE_SIZE = "image_size";

    @NotNull
    private static final String QUEUE_TIME = "queue_time";

    @NotNull
    private static final String TOTAL_TIME = "total_time";
    private final CacheControl cacheControl;

    @NotNull
    private final Call.Factory callFactory;

    @NotNull
    private final Executor cancellationExecutor;

    public static final class Companion {
    }

    public static final class OkHttpNetworkFetchState extends FetchState {

        /* renamed from: f, reason: collision with root package name */
        public long f4563f;

        /* renamed from: g, reason: collision with root package name */
        public long f4564g;

        /* renamed from: h, reason: collision with root package name */
        public long f4565h;
    }

    public OkHttpNetworkFetcher(OkHttpClient callFactory) {
        Intrinsics.checkNotNullParameter(callFactory, "okHttpClient");
        ExecutorService cancellationExecutor = callFactory.f16046d.b();
        Intrinsics.checkNotNullExpressionValue(cancellationExecutor, "executorService(...)");
        Intrinsics.checkNotNullParameter(callFactory, "callFactory");
        Intrinsics.checkNotNullParameter(cancellationExecutor, "cancellationExecutor");
        this.callFactory = callFactory;
        this.cancellationExecutor = cancellationExecutor;
        this.cacheControl = new CacheControl(false, true, -1, -1, false, false, false, -1, -1, false, false, false, null);
    }

    public static final void access$handleException(OkHttpNetworkFetcher okHttpNetworkFetcher, Call call, Exception exc, NetworkFetcher.Callback callback) {
        okHttpNetworkFetcher.getClass();
        if (call.x()) {
            callback.a();
        } else {
            callback.onFailure(exc);
        }
    }

    public static final IOException access$makeExceptionFromResponse(OkHttpNetworkFetcher okHttpNetworkFetcher, String str, Response response) {
        okHttpNetworkFetcher.getClass();
        int i5 = ap.a.f2599e;
        Intrinsics.checkNotNullParameter(response, "response");
        Response response2 = response.E;
        return new IOException(str, new ap.a(5));
    }

    public void fetchWithRequest(@NotNull OkHttpNetworkFetchState fetchState, @NotNull NetworkFetcher.Callback callback, @NotNull Request request) {
        Intrinsics.checkNotNullParameter(fetchState, "fetchState");
        Intrinsics.checkNotNullParameter(callback, "callback");
        Intrinsics.checkNotNullParameter(request, "request");
        h a = this.callFactory.a(request);
        fetchState.f4691b.i(new a(a, this));
        a.d(new b(fetchState, this, callback));
    }

    @Override // com.facebook.imagepipeline.producers.NetworkFetcher
    @NotNull
    public OkHttpNetworkFetchState createFetchState(@NotNull Consumer consumer, @NotNull ProducerContext producerContext) {
        Intrinsics.checkNotNullParameter(consumer, "consumer");
        Intrinsics.checkNotNullParameter(producerContext, "context");
        Intrinsics.checkNotNullParameter(consumer, "consumer");
        Intrinsics.checkNotNullParameter(producerContext, "producerContext");
        return new OkHttpNetworkFetchState(consumer, producerContext);
    }

    @Override // com.facebook.imagepipeline.producers.NetworkFetcher
    public void fetch(OkHttpNetworkFetchState fetchState, NetworkFetcher.Callback callback) {
        Intrinsics.checkNotNullParameter(fetchState, "fetchState");
        Intrinsics.checkNotNullParameter(callback, "callback");
        fetchState.f4563f = SystemClock.elapsedRealtime();
        ProducerContext producerContext = fetchState.f4691b;
        Uri sourceUri = producerContext.g().getSourceUri();
        Intrinsics.checkNotNullExpressionValue(sourceUri, "getUri(...)");
        try {
            Request.Builder builder = new Request.Builder();
            builder.i(sourceUri.toString());
            builder.f("GET", null);
            CacheControl cacheControl = this.cacheControl;
            if (cacheControl != null) {
                builder.c(cacheControl);
            }
            BytesRange bytesRange = producerContext.g().getBytesRange();
            if (bytesRange != null) {
                StringCompanionObject stringCompanionObject = StringCompanionObject.INSTANCE;
                u uVar = BytesRange.f4575c;
                String format = String.format(null, "bytes=%s-%s", Arrays.copyOf(new Object[]{j8.b.b(bytesRange.a), j8.b.b(bytesRange.f4576b)}, 2));
                Intrinsics.checkNotNullExpressionValue(format, "format(...)");
                builder.a("Range", format);
            }
            Request b10 = builder.b();
            Intrinsics.checkNotNullExpressionValue(b10, "build(...)");
            fetchWithRequest(fetchState, callback, b10);
        } catch (Exception e9) {
            ((v0) callback).onFailure(e9);
        }
    }

    @Override // com.facebook.imagepipeline.producers.NetworkFetcher
    public Map<String, String> getExtraMap(@NotNull OkHttpNetworkFetchState fetchState, int i5) {
        Intrinsics.checkNotNullParameter(fetchState, "fetchState");
        return kotlin.collections.v0.g(new Pair(QUEUE_TIME, String.valueOf(fetchState.f4564g - fetchState.f4563f)), new Pair(FETCH_TIME, String.valueOf(fetchState.f4565h - fetchState.f4564g)), new Pair(TOTAL_TIME, String.valueOf(fetchState.f4565h - fetchState.f4563f)), new Pair(IMAGE_SIZE, String.valueOf(i5)));
    }

    @Override // com.facebook.imagepipeline.producers.NetworkFetcher
    public void onFetchCompletion(@NotNull OkHttpNetworkFetchState fetchState, int i5) {
        Intrinsics.checkNotNullParameter(fetchState, "fetchState");
        fetchState.f4565h = SystemClock.elapsedRealtime();
    }
}
