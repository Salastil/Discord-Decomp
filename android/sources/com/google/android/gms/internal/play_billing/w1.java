package com.google.android.gms.internal.play_billing;

import android.graphics.Bitmap;
import android.util.SparseArray;
import com.facebook.imageutils.BitmapUtil;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import java.io.OutputStream;
import java.util.Arrays;
import java.util.HashSet;
import java.util.LinkedList;
import java.util.Locale;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.LongCompanionObject;

/* loaded from: classes3.dex */
public final class w1 implements qa.e {

    /* renamed from: d, reason: collision with root package name */
    public Object f5865d;

    /* renamed from: e, reason: collision with root package name */
    public int f5866e;

    /* renamed from: i, reason: collision with root package name */
    public int f5867i;

    /* renamed from: v, reason: collision with root package name */
    public Object f5868v;

    public w1(byte[] bArr, int i5) {
        int length = bArr.length;
        if (((length - i5) | i5) < 0) {
            Locale locale = Locale.US;
            throw new IllegalArgumentException(a3.e.f(length, i5, "Array range is invalid. Buffer.length=", ", offset=0, length="));
        }
        this.f5865d = bArr;
        this.f5867i = 0;
        this.f5866e = i5;
    }

    public static int S(int i5) {
        return (352 - (Integer.numberOfLeadingZeros(i5) * 9)) >>> 6;
    }

    public static int T(long j) {
        return (640 - (Long.numberOfLeadingZeros(j) * 9)) >>> 6;
    }

    public static int c(int i5, int i6) {
        return e(i6) + j(i5);
    }

    public static int d(int i5, int i6) {
        return e(i6) + j(i5);
    }

    public static int e(int i5) {
        if (i5 >= 0) {
            return h(i5);
        }
        return 10;
    }

    public static int f(int i5, iq.a aVar) {
        return g(aVar) + j(i5);
    }

    public static int g(iq.a aVar) {
        int c6 = aVar.c();
        return h(c6) + c6;
    }

    public static int h(int i5) {
        if ((i5 & (-128)) == 0) {
            return 1;
        }
        if ((i5 & (-16384)) == 0) {
            return 2;
        }
        if (((-2097152) & i5) == 0) {
            return 3;
        }
        return (i5 & (-268435456)) == 0 ? 4 : 5;
    }

    public static int i(long j) {
        if (((-128) & j) == 0) {
            return 1;
        }
        if (((-16384) & j) == 0) {
            return 2;
        }
        if (((-2097152) & j) == 0) {
            return 3;
        }
        if (((-268435456) & j) == 0) {
            return 4;
        }
        if (((-34359738368L) & j) == 0) {
            return 5;
        }
        if (((-4398046511104L) & j) == 0) {
            return 6;
        }
        if (((-562949953421312L) & j) == 0) {
            return 7;
        }
        if (((-72057594037927936L) & j) == 0) {
            return 8;
        }
        return (j & Long.MIN_VALUE) == 0 ? 9 : 10;
    }

    public static int j(int i5) {
        return h(i5 << 3);
    }

    public static w1 m(OutputStream outputStream, int i5) {
        byte[] bArr = new byte[i5];
        w1 w1Var = new w1();
        w1Var.f5868v = outputStream;
        w1Var.f5865d = bArr;
        w1Var.f5867i = 0;
        w1Var.f5866e = bArr.length;
        return w1Var;
    }

    public void A(int i5) {
        while ((i5 & (-128)) != 0) {
            v((i5 & 127) | IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT);
            i5 >>>= 7;
        }
        v(i5);
    }

    public void B(long j) {
        while (((-128) & j) != 0) {
            v((((int) j) & 127) | IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT);
            j >>>= 7;
        }
        v((int) j);
    }

    public void C(int i5, int i6) {
        A((i5 << 3) | i6);
    }

    public void D() {
        int i5 = this.f5866e;
        int i6 = this.f5867i;
        if (i5 - i6 > 0) {
            throw new IllegalStateException("Did not write as much data as expected.");
        }
        if (i5 - i6 < 0) {
            throw new IllegalStateException("Wrote more data than expected.");
        }
    }

