package com.facebook.react.modules.websocket;

import a3.e;
import com.facebook.fbreact.specs.NativeWebSocketModuleSpec;
import com.facebook.react.bridge.Arguments;
import com.facebook.react.bridge.ReactApplicationContext;
import com.facebook.react.bridge.ReadableArray;
import com.facebook.react.bridge.ReadableMap;
import com.facebook.react.bridge.ReadableMapBuilder;
import com.facebook.react.bridge.ReadableMapKeySetIterator;
import com.facebook.react.bridge.ReadableType;
import com.facebook.react.bridge.WritableMap;
import com.facebook.react.common.ReactConstants;
import com.facebook.react.devsupport.StackTraceHelper;
import com.facebook.react.module.annotations.ReactModule;
import com.facebook.react.modules.network.CustomClientBuilder;
import com.facebook.react.modules.network.ForwardingCookieHandler;
import com.facebook.react.modules.network.OkHttpClientProvider;
import com.facebook.react.modules.websocket.WebSocketModule;
import com.reactnativecommunity.webview.RNCWebViewManager;
import io.sentry.hints.j;
import java.io.IOException;
import java.net.URI;
import java.net.URISyntaxException;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import java.util.concurrent.ConcurrentHashMap;
import java.util.concurrent.TimeUnit;
import kotlin.Metadata;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.SourceDebugExtension;
import kotlin.text.StringsKt;
import kotlin.text.x;
import okhttp3.CookieJar;
import okhttp3.OkHttpClient;
import okhttp3.Request;
import okhttp3.Response;
import okhttp3.WebSocket;
import okio.ByteString;
import org.jetbrains.annotations.NotNull;
import p8.a;
import s4.h;

