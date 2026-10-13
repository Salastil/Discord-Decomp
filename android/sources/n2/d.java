package n2;

import android.util.Log;
import java.io.IOException;
import java.io.InputStream;
import java.io.Serializable;
import java.nio.ByteBuffer;
import java.nio.ByteOrder;

/* loaded from: classes.dex */
public final class d {
    public final int a;

    /* renamed from: b, reason: collision with root package name */
    public final int f14740b;

    /* renamed from: c, reason: collision with root package name */
    public final long f14741c;

    /* renamed from: d, reason: collision with root package name */
    public final byte[] f14742d;

    public d(byte[] bArr, int i5, int i6) {
        this(-1L, bArr, i5, i6);
    }

    public static d a(String str) {
        if (str.length() == 1 && str.charAt(0) >= '0' && str.charAt(0) <= '1') {
            return new d(new byte[]{(byte) (str.charAt(0) - '0')}, 1, 1);
        }
        byte[] bytes = str.getBytes(h.f14749d0);
        return new d(bytes, 1, bytes.length);
    }

    public static d b(String str) {
        byte[] bytes = str.concat("\u0000").getBytes(h.f14749d0);
        return new d(bytes, 2, bytes.length);
    }

    public static d c(long j, ByteOrder byteOrder) {
        return d(new long[]{j}, byteOrder);
    }

    public static d d(long[] jArr, ByteOrder byteOrder) {
        ByteBuffer wrap = ByteBuffer.wrap(new byte[h.U[4] * jArr.length]);
        wrap.order(byteOrder);
        for (long j : jArr) {
            wrap.putInt((int) j);
        }
        return new d(wrap.array(), 4, jArr.length);
    }

    public static d e(f[] fVarArr, ByteOrder byteOrder) {
        ByteBuffer wrap = ByteBuffer.wrap(new byte[h.U[5] * fVarArr.length]);
        wrap.order(byteOrder);
        for (f fVar : fVarArr) {
            wrap.putInt((int) fVar.a);
            wrap.putInt((int) fVar.f14746b);
        }
        return new d(wrap.array(), 5, fVarArr.length);
    }

    public static d f(int i5, ByteOrder byteOrder) {
        return g(new int[]{i5}, byteOrder);
    }

    public static d g(int[] iArr, ByteOrder byteOrder) {
        ByteBuffer wrap = ByteBuffer.wrap(new byte[h.U[3] * iArr.length]);
        wrap.order(byteOrder);
        for (int i5 : iArr) {
            wrap.putShort((short) i5);
        }
        return new d(wrap.array(), 3, iArr.length);
    }

    public final double h(ByteOrder byteOrder) {
        Object k = k(byteOrder);
        if (k == null) {
            throw new NumberFormatException("NULL can't be converted to a double value");
        }
        if (k instanceof String) {
            return Double.parseDouble((String) k);
        }
        if (k instanceof long[]) {
            if (((long[]) k).length == 1) {
                return r5[0];
            }
            throw new NumberFormatException("There are more than one component");
        }
        if (k instanceof int[]) {
            if (((int[]) k).length == 1) {
                return r5[0];
            }
            throw new NumberFormatException("There are more than one component");
        }
        if (k instanceof double[]) {
            double[] dArr = (double[]) k;
            if (dArr.length == 1) {
                return dArr[0];
            }
            throw new NumberFormatException("There are more than one component");
        }
        if (!(k instanceof f[])) {
            throw new NumberFormatException("Couldn't find a double value");
        }
        f[] fVarArr = (f[]) k;
        if (fVarArr.length != 1) {
            throw new NumberFormatException("There are more than one component");
        }
        f fVar = fVarArr[0];
        return fVar.a / fVar.f14746b;
    }

