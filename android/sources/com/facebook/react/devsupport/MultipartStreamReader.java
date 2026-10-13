package com.facebook.react.devsupport;

import androidx.recyclerview.widget.RecyclerView;
import java.util.Collection;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.ListIterator;
import java.util.Map;
import kotlin.Metadata;
import kotlin.collections.CollectionsKt;
import kotlin.collections.m0;
import kotlin.collections.v0;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.SourceDebugExtension;
import kotlin.text.Regex;
import kotlin.text.StringsKt;
import okio.Buffer;
import okio.BufferedSource;
import okio.ByteString;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u0000>\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0003\n\u0002\u0010\t\n\u0000\n\u0002\u0010\u000b\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010$\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0002\n\u0002\b\t\b\u0000\u0018\u0000 \u001b2\u00020\u0001:\u0002\u001a\u001bB\u0017\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005¢\u0006\u0004\b\u0006\u0010\u0007J\u000e\u0010\n\u001a\u00020\u000b2\u0006\u0010\f\u001a\u00020\rJ\u001c\u0010\u000e\u001a\u000e\u0012\u0004\u0012\u00020\u0005\u0012\u0004\u0012\u00020\u00050\u000f2\u0006\u0010\u0010\u001a\u00020\u0011H\u0002J \u0010\u0012\u001a\u00020\u00132\u0006\u0010\u0014\u001a\u00020\u00112\u0006\u0010\u0015\u001a\u00020\u000b2\u0006\u0010\f\u001a\u00020\rH\u0002J8\u0010\u0016\u001a\u00020\u00132\u0014\u0010\u0017\u001a\u0010\u0012\u0004\u0012\u00020\u0005\u0012\u0004\u0012\u00020\u0005\u0018\u00010\u000f2\u0006\u0010\u0018\u001a\u00020\t2\u0006\u0010\u0019\u001a\u00020\u000b2\b\u0010\f\u001a\u0004\u0018\u00010\rH\u0002R\u000e\u0010\u0002\u001a\u00020\u0003X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0004\u001a\u00020\u0005X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\b\u001a\u00020\tX\u0082\u000e¢\u0006\u0002\n\u0000¨\u0006\u001c"}, d2 = {"Lcom/facebook/react/devsupport/MultipartStreamReader;", "", "source", "Lokio/BufferedSource;", "boundary", "", "<init>", "(Lokio/BufferedSource;Ljava/lang/String;)V", "lastProgressEvent", "", "readAllParts", "", "listener", "Lcom/facebook/react/devsupport/MultipartStreamReader$ChunkListener;", "parseHeaders", "", "data", "Lokio/Buffer;", "emitChunk", "", "chunk", "done", "emitProgress", "headers", "contentLength", "isFinal", "ChunkListener", "Companion", "ReactAndroid_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
@SourceDebugExtension({"SMAP\nMultipartStreamReader.kt\nKotlin\n*S Kotlin\n*F\n+ 1 MultipartStreamReader.kt\ncom/facebook/react/devsupport/MultipartStreamReader\n+ 2 _Collections.kt\nkotlin/collections/CollectionsKt___CollectionsKt\n+ 3 ArraysJVM.kt\nkotlin/collections/ArraysKt__ArraysJVMKt\n+ 4 Strings.kt\nkotlin/text/StringsKt__StringsKt\n*L\n1#1,168:1\n739#2,9:169\n37#3:178\n36#3,3:179\n108#4:182\n80#4,22:183\n108#4:205\n80#4,22:206\n*S KotlinDebug\n*F\n+ 1 MultipartStreamReader.kt\ncom/facebook/react/devsupport/MultipartStreamReader\n*L\n116#1:169,9\n116#1:178\n116#1:179,3\n122#1:182\n122#1:183,22\n123#1:205\n123#1:206,22\n*E\n"})
/* loaded from: classes3.dex */
public final class MultipartStreamReader {

    @NotNull
    private static final String CRLF = "\r\n";

    @NotNull
    private final String boundary;
    private long lastProgressEvent;

    @NotNull
    private final BufferedSource source;

