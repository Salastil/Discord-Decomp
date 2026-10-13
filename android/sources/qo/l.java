package qo;

import java.io.File;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.InputStreamReader;
import java.nio.ByteBuffer;
import java.nio.CharBuffer;
import java.nio.charset.Charset;
import java.nio.charset.CharsetEncoder;
import java.nio.charset.CodingErrorAction;
import java.util.Arrays;
import kotlin.Unit;
import kotlin.collections.u;
import kotlin.jvm.internal.Intrinsics;
import kotlin.text.Charsets;

/* loaded from: classes3.dex */
public class l extends k {
    public static byte[] b(File file) {
        Intrinsics.checkNotNullParameter(file, "<this>");
        FileInputStream fileInputStream = new FileInputStream(file);
        try {
            long length = file.length();
            if (length > 2147483647L) {
                throw new OutOfMemoryError("File " + file + " is too big (" + length + " bytes) to fit in memory.");
            }
            int i5 = (int) length;
            byte[] bArr = new byte[i5];
            int i6 = i5;
            int i10 = 0;
            while (i6 > 0) {
                int read = fileInputStream.read(bArr, i10, i6);
                if (read < 0) {
                    break;
                }
                i6 -= read;
                i10 += read;
            }
            if (i6 > 0) {
                bArr = Arrays.copyOf(bArr, i10);
                Intrinsics.checkNotNullExpressionValue(bArr, "copyOf(...)");
            } else {
                int read2 = fileInputStream.read();
                if (read2 != -1) {
                    io.sentry.cache.tape.c cVar = new io.sentry.cache.tape.c(8193);
                    cVar.write(read2);
                    com.facebook.imagepipeline.nativecode.b.h(fileInputStream, cVar, 8192);
                    int size = cVar.size() + i5;
                    if (size < 0) {
                        throw new OutOfMemoryError("File " + file + " is too big to fit in memory.");
                    }
                    byte[] f2 = cVar.f();
                    bArr = Arrays.copyOf(bArr, size);
                    Intrinsics.checkNotNullExpressionValue(bArr, "copyOf(...)");
                    u.c(i5, 0, cVar.size(), f2, bArr);
                }
            }
            fileInputStream.close();
            return bArr;
        } catch (Throwable th2) {
            try {
                throw th2;
            } catch (Throwable th3) {
                com.facebook.imagepipeline.nativecode.c.j(fileInputStream, th2);
                throw th3;
            }
        }
    }

    public static String c(File file) {
        Charset charset = Charsets.UTF_8;
        Intrinsics.checkNotNullParameter(file, "<this>");
        Intrinsics.checkNotNullParameter(charset, "charset");
        InputStreamReader inputStreamReader = new InputStreamReader(new FileInputStream(file), charset);
        try {
            String K = d9.a.K(inputStreamReader);
            inputStreamReader.close();
            return K;
        } finally {
        }
    }

    public static void d(File file, String text) {
        Charset charset = Charsets.UTF_8;
        Intrinsics.checkNotNullParameter(file, "<this>");
        Intrinsics.checkNotNullParameter(text, "text");
        Intrinsics.checkNotNullParameter(charset, "charset");
        FileOutputStream fileOutputStream = new FileOutputStream(file);
        try {
            e(fileOutputStream, text, charset);
            Unit unit = Unit.a;
            fileOutputStream.close();
        } finally {
        }
    }

    public static final void e(FileOutputStream fileOutputStream, String text, Charset charset) {
        Intrinsics.checkNotNullParameter(fileOutputStream, "<this>");
        Intrinsics.checkNotNullParameter(text, "text");
        Intrinsics.checkNotNullParameter(charset, "charset");
        if (text.length() < 16384) {
            byte[] bytes = text.getBytes(charset);
            Intrinsics.checkNotNullExpressionValue(bytes, "getBytes(...)");
            fileOutputStream.write(bytes);
            return;
        }
        Intrinsics.checkNotNullParameter(charset, "<this>");
        CharsetEncoder newEncoder = charset.newEncoder();
        CodingErrorAction codingErrorAction = CodingErrorAction.REPLACE;
        CharsetEncoder encoder = newEncoder.onMalformedInput(codingErrorAction).onUnmappableCharacter(codingErrorAction);
        CharBuffer allocate = CharBuffer.allocate(8192);
        Intrinsics.checkNotNull(encoder);
        Intrinsics.checkNotNullParameter(encoder, "encoder");
        ByteBuffer allocate2 = ByteBuffer.allocate(8192 * ((int) Math.ceil(encoder.maxBytesPerChar())));
        Intrinsics.checkNotNullExpressionValue(allocate2, "allocate(...)");
        int i5 = 0;
        int i6 = 0;
        while (i5 < text.length()) {
            int min = Math.min(8192 - i6, text.length() - i5);
            int i10 = i5 + min;
            char[] array = allocate.array();
            Intrinsics.checkNotNullExpressionValue(array, "array(...)");
            text.getChars(i5, i10, array, i6);
            allocate.limit(min + i6);
            i6 = 1;
            if (!encoder.encode(allocate, allocate2, i10 == text.length()).isUnderflow()) {
                throw new IllegalStateException("Check failed.");
            }
            fileOutputStream.write(allocate2.array(), 0, allocate2.position());
            if (allocate.position() != allocate.limit()) {
                allocate.put(0, allocate.get());
            } else {
                i6 = 0;
            }
            allocate.clear();
            allocate2.clear();
            i5 = i10;
        }
    }
}