    public final int i(ByteOrder byteOrder) {
        Object k = k(byteOrder);
        if (k == null) {
            throw new NumberFormatException("NULL can't be converted to a integer value");
        }
        if (k instanceof String) {
            return Integer.parseInt((String) k);
        }
        if (k instanceof long[]) {
            long[] jArr = (long[]) k;
            if (jArr.length == 1) {
                return (int) jArr[0];
            }
            throw new NumberFormatException("There are more than one component");
        }
        if (!(k instanceof int[])) {
            throw new NumberFormatException("Couldn't find a integer value");
        }
        int[] iArr = (int[]) k;
        if (iArr.length == 1) {
            return iArr[0];
        }
        throw new NumberFormatException("There are more than one component");
    }

    public final String j(ByteOrder byteOrder) {
        Object k = k(byteOrder);
        if (k == null) {
            return null;
        }
        if (k instanceof String) {
            return (String) k;
        }
        StringBuilder sb2 = new StringBuilder();
        int i5 = 0;
        if (k instanceof long[]) {
            long[] jArr = (long[]) k;
            while (i5 < jArr.length) {
                sb2.append(jArr[i5]);
                i5++;
                if (i5 != jArr.length) {
                    sb2.append(",");
                }
            }
            return sb2.toString();
        }
        if (k instanceof int[]) {
            int[] iArr = (int[]) k;
            while (i5 < iArr.length) {
                sb2.append(iArr[i5]);
                i5++;
                if (i5 != iArr.length) {
                    sb2.append(",");
                }
            }
            return sb2.toString();
        }
        if (k instanceof double[]) {
            double[] dArr = (double[]) k;
            while (i5 < dArr.length) {
                sb2.append(dArr[i5]);
                i5++;
                if (i5 != dArr.length) {
                    sb2.append(",");
                }
            }
            return sb2.toString();
        }
        if (!(k instanceof f[])) {
            return null;
        }
        f[] fVarArr = (f[]) k;
        while (i5 < fVarArr.length) {
            sb2.append(fVarArr[i5].a);
            sb2.append('/');
            sb2.append(fVarArr[i5].f14746b);
            i5++;
            if (i5 != fVarArr.length) {
                sb2.append(",");
            }
        }
        return sb2.toString();
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Not initialized variable reg: 4, insn: 0x0032: MOVE (r3 I:??[OBJECT, ARRAY]) = (r4 I:??[OBJECT, ARRAY]) (LINE:51), block:B:100:0x0032 */
    /* JADX WARN: Removed duplicated region for block: B:103:0x012e A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /* JADX WARN: Type inference failed for: r14v11, types: [java.lang.String] */
    /* JADX WARN: Type inference failed for: r14v19, types: [java.lang.String] */
    /* JADX WARN: Type inference failed for: r14v23, types: [int[]] */
    /* JADX WARN: Type inference failed for: r14v24, types: [long[]] */
    /* JADX WARN: Type inference failed for: r14v25, types: [n2.f[]] */
    /* JADX WARN: Type inference failed for: r14v26, types: [int[]] */
    /* JADX WARN: Type inference failed for: r14v27, types: [int[]] */
    /* JADX WARN: Type inference failed for: r14v28, types: [n2.f[]] */
    /* JADX WARN: Type inference failed for: r14v29, types: [double[]] */
    /* JADX WARN: Type inference failed for: r14v30, types: [java.io.Serializable] */
    /* JADX WARN: Type inference failed for: r14v31, types: [double[]] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final Serializable k(ByteOrder byteOrder) {
        b bVar;
        InputStream inputStream;
        ?? str;
        byte b10;
        byte[] bArr = this.f14742d;
        InputStream inputStream2 = null;
        try {
            try {
                bVar = new b(bArr);
                try {
                    bVar.f14735i = byteOrder;
                    int i5 = this.a;
                    int i6 = 0;
                    int i10 = this.f14740b;
                    switch (i5) {
                        case 1:
                        case 6:
                            if (bArr.length == 1 && (b10 = bArr[0]) >= 0 && b10 <= 1) {
                                String str2 = new String(new char[]{(char) (b10 + 48)});
                                try {
                                    bVar.close();
                                    return str2;
                                } catch (IOException e9) {
                                    Log.e("ExifInterface", "IOException occurred while closing InputStream", e9);
                                    return str2;
                                }
                            }
                            str = new String(bArr, h.f14749d0);
                            break;
                            break;
                        case 2:
                        case 7:
                            if (i10 >= h.V.length) {
                                int i11 = 0;
                                while (true) {
                                    byte[] bArr2 = h.V;
                                    if (i11 >= bArr2.length) {
                                        i6 = bArr2.length;
                                    } else if (bArr[i11] == bArr2[i11]) {
                                        i11++;
                                    }
                                }
                            }
                            StringBuilder sb2 = new StringBuilder();
                            while (i6 < i10) {
                                byte b11 = bArr[i6];
                                if (b11 == 0) {
                                    str = sb2.toString();
                                    break;
                                } else {
                                    if (b11 >= 32) {
                                        sb2.append((char) b11);
                                    } else {
                                        sb2.append('?');
                                    }
                                    i6++;
                                }
                            }
                            str = sb2.toString();
                        case 3:
                            str = new int[i10];
                            while (i6 < i10) {
                                str[i6] = bVar.readUnsignedShort();
                                i6++;
                            }
                        case 4:
                            str = new long[i10];
                            while (i6 < i10) {
                                str[i6] = bVar.readInt() & 4294967295L;
                                i6++;
                            }
                        case 5:
                            str = new f[i10];
                            while (i6 < i10) {
                                str[i6] = new f(bVar.readInt() & 4294967295L, bVar.readInt() & 4294967295L);
                                i6++;
                            }
                        case 8:
                            str = new int[i10];
                            while (i6 < i10) {
                                str[i6] = bVar.readShort();
                                i6++;
                            }
                        case 9:
                            str = new int[i10];
                            while (i6 < i10) {
                                str[i6] = bVar.readInt();
                                i6++;
                            }
                        case 10:
                            str = new f[i10];
                            while (i6 < i10) {
                                str[i6] = new f(bVar.readInt(), bVar.readInt());
                                i6++;
                            }
                        case 11:
                            str = new double[i10];
                            while (i6 < i10) {
                                str[i6] = bVar.readFloat();
                                i6++;
                            }
                        case 12:
                            str = new double[i10];
                            while (i6 < i10) {
                                str[i6] = bVar.readDouble();
                                i6++;
                            }
                        default:
                            try {
                                bVar.close();
                                return null;
                            } catch (IOException e10) {
                                Log.e("ExifInterface", "IOException occurred while closing InputStream", e10);
                                return null;
                            }
                    }
                    try {
                        bVar.close();
                        return str;
                    } catch (IOException e11) {
                        Log.e("ExifInterface", "IOException occurred while closing InputStream", e11);
                        return str;
                    }
                } catch (IOException e12) {
                    e = e12;
                    Log.w("ExifInterface", "IOException occurred during reading a value", e);
                    if (bVar != null) {
                        try {
                            bVar.close();
                        } catch (IOException e13) {
                            Log.e("ExifInterface", "IOException occurred while closing InputStream", e13);
                        }
                    }
                    return null;
                }
            } catch (Throwable th2) {
                th = th2;
                inputStream2 = inputStream;
                if (inputStream2 != null) {
                    try {
                        inputStream2.close();
                    } catch (IOException e14) {
                        Log.e("ExifInterface", "IOException occurred while closing InputStream", e14);
                    }
                }
                throw th;
            }
        } catch (IOException e15) {
            e = e15;
            bVar = null;
        } catch (Throwable th3) {
            th = th3;
            if (inputStream2 != null) {
            }
            throw th;
        }
    }

    public final String toString() {
        StringBuilder sb2 = new StringBuilder("(");
        sb2.append(h.T[this.a]);
        sb2.append(", data length:");
        return k0.d.m(sb2, this.f14742d.length, ")");
    }

    public d(long j, byte[] bArr, int i5, int i6) {
        this.a = i5;
        this.f14740b = i6;
        this.f14741c = j;
        this.f14742d = bArr;
    }
}
