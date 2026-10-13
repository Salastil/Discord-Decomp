package bf;

import android.os.Parcel;
import android.os.Parcelable;
import androidx.annotation.NonNull;

/* loaded from: classes3.dex */
public final class c extends cf.a {

    @NonNull
    public static final Parcelable.Creator<c> CREATOR = new android.support.v4.media.a(18);

    /* renamed from: d, reason: collision with root package name */
    public final i f2842d;

    /* renamed from: e, reason: collision with root package name */
    public final boolean f2843e;

    /* renamed from: i, reason: collision with root package name */
    public final boolean f2844i;

    /* renamed from: v, reason: collision with root package name */
    public final int[] f2845v;

    /* renamed from: w, reason: collision with root package name */
    public final int f2846w;

    /* renamed from: x, reason: collision with root package name */
    public final int[] f2847x;

    public c(i iVar, boolean z5, boolean z6, int[] iArr, int i5, int[] iArr2) {
        this.f2842d = iVar;
        this.f2843e = z5;
        this.f2844i = z6;
        this.f2845v = iArr;
        this.f2846w = i5;
        this.f2847x = iArr2;
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel parcel, int i5) {
        int I = ys.l.I(20293, parcel);
        ys.l.C(parcel, 1, this.f2842d, i5);
        ys.l.H(parcel, 2, 4);
        parcel.writeInt(this.f2843e ? 1 : 0);
        ys.l.H(parcel, 3, 4);
        parcel.writeInt(this.f2844i ? 1 : 0);
        int[] iArr = this.f2845v;
        if (iArr != null) {
            int I2 = ys.l.I(4, parcel);
            parcel.writeIntArray(iArr);
            ys.l.J(I2, parcel);
        }
        ys.l.H(parcel, 5, 4);
        parcel.writeInt(this.f2846w);
        int[] iArr2 = this.f2847x;
        if (iArr2 != null) {
            int I3 = ys.l.I(6, parcel);
            parcel.writeIntArray(iArr2);
            ys.l.J(I3, parcel);
        }
        ys.l.J(I, parcel);
    }
}
