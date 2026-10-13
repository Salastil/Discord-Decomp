package rf;

import android.os.Parcel;
import android.os.Parcelable;
import androidx.annotation.NonNull;
import java.util.Arrays;

/* loaded from: classes3.dex */
public final class i0 extends cf.a {

    @NonNull
    public static final Parcelable.Creator<i0> CREATOR = new s0(3);

    /* renamed from: d, reason: collision with root package name */
    public final boolean f17315d;

    public i0(boolean z5) {
        this.f17315d = z5;
    }

    public final boolean equals(Object obj) {
        return (obj instanceof i0) && this.f17315d == ((i0) obj).f17315d;
    }

    public final int hashCode() {
        return Arrays.hashCode(new Object[]{Boolean.valueOf(this.f17315d)});
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel parcel, int i5) {
        int I = ys.l.I(20293, parcel);
        ys.l.H(parcel, 1, 4);
        parcel.writeInt(this.f17315d ? 1 : 0);
        ys.l.J(I, parcel);
    }
}
