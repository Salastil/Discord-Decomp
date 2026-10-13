package bf;

import android.os.Parcel;
import android.os.Parcelable;
import androidx.annotation.NonNull;

/* loaded from: classes3.dex */
public final class i extends cf.a {

    @NonNull
    public static final Parcelable.Creator<i> CREATOR = new android.support.v4.media.a(16);

    /* renamed from: d, reason: collision with root package name */
    public final int f2889d;

    /* renamed from: e, reason: collision with root package name */
    public final boolean f2890e;

    /* renamed from: i, reason: collision with root package name */
    public final boolean f2891i;

    /* renamed from: v, reason: collision with root package name */
    public final int f2892v;

    /* renamed from: w, reason: collision with root package name */
    public final int f2893w;

    public i(int i5, int i6, int i10, boolean z5, boolean z6) {
        this.f2889d = i5;
        this.f2890e = z5;
        this.f2891i = z6;
        this.f2892v = i6;
        this.f2893w = i10;
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel parcel, int i5) {
        int I = ys.l.I(20293, parcel);
        ys.l.H(parcel, 1, 4);
        parcel.writeInt(this.f2889d);
        ys.l.H(parcel, 2, 4);
        parcel.writeInt(this.f2890e ? 1 : 0);
        ys.l.H(parcel, 3, 4);
        parcel.writeInt(this.f2891i ? 1 : 0);
        ys.l.H(parcel, 4, 4);
        parcel.writeInt(this.f2892v);
        ys.l.H(parcel, 5, 4);
        parcel.writeInt(this.f2893w);
        ys.l.J(I, parcel);
    }
}
