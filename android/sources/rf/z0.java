package rf;

import android.os.Parcel;
import android.os.Parcelable;
import java.util.Arrays;

/* loaded from: classes3.dex */
public final class z0 extends cf.a {
    public static final Parcelable.Creator<z0> CREATOR = new kf.b(12);

    /* renamed from: d, reason: collision with root package name */
    public final boolean f17383d;

    public z0(boolean z5) {
        this.f17383d = Boolean.valueOf(z5).booleanValue();
    }

    public final boolean equals(Object obj) {
        return (obj instanceof z0) && this.f17383d == ((z0) obj).f17383d;
    }

    public final int hashCode() {
        return Arrays.hashCode(new Object[]{Boolean.valueOf(this.f17383d)});
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel parcel, int i5) {
        int I = ys.l.I(20293, parcel);
        ys.l.H(parcel, 1, 4);
        parcel.writeInt(this.f17383d ? 1 : 0);
        ys.l.J(I, parcel);
    }
}