    public void E(byte b10) {
        IndexOutOfBoundsException indexOutOfBoundsException;
        int i5 = this.f5867i;
        try {
            int i6 = i5 + 1;
            try {
                ((byte[]) this.f5865d)[i5] = b10;
                this.f5867i = i6;
            } catch (IndexOutOfBoundsException e9) {
                indexOutOfBoundsException = e9;
                i5 = i6;
                throw new bg.y0(i5, this.f5866e, 1, indexOutOfBoundsException);
            }
        } catch (IndexOutOfBoundsException e10) {
            indexOutOfBoundsException = e10;
        }
    }

    public void F(byte[] bArr, int i5, int i6) {
        try {
            System.arraycopy(bArr, i5, (byte[]) this.f5865d, this.f5867i, i6);
            this.f5867i += i6;
        } catch (IndexOutOfBoundsException e9) {
            throw new bg.y0(this.f5867i, this.f5866e, i6, e9);
        }
    }

    public void G(int i5, int i6) {
        P((i5 << 3) | 5);
        H(i6);
    }

    public void H(int i5) {
        int i6 = this.f5867i;
        try {
            byte[] bArr = (byte[]) this.f5865d;
            bArr[i6] = (byte) i5;
            bArr[i6 + 1] = (byte) (i5 >> 8);
            bArr[i6 + 2] = (byte) (i5 >> 16);
            bArr[i6 + 3] = (byte) (i5 >> 24);
            this.f5867i = i6 + 4;
        } catch (IndexOutOfBoundsException e9) {
            throw new bg.y0(i6, this.f5866e, 4, e9);
        }
    }

    public void I(int i5, long j) {
        P((i5 << 3) | 1);
        J(j);
    }

    public void J(long j) {
        int i5 = this.f5867i;
        try {
            byte[] bArr = (byte[]) this.f5865d;
            bArr[i5] = (byte) j;
            bArr[i5 + 1] = (byte) (j >> 8);
            bArr[i5 + 2] = (byte) (j >> 16);
            bArr[i5 + 3] = (byte) (j >> 24);
            bArr[i5 + 4] = (byte) (j >> 32);
            bArr[i5 + 5] = (byte) (j >> 40);
            bArr[i5 + 6] = (byte) (j >> 48);
            bArr[i5 + 7] = (byte) (j >> 56);
            this.f5867i = i5 + 8;
        } catch (IndexOutOfBoundsException e9) {
            throw new bg.y0(i5, this.f5866e, 8, e9);
        }
    }

    public void K(int i5, int i6) {
        P(i5 << 3);
        L(i6);
    }

    public void L(int i5) {
        IndexOutOfBoundsException indexOutOfBoundsException;
        byte[] bArr;
        int i6;
        int i10;
        int i11;
        if (i5 >= 0) {
            P(i5);
            return;
        }
        int i12 = this.f5867i;
        try {
            bArr = (byte[]) this.f5865d;
            long j = i5;
            i6 = i12 + 1;
            try {
                bArr[i12] = (byte) (((int) j) | IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT);
                int i13 = i12 + 2;
                try {
                    bArr[i6] = (byte) (((int) (j >>> 7)) | IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT);
                    int i14 = i12 + 3;
                    bArr[i13] = (byte) (((int) (j >>> 14)) | IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT);
                    i13 = i12 + 4;
                    bArr[i14] = (byte) (((int) (j >>> 21)) | IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT);
                    i10 = i12 + 5;
                    bArr[i13] = (byte) (((int) (j >>> 28)) | IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT);
                    i11 = i12 + 6;
                } catch (IndexOutOfBoundsException e9) {
                    indexOutOfBoundsException = e9;
                    i12 = i13;
                }
            } catch (IndexOutOfBoundsException e10) {
                i12 = i6;
                indexOutOfBoundsException = e10;
            }
        } catch (IndexOutOfBoundsException e11) {
            indexOutOfBoundsException = e11;
        }
        try {
            bArr[i10] = -1;
            int i15 = i12 + 7;
            bArr[i11] = -1;
            i11 = i12 + 8;
            bArr[i15] = -1;
            i6 = i12 + 9;
            bArr[i11] = -1;
            i12 += 10;
            bArr[i6] = 1;
            this.f5867i = i12;
        } catch (IndexOutOfBoundsException e12) {
            indexOutOfBoundsException = e12;
            i12 = i11;
            throw new bg.y0(i12, this.f5866e, 10, indexOutOfBoundsException);
        }
    }

