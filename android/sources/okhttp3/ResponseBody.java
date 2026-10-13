package okhttp3;

import e4.f;
import java.io.Closeable;
import java.io.IOException;
import java.io.InputStream;
import java.io.Reader;
import java.nio.charset.Charset;
import java.util.regex.Pattern;
import kotlin.jvm.internal.Intrinsics;
import kotlin.text.Charsets;
import okio.Buffer;
import okio.BufferedSource;
import okio.ByteString;
import org.jetbrains.annotations.NotNull;
import ps.u;

/* loaded from: classes3.dex */
public abstract class ResponseBody implements Closeable {

    @NotNull
    public static final Companion Companion = new Companion();
    private Reader reader;

    public static final class Companion {
        public static e a(String string, MediaType mediaType) {
            Intrinsics.checkNotNullParameter(string, "<this>");
            Charset charset = Charsets.UTF_8;
            if (mediaType != null) {
                Pattern pattern = MediaType.f16040d;
                Charset a = mediaType.a(null);
                if (a == null) {
                    mediaType = f.D(mediaType + "; charset=utf-8");
                } else {
                    charset = a;
                }
            }
            Buffer buffer = new Buffer();
            Intrinsics.checkNotNullParameter(string, "string");
            Intrinsics.checkNotNullParameter(charset, "charset");
            int length = string.length();
            Intrinsics.checkNotNullParameter(string, "string");
            Intrinsics.checkNotNullParameter(charset, "charset");
            if (length < 0) {
                throw new IllegalArgumentException(a3.e.f(length, 0, "endIndex < beginIndex: ", " < ").toString());
            }
            if (length > string.length()) {
                StringBuilder r5 = a3.e.r(length, "endIndex > string.length: ", " > ");
                r5.append(string.length());
                throw new IllegalArgumentException(r5.toString().toString());
            }
            if (Intrinsics.areEqual(charset, Charsets.UTF_8)) {
                buffer.j0(0, length, string);
            } else {
                String substring = string.substring(0, length);
                Intrinsics.checkNotNullExpressionValue(substring, "this as java.lang.String…ing(startIndex, endIndex)");
                byte[] bytes = substring.getBytes(charset);
                Intrinsics.checkNotNullExpressionValue(bytes, "this as java.lang.String).getBytes(charset)");
                buffer.m1302write(bytes, 0, bytes.length);
            }
            return b(mediaType, buffer.f16114e, buffer);
        }

        public static e b(MediaType mediaType, long j, BufferedSource bufferedSource) {
            Intrinsics.checkNotNullParameter(bufferedSource, "<this>");
            return new e(mediaType, j, bufferedSource);
        }

        public static e c(byte[] bArr, MediaType mediaType) {
            Intrinsics.checkNotNullParameter(bArr, "<this>");
            Buffer buffer = new Buffer();
            buffer.m1301write(bArr);
            return b(mediaType, bArr.length, buffer);
        }
    }

    @NotNull
    public static final ResponseBody create(@NotNull String str, MediaType mediaType) {
        Companion.getClass();
        return Companion.a(str, mediaType);
    }

    @NotNull
    public final InputStream byteStream() {
        return source().k0();
    }

    @NotNull
    public final ByteString byteString() {
        long contentLength = contentLength();
        if (contentLength > 2147483647L) {
            throw new IOException(Intrinsics.stringPlus("Cannot buffer entire body for content length: ", Long.valueOf(contentLength)));
        }
        BufferedSource source = source();
        try {
            ByteString L = source.L();
            source.close();
            int c6 = L.c();
            if (contentLength == -1 || contentLength == c6) {
                return L;
            }
            throw new IOException("Content-Length (" + contentLength + ") and stream length (" + c6 + ") disagree");
        } finally {
        }
    }

    @NotNull
    public final byte[] bytes() {
        long contentLength = contentLength();
        if (contentLength > 2147483647L) {
            throw new IOException(Intrinsics.stringPlus("Cannot buffer entire body for content length: ", Long.valueOf(contentLength)));
        }
        BufferedSource source = source();
        try {
            byte[] v5 = source.v();
            source.close();
            int length = v5.length;
            if (contentLength == -1 || contentLength == length) {
                return v5;
            }
            throw new IOException("Content-Length (" + contentLength + ") and stream length (" + length + ") disagree");
        } finally {
        }
    }

    @NotNull
    public final Reader charStream() {
        Reader reader = this.reader;
        if (reader == null) {
            BufferedSource source = source();
            MediaType contentType = contentType();
            Charset a = contentType == null ? null : contentType.a(Charsets.UTF_8);
            if (a == null) {
                a = Charsets.UTF_8;
            }
            reader = new u(source, a);
            this.reader = reader;
        }
        return reader;
    }

    @Override // java.io.Closeable, java.lang.AutoCloseable
    public void close() {
        qs.b.c(source());
    }

    public abstract long contentLength();

    public abstract MediaType contentType();

    public abstract BufferedSource source();

    @NotNull
    public final String string() {
        BufferedSource source = source();
        try {
            MediaType contentType = contentType();
            Charset a = contentType == null ? null : contentType.a(Charsets.UTF_8);
            if (a == null) {
                a = Charsets.UTF_8;
            }
            String E = source.E(qs.b.r(source, a));
            source.close();
            return E;
        } finally {
        }
    }

    @fo.d
    @NotNull
    public static final ResponseBody create(MediaType mediaType, @NotNull String content) {
        Companion.getClass();
        Intrinsics.checkNotNullParameter(content, "content");
        return Companion.a(content, mediaType);
    }

    @fo.d
    @NotNull
    public static final ResponseBody create(MediaType mediaType, @NotNull ByteString content) {
        Companion.getClass();
        Intrinsics.checkNotNullParameter(content, "content");
        Intrinsics.checkNotNullParameter(content, "<this>");
        Buffer buffer = new Buffer();
        buffer.R(content);
        return Companion.b(mediaType, content.c(), buffer);
    }

    @fo.d
    @NotNull
    public static final ResponseBody create(MediaType mediaType, @NotNull byte[] content) {
        Companion.getClass();
        Intrinsics.checkNotNullParameter(content, "content");
        return Companion.c(content, mediaType);
    }

    @NotNull
    public static final ResponseBody create(@NotNull BufferedSource bufferedSource, MediaType mediaType, long j) {
        Companion.getClass();
        return Companion.b(mediaType, j, bufferedSource);
    }

    @NotNull
    public static final ResponseBody create(@NotNull byte[] bArr, MediaType mediaType) {
        Companion.getClass();
        return Companion.c(bArr, mediaType);
    }

    @NotNull
    public static final ResponseBody create(@NotNull ByteString byteString, MediaType mediaType) {
        Companion.getClass();
        Intrinsics.checkNotNullParameter(byteString, "<this>");
        Buffer buffer = new Buffer();
        buffer.R(byteString);
        return Companion.b(mediaType, byteString.c(), buffer);
    }

    @fo.d
    @NotNull
    public static final ResponseBody create(MediaType mediaType, long j, @NotNull BufferedSource content) {
        Companion.getClass();
        Intrinsics.checkNotNullParameter(content, "content");
        return Companion.b(mediaType, j, content);
    }
}
