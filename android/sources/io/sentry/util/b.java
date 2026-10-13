package io.sentry.util;

import java.io.Writer;

/* loaded from: classes3.dex */
public final class b extends Writer {

    /* renamed from: d, reason: collision with root package name */
    public long f12038d = 0;

    public static int c(char c6) {
        if (c6 <= 127) {
            return 1;
        }
        return (c6 > 2047 && !Character.isSurrogate(c6)) ? 3 : 2;
    }

    @Override // java.io.Writer, java.io.Closeable, java.lang.AutoCloseable
    public final void close() {
    }

    @Override // java.io.Writer, java.io.Flushable
    public final void flush() {
    }

    @Override // java.io.Writer
    public final void write(char[] cArr, int i5, int i6) {
        for (int i10 = i5; i10 < i5 + i6; i10++) {
            this.f12038d += c(cArr[i10]);
        }
    }

    @Override // java.io.Writer
    public final void write(int i5) {
        this.f12038d += c((char) i5);
    }

    @Override // java.io.Writer
    public final void write(String str, int i5, int i6) {
        for (int i10 = i5; i10 < i5 + i6; i10++) {
            this.f12038d += c(str.charAt(i10));
        }
    }
}
