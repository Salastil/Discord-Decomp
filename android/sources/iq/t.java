package iq;

import java.io.OutputStream;
import java.util.Iterator;

/* loaded from: classes3.dex */
public class t extends d {

    /* renamed from: e, reason: collision with root package name */
    public final byte[] f12239e;

    /* renamed from: i, reason: collision with root package name */
    public int f12240i = 0;

    public t(byte[] bArr) {
        this.f12239e = bArr;
    }

    @Override // iq.d
    public void e(int i5, int i6, int i10, byte[] bArr) {
        System.arraycopy(this.f12239e, i5, bArr, i6, i10);
    }

    public final boolean equals(Object obj) {
        if (obj == this) {
            return true;
        }
        if (!(obj instanceof d) || size() != ((d) obj).size()) {
            return false;
        }
        if (size() == 0) {
            return true;
        }
        if (obj instanceof t) {
            return w((t) obj, 0, size());
        }
        if (obj instanceof x) {
            return obj.equals(this);
        }
        String valueOf = String.valueOf(obj.getClass());
        throw new IllegalArgumentException(com.discord.chat.bridge.botuikit.a.j(new StringBuilder(valueOf.length() + 49), "Has a new type of ByteString been created? Found ", valueOf));
    }

    @Override // iq.d
    public final int h() {
        return 0;
    }

    public final int hashCode() {
        int i5 = this.f12240i;
        if (i5 == 0) {
            int size = size();
            i5 = m(size, 0, size);
            if (i5 == 0) {
                i5 = 1;
            }
            this.f12240i = i5;
        }
        return i5;
    }

    @Override // iq.d
    public final boolean i() {
        return true;
    }

    @Override // java.lang.Iterable
    public Iterator iterator() {
        return new androidx.datastore.preferences.protobuf.d(this);
    }

    @Override // iq.d
    public final boolean j() {
        byte[] bArr = this.f12239e;
        return a0.c(bArr, 0, bArr.length) == 0;
    }

    @Override // iq.d
    public final int m(int i5, int i6, int i10) {
        for (int i11 = i6; i11 < i6 + i10; i11++) {
            i5 = (i5 * 31) + this.f12239e[i11];
        }
        return i5;
    }

    /* JADX WARN: Code restructure failed: missing block: B:11:0x0018, code lost:
    
        if (r0[r9] > (-65)) goto L59;
     */
    /* JADX WARN: Code restructure failed: missing block: B:12:0x001c, code lost:
    
        r9 = r8;
     */
    /* JADX WARN: Code restructure failed: missing block: B:31:0x0049, code lost:
    
        if (r0[r9] > (-65)) goto L59;
     */
    /* JADX WARN: Code restructure failed: missing block: B:55:0x0092, code lost:
    
        if (r0[r8] > (-65)) goto L59;
     */
    @Override // iq.d
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final int n(int i5, int i6, int i10) {
        byte b10;
        int i11;
        int i12;
        int i13 = i10 + i6;
        byte[] bArr = this.f12239e;
        if (i5 != 0) {
            if (i6 >= i13) {
                return i5;
            }
            byte b11 = (byte) i5;
            if (b11 < -32) {
                if (b11 >= -62) {
                    i12 = i6 + 1;
                }
                return -1;
            }
            if (b11 < -16) {
                byte b12 = (byte) (~(i5 >> 8));
                if (b12 == 0) {
                    int i14 = i6 + 1;
                    byte b13 = bArr[i6];
                    if (i14 >= i13) {
                        return a0.a(b11, b13);
                    }
                    i6 = i14;
                    b12 = b13;
                }
                if (b12 <= -65 && ((b11 != -32 || b12 >= -96) && (b11 != -19 || b12 < -96))) {
                    i12 = i6 + 1;
                }
            } else {
                byte b14 = (byte) (~(i5 >> 8));
                if (b14 == 0) {
                    i11 = i6 + 1;
                    b14 = bArr[i6];
                    if (i11 >= i13) {
                        return a0.a(b11, b14);
                    }
                    b10 = 0;
                } else {
                    b10 = (byte) (i5 >> 16);
                    i11 = i6;
                }
                if (b10 == 0) {
                    int i15 = i11 + 1;
                    byte b15 = bArr[i11];
                    if (i15 >= i13) {
                        if (b11 > -12 || b14 > -65 || b15 > -65) {
                            return -1;
                        }
                        return (b15 << 16) ^ ((b14 << 8) ^ b11);
                    }
                    b10 = b15;
                    i11 = i15;
                }
                if (b14 <= -65) {
                    if ((((b14 + 112) + (b11 << 28)) >> 30) == 0 && b10 <= -65) {
                        i6 = i11 + 1;
                    }
                }
            }
            return -1;
        }
        return a0.c(bArr, i6, i13);
    }

    @Override // iq.d
    public final int p() {
        return this.f12240i;
    }

    @Override // iq.d
    public final String s() {
        byte[] bArr = this.f12239e;
        return new String(bArr, 0, bArr.length, "UTF-8");
    }

    @Override // iq.d
    public int size() {
        return this.f12239e.length;
    }

    @Override // iq.d
    public final void v(OutputStream outputStream, int i5, int i6) {
        outputStream.write(this.f12239e, i5, i6);
    }

    public final boolean w(t tVar, int i5, int i6) {
        byte[] bArr = tVar.f12239e;
        int length = bArr.length;
        byte[] bArr2 = this.f12239e;
        if (i6 > length) {
            int length2 = bArr2.length;
            StringBuilder sb2 = new StringBuilder(40);
            sb2.append("Length too large: ");
            sb2.append(i6);
            sb2.append(length2);
            throw new IllegalArgumentException(sb2.toString());
        }
        if (i5 + i6 <= bArr.length) {
            int i10 = 0;
            while (i10 < i6) {
                if (bArr2[i10] != bArr[i5]) {
                    return false;
                }
                i10++;
                i5++;
            }
            return true;
        }
        int length3 = tVar.f12239e.length;
        StringBuilder sb3 = new StringBuilder(59);
        sb3.append("Ran off end of other: ");
        sb3.append(i5);
        sb3.append(", ");
        sb3.append(i6);
        sb3.append(", ");
        sb3.append(length3);
        throw new IllegalArgumentException(sb3.toString());
    }
}
