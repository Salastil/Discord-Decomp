package ws;

import java.io.Closeable;
import java.io.EOFException;
import java.io.IOException;
import java.util.ArrayList;
import java.util.List;
import java.util.logging.Level;
import java.util.logging.Logger;
import kotlin.Unit;
import kotlin.collections.CollectionsKt;
import kotlin.jvm.internal.ByteCompanionObject;
import kotlin.jvm.internal.Intrinsics;
import okio.Buffer;
import okio.BufferedSource;
import okio.ByteString;

/* loaded from: classes3.dex */
public final class t implements Closeable {

    /* renamed from: v, reason: collision with root package name */
    public static final Logger f20133v;

    /* renamed from: d, reason: collision with root package name */
    public final BufferedSource f20134d;

    /* renamed from: e, reason: collision with root package name */
    public final s f20135e;

    /* renamed from: i, reason: collision with root package name */
    public final d f20136i;

    static {
        Logger logger = Logger.getLogger(g.class.getName());
        Intrinsics.checkNotNullExpressionValue(logger, "getLogger(Http2::class.java.name)");
        f20133v = logger;
    }

    public t(BufferedSource source) {
        Intrinsics.checkNotNullParameter(source, "source");
        this.f20134d = source;
        s sVar = new s(source);
        this.f20135e = sVar;
        this.f20136i = new d(sVar);
    }

