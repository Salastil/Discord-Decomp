package d2;

import android.os.Parcel;
import android.os.Parcelable;
import androidx.appcompat.widget.c3;

/* loaded from: classes.dex */
public abstract class b implements Parcelable {

    /* renamed from: d, reason: collision with root package name */
    public final Parcelable f7399d;

    /* renamed from: e, reason: collision with root package name */
    public static final a f7398e = new a();
    public static final Parcelable.Creator<b> CREATOR = new c3(5);

    public b() {
        this.f7399d = null;
    }

    @Override // android.os.Parcelable
    public final int describeContents() {
        return 0;
    }

    @Override // android.os.Parcelable
    public void writeToParcel(Parcel parcel, int i5) {
        parcel.writeParcelable(this.f7399d, i5);
    }

    public b(Parcelable parcelable) {
        if (parcelable != null) {
            this.f7399d = parcelable == f7398e ? null : parcelable;
            return;
        }
        throw new IllegalArgumentException("superState must not be null");
    }

    public b(Parcel parcel, ClassLoader classLoader) {
        Parcelable readParcelable = parcel.readParcelable(classLoader);
        this.f7399d = readParcelable == null ? f7398e : readParcelable;
    }
}