    @Metadata(d1 = {"\u00000\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\u0002\n\u0000\n\u0002\u0010$\n\u0002\u0010\u000e\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000b\n\u0002\b\u0002\n\u0002\u0010\t\n\u0002\b\u0002\bf\u0018\u00002\u00020\u0001J,\u0010\u0002\u001a\u00020\u00032\u0012\u0010\u0004\u001a\u000e\u0012\u0004\u0012\u00020\u0006\u0012\u0004\u0012\u00020\u00060\u00052\u0006\u0010\u0007\u001a\u00020\b2\u0006\u0010\t\u001a\u00020\nH&J,\u0010\u000b\u001a\u00020\u00032\u0012\u0010\u0004\u001a\u000e\u0012\u0004\u0012\u00020\u0006\u0012\u0004\u0012\u00020\u00060\u00052\u0006\u0010\f\u001a\u00020\r2\u0006\u0010\u000e\u001a\u00020\rH&ø\u0001\u0000\u0082\u0002\u0006\n\u0004\b!0\u0001¨\u0006\u000fÀ\u0006\u0001"}, d2 = {"Lcom/facebook/react/devsupport/MultipartStreamReader$ChunkListener;", "", "onChunkComplete", "", "headers", "", "", "body", "Lokio/Buffer;", "isLastChunk", "", "onChunkProgress", "loaded", "", "total", "ReactAndroid_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public interface ChunkListener {
        void onChunkComplete(@NotNull Map<String, String> headers, @NotNull Buffer body, boolean isLastChunk);

        void onChunkProgress(@NotNull Map<String, String> headers, long loaded, long total);
    }

    public MultipartStreamReader(@NotNull BufferedSource source, @NotNull String boundary) {
        Intrinsics.checkNotNullParameter(source, "source");
        Intrinsics.checkNotNullParameter(boundary, "boundary");
        this.source = source;
        this.boundary = boundary;
    }

    private final void emitChunk(Buffer chunk, boolean done, ChunkListener listener) {
        ByteString byteString = ByteString.f16115v;
        Intrinsics.checkNotNullParameter("\r\n\r\n", "string");
        ByteString bytes = io.sentry.hints.j.D("\r\n\r\n");
        chunk.getClass();
        Intrinsics.checkNotNullParameter(bytes, "bytes");
        long r5 = chunk.r(bytes, 0L);
        if (r5 == -1) {
            listener.onChunkComplete(v0.d(), chunk, done);
            return;
        }
        Buffer buffer = new Buffer();
        Buffer buffer2 = new Buffer();
        chunk.read(buffer, r5);
        chunk.skip(bytes.f16116d.length);
        chunk.c0(buffer2);
        listener.onChunkComplete(parseHeaders(buffer), buffer2, done);
    }

    private final void emitProgress(Map<String, String> headers, long contentLength, boolean isFinal, ChunkListener listener) {
        if (listener == null || headers == null) {
            return;
        }
        long currentTimeMillis = System.currentTimeMillis();
        if (currentTimeMillis - this.lastProgressEvent > 16 || isFinal) {
            this.lastProgressEvent = currentTimeMillis;
            listener.onChunkProgress(headers, contentLength, Long.parseLong(headers.getOrDefault("Content-Length", "0")));
        }
    }

    private final Map<String, String> parseHeaders(Buffer data) {
        Collection collection;
        LinkedHashMap linkedHashMap = new LinkedHashMap();
        List f2 = new Regex(CRLF).f(data.W());
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
        for (String str : (String[]) collection.toArray(new String[0])) {
            int J = StringsKt.J(str, ":", 0, false, 6);
            if (J != -1) {
                String substring = str.substring(0, J);
                Intrinsics.checkNotNullExpressionValue(substring, "substring(...)");
                int length = substring.length() - 1;
                int i5 = 0;
                boolean z5 = false;
                while (i5 <= length) {
                    boolean z6 = Intrinsics.compare((int) substring.charAt(!z5 ? i5 : length), 32) <= 0;
                    if (z5) {
                        if (!z6) {
                            break;
                        }
                        length--;
                    } else if (z6) {
                        i5++;
                    } else {
                        z5 = true;
                    }
                }
                String obj = substring.subSequence(i5, length + 1).toString();
                String substring2 = str.substring(J + 1);
                Intrinsics.checkNotNullExpressionValue(substring2, "substring(...)");
                int length2 = substring2.length() - 1;
                int i6 = 0;
                boolean z7 = false;
                while (i6 <= length2) {
                    boolean z8 = Intrinsics.compare((int) substring2.charAt(!z7 ? i6 : length2), 32) <= 0;
                    if (z7) {
                        if (!z8) {
                            break;
                        }
                        length2--;
                    } else if (z8) {
                        i6++;
                    } else {
                        z7 = true;
                    }
                }
                linkedHashMap.put(obj, substring2.subSequence(i6, length2 + 1).toString());
            }
        }
        return linkedHashMap;
    }

    /* JADX WARN: Removed duplicated region for block: B:28:0x00cd  */
    /* JADX WARN: Removed duplicated region for block: B:30:0x00cc A[SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final boolean readAllParts(@NotNull ChunkListener listener) {
        boolean z5;
        long j;
        long j5;
        Map<String, String> map;
        ChunkListener listener2 = listener;
        Intrinsics.checkNotNullParameter(listener2, "listener");
        ByteString byteString = ByteString.f16115v;
        String string = "\r\n--" + this.boundary + CRLF;
        Intrinsics.checkNotNullParameter(string, "string");
        ByteString D = io.sentry.hints.j.D(string);
        String string2 = "\r\n--" + this.boundary + "--\r\n";
        Intrinsics.checkNotNullParameter(string2, "string");
        ByteString D2 = io.sentry.hints.j.D(string2);
        Intrinsics.checkNotNullParameter("\r\n\r\n", "string");
        ByteString D3 = io.sentry.hints.j.D("\r\n\r\n");
        Buffer buffer = new Buffer();
        Map<String, String> map2 = null;
        long j7 = 0;
        long j10 = 0;
        long j11 = 0;
        while (true) {
            long max = (long) Math.max(j7 - D2.f16116d.length, j10);
            long r5 = buffer.r(D, max);
            if (r5 == -1) {
                r5 = buffer.r(D2, max);
                z5 = true;
            } else {
                z5 = false;
            }
            if (r5 == -1) {
                long j12 = buffer.f16114e;
                if (map2 == null) {
                    j = j10;
                    long r7 = buffer.r(D3, max);
                    if (r7 >= 0) {
                        this.source.read(buffer, r7);
                        Buffer buffer2 = new Buffer();
                        j5 = j12;
                        buffer.g(buffer2, max, r7 - max);
                        j11 = buffer2.f16114e + D3.f16116d.length;
                        map2 = parseHeaders(buffer2);
                        if (this.source.read(buffer, RecyclerView.ItemAnimator.FLAG_APPEARED_IN_PRE_LAYOUT) > 0) {
                            return false;
                        }
                        listener2 = listener;
                        j7 = j5;
                        j10 = j;
                    } else {
                        j5 = j12;
                        map = map2;
                    }
                } else {
                    j = j10;
                    j5 = j12;
                    map = map2;
                    emitProgress(map, j5 - j11, false, listener2);
                }
                map2 = map;
                if (this.source.read(buffer, RecyclerView.ItemAnimator.FLAG_APPEARED_IN_PRE_LAYOUT) > 0) {
                }
            } else {
                long j13 = j10;
                Map<String, String> map3 = map2;
                long j14 = r5 - j13;
                if (j13 > 0) {
                    Buffer buffer3 = new Buffer();
                    buffer.skip(j13);
                    buffer.read(buffer3, j14);
                    listener2 = listener;
                    emitProgress(map3, buffer3.f16114e - j11, true, listener2);
                    emitChunk(buffer3, z5, listener2);
                    map2 = null;
                    j11 = 0;
                } else {
                    listener2 = listener;
                    buffer.skip(r5);
                    map2 = map3;
                }
                if (z5) {
                    return true;
                }
                j10 = D.f16116d.length;
                j7 = j10;
            }
        }
    }
}
