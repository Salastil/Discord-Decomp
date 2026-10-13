package dt;

import java.io.Closeable;
import java.io.IOException;
import java.net.ProtocolException;
import java.util.concurrent.TimeUnit;
import kotlin.Unit;
import kotlin.jvm.internal.ByteCompanionObject;
import kotlin.jvm.internal.Intrinsics;
import okio.Buffer;
import okio.BufferedSource;
import okio.ByteString;

/* loaded from: classes3.dex */
public final class j implements Closeable {
    public boolean E;
    public boolean F;
    public boolean G;
    public final Buffer H;
    public final Buffer I;
    public a J;
    public final byte[] K;

    /* renamed from: d, reason: collision with root package name */
    public final BufferedSource f7797d;

    /* renamed from: e, reason: collision with root package name */
    public final i f7798e;

    /* renamed from: i, reason: collision with root package name */
    public final boolean f7799i;

    /* renamed from: v, reason: collision with root package name */
    public final boolean f7800v;

    /* renamed from: w, reason: collision with root package name */
    public boolean f7801w;

    /* renamed from: x, reason: collision with root package name */
    public int f7802x;

    /* renamed from: y, reason: collision with root package name */
    public long f7803y;

    public j(BufferedSource source, g frameCallback, boolean z5, boolean z6) {
        Intrinsics.checkNotNullParameter(source, "source");
        Intrinsics.checkNotNullParameter(frameCallback, "frameCallback");
        this.f7797d = source;
        this.f7798e = frameCallback;
        this.f7799i = z5;
        this.f7800v = z6;
        this.H = new Buffer();
        this.I = new Buffer();
        this.K = null;
    }

    public final void c() {
        String reason;
        short s2;
        j jVar;
        k kVar;
        long j = this.f7803y;
        if (j > 0) {
            this.f7797d.w(this.H, j);
        }
        switch (this.f7802x) {
            case 8:
                Buffer buffer = this.H;
                long j5 = buffer.f16114e;
                if (j5 == 1) {
                    throw new ProtocolException("Malformed close payload length of 1.");
                }
                ts.j jVar2 = null;
                if (j5 != 0) {
                    s2 = buffer.readShort();
                    reason = this.H.W();
                    String stringPlus = (s2 < 1000 || s2 >= 5000) ? Intrinsics.stringPlus("Code must be in range [1000,5000): ", Integer.valueOf(s2)) : ((1004 > s2 || s2 >= 1007) && (1015 > s2 || s2 >= 3000)) ? null : s4.h.e(s2, "Code ", " is reserved and may not be used.");
                    if (stringPlus != null) {
                        throw new ProtocolException(stringPlus);
                    }
                } else {
                    reason = "";
                    s2 = 1005;
                }
                g gVar = (g) this.f7798e;
                gVar.getClass();
                Intrinsics.checkNotNullParameter(reason, "reason");
                if (s2 == -1) {
                    throw new IllegalArgumentException("Failed requirement.");
                }
                synchronized (gVar) {
                    try {
                        if (gVar.f7787r != -1) {
                            throw new IllegalStateException("already closed");
                        }
                        gVar.f7787r = s2;
                        gVar.f7788s = reason;
                        if (gVar.f7786q && gVar.f7784o.isEmpty()) {
                            ts.j jVar3 = gVar.f7782m;
                            gVar.f7782m = null;
                            jVar = gVar.f7780i;
                            gVar.f7780i = null;
                            kVar = gVar.j;
                            gVar.j = null;
                            gVar.k.f();
                            jVar2 = jVar3;
                        } else {
                            jVar = null;
                            kVar = null;
                        }
                        Unit unit = Unit.a;
                    } catch (Throwable th2) {
                        throw th2;
                    }
                }
                try {
                    gVar.a.onClosing(gVar, s2, reason);
                    if (jVar2 != null) {
                        gVar.a.onClosed(gVar, s2, reason);
                    }
                    this.f7801w = true;
                    return;
                } finally {
                    if (jVar2 != null) {
                        qs.b.c(jVar2);
                    }
                    if (jVar != null) {
                        qs.b.c(jVar);
                    }
                    if (kVar != null) {
                        qs.b.c(kVar);
                    }
                }
            case 9:
                i iVar = this.f7798e;
                Buffer buffer2 = this.H;
                ByteString payload = buffer2.m(buffer2.f16114e);
                g gVar2 = (g) iVar;
                synchronized (gVar2) {
                    try {
                        Intrinsics.checkNotNullParameter(payload, "payload");
                        if (!gVar2.f7789t && (!gVar2.f7786q || !gVar2.f7784o.isEmpty())) {
                            gVar2.f7783n.add(payload);
                            gVar2.i();
                            return;
                        }
                        return;
                    } finally {
                    }
                }
            case 10:
                i iVar2 = this.f7798e;
                Buffer buffer3 = this.H;
                ByteString payload2 = buffer3.m(buffer3.f16114e);
                g gVar3 = (g) iVar2;
                synchronized (gVar3) {
                    Intrinsics.checkNotNullParameter(payload2, "payload");
                    gVar3.f7791v = false;
                }
                return;
            default:
                int i5 = this.f7802x;
                byte[] bArr = qs.b.a;
                String hexString = Integer.toHexString(i5);
                Intrinsics.checkNotNullExpressionValue(hexString, "toHexString(this)");
                throw new ProtocolException(Intrinsics.stringPlus("Unknown control opcode: ", hexString));
        }
    }

