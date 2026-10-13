package androidx.swiperefreshlayout.widget;

import android.os.Parcel;
import android.os.Parcelable;
import android.view.View;

/* loaded from: classes.dex */
public final class h extends View.BaseSavedState {
    public static final Parcelable.Creator<h> CREATOR = new android.support.v4.media.a(11);

    /* renamed from: d, reason: collision with root package name */
    public final boolean f2534d;

    public h(Parcelable parcelable, boolean z5) {
        super(parcelable);
        this.f2534d = z5;
    }

    @Override // android.view.View.BaseSavedState, android.view.AbsSavedState, android.os.Parcelable
    public final void writeToParcel(Parcel parcel, int i5) {
        super.writeToParcel(parcel, i5);
        parcel.writeByte(this.f2534d ? (byte) 1 : (byte) 0);
    }

    public h(Parcel parcel) {
        super(parcel);
        this.f2534d = parcel.readByte() != 0;
    }
}