    public void M(String str) {
        byte[] bArr = (byte[]) this.f5865d;
        int i5 = this.f5867i;
        try {
            int S = S(str.length() * 3);
            int S2 = S(str.length());
            if (S2 != S) {
                int i6 = o3.a;
                P(a2.m(str));
                int i10 = this.f5867i;
                this.f5867i = o3.a(str, bArr, i10, bArr.length - i10);
                return;
            }
            int i11 = i5 + S2;
            this.f5867i = i11;
            int a = o3.a(str, bArr, i11, bArr.length - i11);
            this.f5867i = i5;
            P((a - i5) - S2);
            this.f5867i = a;
        } catch (IndexOutOfBoundsException e9) {
            throw new bg.y0("CodedOutputStream was writing to a flat byte array and ran out of space.", e9);
        }
    }

    public void N(int i5, int i6) {
        P((i5 << 3) | i6);
    }

    public void O(int i5, int i6) {
        P(i5 << 3);
        P(i6);
    }

    public void P(int i5) {
        IndexOutOfBoundsException indexOutOfBoundsException;
        byte[] bArr = (byte[]) this.f5865d;
        int i6 = this.f5867i;
        int i10 = i5 & (-128);
        try {
            if (i10 == 0) {
                int i11 = i6 + 1;
                bArr[i6] = (byte) i5;
                this.f5867i = i11;
                return;
            }
            int i12 = i6 + 1;
            bArr[i6] = (byte) (i5 | IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT);
            int i13 = i5 >>> 7;
            try {
                if ((i13 & (-128)) == 0) {
                    int i14 = i6 + 2;
                    bArr[i12] = (byte) i13;
                    this.f5867i = i14;
                    return;
                }
                int i15 = i6 + 2;
                try {
                    bArr[i12] = (byte) (i13 | IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT);
                    int i16 = i5 >>> 14;
                    if ((i16 & (-128)) == 0) {
                        int i17 = i6 + 3;
                        bArr[i15] = (byte) i16;
                        this.f5867i = i17;
                        return;
                    }
                    int i18 = i6 + 3;
                    try {
                        bArr[i15] = (byte) (i16 | IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT);
                        int i19 = i5 >>> 21;
                        if ((i19 & (-128)) == 0) {
                            int i20 = i6 + 4;
                            bArr[i18] = (byte) i19;
                            this.f5867i = i20;
                        } else {
                            i15 = i6 + 4;
                            bArr[i18] = (byte) (i19 | IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT);
                            int i21 = i6 + 5;
                            bArr[i15] = (byte) (i5 >>> 28);
                            this.f5867i = i21;
                        }
                    } catch (IndexOutOfBoundsException e9) {
                        indexOutOfBoundsException = e9;
                        i10 = i18;
                        throw new bg.y0(i10, this.f5866e, 1, indexOutOfBoundsException);
                    }
                } catch (IndexOutOfBoundsException e10) {
                    indexOutOfBoundsException = e10;
                    i10 = i15;
                }
            } catch (IndexOutOfBoundsException e11) {
                i10 = i5;
                indexOutOfBoundsException = e11;
            }
        } catch (IndexOutOfBoundsException e12) {
            indexOutOfBoundsException = e12;
        }
    }

    public void Q(int i5, long j) {
        P(i5 << 3);
        R(j);
    }

