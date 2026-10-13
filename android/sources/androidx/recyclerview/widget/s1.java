package androidx.recyclerview.widget;

import android.os.Parcel;
import android.os.Parcelable;
import java.util.ArrayList;

/* loaded from: classes.dex */
public final class s1 implements Parcelable {
    public static final Parcelable.Creator<s1> CREATOR = new q1(1);
    public boolean E;
    public boolean F;
    public boolean G;

    /* renamed from: d, reason: collision with root package name */
    public int f2454d;

    /* renamed from: e, reason: collision with root package name */
    public int f2455e;

    /* renamed from: i, reason: collision with root package name */
    public int f2456i;

    /* renamed from: v, reason: collision with root package name */
    public int[] f2457v;

    /* renamed from: w, reason: collision with root package name */
    public int f2458w;

    /* renamed from: x, reason: collision with root package name */
    public int[] f2459x;

    /* renamed from: y, reason: collision with root package name */
    public ArrayList f2460y;

    @Override // android.os.Parcelable
    public final int describeContents() {
        return 0;
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel parcel, int i5) {
        parcel.writeInt(this.f2454d);
        parcel.writeInt(this.f2455e);
        parcel.writeInt(this.f2456i);
        if (this.f2456i > 0) {
            parcel.writeIntArray(this.f2457v);
        }
        parcel.writeInt(this.f2458w);
        if (this.f2458w > 0) {
            parcel.writeIntArray(this.f2459x);
        }
        parcel.writeInt(this.E ? 1 : 0);
        parcel.writeInt(this.F ? 1 : 0);
        parcel.writeInt(this.G ? 1 : 0);
        parcel.writeList(this.f2460y);
    }
}
