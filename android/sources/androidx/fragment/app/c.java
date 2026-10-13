package androidx.fragment.app;

import android.os.Parcel;
import android.os.Parcelable;
import java.util.ArrayList;

/* loaded from: classes.dex */
public final class c implements Parcelable {
    public static final Parcelable.Creator<c> CREATOR = new android.support.v4.media.a(7);

    /* renamed from: d, reason: collision with root package name */
    public final ArrayList f1975d;

    /* renamed from: e, reason: collision with root package name */
    public final ArrayList f1976e;

    public c(Parcel parcel) {
        this.f1975d = parcel.createStringArrayList();
        this.f1976e = parcel.createTypedArrayList(b.CREATOR);
    }

    @Override // android.os.Parcelable
    public final int describeContents() {
        return 0;
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel parcel, int i5) {
        parcel.writeStringList(this.f1975d);
        parcel.writeTypedList(this.f1976e);
    }
}
