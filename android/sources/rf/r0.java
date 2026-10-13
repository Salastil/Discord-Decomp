package rf;

import android.os.Parcel;
import android.os.Parcelable;
import java.util.Arrays;

/* loaded from: classes3.dex */
public final class r0 extends cf.a {
    public static final Parcelable.Creator<r0> CREATOR = new kf.b(29);

    /* renamed from: d, reason: collision with root package name */
    public final String f17349d;

    public r0(String str) {
        this.f17349d = str;
    }

    public final boolean equals(Object obj) {
        if (obj instanceof r0) {
            return bf.t.j(this.f17349d, ((r0) obj).f17349d);
        }
        return false;
    }

    public final int hashCode() {
        return Arrays.hashCode(new Object[]{this.f17349d});
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel parcel, int i5) {
        int I = ys.l.I(20293, parcel);
        ys.l.D(this.f17349d, parcel, 1);
        ys.l.J(I, parcel);
    }
}
