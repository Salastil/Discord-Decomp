package rf;

import android.os.Parcel;
import android.os.Parcelable;
import java.util.Arrays;

/* loaded from: classes3.dex */
public final class w0 extends cf.a {
    public static final Parcelable.Creator<w0> CREATOR = new s0(17);

    /* renamed from: d, reason: collision with root package name */
    public final long f17373d;

    /* renamed from: e, reason: collision with root package name */
    public final bg.w0 f17374e;

    /* renamed from: i, reason: collision with root package name */
    public final bg.w0 f17375i;

    /* renamed from: v, reason: collision with root package name */
    public final bg.w0 f17376v;

    public w0(long j, byte[] bArr, byte[] bArr2, byte[] bArr3) {
        bf.t.g(bArr);
        bg.w0 k = bg.w0.k(bArr, bArr.length);
        bf.t.g(bArr2);
        bg.w0 k5 = bg.w0.k(bArr2, bArr2.length);
        bf.t.g(bArr3);
        bg.w0 k7 = bg.w0.k(bArr3, bArr3.length);
        this.f17373d = j;
        this.f17374e = k;
        this.f17375i = k5;
        this.f17376v = k7;
    }

    public final boolean equals(Object obj) {
        if (!(obj instanceof w0)) {
            return false;
        }
        w0 w0Var = (w0) obj;
        return this.f17373d == w0Var.f17373d && bf.t.j(this.f17374e, w0Var.f17374e) && bf.t.j(this.f17375i, w0Var.f17375i) && bf.t.j(this.f17376v, w0Var.f17376v);
    }

    public final int hashCode() {
        return Arrays.hashCode(new Object[]{Long.valueOf(this.f17373d), this.f17374e, this.f17375i, this.f17376v});
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel parcel, int i5) {
        int I = ys.l.I(20293, parcel);
        ys.l.H(parcel, 1, 8);
        parcel.writeLong(this.f17373d);
        ys.l.A(parcel, 2, this.f17374e.m());
        ys.l.A(parcel, 3, this.f17375i.m());
        ys.l.A(parcel, 4, this.f17376v.m());
        ys.l.J(I, parcel);
    }
}
