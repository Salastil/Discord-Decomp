package hg;

import android.os.Parcel;
import android.os.Parcelable;
import bf.q;
import ys.l;

/* loaded from: classes3.dex */
public final class f extends cf.a {
    public static final Parcelable.Creator<f> CREATOR = new gd.a(6);

    /* renamed from: d, reason: collision with root package name */
    public final int f10025d;

    /* renamed from: e, reason: collision with root package name */
    public final ye.b f10026e;

    /* renamed from: i, reason: collision with root package name */
    public final q f10027i;

    public f(int i5, ye.b bVar, q qVar) {
        this.f10025d = i5;
        this.f10026e = bVar;
        this.f10027i = qVar;
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel parcel, int i5) {
        int I = l.I(20293, parcel);
        l.H(parcel, 1, 4);
        parcel.writeInt(this.f10025d);
        l.C(parcel, 2, this.f10026e, i5);
        l.C(parcel, 3, this.f10027i, i5);
        l.J(I, parcel);
    }
}
