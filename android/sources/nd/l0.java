package nd;

import android.media.MediaCodec;
import java.nio.ByteBuffer;
import java.util.Arrays;
import kotlin.jvm.internal.ByteCompanionObject;

/* loaded from: classes3.dex */
public final class l0 {
    public final ie.q a;

    /* renamed from: b, reason: collision with root package name */
    public final int f15131b;

    /* renamed from: c, reason: collision with root package name */
    public final ke.w f15132c;

    /* renamed from: d, reason: collision with root package name */
    public k0 f15133d;

    /* renamed from: e, reason: collision with root package name */
    public k0 f15134e;

    /* renamed from: f, reason: collision with root package name */
    public k0 f15135f;

    /* renamed from: g, reason: collision with root package name */
    public long f15136g;

    public l0(ie.q qVar) {
        this.a = qVar;
        int i5 = qVar.f10722b;
        this.f15131b = i5;
        this.f15132c = new ke.w(32);
        k0 k0Var = new k0(0L, i5);
        this.f15133d = k0Var;
        this.f15134e = k0Var;
        this.f15135f = k0Var;
    }

    public static k0 d(k0 k0Var, long j, ByteBuffer byteBuffer, int i5) {
        while (j >= k0Var.f15121e) {
            k0Var = (k0) k0Var.f15123v;
        }
        while (i5 > 0) {
            int min = Math.min(i5, (int) (k0Var.f15121e - j));
            ie.a aVar = (ie.a) k0Var.f15122i;
            byteBuffer.put(aVar.a, ((int) (j - k0Var.f15120d)) + aVar.f10652b, min);
            i5 -= min;
            j += min;
            if (j == k0Var.f15121e) {
                k0Var = (k0) k0Var.f15123v;
            }
        }
        return k0Var;
    }

    public static k0 e(k0 k0Var, long j, byte[] bArr, int i5) {
        while (j >= k0Var.f15121e) {
            k0Var = (k0) k0Var.f15123v;
        }
        int i6 = i5;
        while (i6 > 0) {
            int min = Math.min(i6, (int) (k0Var.f15121e - j));
            ie.a aVar = (ie.a) k0Var.f15122i;
            System.arraycopy(aVar.a, ((int) (j - k0Var.f15120d)) + aVar.f10652b, bArr, i5 - i6, min);
            i6 -= min;
            j += min;
            if (j == k0Var.f15121e) {
                k0Var = (k0) k0Var.f15123v;
            }
        }
        return k0Var;
    }

    public static k0 f(k0 k0Var, mc.f fVar, m0 m0Var, ke.w wVar) {
        if (fVar.c(1073741824)) {
            long j = m0Var.f15140b;
            int i5 = 1;
            wVar.C(1);
            k0 e9 = e(k0Var, j, wVar.a, 1);
            long j5 = j + 1;
            byte b10 = wVar.a[0];
            boolean z5 = (b10 & ByteCompanionObject.MIN_VALUE) != 0;
            int i6 = b10 & ByteCompanionObject.MAX_VALUE;
            mc.c cVar = fVar.f14435i;
            byte[] bArr = cVar.a;
            if (bArr == null) {
                cVar.a = new byte[16];
            } else {
                Arrays.fill(bArr, (byte) 0);
            }
            k0Var = e(e9, j5, cVar.a, i6);
            long j7 = j5 + i6;
            if (z5) {
                wVar.C(2);
                k0Var = e(k0Var, j7, wVar.a, 2);
                j7 += 2;
                i5 = wVar.z();
            }
            int[] iArr = cVar.f14429d;
            if (iArr == null || iArr.length < i5) {
                iArr = new int[i5];
            }
            int[] iArr2 = cVar.f14430e;
            if (iArr2 == null || iArr2.length < i5) {
                iArr2 = new int[i5];
            }
            if (z5) {
                int i10 = i5 * 6;
                wVar.C(i10);
                k0Var = e(k0Var, j7, wVar.a, i10);
                j7 += i10;
                wVar.F(0);
                for (int i11 = 0; i11 < i5; i11++) {
                    iArr[i11] = wVar.z();
                    iArr2[i11] = wVar.x();
                }
            } else {
                iArr[0] = 0;
                iArr2[0] = m0Var.a - ((int) (j7 - m0Var.f15140b));
            }
            qc.u uVar = (qc.u) m0Var.f15141c;
            int i12 = ke.d0.a;
            byte[] bArr2 = uVar.f16800b;
            byte[] bArr3 = cVar.a;
            int i13 = uVar.a;
            int i14 = uVar.f16801c;
            int i15 = uVar.f16802d;
            cVar.f14431f = i5;
            cVar.f14429d = iArr;
            cVar.f14430e = iArr2;
            cVar.f14427b = bArr2;
            cVar.a = bArr3;
            cVar.f14428c = i13;
            cVar.f14432g = i14;
            cVar.f14433h = i15;
            MediaCodec.CryptoInfo cryptoInfo = cVar.f14434i;
            cryptoInfo.numSubSamples = i5;
            cryptoInfo.numBytesOfClearData = iArr;
            cryptoInfo.numBytesOfEncryptedData = iArr2;
            cryptoInfo.key = bArr2;
            cryptoInfo.iv = bArr3;
            cryptoInfo.mode = i13;
            if (ke.d0.a >= 24) {
                e4.c cVar2 = cVar.j;
                cVar2.getClass();
                MediaCodec.CryptoInfo.Pattern pattern = (MediaCodec.CryptoInfo.Pattern) cVar2.f7940i;
                pattern.set(i14, i15);
                ((MediaCodec.CryptoInfo) cVar2.f7939e).setPattern(pattern);
            }
            long j10 = m0Var.f15140b;
            int i16 = (int) (j7 - j10);
            m0Var.f15140b = j10 + i16;
            m0Var.a -= i16;
        }
        if (!fVar.c(268435456)) {
            fVar.h(m0Var.a);
            return d(k0Var, m0Var.f15140b, fVar.f14436v, m0Var.a);
        }
        wVar.C(4);
        k0 e10 = e(k0Var, m0Var.f15140b, wVar.a, 4);
        int x5 = wVar.x();
        m0Var.f15140b += 4;
        m0Var.a -= 4;
        fVar.h(x5);
        k0 d6 = d(e10, m0Var.f15140b, fVar.f14436v, x5);
        m0Var.f15140b += x5;
        int i17 = m0Var.a - x5;
        m0Var.a = i17;
        ByteBuffer byteBuffer = fVar.f14439y;
        if (byteBuffer == null || byteBuffer.capacity() < i17) {
            fVar.f14439y = ByteBuffer.allocate(i17);
        } else {
            fVar.f14439y.clear();
        }
        return d(d6, m0Var.f15140b, fVar.f14439y, m0Var.a);
    }

