package rf;

import android.os.Parcel;
import android.os.Parcelable;
import java.util.Arrays;

/* loaded from: classes3.dex */
public final class o0 extends cf.a {
    public static final Parcelable.Creator<o0> CREATOR = new kf.b(16);

    /* renamed from: d, reason: collision with root package name */
    public final String f17334d;

    public o0(String str) {
        bf.t.g(str);
        this.f17334d = str;
    }

    public final boolean equals(Object obj) {
        if (obj instanceof o0) {
            return this.f17334d.equals(((o0) obj).f17334d);
        }
        return false;
    }

    public final int hashCode() {
        return Arrays.hashCode(new Object[]{this.f17334d});
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel parcel, int i5) {
        int I = ys.l.I(20293, parcel);
        ys.l.D(this.f17334d, parcel, 1);
        ys.l.J(I, parcel);
    }
}
