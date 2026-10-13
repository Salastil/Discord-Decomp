package okio;

import et.o;
import java.io.InputStream;
import java.nio.channels.ReadableByteChannel;
import java.nio.charset.Charset;

/* loaded from: classes.dex */
public interface BufferedSource extends Source, ReadableByteChannel {
    String E(Charset charset);

    ByteString L();

    boolean N(long j);

    String T();

    String W();

    int Y(o oVar);

    long c0(Sink sink);

    void e0(long j);

    Buffer h();

    long i0();

    InputStream k0();

    ByteString m(long j);

    byte readByte();

    void readFully(byte[] bArr);

    int readInt();

    long readLong();

    short readShort();

    void skip(long j);

    byte[] v();

    void w(Buffer buffer, long j);

    String y(long j);
}
