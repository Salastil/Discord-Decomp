package ps;

import java.io.IOException;
import java.io.InputStreamReader;
import java.io.Reader;
import java.nio.charset.Charset;
import kotlin.Unit;
import kotlin.jvm.internal.Intrinsics;
import okio.BufferedSource;

/* loaded from: classes3.dex */
public final class u extends Reader {

    /* renamed from: d, reason: collision with root package name */
    public final BufferedSource f16596d;

    /* renamed from: e, reason: collision with root package name */
    public final Charset f16597e;

    /* renamed from: i, reason: collision with root package name */
    public boolean f16598i;

    /* renamed from: v, reason: collision with root package name */
    public InputStreamReader f16599v;

    public u(BufferedSource source, Charset charset) {
        Intrinsics.checkNotNullParameter(source, "source");
        Intrinsics.checkNotNullParameter(charset, "charset");
        this.f16596d = source;
        this.f16597e = charset;
    }

    @Override // java.io.Reader, java.io.Closeable, java.lang.AutoCloseable
    public final void close() {
        Unit unit;
        this.f16598i = true;
        InputStreamReader inputStreamReader = this.f16599v;
        if (inputStreamReader == null) {
            unit = null;
        } else {
            inputStreamReader.close();
            unit = Unit.a;
        }
        if (unit == null) {
            this.f16596d.close();
        }
    }

    @Override // java.io.Reader
    public final int read(char[] cbuf, int i5, int i6) {
        Intrinsics.checkNotNullParameter(cbuf, "cbuf");
        if (this.f16598i) {
            throw new IOException("Stream closed");
        }
        InputStreamReader inputStreamReader = this.f16599v;
        if (inputStreamReader == null) {
            BufferedSource bufferedSource = this.f16596d;
            inputStreamReader = new InputStreamReader(bufferedSource.k0(), qs.b.r(bufferedSource, this.f16597e));
            this.f16599v = inputStreamReader;
        }
        return inputStreamReader.read(cbuf, i5, i6);
    }
}
