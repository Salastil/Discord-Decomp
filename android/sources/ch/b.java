package ch;

import android.os.Parcel;
import android.os.Parcelable;
import androidx.appcompat.widget.c3;

/* loaded from: classes3.dex */
public final class b extends d2.b {
    public static final Parcelable.Creator<b> CREATOR = new c3(3);

    /* renamed from: i, reason: collision with root package name */
    public boolean f3497i;

    public b(Parcel parcel, ClassLoader classLoader) {
        super(parcel, classLoader);
        this.f3497i = parcel.readInt() == 1;
    }

    @Override // d2.b, android.os.Parcelable
    public final void writeToParcel(Parcel parcel, int i5) {
        super.writeToParcel(parcel, i5);
        parcel.writeInt(this.f3497i ? 1 : 0);
    }
}
