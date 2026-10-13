package xe;

import android.content.Intent;
import android.os.Parcel;
import android.os.Parcelable;
import androidx.annotation.NonNull;
import ys.l;

/* loaded from: classes3.dex */
public final class a extends cf.a {

    @NonNull
    public static final Parcelable.Creator<a> CREATOR = new b(0);

    /* renamed from: d, reason: collision with root package name */
    public final Intent f20398d;

    public a(Intent intent) {
        this.f20398d = intent;
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel parcel, int i5) {
        int I = l.I(20293, parcel);
        l.C(parcel, 1, this.f20398d, i5);
        l.J(I, parcel);
    }
}
