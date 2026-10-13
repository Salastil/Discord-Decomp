package cd;

import android.media.MediaCodec;
import android.media.MediaCrypto;
import android.media.MediaCryptoException;
import android.media.MediaFormat;
import android.os.Bundle;
import android.os.SystemClock;
import androidx.recyclerview.widget.RecyclerView;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import com.google.android.exoplayer2.Format;
import com.google.android.exoplayer2.decoder.DecoderCounters;
import com.google.android.exoplayer2.decoder.DecoderReuseEvaluation;
import com.google.android.gms.internal.play_billing.w1;
import com.reactnativecommunity.webview.RNCWebViewManager;
import ic.c0;
import java.nio.ByteBuffer;
import java.nio.ByteOrder;
import java.util.ArrayDeque;
import java.util.ArrayList;
import java.util.LinkedHashSet;
import java.util.List;
import java.util.Locale;
import java.util.UUID;
import jc.p0;
import ke.d0;
import nd.q0;

/* loaded from: classes3.dex */
public abstract class s extends hc.e {

    /* renamed from: b1, reason: collision with root package name */
    public static final byte[] f3455b1 = {0, 0, 1, 103, 66, -64, 11, -38, 37, -112, 0, 0, 1, 104, -50, 15, 19, 32, 0, 0, 1, 101, -120, -124, 13, -50, 113, 24, -96, 0, 47, -65, 28, 49, -61, 39, 93, 120};
    public long A0;
    public int B0;
    public int C0;
    public ByteBuffer D0;
    public boolean E0;
    public boolean F0;
    public boolean G0;
    public boolean H0;
    public boolean I0;
    public boolean J0;
    public int K0;
    public final k L;
    public int L0;
    public final t M;
    public int M0;
    public final boolean N;
    public boolean N0;
    public final float O;
    public boolean O0;
    public final mc.f P;
    public boolean P0;
    public final mc.f Q;
    public long Q0;
    public final mc.f R;
    public long R0;
    public final h S;
    public boolean S0;
    public final ArrayList T;
    public boolean T0;
    public final MediaCodec.BufferInfo U;
    public boolean U0;
    public final ArrayDeque V;
    public boolean V0;
    public final p0 W;
    public com.google.android.exoplayer2.c W0;
    public Format X;
    public DecoderCounters X0;
    public Format Y;
    public r Y0;
    public nc.k Z;
    public long Z0;
    public nc.k a0;

    /* renamed from: a1, reason: collision with root package name */
    public boolean f3456a1;

    /* renamed from: b0, reason: collision with root package name */
    public MediaCrypto f3457b0;

    /* renamed from: c0, reason: collision with root package name */
    public boolean f3458c0;

    /* renamed from: d0, reason: collision with root package name */
    public final long f3459d0;

    /* renamed from: e0, reason: collision with root package name */
    public float f3460e0;

    /* renamed from: f0, reason: collision with root package name */
    public float f3461f0;

    /* renamed from: g0, reason: collision with root package name */
    public l f3462g0;
    public Format h0;

    /* renamed from: i0, reason: collision with root package name */
    public MediaFormat f3463i0;

    /* renamed from: j0, reason: collision with root package name */
    public boolean f3464j0;

    /* renamed from: k0, reason: collision with root package name */
    public float f3465k0;

    /* renamed from: l0, reason: collision with root package name */
    public ArrayDeque f3466l0;

    /* renamed from: m0, reason: collision with root package name */
    public q f3467m0;

    /* renamed from: n0, reason: collision with root package name */
    public o f3468n0;

    /* renamed from: o0, reason: collision with root package name */
    public int f3469o0;

    /* renamed from: p0, reason: collision with root package name */
    public boolean f3470p0;

    /* renamed from: q0, reason: collision with root package name */
    public boolean f3471q0;

    /* renamed from: r0, reason: collision with root package name */
    public boolean f3472r0;

    /* renamed from: s0, reason: collision with root package name */
    public boolean f3473s0;

    /* renamed from: t0, reason: collision with root package name */
    public boolean f3474t0;

    /* renamed from: u0, reason: collision with root package name */
    public boolean f3475u0;

    /* renamed from: v0, reason: collision with root package name */
    public boolean f3476v0;

    /* renamed from: w0, reason: collision with root package name */
    public boolean f3477w0;

    /* renamed from: x0, reason: collision with root package name */
    public boolean f3478x0;

    /* renamed from: y0, reason: collision with root package name */
    public boolean f3479y0;

    /* renamed from: z0, reason: collision with root package name */
    public i f3480z0;