    public void R(long j) {
        byte[] bArr = (byte[]) this.f5865d;
        long j5 = j & (-128);
        int i5 = this.f5867i;
        try {
            if (j5 == 0) {
                bArr[i5] = (byte) j;
                this.f5867i = i5 + 1;
                return;
            }
            bArr[i5] = (byte) (((int) j) | IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT);
            int i6 = i5 + 1;
            long j7 = j >>> 7;
            long j10 = j7 & (-128);
            int i10 = (int) j7;
            if (j10 == 0) {
                bArr[i6] = (byte) i10;
                this.f5867i = i5 + 2;
                return;
            }
            bArr[i6] = (byte) (i10 | IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT);
            int i11 = i5 + 2;
            long j11 = j >>> 14;
            long j12 = j11 & (-128);
            int i12 = (int) j11;
            if (j12 == 0) {
                bArr[i11] = (byte) i12;
                this.f5867i = i5 + 3;
                return;
            }
            bArr[i11] = (byte) (i12 | IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT);
            int i13 = i5 + 3;
            long j13 = j >>> 21;
            long j14 = j13 & (-128);
            int i14 = (int) j13;
            if (j14 == 0) {
                bArr[i13] = (byte) i14;
                this.f5867i = i5 + 4;
                return;
            }
            bArr[i13] = (byte) (i14 | IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT);
            int i15 = i5 + 4;
            long j15 = j >>> 28;
            long j16 = j15 & (-128);
            int i16 = (int) j15;
            if (j16 == 0) {
                bArr[i15] = (byte) i16;
                this.f5867i = i5 + 5;
                return;
            }
            bArr[i15] = (byte) (i16 | IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT);
            int i17 = i5 + 5;
            long j17 = j >>> 35;
            long j18 = j17 & (-128);
            int i18 = (int) j17;
            if (j18 == 0) {
                bArr[i17] = (byte) i18;
                this.f5867i = i5 + 6;
                return;
            }
            bArr[i17] = (byte) (i18 | IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT);
            int i19 = i5 + 6;
            long j19 = j >>> 42;
            long j20 = j19 & (-128);
            int i20 = (int) j19;
            if (j20 == 0) {
                bArr[i19] = (byte) i20;
                this.f5867i = i5 + 7;
                return;
            }
            bArr[i19] = (byte) (i20 | IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT);
            int i21 = i5 + 7;
            long j21 = j >>> 49;
            long j22 = j21 & (-128);
            int i22 = (int) j21;
            if (j22 == 0) {
                bArr[i21] = (byte) i22;
                this.f5867i = i5 + 8;
                return;
            }
            bArr[i21] = (byte) (i22 | IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT);
            int i23 = i5 + 8;
            long j23 = j >>> 56;
            int i24 = (int) j23;
            if (((-128) & j23) == 0) {
                bArr[i23] = (byte) i24;
                this.f5867i = i5 + 9;
            } else {
                bArr[i23] = (byte) (i24 | IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT);
                bArr[i5 + 9] = (byte) (j >>> 63);
                this.f5867i = i5 + 10;
            }
        } catch (IndexOutOfBoundsException e9) {
            throw new bg.y0(i5, this.f5866e, 1, e9);
        }
    }

    public synchronized void a(long j, Object obj) {
        if (this.f5867i > 0) {
            if (j <= ((long[]) this.f5868v)[((this.f5866e + r0) - 1) % ((Object[]) this.f5865d).length]) {
                b();
            }
        }
        k();
        int i5 = this.f5866e;
        int i6 = this.f5867i;
        Object[] objArr = (Object[]) this.f5865d;
        int length = (i5 + i6) % objArr.length;
        ((long[]) this.f5868v)[length] = j;
        objArr[length] = obj;
        this.f5867i = i6 + 1;
    }

    public synchronized void b() {
        this.f5866e = 0;
        this.f5867i = 0;
        Arrays.fill((Object[]) this.f5865d, (Object) null);
    }

    @Override // r8.d
    public Object get(int i5) {
        Bitmap bitmap;
        synchronized (this) {
            if (this.f5867i > 0) {
                synchronized (this) {
                    while (this.f5867i > 0 && (bitmap = (Bitmap) ((io.sentry.internal.debugmeta.c) this.f5868v).P()) != null) {
                        ((io.sentry.internal.debugmeta.c) this.f5868v).getClass();
                        Intrinsics.checkNotNullParameter(bitmap, "bitmap");
                        this.f5867i -= BitmapUtil.getSizeInBytes(bitmap);
                        ((qa.x) this.f5865d).getClass();
                    }
                }
            }
            Bitmap bitmap2 = ((io.sentry.internal.debugmeta.c) this.f5868v).H(i5);
            if (bitmap2 == null) {
                ((qa.x) this.f5865d).getClass();
                return Bitmap.createBitmap(1, i5, Bitmap.Config.ALPHA_8);
            }
            ((io.sentry.internal.debugmeta.c) this.f5868v).getClass();
            Intrinsics.checkNotNullParameter(bitmap2, "bitmap");
            this.f5867i -= BitmapUtil.getSizeInBytes(bitmap2);
            ((qa.x) this.f5865d).getClass();
            return bitmap2;
        }
    }

