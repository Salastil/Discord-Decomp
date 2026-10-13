package bf;

import android.os.Bundle;
import android.os.Parcel;
import android.os.Parcelable;

/* loaded from: classes3.dex */
public final class b0 extends cf.a {
    public static final Parcelable.Creator<b0> CREATOR = new android.support.v4.media.a(17);

    /* renamed from: d, reason: collision with root package name */
    public Bundle f2838d;

    /* renamed from: e, reason: collision with root package name */
    public ye.d[] f2839e;

    /* renamed from: i, reason: collision with root package name */
    public int f2840i;

    /* renamed from: v, reason: collision with root package name */
    public c f2841v;

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel parcel, int i5) {
        int I = ys.l.I(20293, parcel);
        ys.l.z(parcel, 1, this.f2838d);
        ys.l.F(parcel, 2, this.f2839e, i5);
        int i6 = this.f2840i;
        ys.l.H(parcel, 3, 4);
        parcel.writeInt(i6);
        ys.l.C(parcel, 4, this.f2841v, i5);
        ys.l.J(I, parcel);
    }
}
