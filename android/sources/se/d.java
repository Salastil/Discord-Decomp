package se;

import android.os.Parcel;
import android.os.Parcelable;
import androidx.annotation.NonNull;
import java.util.Arrays;
import rf.s0;
import ys.l;

/* loaded from: classes3.dex */
public final class d extends cf.a {

    @NonNull
    public static final Parcelable.Creator<d> CREATOR = new s0(27);

    /* renamed from: d, reason: collision with root package name */
    public final boolean f17968d;

    public d(boolean z5) {
        this.f17968d = z5;
    }

    public final boolean equals(Object obj) {
        return (obj instanceof d) && this.f17968d == ((d) obj).f17968d;
    }

    public final int hashCode() {
        return Arrays.hashCode(new Object[]{Boolean.valueOf(this.f17968d)});
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel parcel, int i5) {
        int I = l.I(20293, parcel);
        l.H(parcel, 1, 4);
        parcel.writeInt(this.f17968d ? 1 : 0);
        l.J(I, parcel);
    }
}