    public void k() {
        int length = ((Object[]) this.f5865d).length;
        if (this.f5867i < length) {
            return;
        }
        int i5 = length * 2;
        long[] jArr = new long[i5];
        Object[] objArr = new Object[i5];
        int i6 = this.f5866e;
        int i10 = length - i6;
        System.arraycopy((long[]) this.f5868v, i6, jArr, 0, i10);
        System.arraycopy((Object[]) this.f5865d, this.f5866e, objArr, 0, i10);
        int i11 = this.f5866e;
        if (i11 > 0) {
            System.arraycopy((long[]) this.f5868v, 0, jArr, i10, i11);
            System.arraycopy((Object[]) this.f5865d, 0, objArr, i10, this.f5866e);
        }
        this.f5868v = jArr;
        this.f5865d = objArr;
        this.f5866e = 0;
    }

    public void l() {
        if (((OutputStream) this.f5868v) != null) {
            p();
        }
    }

    public Object n(long j, boolean z5) {
        Object obj = null;
        long j5 = LongCompanionObject.MAX_VALUE;
        while (this.f5867i > 0) {
            long j7 = j - ((long[]) this.f5868v)[this.f5866e];
            if (j7 < 0 && (z5 || (-j7) >= j5)) {
                break;
            }
            obj = o();
            j5 = j7;
        }
        return obj;
    }

    public Object o() {
        ke.b.k(this.f5867i > 0);
        Object[] objArr = (Object[]) this.f5865d;
        int i5 = this.f5866e;
        Object obj = objArr[i5];
        objArr[i5] = null;
        this.f5866e = (i5 + 1) % objArr.length;
        this.f5867i--;
        return obj;
    }

    public void p() {
        OutputStream outputStream = (OutputStream) this.f5868v;
        if (outputStream == null) {
            throw new bg.y0("CodedOutputStream was writing to a flat byte array and ran out of space.");
        }
        outputStream.write((byte[]) this.f5865d, 0, this.f5867i);
        this.f5867i = 0;
    }

    public void q(int i5, int i6) {
        C(i5, 0);
        s(i6);
    }

    public void r(int i5, int i6) {
        C(i5, 0);
        s(i6);
    }

    @Override // s8.c
    public void release(Object obj) {
        boolean add;
        Bitmap bitmap = (Bitmap) obj;
        ((io.sentry.internal.debugmeta.c) this.f5868v).getClass();
        Intrinsics.checkNotNullParameter(bitmap, "bitmap");
        int sizeInBytes = BitmapUtil.getSizeInBytes(bitmap);
        if (sizeInBytes <= this.f5866e) {
            ((qa.x) this.f5865d).getClass();
            io.sentry.internal.debugmeta.c cVar = (io.sentry.internal.debugmeta.c) this.f5868v;
            cVar.getClass();
            Intrinsics.checkNotNullParameter(bitmap, "bitmap");
            if (io.sentry.internal.debugmeta.c.N(bitmap)) {
                synchronized (cVar) {
                    add = ((HashSet) cVar.f11622e).add(bitmap);
                }
                if (add) {
                    k2.r rVar = (k2.r) cVar.f11623i;
                    Intrinsics.checkNotNullParameter(bitmap, "bitmap");
                    int sizeInBytes2 = BitmapUtil.getSizeInBytes(bitmap);
                    synchronized (rVar) {
                        try {
                            qa.g gVar = (qa.g) ((SparseArray) rVar.f13142e).get(sizeInBytes2);
                            if (gVar == null) {
                                LinkedList linkedList = new LinkedList();
                                gVar = new qa.g();
                                gVar.a = null;
                                gVar.f16705b = sizeInBytes2;
                                gVar.f16706c = linkedList;
                                gVar.f16707d = null;
                                ((SparseArray) rVar.f13142e).put(sizeInBytes2, gVar);
                            }
                            gVar.f16706c.addLast(bitmap);
                            if (((qa.g) rVar.f13143i) != gVar) {
                                rVar.G(gVar);
                                qa.g gVar2 = (qa.g) rVar.f13143i;
                                if (gVar2 == null) {
                                    rVar.f13143i = gVar;
                                    rVar.f13144v = gVar;
                                } else {
                                    gVar.f16707d = gVar2;
                                    gVar2.a = gVar;
                                    rVar.f13143i = gVar;
                                }
                            }
                        } finally {
                        }
                    }
                }
            }
            synchronized (this) {
                this.f5867i += sizeInBytes;
            }
        }
    }

