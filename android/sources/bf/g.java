package bf;

import android.os.Parcel;
import android.os.Parcelable;
import androidx.annotation.NonNull;

/* loaded from: classes3.dex */
public final class g extends cf.a {

    @NonNull
    public static final Parcelable.Creator<g> CREATOR = new android.support.v4.media.a(13);
    public final int E;
    public final int F;

    /* renamed from: d, reason: collision with root package name */
    public final int f2880d;

    /* renamed from: e, reason: collision with root package name */
    public final int f2881e;

    /* renamed from: i, reason: collision with root package name */
    public final int f2882i;

    /* renamed from: v, reason: collision with root package name */
    public final long f2883v;

    /* renamed from: w, reason: collision with root package name */
    public final long f2884w;

    /* renamed from: x, reason: collision with root package name */
    public final String f2885x;

    /* renamed from: y, reason: collision with root package name */
    public final String f2886y;

    public g(int i5, int i6, int i10, long j, long j5, String str, String str2, int i11, int i12) {
        this.f2880d = i5;
        this.f2881e = i6;
        this.f2882i = i10;
        this.f2883v = j;
        this.f2884w = j5;
        this.f2885x = str;
        this.f2886y = str2;
        this.E = i11;
        this.F = i12;
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel parcel, int i5) {
        int I = ys.l.I(20293, parcel);
        ys.l.H(parcel, 1, 4);
        parcel.writeInt(this.f2880d);
        ys.l.H(parcel, 2, 4);
        parcel.writeInt(this.f2881e);
        ys.l.H(parcel, 3, 4);
        parcel.writeInt(this.f2882i);
        ys.l.H(parcel, 4, 8);
        parcel.writeLong(this.f2883v);
        ys.l.H(parcel, 5, 8);
        parcel.writeLong(this.f2884w);
        ys.l.D(this.f2885x, parcel, 6);
        ys.l.D(this.f2886y, parcel, 7);
        ys.l.H(parcel, 8, 4);
        parcel.writeInt(this.E);
        ys.l.H(parcel, 9, 4);
        parcel.writeInt(this.F);
        ys.l.J(I, parcel);
    }
}