    public s(int i5, k kVar, boolean z5, float f2) {
        super(i5);
        this.L = kVar;
        this.M = t.f3481e;
        this.N = z5;
        this.O = f2;
        this.P = new mc.f(0);
        this.Q = new mc.f(0);
        this.R = new mc.f(2);
        h hVar = new h(2);
        hVar.H = 32;
        this.S = hVar;
        this.T = new ArrayList();
        this.U = new MediaCodec.BufferInfo();
        this.f3460e0 = 1.0f;
        this.f3461f0 = 1.0f;
        this.f3459d0 = -9223372036854775807L;
        this.V = new ArrayDeque();
        k0(r.f3452d);
        hVar.h(0);
        hVar.f14436v.order(ByteOrder.nativeOrder());
        p0 p0Var = new p0();
        p0Var.f12604c = jc.n.a;
        p0Var.f12603b = 0;
        p0Var.a = 2;
        this.W = p0Var;
        this.f3465k0 = -1.0f;
        this.f3469o0 = 0;
        this.K0 = 0;
        this.B0 = -1;
        this.C0 = -1;
        this.A0 = -9223372036854775807L;
        this.Q0 = -9223372036854775807L;
        this.R0 = -9223372036854775807L;
        this.Z0 = -9223372036854775807L;
        this.L0 = 0;
        this.M0 = 0;
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r1v13 */
    /* JADX WARN: Type inference failed for: r1v4 */
    /* JADX WARN: Type inference failed for: r1v5, types: [boolean, int] */
    public final boolean A(long j, long j5) {
        h hVar;
        String str;
        int i5;
        h hVar2;
        ByteBuffer byteBuffer;
        int i6;
        ke.b.k(!this.T0);
        h hVar3 = this.S;
        int i10 = hVar3.G;
        if (i10 > 0) {
            hVar = hVar3;
            if (d0(j, j5, null, hVar3.f14436v, this.C0, 0, i10, hVar3.f14438x, hVar3.c(Integer.MIN_VALUE), hVar3.c(4), this.Y)) {
                Y(hVar.F);
                hVar.f();
            }
        }
        hVar = hVar3;
        if (this.S0) {
            this.T0 = true;
            return false;
        }
        ?? r12 = 0;
        boolean z5 = this.H0;
        mc.f fVar = this.R;
        if (z5) {
            ke.b.k(hVar.k(fVar));
            this.H0 = false;
        }
        if (this.I0) {
            if (hVar.G > 0) {
                return true;
            }
            D();
            this.I0 = false;
            Q();
            if (!this.G0) {
                return false;
            }
        }
        ke.b.k(!this.S0);
        e4.l lVar = this.f9660i;
        lVar.u();
        fVar.f();
        while (true) {
            fVar.f();
            int t5 = t(lVar, fVar, r12);
            if (t5 == -5) {
                V(lVar);
                break;
            }
            if (t5 != -4) {
                if (t5 != -3) {
                    throw new IllegalStateException();
                }
            } else {
                if (fVar.c(4)) {
                    this.S0 = true;
                    break;
                }
                byte[] bArr = null;
                if (this.U0) {
                    Format format = this.X;
                    format.getClass();
                    this.Y = format;
                    W(format, null);
                    this.U0 = r12;
                }
                fVar.j();
                Format format2 = this.X;
                if (format2 != null && (str = format2.I) != null && str.equals("audio/opus")) {
                    List list = this.X.K;
                    p0 p0Var = this.W;
                    p0Var.getClass();
                    fVar.f14436v.getClass();
                    if (fVar.f14436v.limit() - fVar.f14436v.position() == 0) {
                        hVar2 = hVar;
                    } else {
                        if (p0Var.a == 2 && (list.size() == 1 || list.size() == 3)) {
                            bArr = (byte[]) list.get(r12);
                        }
                        ByteBuffer byteBuffer2 = fVar.f14436v;
                        int position = byteBuffer2.position();
                        int limit = byteBuffer2.limit();
                        int i11 = limit - position;
                        int i12 = (i11 + 255) / 255;
                        int i13 = i12 + 27 + i11;
                        if (p0Var.a == 2) {
                            i5 = bArr != null ? bArr.length + 28 : 47;
                            i13 = i5 + 44 + i13;
                        } else {
                            i5 = r12;
                        }
                        if (((ByteBuffer) p0Var.f12604c).capacity() < i13) {
                            p0Var.f12604c = ByteBuffer.allocate(i13).order(ByteOrder.LITTLE_ENDIAN);
                        } else {
                            ((ByteBuffer) p0Var.f12604c).clear();
                        }
                        ByteBuffer byteBuffer3 = (ByteBuffer) p0Var.f12604c;
                        if (p0Var.a == 2) {
                            if (bArr != null) {
                                p0.a(byteBuffer3, 0L, 0, 1, true);
                                byteBuffer = byteBuffer3;
                                hVar2 = hVar;
                                long length = bArr.length;
                                ys.d.q((length >> 8) == 0 ? true : r12, "out of range: %s", length);
                                byteBuffer.put((byte) length);
                                byteBuffer.put(bArr);
                                byteBuffer.putInt(22, d0.l(byteBuffer.arrayOffset(), bArr.length + 28, 0, byteBuffer.array()));
                                byteBuffer.position(bArr.length + 28);
                            } else {
                                hVar2 = hVar;
                                byteBuffer = byteBuffer3;
                                byteBuffer.put(p0.f12601d);
                            }
                            byteBuffer.put(p0.f12602e);
                            i6 = 0;
                        } else {
                            hVar2 = hVar;
                            byteBuffer = byteBuffer3;
                            i6 = r12;
                        }
                        int f2 = p0Var.f12603b + ((int) ((jc.a.f(byteBuffer2.get(i6), byteBuffer2.limit() > 1 ? byteBuffer2.get(1) : (byte) 0) * 48000) / 1000000));
                        p0Var.f12603b = f2;
                        p0.a(byteBuffer, f2, p0Var.a, i12, false);
                        for (int i14 = 0; i14 < i12; i14++) {
                            if (i11 >= 255) {
                                byteBuffer.put((byte) -1);
                                i11 -= 255;
                            } else {
                                byteBuffer.put((byte) i11);
                                i11 = 0;
                            }
                        }
                        while (position < limit) {
                            byteBuffer.put(byteBuffer2.get(position));
                            position++;
                        }
                        byteBuffer2.position(byteBuffer2.limit());
                        byteBuffer.flip();
                        if (p0Var.a == 2) {
                            byteBuffer.putInt(i5 + 66, d0.l(byteBuffer.arrayOffset() + i5 + 44, byteBuffer.limit() - byteBuffer.position(), 0, byteBuffer.array()));
                        } else {
                            byteBuffer.putInt(22, d0.l(byteBuffer.arrayOffset(), byteBuffer.limit() - byteBuffer.position(), 0, byteBuffer.array()));
                        }
                        p0Var.a++;
                        p0Var.f12604c = byteBuffer;
                        fVar.f();
                        fVar.h(((ByteBuffer) p0Var.f12604c).remaining());
                        fVar.f14436v.put((ByteBuffer) p0Var.f12604c);
                        fVar.j();
                    }
                    hVar = hVar2;
                }
                if (!hVar.k(fVar)) {
                    this.H0 = true;
                    break;
                }
                r12 = 0;
            }
        }
        if (hVar.G > 0) {
            hVar.j();
        }
        return hVar.G > 0 || this.S0 || this.I0;
    }

    public abstract DecoderReuseEvaluation B(o oVar, Format format, Format format2);

    public m C(IllegalStateException illegalStateException, o oVar) {
        return new m(illegalStateException, oVar);
    }

    public final void D() {
        this.I0 = false;
        this.S.f();
        this.R.f();
        this.H0 = false;
        this.G0 = false;
        p0 p0Var = this.W;
        p0Var.getClass();
        p0Var.f12604c = jc.n.a;
        p0Var.f12603b = 0;
        p0Var.a = 2;
    }

    public final boolean E() {
        if (!this.N0) {
            p0();
            return true;
        }
        this.L0 = 1;
        if (this.f3471q0 || this.f3473s0) {
            this.M0 = 3;
            return false;
        }
        this.M0 = 2;
        return true;
    }

    public final boolean F(long j, long j5) {
        boolean z5;
        boolean z6;
        MediaCodec.BufferInfo bufferInfo;
        boolean d02;
        int B;
        boolean z7;
        int i5 = this.C0;
        MediaCodec.BufferInfo bufferInfo2 = this.U;
        if (i5 < 0) {
            if (this.f3474t0 && this.O0) {
                try {
                    B = this.f3462g0.B(bufferInfo2);
                } catch (IllegalStateException unused) {
                    c0();
                    if (this.T0) {
                        f0();
                    }
                }
            } else {
                B = this.f3462g0.B(bufferInfo2);
            }
            if (B < 0) {
                if (B != -2) {
                    if (this.f3479y0 && (this.S0 || this.L0 == 2)) {
                        c0();
                        return false;
                    }
                    return false;
                }
                this.P0 = true;
                MediaFormat outputFormat = this.f3462g0.getOutputFormat();
                if (this.f3469o0 != 0 && outputFormat.getInteger("width") == 32 && outputFormat.getInteger("height") == 32) {
                    this.f3478x0 = true;
                    return true;
                }
                if (this.f3476v0) {
                    outputFormat.setInteger("channel-count", 1);
                }
                this.f3463i0 = outputFormat;
                this.f3464j0 = true;
                return true;
            }
            if (this.f3478x0) {
                this.f3478x0 = false;
                this.f3462g0.releaseOutputBuffer(B, false);
                return true;
            }
            if (bufferInfo2.size == 0 && (bufferInfo2.flags & 4) != 0) {
                c0();
                return false;
            }
            this.C0 = B;
            ByteBuffer outputBuffer = this.f3462g0.getOutputBuffer(B);
            this.D0 = outputBuffer;
            if (outputBuffer != null) {
                outputBuffer.position(bufferInfo2.offset);
                this.D0.limit(bufferInfo2.offset + bufferInfo2.size);
            }
            if (this.f3475u0 && bufferInfo2.presentationTimeUs == 0 && (bufferInfo2.flags & 4) != 0) {
                long j7 = this.Q0;
                if (j7 != -9223372036854775807L) {
                    bufferInfo2.presentationTimeUs = j7;
                }
            }
            long j10 = bufferInfo2.presentationTimeUs;
            ArrayList arrayList = this.T;
            int size = arrayList.size();
            int i6 = 0;
            while (true) {
                if (i6 >= size) {
                    z7 = false;
                    break;
                }
                if (((Long) arrayList.get(i6)).longValue() == j10) {
                    arrayList.remove(i6);
                    z7 = true;
                    break;
                }
                i6++;
            }
            this.E0 = z7;
            long j11 = this.R0;
            long j12 = bufferInfo2.presentationTimeUs;
            this.F0 = j11 == j12;
            q0(j12);
        }
        if (this.f3474t0 && this.O0) {
            try {
                z5 = false;
                z6 = true;
                bufferInfo = bufferInfo2;
            } catch (IllegalStateException unused2) {
                z5 = false;
            }
            try {
                d02 = d0(j, j5, this.f3462g0, this.D0, this.C0, bufferInfo2.flags, 1, bufferInfo2.presentationTimeUs, this.E0, this.F0, this.Y);
            } catch (IllegalStateException unused3) {
                c0();
                if (!this.T0) {
                    return z5;
                }
                f0();
                return z5;
            }
        } else {
            z5 = false;
            z6 = true;
            bufferInfo = bufferInfo2;
            d02 = d0(j, j5, this.f3462g0, this.D0, this.C0, bufferInfo.flags, 1, bufferInfo.presentationTimeUs, this.E0, this.F0, this.Y);
        }
        if (!d02) {
            return z5;
        }
        Y(bufferInfo.presentationTimeUs);
        boolean z8 = (bufferInfo.flags & 4) != 0 ? z6 : z5;
        this.C0 = -1;
        this.D0 = null;
        if (!z8) {
            return z6;
        }
        c0();
        return z5;
    }

    public final boolean G() {
        boolean z5;
        l lVar = this.f3462g0;
        if (lVar != null && this.L0 != 2 && !this.S0) {
            int i5 = this.B0;
            mc.f fVar = this.Q;
            if (i5 < 0) {
                int v5 = lVar.v();
                this.B0 = v5;
                if (v5 >= 0) {
                    fVar.f14436v = this.f3462g0.getInputBuffer(v5);
                    fVar.f();
                }
            }
            if (this.L0 == 1) {
                if (!this.f3479y0) {
                    this.O0 = true;
                    this.f3462g0.p(0L, this.B0, 0, 4);
                    this.B0 = -1;
                    fVar.f14436v = null;
                }
                this.L0 = 2;
                return false;
            }
            if (this.f3477w0) {
                this.f3477w0 = false;
                fVar.f14436v.put(f3455b1);
                this.f3462g0.p(0L, this.B0, 38, 0);
                this.B0 = -1;
                fVar.f14436v = null;
                this.N0 = true;
                return true;
            }
            if (this.K0 == 1) {
                for (int i6 = 0; i6 < this.h0.K.size(); i6++) {
                    fVar.f14436v.put((byte[]) this.h0.K.get(i6));
                }
                this.K0 = 2;
            }
            ByteBuffer byteBuffer = fVar.f14436v;
            mc.c cVar = fVar.f14435i;
            int position = byteBuffer.position();
            e4.l lVar2 = this.f9660i;
            lVar2.u();
            try {
                int t5 = t(lVar2, fVar, 0);
                if (i() || fVar.c(536870912)) {
                    this.R0 = this.Q0;
                }
                if (t5 != -3) {
                    if (t5 == -5) {
                        if (this.K0 == 2) {
                            fVar.f();
                            this.K0 = 1;
                        }
                        V(lVar2);
                        return true;
                    }
                    if (!fVar.c(4)) {
                        if (this.N0 || fVar.c(1)) {
                            boolean c6 = fVar.c(1073741824);
                            if (c6) {
                                if (position == 0) {
                                    cVar.getClass();
                                } else {
                                    if (cVar.f14429d == null) {
                                        int[] iArr = new int[1];
                                        cVar.f14429d = iArr;
                                        cVar.f14434i.numBytesOfClearData = iArr;
                                    }
                                    int[] iArr2 = cVar.f14429d;
                                    iArr2[0] = iArr2[0] + position;
                                }
                            }
                            if (this.f3470p0 && !c6) {
                                ByteBuffer byteBuffer2 = fVar.f14436v;
                                int position2 = byteBuffer2.position();
                                int i10 = 0;
                                int i11 = 0;
                                while (true) {
                                    int i12 = i10 + 1;
                                    if (i12 >= position2) {
                                        byteBuffer2.clear();
                                        break;
                                    }
                                    int i13 = byteBuffer2.get(i10) & 255;
                                    if (i11 == 3) {
                                        if (i13 == 1 && (byteBuffer2.get(i12) & 31) == 7) {
                                            ByteBuffer duplicate = byteBuffer2.duplicate();
                                            duplicate.position(i10 - 3);
                                            duplicate.limit(position2);
                                            byteBuffer2.position(0);
                                            byteBuffer2.put(duplicate);
                                            break;
                                        }
                                    } else if (i13 == 0) {
                                        i11++;
                                    }
                                    if (i13 != 0) {
                                        i11 = 0;
                                    }
                                    i10 = i12;
                                }
                                if (fVar.f14436v.position() != 0) {
                                    this.f3470p0 = false;
                                }
                            }
                            long j = fVar.f14438x;
                            i iVar = this.f3480z0;
                            if (iVar != null) {
                                Format format = this.X;
                                if (iVar.f3435c == 0) {
                                    iVar.f3434b = j;
                                }
                                if (!iVar.a) {
                                    ByteBuffer byteBuffer3 = fVar.f14436v;
                                    byteBuffer3.getClass();
                                    int i14 = 0;
                                    for (int i15 = 0; i15 < 4; i15++) {
                                        i14 = (i14 << 8) | (byteBuffer3.get(i15) & 255);
                                    }
                                    int j5 = jc.a.j(i14);
                                    if (j5 == -1) {
                                        iVar.a = true;
                                        iVar.f3435c = 0L;
                                        iVar.f3434b = fVar.f14438x;
                                        ke.b.N("C2Mp3TimestampTracker", "MPEG audio header is invalid.");
                                        j = fVar.f14438x;
                                    } else {
                                        j = Math.max(0L, ((iVar.f3435c - 529) * 1000000) / format.W) + iVar.f3434b;
                                        iVar.f3435c += j5;
                                    }
                                }
                                long j7 = this.Q0;
                                i iVar2 = this.f3480z0;
                                Format format2 = this.X;
                                iVar2.getClass();
                                long j10 = format2.W;
                                z5 = c6;
                                this.Q0 = Math.max(j7, Math.max(0L, ((iVar2.f3435c - 529) * 1000000) / j10) + iVar2.f3434b);
                            } else {
                                z5 = c6;
                            }
                            if (fVar.c(Integer.MIN_VALUE)) {
                                this.T.add(Long.valueOf(j));
                            }
                            if (this.U0) {
                                ArrayDeque arrayDeque = this.V;
                                if (arrayDeque.isEmpty()) {
                                    this.Y0.f3454c.a(j, this.X);
                                } else {
                                    ((r) arrayDeque.peekLast()).f3454c.a(j, this.X);
                                }
                                this.U0 = false;
                            }
                            this.Q0 = Math.max(this.Q0, j);
                            fVar.j();
                            if (fVar.c(268435456)) {
                                O(fVar);
                            }
                            a0(fVar);
                            try {
                                if (z5) {
                                    this.f3462g0.m(this.B0, cVar, j);
                                } else {
                                    this.f3462g0.p(j, this.B0, fVar.f14436v.limit(), 0);
                                }
                                this.B0 = -1;
                                fVar.f14436v = null;
                                this.N0 = true;
                                this.K0 = 0;
                                this.X0.f5379c++;
                                return true;
                            } catch (MediaCodec.CryptoException e9) {
                                throw f(e9, this.X, false, d0.s(e9.getErrorCode()));
                            }
                        }
                        fVar.f();
                        if (this.K0 == 2) {
                            this.K0 = 1;
                            return true;
                        }
                        return true;
                    }
                    if (this.K0 == 2) {
                        fVar.f();
                        this.K0 = 1;
                    }
                    this.S0 = true;
                    if (!this.N0) {
                        c0();
                        return false;
                    }
                    try {
                        if (!this.f3479y0) {
                            this.O0 = true;
                            this.f3462g0.p(0L, this.B0, 0, 4);
                            this.B0 = -1;
                            fVar.f14436v = null;
                            return false;
                        }
                    } catch (MediaCodec.CryptoException e10) {
                        throw f(e10, this.X, false, d0.s(e10.getErrorCode()));
                    }
                }
            } catch (mc.e e11) {
                S(e11);
                e0(0);
                H();
                return true;
            }
        }
        return false;
    }

    public final void H() {
        try {
            this.f3462g0.flush();
        } finally {
            h0();
        }
    }

    public final boolean I() {
        if (this.f3462g0 == null) {
            return false;
        }
        int i5 = this.M0;
        if (i5 == 3 || this.f3471q0 || ((this.f3472r0 && !this.P0) || (this.f3473s0 && this.O0))) {
            f0();
            return true;
        }
        if (i5 == 2) {
            int i6 = d0.a;
            ke.b.k(i6 >= 23);
            if (i6 >= 23) {
                try {
                    p0();
                } catch (com.google.android.exoplayer2.c e9) {
                    ke.b.O("MediaCodecRenderer", "Failed to update the DRM session, releasing the codec instead.", e9);
                    f0();
                    return true;
                }
            }
        }
        H();
        return false;
    }

    public final List J(boolean z5) {
        Format format = this.X;
        t tVar = this.M;
        ArrayList M = M(tVar, format, z5);
        if (!M.isEmpty() || !z5) {
            return M;
        }
        ArrayList M2 = M(tVar, this.X, false);
        if (!M2.isEmpty()) {
            ke.b.N("MediaCodecRenderer", "Drm session requires secure decoder for " + this.X.I + ", but no secure decoder available. Trying to proceed with " + M2 + ".");
        }
        return M2;
    }

    public boolean K() {
        return false;
    }

    public abstract float L(float f2, Format[] formatArr);

    public abstract ArrayList M(t tVar, Format format, boolean z5);

    public abstract j N(o oVar, Format format, MediaCrypto mediaCrypto, float f2);

    /* JADX WARN: Code restructure failed: missing block: B:142:0x040d, code lost:
    
        if ("stvm8".equals(r5) == false) goto L232;
     */
    /* JADX WARN: Code restructure failed: missing block: B:146:0x041d, code lost:
    
        if ("OMX.amlogic.avc.decoder.awesome.secure".equals(r6) == false) goto L232;
     */
    /* JADX WARN: Removed duplicated region for block: B:102:0x050d  */
    /* JADX WARN: Removed duplicated region for block: B:105:0x0519  */
    /* JADX WARN: Removed duplicated region for block: B:139:0x03fd  */
    /* JADX WARN: Removed duplicated region for block: B:34:0x0391  */
    /* JADX WARN: Removed duplicated region for block: B:41:0x03ac A[ADDED_TO_REGION] */
    /* JADX WARN: Removed duplicated region for block: B:56:0x03e2  */
    /* JADX WARN: Removed duplicated region for block: B:61:0x03f3  */
    /* JADX WARN: Removed duplicated region for block: B:66:0x0426  */
    /* JADX WARN: Removed duplicated region for block: B:71:0x0435  */
    /* JADX WARN: Removed duplicated region for block: B:90:0x0482  */
    /* JADX WARN: Removed duplicated region for block: B:97:0x0496  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void P(o oVar, MediaCrypto mediaCrypto) {
        float L;
        long j;
        float f2;
        long j5;
        int i5;
        boolean z5;
        boolean z6;
        String str;
        String str2;
        char c6;
        String sb2;
        String str3;
        nc.i iVar;
        String str4 = oVar.a;
        int i6 = d0.a;
        if (i6 < 23) {
            L = -1.0f;
        } else {
            float f10 = this.f3461f0;
            Format[] formatArr = this.F;
            formatArr.getClass();
            L = L(f10, formatArr);
        }
        if (L <= this.O) {
            L = -1.0f;
        }
        b0(this.X);
        long elapsedRealtime = SystemClock.elapsedRealtime();
        j N = N(oVar, this.X, mediaCrypto, L);
        if (i6 >= 31) {
            c0 c0Var = this.f9663x;
            c0Var.getClass();
            p.a(N, c0Var);
        }
        try {
            ke.b.c("createCodec:" + str4);
            this.f3462g0 = this.L.n(N);
            ke.b.t();
            long elapsedRealtime2 = SystemClock.elapsedRealtime();
            if (oVar.d(this.X)) {
                j = elapsedRealtime2;
                f2 = L;
                j5 = elapsedRealtime;
            } else {
                Format format = this.X;
                if (format == null) {
                    sb2 = "null";
                    j = elapsedRealtime2;
                    str2 = str4;
                    f2 = L;
                    j5 = elapsedRealtime;
                } else {
                    String str5 = format.f5227e;
                    String str6 = format.f5229i;
                    int i10 = format.W;
                    int i11 = format.V;
                    float f11 = format.P;
                    le.b bVar = format.U;
                    j = elapsedRealtime2;
                    int i12 = format.O;
                    int i13 = format.N;
                    j5 = elapsedRealtime;
                    nc.i iVar2 = format.L;
                    String str7 = format.F;
                    f2 = L;
                    int i14 = format.E;
                    int i15 = format.f5230v;
                    int i16 = format.f5231w;
                    StringBuilder o6 = k0.d.o("id=");
                    str2 = str4;
                    o6.append(format.f5225d);
                    o6.append(", mimeType=");
                    o6.append(format.I);
                    int i17 = -1;
                    if (i14 != -1) {
                        o6.append(", bitrate=");
                        o6.append(i14);
                    }
                    if (str7 != null) {
                        o6.append(", codecs=");
                        o6.append(str7);
                    }
                    if (iVar2 != null) {
                        LinkedHashSet linkedHashSet = new LinkedHashSet();
                        int i18 = 0;
                        c6 = ',';
                        while (i18 < iVar2.f15040v) {
                            UUID uuid = iVar2.f15037d[i18].f15033e;
                            if (uuid.equals(hc.h.f9709b)) {
                                linkedHashSet.add("cenc");
                            } else if (uuid.equals(hc.h.f9710c)) {
                                linkedHashSet.add("clearkey");
                            } else if (uuid.equals(hc.h.f9712e)) {
                                linkedHashSet.add("playready");
                            } else if (uuid.equals(hc.h.f9711d)) {
                                linkedHashSet.add("widevine");
                            } else if (uuid.equals(hc.h.a)) {
                                linkedHashSet.add("universal");
                            } else {
                                iVar = iVar2;
                                linkedHashSet.add("unknown (" + uuid + ")");
                                i18++;
                                iVar2 = iVar;
                            }
                            iVar = iVar2;
                            i18++;
                            iVar2 = iVar;
                        }
                        o6.append(", drm=[");
                        new ai.e(String.valueOf(','), 1).a(o6, linkedHashSet);
                        o6.append(']');
                        i17 = -1;
                    } else {
                        c6 = ',';
                    }
                    if (i13 != i17 && i12 != i17) {
                        o6.append(", res=");
                        o6.append(i13);
                        o6.append("x");
                        o6.append(i12);
                    }
                    if (bVar != null) {
                        int i19 = bVar.f13857i;
                        int i20 = bVar.f13856e;
                        int i21 = bVar.f13855d;
                        if (i21 != -1 && i20 != -1 && i19 != -1) {
                            o6.append(", color=");
                            if (i21 == -1 || i20 == -1 || i19 == -1) {
                                str3 = "NA";
                            } else {
                                String str8 = i21 != -1 ? i21 != 6 ? i21 != 1 ? i21 != 2 ? "Undefined color space" : "BT601" : "BT709" : "BT2020" : "Unset color space";
                                String str9 = i20 != -1 ? i20 != 1 ? i20 != 2 ? "Undefined color range" : "Limited range" : "Full range" : "Unset color range";
                                String a = le.b.a(i19);
                                int i22 = d0.a;
                                Locale locale = Locale.US;
                                str3 = str8 + "/" + str9 + "/" + a;
                            }
                            o6.append(str3);
                        }
                    }
                    if (f11 != -1.0f) {
                        o6.append(", fps=");
                        o6.append(f11);
                    }
                    if (i11 != -1) {
                        o6.append(", channels=");
                        o6.append(i11);
                    }
                    if (i10 != -1) {
                        o6.append(", sample_rate=");
                        o6.append(i10);
                    }
                    if (str6 != null) {
                        o6.append(", language=");
                        o6.append(str6);
                    }
                    if (str5 != null) {
                        o6.append(", label=");
                        o6.append(str5);
                    }
                    if (i15 != 0) {
                        ArrayList arrayList = new ArrayList();
                        if ((i15 & 4) != 0) {
                            arrayList.add("auto");
                        }
                        if ((i15 & 1) != 0) {
                            arrayList.add("default");
                        }
                        if ((i15 & 2) != 0) {
                            arrayList.add("forced");
                        }
                        o6.append(", selectionFlags=[");
                        new ai.e(String.valueOf(c6), 1).a(o6, arrayList);
                        o6.append("]");
                    }
                    if (i16 != 0) {
                        ArrayList arrayList2 = new ArrayList();
                        if ((i16 & 1) != 0) {
                            arrayList2.add("main");
                        }
                        if ((i16 & 2) != 0) {
                            arrayList2.add("alt");
                        }
                        if ((i16 & 4) != 0) {
                            arrayList2.add("supplementary");
                        }
                        if ((i16 & 8) != 0) {
                            arrayList2.add("commentary");
                        }
                        if ((i16 & 16) != 0) {
                            arrayList2.add("dub");
                        }
                        if ((i16 & 32) != 0) {
                            arrayList2.add("emergency");
                        }
                        if ((i16 & 64) != 0) {
                            arrayList2.add("caption");
                        }
                        if ((i16 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT) != 0) {
                            arrayList2.add("subtitle");
                        }
                        if ((i16 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER) != 0) {
                            arrayList2.add("sign");
                        }
                        if ((i16 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING) != 0) {
                            arrayList2.add("describes-video");
                        }
                        if ((i16 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_OVERFLOW_INSET) != 0) {
                            arrayList2.add("describes-music");
                        }
                        if ((i16 & RecyclerView.ItemAnimator.FLAG_MOVED) != 0) {
                            arrayList2.add("enhanced-intelligibility");
                        }
                        if ((i16 & RecyclerView.ItemAnimator.FLAG_APPEARED_IN_PRE_LAYOUT) != 0) {
                            arrayList2.add("transcribes-dialog");
                        }
                        if ((i16 & 8192) != 0) {
                            arrayList2.add("easy-read");
                        }
                        if ((i16 & 16384) != 0) {
                            arrayList2.add("trick-play");
                        }
                        o6.append(", roleFlags=[");
                        new ai.e(String.valueOf(c6), 1).a(o6, arrayList2);
                        o6.append("]");
                    }
                    sb2 = o6.toString();
                }
                Locale locale2 = Locale.US;
                str4 = str2;
                ke.b.N("MediaCodecRenderer", s4.h.g("Format exceeds selected codec's capabilities [", sb2, ", ", str4, "]"));
            }
            this.f3468n0 = oVar;
            this.f3465k0 = f2;
            this.h0 = this.X;
            int i23 = d0.a;
            if (i23 <= 25 && "OMX.Exynos.avc.dec.secure".equals(str4)) {
                String str10 = d0.f13296d;
                if (str10.startsWith("SM-T585") || str10.startsWith("SM-A510") || str10.startsWith("SM-A520") || str10.startsWith("SM-J700")) {
                    i5 = 2;
                    this.f3469o0 = i5;
                    this.f3470p0 = i23 >= 21 && this.h0.K.isEmpty() && "OMX.MTK.VIDEO.DECODER.AVC".equals(str4);
                    this.f3471q0 = i23 >= 18 || (i23 == 18 && ("OMX.SEC.avc.dec".equals(str4) || "OMX.SEC.avc.dec.secure".equals(str4))) || (i23 == 19 && d0.f13296d.startsWith("SM-G800") && ("OMX.Exynos.avc.dec".equals(str4) || "OMX.Exynos.avc.dec.secure".equals(str4)));
                    this.f3472r0 = i23 != 29 && "c2.android.aac.decoder".equals(str4);
                    if (i23 <= 23 || !"OMX.google.vorbis.decoder".equals(str4)) {
                        if (i23 <= 19) {
                            String str11 = d0.f13294b;
                            if (!"hb2000".equals(str11)) {
                            }
                            if (!"OMX.amlogic.avc.decoder.awesome".equals(str4)) {
                            }
                        }
                        z5 = false;
                        this.f3473s0 = z5;
                        this.f3474t0 = i23 != 21 && "OMX.google.aac.decoder".equals(str4);
                        if (i23 < 21 && "OMX.SEC.mp3.dec".equals(str4) && "samsung".equals(d0.f13295c)) {
                            str = d0.f13294b;
                            if (!str.startsWith("baffin") || str.startsWith("grand") || str.startsWith("fortuna") || str.startsWith("gprimelte") || str.startsWith("j2y18lte") || str.startsWith("ms01")) {
                                z6 = true;
                                this.f3475u0 = z6;
                                this.f3476v0 = i23 > 18 && this.h0.V == 1 && "OMX.MTK.AUDIO.DECODER.MP3".equals(str4);
                                this.f3479y0 = (i23 > 25 && "OMX.rk.video_decoder.avc".equals(str4)) || (i23 <= 17 && "OMX.allwinner.video.decoder.avc".equals(str4)) || ((i23 <= 29 && ("OMX.broadcom.video_decoder.tunnel".equals(str4) || "OMX.broadcom.video_decoder.tunnel.secure".equals(str4) || "OMX.bcm.vdec.avc.tunnel".equals(str4) || "OMX.bcm.vdec.avc.tunnel.secure".equals(str4) || "OMX.bcm.vdec.hevc.tunnel".equals(str4) || "OMX.bcm.vdec.hevc.tunnel.secure".equals(str4))) || (("Amazon".equals(d0.f13295c) && "AFTS".equals(d0.f13296d) && oVar.f3445f) || K()));
                                this.f3462g0.getClass();
                                if ("c2.android.mp3.decoder".equals(str4)) {
                                    this.f3480z0 = new i();
                                }
                                if (this.f9664y == 2) {
                                    this.A0 = SystemClock.elapsedRealtime() + 1000;
                                }
                                this.X0.a++;
                                T(j, j - j5, str4);
                            }
                        }
                        z6 = false;
                        this.f3475u0 = z6;
                        this.f3476v0 = i23 > 18 && this.h0.V == 1 && "OMX.MTK.AUDIO.DECODER.MP3".equals(str4);
                        this.f3479y0 = (i23 > 25 && "OMX.rk.video_decoder.avc".equals(str4)) || (i23 <= 17 && "OMX.allwinner.video.decoder.avc".equals(str4)) || ((i23 <= 29 && ("OMX.broadcom.video_decoder.tunnel".equals(str4) || "OMX.broadcom.video_decoder.tunnel.secure".equals(str4) || "OMX.bcm.vdec.avc.tunnel".equals(str4) || "OMX.bcm.vdec.avc.tunnel.secure".equals(str4) || "OMX.bcm.vdec.hevc.tunnel".equals(str4) || "OMX.bcm.vdec.hevc.tunnel.secure".equals(str4))) || (("Amazon".equals(d0.f13295c) && "AFTS".equals(d0.f13296d) && oVar.f3445f) || K()));
                        this.f3462g0.getClass();
                        if ("c2.android.mp3.decoder".equals(str4)) {
                        }
                        if (this.f9664y == 2) {
                        }
                        this.X0.a++;
                        T(j, j - j5, str4);
                    }
                    z5 = true;
                    this.f3473s0 = z5;
                    this.f3474t0 = i23 != 21 && "OMX.google.aac.decoder".equals(str4);
                    if (i23 < 21) {
                        str = d0.f13294b;
                        if (!str.startsWith("baffin")) {
                        }
                        z6 = true;
                        this.f3475u0 = z6;
                        this.f3476v0 = i23 > 18 && this.h0.V == 1 && "OMX.MTK.AUDIO.DECODER.MP3".equals(str4);
                        this.f3479y0 = (i23 > 25 && "OMX.rk.video_decoder.avc".equals(str4)) || (i23 <= 17 && "OMX.allwinner.video.decoder.avc".equals(str4)) || ((i23 <= 29 && ("OMX.broadcom.video_decoder.tunnel".equals(str4) || "OMX.broadcom.video_decoder.tunnel.secure".equals(str4) || "OMX.bcm.vdec.avc.tunnel".equals(str4) || "OMX.bcm.vdec.avc.tunnel.secure".equals(str4) || "OMX.bcm.vdec.hevc.tunnel".equals(str4) || "OMX.bcm.vdec.hevc.tunnel.secure".equals(str4))) || (("Amazon".equals(d0.f13295c) && "AFTS".equals(d0.f13296d) && oVar.f3445f) || K()));
                        this.f3462g0.getClass();
                        if ("c2.android.mp3.decoder".equals(str4)) {
                        }
                        if (this.f9664y == 2) {
                        }
                        this.X0.a++;
                        T(j, j - j5, str4);
                    }
                    z6 = false;
                    this.f3475u0 = z6;
                    this.f3476v0 = i23 > 18 && this.h0.V == 1 && "OMX.MTK.AUDIO.DECODER.MP3".equals(str4);
                    this.f3479y0 = (i23 > 25 && "OMX.rk.video_decoder.avc".equals(str4)) || (i23 <= 17 && "OMX.allwinner.video.decoder.avc".equals(str4)) || ((i23 <= 29 && ("OMX.broadcom.video_decoder.tunnel".equals(str4) || "OMX.broadcom.video_decoder.tunnel.secure".equals(str4) || "OMX.bcm.vdec.avc.tunnel".equals(str4) || "OMX.bcm.vdec.avc.tunnel.secure".equals(str4) || "OMX.bcm.vdec.hevc.tunnel".equals(str4) || "OMX.bcm.vdec.hevc.tunnel.secure".equals(str4))) || (("Amazon".equals(d0.f13295c) && "AFTS".equals(d0.f13296d) && oVar.f3445f) || K()));
                    this.f3462g0.getClass();
                    if ("c2.android.mp3.decoder".equals(str4)) {
                    }
                    if (this.f9664y == 2) {
                    }
                    this.X0.a++;
                    T(j, j - j5, str4);
                }
            }
            if (i23 < 24 && ("OMX.Nvidia.h264.decode".equals(str4) || "OMX.Nvidia.h264.decode.secure".equals(str4))) {
                String str12 = d0.f13294b;
                if ("flounder".equals(str12) || "flounder_lte".equals(str12) || "grouper".equals(str12) || "tilapia".equals(str12)) {
                    i5 = 1;
                    this.f3469o0 = i5;
                    this.f3470p0 = i23 >= 21 && this.h0.K.isEmpty() && "OMX.MTK.VIDEO.DECODER.AVC".equals(str4);
                    this.f3471q0 = i23 >= 18 || (i23 == 18 && ("OMX.SEC.avc.dec".equals(str4) || "OMX.SEC.avc.dec.secure".equals(str4))) || (i23 == 19 && d0.f13296d.startsWith("SM-G800") && ("OMX.Exynos.avc.dec".equals(str4) || "OMX.Exynos.avc.dec.secure".equals(str4)));
                    this.f3472r0 = i23 != 29 && "c2.android.aac.decoder".equals(str4);
                    if (i23 <= 23) {
                    }
                    if (i23 <= 19) {
                    }
                    z5 = false;
                    this.f3473s0 = z5;
                    this.f3474t0 = i23 != 21 && "OMX.google.aac.decoder".equals(str4);
                    if (i23 < 21) {
                    }
                    z6 = false;
                    this.f3475u0 = z6;
                    this.f3476v0 = i23 > 18 && this.h0.V == 1 && "OMX.MTK.AUDIO.DECODER.MP3".equals(str4);
                    this.f3479y0 = (i23 > 25 && "OMX.rk.video_decoder.avc".equals(str4)) || (i23 <= 17 && "OMX.allwinner.video.decoder.avc".equals(str4)) || ((i23 <= 29 && ("OMX.broadcom.video_decoder.tunnel".equals(str4) || "OMX.broadcom.video_decoder.tunnel.secure".equals(str4) || "OMX.bcm.vdec.avc.tunnel".equals(str4) || "OMX.bcm.vdec.avc.tunnel.secure".equals(str4) || "OMX.bcm.vdec.hevc.tunnel".equals(str4) || "OMX.bcm.vdec.hevc.tunnel.secure".equals(str4))) || (("Amazon".equals(d0.f13295c) && "AFTS".equals(d0.f13296d) && oVar.f3445f) || K()));
                    this.f3462g0.getClass();
                    if ("c2.android.mp3.decoder".equals(str4)) {
                    }
                    if (this.f9664y == 2) {
                    }
                    this.X0.a++;
                    T(j, j - j5, str4);
                }
            }
            i5 = 0;
            this.f3469o0 = i5;
            this.f3470p0 = i23 >= 21 && this.h0.K.isEmpty() && "OMX.MTK.VIDEO.DECODER.AVC".equals(str4);
            this.f3471q0 = i23 >= 18 || (i23 == 18 && ("OMX.SEC.avc.dec".equals(str4) || "OMX.SEC.avc.dec.secure".equals(str4))) || (i23 == 19 && d0.f13296d.startsWith("SM-G800") && ("OMX.Exynos.avc.dec".equals(str4) || "OMX.Exynos.avc.dec.secure".equals(str4)));
            this.f3472r0 = i23 != 29 && "c2.android.aac.decoder".equals(str4);
            if (i23 <= 23) {
            }
            if (i23 <= 19) {
            }
            z5 = false;
            this.f3473s0 = z5;
            this.f3474t0 = i23 != 21 && "OMX.google.aac.decoder".equals(str4);
            if (i23 < 21) {
            }
            z6 = false;
            this.f3475u0 = z6;
            this.f3476v0 = i23 > 18 && this.h0.V == 1 && "OMX.MTK.AUDIO.DECODER.MP3".equals(str4);
            this.f3479y0 = (i23 > 25 && "OMX.rk.video_decoder.avc".equals(str4)) || (i23 <= 17 && "OMX.allwinner.video.decoder.avc".equals(str4)) || ((i23 <= 29 && ("OMX.broadcom.video_decoder.tunnel".equals(str4) || "OMX.broadcom.video_decoder.tunnel.secure".equals(str4) || "OMX.bcm.vdec.avc.tunnel".equals(str4) || "OMX.bcm.vdec.avc.tunnel.secure".equals(str4) || "OMX.bcm.vdec.hevc.tunnel".equals(str4) || "OMX.bcm.vdec.hevc.tunnel.secure".equals(str4))) || (("Amazon".equals(d0.f13295c) && "AFTS".equals(d0.f13296d) && oVar.f3445f) || K()));
            this.f3462g0.getClass();
            if ("c2.android.mp3.decoder".equals(str4)) {
            }
            if (this.f9664y == 2) {
            }
            this.X0.a++;
            T(j, j - j5, str4);
        } catch (Throwable th2) {
            ke.b.t();
            throw th2;
        }
    }

    public final void Q() {
        Format format;
        if (this.f3462g0 != null || this.G0 || (format = this.X) == null) {
            return;
        }
        if (this.a0 == null && m0(format)) {
            Format format2 = this.X;
            D();
            String str = format2.I;
            boolean equals = "audio/mp4a-latm".equals(str);
            h hVar = this.S;
            if (equals || "audio/mpeg".equals(str) || "audio/opus".equals(str)) {
                hVar.getClass();
                hVar.H = 32;
            } else {
                hVar.getClass();
                hVar.H = 1;
            }
            this.G0 = true;
            return;
        }
        j0(this.a0);
        String str2 = this.X.I;
        nc.k kVar = this.Z;
        if (kVar != null) {
            mc.b f2 = kVar.f();
            if (this.f3457b0 == null) {
                if (f2 == null) {
                    if (this.Z.getError() == null) {
                        return;
                    }
                } else if (f2 instanceof nc.z) {
                    nc.z zVar = (nc.z) f2;
                    try {
                        MediaCrypto mediaCrypto = new MediaCrypto(zVar.a, zVar.f15052b);
                        this.f3457b0 = mediaCrypto;
                        this.f3458c0 = !zVar.f15053c && mediaCrypto.requiresSecureDecoderComponent(str2);
                    } catch (MediaCryptoException e9) {
                        throw f(e9, this.X, false, 6006);
                    }
                }
            }
            if (nc.z.f15051d && (f2 instanceof nc.z)) {
                int state = this.Z.getState();
                if (state == 1) {
                    nc.j error = this.Z.getError();
                    error.getClass();
                    throw f(error, this.X, false, error.f15041d);
                }
                if (state != 4) {
                    return;
                }
            }
        }
        try {
            R(this.f3457b0, this.f3458c0);
        } catch (q e10) {
            throw f(e10, this.X, false, RNCWebViewManager.COMMAND_RELEASE);
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:25:0x00bc  */
    /* JADX WARN: Removed duplicated region for block: B:31:0x00d6  */
    /* JADX WARN: Removed duplicated region for block: B:34:0x0100 A[SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:38:0x0053 A[SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:39:0x00d9  */
    /* JADX WARN: Removed duplicated region for block: B:41:0x00cb  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void R(MediaCrypto mediaCrypto, boolean z5) {
        String str;
        q qVar;
        if (this.f3466l0 == null) {
            try {
                List J = J(z5);
                ArrayDeque arrayDeque = new ArrayDeque();
                this.f3466l0 = arrayDeque;
                if (this.N) {
                    arrayDeque.addAll(J);
                } else {
                    ArrayList arrayList = (ArrayList) J;
                    if (!arrayList.isEmpty()) {
                        this.f3466l0.add((o) arrayList.get(0));
                    }
                }
                this.f3467m0 = null;
            } catch (w e9) {
                throw new q(this.X, e9, z5, -49998);
            }
        }
        if (this.f3466l0.isEmpty()) {
            throw new q(this.X, null, z5, -49999);
        }
        o oVar = (o) this.f3466l0.peekFirst();
        while (this.f3462g0 == null) {
            o oVar2 = (o) this.f3466l0.peekFirst();
            if (!l0(oVar2)) {
                return;
            }
            try {
                P(oVar2, mediaCrypto);
            } catch (Exception e10) {
                if (oVar2 != oVar) {
                    throw e10;
                }
                try {
                    ke.b.N("MediaCodecRenderer", "Preferred decoder instantiation failed. Sleeping for 50ms then retrying.");
                    Thread.sleep(50L);
                    P(oVar2, mediaCrypto);
                } catch (Exception e11) {
                    ke.b.O("MediaCodecRenderer", "Failed to initialize decoder: " + oVar2, e11);
                    this.f3466l0.removeFirst();
                    Format format = this.X;
                    String str2 = "Decoder init failed: " + oVar2.a + ", " + format;
                    String str3 = format.I;
                    if (d0.a < 21) {
                        str = e11 instanceof MediaCodec.CodecException ? ((MediaCodec.CodecException) e11).getDiagnosticInfo() : null;
                    } else {
                        str = null;
                    }
                    q qVar2 = new q(str2, e11, str3, z5, oVar2, str);
                    S(qVar2);
                    qVar = this.f3467m0;
                    if (qVar != null) {
                        this.f3467m0 = qVar2;
                    } else {
                        this.f3467m0 = new q(qVar.getMessage(), qVar.getCause(), qVar.f3448d, qVar.f3449e, qVar.f3450i, qVar.f3451v);
                    }
                    if (!this.f3466l0.isEmpty()) {
                        throw this.f3467m0;
                    }
                }
                ke.b.O("MediaCodecRenderer", "Failed to initialize decoder: " + oVar2, e11);
                this.f3466l0.removeFirst();
                Format format2 = this.X;
                String str22 = "Decoder init failed: " + oVar2.a + ", " + format2;
                String str32 = format2.I;
                if (d0.a < 21) {
                }
                q qVar22 = new q(str22, e11, str32, z5, oVar2, str);
                S(qVar22);
                qVar = this.f3467m0;
                if (qVar != null) {
                }
                if (!this.f3466l0.isEmpty()) {
                }
            }
        }
        this.f3466l0 = null;
    }

    public abstract void S(Exception exc);

    public abstract void T(long j, long j5, String str);

    public abstract void U(String str);

    /* JADX WARN: Code restructure failed: missing block: B:101:0x0130, code lost:
    
        if (E() == false) goto L78;
     */
    /* JADX WARN: Code restructure failed: missing block: B:43:0x00ae, code lost:
    
        if (r14 != false) goto L127;
     */
    /* JADX WARN: Code restructure failed: missing block: B:78:0x00ea, code lost:
    
        if (E() == false) goto L78;
     */
    /* JADX WARN: Code restructure failed: missing block: B:95:0x011e, code lost:
    
        if (E() == false) goto L78;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public DecoderReuseEvaluation V(e4.l lVar) {
        mc.b f2;
        mc.b f10;
        boolean z5 = true;
        this.U0 = true;
        Format format = (Format) lVar.f7960i;
        format.getClass();
        String str = format.I;
        int i5 = 0;
        if (str == null) {
            throw f(new IllegalArgumentException(), format, false, 4005);
        }
        nc.k kVar = (nc.k) lVar.f7959e;
        nc.k kVar2 = this.a0;
        if (kVar2 != kVar) {
            if (kVar != null) {
                kVar.c(null);
            }
            if (kVar2 != null) {
                kVar2.d(null);
            }
        }
        this.a0 = kVar;
        this.X = format;
        if (this.G0) {
            this.I0 = true;
            return null;
        }
        l lVar2 = this.f3462g0;
        if (lVar2 == null) {
            this.f3466l0 = null;
            Q();
            return null;
        }
        o oVar = this.f3468n0;
        Format format2 = this.h0;
        nc.k kVar3 = this.Z;
        if (kVar3 != kVar) {
            if (kVar != null && kVar3 != null && (f2 = kVar.f()) != null && (f10 = kVar3.f()) != null && f2.getClass().equals(f10.getClass())) {
                if (f2 instanceof nc.z) {
                    nc.z zVar = (nc.z) f2;
                    if (kVar.a().equals(kVar3.a()) && d0.a >= 23) {
                        UUID uuid = hc.h.f9712e;
                        if (!uuid.equals(kVar3.a()) && !uuid.equals(kVar.a())) {
                            boolean e9 = zVar.f15053c ? false : kVar.e(str);
                            if (!oVar.f3445f) {
                            }
                        }
                    }
                }
            }
            if (this.N0) {
                this.L0 = 1;
                this.M0 = 3;
            } else {
                f0();
                Q();
            }
            return new DecoderReuseEvaluation(oVar.a, format2, format, 0, IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT);
        }
        boolean z6 = this.a0 != this.Z;
        ke.b.k(!z6 || d0.a >= 23);
        DecoderReuseEvaluation B = B(oVar, format2, format);
        int i6 = B.f5389d;
        if (i6 != 0) {
            if (i6 == 1) {
                if (o0(format)) {
                    this.h0 = format;
                    if (!z6) {
                        if (this.N0) {
                            this.L0 = 1;
                            if (this.f3471q0 || this.f3473s0) {
                                this.M0 = 3;
                                i5 = 2;
                            } else {
                                this.M0 = 1;
                            }
                        }
                    }
                }
                i5 = 16;
            } else if (i6 == 2) {
                if (o0(format)) {
                    this.J0 = true;
                    this.K0 = 1;
                    int i10 = this.f3469o0;
                    if (i10 != 2 && (i10 != 1 || format.N != format2.N || format.O != format2.O)) {
                        z5 = false;
                    }
                    this.f3477w0 = z5;
                    this.h0 = format;
                    if (z6) {
                    }
                }
                i5 = 16;
            } else {
                if (i6 != 3) {
                    throw new IllegalStateException();
                }
                if (o0(format)) {
                    this.h0 = format;
                    if (z6) {
                    }
                }
                i5 = 16;
            }
        } else if (this.N0) {
            this.L0 = 1;
            this.M0 = 3;
        } else {
            f0();
            Q();
        }
        return (i6 == 0 || (this.f3462g0 == lVar2 && this.M0 != 3)) ? B : new DecoderReuseEvaluation(oVar.a, format2, format, 0, i5);
    }

    public abstract void W(Format format, MediaFormat mediaFormat);

    public void Y(long j) {
        this.Z0 = j;
        while (true) {
            ArrayDeque arrayDeque = this.V;
            if (arrayDeque.isEmpty() || j < ((r) arrayDeque.peek()).a) {
                return;
            }
            k0((r) arrayDeque.poll());
            Z();
        }
    }

    public abstract void Z();

    public abstract void a0(mc.f fVar);

    public final void c0() {
        int i5 = this.M0;
        if (i5 == 1) {
            H();
            return;
        }
        if (i5 == 2) {
            H();
            p0();
        } else if (i5 != 3) {
            this.T0 = true;
            g0();
        } else {
            f0();
            Q();
        }
    }

    public abstract boolean d0(long j, long j5, l lVar, ByteBuffer byteBuffer, int i5, int i6, int i10, long j7, boolean z5, boolean z6, Format format);

    public final boolean e0(int i5) {
        e4.l lVar = this.f9660i;
        lVar.u();
        mc.f fVar = this.P;
        fVar.f();
        int t5 = t(lVar, fVar, i5 | 4);
        if (t5 == -5) {
            V(lVar);
            return true;
        }
        if (t5 != -4 || !fVar.c(4)) {
            return false;
        }
        this.S0 = true;
        c0();
        return false;
    }

    /* JADX WARN: Multi-variable type inference failed */
    public final void f0() {
        try {
            l lVar = this.f3462g0;
            if (lVar != null) {
                lVar.release();
                this.X0.f5378b++;
                U(this.f3468n0.a);
            }
            this.f3462g0 = null;
            try {
                MediaCrypto mediaCrypto = this.f3457b0;
                if (mediaCrypto != null) {
                    mediaCrypto.release();
                }
            } finally {
            }
        } catch (Throwable th2) {
            this.f3462g0 = null;
            try {
                MediaCrypto mediaCrypto2 = this.f3457b0;
                if (mediaCrypto2 != null) {
                    mediaCrypto2.release();
                }
                throw th2;
            } finally {
            }
        }
    }

    public void h0() {
        this.B0 = -1;
        this.Q.f14436v = null;
        this.C0 = -1;
        this.D0 = null;
        this.A0 = -9223372036854775807L;
        this.O0 = false;
        this.N0 = false;
        this.f3477w0 = false;
        this.f3478x0 = false;
        this.E0 = false;
        this.F0 = false;
        this.T.clear();
        this.Q0 = -9223372036854775807L;
        this.R0 = -9223372036854775807L;
        this.Z0 = -9223372036854775807L;
        i iVar = this.f3480z0;
        if (iVar != null) {
            iVar.f3434b = 0L;
            iVar.f3435c = 0L;
            iVar.a = false;
        }
        this.L0 = 0;
        this.M0 = 0;
        this.K0 = this.J0 ? 1 : 0;
    }

    public final void i0() {
        h0();
        this.W0 = null;
        this.f3480z0 = null;
        this.f3466l0 = null;
        this.f3468n0 = null;
        this.h0 = null;
        this.f3463i0 = null;
        this.f3464j0 = false;
        this.P0 = false;
        this.f3465k0 = -1.0f;
        this.f3469o0 = 0;
        this.f3470p0 = false;
        this.f3471q0 = false;
        this.f3472r0 = false;
        this.f3473s0 = false;
        this.f3474t0 = false;
        this.f3475u0 = false;
        this.f3476v0 = false;
        this.f3479y0 = false;
        this.J0 = false;
        this.K0 = 0;
        this.f3458c0 = false;
    }

    public final void j0(nc.k kVar) {
        nc.k kVar2 = this.Z;
        if (kVar2 != kVar) {
            if (kVar != null) {
                kVar.c(null);
            }
            if (kVar2 != null) {
                kVar2.d(null);
            }
        }
        this.Z = kVar;
    }

    @Override // hc.e
    public boolean k() {
        boolean isReady;
        if (this.X != null) {
            if (i()) {
                isReady = this.I;
            } else {
                q0 q0Var = this.E;
                q0Var.getClass();
                isReady = q0Var.isReady();
            }
            if (!isReady) {
                if ((this.C0 >= 0) || (this.A0 != -9223372036854775807L && SystemClock.elapsedRealtime() < this.A0)) {
                }
            }
            return true;
        }
        return false;
    }

    public final void k0(r rVar) {
        this.Y0 = rVar;
        if (rVar.f3453b != -9223372036854775807L) {
            this.f3456a1 = true;
            X();
        }
    }

    @Override // hc.e
    public void l() {
        this.X = null;
        k0(r.f3452d);
        this.V.clear();
        I();
    }

    public boolean l0(o oVar) {
        return true;
    }

    public boolean m0(Format format) {
        return false;
    }

    @Override // hc.e
    public void n(long j, boolean z5) {
        int i5;
        this.S0 = false;
        this.T0 = false;
        this.V0 = false;
        if (this.G0) {
            this.S.f();
            this.R.f();
            this.H0 = false;
            p0 p0Var = this.W;
            p0Var.getClass();
            p0Var.f12604c = jc.n.a;
            p0Var.f12603b = 0;
            p0Var.a = 2;
        } else if (I()) {
            Q();
        }
        w1 w1Var = this.Y0.f3454c;
        synchronized (w1Var) {
            i5 = w1Var.f5867i;
        }
        if (i5 > 0) {
            this.U0 = true;
        }
        this.Y0.f3454c.b();
        this.V.clear();
    }

    public abstract int n0(t tVar, Format format);

    public final boolean o0(Format format) {
        if (d0.a >= 23 && this.f3462g0 != null && this.M0 != 3 && this.f9664y != 0) {
            float f2 = this.f3461f0;
            Format[] formatArr = this.F;
            formatArr.getClass();
            float L = L(f2, formatArr);
            float f10 = this.f3465k0;
            if (f10 != L) {
                if (L == -1.0f) {
                    if (this.N0) {
                        this.L0 = 1;
                        this.M0 = 3;
                        return false;
                    }
                    f0();
                    Q();
                    return false;
                }
                if (f10 != -1.0f || L > this.O) {
                    Bundle bundle = new Bundle();
                    bundle.putFloat("operating-rate", L);
                    this.f3462g0.setParameters(bundle);
                    this.f3465k0 = L;
                }
            }
        }
        return true;
    }

    public final void p0() {
        mc.b f2 = this.a0.f();
        if (f2 instanceof nc.z) {
            try {
                this.f3457b0.setMediaDrmSession(((nc.z) f2).f15052b);
            } catch (MediaCryptoException e9) {
                throw f(e9, this.X, false, 6006);
            }
        }
        j0(this.a0);
        this.L0 = 0;
        this.M0 = 0;
    }

    public final void q0(long j) {
        Object n6;
        Object o6;
        w1 w1Var = this.Y0.f3454c;
        synchronized (w1Var) {
            n6 = w1Var.n(j, true);
        }
        Format format = (Format) n6;
        if (format == null && this.f3456a1 && this.f3463i0 != null) {
            w1 w1Var2 = this.Y0.f3454c;
            synchronized (w1Var2) {
                o6 = w1Var2.f5867i == 0 ? null : w1Var2.o();
            }
            format = (Format) o6;
        }
        if (format != null) {
            this.Y = format;
        } else if (!this.f3464j0 || this.Y == null) {
            return;
        }
        W(this.Y, this.f3463i0);
        this.f3464j0 = false;
        this.f3456a1 = false;
    }

    /* JADX WARN: Code restructure failed: missing block: B:13:0x002c, code lost:
    
        if (r2 >= r7) goto L14;
     */
    @Override // hc.e
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void s(Format[] formatArr, long j, long j5) {
        if (this.Y0.f3453b == -9223372036854775807L) {
            k0(new r(-9223372036854775807L, j5));
            return;
        }
        ArrayDeque arrayDeque = this.V;
        if (arrayDeque.isEmpty()) {
            long j7 = this.Q0;
            if (j7 != -9223372036854775807L) {
                long j10 = this.Z0;
                if (j10 != -9223372036854775807L) {
                }
            }
            k0(new r(-9223372036854775807L, j5));
            if (this.Y0.f3453b != -9223372036854775807L) {
                Z();
                return;
            }
            return;
        }
        arrayDeque.add(new r(this.Q0, j5));
    }

    /* JADX WARN: Removed duplicated region for block: B:42:0x006b A[LOOP:1: B:33:0x004b->B:42:0x006b, LOOP_END] */
    /* JADX WARN: Removed duplicated region for block: B:43:0x006c A[EDGE_INSN: B:43:0x006c->B:44:? BREAK  A[LOOP:1: B:33:0x004b->B:42:0x006b], SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:54:0x0087 A[LOOP:2: B:45:0x006c->B:54:0x0087, LOOP_END] */
    /* JADX WARN: Removed duplicated region for block: B:55:0x0088 A[EDGE_INSN: B:55:0x0088->B:56:0x0088 BREAK  A[LOOP:2: B:45:0x006c->B:54:0x0087], SYNTHETIC] */
    @Override // hc.e
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public void u(long j, long j5) {
        boolean z5;
        boolean z6;
        boolean z7 = false;
        if (this.V0) {
            this.V0 = false;
            c0();
        }
        com.google.android.exoplayer2.c cVar = this.W0;
        if (cVar != null) {
            this.W0 = null;
            throw cVar;
        }
        try {
            if (this.T0) {
                g0();
                return;
            }
            if (this.X != null || e0(2)) {
                Q();
                if (this.G0) {
                    ke.b.c("bypassRender");
                    while (A(j, j5)) {
                    }
                    ke.b.t();
                } else if (this.f3462g0 != null) {
                    long elapsedRealtime = SystemClock.elapsedRealtime();
                    ke.b.c("drainAndFeed");
                    while (F(j, j5)) {
                        long j7 = this.f3459d0;
                        if (j7 != -9223372036854775807L && SystemClock.elapsedRealtime() - elapsedRealtime >= j7) {
                            z6 = false;
                            if (z6) {
                                break;
                            }
                        }
                        z6 = true;
                        if (z6) {
                        }
                    }
                    while (G()) {
                        long j10 = this.f3459d0;
                        if (j10 != -9223372036854775807L && SystemClock.elapsedRealtime() - elapsedRealtime >= j10) {
                            z5 = false;
                            if (z5) {
                                break;
                            }
                        }
                        z5 = true;
                        if (z5) {
                        }
                    }
                    ke.b.t();
                } else {
                    DecoderCounters decoderCounters = this.X0;
                    int i5 = decoderCounters.f5380d;
                    q0 q0Var = this.E;
                    q0Var.getClass();
                    decoderCounters.f5380d = i5 + q0Var.c(j - this.G);
                    e0(1);
                }
                synchronized (this.X0) {
                }
            }
        } catch (IllegalStateException e9) {
            int i6 = d0.a;
            if (i6 < 21 || !(e9 instanceof MediaCodec.CodecException)) {
                StackTraceElement[] stackTrace = e9.getStackTrace();
                if (stackTrace.length <= 0 || !stackTrace[0].getClassName().equals("android.media.MediaCodec")) {
                    throw e9;
                }
            }
            S(e9);
            if (i6 >= 21) {
                if (e9 instanceof MediaCodec.CodecException ? ((MediaCodec.CodecException) e9).isRecoverable() : false) {
                    z7 = true;
                }
            }
            if (z7) {
                f0();
            }
            throw f(C(e9, this.f3468n0), this.X, z7, 4003);
        }
    }

    @Override // hc.e
    public void x(float f2, float f10) {
        this.f3460e0 = f2;
        this.f3461f0 = f10;
        o0(this.h0);
    }

    @Override // hc.e
    public final int y(Format format) {
        try {
            return n0(this.M, format);
        } catch (w e9) {
            throw f(e9, format, false, 4002);
        }
    }

    @Override // hc.e
    public final int z() {
        return 8;
    }

    public void X() {
    }

    public void g0() {
    }

    public void O(mc.f fVar) {
    }

    public void b0(Format format) {
    }
}
