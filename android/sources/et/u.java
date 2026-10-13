package et;

import java.security.MessageDigest;
import java.util.zip.InflaterOutputStream;
import kotlin.jvm.internal.Intrinsics;
import okio.Buffer;
import okio.ByteString;

/* loaded from: classes.dex */
public final class u extends ByteString {

    /* renamed from: w, reason: collision with root package name */
    public final transient byte[][] f8283w;

    /* renamed from: x, reason: collision with root package name */
    public final transient int[] f8284x;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public u(byte[][] segments, int[] directory) {
        super(ByteString.f16115v.f16116d);
        Intrinsics.checkNotNullParameter(segments, "segments");
        Intrinsics.checkNotNullParameter(directory, "directory");
        this.f8283w = segments;
        this.f8284x = directory;
    }

    @Override // okio.ByteString
    public final String a() {
        return new ByteString(j()).a();
    }

    @Override // okio.ByteString
    public final ByteString b(String algorithm) {
        Intrinsics.checkNotNullParameter(algorithm, "algorithm");
        MessageDigest messageDigest = MessageDigest.getInstance(algorithm);
        byte[][] bArr = this.f8283w;
        int length = bArr.length;
        int i5 = 0;
        int i6 = 0;
        while (i5 < length) {
            int[] iArr = this.f8284x;
            int i10 = iArr[length + i5];
            int i11 = iArr[i5];
            messageDigest.update(bArr[i5], i10, i11 - i6);
            i5++;
            i6 = i11;
        }
        byte[] digestBytes = messageDigest.digest();
        Intrinsics.checkNotNullExpressionValue(digestBytes, "digestBytes");
        return new ByteString(digestBytes);
    }

    @Override // okio.ByteString
    public final int c() {
        return this.f8284x[this.f8283w.length - 1];
    }

    @Override // okio.ByteString
    public final String d() {
        return new ByteString(j()).d();
    }

    @Override // okio.ByteString
    public final byte[] e() {
        return j();
    }

    @Override // okio.ByteString
    public final boolean equals(Object obj) {
        if (obj == this) {
            return true;
        }
        if (!(obj instanceof ByteString)) {
            return false;
        }
        ByteString byteString = (ByteString) obj;
        return byteString.c() == c() && h(byteString, c());
    }

    @Override // okio.ByteString
    public final byte f(int i5) {
        byte[][] bArr = this.f8283w;
        int length = bArr.length - 1;
        int[] iArr = this.f8284x;
        y.f(iArr[length], i5, 1L);
        int c6 = ft.b.c(this, i5);
        return bArr[c6][(i5 - (c6 == 0 ? 0 : iArr[c6 - 1])) + iArr[bArr.length + c6]];
    }

    @Override // okio.ByteString
    public final boolean g(int i5, int i6, int i10, byte[] other) {
        Intrinsics.checkNotNullParameter(other, "other");
        if (i5 < 0 || i5 > c() - i10 || i6 < 0 || i6 > other.length - i10) {
            return false;
        }
        int i11 = i10 + i5;
        int c6 = ft.b.c(this, i5);
        while (i5 < i11) {
            int[] iArr = this.f8284x;
            int i12 = c6 == 0 ? 0 : iArr[c6 - 1];
            int i13 = iArr[c6] - i12;
            byte[][] bArr = this.f8283w;
            int i14 = iArr[bArr.length + c6];
            int min = Math.min(i11, i13 + i12) - i5;
            if (!y.a((i5 - i12) + i14, i6, min, bArr[c6], other)) {
                return false;
            }
            i6 += min;
            i5 += min;
            c6++;
        }
        return true;
    }

