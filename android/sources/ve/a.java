package ve;

import android.os.Bundle;
import android.os.Parcel;
import android.os.Parcelable;
import androidx.annotation.NonNull;

/* loaded from: classes3.dex */
public final class a extends cf.a {

    @NonNull
    public static final Parcelable.Creator<a> CREATOR = new sf.c(18);

    /* renamed from: d, reason: collision with root package name */
    public final int f19384d;

    /* renamed from: e, reason: collision with root package name */
    public final int f19385e;

    /* renamed from: i, reason: collision with root package name */
    public final Bundle f19386i;

    public a(int i5, int i6, Bundle bundle) {
        this.f19384d = i5;
        this.f19385e = i6;
        this.f19386i = bundle;
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel parcel, int i5) {
        int I = ys.l.I(20293, parcel);
        ys.l.H(parcel, 1, 4);
        parcel.writeInt(this.f19384d);
        ys.l.H(parcel, 2, 4);
        parcel.writeInt(this.f19385e);
        ys.l.z(parcel, 3, this.f19386i);
        ys.l.J(I, parcel);
    }
}
