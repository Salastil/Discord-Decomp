package se;

import android.app.PendingIntent;
import android.os.Parcel;
import android.os.Parcelable;
import androidx.annotation.NonNull;
import bf.t;
import rf.s0;
import ys.l;

/* loaded from: classes3.dex */
public final class f extends cf.a {

    @NonNull
    public static final Parcelable.Creator<f> CREATOR = new s0(23);

    /* renamed from: d, reason: collision with root package name */
    public final PendingIntent f17976d;

    public f(PendingIntent pendingIntent) {
        t.g(pendingIntent);
        this.f17976d = pendingIntent;
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel parcel, int i5) {
        int I = l.I(20293, parcel);
        l.C(parcel, 1, this.f17976d, i5);
        l.J(I, parcel);
    }
}
