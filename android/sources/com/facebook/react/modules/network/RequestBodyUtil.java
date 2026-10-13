package com.facebook.react.modules.network;

import android.content.Context;
import android.net.Uri;
import android.util.Base64;
import com.facebook.react.common.ReactConstants;
import et.c;
import et.y;
import java.io.ByteArrayInputStream;
import java.io.ByteArrayOutputStream;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.InputStream;
import java.net.URL;
import java.nio.channels.Channels;
import java.nio.channels.ReadableByteChannel;
import java.util.Collection;
import java.util.List;
import java.util.ListIterator;
import java.util.zip.GZIPOutputStream;
import kotlin.Metadata;
import kotlin.collections.CollectionsKt;
import kotlin.collections.m0;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.LongCompanionObject;
import kotlin.jvm.internal.SourceDebugExtension;
import kotlin.text.Charsets;
import kotlin.text.Regex;
import kotlin.text.x;
import okhttp3.MediaType;
import okhttp3.RequestBody;
import okio.BufferedSink;
import okio.ByteString;
import okio.Source;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u0000\\\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\u000e\n\u0002\b\u0003\n\u0002\u0010\u000b\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\bÀ\u0002\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\u0012\u0010\b\u001a\u00020\t2\b\u0010\n\u001a\u0004\u0018\u00010\u0005H\u0007J\u001a\u0010\u000b\u001a\u0004\u0018\u00010\f2\u0006\u0010\r\u001a\u00020\u000e2\u0006\u0010\u000f\u001a\u00020\u0005H\u0007J\u0018\u0010\u0010\u001a\u00020\f2\u0006\u0010\r\u001a\u00020\u000e2\u0006\u0010\u0011\u001a\u00020\u0012H\u0002J\u001c\u0010\u0013\u001a\u0004\u0018\u00010\u00142\b\u0010\u0015\u001a\u0004\u0018\u00010\u00162\u0006\u0010\u0017\u001a\u00020\u0005H\u0007J\u0010\u0010\u0018\u001a\u00020\u00192\u0006\u0010\u001a\u001a\u00020\u001bH\u0002J\u001a\u0010\u001c\u001a\u00020\u00142\b\u0010\u0015\u001a\u0004\u0018\u00010\u00162\u0006\u0010\u001d\u001a\u00020\fH\u0007J\u0018\u0010\u001e\u001a\u00020\u001f2\u0006\u0010 \u001a\u00020\u00142\u0006\u0010!\u001a\u00020\"H\u0007J\u0012\u0010#\u001a\u0004\u0018\u00010\u00142\u0006\u0010$\u001a\u00020\u0005H\u0007R\u000e\u0010\u0004\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\u0006\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\u0007\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000¨\u0006%"}, d2 = {"Lcom/facebook/react/modules/network/RequestBodyUtil;", "", "<init>", "()V", "CONTENT_ENCODING_GZIP", "", "NAME", "TEMP_FILE_SUFFIX", "isGzipEncoding", "", "encodingType", "getFileInputStream", "Ljava/io/InputStream;", "context", "Landroid/content/Context;", "fileContentUriStr", "getDownloadFileInputStream", "uri", "Landroid/net/Uri;", "createGzip", "Lokhttp3/RequestBody;", "mediaType", "Lokhttp3/MediaType;", "body", "closeQuietly", "", "source", "Lokio/Source;", "create", "inputStream", "createProgressRequest", "Lcom/facebook/react/modules/network/ProgressRequestBody;", "requestBody", "listener", "Lcom/facebook/react/modules/network/ProgressListener;", "getEmptyBody", "method", "ReactAndroid_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
@SourceDebugExtension({"SMAP\nRequestBodyUtil.kt\nKotlin\n*S Kotlin\n*F\n+ 1 RequestBodyUtil.kt\ncom/facebook/react/modules/network/RequestBodyUtil\n+ 2 _Collections.kt\nkotlin/collections/CollectionsKt___CollectionsKt\n+ 3 ArraysJVM.kt\nkotlin/collections/ArraysKt__ArraysJVMKt\n*L\n1#1,183:1\n739#2,9:184\n37#3:193\n36#3,3:194\n*S KotlinDebug\n*F\n+ 1 RequestBodyUtil.kt\ncom/facebook/react/modules/network/RequestBodyUtil\n*L\n68#1:184,9\n69#1:193\n69#1:194,3\n*E\n"})
/* loaded from: classes3.dex */
public final class RequestBodyUtil {

    @NotNull
    private static final String CONTENT_ENCODING_GZIP = "gzip";

    @NotNull
    public static final RequestBodyUtil INSTANCE = new RequestBodyUtil();

    @NotNull
    private static final String NAME = "RequestBodyUtil";

    @NotNull
    private static final String TEMP_FILE_SUFFIX = "temp";

    private RequestBodyUtil() {
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final void closeQuietly(Source source) {
        try {
            source.close();
        } catch (RuntimeException e9) {
            throw e9;
        } catch (Exception unused) {
        }
    }

    @NotNull
    public static final RequestBody create(final MediaType mediaType, @NotNull final InputStream inputStream) {
        Intrinsics.checkNotNullParameter(inputStream, "inputStream");
        return new RequestBody() { // from class: com.facebook.react.modules.network.RequestBodyUtil$create$1
            @Override // okhttp3.RequestBody
            public long contentLength() {
                try {
                    return inputStream.available();
                } catch (IOException unused) {
                    return 0L;
                }
            }

            @Override // okhttp3.RequestBody
            /* renamed from: contentType, reason: from getter */
            public MediaType get$mediaType() {
                return MediaType.this;
            }

            @Override // okhttp3.RequestBody
            public boolean isOneShot() {
                return true;
            }

            @Override // okhttp3.RequestBody
            public void writeTo(BufferedSink sink) {
                Intrinsics.checkNotNullParameter(sink, "sink");
                c cVar = null;
                try {
                    InputStream inputStream2 = inputStream;
                    Intrinsics.checkNotNullParameter(inputStream2, "inputStream");
                    cVar = y.m(inputStream2);
                    sink.J(cVar);
                    RequestBodyUtil.INSTANCE.closeQuietly(cVar);
                } catch (Throwable th2) {
                    if (cVar != null) {
                        RequestBodyUtil.INSTANCE.closeQuietly(cVar);
                    }
                    throw th2;
                }
            }
        };
    }

    public static final RequestBody createGzip(MediaType mediaType, @NotNull String body) {
        Intrinsics.checkNotNullParameter(body, "body");
        ByteArrayOutputStream byteArrayOutputStream = new ByteArrayOutputStream();
        try {
            GZIPOutputStream gZIPOutputStream = new GZIPOutputStream(byteArrayOutputStream);
            byte[] bytes = body.getBytes(Charsets.UTF_8);
            Intrinsics.checkNotNullExpressionValue(bytes, "getBytes(...)");
            gZIPOutputStream.write(bytes);
            gZIPOutputStream.close();
            RequestBody.Companion companion = RequestBody.Companion;
            byte[] byteArray = byteArrayOutputStream.toByteArray();
            Intrinsics.checkNotNullExpressionValue(byteArray, "toByteArray(...)");
            return RequestBody.Companion.c(companion, mediaType, byteArray, 0, 12);
        } catch (IOException unused) {
            return null;
        }
    }

    @NotNull
    public static final ProgressRequestBody createProgressRequest(@NotNull RequestBody requestBody, @NotNull ProgressListener listener) {
        Intrinsics.checkNotNullParameter(requestBody, "requestBody");
        Intrinsics.checkNotNullParameter(listener, "listener");
        return new ProgressRequestBody(requestBody, listener);
    }

    private final InputStream getDownloadFileInputStream(Context context, Uri uri) {
        File createTempFile = File.createTempFile(NAME, TEMP_FILE_SUFFIX, context.getApplicationContext().getCacheDir());
        createTempFile.deleteOnExit();
        URL url = new URL(uri.toString());
        FileOutputStream fileOutputStream = new FileOutputStream(createTempFile);
        try {
            InputStream openStream = url.openStream();
            try {
                ReadableByteChannel newChannel = Channels.newChannel(openStream);
                try {
                    fileOutputStream.getChannel().transferFrom(newChannel, 0L, LongCompanionObject.MAX_VALUE);
                    FileInputStream fileInputStream = new FileInputStream(createTempFile);
                    com.facebook.imagepipeline.nativecode.c.j(newChannel, null);
                    com.facebook.imagepipeline.nativecode.c.j(openStream, null);
                    fileOutputStream.close();
                    return fileInputStream;
                } finally {
                }
            } finally {
            }
        } finally {
        }
    }

    public static final RequestBody getEmptyBody(@NotNull String method) {
        Intrinsics.checkNotNullParameter(method, "method");
        int hashCode = method.hashCode();
        if (hashCode == 79599 ? !method.equals("PUT") : !(hashCode == 2461856 ? method.equals("POST") : hashCode == 75900968 && method.equals("PATCH"))) {
            return null;
        }
        RequestBody.Companion companion = RequestBody.Companion;
        ByteString content = ByteString.f16115v;
        companion.getClass();
        Intrinsics.checkNotNullParameter(content, "content");
        Intrinsics.checkNotNullParameter(content, "<this>");
        return new okhttp3.c(null, content);
    }

    public static final InputStream getFileInputStream(@NotNull Context context, @NotNull String fileContentUriStr) {
        Collection collection;
        Intrinsics.checkNotNullParameter(context, "context");
        Intrinsics.checkNotNullParameter(fileContentUriStr, "fileContentUriStr");
        try {
            Uri parse = Uri.parse(fileContentUriStr);
            String scheme = parse.getScheme();
            if (scheme != null && x.o(scheme, "http", false)) {
                RequestBodyUtil requestBodyUtil = INSTANCE;
                Intrinsics.checkNotNull(parse);
                return requestBodyUtil.getDownloadFileInputStream(context, parse);
            }
            if (!x.o(fileContentUriStr, "data:", false)) {
                return context.getContentResolver().openInputStream(parse);
            }
            List f2 = new Regex(",").f(fileContentUriStr);
            if (!f2.isEmpty()) {
                ListIterator listIterator = f2.listIterator(f2.size());
                while (listIterator.hasPrevious()) {
                    if (((String) listIterator.previous()).length() != 0) {
                        collection = CollectionsKt.f0(f2, listIterator.nextIndex() + 1);
                        break;
                    }
                }
            }
            collection = m0.f13512d;
            return new ByteArrayInputStream(Base64.decode(((String[]) collection.toArray(new String[0]))[1], 0));
        } catch (Exception e9) {
            p8.a.h(ReactConstants.TAG, "Could not retrieve file for contentUri " + fileContentUriStr, e9);
            return null;
        }
    }

    public static final boolean isGzipEncoding(String encodingType) {
        return CONTENT_ENCODING_GZIP.equalsIgnoreCase(encodingType);
    }
}
