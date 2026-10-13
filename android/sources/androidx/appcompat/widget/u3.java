package androidx.appcompat.widget;

import android.os.Parcel;
import android.os.Parcelable;

/* loaded from: classes.dex */
public final class u3 extends d2.b {
    public static final Parcelable.Creator<u3> CREATOR = new c3(1);

    /* renamed from: i, reason: collision with root package name */
    public int f1124i;

    /* renamed from: v, reason: collision with root package name */
    public boolean f1125v;

    public u3(Parcel parcel, ClassLoader classLoader) {
        super(parcel, classLoader);
        this.f1124i = parcel.readInt();
        this.f1125v = parcel.readInt() != 0;
    }

    @Override // d2.b, android.os.Parcelable
    public final void writeToParcel(Parcel parcel, int i5) {
        super.writeToParcel(parcel, i5);
        parcel.writeInt(this.f1124i);
        parcel.writeInt(this.f1125v ? 1 : 0);
    }
}
