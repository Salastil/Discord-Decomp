package ze;

import android.os.Parcel;
import android.os.Parcelable;
import androidx.annotation.NonNull;
import bf.t;
import java.util.Arrays;

/* loaded from: classes3.dex */
public final class f extends cf.a {

    @NonNull
    public static final Parcelable.Creator<f> CREATOR = q.f21218b;

    /* renamed from: v, reason: collision with root package name */
    public static final f f21198v;

    /* renamed from: d, reason: collision with root package name */
    public final g f21199d;

    /* renamed from: e, reason: collision with root package name */
    public final boolean f21200e;

    /* renamed from: i, reason: collision with root package name */
    public boolean f21201i;

    static {
        f fVar = new f(null, false);
        fVar.f21201i = false;
        f21198v = fVar;
    }

    public f(g gVar, boolean z5) {
        this.f21199d = gVar;
        this.f21200e = z5;
    }

    public final boolean equals(Object obj) {
        if (!(obj instanceof f)) {
            return false;
        }
        f fVar = (f) obj;
        return t.j(this.f21199d, fVar.f21199d) && this.f21201i == fVar.f21201i && this.f21200e == fVar.f21200e;
    }

    public final int hashCode() {
        return Arrays.hashCode(new Object[]{this.f21199d, Boolean.valueOf(this.f21201i), Boolean.valueOf(this.f21200e)});
    }

    public final String toString() {
        String valueOf = String.valueOf(this.f21199d);
        return a3.e.n(new StringBuilder(valueOf.length() + 31), "ApiMetadata(complianceOptions=", valueOf, ")");
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel parcel, int i5) {
        if (this.f21201i) {
            parcel.setDataPosition(parcel.dataPosition() - 4);
            parcel.setDataSize(parcel.dataSize() - 4);
            return;
        }
        parcel.writeInt(-204102970);
        int I = ys.l.I(20293, parcel);
        ys.l.C(parcel, 1, this.f21199d, i5);
        ys.l.H(parcel, 2, 4);
        parcel.writeInt(this.f21200e ? 1 : 0);
        ys.l.J(I, parcel);
    }
}
