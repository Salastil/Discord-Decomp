package rf;

import android.os.Parcel;
import android.os.Parcelable;
import androidx.annotation.NonNull;
import java.util.Arrays;

/* loaded from: classes3.dex */
public final class g extends cf.a {

    @NonNull
    public static final Parcelable.Creator<g> CREATOR = new s0(9);

    /* renamed from: d, reason: collision with root package name */
    public final boolean f17303d;

    public g(boolean z5) {
        this.f17303d = z5;
    }

    public final boolean equals(Object obj) {
        return (obj instanceof g) && this.f17303d == ((g) obj).f17303d;
    }

    public final int hashCode() {
        return Arrays.hashCode(new Object[]{Boolean.valueOf(this.f17303d)});
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel parcel, int i5) {
        int I = ys.l.I(20293, parcel);
        ys.l.H(parcel, 1, 4);
        parcel.writeInt(this.f17303d ? 1 : 0);
        ys.l.J(I, parcel);
    }
}
