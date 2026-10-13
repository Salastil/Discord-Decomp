package com.facebook.react.modules.blob;

import a3.e;
import android.content.res.Resources;
import android.database.Cursor;
import android.net.Uri;
import android.webkit.MimeTypeMap;
import com.facebook.fbreact.specs.NativeBlobModuleSpec;
import com.facebook.react.bridge.Arguments;
import com.facebook.react.bridge.NativeModule;
import com.facebook.react.bridge.ReactApplicationContext;
import com.facebook.react.bridge.ReadableArray;
import com.facebook.react.bridge.ReadableMap;
import com.facebook.react.bridge.ReadableMapBuilder;
import com.facebook.react.bridge.WritableMap;
import com.facebook.react.devsupport.StackTraceHelper;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import com.facebook.react.module.annotations.ReactModule;
import com.facebook.react.modules.network.NetworkingModule;
import com.facebook.react.modules.websocket.WebSocketModule;
import com.facebook.react.turbomodule.core.interfaces.BindingsInstallerHolder;
import com.facebook.react.turbomodule.core.interfaces.TurboModuleWithJSIBindings;
import com.facebook.soloader.SoLoader;
import e4.f;
import java.io.ByteArrayOutputStream;
import java.io.File;
import java.io.FileNotFoundException;
import java.io.InputStream;
import java.nio.ByteBuffer;
import java.nio.charset.Charset;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.HashMap;
import java.util.Iterator;
import java.util.Map;
import java.util.UUID;
import java.util.regex.Pattern;
import kotlin.Metadata;
import kotlin.Pair;
import kotlin.Unit;
import kotlin.collections.v0;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.Ref;
import kotlin.jvm.internal.SourceDebugExtension;
import okhttp3.MediaType;
import okhttp3.RequestBody;
import okio.ByteString;
import org.jetbrains.annotations.NotNull;
import ya.a;

