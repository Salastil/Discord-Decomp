package com.facebook.react.modules.network;

import android.content.Context;
import android.net.Uri;
import android.util.Base64;
import androidx.recyclerview.widget.h0;
import com.facebook.fbreact.specs.NativeNetworkingAndroidSpec;
import com.facebook.react.bridge.Callback;
import com.facebook.react.bridge.ReactApplicationContext;
import com.facebook.react.bridge.ReactMethod;
import com.facebook.react.bridge.ReadableArray;
import com.facebook.react.bridge.ReadableMap;
import com.facebook.react.bridge.ReadableType;
import com.facebook.react.bridge.WritableMap;
import com.facebook.react.common.build.ReactBuildConfig;
import com.facebook.react.common.network.OkHttpCallUtil;
import com.facebook.react.module.annotations.ReactModule;
import com.facebook.react.modules.network.NetworkingModule;
import e4.f;
import et.k;
import et.r;
import et.y;
import fo.d;
import io.sentry.e6;
import io.sentry.hints.j;
import java.io.IOException;
import java.io.InputStream;
import java.net.CookieHandler;
import java.nio.charset.Charset;
import java.nio.charset.StandardCharsets;
import java.util.ArrayList;
import java.util.HashSet;
import java.util.Iterator;
import java.util.List;
import java.util.Locale;
import java.util.Set;
import java.util.UUID;
import java.util.concurrent.TimeUnit;
import java.util.regex.Pattern;
import kotlin.Metadata;
import kotlin.Pair;
import kotlin.Unit;
import kotlin.collections.v0;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.SourceDebugExtension;
import kotlin.text.Charsets;
import kotlin.text.x;
import okhttp3.Call;
import okhttp3.CookieJar;
import okhttp3.Headers;
import okhttp3.Interceptor;
import okhttp3.MediaType;
import okhttp3.MultipartBody$Builder;
import okhttp3.OkHttpClient;
import okhttp3.Request;
import okhttp3.RequestBody;
import okhttp3.Response;
import okhttp3.ResponseBody;
import okhttp3.c;
import okio.ByteString;
import org.jetbrains.annotations.NotNull;
import ps.h;
import ps.t;
import qs.b;
import ve.i;