    @Override // java.io.Closeable, java.lang.AutoCloseable
    public final void close() {
        a aVar = this.J;
        if (aVar == null) {
            return;
        }
        aVar.close();
    }

    public final void f() {
        boolean z5;
        if (this.f7801w) {
            throw new IOException("closed");
        }
        BufferedSource bufferedSource = this.f7797d;
        long h6 = bufferedSource.timeout().h();
        bufferedSource.timeout().b();
        try {
            byte readByte = bufferedSource.readByte();
            byte[] bArr = qs.b.a;
            bufferedSource.timeout().g(h6, TimeUnit.NANOSECONDS);
            int i5 = readByte & 15;
            this.f7802x = i5;
            boolean z6 = (readByte & ByteCompanionObject.MIN_VALUE) != 0;
            this.E = z6;
            boolean z7 = (readByte & 8) != 0;
            this.F = z7;
            if (z7 && !z6) {
                throw new ProtocolException("Control frames must be final.");
            }
            boolean z8 = (readByte & 64) != 0;
            if (i5 == 1 || i5 == 2) {
                if (!z8) {
                    z5 = false;
                } else {
                    if (!this.f7799i) {
                        throw new ProtocolException("Unexpected rsv1 flag");
                    }
                    z5 = true;
                }
                this.G = z5;
            } else if (z8) {
                throw new ProtocolException("Unexpected rsv1 flag");
            }
            if ((readByte & 32) != 0) {
                throw new ProtocolException("Unexpected rsv2 flag");
            }
            if ((readByte & 16) != 0) {
                throw new ProtocolException("Unexpected rsv3 flag");
            }
            byte readByte2 = bufferedSource.readByte();
            boolean z10 = (readByte2 & ByteCompanionObject.MIN_VALUE) != 0;
            if (z10) {
                throw new ProtocolException("Server-sent frames must not be masked.");
            }
            long j = readByte2 & ByteCompanionObject.MAX_VALUE;
            this.f7803y = j;
            if (j == 126) {
                this.f7803y = bufferedSource.readShort() & 65535;
            } else if (j == 127) {
                long readLong = bufferedSource.readLong();
                this.f7803y = readLong;
                if (readLong < 0) {
                    StringBuilder sb2 = new StringBuilder("Frame length 0x");
                    String hexString = Long.toHexString(this.f7803y);
                    Intrinsics.checkNotNullExpressionValue(hexString, "toHexString(this)");
                    sb2.append(hexString);
                    sb2.append(" > 0x7FFFFFFFFFFFFFFF");
                    throw new ProtocolException(sb2.toString());
                }
            }
            if (this.F && this.f7803y > 125) {
                throw new ProtocolException("Control frame must be less than 125B.");
            }
            if (z10) {
                byte[] bArr2 = this.K;
                Intrinsics.checkNotNull(bArr2);
                bufferedSource.readFully(bArr2);
            }
        } catch (Throwable th2) {
            bufferedSource.timeout().g(h6, TimeUnit.NANOSECONDS);
            throw th2;
        }
    }
}