    public final void a(k0 k0Var) {
        if (((ie.a) k0Var.f15122i) == null) {
            return;
        }
        ie.q qVar = this.a;
        synchronized (qVar) {
            k0 k0Var2 = k0Var;
            while (k0Var2 != null) {
                try {
                    ie.a[] aVarArr = qVar.f10726f;
                    int i5 = qVar.f10725e;
                    qVar.f10725e = i5 + 1;
                    ie.a aVar = (ie.a) k0Var2.f15122i;
                    aVar.getClass();
                    aVarArr[i5] = aVar;
                    qVar.f10724d--;
                    k0Var2 = (k0) k0Var2.f15123v;
                    if (k0Var2 == null || ((ie.a) k0Var2.f15122i) == null) {
                        k0Var2 = null;
                    }
                } catch (Throwable th2) {
                    throw th2;
                }
            }
            qVar.notifyAll();
        }
        k0Var.f15122i = null;
        k0Var.f15123v = null;
    }

    public final void b(long j) {
        k0 k0Var;
        if (j == -1) {
            return;
        }
        while (true) {
            k0Var = this.f15133d;
            if (j < k0Var.f15121e) {
                break;
            }
            ie.q qVar = this.a;
            ie.a aVar = (ie.a) k0Var.f15122i;
            synchronized (qVar) {
                ie.a[] aVarArr = qVar.f10726f;
                int i5 = qVar.f10725e;
                qVar.f10725e = i5 + 1;
                aVarArr[i5] = aVar;
                qVar.f10724d--;
                qVar.notifyAll();
            }
            k0 k0Var2 = this.f15133d;
            k0Var2.f15122i = null;
            k0 k0Var3 = (k0) k0Var2.f15123v;
            k0Var2.f15123v = null;
            this.f15133d = k0Var3;
        }
        if (this.f15134e.f15120d < k0Var.f15120d) {
            this.f15134e = k0Var;
        }
    }

    public final int c(int i5) {
        ie.a aVar;
        k0 k0Var = this.f15135f;
        if (((ie.a) k0Var.f15122i) == null) {
            ie.q qVar = this.a;
            synchronized (qVar) {
                try {
                    int i6 = qVar.f10724d + 1;
                    qVar.f10724d = i6;
                    int i10 = qVar.f10725e;
                    if (i10 > 0) {
                        ie.a[] aVarArr = qVar.f10726f;
                        int i11 = i10 - 1;
                        qVar.f10725e = i11;
                        aVar = aVarArr[i11];
                        aVar.getClass();
                        qVar.f10726f[qVar.f10725e] = null;
                    } else {
                        ie.a aVar2 = new ie.a(new byte[qVar.f10722b], 0);
                        ie.a[] aVarArr2 = qVar.f10726f;
                        if (i6 > aVarArr2.length) {
                            qVar.f10726f = (ie.a[]) Arrays.copyOf(aVarArr2, aVarArr2.length * 2);
                        }
                        aVar = aVar2;
                    }
                } catch (Throwable th2) {
                    throw th2;
                }
            }
            k0 k0Var2 = new k0(this.f15135f.f15121e, this.f15131b);
            k0Var.f15122i = aVar;
            k0Var.f15123v = k0Var2;
        }
        return Math.min(i5, (int) (this.f15135f.f15121e - this.f15136g));
    }
}
