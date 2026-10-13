package ds;

import java.nio.ByteBuffer;
import java.nio.CharBuffer;
import java.nio.charset.Charset;
import java.nio.charset.CharsetDecoder;
import java.nio.charset.CoderResult;
import java.nio.charset.CodingErrorAction;
import java.util.zip.GZIPInputStream;
import kotlin.collections.ArrayDeque;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class j {
    public final GZIPInputStream a;

    /* renamed from: b, reason: collision with root package name */
    public final CharsetDecoder f7732b;

    /* renamed from: c, reason: collision with root package name */
    public final ByteBuffer f7733c;

    /* renamed from: d, reason: collision with root package name */
    public boolean f7734d;

    /* renamed from: e, reason: collision with root package name */
    public char f7735e;

    public j(GZIPInputStream inputStream, Charset charset) {
        byte[] bArr;
        Intrinsics.checkNotNullParameter(inputStream, "inputStream");
        Intrinsics.checkNotNullParameter(charset, "charset");
        this.a = inputStream;
        CharsetDecoder newDecoder = charset.newDecoder();
        CodingErrorAction codingErrorAction = CodingErrorAction.REPLACE;
        this.f7732b = newDecoder.onMalformedInput(codingErrorAction).onUnmappableCharacter(codingErrorAction);
        e eVar = e.f7718c;
        synchronized (eVar) {
            ArrayDeque arrayDeque = eVar.a;
            bArr = null;
            byte[] bArr2 = (byte[]) (arrayDeque.isEmpty() ? null : arrayDeque.removeLast());
            if (bArr2 != null) {
                eVar.f7720b -= bArr2.length / 2;
                bArr = bArr2;
            }
        }
        ByteBuffer wrap = ByteBuffer.wrap(bArr == null ? new byte[8196] : bArr);
        this.f7733c = wrap;
        wrap.flip();
    }

    public final int a(char[] array, int i5, int i6) {
        int i10;
        CharsetDecoder charsetDecoder;
        char c6;
        Intrinsics.checkNotNullParameter(array, "array");
        if (i6 == 0) {
            return 0;
        }
        if (i5 < 0 || i5 >= array.length || i6 < 0 || i5 + i6 > array.length) {
            StringBuilder q5 = a3.e.q(i5, "Unexpected arguments: ", i6, ", ", ", ");
            q5.append(array.length);
            throw new IllegalArgumentException(q5.toString().toString());
        }
        boolean z5 = true;
        if (this.f7734d) {
            array[i5] = this.f7735e;
            i5++;
            i6--;
            this.f7734d = false;
            if (i6 == 0) {
                return 1;
            }
            i10 = 1;
        } else {
            i10 = 0;
        }
        if (i6 == 1) {
            if (this.f7734d) {
                this.f7734d = false;
                c6 = this.f7735e;
            } else {
                char[] cArr = new char[2];
                int a = a(cArr, 0, 2);
                if (a == -1) {
                    c6 = 65535;
                } else if (a == 1) {
                    c6 = cArr[0];
                } else {
                    if (a != 2) {
                        throw new IllegalStateException(("Unreachable state: " + a).toString());
                    }
                    this.f7735e = cArr[1];
                    this.f7734d = true;
                    c6 = cArr[0];
                }
            }
            if (c6 != 65535) {
                array[i5] = c6;
                return i10 + 1;
            }
            if (i10 == 0) {
                return -1;
            }
            return i10;
        }
        CharBuffer wrap = CharBuffer.wrap(array, i5, i6);
        if (wrap.position() != 0) {
            wrap = wrap.slice();
        }
        CharBuffer charBuffer = wrap;
        boolean z6 = false;
        while (true) {
            charsetDecoder = this.f7732b;
            ByteBuffer byteBuffer = this.f7733c;
            CoderResult decode = charsetDecoder.decode(byteBuffer, charBuffer, z6);
            if (decode.isUnderflow()) {
                if (z6 || !charBuffer.hasRemaining()) {
                    break;
                }
                byteBuffer.compact();
                try {
                    int limit = byteBuffer.limit();
                    int position = byteBuffer.position();
                    int read = this.a.read(byteBuffer.array(), byteBuffer.arrayOffset() + position, position <= limit ? limit - position : 0);
                    if (read >= 0) {
                        Intrinsics.checkNotNull(byteBuffer, "null cannot be cast to non-null type java.nio.Buffer");
                        byteBuffer.position(position + read);
                        byteBuffer.flip();
                        read = byteBuffer.remaining();
                    }
                    if (read < 0) {
                        if (charBuffer.position() == 0 && !byteBuffer.hasRemaining()) {
                            break;
                        }
                        charsetDecoder.reset();
                        z6 = true;
                    } else {
                        continue;
                    }
                } finally {
                    byteBuffer.flip();
                }
            } else {
                if (decode.isOverflow()) {
                    charBuffer.position();
                    break;
                }
                decode.throwException();
            }
        }
        z5 = z6;
        if (z5) {
            charsetDecoder.reset();
        }
        return (charBuffer.position() != 0 ? charBuffer.position() : -1) + i10;
    }
}
