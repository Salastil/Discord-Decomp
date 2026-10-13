package androidx.fragment.app;

import android.os.Parcel;
import android.os.Parcelable;
import java.util.ArrayList;

/* loaded from: classes.dex */
public final class e1 implements Parcelable {
    public static final Parcelable.Creator<e1> CREATOR = new android.support.v4.media.a(9);
    public ArrayList E;

    /* renamed from: d, reason: collision with root package name */
    public ArrayList f1993d;

    /* renamed from: e, reason: collision with root package name */
    public ArrayList f1994e;

    /* renamed from: i, reason: collision with root package name */
    public b[] f1995i;

    /* renamed from: v, reason: collision with root package name */
    public int f1996v;

    /* renamed from: w, reason: collision with root package name */
    public String f1997w;

    /* renamed from: x, reason: collision with root package name */
    public ArrayList f1998x;

    /* renamed from: y, reason: collision with root package name */
    public ArrayList f1999y;

    @Override // android.os.Parcelable
    public final int describeContents() {
        return 0;
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel parcel, int i5) {
        parcel.writeStringList(this.f1993d);
        parcel.writeStringList(this.f1994e);
        parcel.writeTypedArray(this.f1995i, i5);
        parcel.writeInt(this.f1996v);
        parcel.writeString(this.f1997w);
        parcel.writeStringList(this.f1998x);
        parcel.writeTypedList(this.f1999y);
        parcel.writeTypedList(this.E);
    }
}
