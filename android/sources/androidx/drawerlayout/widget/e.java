package androidx.drawerlayout.widget;

import android.os.Parcel;
import android.os.Parcelable;
import androidx.appcompat.widget.c3;

/* loaded from: classes.dex */
public final class e extends d2.b {
    public static final Parcelable.Creator<e> CREATOR = new c3(2);

    /* renamed from: i, reason: collision with root package name */
    public int f1861i;

    /* renamed from: v, reason: collision with root package name */
    public int f1862v;

    /* renamed from: w, reason: collision with root package name */
    public int f1863w;

    /* renamed from: x, reason: collision with root package name */
    public int f1864x;

    /* renamed from: y, reason: collision with root package name */
    public int f1865y;

    public e(Parcel parcel, ClassLoader classLoader) {
        super(parcel, classLoader);
        this.f1861i = 0;
        this.f1861i = parcel.readInt();
        this.f1862v = parcel.readInt();
        this.f1863w = parcel.readInt();
        this.f1864x = parcel.readInt();
        this.f1865y = parcel.readInt();
    }

    @Override // d2.b, android.os.Parcelable
    public final void writeToParcel(Parcel parcel, int i5) {
        super.writeToParcel(parcel, i5);
        parcel.writeInt(this.f1861i);
        parcel.writeInt(this.f1862v);
        parcel.writeInt(this.f1863w);
        parcel.writeInt(this.f1864x);
        parcel.writeInt(this.f1865y);
    }
}
