package okio;

import java.io.OutputStream;
import java.nio.channels.WritableByteChannel;

/* loaded from: classes.dex */
public interface BufferedSink extends Sink, WritableByteChannel {
    BufferedSink B(String str);

    long J(Source source);

    BufferedSink K(long j);

    BufferedSink a0(ByteString byteString);

    BufferedSink f0(long j);

    @Override // okio.Sink, java.io.Flushable
    void flush();

    OutputStream g0();

    Buffer h();

    BufferedSink p();

    BufferedSink write(byte[] bArr);

    BufferedSink write(byte[] bArr, int i5, int i6);

    BufferedSink writeByte(int i5);

    BufferedSink writeInt(int i5);

    BufferedSink writeShort(int i5);
}
