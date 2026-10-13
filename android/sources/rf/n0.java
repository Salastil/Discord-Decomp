package rf;

import android.os.Parcel;
import android.os.Parcelable;
import java.util.Arrays;

/* loaded from: classes3.dex */
public final class n0 extends cf.a {
    public static final Parcelable.Creator<n0> CREATOR = new kf.b(14);

    /* renamed from: d, reason: collision with root package name */
    public final boolean f17331d;

    public n0(boolean z5) {
        this.f17331d = Boolean.valueOf(z5).booleanValue();
    }

    public final boolean equals(Object obj) {
        return (obj instanceof n0) && this.f17331d == ((n0) obj).f17331d;
    }

    public final int hashCode() {
        return Arrays.hashCode(new Object[]{Boolean.valueOf(this.f17331d)});
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel parcel, int i5) {
        int I = ys.l.I(20293, parcel);
        ys.l.H(parcel, 1, 4);
        parcel.writeInt(this.f17331d ? 1 : 0);
        ys.l.J(I, parcel);
    }
}
