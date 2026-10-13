package rf;

import android.os.Parcel;
import android.os.Parcelable;
import java.util.Arrays;

/* loaded from: classes3.dex */
public final class m0 extends cf.a {
    public static final Parcelable.Creator<m0> CREATOR = new kf.b(13);

    /* renamed from: d, reason: collision with root package name */
    public final long f17329d;

    public m0(long j) {
        this.f17329d = Long.valueOf(j).longValue();
    }

    public final boolean equals(Object obj) {
        return (obj instanceof m0) && this.f17329d == ((m0) obj).f17329d;
    }

    public final int hashCode() {
        return Arrays.hashCode(new Object[]{Long.valueOf(this.f17329d)});
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel parcel, int i5) {
        int I = ys.l.I(20293, parcel);
        ys.l.H(parcel, 1, 8);
        parcel.writeLong(this.f17329d);
        ys.l.J(I, parcel);
    }
}
