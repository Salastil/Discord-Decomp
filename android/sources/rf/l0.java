package rf;

import android.os.Parcel;
import android.os.Parcelable;
import androidx.annotation.NonNull;
import java.util.Arrays;

/* loaded from: classes3.dex */
public final class l0 extends cf.a {

    @NonNull
    public static final Parcelable.Creator<l0> CREATOR = new s0(6);

    /* renamed from: d, reason: collision with root package name */
    public final int f17326d;

    /* renamed from: e, reason: collision with root package name */
    public final short f17327e;

    /* renamed from: i, reason: collision with root package name */
    public final short f17328i;

    public l0(short s2, short s5, int i5) {
        this.f17326d = i5;
        this.f17327e = s2;
        this.f17328i = s5;
    }

    public final boolean equals(Object obj) {
        if (!(obj instanceof l0)) {
            return false;
        }
        l0 l0Var = (l0) obj;
        return this.f17326d == l0Var.f17326d && this.f17327e == l0Var.f17327e && this.f17328i == l0Var.f17328i;
    }

    public final int hashCode() {
        return Arrays.hashCode(new Object[]{Integer.valueOf(this.f17326d), Short.valueOf(this.f17327e), Short.valueOf(this.f17328i)});
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel parcel, int i5) {
        int I = ys.l.I(20293, parcel);
        ys.l.H(parcel, 1, 4);
        parcel.writeInt(this.f17326d);
        ys.l.H(parcel, 2, 4);
        parcel.writeInt(this.f17327e);
        ys.l.H(parcel, 3, 4);
        parcel.writeInt(this.f17328i);
        ys.l.J(I, parcel);
    }
}
