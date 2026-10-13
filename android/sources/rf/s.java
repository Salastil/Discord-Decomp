package rf;

import android.os.Parcel;
import android.os.Parcelable;
import androidx.annotation.NonNull;
import java.util.Arrays;

/* loaded from: classes3.dex */
public final class s extends cf.a {

    @NonNull
    public static final Parcelable.Creator<s> CREATOR = new kf.b(15);

    /* renamed from: d, reason: collision with root package name */
    public final boolean f17350d;

    public s(boolean z5) {
        this.f17350d = z5;
    }

    public final boolean equals(Object obj) {
        return (obj instanceof s) && this.f17350d == ((s) obj).f17350d;
    }

    public final int hashCode() {
        return Arrays.hashCode(new Object[]{Boolean.valueOf(this.f17350d)});
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel parcel, int i5) {
        int I = ys.l.I(20293, parcel);
        ys.l.H(parcel, 1, 4);
        parcel.writeInt(this.f17350d ? 1 : 0);
        ys.l.J(I, parcel);
    }
}