    /* JADX WARN: Code restructure failed: missing block: B:155:0x0268, code lost:
    
        throw new java.io.IOException(kotlin.jvm.internal.Intrinsics.stringPlus("PROTOCOL_ERROR SETTINGS_MAX_FRAME_SIZE: ", java.lang.Integer.valueOf(r4)));
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final boolean c(boolean z5, bs.q handler) {
        b errorCode;
        b errorCode2;
        Object[] array;
        Intrinsics.checkNotNullParameter(handler, "handler");
        try {
            this.f20134d.e0(9L);
            int s2 = qs.b.s(this.f20134d);
            if (s2 > 16384) {
                throw new IOException(Intrinsics.stringPlus("FRAME_SIZE_ERROR: ", Integer.valueOf(s2)));
            }
            int readByte = this.f20134d.readByte() & 255;
            byte readByte2 = this.f20134d.readByte();
            int i5 = readByte2 & 255;
            int readInt = this.f20134d.readInt();
            int i6 = readInt & Integer.MAX_VALUE;
            Logger logger = f20133v;
            if (logger.isLoggable(Level.FINE)) {
                logger.fine(g.a(i6, s2, readByte, i5, true));
            }
            if (z5 && readByte != 4) {
                String[] strArr = g.f20089b;
                throw new IOException(Intrinsics.stringPlus("Expected a SETTINGS frame but was ", readByte < strArr.length ? strArr[readByte] : qs.b.h("0x%02x", Integer.valueOf(readByte))));
            }
            int i10 = 2;
            switch (readByte) {
                case 0:
                    f(handler, s2, i5, i6);
                    return true;
                case 1:
                    i(handler, s2, i5, i6);
                    return true;
                case 2:
                    if (s2 != 5) {
                        throw new IOException(s4.h.e(s2, "TYPE_PRIORITY length: ", " != 5"));
                    }
                    if (i6 == 0) {
                        throw new IOException("TYPE_PRIORITY streamId == 0");
                    }
                    BufferedSource bufferedSource = this.f20134d;
                    bufferedSource.readInt();
                    bufferedSource.readByte();
                    return true;
                case 3:
                    if (s2 != 4) {
                        throw new IOException(s4.h.e(s2, "TYPE_RST_STREAM length: ", " != 4"));
                    }
                    if (i6 == 0) {
                        throw new IOException("TYPE_RST_STREAM streamId == 0");
                    }
                    int readInt2 = this.f20134d.readInt();
                    b[] values = b.values();
                    int length = values.length;
                    while (true) {
                        if (r2 < length) {
                            b bVar = values[r2];
                            if (bVar.f20065d == readInt2) {
                                errorCode = bVar;
                            } else {
                                r2++;
                            }
                        } else {
                            errorCode = null;
                        }
                    }
                    if (errorCode == null) {
                        throw new IOException(Intrinsics.stringPlus("TYPE_RST_STREAM unexpected error code: ", Integer.valueOf(readInt2)));
                    }
                    Intrinsics.checkNotNullParameter(errorCode, "errorCode");
                    p pVar = (p) handler.f3228i;
                    if (i6 == 0 || (readInt & 1) != 0) {
                        w i11 = pVar.i(i6);
                        if (i11 == null) {
                            return true;
                        }
                        i11.k(errorCode);
                        return true;
                    }
                    Intrinsics.checkNotNullParameter(errorCode, "errorCode");
                    pVar.F.c(new n(pVar.f20115i + '[' + i6 + "] onReset", pVar, i6, errorCode, 0), 0L);
                    return true;
                case 4:
                    BufferedSource bufferedSource2 = this.f20134d;
                    if (i6 != 0) {
                        throw new IOException("TYPE_SETTINGS streamId != 0");
                    }
                    if ((readByte2 & 1) == 0) {
                        if (s2 % 6 != 0) {
                            throw new IOException(Intrinsics.stringPlus("TYPE_SETTINGS length % 6 != 0: ", Integer.valueOf(s2)));
                        }
                        a0 settings = new a0();
                        kotlin.ranges.a g6 = yo.j.g(6, yo.j.i(0, s2));
                        int i12 = g6.f13545d;
                        int i13 = g6.f13546e;
                        int i14 = g6.f13547i;
                        if ((i14 > 0 && i12 <= i13) || (i14 < 0 && i13 <= i12)) {
                            while (true) {
                                int i15 = i12 + i14;
                                short readShort = bufferedSource2.readShort();
                                byte[] bArr = qs.b.a;
                                int i16 = readShort & 65535;
                                int readInt3 = bufferedSource2.readInt();
                                if (i16 != 2) {
                                    if (i16 == 3) {
                                        i16 = 4;
                                    } else if (i16 != 4) {
                                        if (i16 == 5 && (readInt3 < 16384 || readInt3 > 16777215)) {
                                        }
                                    } else {
                                        if (readInt3 < 0) {
                                            throw new IOException("PROTOCOL_ERROR SETTINGS_INITIAL_WINDOW_SIZE > 2^31 - 1");
                                        }
                                        i16 = 7;
                                    }
                                } else if (readInt3 != 0 && readInt3 != 1) {
                                    throw new IOException("PROTOCOL_ERROR SETTINGS_ENABLE_PUSH != 0 or 1");
                                }
                                settings.c(i16, readInt3);
                                if (i12 != i13) {
                                    i12 = i15;
                                }
                            }
                        }
                        Intrinsics.checkNotNullParameter(settings, "settings");
                        p pVar2 = (p) handler.f3228i;
                        pVar2.E.c(new j(Intrinsics.stringPlus(pVar2.f20115i, " applyAndAckSettings"), handler, settings, i10), 0L);
                        return true;
                    }
                    if (s2 != 0) {
                        throw new IOException("FRAME_SIZE_ERROR ack frame should be empty!");
                    }
                    break;
                case 5:
                    l(handler, s2, i5, i6);
                    return true;
                case 6:
                    if (s2 != 8) {
                        throw new IOException(Intrinsics.stringPlus("TYPE_PING length != 8: ", Integer.valueOf(s2)));
                    }
                    if (i6 != 0) {
                        throw new IOException("TYPE_PING streamId != 0");
                    }
                    int readInt4 = this.f20134d.readInt();
                    int readInt5 = this.f20134d.readInt();
                    if (((readByte2 & 1) != 0 ? 1 : 0) == 0) {
                        p pVar3 = (p) handler.f3228i;
                        pVar3.E.c(new k(Intrinsics.stringPlus(pVar3.f20115i, " ping"), (p) handler.f3228i, readInt4, readInt5), 0L);
                        return true;
                    }
                    p pVar4 = (p) handler.f3228i;
                    synchronized (pVar4) {
                        try {
                            if (readInt4 == 1) {
                                pVar4.I++;
                            } else if (readInt4 != 2) {
                                if (readInt4 == 3) {
                                    pVar4.notifyAll();
                                }
                                Unit unit = Unit.a;
                            } else {
                                pVar4.K++;
                            }
                        } catch (Throwable th2) {
                            throw th2;
                        }
                    }
                    return true;
                case 7:
                    if (s2 < 8) {
                        throw new IOException(Intrinsics.stringPlus("TYPE_GOAWAY length < 8: ", Integer.valueOf(s2)));
                    }
                    if (i6 != 0) {
                        throw new IOException("TYPE_GOAWAY streamId != 0");
                    }
                    int readInt6 = this.f20134d.readInt();
                    int readInt7 = this.f20134d.readInt();
                    int i17 = s2 - 8;
                    b[] values2 = b.values();
                    int length2 = values2.length;
                    int i18 = 0;
                    while (true) {
                        if (i18 < length2) {
                            b bVar2 = values2[i18];
                            if (bVar2.f20065d == readInt7) {
                                errorCode2 = bVar2;
                            } else {
                                i18++;
                            }
                        } else {
                            errorCode2 = null;
                        }
                    }
                    if (errorCode2 == null) {
                        throw new IOException(Intrinsics.stringPlus("TYPE_GOAWAY unexpected error code: ", Integer.valueOf(readInt7)));
                    }
                    ByteString debugData = ByteString.f16115v;
                    if (i17 > 0) {
                        debugData = this.f20134d.m(i17);
                    }
                    Intrinsics.checkNotNullParameter(errorCode2, "errorCode");
                    Intrinsics.checkNotNullParameter(debugData, "debugData");
                    debugData.c();
                    p pVar5 = (p) handler.f3228i;
                    synchronized (pVar5) {
                        array = pVar5.f20114e.values().toArray(new w[0]);
                        if (array == null) {
                            throw new NullPointerException("null cannot be cast to non-null type kotlin.Array<T of kotlin.collections.ArraysKt__ArraysJVMKt.toTypedArray>");
                        }
                        pVar5.f20118x = true;
                        Unit unit2 = Unit.a;
                    }
                    w[] wVarArr = (w[]) array;
                    int length3 = wVarArr.length;
                    while (r2 < length3) {
                        w wVar = wVarArr[r2];
                        r2++;
                        if (wVar.a > readInt6 && wVar.h()) {
                            wVar.k(b.REFUSED_STREAM);
                            ((p) handler.f3228i).i(wVar.a);
                        }
                    }
                    break;
                    break;
                case 8:
                    if (s2 != 4) {
                        throw new IOException(Intrinsics.stringPlus("TYPE_WINDOW_UPDATE length !=4: ", Integer.valueOf(s2)));
                    }
                    long readInt8 = this.f20134d.readInt() & 2147483647L;
                    if (readInt8 == 0) {
                        throw new IOException("windowSizeIncrement was 0");
                    }
                    if (i6 == 0) {
                        p pVar6 = (p) handler.f3228i;
                        synchronized (pVar6) {
                            pVar6.R += readInt8;
                            pVar6.notifyAll();
                            Unit unit3 = Unit.a;
                        }
                        return true;
                    }
                    w g10 = ((p) handler.f3228i).g(i6);
                    if (g10 != null) {
                        synchronized (g10) {
                            g10.f20151f += readInt8;
                            if (readInt8 > 0) {
                                g10.notifyAll();
                            }
                            Unit unit4 = Unit.a;
                        }
                        return true;
                    }
                    break;
                default:
                    this.f20134d.skip(s2);
                    return true;
            }
            return true;
        } catch (EOFException unused) {
            return false;
        }
    }

    @Override // java.io.Closeable, java.lang.AutoCloseable
    public final void close() {
        this.f20134d.close();
    }

    public final void f(bs.q qVar, int i5, int i6, int i10) {
        int i11;
        w wVar;
        long j;
        if (i10 == 0) {
            throw new IOException("PROTOCOL_ERROR: TYPE_DATA streamId == 0");
        }
        boolean z5 = (i6 & 1) != 0;
        if ((i6 & 32) != 0) {
            throw new IOException("PROTOCOL_ERROR: FLAG_COMPRESSED without SETTINGS_COMPRESS_DATA");
        }
        if ((i6 & 8) != 0) {
            byte readByte = this.f20134d.readByte();
            byte[] bArr = qs.b.a;
            i11 = readByte & 255;
        } else {
            i11 = 0;
        }
        int a = r.a(i5, i6, i11);
        BufferedSource source = this.f20134d;
        Intrinsics.checkNotNullParameter(source, "source");
        p pVar = (p) qVar.f3228i;
        if (i10 == 0 || (i10 & 1) != 0) {
            w g6 = pVar.g(i10);
            if (g6 == null) {
                ((p) qVar.f3228i).r(i10, b.PROTOCOL_ERROR);
                long j5 = a;
                ((p) qVar.f3228i).o(j5);
                source.skip(j5);
            } else {
                Intrinsics.checkNotNullParameter(source, "source");
                byte[] bArr2 = qs.b.a;
                v vVar = g6.f20154i;
                long j7 = a;
                vVar.getClass();
                Intrinsics.checkNotNullParameter(source, "source");
                while (true) {
                    if (j7 <= 0) {
                        break;
                    }
                    w wVar2 = vVar.f20146x;
                    synchronized (wVar2) {
                        try {
                            boolean z6 = vVar.f20142e;
                            wVar = wVar2;
                            try {
                                boolean z7 = vVar.f20144v.f16114e + j7 > vVar.f20141d;
                                Unit unit = Unit.a;
                                if (z7) {
                                    source.skip(j7);
                                    vVar.f20146x.e(b.FLOW_CONTROL_ERROR);
                                    break;
                                }
                                if (z6) {
                                    source.skip(j7);
                                    break;
                                }
                                long read = source.read(vVar.f20143i, j7);
                                if (read == -1) {
                                    throw new EOFException();
                                }
                                j7 -= read;
                                w wVar3 = vVar.f20146x;
                                synchronized (wVar3) {
                                    try {
                                        if (vVar.f20145w) {
                                            Buffer buffer = vVar.f20143i;
                                            j = buffer.f16114e;
                                            buffer.c();
                                        } else {
                                            Buffer buffer2 = vVar.f20144v;
                                            boolean z8 = buffer2.f16114e == 0;
                                            buffer2.J(vVar.f20143i);
                                            if (z8) {
                                                wVar3.notifyAll();
                                            }
                                            j = 0;
                                        }
                                    } catch (Throwable th2) {
                                        throw th2;
                                    }
                                }
                                if (j > 0) {
                                    vVar.c(j);
                                }
                            } catch (Throwable th3) {
                                th = th3;
                                throw th;
                            }
                        } catch (Throwable th4) {
                            th = th4;
                            wVar = wVar2;
                        }
                    }
                }
                if (z5) {
                    g6.j(qs.b.f17051b, true);
                }
            }
        } else {
            Intrinsics.checkNotNullParameter(source, "source");
            Buffer buffer3 = new Buffer();
            long j10 = a;
            source.e0(j10);
            source.read(buffer3, j10);
            pVar.F.c(new l(pVar.f20115i + '[' + i10 + "] onData", pVar, i10, buffer3, a, z5), 0L);
        }
        this.f20134d.skip(i11);
    }

    public final List g(int i5, int i6, int i10, int i11) {
        s sVar = this.f20135e;
        sVar.f20131w = i5;
        sVar.f20128e = i5;
        sVar.f20132x = i6;
        sVar.f20129i = i10;
        sVar.f20130v = i11;
        d dVar = this.f20136i;
        et.r rVar = dVar.f20076c;
        ArrayList arrayList = dVar.f20075b;
        while (!rVar.c()) {
            byte readByte = rVar.readByte();
            byte[] bArr = qs.b.a;
            int i12 = readByte & 255;
            if (i12 == 128) {
                throw new IOException("index == 0");
            }
            if ((readByte & ByteCompanionObject.MIN_VALUE) == 128) {
                int e9 = dVar.e(i12, 127);
                int i13 = e9 - 1;
                if (i13 >= 0) {
                    c[] cVarArr = f.a;
                    if (i13 <= cVarArr.length - 1) {
                        arrayList.add(cVarArr[i13]);
                    }
                }
                int length = dVar.f20078e + 1 + (i13 - f.a.length);
                if (length >= 0) {
                    c[] cVarArr2 = dVar.f20077d;
                    if (length < cVarArr2.length) {
                        c cVar = cVarArr2[length];
                        Intrinsics.checkNotNull(cVar);
                        arrayList.add(cVar);
                    }
                }
                throw new IOException(Intrinsics.stringPlus("Header index too large ", Integer.valueOf(e9)));
            }
            if (i12 == 64) {
                c[] cVarArr3 = f.a;
                ByteString d6 = dVar.d();
                f.a(d6);
                dVar.c(new c(d6, dVar.d()));
            } else if ((readByte & 64) == 64) {
                dVar.c(new c(dVar.b(dVar.e(i12, 63) - 1), dVar.d()));
            } else if ((readByte & 32) == 32) {
                int e10 = dVar.e(i12, 31);
                dVar.a = e10;
                if (e10 < 0 || e10 > 4096) {
                    throw new IOException(Intrinsics.stringPlus("Invalid dynamic table size update ", Integer.valueOf(dVar.a)));
                }
                int i14 = dVar.f20080g;
                if (e10 < i14) {
                    if (e10 == 0) {
                        kotlin.collections.u.k(r7, null, 0, dVar.f20077d.length);
                        dVar.f20078e = dVar.f20077d.length - 1;
                        dVar.f20079f = 0;
                        dVar.f20080g = 0;
                    } else {
                        dVar.a(i14 - e10);
                    }
                }
            } else if (i12 == 16 || i12 == 0) {
                c[] cVarArr4 = f.a;
                ByteString d7 = dVar.d();
                f.a(d7);
                arrayList.add(new c(d7, dVar.d()));
            } else {
                arrayList.add(new c(dVar.b(dVar.e(i12, 15) - 1), dVar.d()));
            }
        }
        List i02 = CollectionsKt.i0(arrayList);
        arrayList.clear();
        return i02;
    }

    public final void i(bs.q qVar, int i5, int i6, int i10) {
        if (i10 == 0) {
            throw new IOException("PROTOCOL_ERROR: TYPE_HEADERS streamId == 0");
        }
        int i11 = 0;
        int i12 = 1;
        boolean z5 = (i6 & 1) != 0;
        if ((i6 & 8) != 0) {
            byte readByte = this.f20134d.readByte();
            byte[] bArr = qs.b.a;
            i11 = readByte & 255;
        }
        if ((i6 & 32) != 0) {
            BufferedSource bufferedSource = this.f20134d;
            bufferedSource.readInt();
            bufferedSource.readByte();
            byte[] bArr2 = qs.b.a;
            i5 -= 5;
        }
        List requestHeaders = g(r.a(i5, i6, i11), i11, i6, i10);
        Intrinsics.checkNotNullParameter(requestHeaders, "headerBlock");
        p pVar = (p) qVar.f3228i;
        if (i10 != 0 && (i10 & 1) == 0) {
            Intrinsics.checkNotNullParameter(requestHeaders, "requestHeaders");
            pVar.F.c(new m(pVar.f20115i + '[' + i10 + "] onHeaders", pVar, i10, requestHeaders, z5), 0L);
            return;
        }
        synchronized (pVar) {
            w g6 = pVar.g(i10);
            if (g6 != null) {
                Unit unit = Unit.a;
                g6.j(qs.b.u(requestHeaders), z5);
                return;
            }
            if (pVar.f20118x) {
                return;
            }
            if (i10 <= pVar.f20116v) {
                return;
            }
            if (i10 % 2 == pVar.f20117w % 2) {
                return;
            }
            w wVar = new w(i10, pVar, false, z5, qs.b.u(requestHeaders));
            pVar.f20116v = i10;
            pVar.f20114e.put(Integer.valueOf(i10), wVar);
            pVar.f20119y.e().c(new j(pVar.f20115i + '[' + i10 + "] onStream", pVar, wVar, i12), 0L);
        }
    }

    public final void l(bs.q qVar, int i5, int i6, int i10) {
        int i11;
        if (i10 == 0) {
            throw new IOException("PROTOCOL_ERROR: TYPE_PUSH_PROMISE streamId == 0");
        }
        if ((i6 & 8) != 0) {
            byte readByte = this.f20134d.readByte();
            byte[] bArr = qs.b.a;
            i11 = readByte & 255;
        } else {
            i11 = 0;
        }
        int readInt = this.f20134d.readInt() & Integer.MAX_VALUE;
        List requestHeaders = g(r.a(i5 - 4, i6, i11), i11, i6, i10);
        Intrinsics.checkNotNullParameter(requestHeaders, "requestHeaders");
        p pVar = (p) qVar.f3228i;
        Intrinsics.checkNotNullParameter(requestHeaders, "requestHeaders");
        synchronized (pVar) {
            if (pVar.V.contains(Integer.valueOf(readInt))) {
                pVar.r(readInt, b.PROTOCOL_ERROR);
                return;
            }
            pVar.V.add(Integer.valueOf(readInt));
            pVar.F.c(new m(pVar.f20115i + '[' + readInt + "] onRequest", pVar, readInt, requestHeaders), 0L);
        }
    }
}
