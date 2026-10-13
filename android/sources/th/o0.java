package th;

import java.io.File;
import java.io.FileOutputStream;
import java.io.OutputStream;

/* loaded from: classes3.dex */
public final class o0 extends OutputStream {

    /* renamed from: d, reason: collision with root package name */
    public final z0 f18538d = new z0();

    /* renamed from: e, reason: collision with root package name */
    public final File f18539e;

    /* renamed from: i, reason: collision with root package name */
    public final n1 f18540i;

    /* renamed from: v, reason: collision with root package name */
    public long f18541v;

    /* renamed from: w, reason: collision with root package name */
    public long f18542w;

    /* renamed from: x, reason: collision with root package name */
    public FileOutputStream f18543x;

    /* renamed from: y, reason: collision with root package name */
    public z f18544y;

    public o0(File file, n1 n1Var) {
        this.f18539e = file;
        this.f18540i = n1Var;
    }

    @Override // java.io.OutputStream
    public final void write(int i5) {
        write(new byte[]{(byte) i5}, 0, 1);
    }

    @Override // java.io.OutputStream
    public final void write(byte[] bArr) {
        write(bArr, 0, bArr.length);
    }

    @Override // java.io.OutputStream
    public final void write(byte[] bArr, int i5, int i6) {
        int i10;
        int i11;
        int i12 = i5;
        int i13 = i6;
        while (i13 > 0) {
            if (this.f18541v == 0 && this.f18542w == 0) {
                z0 z0Var = this.f18538d;
                int a = z0Var.a(bArr, i12, i13);
                if (a == -1) {
                    return;
                }
                i12 += a;
                i13 -= a;
                z b10 = z0Var.b();
                this.f18544y = b10;
                boolean z5 = b10.f18633e;
                n1 n1Var = this.f18540i;
                if (z5) {
                    this.f18541v = 0L;
                    byte[] bArr2 = b10.f18634f;
                    n1Var.k(bArr2, bArr2.length);
                    this.f18542w = this.f18544y.f18634f.length;
                } else {
                    if (b10.f18631c == 0) {
                        String str = b10.a;
                        if (!(str == null ? false : str.endsWith("/"))) {
                            n1Var.i(this.f18544y.f18634f);
                            File file = new File(this.f18539e, this.f18544y.a);
                            file.getParentFile().mkdirs();
                            this.f18541v = this.f18544y.f18630b;
                            this.f18543x = new FileOutputStream(file);
                        }
                    }
                    byte[] bArr3 = this.f18544y.f18634f;
                    n1Var.k(bArr3, bArr3.length);
                    this.f18541v = this.f18544y.f18630b;
                }
            }
            int i14 = i13;
            String str2 = this.f18544y.a;
            if (str2 == null ? false : str2.endsWith("/")) {
                i13 = i14;
            } else {
                long j = i14;
                z zVar = this.f18544y;
                if (zVar.f18633e) {
                    i10 = i12;
                    this.f18540i.d(this.f18542w, bArr, i10, i14);
                    i11 = i14;
                    this.f18542w += j;
                } else {
                    i10 = i12;
                    i11 = i14;
                    if (zVar.f18631c == 0) {
                        i14 = (int) Math.min(j, this.f18541v);
                        this.f18543x.write(bArr, i10, i14);
                        long j5 = this.f18541v - i14;
                        this.f18541v = j5;
                        if (j5 == 0) {
                            this.f18543x.close();
                        }
                    } else {
                        i14 = (int) Math.min(j, this.f18541v);
                        this.f18540i.d((r0.f18634f.length + this.f18544y.f18630b) - this.f18541v, bArr, i10, i14);
                        this.f18541v -= i14;
                    }
                }
                i12 = i10 + i14;
                i13 = i11 - i14;
            }
        }
    }
}
