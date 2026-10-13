package dt;

import com.facebook.imageutils.JfifUtil;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import et.s;
import et.y;
import java.io.Closeable;
import java.io.IOException;
import java.util.Random;
import java.util.zip.Deflater;
import kotlin.jvm.internal.Intrinsics;
import okio.Buffer;
import okio.BufferedSink;
import okio.ByteString;

/* loaded from: classes3.dex */
public final class k implements Closeable {
    public boolean E;
    public a F;
    public final byte[] G;
    public final et.e H;

    /* renamed from: d, reason: collision with root package name */
    public final BufferedSink f7804d;

    /* renamed from: e, reason: collision with root package name */
    public final Random f7805e;

    /* renamed from: i, reason: collision with root package name */
    public final boolean f7806i;

    /* renamed from: v, reason: collision with root package name */
    public final boolean f7807v;

    /* renamed from: w, reason: collision with root package name */
    public final long f7808w;

    /* renamed from: x, reason: collision with root package name */
    public final Buffer f7809x;

    /* renamed from: y, reason: collision with root package name */
    public final Buffer f7810y;

    public k(BufferedSink sink, Random random, boolean z5, boolean z6, long j) {
        Intrinsics.checkNotNullParameter(sink, "sink");
        Intrinsics.checkNotNullParameter(random, "random");
        this.f7804d = sink;
        this.f7805e = random;
        this.f7806i = z5;
        this.f7807v = z6;
        this.f7808w = j;
        this.f7809x = new Buffer();
        this.f7810y = sink.h();
        this.G = new byte[4];
        this.H = new et.e();
    }

    public final void c(ByteString byteString, int i5) {
        if (this.E) {
            throw new IOException("closed");
        }
        int c6 = byteString.c();
        if (c6 > 125) {
            throw new IllegalArgumentException("Payload size must be less than or equal to 125");
        }
        int i6 = i5 | IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        Buffer buffer = this.f7810y;
        buffer.U(i6);
        buffer.U(c6 | IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT);
        byte[] bArr = this.G;
        Intrinsics.checkNotNull(bArr);
        this.f7805e.nextBytes(bArr);
        buffer.m1301write(bArr);
        if (c6 > 0) {
            long j = buffer.f16114e;
            buffer.R(byteString);
            et.e eVar = this.H;
            Intrinsics.checkNotNull(eVar);
            buffer.t(eVar);
            eVar.f(j);
            d9.a.S(eVar, bArr);
            eVar.close();
        }
        this.f7804d.flush();
    }

    @Override // java.io.Closeable, java.lang.AutoCloseable
    public final void close() {
        a aVar = this.F;
        if (aVar == null) {
            return;
        }
        aVar.close();
    }

    public final void f(ByteString data, int i5) {
        Intrinsics.checkNotNullParameter(data, "data");
        if (this.E) {
            throw new IOException("closed");
        }
        Buffer buffer = this.f7809x;
        buffer.R(data);
        int i6 = i5 | IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        if (this.f7806i && data.c() >= this.f7808w) {
            a aVar = this.F;
            if (aVar == null) {
                aVar = new a(this.f7807v, 0);
                this.F = aVar;
            }
            et.g gVar = (et.g) aVar.f7765w;
            Intrinsics.checkNotNullParameter(buffer, "buffer");
            Buffer buffer2 = aVar.f7763i;
            if (buffer2.f16114e != 0) {
                throw new IllegalArgumentException("Failed requirement.");
            }
            if (aVar.f7762e) {
                ((Deflater) aVar.f7764v).reset();
            }
            gVar.H(buffer, buffer.f16114e);
            gVar.flush();
            ByteString bytes = b.a;
            long j = buffer2.f16114e;
            byte[] bArr = bytes.f16116d;
            byte[] bArr2 = bytes.f16116d;
            long length = j - bArr.length;
            Intrinsics.checkNotNullParameter(bytes, "bytes");
            int length2 = bArr2.length;
            Intrinsics.checkNotNullParameter(bytes, "bytes");
            if (length >= 0 && length2 >= 0 && buffer2.f16114e - length >= length2 && bArr2.length >= length2) {
                for (int i10 = 0; i10 < length2; i10++) {
                    if (buffer2.o(i10 + length) == bArr2[i10]) {
                    }
                }
                long j5 = buffer2.f16114e - 4;
                et.e t5 = buffer2.t(y.a);
                try {
                    t5.c(j5);
                    t5.close();
                    buffer.H(buffer2, buffer2.f16114e);
                    i6 = i5 | JfifUtil.MARKER_SOFn;
                } finally {
                }
            }
            buffer2.U(0);
            buffer.H(buffer2, buffer2.f16114e);
            i6 = i5 | JfifUtil.MARKER_SOFn;
        }
        long j7 = buffer.f16114e;
        Buffer buffer3 = this.f7810y;
        buffer3.U(i6);
        if (j7 <= 125) {
            buffer3.U(((int) j7) | IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT);
        } else if (j7 <= 65535) {
            buffer3.U(254);
            buffer3.d0((int) j7);
        } else {
            buffer3.U(255);
            s Q = buffer3.Q(8);
            byte[] bArr3 = Q.a;
            int i11 = Q.f8276c;
            bArr3[i11] = (byte) ((j7 >>> 56) & 255);
            bArr3[i11 + 1] = (byte) ((j7 >>> 48) & 255);
            bArr3[i11 + 2] = (byte) ((j7 >>> 40) & 255);
            bArr3[i11 + 3] = (byte) ((j7 >>> 32) & 255);
            bArr3[i11 + 4] = (byte) ((j7 >>> 24) & 255);
            bArr3[i11 + 5] = (byte) ((j7 >>> 16) & 255);
            bArr3[i11 + 6] = (byte) ((j7 >>> 8) & 255);
            bArr3[i11 + 7] = (byte) (j7 & 255);
            Q.f8276c = i11 + 8;
            buffer3.f16114e += 8;
        }
        byte[] bArr4 = this.G;
        Intrinsics.checkNotNull(bArr4);
        this.f7805e.nextBytes(bArr4);
        buffer3.m1301write(bArr4);
        if (j7 > 0) {
            et.e eVar = this.H;
            Intrinsics.checkNotNull(eVar);
            buffer.t(eVar);
            eVar.f(0L);
            d9.a.S(eVar, bArr4);
            eVar.close();
        }
        buffer3.H(buffer, j7);
        this.f7804d.p();
    }
}
