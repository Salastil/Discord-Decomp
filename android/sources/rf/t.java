package rf;

import android.os.Parcel;
import android.os.Parcelable;
import androidx.annotation.NonNull;
import java.util.Arrays;

/* loaded from: classes3.dex */
public final class t extends cf.a {

    @NonNull
    public static final Parcelable.Creator<t> CREATOR = new kf.b(18);

    /* renamed from: d, reason: collision with root package name */
    public final boolean f17351d;

    public t(boolean z5) {
        this.f17351d = z5;
    }

    public final boolean equals(Object obj) {
        return (obj instanceof t) && this.f17351d == ((t) obj).f17351d;
    }

    public final int hashCode() {
        return Arrays.hashCode(new Object[]{Boolean.valueOf(this.f17351d)});
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel parcel, int i5) {
        int I = ys.l.I(20293, parcel);
        ys.l.H(parcel, 1, 4);
        parcel.writeInt(this.f17351d ? 1 : 0);
        ys.l.J(I, parcel);
    }
}
