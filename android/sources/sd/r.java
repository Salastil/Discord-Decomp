package sd;

import com.google.android.exoplayer2.Format;
import hc.f0;
import java.io.EOFException;
import java.util.Arrays;
import ke.d0;

/* loaded from: classes3.dex */
public final class r implements qc.v {

    /* renamed from: f, reason: collision with root package name */
    public static final Format f17907f;

    /* renamed from: g, reason: collision with root package name */
    public static final Format f17908g;
    public final qc.v a;

    /* renamed from: b, reason: collision with root package name */
    public final Format f17909b;

    /* renamed from: c, reason: collision with root package name */
    public Format f17910c;

    /* renamed from: d, reason: collision with root package name */
    public byte[] f17911d;

    /* renamed from: e, reason: collision with root package name */
    public int f17912e;

    static {
        f0 f0Var = new f0();
        f0Var.k = "application/id3";
        f17907f = new Format(f0Var);
        f0 f0Var2 = new f0();
        f0Var2.k = "application/x-emsg";
        f17908g = new Format(f0Var2);
    }

    public r(qc.v vVar, int i5) {
        this.a = vVar;
        if (i5 == 1) {
            this.f17909b = f17907f;
        } else {
            if (i5 != 3) {
                throw new IllegalArgumentException(k0.d.i(i5, "Unknown metadataType: "));
            }
            this.f17909b = f17908g;
        }
        this.f17911d = new byte[0];
        this.f17912e = 0;
    }

    @Override // qc.v
    public final void b(long j, int i5, int i6, int i10, qc.u uVar) {
        this.f17910c.getClass();
        int i11 = this.f17912e - i10;
        ke.w wVar = new ke.w(Arrays.copyOfRange(this.f17911d, i11 - i6, i11));
        byte[] bArr = this.f17911d;
        System.arraycopy(bArr, i11, bArr, 0, i10);
        this.f17912e = i10;
        String str = this.f17910c.I;
        Format format = this.f17909b;
        String str2 = format.I;
        String str3 = format.I;
        if (!d0.a(str, str2)) {
            if (!"application/x-emsg".equals(this.f17910c.I)) {
                ke.b.N("HlsSampleStreamWrapper", "Ignoring sample for unsupported format: " + this.f17910c.I);
                return;
            }
            fd.a M = ed.b.M(wVar);
            Format d6 = M.d();
            if (d6 == null || !d0.a(str3, d6.I)) {
                ke.b.N("HlsSampleStreamWrapper", "Ignoring EMSG. Expected it to contain wrapped " + str3 + " but actual wrapped format: " + M.d());
                return;
            }
            byte[] t5 = M.t();
            t5.getClass();
            wVar = new ke.w(t5);
        }
        int a = wVar.a();
        qc.v vVar = this.a;
        vVar.d(a, wVar);
        vVar.b(j, i5, a, i10, uVar);
    }

    @Override // qc.v
    public final int c(ie.k kVar, int i5, boolean z5) {
        int i6 = this.f17912e + i5;
        byte[] bArr = this.f17911d;
        if (bArr.length < i6) {
            this.f17911d = Arrays.copyOf(bArr, (i6 / 2) + i6);
        }
        int read = kVar.read(this.f17911d, this.f17912e, i5);
        if (read != -1) {
            this.f17912e += read;
            return read;
        }
        if (z5) {
            return -1;
        }
        throw new EOFException();
    }

    @Override // qc.v
    public final void d(int i5, ke.w wVar) {
        int i6 = this.f17912e + i5;
        byte[] bArr = this.f17911d;
        if (bArr.length < i6) {
            this.f17911d = Arrays.copyOf(bArr, (i6 / 2) + i6);
        }
        wVar.e(this.f17911d, this.f17912e, i5);
        this.f17912e += i5;
    }

    @Override // qc.v
    public final void e(Format format) {
        this.f17910c = format;
        this.a.e(this.f17909b);
    }
}
