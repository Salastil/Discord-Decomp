package androidx.fragment.app;

import android.os.Parcel;
import android.os.Parcelable;

/* loaded from: classes.dex */
public final class y0 implements Parcelable {
    public static final Parcelable.Creator<y0> CREATOR = new android.support.v4.media.a(8);

    /* renamed from: d, reason: collision with root package name */
    public String f2122d;

    /* renamed from: e, reason: collision with root package name */
    public int f2123e;

    public y0(String str, int i5) {
        this.f2122d = str;
        this.f2123e = i5;
    }

    @Override // android.os.Parcelable
    public final int describeContents() {
        return 0;
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel parcel, int i5) {
        parcel.writeString(this.f2122d);
        parcel.writeInt(this.f2123e);
    }
}