@ReactModule(name = "BlobModule")
@Metadata(d1 = {"\u0000\u008f\u0001\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\u0010\u000e\n\u0002\u0010\u0012\n\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\b\u0003\n\u0002\b\u0003\n\u0002\u0010$\n\u0002\u0010\u0000\n\u0002\b\u0002\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0010\t\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\b\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0010\u0006\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\t\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002*\u0003\f\u0013\u0016\b\u0007\u0018\u0000 ?2\u00020\u00012\u00020\u0002:\u0001?B\u000f\u0012\u0006\u0010\u0003\u001a\u00020\u0004¢\u0006\u0004\b\u0005\u0010\u0006J\u0014\u0010\u0018\u001a\u000e\u0012\u0004\u0012\u00020\t\u0012\u0004\u0012\u00020\u001a0\u0019H\u0016J\u000e\u0010\u001b\u001a\u00020\t2\u0006\u0010\u001c\u001a\u00020\nJ\u0016\u0010\u001b\u001a\u00020\u001d2\u0006\u0010\u001c\u001a\u00020\n2\u0006\u0010\u001e\u001a\u00020\tJ\u0010\u0010\u001f\u001a\u00020 2\u0006\u0010\u001e\u001a\u00020\tH\u0007J\u0010\u0010!\u001a\u00020\u001d2\u0006\u0010\u001e\u001a\u00020\tH\u0007J\u0010\u0010\"\u001a\u0004\u0018\u00010\n2\u0006\u0010#\u001a\u00020$J\"\u0010\"\u001a\u0004\u0018\u00010\n2\b\u0010\u001e\u001a\u0004\u0018\u00010\t2\u0006\u0010%\u001a\u00020&2\u0006\u0010'\u001a\u00020&J\u0010\u0010\"\u001a\u0004\u0018\u00010\n2\u0006\u0010(\u001a\u00020)J\u0010\u0010*\u001a\u00020\n2\u0006\u0010+\u001a\u00020$H\u0002J\u0012\u0010,\u001a\u0004\u0018\u00010\t2\u0006\u0010+\u001a\u00020$H\u0002J\u0010\u0010-\u001a\u00020.2\u0006\u0010+\u001a\u00020$H\u0002J\u0010\u0010/\u001a\u00020\t2\u0006\u0010+\u001a\u00020$H\u0002J\b\u00104\u001a\u00020\u001dH\u0016J\u0010\u00105\u001a\u00020\u001d2\u0006\u00106\u001a\u00020.H\u0016J\u0010\u00107\u001a\u00020\u001d2\u0006\u00106\u001a\u00020.H\u0016J\u0018\u00108\u001a\u00020\u001d2\u0006\u0010(\u001a\u00020)2\u0006\u00106\u001a\u00020.H\u0016J\u0018\u00109\u001a\u00020\u001d2\u0006\u0010:\u001a\u00020;2\u0006\u0010\u001e\u001a\u00020\tH\u0016J\u0010\u0010<\u001a\u00020\u001d2\u0006\u0010\u001e\u001a\u00020\tH\u0016J\t\u0010=\u001a\u00020>H\u0097 R\u001a\u0010\u0007\u001a\u000e\u0012\u0004\u0012\u00020\t\u0012\u0004\u0012\u00020\n0\bX\u0082\u0004¢\u0006\u0002\n\u0000R\u0010\u0010\u000b\u001a\u00020\fX\u0082\u0004¢\u0006\u0004\n\u0002\u0010\rR\u0014\u0010\u000e\u001a\u00020\u000fX\u0080\u0004¢\u0006\b\n\u0000\u001a\u0004\b\u0010\u0010\u0011R\u0010\u0010\u0012\u001a\u00020\u0013X\u0082\u0004¢\u0006\u0004\n\u0002\u0010\u0014R\u0010\u0010\u0015\u001a\u00020\u0016X\u0082\u0004¢\u0006\u0004\n\u0002\u0010\u0017R\u0016\u00100\u001a\u0004\u0018\u0001018BX\u0082\u0004¢\u0006\u0006\u001a\u0004\b2\u00103¨\u0006@"}, d2 = {"Lcom/facebook/react/modules/blob/BlobModule;", "Lcom/facebook/fbreact/specs/NativeBlobModuleSpec;", "Lcom/facebook/react/turbomodule/core/interfaces/TurboModuleWithJSIBindings;", "reactContext", "Lcom/facebook/react/bridge/ReactApplicationContext;", "<init>", "(Lcom/facebook/react/bridge/ReactApplicationContext;)V", "blobs", "Ljava/util/HashMap;", "", "", "webSocketContentHandler", "com/facebook/react/modules/blob/BlobModule$webSocketContentHandler$1", "Lcom/facebook/react/modules/blob/BlobModule$webSocketContentHandler$1;", "networkingUriHandler", "Lcom/facebook/react/modules/network/NetworkingModule$UriHandler;", "getNetworkingUriHandler$ReactAndroid_release", "()Lcom/facebook/react/modules/network/NetworkingModule$UriHandler;", "networkingRequestBodyHandler", "com/facebook/react/modules/blob/BlobModule$networkingRequestBodyHandler$1", "Lcom/facebook/react/modules/blob/BlobModule$networkingRequestBodyHandler$1;", "networkingResponseHandler", "com/facebook/react/modules/blob/BlobModule$networkingResponseHandler$1", "Lcom/facebook/react/modules/blob/BlobModule$networkingResponseHandler$1;", "getTypedExportedConstants", "", "", "store", "data", "", "blobId", "getLengthOfBlob", "", "remove", "resolve", "uri", "Landroid/net/Uri;", "offset", "", "size", "blob", "Lcom/facebook/react/bridge/ReadableMap;", "getBytesFromUri", "contentUri", "getNameFromUri", "getLastModifiedFromUri", "", "getMimeTypeFromUri", "webSocketModule", "Lcom/facebook/react/modules/websocket/WebSocketModule;", "getWebSocketModule", "()Lcom/facebook/react/modules/websocket/WebSocketModule;", "addNetworkingHandler", "addWebSocketHandler", "idDouble", "removeWebSocketHandler", "sendOverSocket", "createFromParts", "parts", "Lcom/facebook/react/bridge/ReadableArray;", "release", "getBindingsInstaller", "Lcom/facebook/react/turbomodule/core/interfaces/BindingsInstallerHolder;", "Companion", "ReactAndroid_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
@SourceDebugExtension({"SMAP\nBlobModule.kt\nKotlin\n*S Kotlin\n*F\n+ 1 BlobModule.kt\ncom/facebook/react/modules/blob/BlobModule\n+ 2 fake.kt\nkotlin/jvm/internal/FakeKt\n*L\n1#1,343:1\n1#2:344\n*E\n"})
/* loaded from: classes3.dex */
public final class BlobModule extends NativeBlobModuleSpec implements TurboModuleWithJSIBindings {

    @NotNull
    public static final String NAME = "BlobModule";

    @NotNull
    private final HashMap<String, byte[]> blobs;

    @NotNull
    private final BlobModule$networkingRequestBodyHandler$1 networkingRequestBodyHandler;

    @NotNull
    private final BlobModule$networkingResponseHandler$1 networkingResponseHandler;

    @NotNull
    private final NetworkingModule.UriHandler networkingUriHandler;

    @NotNull
    private final BlobModule$webSocketContentHandler$1 webSocketContentHandler;

    static {
        SoLoader.m("reactnativeblob");
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    /* JADX WARN: Type inference failed for: r2v2, types: [com.facebook.react.modules.blob.BlobModule$webSocketContentHandler$1] */
    /* JADX WARN: Type inference failed for: r2v4, types: [com.facebook.react.modules.blob.BlobModule$networkingRequestBodyHandler$1] */
    /* JADX WARN: Type inference failed for: r2v5, types: [com.facebook.react.modules.blob.BlobModule$networkingResponseHandler$1] */
    public BlobModule(@NotNull ReactApplicationContext reactContext) {
        super(reactContext);
        Intrinsics.checkNotNullParameter(reactContext, "reactContext");
        this.blobs = new HashMap<>();
        this.webSocketContentHandler = new WebSocketModule.ContentHandler() { // from class: com.facebook.react.modules.blob.BlobModule$webSocketContentHandler$1
            @Override // com.facebook.react.modules.websocket.WebSocketModule.ContentHandler
            public void onMessage(String text, WritableMap params) {
                Intrinsics.checkNotNullParameter(text, "text");
                Intrinsics.checkNotNullParameter(params, "params");
                params.putString("data", text);
            }

            @Override // com.facebook.react.modules.websocket.WebSocketModule.ContentHandler
            public void onMessage(ByteString byteString, WritableMap params) {
                Intrinsics.checkNotNullParameter(byteString, "byteString");
                Intrinsics.checkNotNullParameter(params, "params");
                byte[] j = byteString.j();
                BlobModule blobModule = BlobModule.this;
                WritableMap createMap = Arguments.createMap();
                ReadableMapBuilder readableMapBuilder = new ReadableMapBuilder(createMap);
                readableMapBuilder.put("blobId", blobModule.store(j));
                readableMapBuilder.put("offset", 0);
                readableMapBuilder.put("size", j.length);
                params.putMap("data", createMap);
                params.putString("type", "blob");
            }
        };
        this.networkingUriHandler = new NetworkingModule.UriHandler() { // from class: com.facebook.react.modules.blob.BlobModule$networkingUriHandler$1
            @Override // com.facebook.react.modules.network.NetworkingModule.UriHandler
            public Pair<WritableMap, byte[]> fetch(Uri uri) {
                byte[] bytesFromUri;
                String mimeTypeFromUri;
                String nameFromUri;
                double lastModifiedFromUri;
                Intrinsics.checkNotNullParameter(uri, "uri");
                bytesFromUri = BlobModule.this.getBytesFromUri(uri);
                WritableMap createMap = Arguments.createMap();
                createMap.putString("blobId", BlobModule.this.store(bytesFromUri));
                createMap.putInt("offset", 0);
                createMap.putInt("size", bytesFromUri.length);
                mimeTypeFromUri = BlobModule.this.getMimeTypeFromUri(uri);
                createMap.putString("type", mimeTypeFromUri);
                nameFromUri = BlobModule.this.getNameFromUri(uri);
                createMap.putString(StackTraceHelper.NAME_KEY, nameFromUri);
                lastModifiedFromUri = BlobModule.this.getLastModifiedFromUri(uri);
                createMap.putDouble("lastModified", lastModifiedFromUri);
                return new Pair<>(createMap, bytesFromUri);
            }

            @Override // com.facebook.react.modules.network.NetworkingModule.UriHandler
            public boolean supports(Uri uri, String responseType) {
                Intrinsics.checkNotNullParameter(uri, "uri");
                Intrinsics.checkNotNullParameter(responseType, "responseType");
                String scheme = uri.getScheme();
                return (Intrinsics.areEqual(scheme, "http") || Intrinsics.areEqual(scheme, "https") || !Intrinsics.areEqual(responseType, "blob")) ? false : true;
            }
        };
        this.networkingRequestBodyHandler = new NetworkingModule.RequestBodyHandler() { // from class: com.facebook.react.modules.blob.BlobModule$networkingRequestBodyHandler$1
            @Override // com.facebook.react.modules.network.NetworkingModule.RequestBodyHandler
            public boolean supports(ReadableMap map) {
                Intrinsics.checkNotNullParameter(map, "map");
                return map.hasKey("blob");
            }

            @Override // com.facebook.react.modules.network.NetworkingModule.RequestBodyHandler
            public RequestBody toRequestBody(ReadableMap map, String contentType) {
                String string;
                Intrinsics.checkNotNullParameter(map, "map");
                if (map.hasKey("type") && (string = map.getString("type")) != null && string.length() != 0) {
                    contentType = map.getString("type");
                }
                if (contentType == null) {
                    contentType = "application/octet-stream";
                }
                ReadableMap map2 = map.getMap("blob");
                if (map2 == null) {
                    throw new IllegalStateException("Required value was null.");
                }
                byte[] resolve = BlobModule.this.resolve(map2.getString("blobId"), map2.getInt("offset"), map2.getInt("size"));
                if (resolve == null) {
                    throw new IllegalStateException("Required value was null.");
                }
                RequestBody.Companion companion = RequestBody.Companion;
                Pattern pattern = MediaType.f16040d;
                Intrinsics.checkNotNullParameter(contentType, "mediaType");
                return RequestBody.Companion.c(companion, f.D(contentType), resolve, 0, 12);
            }
        };
        this.networkingResponseHandler = new NetworkingModule.ResponseHandler() { // from class: com.facebook.react.modules.blob.BlobModule$networkingResponseHandler$1
            @Override // com.facebook.react.modules.network.NetworkingModule.ResponseHandler
            public boolean supports(String responseType) {
                Intrinsics.checkNotNullParameter(responseType, "responseType");
                return Intrinsics.areEqual(responseType, "blob");
            }

            @Override // com.facebook.react.modules.network.NetworkingModule.ResponseHandler
            public WritableMap toResponseData(byte[] data) {
                Intrinsics.checkNotNullParameter(data, "data");
                WritableMap createMap = Arguments.createMap();
                createMap.putString("blobId", BlobModule.this.store(data));
                createMap.putInt("offset", 0);
                createMap.putInt("size", data.length);
                return createMap;
            }
        };
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final byte[] getBytesFromUri(Uri contentUri) {
        InputStream openInputStream = getReactApplicationContext().getContentResolver().openInputStream(contentUri);
        if (openInputStream == null) {
            throw new FileNotFoundException("File not found for " + contentUri);
        }
        try {
            byte[] bArr = new byte[Math.max(IntBufferBatchMountItem.INSTRUCTION_UPDATE_OVERFLOW_INSET, openInputStream.available())];
            Ref.IntRef intRef = new Ref.IntRef();
            byte[] bArr2 = new byte[IntBufferBatchMountItem.INSTRUCTION_UPDATE_OVERFLOW_INSET];
            ByteArrayOutputStream byteArrayOutputStream = new ByteArrayOutputStream();
            int i5 = 0;
            while (true) {
                int read = openInputStream.read(bArr);
                intRef.element = read;
                if (read == -1) {
                    break;
                }
                byteArrayOutputStream.write(bArr2, 0, i5);
                i5 = intRef.element;
                byte[] bArr3 = bArr2;
                bArr2 = bArr;
                bArr = bArr3;
            }
            if (byteArrayOutputStream.size() == 0 && bArr2.length == i5) {
                openInputStream.close();
                return bArr2;
            }
            byteArrayOutputStream.write(bArr2, 0, i5);
            byte[] byteArray = byteArrayOutputStream.toByteArray();
            Intrinsics.checkNotNullExpressionValue(byteArray, "toByteArray(...)");
            openInputStream.close();
            return byteArray;
        } catch (Throwable th2) {
            openInputStream.close();
            throw th2;
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final double getLastModifiedFromUri(Uri contentUri) {
        if (Intrinsics.areEqual(contentUri.getScheme(), "file")) {
            return new File(contentUri.toString()).lastModified();
        }
        return 0.0d;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final String getMimeTypeFromUri(Uri contentUri) {
        String fileExtensionFromUrl;
        String type = getReactApplicationContext().getContentResolver().getType(contentUri);
        if (type == null && (fileExtensionFromUrl = MimeTypeMap.getFileExtensionFromUrl(contentUri.getPath())) != null) {
            type = MimeTypeMap.getSingleton().getMimeTypeFromExtension(fileExtensionFromUrl);
        }
        return type == null ? "" : type;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final String getNameFromUri(Uri contentUri) {
        if (Intrinsics.areEqual(contentUri.getScheme(), "file")) {
            return contentUri.getLastPathSegment();
        }
        Cursor query = getReactApplicationContext().getContentResolver().query(contentUri, new String[]{"_display_name"}, null, null, null);
        if (query != null) {
            try {
                if (query.moveToFirst()) {
                    String string = query.getString(0);
                    query.close();
                    return string;
                }
                Unit unit = Unit.a;
                query.close();
            } finally {
            }
        }
        return contentUri.getLastPathSegment();
    }

    private final WebSocketModule getWebSocketModule() {
        return (WebSocketModule) getReactApplicationContext().getNativeModule(WebSocketModule.class);
    }

    @Override // com.facebook.fbreact.specs.NativeBlobModuleSpec
    public void addNetworkingHandler() {
        NativeModule nativeModule = getReactApplicationContext().getNativeModule((Class<NativeModule>) NetworkingModule.class);
        if (nativeModule == null) {
            throw new IllegalStateException("Required value was null.");
        }
        NetworkingModule networkingModule = (NetworkingModule) nativeModule;
        networkingModule.addUriHandler$ReactAndroid_release(this.networkingUriHandler);
        networkingModule.addRequestBodyHandler$ReactAndroid_release(this.networkingRequestBodyHandler);
        networkingModule.addResponseHandler$ReactAndroid_release(this.networkingResponseHandler);
    }

    @Override // com.facebook.fbreact.specs.NativeBlobModuleSpec
    public void addWebSocketHandler(double idDouble) {
        int i5 = (int) idDouble;
        WebSocketModule webSocketModule = getWebSocketModule();
        if (webSocketModule != null) {
            webSocketModule.setContentHandler(i5, this.webSocketContentHandler);
        }
    }

    @Override // com.facebook.fbreact.specs.NativeBlobModuleSpec
    public void createFromParts(@NotNull ReadableArray parts, @NotNull String blobId) {
        Intrinsics.checkNotNullParameter(parts, "parts");
        Intrinsics.checkNotNullParameter(blobId, "blobId");
        ArrayList arrayList = new ArrayList(parts.size());
        int size = parts.size();
        int i5 = 0;
        for (int i6 = 0; i6 < size; i6++) {
            ReadableMap map = parts.getMap(i6);
            if (map == null) {
                throw new IllegalStateException("Required value was null.");
            }
            String string = map.getString("type");
            if (string == null) {
                throw new IllegalStateException("Required value was null.");
            }
            if (Intrinsics.areEqual(string, "blob")) {
                ReadableMap map2 = map.getMap("data");
                if (map2 == null) {
                    throw new IllegalStateException("Required value was null.");
                }
                int i10 = map2.getInt("size") + i5;
                byte[] resolve = resolve(map2);
                if (resolve == null) {
                    throw new IllegalStateException("Required value was null.");
                }
                arrayList.add(i6, resolve);
                i5 = i10;
            } else {
                if (!Intrinsics.areEqual(string, "string")) {
                    throw new IllegalArgumentException(e.k("Invalid type for blob: ", map.getString("type")));
                }
                String string2 = map.getString("data");
                if (string2 == null) {
                    throw new IllegalStateException("Required value was null.");
                }
                Charset forName = Charset.forName("UTF-8");
                Intrinsics.checkNotNullExpressionValue(forName, "forName(...)");
                byte[] bytes = string2.getBytes(forName);
                Intrinsics.checkNotNullExpressionValue(bytes, "getBytes(...)");
                i5 += bytes.length;
                arrayList.add(i6, bytes);
            }
        }
        ByteBuffer allocate = ByteBuffer.allocate(i5);
        Iterator it = arrayList.iterator();
        Intrinsics.checkNotNullExpressionValue(it, "iterator(...)");
        while (it.hasNext()) {
            Object next = it.next();
            Intrinsics.checkNotNullExpressionValue(next, "next(...)");
            allocate.put((byte[]) next);
        }
        byte[] array = allocate.array();
        Intrinsics.checkNotNullExpressionValue(array, "array(...)");
        store(array, blobId);
    }

    @Override // com.facebook.react.turbomodule.core.interfaces.TurboModuleWithJSIBindings
    @NotNull
    @a
    public native BindingsInstallerHolder getBindingsInstaller();

    @a
    public final long getLengthOfBlob(@NotNull String blobId) {
        long length;
        Intrinsics.checkNotNullParameter(blobId, "blobId");
        synchronized (this.blobs) {
            length = this.blobs.get(blobId) != null ? r4.length : 0L;
        }
        return length;
    }

    @NotNull
    /* renamed from: getNetworkingUriHandler$ReactAndroid_release, reason: from getter */
    public final NetworkingModule.UriHandler getNetworkingUriHandler() {
        return this.networkingUriHandler;
    }

    @Override // com.facebook.fbreact.specs.NativeBlobModuleSpec
    @NotNull
    public Map<String, Object> getTypedExportedConstants() {
        Resources resources = getReactApplicationContext().getResources();
        int identifier = resources.getIdentifier("blob_provider_authority", "string", getReactApplicationContext().getPackageName());
        return identifier == 0 ? v0.d() : v0.g(new Pair("BLOB_URI_SCHEME", "content"), new Pair("BLOB_URI_HOST", resources.getString(identifier)));
    }

    @Override // com.facebook.fbreact.specs.NativeBlobModuleSpec
    public void release(@NotNull String blobId) {
        Intrinsics.checkNotNullParameter(blobId, "blobId");
        remove(blobId);
    }

    @a
    public final void remove(@NotNull String blobId) {
        Intrinsics.checkNotNullParameter(blobId, "blobId");
        synchronized (this.blobs) {
            this.blobs.remove(blobId);
        }
    }

    @Override // com.facebook.fbreact.specs.NativeBlobModuleSpec
    public void removeWebSocketHandler(double idDouble) {
        int i5 = (int) idDouble;
        WebSocketModule webSocketModule = getWebSocketModule();
        if (webSocketModule != null) {
            webSocketModule.setContentHandler(i5, null);
        }
    }

    public final byte[] resolve(@NotNull Uri uri) {
        Intrinsics.checkNotNullParameter(uri, "uri");
        String lastPathSegment = uri.getLastPathSegment();
        String queryParameter = uri.getQueryParameter("offset");
        int parseInt = queryParameter != null ? Integer.parseInt(queryParameter) : 0;
        String queryParameter2 = uri.getQueryParameter("size");
        return resolve(lastPathSegment, parseInt, queryParameter2 != null ? Integer.parseInt(queryParameter2) : -1);
    }

    @Override // com.facebook.fbreact.specs.NativeBlobModuleSpec
    public void sendOverSocket(@NotNull ReadableMap blob, double idDouble) {
        byte[] resolve;
        Intrinsics.checkNotNullParameter(blob, "blob");
        int i5 = (int) idDouble;
        WebSocketModule webSocketModule = getWebSocketModule();
        if (webSocketModule == null || (resolve = resolve(blob.getString("blobId"), blob.getInt("offset"), blob.getInt("size"))) == null) {
            return;
        }
        ByteString byteString = ByteString.f16115v;
        ByteBuffer buffer = ByteBuffer.wrap(resolve);
        Intrinsics.checkNotNullExpressionValue(buffer, "wrap(...)");
        Intrinsics.checkNotNullParameter(buffer, "buffer");
        Intrinsics.checkNotNullParameter(buffer, "<this>");
        byte[] bArr = new byte[buffer.remaining()];
        buffer.get(bArr);
        webSocketModule.sendBinary(new ByteString(bArr), i5);
    }

    @NotNull
    public final String store(@NotNull byte[] data) {
        Intrinsics.checkNotNullParameter(data, "data");
        String uuid = UUID.randomUUID().toString();
        Intrinsics.checkNotNullExpressionValue(uuid, "toString(...)");
        store(data, uuid);
        return uuid;
    }

    public final void store(@NotNull byte[] data, @NotNull String blobId) {
        Intrinsics.checkNotNullParameter(data, "data");
        Intrinsics.checkNotNullParameter(blobId, "blobId");
        synchronized (this.blobs) {
            this.blobs.put(blobId, data);
            Unit unit = Unit.a;
        }
    }

    public final byte[] resolve(String blobId, int offset, int size) {
        synchronized (this.blobs) {
            try {
                byte[] bArr = this.blobs.get(blobId);
                if (bArr == null) {
                    return null;
                }
                if (size == -1) {
                    size = bArr.length - offset;
                }
                if (offset <= 0 && size == bArr.length) {
                    return bArr;
                }
                return Arrays.copyOfRange(bArr, offset, size + offset);
            } catch (Throwable th2) {
                throw th2;
            }
        }
    }

    public final byte[] resolve(@NotNull ReadableMap blob) {
        Intrinsics.checkNotNullParameter(blob, "blob");
        return resolve(blob.getString("blobId"), blob.getInt("offset"), blob.getInt("size"));
    }
}