    @Override // okio.ByteString
    public final boolean h(ByteString other, int i5) {
        Intrinsics.checkNotNullParameter(other, "other");
        if (c() - i5 >= 0) {
            int c6 = ft.b.c(this, 0);
            int i6 = 0;
            int i10 = 0;
            while (i6 < i5) {
                int[] iArr = this.f8284x;
                int i11 = c6 == 0 ? 0 : iArr[c6 - 1];
                int i12 = iArr[c6] - i11;
                byte[][] bArr = this.f8283w;
                int i13 = iArr[bArr.length + c6];
                int min = Math.min(i5, i12 + i11) - i6;
                if (other.g(i10, (i6 - i11) + i13, min, bArr[c6])) {
                    i10 += min;
                    i6 += min;
                    c6++;
                }
            }
            return true;
        }
        return false;
    }

    @Override // okio.ByteString
    public final int hashCode() {
        int i5 = this.f16117e;
        if (i5 != 0) {
            return i5;
        }
        byte[][] bArr = this.f8283w;
        int length = bArr.length;
        int i6 = 0;
        int i10 = 1;
        int i11 = 0;
        while (i6 < length) {
            int[] iArr = this.f8284x;
            int i12 = iArr[length + i6];
            int i13 = iArr[i6];
            byte[] bArr2 = bArr[i6];
            int i14 = (i13 - i11) + i12;
            while (i12 < i14) {
                i10 = (i10 * 31) + bArr2[i12];
                i12++;
            }
            i6++;
            i11 = i13;
        }
        this.f16117e = i10;
        return i10;
    }

    @Override // okio.ByteString
    public final ByteString i() {
        return new ByteString(j()).i();
    }

    @Override // okio.ByteString
    public final byte[] j() {
        byte[] bArr = new byte[c()];
        byte[][] bArr2 = this.f8283w;
        int length = bArr2.length;
        int i5 = 0;
        int i6 = 0;
        int i10 = 0;
        while (i5 < length) {
            int[] iArr = this.f8284x;
            int i11 = iArr[length + i5];
            int i12 = iArr[i5];
            int i13 = i12 - i6;
            kotlin.collections.u.c(i10, i11, i11 + i13, bArr2[i5], bArr);
            i10 += i13;
            i5++;
            i6 = i12;
        }
        return bArr;
    }

    @Override // okio.ByteString
    public final void l(InflaterOutputStream out) {
        Intrinsics.checkNotNullParameter(out, "out");
        byte[][] bArr = this.f8283w;
        int length = bArr.length;
        int i5 = 0;
        int i6 = 0;
        while (i5 < length) {
            int[] iArr = this.f8284x;
            int i10 = iArr[length + i5];
            int i11 = iArr[i5];
            out.write(bArr[i5], i10, i11 - i6);
            i5++;
            i6 = i11;
        }
    }

    @Override // okio.ByteString
    public final void m(Buffer buffer, int i5) {
        Intrinsics.checkNotNullParameter(buffer, "buffer");
        int c6 = ft.b.c(this, 0);
        int i6 = 0;
        while (i6 < i5) {
            int[] iArr = this.f8284x;
            int i10 = c6 == 0 ? 0 : iArr[c6 - 1];
            int i11 = iArr[c6] - i10;
            byte[][] bArr = this.f8283w;
            int i12 = iArr[bArr.length + c6];
            int min = Math.min(i5, i11 + i10) - i6;
            int i13 = (i6 - i10) + i12;
            s sVar = new s(bArr[c6], i13, i13 + min, true, false);
            s sVar2 = buffer.f16113d;
            if (sVar2 == null) {
                sVar.f8280g = sVar;
                sVar.f8279f = sVar;
                buffer.f16113d = sVar;
            } else {
                Intrinsics.checkNotNull(sVar2);
                s sVar3 = sVar2.f8280g;
                Intrinsics.checkNotNull(sVar3);
                sVar3.b(sVar);
            }
            i6 += min;
            c6++;
        }
        buffer.f16114e += i5;
    }

    @Override // okio.ByteString
    public final String toString() {
        return new ByteString(j()).toString();
    }
}