@ReactModule(name = "WebSocketModule")
@Metadata(d1 = {"\u0000b\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010%\n\u0002\u0010\b\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0010\u000e\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0006\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u0006\n\u0002\b\b\n\u0002\u0018\u0002\n\u0002\b\u000b\b\u0007\u0018\u0000 72\u00020\u0001:\u0003567B\u000f\u0012\u0006\u0010\u0002\u001a\u00020\u0003¢\u0006\u0004\b\u0004\u0010\u0005J\b\u0010\u0014\u001a\u00020\u0015H\u0016J\u0018\u0010\u0016\u001a\u00020\u00152\u0006\u0010\u0017\u001a\u00020\u00182\u0006\u0010\u0019\u001a\u00020\u001aH\u0002J\u0018\u0010\u001b\u001a\u00020\u00152\u0006\u0010\u001c\u001a\u00020\b2\b\u0010\u001d\u001a\u0004\u0018\u00010\u000bJ,\u0010\u001e\u001a\u00020\u00152\u0006\u0010\u001f\u001a\u00020\u00182\b\u0010 \u001a\u0004\u0018\u00010!2\b\u0010\"\u001a\u0004\u0018\u00010\u001a2\u0006\u0010#\u001a\u00020$H\u0016J\"\u0010%\u001a\u00020\u00152\u0006\u0010&\u001a\u00020$2\b\u0010'\u001a\u0004\u0018\u00010\u00182\u0006\u0010#\u001a\u00020$H\u0016J\u0018\u0010(\u001a\u00020\u00152\u0006\u0010)\u001a\u00020\u00182\u0006\u0010#\u001a\u00020$H\u0016J\u0018\u0010*\u001a\u00020\u00152\u0006\u0010+\u001a\u00020\u00182\u0006\u0010#\u001a\u00020$H\u0016J\u0016\u0010*\u001a\u00020\u00152\u0006\u0010,\u001a\u00020-2\u0006\u0010\u001c\u001a\u00020\bJ\u0010\u0010.\u001a\u00020\u00152\u0006\u0010#\u001a\u00020$H\u0016J\u001a\u0010/\u001a\u00020\u00152\u0006\u0010\u001c\u001a\u00020\b2\b\u0010)\u001a\u0004\u0018\u00010\u0018H\u0002J\u0012\u00100\u001a\u0004\u0018\u00010\u00182\u0006\u00101\u001a\u00020\u0018H\u0002J\u0010\u00102\u001a\u00020\u00152\u0006\u0010\u0017\u001a\u00020\u0018H\u0016J\u0010\u00103\u001a\u00020\u00152\u0006\u00104\u001a\u00020$H\u0016R\u001a\u0010\u0006\u001a\u000e\u0012\u0004\u0012\u00020\b\u0012\u0004\u0012\u00020\t0\u0007X\u0082\u0004¢\u0006\u0002\n\u0000R\u001a\u0010\n\u001a\u000e\u0012\u0004\u0012\u00020\b\u0012\u0004\u0012\u00020\u000b0\u0007X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\f\u001a\u00020\rX\u0082\u0004¢\u0006\u0002\n\u0000R\u001c\u0010\u000e\u001a\u0004\u0018\u00010\u000fX\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\u0010\u0010\u0011\"\u0004\b\u0012\u0010\u0013¨\u00068"}, d2 = {"Lcom/facebook/react/modules/websocket/WebSocketModule;", "Lcom/facebook/fbreact/specs/NativeWebSocketModuleSpec;", "context", "Lcom/facebook/react/bridge/ReactApplicationContext;", "<init>", "(Lcom/facebook/react/bridge/ReactApplicationContext;)V", "webSocketConnections", "", "", "Lokhttp3/WebSocket;", "contentHandlers", "Lcom/facebook/react/modules/websocket/WebSocketModule$ContentHandler;", "cookieHandler", "Lcom/facebook/react/modules/network/ForwardingCookieHandler;", "mOnOpenHandler", "Lcom/facebook/react/modules/websocket/WebSocketModule$OnOpenHandler;", "getMOnOpenHandler", "()Lcom/facebook/react/modules/websocket/WebSocketModule$OnOpenHandler;", "setMOnOpenHandler", "(Lcom/facebook/react/modules/websocket/WebSocketModule$OnOpenHandler;)V", "invalidate", "", "sendEvent", "eventName", "", "params", "Lcom/facebook/react/bridge/ReadableMap;", "setContentHandler", StackTraceHelper.ID_KEY, "contentHandler", "connect", "url", "protocols", "Lcom/facebook/react/bridge/ReadableArray;", "options", "socketID", "", "close", "code", "reason", "send", "message", "sendBinary", "base64String", "byteString", "Lokio/ByteString;", "ping", "notifyWebSocketFailed", "getCookie", "uri", "addListener", "removeListeners", "count", "ContentHandler", "OnOpenHandler", "Companion", "ReactAndroid_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
@SourceDebugExtension({"SMAP\nWebSocketModule.kt\nKotlin\n*S Kotlin\n*F\n+ 1 WebSocketModule.kt\ncom/facebook/react/modules/websocket/WebSocketModule\n+ 2 fake.kt\nkotlin/jvm/internal/FakeKt\n+ 3 ReadableMapBuilder.kt\ncom/facebook/react/bridge/ReadableMapBuilderKt\n*L\n1#1,421:1\n1#2:422\n30#3,3:423\n30#3,3:426\n30#3,3:429\n30#3,3:432\n30#3,3:435\n30#3,3:438\n30#3,3:441\n30#3,3:444\n30#3,3:447\n*S KotlinDebug\n*F\n+ 1 WebSocketModule.kt\ncom/facebook/react/modules/websocket/WebSocketModule\n*L\n238#1:423,3\n243#1:426,3\n265#1:429,3\n270#1:432,3\n292#1:435,3\n297#1:438,3\n319#1:441,3\n324#1:444,3\n342#1:447,3\n*E\n"})
/* loaded from: classes3.dex */
public final class WebSocketModule extends NativeWebSocketModuleSpec {

    /* renamed from: Companion, reason: from kotlin metadata */
    @NotNull
    public static final Companion INSTANCE = new Companion(null);

    @NotNull
    public static final String NAME = "WebSocketModule";
    private static CustomClientBuilder customClientBuilder;

    @NotNull
    private final Map<Integer, ContentHandler> contentHandlers;

    @NotNull
    private final ForwardingCookieHandler cookieHandler;
    private OnOpenHandler mOnOpenHandler;

    @NotNull
    private final Map<Integer, WebSocket> webSocketConnections;

    @Metadata(d1 = {"\u0000(\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\u000e\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0003\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\u0012\u0010\b\u001a\u00020\t2\b\u0010\n\u001a\u0004\u0018\u00010\u0007H\u0007J\u0010\u0010\u000b\u001a\u00020\t2\u0006\u0010\f\u001a\u00020\rH\u0002J\u0010\u0010\u000e\u001a\u00020\u00052\u0006\u0010\u000f\u001a\u00020\u0005H\u0002R\u000e\u0010\u0004\u001a\u00020\u0005X\u0086T¢\u0006\u0002\n\u0000R\u0010\u0010\u0006\u001a\u0004\u0018\u00010\u0007X\u0082\u000e¢\u0006\u0002\n\u0000¨\u0006\u0010"}, d2 = {"Lcom/facebook/react/modules/websocket/WebSocketModule$Companion;", "", "<init>", "()V", "NAME", "", "customClientBuilder", "Lcom/facebook/react/modules/network/CustomClientBuilder;", "setCustomClientBuilder", "", "ccb", "applyCustomBuilder", "builder", "Lokhttp3/OkHttpClient$Builder;", "getDefaultOrigin", "uri", "ReactAndroid_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final class Companion {
        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }

        /* JADX INFO: Access modifiers changed from: private */
        public final void applyCustomBuilder(OkHttpClient.Builder builder) {
            CustomClientBuilder customClientBuilder = WebSocketModule.customClientBuilder;
            if (customClientBuilder != null) {
                customClientBuilder.apply(builder);
            }
        }

        /* JADX INFO: Access modifiers changed from: private */
        /* JADX WARN: Code restructure failed: missing block: B:33:0x004b, code lost:
        
            if (r1.equals("ws") == false) goto L27;
         */
        /* JADX WARN: Removed duplicated region for block: B:20:0x0058 A[Catch: URISyntaxException -> 0x0092, TRY_ENTER, TryCatch #0 {URISyntaxException -> 0x0092, blocks: (B:2:0x0000, B:4:0x000b, B:13:0x0027, B:16:0x0035, B:17:0x004f, B:20:0x0058, B:23:0x007b, B:25:0x002e, B:28:0x003a, B:32:0x0045), top: B:1:0x0000 }] */
        /* JADX WARN: Removed duplicated region for block: B:23:0x007b A[Catch: URISyntaxException -> 0x0092, TRY_LEAVE, TryCatch #0 {URISyntaxException -> 0x0092, blocks: (B:2:0x0000, B:4:0x000b, B:13:0x0027, B:16:0x0035, B:17:0x004f, B:20:0x0058, B:23:0x007b, B:25:0x002e, B:28:0x003a, B:32:0x0045), top: B:1:0x0000 }] */
        /*
            Code decompiled incorrectly, please refer to instructions dump.
        */
        public final String getDefaultOrigin(String uri) {
            String str;
            try {
                URI uri2 = new URI(uri);
                String scheme = uri2.getScheme();
                if (scheme != null) {
                    int hashCode = scheme.hashCode();
                    str = "http";
                    if (hashCode != 3804) {
                        if (hashCode != 118039) {
                            if (hashCode == 3213448) {
                                if (!scheme.equals("http")) {
                                }
                                str = uri2.getScheme();
                            } else if (hashCode == 99617003) {
                                if (!scheme.equals("https")) {
                                }
                                str = uri2.getScheme();
                            }
                        } else if (scheme.equals("wss")) {
                            str = "https";
                        }
                    }
                    if (uri2.getPort() != -1) {
                        return str + "://" + uri2.getHost();
                    }
                    return str + "://" + uri2.getHost() + ":" + uri2.getPort();
                }
                str = "";
                if (uri2.getPort() != -1) {
                }
            } catch (URISyntaxException unused) {
                throw new IllegalArgumentException(h.f("Unable to set ", uri, " as default origin header"));
            }
        }

        public final void setCustomClientBuilder(CustomClientBuilder ccb) {
            WebSocketModule.customClientBuilder = ccb;
        }

        private Companion() {
        }
    }

    @Metadata(d1 = {"\u0000\"\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\u0002\n\u0000\n\u0002\u0010\u000e\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\bf\u0018\u00002\u00020\u0001J\u0018\u0010\u0002\u001a\u00020\u00032\u0006\u0010\u0004\u001a\u00020\u00052\u0006\u0010\u0006\u001a\u00020\u0007H&J\u0018\u0010\u0002\u001a\u00020\u00032\u0006\u0010\b\u001a\u00020\t2\u0006\u0010\u0006\u001a\u00020\u0007H&ø\u0001\u0000\u0082\u0002\u0006\n\u0004\b!0\u0001¨\u0006\nÀ\u0006\u0001"}, d2 = {"Lcom/facebook/react/modules/websocket/WebSocketModule$ContentHandler;", "", "onMessage", "", "text", "", "params", "Lcom/facebook/react/bridge/WritableMap;", "byteString", "Lokio/ByteString;", "ReactAndroid_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public interface ContentHandler {
        void onMessage(@NotNull String text, @NotNull WritableMap params);

        void onMessage(@NotNull ByteString byteString, @NotNull WritableMap params);
    }

    @Metadata(d1 = {"\u0000\u001c\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\b\n\u0000\bf\u0018\u00002\u00020\u0001J\u0018\u0010\u0002\u001a\u00020\u00032\u0006\u0010\u0004\u001a\u00020\u00052\u0006\u0010\u0006\u001a\u00020\u0007H&ø\u0001\u0000\u0082\u0002\u0006\n\u0004\b!0\u0001¨\u0006\bÀ\u0006\u0001"}, d2 = {"Lcom/facebook/react/modules/websocket/WebSocketModule$OnOpenHandler;", "", "onOpen", "", "webSocket", "Lokhttp3/WebSocket;", "socketId", "", "ReactAndroid_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public interface OnOpenHandler {
        void onOpen(@NotNull WebSocket webSocket, int socketId);
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public WebSocketModule(@NotNull ReactApplicationContext context) {
        super(context);
        Intrinsics.checkNotNullParameter(context, "context");
        this.webSocketConnections = new ConcurrentHashMap();
        this.contentHandlers = new ConcurrentHashMap();
        this.cookieHandler = new ForwardingCookieHandler();
    }

    private final String getCookie(String uri) {
        try {
            List<String> list = this.cookieHandler.get(new URI(INSTANCE.getDefaultOrigin(uri)), new HashMap()).get("Cookie");
            if (list != null && !list.isEmpty()) {
                return list.get(0);
            }
            return null;
        } catch (IOException unused) {
            throw new IllegalArgumentException(e.k("Unable to get cookie from ", uri));
        } catch (URISyntaxException unused2) {
            throw new IllegalArgumentException(e.k("Unable to get cookie from ", uri));
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final void notifyWebSocketFailed(int id2, String message) {
        WritableMap createMap = Arguments.createMap();
        ReadableMapBuilder readableMapBuilder = new ReadableMapBuilder(createMap);
        readableMapBuilder.put(StackTraceHelper.ID_KEY, id2);
        readableMapBuilder.put("message", message);
        sendEvent("websocketFailed", createMap);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final void sendEvent(String eventName, ReadableMap params) {
        ReactApplicationContext reactApplicationContext = getReactApplicationContext();
        Intrinsics.checkNotNullExpressionValue(reactApplicationContext, "getReactApplicationContext(...)");
        if (reactApplicationContext.hasActiveReactInstance()) {
            reactApplicationContext.emitDeviceEvent(eventName, params);
        }
    }

    public static final void setCustomClientBuilder(CustomClientBuilder customClientBuilder2) {
        INSTANCE.setCustomClientBuilder(customClientBuilder2);
    }

    @Override // com.facebook.fbreact.specs.NativeWebSocketModuleSpec
    public void addListener(@NotNull String eventName) {
        Intrinsics.checkNotNullParameter(eventName, "eventName");
    }

    @Override // com.facebook.fbreact.specs.NativeWebSocketModuleSpec
    public void close(double code, String reason, double socketID) {
        int i5 = (int) socketID;
        WebSocket webSocket = this.webSocketConnections.get(Integer.valueOf(i5));
        if (webSocket == null) {
            return;
        }
        try {
            webSocket.c((int) code, reason);
            this.webSocketConnections.remove(Integer.valueOf(i5));
            this.contentHandlers.remove(Integer.valueOf(i5));
        } catch (Exception e9) {
            a.h(ReactConstants.TAG, "Could not close WebSocket connection for id " + i5, e9);
        }
    }

    @Override // com.facebook.fbreact.specs.NativeWebSocketModuleSpec
    public void connect(@NotNull String url, ReadableArray protocols, ReadableMap options, double socketID) {
        boolean z5;
        Intrinsics.checkNotNullParameter(url, "url");
        final int i5 = (int) socketID;
        OkHttpClient.Builder b10 = OkHttpClientProvider.getOkHttpClient().b();
        b10.b(CookieJar.f16025q);
        TimeUnit timeUnit = TimeUnit.SECONDS;
        b10.a(10L, timeUnit);
        b10.d(10L, timeUnit);
        b10.c(0L, TimeUnit.MINUTES);
        INSTANCE.applyCustomBuilder(b10);
        OkHttpClient okHttpClient = new OkHttpClient(b10);
        Request.Builder builder = new Request.Builder();
        builder.h(Integer.valueOf(i5));
        builder.i(url);
        String cookie = getCookie(url);
        if (cookie != null) {
            builder.a("Cookie", cookie);
        }
        if (options != null && options.hasKey("headers") && options.getType("headers") == ReadableType.Map) {
            ReadableMap map = options.getMap("headers");
            if (map == null) {
                throw new IllegalStateException("Required value was null.");
            }
            ReadableMapKeySetIterator keySetIterator = map.keySetIterator();
            z5 = false;
            while (keySetIterator.hasNextKey()) {
                String nextKey = keySetIterator.nextKey();
                if (ReadableType.String == map.getType(nextKey)) {
                    if (x.i(nextKey, "origin", true)) {
                        z5 = true;
                    }
                    String string = map.getString(nextKey);
                    if (string == null) {
                        throw new IllegalStateException(h.f("value for name ", nextKey, " == null").toString());
                    }
                    builder.a(nextKey, string);
                } else {
                    a.v(ReactConstants.TAG, "Ignoring: requested " + nextKey + ", value not a string");
                }
            }
        } else {
            z5 = false;
        }
        if (!z5) {
            builder.a("origin", INSTANCE.getDefaultOrigin(url));
        }
        if (protocols != null && protocols.size() > 0) {
            StringBuilder sb2 = new StringBuilder("");
            int size = protocols.size();
            for (int i6 = 0; i6 < size; i6++) {
                String string2 = protocols.getString(i6);
                String obj = string2 != null ? StringsKt.b0(string2).toString() : null;
                if (!(obj == null || obj.length() == 0) && !StringsKt.D(obj, ",", false)) {
                    sb2.append(obj);
                    sb2.append(",");
                }
            }
            if (sb2.length() > 0) {
                sb2.replace(sb2.length() - 1, sb2.length(), "");
                String sb3 = sb2.toString();
                Intrinsics.checkNotNullExpressionValue(sb3, "toString(...)");
                builder.a("Sec-WebSocket-Protocol", sb3);
            }
        }
        okHttpClient.c(builder.b(), new ps.x() { // from class: com.facebook.react.modules.websocket.WebSocketModule$connect$2
            @Override // ps.x
            public void onClosed(WebSocket webSocket, int code, String reason) {
                Intrinsics.checkNotNullParameter(webSocket, "webSocket");
                Intrinsics.checkNotNullParameter(reason, "reason");
                int i10 = i5;
                WritableMap createMap = Arguments.createMap();
                ReadableMapBuilder readableMapBuilder = new ReadableMapBuilder(createMap);
                readableMapBuilder.put(StackTraceHelper.ID_KEY, i10);
                readableMapBuilder.put("code", code);
                readableMapBuilder.put("reason", reason);
                WebSocketModule.this.sendEvent("websocketClosed", createMap);
            }

            @Override // ps.x
            public void onClosing(WebSocket websocket, int code, String reason) {
                Intrinsics.checkNotNullParameter(websocket, "websocket");
                Intrinsics.checkNotNullParameter(reason, "reason");
                websocket.c(code, reason);
            }

            @Override // ps.x
            public void onFailure(WebSocket webSocket, Throwable t5, Response response) {
                Intrinsics.checkNotNullParameter(webSocket, "webSocket");
                Intrinsics.checkNotNullParameter(t5, "t");
                WebSocketModule.this.notifyWebSocketFailed(i5, t5.getMessage());
            }

            @Override // ps.x
            public void onMessage(WebSocket webSocket, String text) {
                Map map2;
                Intrinsics.checkNotNullParameter(webSocket, "webSocket");
                Intrinsics.checkNotNullParameter(text, "text");
                WritableMap createMap = Arguments.createMap();
                createMap.putInt(StackTraceHelper.ID_KEY, i5);
                createMap.putString("type", "text");
                map2 = WebSocketModule.this.contentHandlers;
                WebSocketModule.ContentHandler contentHandler = (WebSocketModule.ContentHandler) map2.get(Integer.valueOf(i5));
                if (contentHandler != null) {
                    contentHandler.onMessage(text, createMap);
                } else {
                    createMap.putString("data", text);
                }
                WebSocketModule.this.sendEvent("websocketMessage", createMap);
            }

            @Override // ps.x
            public void onOpen(WebSocket webSocket, Response response) {
                Map map2;
                Intrinsics.checkNotNullParameter(webSocket, "webSocket");
                Intrinsics.checkNotNullParameter(response, "response");
                map2 = WebSocketModule.this.webSocketConnections;
                map2.put(Integer.valueOf(i5), webSocket);
                int i10 = i5;
                WritableMap createMap = Arguments.createMap();
                ReadableMapBuilder readableMapBuilder = new ReadableMapBuilder(createMap);
                readableMapBuilder.put(StackTraceHelper.ID_KEY, i10);
                readableMapBuilder.put("protocol", response.f("Sec-WebSocket-Protocol", ""));
                WebSocketModule.this.sendEvent("websocketOpen", createMap);
                WebSocketModule.OnOpenHandler mOnOpenHandler = WebSocketModule.this.getMOnOpenHandler();
                if (mOnOpenHandler != null) {
                    mOnOpenHandler.onOpen(webSocket, i5);
                }
            }

            @Override // ps.x
            public void onMessage(WebSocket webSocket, ByteString bytes) {
                Map map2;
                Intrinsics.checkNotNullParameter(webSocket, "webSocket");
                Intrinsics.checkNotNullParameter(bytes, "bytes");
                WritableMap createMap = Arguments.createMap();
                createMap.putInt(StackTraceHelper.ID_KEY, i5);
                createMap.putString("type", "binary");
                map2 = WebSocketModule.this.contentHandlers;
                WebSocketModule.ContentHandler contentHandler = (WebSocketModule.ContentHandler) map2.get(Integer.valueOf(i5));
                if (contentHandler != null) {
                    contentHandler.onMessage(bytes, createMap);
                } else {
                    createMap.putString("data", bytes.a());
                }
                WebSocketModule.this.sendEvent("websocketMessage", createMap);
            }
        });
    }

    public final OnOpenHandler getMOnOpenHandler() {
        return this.mOnOpenHandler;
    }

    @Override // com.facebook.react.bridge.BaseJavaModule, com.facebook.react.bridge.NativeModule, com.facebook.react.turbomodule.core.interfaces.TurboModule
    public void invalidate() {
        Iterator<WebSocket> it = this.webSocketConnections.values().iterator();
        while (it.hasNext()) {
            it.next().c(RNCWebViewManager.COMMAND_CLEAR_CACHE, null);
        }
        this.webSocketConnections.clear();
        this.contentHandlers.clear();
    }

    @Override // com.facebook.fbreact.specs.NativeWebSocketModuleSpec
    public void ping(double socketID) {
        int i5 = (int) socketID;
        WebSocket webSocket = this.webSocketConnections.get(Integer.valueOf(i5));
        if (webSocket != null) {
            try {
                webSocket.a(ByteString.f16115v);
                return;
            } catch (Exception e9) {
                notifyWebSocketFailed(i5, e9.getMessage());
                return;
            }
        }
        WritableMap createMap = Arguments.createMap();
        ReadableMapBuilder readableMapBuilder = new ReadableMapBuilder(createMap);
        readableMapBuilder.put(StackTraceHelper.ID_KEY, i5);
        readableMapBuilder.put("message", "client is null");
        sendEvent("websocketFailed", createMap);
        WritableMap createMap2 = Arguments.createMap();
        ReadableMapBuilder readableMapBuilder2 = new ReadableMapBuilder(createMap2);
        readableMapBuilder2.put(StackTraceHelper.ID_KEY, i5);
        readableMapBuilder2.put("code", 0);
        readableMapBuilder2.put("reason", "client is null");
        sendEvent("websocketClosed", createMap2);
        this.webSocketConnections.remove(Integer.valueOf(i5));
        this.contentHandlers.remove(Integer.valueOf(i5));
    }

    @Override // com.facebook.fbreact.specs.NativeWebSocketModuleSpec
    public void removeListeners(double count) {
    }

    @Override // com.facebook.fbreact.specs.NativeWebSocketModuleSpec
    public void send(@NotNull String message, double socketID) {
        Intrinsics.checkNotNullParameter(message, "message");
        int i5 = (int) socketID;
        WebSocket webSocket = this.webSocketConnections.get(Integer.valueOf(i5));
        if (webSocket != null) {
            try {
                webSocket.b(message);
                return;
            } catch (Exception e9) {
                notifyWebSocketFailed(i5, e9.getMessage());
                return;
            }
        }
        WritableMap createMap = Arguments.createMap();
        ReadableMapBuilder readableMapBuilder = new ReadableMapBuilder(createMap);
        readableMapBuilder.put(StackTraceHelper.ID_KEY, i5);
        readableMapBuilder.put("message", "client is null");
        sendEvent("websocketFailed", createMap);
        WritableMap createMap2 = Arguments.createMap();
        ReadableMapBuilder readableMapBuilder2 = new ReadableMapBuilder(createMap2);
        readableMapBuilder2.put(StackTraceHelper.ID_KEY, i5);
        readableMapBuilder2.put("code", 0);
        readableMapBuilder2.put("reason", "client is null");
        sendEvent("websocketClosed", createMap2);
        this.webSocketConnections.remove(Integer.valueOf(i5));
        this.contentHandlers.remove(Integer.valueOf(i5));
    }

    @Override // com.facebook.fbreact.specs.NativeWebSocketModuleSpec
    public void sendBinary(@NotNull String base64String, double socketID) {
        Intrinsics.checkNotNullParameter(base64String, "base64String");
        int i5 = (int) socketID;
        WebSocket webSocket = this.webSocketConnections.get(Integer.valueOf(i5));
        if (webSocket != null) {
            try {
                ByteString byteString = ByteString.f16115v;
                Intrinsics.checkNotNullParameter(base64String, "string");
                ByteString B = j.B(base64String);
                if (B == null) {
                    throw new IllegalStateException("bytes == null");
                }
                webSocket.a(B);
                return;
            } catch (Exception e9) {
                notifyWebSocketFailed(i5, e9.getMessage());
                return;
            }
        }
        WritableMap createMap = Arguments.createMap();
        ReadableMapBuilder readableMapBuilder = new ReadableMapBuilder(createMap);
        readableMapBuilder.put(StackTraceHelper.ID_KEY, i5);
        readableMapBuilder.put("message", "client is null");
        sendEvent("websocketFailed", createMap);
        WritableMap createMap2 = Arguments.createMap();
        ReadableMapBuilder readableMapBuilder2 = new ReadableMapBuilder(createMap2);
        readableMapBuilder2.put(StackTraceHelper.ID_KEY, i5);
        readableMapBuilder2.put("code", 0);
        readableMapBuilder2.put("reason", "client is null");
        sendEvent("websocketClosed", createMap2);
        this.webSocketConnections.remove(Integer.valueOf(i5));
        this.contentHandlers.remove(Integer.valueOf(i5));
    }

    public final void setContentHandler(int id2, ContentHandler contentHandler) {
        if (contentHandler == null) {
            this.contentHandlers.remove(Integer.valueOf(id2));
        } else {
            this.contentHandlers.put(Integer.valueOf(id2), contentHandler);
        }
    }

    public final void setMOnOpenHandler(OnOpenHandler onOpenHandler) {
        this.mOnOpenHandler = onOpenHandler;
    }

    public final void sendBinary(@NotNull ByteString byteString, int id2) {
        Intrinsics.checkNotNullParameter(byteString, "byteString");
        WebSocket webSocket = this.webSocketConnections.get(Integer.valueOf(id2));
        if (webSocket == null) {
            WritableMap createMap = Arguments.createMap();
            ReadableMapBuilder readableMapBuilder = new ReadableMapBuilder(createMap);
            readableMapBuilder.put(StackTraceHelper.ID_KEY, id2);
            readableMapBuilder.put("message", "client is null");
            sendEvent("websocketFailed", createMap);
            WritableMap createMap2 = Arguments.createMap();
            ReadableMapBuilder readableMapBuilder2 = new ReadableMapBuilder(createMap2);
            readableMapBuilder2.put(StackTraceHelper.ID_KEY, id2);
            readableMapBuilder2.put("code", 0);
            readableMapBuilder2.put("reason", "client is null");
            sendEvent("websocketClosed", createMap2);
            this.webSocketConnections.remove(Integer.valueOf(id2));
            this.contentHandlers.remove(Integer.valueOf(id2));
            return;
        }
        try {
            webSocket.a(byteString);
        } catch (Exception e9) {
            notifyWebSocketFailed(id2, e9.getMessage());
        }
    }
}
