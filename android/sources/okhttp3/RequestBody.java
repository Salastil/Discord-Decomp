package okhttp3;

import e4.f;
import java.io.File;
import java.nio.charset.Charset;
import java.util.regex.Pattern;
import kotlin.jvm.internal.Intrinsics;
import kotlin.text.Charsets;
import okio.BufferedSink;
import okio.ByteString;
import org.jetbrains.annotations.NotNull;

/* loaded from: classes3.dex */
public abstract class RequestBody {

    @NotNull
    public static final Companion Companion = new Companion();

    public static final class Companion {
        public static d a(String str, MediaType mediaType) {
            Intrinsics.checkNotNullParameter(str, "<this>");
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
            byte[] bytes = str.getBytes(charset);
            Intrinsics.checkNotNullExpressionValue(bytes, "this as java.lang.String).getBytes(charset)");
            return b(mediaType, bytes, 0, bytes.length);
        }

        public static d b(MediaType mediaType, byte[] bArr, int i5, int i6) {
            Intrinsics.checkNotNullParameter(bArr, "<this>");
            long length = bArr.length;
            long j = i5;
            long j5 = i6;
            byte[] bArr2 = qs.b.a;
            if ((j | j5) < 0 || j > length || length - j < j5) {
                throw new ArrayIndexOutOfBoundsException();
            }
            return new d(mediaType, bArr, i6, i5);
        }

        public static d c(Companion companion, MediaType mediaType, byte[] content, int i5, int i6) {
            if ((i6 & 4) != 0) {
                i5 = 0;
            }
            int length = content.length;
            companion.getClass();
            Intrinsics.checkNotNullParameter(content, "content");
            return b(mediaType, content, i5, length);
        }

        public static /* synthetic */ d d(Companion companion, byte[] bArr, MediaType mediaType, int i5, int i6) {
            if ((i6 & 1) != 0) {
                mediaType = null;
            }
            if ((i6 & 2) != 0) {
                i5 = 0;
            }
            int length = bArr.length;
            companion.getClass();
            return b(mediaType, bArr, i5, length);
        }
    }

    @NotNull
    public static final RequestBody create(@NotNull String str, MediaType mediaType) {
        Companion.getClass();
        return Companion.a(str, mediaType);
    }

    public long contentLength() {
        return -1L;
    }

    public abstract MediaType contentType();

    public boolean isDuplex() {
        return false;
    }

    public boolean isOneShot() {
        return false;
    }

    public abstract void writeTo(BufferedSink bufferedSink);

    @fo.d
    @NotNull
    public static final RequestBody create(MediaType mediaType, @NotNull File file) {
        Companion.getClass();
        Intrinsics.checkNotNullParameter(file, "file");
        Intrinsics.checkNotNullParameter(file, "<this>");
        return new b(mediaType, file);
    }

    @fo.d
    @NotNull
    public static final RequestBody create(MediaType mediaType, @NotNull byte[] content) {
        Companion companion = Companion;
        companion.getClass();
        Intrinsics.checkNotNullParameter(content, "content");
        return Companion.c(companion, mediaType, content, 0, 12);
    }

    @fo.d
    @NotNull
    public static final RequestBody create(MediaType mediaType, @NotNull byte[] content, int i5) {
        Companion companion = Companion;
        companion.getClass();
        Intrinsics.checkNotNullParameter(content, "content");
        return Companion.c(companion, mediaType, content, i5, 8);
    }

    @NotNull
    public static final RequestBody create(@NotNull byte[] bArr) {
        Companion companion = Companion;
        companion.getClass();
        Intrinsics.checkNotNullParameter(bArr, "<this>");
        return Companion.d(companion, bArr, null, 0, 7);
    }

    @NotNull
    public static final RequestBody create(@NotNull byte[] bArr, MediaType mediaType) {
        Companion companion = Companion;
        companion.getClass();
        Intrinsics.checkNotNullParameter(bArr, "<this>");
        return Companion.d(companion, bArr, mediaType, 0, 6);
    }

    @NotNull
    public static final RequestBody create(@NotNull byte[] bArr, MediaType mediaType, int i5) {
        Companion companion = Companion;
        companion.getClass();
        Intrinsics.checkNotNullParameter(bArr, "<this>");
        return Companion.d(companion, bArr, mediaType, i5, 4);
    }

    @NotNull
    public static final RequestBody create(@NotNull byte[] bArr, MediaType mediaType, int i5, int i6) {
        Companion.getClass();
        return Companion.b(mediaType, bArr, i5, i6);
    }

    @NotNull
    public static final RequestBody create(@NotNull ByteString byteString, MediaType mediaType) {
        Companion.getClass();
        Intrinsics.checkNotNullParameter(byteString, "<this>");
        return new c(mediaType, byteString);
    }

    @NotNull
    public static final RequestBody create(@NotNull File file, MediaType mediaType) {
        Companion.getClass();
        Intrinsics.checkNotNullParameter(file, "<this>");
        return new b(mediaType, file);
    }

    @fo.d
    @NotNull
    public static final RequestBody create(MediaType mediaType, @NotNull String content) {
        Companion.getClass();
        Intrinsics.checkNotNullParameter(content, "content");
        return Companion.a(content, mediaType);
    }

    @fo.d
    @NotNull
    public static final RequestBody create(MediaType mediaType, @NotNull ByteString content) {
        Companion.getClass();
        Intrinsics.checkNotNullParameter(content, "content");
        Intrinsics.checkNotNullParameter(content, "<this>");
        return new c(mediaType, content);
    }

    @fo.d
    @NotNull
    public static final RequestBody create(MediaType mediaType, @NotNull byte[] content, int i5, int i6) {
        Companion.getClass();
        Intrinsics.checkNotNullParameter(content, "content");
        return Companion.b(mediaType, content, i5, i6);
    }
}
