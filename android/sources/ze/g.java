package ze;

import android.os.Parcel;
import android.os.Parcelable;
import androidx.annotation.NonNull;
import java.util.Arrays;

/* loaded from: classes3.dex */
public final class g extends cf.a {

    @NonNull
    public static final Parcelable.Creator<g> CREATOR = new q(1);

    /* renamed from: d, reason: collision with root package name */
    public final int f21202d;

    /* renamed from: e, reason: collision with root package name */
    public final int f21203e;

    /* renamed from: i, reason: collision with root package name */
    public final int f21204i;

    /* renamed from: v, reason: collision with root package name */
    public final boolean f21205v;

    public g(int i5, int i6, int i10, boolean z5) {
        this.f21202d = i5;
        this.f21203e = i6;
        this.f21204i = i10;
        this.f21205v = z5;
    }

    public final boolean equals(Object obj) {
        if (!(obj instanceof g)) {
            return false;
        }
        g gVar = (g) obj;
        return this.f21202d == gVar.f21202d && this.f21203e == gVar.f21203e && this.f21204i == gVar.f21204i && this.f21205v == gVar.f21205v;
    }

    public final int hashCode() {
        return Arrays.hashCode(new Object[]{Integer.valueOf(this.f21202d), Integer.valueOf(this.f21203e), Integer.valueOf(this.f21204i), Boolean.valueOf(this.f21205v)});
    }

    public final String toString() {
        int i5 = this.f21202d;
        int length = String.valueOf(i5).length();
        int i6 = this.f21203e;
        int length2 = String.valueOf(i6).length();
        int i10 = this.f21204i;
        int length3 = String.valueOf(i10).length();
        boolean z5 = this.f21205v;
        StringBuilder sb2 = new StringBuilder(length + 55 + length2 + 19 + length3 + 13 + String.valueOf(z5).length() + 1);
        sb2.append("ComplianceOptions{callerProductId=");
        sb2.append(i5);
        sb2.append(", dataOwnerProductId=");
        sb2.append(i6);
        sb2.append(", processingReason=");
        sb2.append(i10);
        sb2.append(", isUserData=");
        sb2.append(z5);
        sb2.append("}");
        return sb2.toString();
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel parcel, int i5) {
        int I = ys.l.I(20293, parcel);
        ys.l.H(parcel, 1, 4);
        parcel.writeInt(this.f21202d);
        ys.l.H(parcel, 2, 4);
        parcel.writeInt(this.f21203e);
        ys.l.H(parcel, 3, 4);
        parcel.writeInt(this.f21204i);
        ys.l.H(parcel, 4, 4);
        parcel.writeInt(this.f21205v ? 1 : 0);
        ys.l.J(I, parcel);
    }
}
