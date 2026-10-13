package androidx.appcompat.widget;

import android.os.Parcel;
import android.os.Parcelable;
import android.view.View;

/* loaded from: classes.dex */
public final class q0 extends View.BaseSavedState {
    public static final Parcelable.Creator<q0> CREATOR = new android.support.v4.media.a(5);

    /* renamed from: d, reason: collision with root package name */
    public boolean f1080d;

    @Override // android.view.View.BaseSavedState, android.view.AbsSavedState, android.os.Parcelable
    public final void writeToParcel(Parcel parcel, int i5) {
        super.writeToParcel(parcel, i5);
        parcel.writeByte(this.f1080d ? (byte) 1 : (byte) 0);
    }
}