@ReactModule(name = "Networking")
@Metadata(d1 = {"\u0000 \u0001\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010 \n\u0002\u0018\u0002\n\u0002\b\b\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010#\n\u0002\u0010\b\n\u0000\n\u0002\u0010!\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000b\n\u0000\n\u0002\u0010\u0002\n\u0002\b\u0010\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0010\u0006\n\u0000\n\u0002\u0018\u0002\n\u0002\b\n\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0007\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\b\b\u0007\u0018\u0000 c2\u00020\u0001:\u0005_`abcB1\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\b\u0010\u0004\u001a\u0004\u0018\u00010\u0005\u0012\u0006\u0010\u0006\u001a\u00020\u0007\u0012\u000e\u0010\b\u001a\n\u0012\u0004\u0012\u00020\n\u0018\u00010\t¢\u0006\u0004\b\u000b\u0010\fB#\b\u0010\u0012\u0006\u0010\r\u001a\u00020\u0003\u0012\b\u0010\u0004\u001a\u0004\u0018\u00010\u0005\u0012\u0006\u0010\u0006\u001a\u00020\u0007¢\u0006\u0004\b\u000b\u0010\u000eB\u0011\b\u0016\u0012\u0006\u0010\r\u001a\u00020\u0003¢\u0006\u0004\b\u000b\u0010\u000fB!\b\u0016\u0012\u0006\u0010\r\u001a\u00020\u0003\u0012\u000e\u0010\b\u001a\n\u0012\u0004\u0012\u00020\n\u0018\u00010\t¢\u0006\u0004\b\u000b\u0010\u0010B\u001b\b\u0016\u0012\u0006\u0010\r\u001a\u00020\u0003\u0012\b\u0010\u0004\u001a\u0004\u0018\u00010\u0005¢\u0006\u0004\b\u000b\u0010\u0011J\b\u0010\"\u001a\u00020#H\u0016J\b\u0010$\u001a\u00020#H\u0016J\u0015\u0010%\u001a\u00020#2\u0006\u0010&\u001a\u00020\u001dH\u0000¢\u0006\u0002\b'J\u0015\u0010(\u001a\u00020#2\u0006\u0010&\u001a\u00020\u001bH\u0000¢\u0006\u0002\b)J\u0015\u0010*\u001a\u00020#2\u0006\u0010&\u001a\u00020\u001fH\u0000¢\u0006\u0002\b+J\u0015\u0010,\u001a\u00020#2\u0006\u0010&\u001a\u00020\u001dH\u0000¢\u0006\u0002\b-J\u0015\u0010.\u001a\u00020#2\u0006\u0010&\u001a\u00020\u001bH\u0000¢\u0006\u0002\b/J\u0015\u00100\u001a\u00020#2\u0006\u0010&\u001a\u00020\u001fH\u0000¢\u0006\u0002\b1J\u0012\u00102\u001a\u00020\u00052\b\u00103\u001a\u0004\u0018\u000104H\u0002JT\u00105\u001a\u00020#2\u0006\u00106\u001a\u00020\u00052\u0006\u00107\u001a\u00020\u00052\u0006\u00108\u001a\u0002092\b\u0010:\u001a\u0004\u0018\u00010;2\b\u00103\u001a\u0004\u0018\u0001042\u0006\u0010<\u001a\u00020\u00052\u0006\u0010=\u001a\u00020!2\u0006\u0010>\u001a\u0002092\u0006\u0010?\u001a\u00020!H\u0016JV\u0010@\u001a\u00020#2\u0006\u00106\u001a\u00020\u00052\b\u00107\u001a\u0004\u0018\u00010\u00052\u0006\u0010A\u001a\u00020\u00182\b\u0010:\u001a\u0004\u0018\u00010;2\b\u00103\u001a\u0004\u0018\u0001042\u0006\u0010<\u001a\u00020\u00052\u0006\u0010=\u001a\u00020!2\u0006\u0010B\u001a\u00020\u00182\u0006\u0010?\u001a\u00020!H\u0007J^\u0010C\u001a\u00020#2\u0006\u00106\u001a\u00020\u00052\b\u00107\u001a\u0004\u0018\u00010\u00052\u0006\u0010A\u001a\u00020\u00182\b\u0010:\u001a\u0004\u0018\u00010;2\b\u00103\u001a\u0004\u0018\u0001042\u0006\u0010<\u001a\u00020\u00052\u0006\u0010=\u001a\u00020!2\u0006\u0010B\u001a\u00020\u00182\u0006\u0010?\u001a\u00020!2\u0006\u0010D\u001a\u00020\u0005H\u0002J\u001c\u0010E\u001a\u0004\u0018\u00010F2\b\u0010G\u001a\u0004\u0018\u00010F2\u0006\u0010A\u001a\u00020\u0018H\u0002J \u0010H\u001a\u00020#2\u0006\u0010A\u001a\u00020\u00182\u0006\u0010D\u001a\u00020\u00052\u0006\u0010I\u001a\u00020JH\u0002J\u0010\u0010K\u001a\u00020#2\u0006\u0010A\u001a\u00020\u0018H\u0002J\u0010\u0010L\u001a\u00020#2\u0006\u0010A\u001a\u00020\u0018H\u0002J\b\u0010M\u001a\u00020#H\u0002J\u0010\u0010N\u001a\u00020#2\u0006\u00108\u001a\u000209H\u0016J\u0010\u0010O\u001a\u00020#2\u0006\u0010A\u001a\u00020\u0018H\u0002J\u0010\u0010P\u001a\u00020#2\u0006\u0010Q\u001a\u00020RH\u0017J\u0012\u0010S\u001a\u00020#2\b\u0010T\u001a\u0004\u0018\u00010\u0005H\u0016J\u0010\u0010U\u001a\u00020#2\u0006\u0010V\u001a\u000209H\u0016J*\u0010W\u001a\u0004\u0018\u00010X2\u0006\u0010Y\u001a\u00020;2\u0006\u0010Z\u001a\u00020\u00052\u0006\u0010A\u001a\u00020\u00182\u0006\u0010D\u001a\u00020\u0005H\u0002J\u001e\u0010[\u001a\u0004\u0018\u00010\\2\b\u0010]\u001a\u0004\u0018\u00010;2\b\u0010^\u001a\u0004\u0018\u000104H\u0002R\u000e\u0010\u0006\u001a\u00020\u0007X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0012\u001a\u00020\u0013X\u0082\u0004¢\u0006\u0002\n\u0000R\u0010\u0010\u0004\u001a\u0004\u0018\u00010\u0005X\u0082\u0004¢\u0006\u0002\n\u0000R\u0010\u0010\u0014\u001a\u0004\u0018\u00010\u0015X\u0082\u000e¢\u0006\u0002\n\u0000R\u0014\u0010\u0016\u001a\b\u0012\u0004\u0012\u00020\u00180\u0017X\u0082\u0004¢\u0006\u0002\n\u0000R\u0014\u0010\u0019\u001a\b\u0012\u0004\u0012\u00020\u001b0\u001aX\u0082\u0004¢\u0006\u0002\n\u0000R\u0014\u0010\u001c\u001a\b\u0012\u0004\u0012\u00020\u001d0\u001aX\u0082\u0004¢\u0006\u0002\n\u0000R\u0014\u0010\u001e\u001a\b\u0012\u0004\u0012\u00020\u001f0\u001aX\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010 \u001a\u00020!X\u0082\u000e¢\u0006\u0002\n\u0000¨\u0006d"}, d2 = {"Lcom/facebook/react/modules/network/NetworkingModule;", "Lcom/facebook/fbreact/specs/NativeNetworkingAndroidSpec;", "reactContext", "Lcom/facebook/react/bridge/ReactApplicationContext;", "defaultUserAgent", "", "client", "Lokhttp3/OkHttpClient;", "networkInterceptorCreators", "", "Lcom/facebook/react/modules/network/NetworkInterceptorCreator;", "<init>", "(Lcom/facebook/react/bridge/ReactApplicationContext;Ljava/lang/String;Lokhttp3/OkHttpClient;Ljava/util/List;)V", "context", "(Lcom/facebook/react/bridge/ReactApplicationContext;Ljava/lang/String;Lokhttp3/OkHttpClient;)V", "(Lcom/facebook/react/bridge/ReactApplicationContext;)V", "(Lcom/facebook/react/bridge/ReactApplicationContext;Ljava/util/List;)V", "(Lcom/facebook/react/bridge/ReactApplicationContext;Ljava/lang/String;)V", "cookieHandler", "Lcom/facebook/react/modules/network/ForwardingCookieHandler;", "cookieJarContainer", "Lcom/facebook/react/modules/network/CookieJarContainer;", "requestIds", "", "", "requestBodyHandlers", "", "Lcom/facebook/react/modules/network/NetworkingModule$RequestBodyHandler;", "uriHandlers", "Lcom/facebook/react/modules/network/NetworkingModule$UriHandler;", "responseHandlers", "Lcom/facebook/react/modules/network/NetworkingModule$ResponseHandler;", "shuttingDown", "", "initialize", "", "invalidate", "addUriHandler", "handler", "addUriHandler$ReactAndroid_release", "addRequestBodyHandler", "addRequestBodyHandler$ReactAndroid_release", "addResponseHandler", "addResponseHandler$ReactAndroid_release", "removeUriHandler", "removeUriHandler$ReactAndroid_release", "removeRequestBodyHandler", "removeRequestBodyHandler$ReactAndroid_release", "removeResponseHandler", "removeResponseHandler$ReactAndroid_release", "extractOrGenerateDevToolsRequestId", "data", "Lcom/facebook/react/bridge/ReadableMap;", "sendRequest", "method", "url", "requestIdAsDouble", "", "headers", "Lcom/facebook/react/bridge/ReadableArray;", "responseType", "useIncrementalUpdates", "timeoutAsDouble", "withCredentials", "sendRequestInternal", "requestId", "timeout", "sendRequestInternalReal", NetworkingModule.REQUEST_DATA_KEY_DEVTOOLS_REQUEST_ID, "wrapRequestBodyWithProgressEmitter", "Lokhttp3/RequestBody;", "requestBody", "readWithProgress", "responseBody", "Lokhttp3/ResponseBody;", "addRequest", "removeRequest", "cancelAllRequests", "abortRequest", "cancelRequest", "clearCookies", "callback", "Lcom/facebook/react/bridge/Callback;", "addListener", "eventName", "removeListeners", "count", "constructMultipartBody", "Lokhttp3/MultipartBody$Builder;", "body", "contentType", "extractHeaders", "Lokhttp3/Headers;", "headersArray", "requestData", "UriHandler", "RequestBodyHandler", "ResponseHandler", "CustomClientBuilder", "Companion", "ReactAndroid_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
@SourceDebugExtension({"SMAP\nNetworkingModule.kt\nKotlin\n*S Kotlin\n*F\n+ 1 NetworkingModule.kt\ncom/facebook/react/modules/network/NetworkingModule\n+ 2 OkHttpClient.kt\nokhttp3/OkHttpClient$Builder\n+ 3 fake.kt\nkotlin/jvm/internal/FakeKt\n*L\n1#1,1080:1\n578#2:1081\n1#3:1082\n*S KotlinDebug\n*F\n+ 1 NetworkingModule.kt\ncom/facebook/react/modules/network/NetworkingModule\n*L\n378#1:1081\n*E\n"})
/* loaded from: classes3.dex */
public final class NetworkingModule extends NativeNetworkingAndroidSpec {
    private static final int CHUNK_TIMEOUT_NS = 100000000;

    @NotNull
    private static final String CONTENT_ENCODING_HEADER_NAME = "content-encoding";

    @NotNull
    private static final String CONTENT_TYPE_HEADER_NAME = "content-type";

    /* renamed from: Companion, reason: from kotlin metadata */
    @NotNull
    public static final Companion INSTANCE = new Companion(null);
    private static final int MAX_CHUNK_SIZE_BETWEEN_FLUSHES = 8192;

    @NotNull
    public static final String NAME = "Networking";

    @NotNull
    private static final String REQUEST_BODY_KEY_BASE64 = "base64";

    @NotNull
    private static final String REQUEST_BODY_KEY_FORMDATA = "formData";

    @NotNull
    private static final String REQUEST_BODY_KEY_STRING = "string";

    @NotNull
    private static final String REQUEST_BODY_KEY_URI = "uri";

    @NotNull
    private static final String REQUEST_DATA_KEY_DEVTOOLS_REQUEST_ID = "devToolsRequestId";

    @NotNull
    private static final String TAG = "Networking";

    @NotNull
    private static final String USER_AGENT_HEADER_NAME = "user-agent";
    private static com.facebook.react.modules.network.CustomClientBuilder customClientBuilder;

    @NotNull
    private final OkHttpClient client;

    @NotNull
    private final ForwardingCookieHandler cookieHandler;
    private CookieJarContainer cookieJarContainer;
    private final String defaultUserAgent;

    @NotNull
    private final List<RequestBodyHandler> requestBodyHandlers;

    @NotNull
    private final Set<Integer> requestIds;

    @NotNull
    private final List<ResponseHandler> responseHandlers;
    private boolean shuttingDown;

    @NotNull
    private final List<UriHandler> uriHandlers;

    @Metadata(d1 = {"\u0000>\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\u000e\n\u0002\b\n\n\u0002\u0010\b\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000b\n\u0000\n\u0002\u0010\t\n\u0002\b\u0002\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\u0012\u0010\u0014\u001a\u00020\u00152\b\u0010\u0016\u001a\u0004\u0018\u00010\u0013H\u0007J\u0010\u0010\u0017\u001a\u00020\u00152\u0006\u0010\u0018\u001a\u00020\u0019H\u0002J\u0018\u0010\u001a\u001a\u00020\u001b2\u0006\u0010\u001c\u001a\u00020\u001d2\u0006\u0010\u001e\u001a\u00020\u001dH\u0002R\u000e\u0010\u0004\u001a\u00020\u0005X\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010\u0006\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\u0007\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\b\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\t\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\n\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\u000b\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\f\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\r\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\u000e\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\u000f\u001a\u00020\u0010X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\u0011\u001a\u00020\u0010X\u0082T¢\u0006\u0002\n\u0000R\u0010\u0010\u0012\u001a\u0004\u0018\u00010\u0013X\u0082\u000e¢\u0006\u0002\n\u0000¨\u0006\u001f"}, d2 = {"Lcom/facebook/react/modules/network/NetworkingModule$Companion;", "", "<init>", "()V", "NAME", "", "TAG", "CONTENT_ENCODING_HEADER_NAME", "CONTENT_TYPE_HEADER_NAME", "REQUEST_BODY_KEY_STRING", "REQUEST_BODY_KEY_URI", "REQUEST_BODY_KEY_FORMDATA", "REQUEST_BODY_KEY_BASE64", "REQUEST_DATA_KEY_DEVTOOLS_REQUEST_ID", "USER_AGENT_HEADER_NAME", "CHUNK_TIMEOUT_NS", "", "MAX_CHUNK_SIZE_BETWEEN_FLUSHES", "customClientBuilder", "Lcom/facebook/react/modules/network/CustomClientBuilder;", "setCustomClientBuilder", "", "ccb", "applyCustomBuilder", "builder", "Lokhttp3/OkHttpClient$Builder;", "shouldDispatch", "", "now", "", "last", "ReactAndroid_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final class Companion {
        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }

        /* JADX INFO: Access modifiers changed from: private */
        public final void applyCustomBuilder(OkHttpClient.Builder builder) {
            com.facebook.react.modules.network.CustomClientBuilder customClientBuilder = NetworkingModule.customClientBuilder;
            if (customClientBuilder != null) {
                customClientBuilder.apply(builder);
            }
        }

        /* JADX INFO: Access modifiers changed from: private */
        public final boolean shouldDispatch(long now, long last) {
            return last + ((long) NetworkingModule.CHUNK_TIMEOUT_NS) < now;
        }

        public final void setCustomClientBuilder(com.facebook.react.modules.network.CustomClientBuilder ccb) {
            NetworkingModule.customClientBuilder = ccb;
        }

        private Companion() {
        }
    }

    @d
    @Metadata(d1 = {"\u0000\n\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\bg\u0018\u00002\u00020\u0001ø\u0001\u0000\u0082\u0002\u0006\n\u0004\b!0\u0001¨\u0006\u0002À\u0006\u0001"}, d2 = {"Lcom/facebook/react/modules/network/NetworkingModule$CustomClientBuilder;", "Lcom/facebook/react/modules/network/CustomClientBuilder;", "ReactAndroid_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public interface CustomClientBuilder extends com.facebook.react.modules.network.CustomClientBuilder {
    }

    @Metadata(d1 = {"\u0000\"\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\u000b\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0000\b`\u0018\u00002\u00020\u0001J\u0010\u0010\u0002\u001a\u00020\u00032\u0006\u0010\u0004\u001a\u00020\u0005H&J\u001c\u0010\u0006\u001a\u0004\u0018\u00010\u00072\u0006\u0010\u0004\u001a\u00020\u00052\b\u0010\b\u001a\u0004\u0018\u00010\tH&ø\u0001\u0000\u0082\u0002\u0006\n\u0004\b!0\u0001¨\u0006\nÀ\u0006\u0001"}, d2 = {"Lcom/facebook/react/modules/network/NetworkingModule$RequestBodyHandler;", "", "supports", "", "map", "Lcom/facebook/react/bridge/ReadableMap;", "toRequestBody", "Lokhttp3/RequestBody;", "contentType", "", "ReactAndroid_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public interface RequestBodyHandler {
        boolean supports(@NotNull ReadableMap map);

        RequestBody toRequestBody(@NotNull ReadableMap map, String contentType);
    }

    @Metadata(d1 = {"\u0000\"\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\u000b\n\u0000\n\u0002\u0010\u000e\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0012\n\u0000\b`\u0018\u00002\u00020\u0001J\u0010\u0010\u0002\u001a\u00020\u00032\u0006\u0010\u0004\u001a\u00020\u0005H&J\u0010\u0010\u0006\u001a\u00020\u00072\u0006\u0010\b\u001a\u00020\tH&ø\u0001\u0000\u0082\u0002\u0006\n\u0004\b!0\u0001¨\u0006\nÀ\u0006\u0001"}, d2 = {"Lcom/facebook/react/modules/network/NetworkingModule$ResponseHandler;", "", "supports", "", "responseType", "", "toResponseData", "Lcom/facebook/react/bridge/WritableMap;", "data", "", "ReactAndroid_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public interface ResponseHandler {
        boolean supports(@NotNull String responseType);

        @NotNull
        WritableMap toResponseData(@NotNull byte[] data);
    }

    @Metadata(d1 = {"\u0000*\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\u000b\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0010\u0012\n\u0000\b`\u0018\u00002\u00020\u0001J\u0018\u0010\u0002\u001a\u00020\u00032\u0006\u0010\u0004\u001a\u00020\u00052\u0006\u0010\u0006\u001a\u00020\u0007H&J\u001c\u0010\b\u001a\u000e\u0012\u0004\u0012\u00020\n\u0012\u0004\u0012\u00020\u000b0\t2\u0006\u0010\u0004\u001a\u00020\u0005H&ø\u0001\u0000\u0082\u0002\u0006\n\u0004\b!0\u0001¨\u0006\fÀ\u0006\u0001"}, d2 = {"Lcom/facebook/react/modules/network/NetworkingModule$UriHandler;", "", "supports", "", NetworkingModule.REQUEST_BODY_KEY_URI, "Landroid/net/Uri;", "responseType", "", "fetch", "Lkotlin/Pair;", "Lcom/facebook/react/bridge/WritableMap;", "", "ReactAndroid_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public interface UriHandler {
        @NotNull
        Pair<WritableMap, byte[]> fetch(@NotNull Uri uri);

        boolean supports(@NotNull Uri uri, @NotNull String responseType);
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public NetworkingModule(@NotNull ReactApplicationContext reactContext, String str, @NotNull OkHttpClient client, List<? extends NetworkInterceptorCreator> list) {
        super(reactContext);
        Intrinsics.checkNotNullParameter(reactContext, "reactContext");
        Intrinsics.checkNotNullParameter(client, "client");
        this.cookieHandler = new ForwardingCookieHandler();
        this.requestIds = new HashSet();
        this.requestBodyHandlers = new ArrayList();
        this.uriHandlers = new ArrayList();
        this.responseHandlers = new ArrayList();
        if (list != null) {
            OkHttpClient.Builder b10 = client.b();
            Iterator<? extends NetworkInterceptorCreator> it = list.iterator();
            while (it.hasNext()) {
                Interceptor interceptor = it.next().create();
                Intrinsics.checkNotNullParameter(interceptor, "interceptor");
                b10.f16055d.add(interceptor);
            }
            client = new OkHttpClient(b10);
        }
        this.client = client;
        CookieJar cookieJar = client.G;
        this.cookieJarContainer = cookieJar instanceof CookieJarContainer ? (CookieJarContainer) cookieJar : null;
        this.defaultUserAgent = str;
    }

    private final synchronized void addRequest(int requestId) {
        this.requestIds.add(Integer.valueOf(requestId));
    }

    private final synchronized void cancelAllRequests() {
        try {
            Iterator<Integer> it = this.requestIds.iterator();
            while (it.hasNext()) {
                cancelRequest(it.next().intValue());
            }
            this.requestIds.clear();
        } catch (Throwable th2) {
            throw th2;
        }
    }

    private final void cancelRequest(int requestId) {
        OkHttpCallUtil.cancelTag(this.client, Integer.valueOf(requestId));
    }

    private final MultipartBody$Builder constructMultipartBody(ReadableArray body, String contentType, int requestId, String devToolsRequestId) {
        MediaType mediaType;
        ReactApplicationContext reactApplicationContextIfActiveOrWarn = getReactApplicationContextIfActiveOrWarn();
        MultipartBody$Builder multipartBody$Builder = new MultipartBody$Builder();
        Pattern pattern = MediaType.f16040d;
        Intrinsics.checkNotNullParameter(contentType, "mediaType");
        MediaType type = f.D(contentType);
        if (type == null) {
            NetworkEventUtil.onRequestError(reactApplicationContextIfActiveOrWarn, requestId, devToolsRequestId, "Invalid media type.", null);
            return null;
        }
        Intrinsics.checkNotNullParameter(type, "type");
        if (!Intrinsics.areEqual(type.f16042b, "multipart")) {
            throw new IllegalArgumentException(Intrinsics.stringPlus("multipart != ", type).toString());
        }
        multipartBody$Builder.f16044b = type;
        int size = body.size();
        for (int i5 = 0; i5 < size; i5++) {
            ReadableMap map = body.getMap(i5);
            if (map == null) {
                NetworkEventUtil.onRequestError(reactApplicationContextIfActiveOrWarn, requestId, devToolsRequestId, "Unrecognized FormData part.", null);
                return null;
            }
            Headers extractHeaders = extractHeaders(map.getArray("headers"), null);
            if (extractHeaders == null) {
                NetworkEventUtil.onRequestError(reactApplicationContextIfActiveOrWarn, requestId, devToolsRequestId, "Missing or invalid header format for FormData part.", null);
                return null;
            }
            String mediaType2 = extractHeaders.a(CONTENT_TYPE_HEADER_NAME);
            if (mediaType2 != null) {
                Pattern pattern2 = MediaType.f16040d;
                Intrinsics.checkNotNullParameter(mediaType2, "mediaType");
                mediaType = f.D(mediaType2);
                e6 d6 = extractHeaders.d();
                d6.f(CONTENT_TYPE_HEADER_NAME);
                extractHeaders = d6.d();
            } else {
                mediaType = null;
            }
            if (map.hasKey(REQUEST_BODY_KEY_STRING) && map.getString(REQUEST_BODY_KEY_STRING) != null) {
                String content = map.getString(REQUEST_BODY_KEY_STRING);
                if (content == null) {
                    content = "";
                }
                RequestBody.Companion.getClass();
                Intrinsics.checkNotNullParameter(content, "content");
                multipartBody$Builder.a(extractHeaders, RequestBody.Companion.a(content, mediaType));
            } else if (!map.hasKey(REQUEST_BODY_KEY_URI) || map.getString(REQUEST_BODY_KEY_URI) == null) {
                NetworkEventUtil.onRequestError(reactApplicationContextIfActiveOrWarn, requestId, devToolsRequestId, "Unrecognized FormData part.", null);
                Unit unit = Unit.a;
            } else {
                if (mediaType == null) {
                    NetworkEventUtil.onRequestError(reactApplicationContextIfActiveOrWarn, requestId, devToolsRequestId, "Binary FormData part needs a content-type header.", null);
                    return null;
                }
                String string = map.getString(REQUEST_BODY_KEY_URI);
                if (string == null) {
                    NetworkEventUtil.onRequestError(reactApplicationContextIfActiveOrWarn, requestId, devToolsRequestId, "Body must have a valid file uri", null);
                    return null;
                }
                ReactApplicationContext reactApplicationContext = getReactApplicationContext();
                Intrinsics.checkNotNullExpressionValue(reactApplicationContext, "getReactApplicationContext(...)");
                InputStream fileInputStream = RequestBodyUtil.getFileInputStream(reactApplicationContext, string);
                if (fileInputStream == null) {
                    NetworkEventUtil.onRequestError(reactApplicationContextIfActiveOrWarn, requestId, devToolsRequestId, "Could not retrieve file for uri ".concat(string), null);
                    return null;
                }
                multipartBody$Builder.a(extractHeaders, RequestBodyUtil.create(mediaType, fileInputStream));
            }
        }
        return multipartBody$Builder;
    }

    private final Headers extractHeaders(ReadableArray headersArray, ReadableMap requestData) {
        String str;
        if (headersArray == null) {
            return null;
        }
        e6 e6Var = new e6();
        int size = headersArray.size();
        for (int i5 = 0; i5 < size; i5++) {
            ReadableArray array = headersArray.getArray(i5);
            if (array == null || array.size() != 2) {
                return null;
            }
            String name = array.getString(0);
            if (name != null) {
                name = HeaderUtil.INSTANCE.stripHeaderName(name);
            }
            String value = array.getString(1);
            if (name == null || value == null) {
                return null;
            }
            Intrinsics.checkNotNullParameter(name, "name");
            Intrinsics.checkNotNullParameter(value, "value");
            if (name.length() <= 0) {
                throw new IllegalArgumentException("name is empty");
            }
            int length = name.length();
            int i6 = 0;
            while (i6 < length) {
                int i10 = i6 + 1;
                char charAt = name.charAt(i6);
                if ('!' > charAt || charAt >= 127) {
                    throw new IllegalArgumentException(b.h("Unexpected char %#04x at %d in header name: %s", Integer.valueOf(charAt), Integer.valueOf(i6), name).toString());
                }
                i6 = i10;
            }
            e6Var.c(name, value);
        }
        if (e6Var.e(USER_AGENT_HEADER_NAME) == null && (str = this.defaultUserAgent) != null) {
            e6Var.a(USER_AGENT_HEADER_NAME, str);
        }
        if (requestData == null || !requestData.hasKey(REQUEST_BODY_KEY_STRING)) {
            e6Var.f(CONTENT_ENCODING_HEADER_NAME);
        }
        return e6Var.d();
    }

    private final String extractOrGenerateDevToolsRequestId(ReadableMap data) {
        String string = (data != null && data.hasKey(REQUEST_DATA_KEY_DEVTOOLS_REQUEST_ID) && data.getType(REQUEST_DATA_KEY_DEVTOOLS_REQUEST_ID) == ReadableType.String) ? data.getString(REQUEST_DATA_KEY_DEVTOOLS_REQUEST_ID) : null;
        if (string != null) {
            return string;
        }
        String uuid = UUID.randomUUID().toString();
        Intrinsics.checkNotNullExpressionValue(uuid, "toString(...)");
        return uuid;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final void readWithProgress(int requestId, String devToolsRequestId, ResponseBody responseBody) {
        long j;
        Charset a;
        long j5 = -1;
        try {
            Intrinsics.checkNotNull(responseBody, "null cannot be cast to non-null type com.facebook.react.modules.network.ProgressResponseBody");
            ProgressResponseBody progressResponseBody = (ProgressResponseBody) responseBody;
            j = progressResponseBody.getTotalBytesRead();
            try {
                j5 = progressResponseBody.contentLength();
            } catch (ClassCastException unused) {
            }
        } catch (ClassCastException unused2) {
            j = -1;
        }
        long j7 = j5;
        long j10 = j;
        if (responseBody.contentType() == null) {
            a = StandardCharsets.UTF_8;
        } else {
            MediaType contentType = responseBody.contentType();
            a = contentType != null ? contentType.a(StandardCharsets.UTF_8) : null;
            if (a == null) {
                throw new IllegalStateException(("Null character set for Content-Type: " + responseBody.contentType()).toString());
            }
        }
        Intrinsics.checkNotNull(a);
        ProgressiveStringDecoder progressiveStringDecoder = new ProgressiveStringDecoder(a);
        InputStream byteStream = responseBody.byteStream();
        try {
            byte[] bArr = new byte[MAX_CHUNK_SIZE_BETWEEN_FLUSHES];
            ReactApplicationContext reactApplicationContextIfActiveOrWarn = getReactApplicationContextIfActiveOrWarn();
            while (true) {
                int read = byteStream.read(bArr);
                if (read == -1) {
                    return;
                } else {
                    NetworkEventUtil.onIncrementalDataReceived(reactApplicationContextIfActiveOrWarn, requestId, devToolsRequestId, progressiveStringDecoder.decodeNext(bArr, read), j10, j7);
                }
            }
        } finally {
            byteStream.close();
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final synchronized void removeRequest(int requestId) {
        this.requestIds.remove(Integer.valueOf(requestId));
    }

    /* JADX WARN: Removed duplicated region for block: B:71:0x02ba  */
    /* JADX WARN: Removed duplicated region for block: B:73:0x02c2  */
    /* JADX WARN: Removed duplicated region for block: B:77:0x02cb  */
    /* JADX WARN: Removed duplicated region for block: B:78:0x02bf  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private final void sendRequestInternalReal(String method, String url, final int requestId, ReadableArray headers, ReadableMap data, final String responseType, final boolean useIncrementalUpdates, int timeout, boolean withCredentials, final String devToolsRequestId) {
        String str;
        ReactApplicationContext reactApplicationContext;
        int i5;
        RequestBodyHandler requestBodyHandler;
        String str2;
        RequestBody emptyBody;
        Charset a;
        String str3;
        ReactApplicationContext reactApplicationContextIfActiveOrWarn = getReactApplicationContextIfActiveOrWarn();
        try {
            Uri parse = Uri.parse(url);
            for (UriHandler uriHandler : this.uriHandlers) {
                try {
                    Intrinsics.checkNotNull(parse);
                    if (uriHandler.supports(parse, responseType)) {
                        Pair<WritableMap, byte[]> fetch = uriHandler.fetch(parse);
                        WritableMap writableMap = (WritableMap) fetch.f13474d;
                        byte[] bArr = (byte[]) fetch.f13475e;
                        byte[] bytes = writableMap.toString().getBytes(Charsets.UTF_8);
                        Intrinsics.checkNotNullExpressionValue(bytes, "getBytes(...)");
                        long length = bytes.length;
                        str = devToolsRequestId;
                        try {
                            NetworkEventUtil.onResponseReceived(reactApplicationContextIfActiveOrWarn, requestId, str, url, h0.DEFAULT_DRAG_ANIMATION_DURATION, v0.d(), length);
                            reactApplicationContext = reactApplicationContextIfActiveOrWarn;
                            i5 = requestId;
                            str3 = str;
                            try {
                                NetworkEventUtil.onDataReceived(reactApplicationContext, i5, str3, writableMap, bArr);
                                NetworkEventUtil.onRequestSuccess(reactApplicationContext, i5, str3, length);
                                return;
                            } catch (IOException e9) {
                                e = e9;
                                str = str3;
                                NetworkEventUtil.onRequestError(reactApplicationContext, i5, str, e.getMessage(), e);
                                return;
                            }
                        } catch (IOException e10) {
                            e = e10;
                            reactApplicationContext = reactApplicationContextIfActiveOrWarn;
                            i5 = requestId;
                            NetworkEventUtil.onRequestError(reactApplicationContext, i5, str, e.getMessage(), e);
                            return;
                        }
                    }
                    reactApplicationContextIfActiveOrWarn = reactApplicationContextIfActiveOrWarn;
                } catch (IOException e11) {
                    e = e11;
                    str3 = devToolsRequestId;
                    reactApplicationContext = reactApplicationContextIfActiveOrWarn;
                    i5 = requestId;
                }
            }
            final ReactApplicationContext reactApplicationContext2 = reactApplicationContextIfActiveOrWarn;
            try {
                Request.Builder builder = new Request.Builder();
                builder.i(url == null ? "" : url);
                if (requestId != 0) {
                    builder.h(Integer.valueOf(requestId));
                }
                OkHttpClient.Builder b10 = this.client.b();
                INSTANCE.applyCustomBuilder(b10);
                if (!withCredentials) {
                    b10.b(CookieJar.f16025q);
                }
                if (useIncrementalUpdates) {
                    Interceptor interceptor = new Interceptor() { // from class: com.facebook.react.modules.network.NetworkingModule$sendRequestInternalReal$$inlined$-addNetworkInterceptor$1
                        @Override // okhttp3.Interceptor
                        @NotNull
                        public final Response intercept(@NotNull Interceptor.Chain chain) {
                            Intrinsics.checkNotNullParameter(chain, "chain");
                            Response a10 = chain.a(chain.i());
                            ResponseBody responseBody = a10.f16091y;
                            if (responseBody == null) {
                                throw new IllegalStateException("Required value was null.");
                            }
                            final String str4 = responseType;
                            final ReactApplicationContext reactApplicationContext3 = reactApplicationContext2;
                            final int i6 = requestId;
                            ProgressResponseBody progressResponseBody = new ProgressResponseBody(responseBody, new ProgressListener() { // from class: com.facebook.react.modules.network.NetworkingModule$sendRequestInternalReal$1$responseBody$1
                                private long last = System.nanoTime();

                                public final long getLast() {
                                    return this.last;
                                }

                                @Override // com.facebook.react.modules.network.ProgressListener
                                public void onProgress(long bytesWritten, long contentLength, boolean done) {
                                    boolean shouldDispatch;
                                    long nanoTime = System.nanoTime();
                                    if (!done) {
                                        shouldDispatch = NetworkingModule.INSTANCE.shouldDispatch(nanoTime, this.last);
                                        if (!shouldDispatch) {
                                            return;
                                        }
                                    }
                                    if (Intrinsics.areEqual(str4, "text")) {
                                        return;
                                    }
                                    NetworkEventUtil.onDataReceivedProgress(reactApplicationContext3, i6, bytesWritten, contentLength);
                                    this.last = nanoTime;
                                }

                                public final void setLast(long j) {
                                    this.last = j;
                                }
                            });
                            t i10 = a10.i();
                            i10.f16591g = progressResponseBody;
                            return i10.a();
                        }
                    };
                    Intrinsics.checkNotNullParameter(interceptor, "interceptor");
                    b10.f16055d.add(interceptor);
                }
                if (timeout != this.client.T) {
                    TimeUnit unit = TimeUnit.MILLISECONDS;
                    Intrinsics.checkNotNullParameter(unit, "unit");
                    b10.f16072w = b.b(timeout, unit);
                }
                OkHttpClient okHttpClient = new OkHttpClient(b10);
                Headers extractHeaders = extractHeaders(headers, data);
                if (extractHeaders == null) {
                    NetworkEventUtil.onRequestError(reactApplicationContext2, requestId, devToolsRequestId, "Unrecognized headers format", null);
                    return;
                }
                String mediaType = extractHeaders.a(CONTENT_TYPE_HEADER_NAME);
                String a10 = extractHeaders.a(CONTENT_ENCODING_HEADER_NAME);
                builder.e(extractHeaders);
                if (data != null) {
                    Iterator<RequestBodyHandler> it = this.requestBodyHandlers.iterator();
                    while (it.hasNext()) {
                        requestBodyHandler = it.next();
                        if (requestBodyHandler.supports(data)) {
                            break;
                        }
                    }
                }
                requestBodyHandler = null;
                if (data != null) {
                    Locale locale = Locale.ROOT;
                    String lowerCase = method.toLowerCase(locale);
                    Intrinsics.checkNotNullExpressionValue(lowerCase, "toLowerCase(...)");
                    if (!Intrinsics.areEqual(lowerCase, "get")) {
                        String lowerCase2 = method.toLowerCase(locale);
                        Intrinsics.checkNotNullExpressionValue(lowerCase2, "toLowerCase(...)");
                        if (!Intrinsics.areEqual(lowerCase2, "head")) {
                            if (requestBodyHandler != null) {
                                emptyBody = requestBodyHandler.toRequestBody(data, mediaType);
                            } else if (data.hasKey(REQUEST_BODY_KEY_STRING)) {
                                if (mediaType == null) {
                                    NetworkEventUtil.onRequestError(reactApplicationContext2, requestId, devToolsRequestId, "Payload is set but no content-type header specified", null);
                                    return;
                                }
                                String string = data.getString(REQUEST_BODY_KEY_STRING);
                                Pattern pattern = MediaType.f16040d;
                                Intrinsics.checkNotNullParameter(mediaType, "mediaType");
                                MediaType D = f.D(mediaType);
                                if (RequestBodyUtil.isGzipEncoding(a10)) {
                                    emptyBody = (D == null || string == null) ? null : RequestBodyUtil.createGzip(D, string);
                                    if (emptyBody == null) {
                                        NetworkEventUtil.onRequestError(reactApplicationContext2, requestId, devToolsRequestId, "Failed to gzip request body", null);
                                        return;
                                    }
                                } else {
                                    if (D == null) {
                                        a = StandardCharsets.UTF_8;
                                    } else {
                                        a = D.a(StandardCharsets.UTF_8);
                                        if (a == null) {
                                            throw new IllegalStateException("Required value was null.");
                                        }
                                    }
                                    if (string == null) {
                                        NetworkEventUtil.onRequestError(reactApplicationContext2, requestId, devToolsRequestId, "Received request but body was empty", null);
                                        return;
                                    }
                                    RequestBody.Companion companion = RequestBody.Companion;
                                    Intrinsics.checkNotNull(a);
                                    byte[] bytes2 = string.getBytes(a);
                                    Intrinsics.checkNotNullExpressionValue(bytes2, "getBytes(...)");
                                    emptyBody = RequestBody.Companion.c(companion, D, bytes2, 0, 12);
                                }
                            } else if (data.hasKey(REQUEST_BODY_KEY_BASE64)) {
                                if (mediaType == null) {
                                    NetworkEventUtil.onRequestError(reactApplicationContext2, requestId, devToolsRequestId, "Payload is set but no content-type header specified", null);
                                    return;
                                }
                                String string2 = data.getString(REQUEST_BODY_KEY_BASE64);
                                if (string2 == null) {
                                    throw new IllegalStateException("Required value was null.");
                                }
                                Pattern pattern2 = MediaType.f16040d;
                                Intrinsics.checkNotNullParameter(mediaType, "mediaType");
                                MediaType D2 = f.D(mediaType);
                                if (D2 == null) {
                                    NetworkEventUtil.onRequestError(reactApplicationContext2, requestId, devToolsRequestId, "Invalid content type specified: ".concat(mediaType), null);
                                    return;
                                }
                                ByteString byteString = ByteString.f16115v;
                                Intrinsics.checkNotNullParameter(string2, "string");
                                ByteString content = j.B(string2);
                                if (content == null) {
                                    NetworkEventUtil.onRequestError(reactApplicationContext2, requestId, devToolsRequestId, "Request body base64 string was invalid", null);
                                    return;
                                }
                                RequestBody.Companion.getClass();
                                Intrinsics.checkNotNullParameter(content, "content");
                                Intrinsics.checkNotNullParameter(content, "<this>");
                                emptyBody = new c(D2, content);
                            } else {
                                if (!data.hasKey(REQUEST_BODY_KEY_URI)) {
                                    if (data.hasKey(REQUEST_BODY_KEY_FORMDATA)) {
                                        if (mediaType == null) {
                                            mediaType = "multipart/form-data";
                                        }
                                        ReadableArray array = data.getArray(REQUEST_BODY_KEY_FORMDATA);
                                        if (array == null) {
                                            NetworkEventUtil.onRequestError(reactApplicationContext2, requestId, devToolsRequestId, "Received request but form data was empty", null);
                                            return;
                                        }
                                        str2 = null;
                                        MultipartBody$Builder constructMultipartBody = constructMultipartBody(array, mediaType, requestId, devToolsRequestId);
                                        if (constructMultipartBody == null) {
                                            return;
                                        }
                                        ArrayList arrayList = constructMultipartBody.f16045c;
                                        if (arrayList.isEmpty()) {
                                            throw new IllegalStateException("Multipart body must have at least one part.");
                                        }
                                        emptyBody = new okhttp3.a(constructMultipartBody.a, constructMultipartBody.f16044b, b.w(arrayList));
                                    } else {
                                        str2 = null;
                                        emptyBody = RequestBodyUtil.getEmptyBody(method);
                                    }
                                    builder.f(method, wrapRequestBodyWithProgressEmitter(emptyBody, requestId));
                                    addRequest(requestId);
                                    Request b11 = builder.b();
                                    RequestBody requestBody = b11.f16078d;
                                    NetworkEventUtil.onCreateRequest(devToolsRequestId, b11.a.f16038h, b11.f16076b, NetworkEventUtil.okHttpHeadersToMap(b11.f16077c), ReactBuildConfig.DEBUG ? NetworkEventUtil.getRequestBodyPreview(requestBody) : str2, requestBody != null ? requestBody.contentLength() : 0L);
                                    okHttpClient.a(b11).d(new h() { // from class: com.facebook.react.modules.network.NetworkingModule$sendRequestInternalReal$2
                                        @Override // ps.h
                                        public void onFailure(Call call, IOException e12) {
                                            boolean z5;
                                            Intrinsics.checkNotNullParameter(call, "call");
                                            Intrinsics.checkNotNullParameter(e12, "e");
                                            z5 = NetworkingModule.this.shuttingDown;
                                            if (z5) {
                                                return;
                                            }
                                            NetworkingModule.this.removeRequest(requestId);
                                            String message = e12.getMessage();
                                            if (message == null) {
                                                message = "Error while executing request: ".concat(e12.getClass().getSimpleName());
                                            }
                                            NetworkEventUtil.onRequestError(reactApplicationContext2, requestId, devToolsRequestId, message, e12);
                                        }

                                        @Override // ps.h
                                        public void onResponse(Call call, Response response) {
                                            boolean z5;
                                            List<NetworkingModule.ResponseHandler> list;
                                            MediaType mediaType2;
                                            Intrinsics.checkNotNullParameter(call, "call");
                                            Intrinsics.checkNotNullParameter(response, "response");
                                            z5 = NetworkingModule.this.shuttingDown;
                                            if (z5) {
                                                return;
                                            }
                                            NetworkingModule.this.removeRequest(requestId);
                                            ReactApplicationContext reactApplicationContext3 = reactApplicationContext2;
                                            int i6 = requestId;
                                            String str4 = devToolsRequestId;
                                            Request request = response.f16085d;
                                            ResponseBody responseBody = response.f16091y;
                                            NetworkEventUtil.onResponseReceived(reactApplicationContext3, i6, str4, request.a.f16038h, response.f16088v, NetworkEventUtil.okHttpHeadersToMap(response.f16090x), responseBody != null ? responseBody.contentLength() : 0L);
                                            try {
                                                try {
                                                    if (responseBody == null) {
                                                        NetworkEventUtil.onRequestError(reactApplicationContext2, requestId, devToolsRequestId, "Response body is null", null);
                                                        return;
                                                    }
                                                    if ("gzip".equalsIgnoreCase(response.f("Content-Encoding", null))) {
                                                        k source = new k(responseBody.source());
                                                        String mediaType3 = response.f("Content-Type", null);
                                                        if (mediaType3 != null) {
                                                            Pattern pattern3 = MediaType.f16040d;
                                                            Intrinsics.checkNotNullParameter(mediaType3, "mediaType");
                                                            mediaType2 = f.D(mediaType3);
                                                        } else {
                                                            mediaType2 = null;
                                                        }
                                                        ResponseBody.Companion companion2 = ResponseBody.Companion;
                                                        Intrinsics.checkNotNullParameter(source, "source");
                                                        r content2 = y.d(source);
                                                        companion2.getClass();
                                                        Intrinsics.checkNotNullParameter(content2, "content");
                                                        responseBody = ResponseBody.Companion.b(mediaType2, -1L, content2);
                                                    }
                                                    ResponseBody responseBody2 = responseBody;
                                                    list = NetworkingModule.this.responseHandlers;
                                                    for (NetworkingModule.ResponseHandler responseHandler : list) {
                                                        if (responseHandler.supports(responseType)) {
                                                            byte[] bytes3 = responseBody2.bytes();
                                                            NetworkEventUtil.onDataReceived(reactApplicationContext2, requestId, devToolsRequestId, responseHandler.toResponseData(bytes3), bytes3);
                                                            NetworkEventUtil.onRequestSuccess(reactApplicationContext2, requestId, devToolsRequestId, responseBody2.contentLength());
                                                            return;
                                                        }
                                                    }
                                                    if (useIncrementalUpdates && Intrinsics.areEqual(responseType, "text")) {
                                                        NetworkingModule.this.readWithProgress(requestId, devToolsRequestId, responseBody2);
                                                        NetworkEventUtil.onRequestSuccess(reactApplicationContext2, requestId, devToolsRequestId, responseBody2.contentLength());
                                                        return;
                                                    }
                                                    String str5 = "";
                                                    if (Intrinsics.areEqual(responseType, "text")) {
                                                        try {
                                                            str5 = responseBody2.string();
                                                        } catch (IOException e12) {
                                                            if (!x.i(response.f16085d.f16076b, "HEAD", true)) {
                                                                NetworkEventUtil.onRequestError(reactApplicationContext2, requestId, devToolsRequestId, e12.getMessage(), e12);
                                                            }
                                                        }
                                                    } else if (Intrinsics.areEqual(responseType, "base64")) {
                                                        str5 = Base64.encodeToString(responseBody2.bytes(), 2);
                                                    }
                                                    NetworkEventUtil.onDataReceived(reactApplicationContext2, requestId, devToolsRequestId, str5, responseType);
                                                    NetworkEventUtil.onRequestSuccess(reactApplicationContext2, requestId, devToolsRequestId, responseBody2.contentLength());
                                                } catch (OutOfMemoryError unused) {
                                                    NetworkEventUtil.onRequestError(reactApplicationContext2, requestId, devToolsRequestId, "Out of memory while processing network response", null);
                                                }
                                            } catch (IOException e13) {
                                                NetworkEventUtil.onRequestError(reactApplicationContext2, requestId, devToolsRequestId, e13.getMessage(), e13);
                                            }
                                        }
                                    });
                                }
                                if (mediaType == null) {
                                    NetworkEventUtil.onRequestError(reactApplicationContext2, requestId, devToolsRequestId, "Payload is set but no content-type header specified", null);
                                    return;
                                }
                                String string3 = data.getString(REQUEST_BODY_KEY_URI);
                                if (string3 == null) {
                                    NetworkEventUtil.onRequestError(reactApplicationContext2, requestId, devToolsRequestId, "Request body URI field was set but null", null);
                                    return;
                                }
                                ReactApplicationContext reactApplicationContext3 = getReactApplicationContext();
                                Intrinsics.checkNotNullExpressionValue(reactApplicationContext3, "getReactApplicationContext(...)");
                                InputStream fileInputStream = RequestBodyUtil.getFileInputStream(reactApplicationContext3, string3);
                                if (fileInputStream == null) {
                                    NetworkEventUtil.onRequestError(reactApplicationContext2, requestId, devToolsRequestId, "Could not retrieve file for uri ".concat(string3), null);
                                    return;
                                } else {
                                    Pattern pattern3 = MediaType.f16040d;
                                    Intrinsics.checkNotNullParameter(mediaType, "mediaType");
                                    emptyBody = RequestBodyUtil.create(f.D(mediaType), fileInputStream);
                                }
                            }
                            str2 = null;
                            builder.f(method, wrapRequestBodyWithProgressEmitter(emptyBody, requestId));
                            addRequest(requestId);
                            Request b112 = builder.b();
                            RequestBody requestBody2 = b112.f16078d;
                            NetworkEventUtil.onCreateRequest(devToolsRequestId, b112.a.f16038h, b112.f16076b, NetworkEventUtil.okHttpHeadersToMap(b112.f16077c), ReactBuildConfig.DEBUG ? NetworkEventUtil.getRequestBodyPreview(requestBody2) : str2, requestBody2 != null ? requestBody2.contentLength() : 0L);
                            okHttpClient.a(b112).d(new h() { // from class: com.facebook.react.modules.network.NetworkingModule$sendRequestInternalReal$2
                                @Override // ps.h
                                public void onFailure(Call call, IOException e12) {
                                    boolean z5;
                                    Intrinsics.checkNotNullParameter(call, "call");
                                    Intrinsics.checkNotNullParameter(e12, "e");
                                    z5 = NetworkingModule.this.shuttingDown;
                                    if (z5) {
                                        return;
                                    }
                                    NetworkingModule.this.removeRequest(requestId);
                                    String message = e12.getMessage();
                                    if (message == null) {
                                        message = "Error while executing request: ".concat(e12.getClass().getSimpleName());
                                    }
                                    NetworkEventUtil.onRequestError(reactApplicationContext2, requestId, devToolsRequestId, message, e12);
                                }

                                @Override // ps.h
                                public void onResponse(Call call, Response response) {
                                    boolean z5;
                                    List<NetworkingModule.ResponseHandler> list;
                                    MediaType mediaType2;
                                    Intrinsics.checkNotNullParameter(call, "call");
                                    Intrinsics.checkNotNullParameter(response, "response");
                                    z5 = NetworkingModule.this.shuttingDown;
                                    if (z5) {
                                        return;
                                    }
                                    NetworkingModule.this.removeRequest(requestId);
                                    ReactApplicationContext reactApplicationContext32 = reactApplicationContext2;
                                    int i6 = requestId;
                                    String str4 = devToolsRequestId;
                                    Request request = response.f16085d;
                                    ResponseBody responseBody = response.f16091y;
                                    NetworkEventUtil.onResponseReceived(reactApplicationContext32, i6, str4, request.a.f16038h, response.f16088v, NetworkEventUtil.okHttpHeadersToMap(response.f16090x), responseBody != null ? responseBody.contentLength() : 0L);
                                    try {
                                        try {
                                            if (responseBody == null) {
                                                NetworkEventUtil.onRequestError(reactApplicationContext2, requestId, devToolsRequestId, "Response body is null", null);
                                                return;
                                            }
                                            if ("gzip".equalsIgnoreCase(response.f("Content-Encoding", null))) {
                                                k source = new k(responseBody.source());
                                                String mediaType3 = response.f("Content-Type", null);
                                                if (mediaType3 != null) {
                                                    Pattern pattern32 = MediaType.f16040d;
                                                    Intrinsics.checkNotNullParameter(mediaType3, "mediaType");
                                                    mediaType2 = f.D(mediaType3);
                                                } else {
                                                    mediaType2 = null;
                                                }
                                                ResponseBody.Companion companion2 = ResponseBody.Companion;
                                                Intrinsics.checkNotNullParameter(source, "source");
                                                r content2 = y.d(source);
                                                companion2.getClass();
                                                Intrinsics.checkNotNullParameter(content2, "content");
                                                responseBody = ResponseBody.Companion.b(mediaType2, -1L, content2);
                                            }
                                            ResponseBody responseBody2 = responseBody;
                                            list = NetworkingModule.this.responseHandlers;
                                            for (NetworkingModule.ResponseHandler responseHandler : list) {
                                                if (responseHandler.supports(responseType)) {
                                                    byte[] bytes3 = responseBody2.bytes();
                                                    NetworkEventUtil.onDataReceived(reactApplicationContext2, requestId, devToolsRequestId, responseHandler.toResponseData(bytes3), bytes3);
                                                    NetworkEventUtil.onRequestSuccess(reactApplicationContext2, requestId, devToolsRequestId, responseBody2.contentLength());
                                                    return;
                                                }
                                            }
                                            if (useIncrementalUpdates && Intrinsics.areEqual(responseType, "text")) {
                                                NetworkingModule.this.readWithProgress(requestId, devToolsRequestId, responseBody2);
                                                NetworkEventUtil.onRequestSuccess(reactApplicationContext2, requestId, devToolsRequestId, responseBody2.contentLength());
                                                return;
                                            }
                                            String str5 = "";
                                            if (Intrinsics.areEqual(responseType, "text")) {
                                                try {
                                                    str5 = responseBody2.string();
                                                } catch (IOException e12) {
                                                    if (!x.i(response.f16085d.f16076b, "HEAD", true)) {
                                                        NetworkEventUtil.onRequestError(reactApplicationContext2, requestId, devToolsRequestId, e12.getMessage(), e12);
                                                    }
                                                }
                                            } else if (Intrinsics.areEqual(responseType, "base64")) {
                                                str5 = Base64.encodeToString(responseBody2.bytes(), 2);
                                            }
                                            NetworkEventUtil.onDataReceived(reactApplicationContext2, requestId, devToolsRequestId, str5, responseType);
                                            NetworkEventUtil.onRequestSuccess(reactApplicationContext2, requestId, devToolsRequestId, responseBody2.contentLength());
                                        } catch (OutOfMemoryError unused) {
                                            NetworkEventUtil.onRequestError(reactApplicationContext2, requestId, devToolsRequestId, "Out of memory while processing network response", null);
                                        }
                                    } catch (IOException e13) {
                                        NetworkEventUtil.onRequestError(reactApplicationContext2, requestId, devToolsRequestId, e13.getMessage(), e13);
                                    }
                                }
                            });
                        }
                    }
                    str2 = null;
                } else {
                    str2 = null;
                }
                emptyBody = RequestBodyUtil.getEmptyBody(method);
                builder.f(method, wrapRequestBodyWithProgressEmitter(emptyBody, requestId));
                addRequest(requestId);
                Request b1122 = builder.b();
                RequestBody requestBody22 = b1122.f16078d;
                NetworkEventUtil.onCreateRequest(devToolsRequestId, b1122.a.f16038h, b1122.f16076b, NetworkEventUtil.okHttpHeadersToMap(b1122.f16077c), ReactBuildConfig.DEBUG ? NetworkEventUtil.getRequestBodyPreview(requestBody22) : str2, requestBody22 != null ? requestBody22.contentLength() : 0L);
                okHttpClient.a(b1122).d(new h() { // from class: com.facebook.react.modules.network.NetworkingModule$sendRequestInternalReal$2
                    @Override // ps.h
                    public void onFailure(Call call, IOException e12) {
                        boolean z5;
                        Intrinsics.checkNotNullParameter(call, "call");
                        Intrinsics.checkNotNullParameter(e12, "e");
                        z5 = NetworkingModule.this.shuttingDown;
                        if (z5) {
                            return;
                        }
                        NetworkingModule.this.removeRequest(requestId);
                        String message = e12.getMessage();
                        if (message == null) {
                            message = "Error while executing request: ".concat(e12.getClass().getSimpleName());
                        }
                        NetworkEventUtil.onRequestError(reactApplicationContext2, requestId, devToolsRequestId, message, e12);
                    }

                    @Override // ps.h
                    public void onResponse(Call call, Response response) {
                        boolean z5;
                        List<NetworkingModule.ResponseHandler> list;
                        MediaType mediaType2;
                        Intrinsics.checkNotNullParameter(call, "call");
                        Intrinsics.checkNotNullParameter(response, "response");
                        z5 = NetworkingModule.this.shuttingDown;
                        if (z5) {
                            return;
                        }
                        NetworkingModule.this.removeRequest(requestId);
                        ReactApplicationContext reactApplicationContext32 = reactApplicationContext2;
                        int i6 = requestId;
                        String str4 = devToolsRequestId;
                        Request request = response.f16085d;
                        ResponseBody responseBody = response.f16091y;
                        NetworkEventUtil.onResponseReceived(reactApplicationContext32, i6, str4, request.a.f16038h, response.f16088v, NetworkEventUtil.okHttpHeadersToMap(response.f16090x), responseBody != null ? responseBody.contentLength() : 0L);
                        try {
                            try {
                                if (responseBody == null) {
                                    NetworkEventUtil.onRequestError(reactApplicationContext2, requestId, devToolsRequestId, "Response body is null", null);
                                    return;
                                }
                                if ("gzip".equalsIgnoreCase(response.f("Content-Encoding", null))) {
                                    k source = new k(responseBody.source());
                                    String mediaType3 = response.f("Content-Type", null);
                                    if (mediaType3 != null) {
                                        Pattern pattern32 = MediaType.f16040d;
                                        Intrinsics.checkNotNullParameter(mediaType3, "mediaType");
                                        mediaType2 = f.D(mediaType3);
                                    } else {
                                        mediaType2 = null;
                                    }
                                    ResponseBody.Companion companion2 = ResponseBody.Companion;
                                    Intrinsics.checkNotNullParameter(source, "source");
                                    r content2 = y.d(source);
                                    companion2.getClass();
                                    Intrinsics.checkNotNullParameter(content2, "content");
                                    responseBody = ResponseBody.Companion.b(mediaType2, -1L, content2);
                                }
                                ResponseBody responseBody2 = responseBody;
                                list = NetworkingModule.this.responseHandlers;
                                for (NetworkingModule.ResponseHandler responseHandler : list) {
                                    if (responseHandler.supports(responseType)) {
                                        byte[] bytes3 = responseBody2.bytes();
                                        NetworkEventUtil.onDataReceived(reactApplicationContext2, requestId, devToolsRequestId, responseHandler.toResponseData(bytes3), bytes3);
                                        NetworkEventUtil.onRequestSuccess(reactApplicationContext2, requestId, devToolsRequestId, responseBody2.contentLength());
                                        return;
                                    }
                                }
                                if (useIncrementalUpdates && Intrinsics.areEqual(responseType, "text")) {
                                    NetworkingModule.this.readWithProgress(requestId, devToolsRequestId, responseBody2);
                                    NetworkEventUtil.onRequestSuccess(reactApplicationContext2, requestId, devToolsRequestId, responseBody2.contentLength());
                                    return;
                                }
                                String str5 = "";
                                if (Intrinsics.areEqual(responseType, "text")) {
                                    try {
                                        str5 = responseBody2.string();
                                    } catch (IOException e12) {
                                        if (!x.i(response.f16085d.f16076b, "HEAD", true)) {
                                            NetworkEventUtil.onRequestError(reactApplicationContext2, requestId, devToolsRequestId, e12.getMessage(), e12);
                                        }
                                    }
                                } else if (Intrinsics.areEqual(responseType, "base64")) {
                                    str5 = Base64.encodeToString(responseBody2.bytes(), 2);
                                }
                                NetworkEventUtil.onDataReceived(reactApplicationContext2, requestId, devToolsRequestId, str5, responseType);
                                NetworkEventUtil.onRequestSuccess(reactApplicationContext2, requestId, devToolsRequestId, responseBody2.contentLength());
                            } catch (OutOfMemoryError unused) {
                                NetworkEventUtil.onRequestError(reactApplicationContext2, requestId, devToolsRequestId, "Out of memory while processing network response", null);
                            }
                        } catch (IOException e13) {
                            NetworkEventUtil.onRequestError(reactApplicationContext2, requestId, devToolsRequestId, e13.getMessage(), e13);
                        }
                    }
                });
            } catch (Exception e12) {
                NetworkEventUtil.onRequestError(reactApplicationContext2, requestId, devToolsRequestId, e12.getMessage(), e12);
            }
        } catch (IOException e13) {
            e = e13;
            str = devToolsRequestId;
            reactApplicationContext = reactApplicationContextIfActiveOrWarn;
            i5 = requestId;
        }
    }

    public static final void setCustomClientBuilder(com.facebook.react.modules.network.CustomClientBuilder customClientBuilder2) {
        INSTANCE.setCustomClientBuilder(customClientBuilder2);
    }

    private final RequestBody wrapRequestBodyWithProgressEmitter(RequestBody requestBody, final int requestId) {
        if (requestBody == null) {
            return null;
        }
        final ReactApplicationContext reactApplicationContextIfActiveOrWarn = getReactApplicationContextIfActiveOrWarn();
        return RequestBodyUtil.createProgressRequest(requestBody, new ProgressListener() { // from class: com.facebook.react.modules.network.NetworkingModule$wrapRequestBodyWithProgressEmitter$1
            private long last = System.nanoTime();

            public final long getLast() {
                return this.last;
            }

            @Override // com.facebook.react.modules.network.ProgressListener
            public void onProgress(long bytesWritten, long contentLength, boolean done) {
                boolean shouldDispatch;
                long nanoTime = System.nanoTime();
                if (!done) {
                    shouldDispatch = NetworkingModule.INSTANCE.shouldDispatch(nanoTime, this.last);
                    if (!shouldDispatch) {
                        return;
                    }
                }
                NetworkEventUtil.onDataSend(ReactApplicationContext.this, requestId, bytesWritten, contentLength);
                this.last = nanoTime;
            }

            public final void setLast(long j) {
                this.last = j;
            }
        });
    }

    @Override // com.facebook.fbreact.specs.NativeNetworkingAndroidSpec
    public void abortRequest(double requestIdAsDouble) {
        int i5 = (int) requestIdAsDouble;
        cancelRequest(i5);
        removeRequest(i5);
    }

    @Override // com.facebook.fbreact.specs.NativeNetworkingAndroidSpec
    public void addListener(String eventName) {
    }

    public final void addRequestBodyHandler$ReactAndroid_release(@NotNull RequestBodyHandler handler) {
        Intrinsics.checkNotNullParameter(handler, "handler");
        this.requestBodyHandlers.add(handler);
    }

    public final void addResponseHandler$ReactAndroid_release(@NotNull ResponseHandler handler) {
        Intrinsics.checkNotNullParameter(handler, "handler");
        this.responseHandlers.add(handler);
    }

    public final void addUriHandler$ReactAndroid_release(@NotNull UriHandler handler) {
        Intrinsics.checkNotNullParameter(handler, "handler");
        this.uriHandlers.add(handler);
    }

    @Override // com.facebook.fbreact.specs.NativeNetworkingAndroidSpec
    @ReactMethod
    public void clearCookies(@NotNull Callback callback) {
        Intrinsics.checkNotNullParameter(callback, "callback");
        this.cookieHandler.clearCookies(callback);
    }

    @Override // com.facebook.react.bridge.BaseJavaModule, com.facebook.react.bridge.NativeModule, com.facebook.react.turbomodule.core.interfaces.TurboModule
    public void initialize() {
        CookieJarContainer cookieJarContainer = this.cookieJarContainer;
        if (cookieJarContainer != null) {
            cookieJarContainer.setCookieJar(new i((CookieHandler) this.cookieHandler));
        }
    }

    @Override // com.facebook.react.bridge.BaseJavaModule, com.facebook.react.bridge.NativeModule, com.facebook.react.turbomodule.core.interfaces.TurboModule
    public void invalidate() {
        this.shuttingDown = true;
        cancelAllRequests();
        this.cookieHandler.destroy();
        CookieJarContainer cookieJarContainer = this.cookieJarContainer;
        if (cookieJarContainer != null) {
            cookieJarContainer.removeCookieJar();
        }
        this.requestBodyHandlers.clear();
        this.responseHandlers.clear();
        this.uriHandlers.clear();
    }

    @Override // com.facebook.fbreact.specs.NativeNetworkingAndroidSpec
    public void removeListeners(double count) {
    }

    public final void removeRequestBodyHandler$ReactAndroid_release(@NotNull RequestBodyHandler handler) {
        Intrinsics.checkNotNullParameter(handler, "handler");
        this.requestBodyHandlers.remove(handler);
    }

    public final void removeResponseHandler$ReactAndroid_release(@NotNull ResponseHandler handler) {
        Intrinsics.checkNotNullParameter(handler, "handler");
        this.responseHandlers.remove(handler);
    }

    public final void removeUriHandler$ReactAndroid_release(@NotNull UriHandler handler) {
        Intrinsics.checkNotNullParameter(handler, "handler");
        this.uriHandlers.remove(handler);
    }

    @Override // com.facebook.fbreact.specs.NativeNetworkingAndroidSpec
    public void sendRequest(@NotNull String method, @NotNull String url, double requestIdAsDouble, ReadableArray headers, ReadableMap data, @NotNull String responseType, boolean useIncrementalUpdates, double timeoutAsDouble, boolean withCredentials) {
        Intrinsics.checkNotNullParameter(method, "method");
        Intrinsics.checkNotNullParameter(url, "url");
        Intrinsics.checkNotNullParameter(responseType, "responseType");
        int i5 = (int) requestIdAsDouble;
        int i6 = (int) timeoutAsDouble;
        String extractOrGenerateDevToolsRequestId = extractOrGenerateDevToolsRequestId(data);
        try {
            sendRequestInternalReal(method, url, i5, headers, data, responseType, useIncrementalUpdates, i6, withCredentials, extractOrGenerateDevToolsRequestId);
        } catch (Throwable th2) {
            p8.a.h("Networking", "Failed to send url request: " + url, th2);
            NetworkEventUtil.onRequestError(getReactApplicationContextIfActiveOrWarn(), i5, extractOrGenerateDevToolsRequestId, th2.getMessage(), th2);
        }
    }

    @d
    public final void sendRequestInternal(@NotNull String method, String url, int requestId, ReadableArray headers, ReadableMap data, @NotNull String responseType, boolean useIncrementalUpdates, int timeout, boolean withCredentials) {
        Intrinsics.checkNotNullParameter(method, "method");
        Intrinsics.checkNotNullParameter(responseType, "responseType");
        sendRequestInternalReal(method, url, requestId, headers, data, responseType, useIncrementalUpdates, timeout, withCredentials, extractOrGenerateDevToolsRequestId(data));
    }

    /* JADX WARN: 'this' call moved to the top of the method (can break code semantics) */
    public NetworkingModule(@NotNull ReactApplicationContext context, String str, @NotNull OkHttpClient client) {
        this(context, str, client, null);
        Intrinsics.checkNotNullParameter(context, "context");
        Intrinsics.checkNotNullParameter(client, "client");
    }

    /* JADX WARN: Illegal instructions before constructor call */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public NetworkingModule(@NotNull ReactApplicationContext context) {
        this(context, null, OkHttpClientProvider.createClient(r0), null);
        Intrinsics.checkNotNullParameter(context, "context");
        Context applicationContext = context.getApplicationContext();
        Intrinsics.checkNotNullExpressionValue(applicationContext, "getApplicationContext(...)");
    }

    /* JADX WARN: Illegal instructions before constructor call */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public NetworkingModule(@NotNull ReactApplicationContext context, List<? extends NetworkInterceptorCreator> list) {
        this(context, null, OkHttpClientProvider.createClient(r0), list);
        Intrinsics.checkNotNullParameter(context, "context");
        Context applicationContext = context.getApplicationContext();
        Intrinsics.checkNotNullExpressionValue(applicationContext, "getApplicationContext(...)");
    }

    /* JADX WARN: Illegal instructions before constructor call */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public NetworkingModule(@NotNull ReactApplicationContext context, String str) {
        this(context, str, OkHttpClientProvider.createClient(r0), null);
        Intrinsics.checkNotNullParameter(context, "context");
        Context applicationContext = context.getApplicationContext();
        Intrinsics.checkNotNullExpressionValue(applicationContext, "getApplicationContext(...)");
    }
}