    public void s(int i5) {
        if (i5 >= 0) {
            A(i5);
        } else {
            B(i5);
        }
    }

    public void t(int i5, iq.a aVar) {
        C(i5, 2);
        u(aVar);
    }

    public void u(iq.a aVar) {
        A(aVar.c());
        aVar.f(this);
    }

    public void v(int i5) {
        byte b10 = (byte) i5;
        if (this.f5867i == this.f5866e) {
            p();
        }
        byte[] bArr = (byte[]) this.f5865d;
        int i6 = this.f5867i;
        this.f5867i = i6 + 1;
        bArr[i6] = b10;
    }

    public void w(iq.d dVar) {
        int size = dVar.size();
        byte[] bArr = (byte[]) this.f5865d;
        int i5 = this.f5866e;
        int i6 = this.f5867i;
        int i10 = i5 - i6;
        if (i10 >= size) {
            dVar.d(0, i6, size, bArr);
            this.f5867i += size;
            return;
        }
        dVar.d(0, i6, i10, bArr);
        int i11 = size - i10;
        this.f5867i = i5;
        p();
        if (i11 <= i5) {
            dVar.d(i10, 0, i11, bArr);
            this.f5867i = i11;
            return;
        }
        OutputStream outputStream = (OutputStream) this.f5868v;
        if (i10 < 0) {
            StringBuilder sb2 = new StringBuilder(30);
            sb2.append("Source offset < 0: ");
            sb2.append(i10);
            throw new IndexOutOfBoundsException(sb2.toString());
        }
        if (i11 < 0) {
            StringBuilder sb3 = new StringBuilder(23);
            sb3.append("Length < 0: ");
            sb3.append(i11);
            throw new IndexOutOfBoundsException(sb3.toString());
        }
        int i12 = i10 + i11;
        if (i12 <= dVar.size()) {
            if (i11 > 0) {
                dVar.v(outputStream, i10, i11);
            }
        } else {
            StringBuilder sb4 = new StringBuilder(39);
            sb4.append("Source end offset exceeded: ");
            sb4.append(i12);
            throw new IndexOutOfBoundsException(sb4.toString());
        }
    }

    public void x(byte[] bArr) {
        int length = bArr.length;
        byte[] bArr2 = (byte[]) this.f5865d;
        int i5 = this.f5866e;
        int i6 = this.f5867i;
        int i10 = i5 - i6;
        if (i10 >= length) {
            System.arraycopy(bArr, 0, bArr2, i6, length);
            this.f5867i += length;
            return;
        }
        System.arraycopy(bArr, 0, bArr2, i6, i10);
        int i11 = length - i10;
        this.f5867i = i5;
        p();
        if (i11 > i5) {
            ((OutputStream) this.f5868v).write(bArr, i10, i11);
        } else {
            System.arraycopy(bArr, i10, bArr2, 0, i11);
            this.f5867i = i11;
        }
    }

    public void y(int i5) {
        v(i5 & 255);
        v((i5 >> 8) & 255);
        v((i5 >> 16) & 255);
        v((i5 >> 24) & 255);
    }

    public void z(long j) {
        v(((int) j) & 255);
        v(((int) (j >> 8)) & 255);
        v(((int) (j >> 16)) & 255);
        v(((int) (j >> 24)) & 255);
        v(((int) (j >> 32)) & 255);
        v(((int) (j >> 40)) & 255);
        v(((int) (j >> 48)) & 255);
        v(((int) (j >> 56)) & 255);
    }

    public w1() {
        this.f5868v = new long[10];
        this.f5865d = new Object[10];
    }

    public w1(float[] fArr, float[] fArr2, int i5, int i6) {
        this.f5866e = i5;
        ke.b.g(((long) fArr.length) * 2 == ((long) fArr2.length) * 3);
        this.f5868v = fArr;
        this.f5865d = fArr2;
        this.f5867i = i6;
    }
}
