package ng;

import android.os.Parcel;
import android.os.Parcelable;
import androidx.appcompat.widget.c3;

/* loaded from: classes3.dex */
public final class d extends d2.b {
    public static final Parcelable.Creator<d> CREATOR = new c3(8);

    /* renamed from: i, reason: collision with root package name */
    public boolean f15433i;

    /* renamed from: v, reason: collision with root package name */
    public boolean f15434v;

    /* renamed from: w, reason: collision with root package name */
    public int f15435w;

    /* renamed from: x, reason: collision with root package name */
    public float f15436x;

    /* renamed from: y, reason: collision with root package name */
    public boolean f15437y;

    public d(Parcel parcel, ClassLoader classLoader) {
        super(parcel, classLoader);
        this.f15433i = parcel.readByte() != 0;
        this.f15434v = parcel.readByte() != 0;
        this.f15435w = parcel.readInt();
        this.f15436x = parcel.readFloat();
        this.f15437y = parcel.readByte() != 0;
    }

    @Override // d2.b, android.os.Parcelable
    public final void writeToParcel(Parcel parcel, int i5) {
        super.writeToParcel(parcel, i5);
        parcel.writeByte(this.f15433i ? (byte) 1 : (byte) 0);
        parcel.writeByte(this.f15434v ? (byte) 1 : (byte) 0);
        parcel.writeInt(this.f15435w);
        parcel.writeFloat(this.f15436x);
        parcel.writeByte(this.f15437y ? (byte) 1 : (byte) 0);
    }
}
