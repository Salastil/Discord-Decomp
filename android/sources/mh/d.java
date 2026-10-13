package mh;

import android.os.Parcel;
import android.os.Parcelable;
import android.view.AbsSavedState;
import androidx.appcompat.widget.c3;
import com.google.android.material.sidesheet.SideSheetBehavior;

/* loaded from: classes3.dex */
public final class d extends d2.b {
    public static final Parcelable.Creator<d> CREATOR = new c3(7);

    /* renamed from: i, reason: collision with root package name */
    public final int f14509i;

    public d(Parcel parcel, ClassLoader classLoader) {
        super(parcel, classLoader);
        this.f14509i = parcel.readInt();
    }

    @Override // d2.b, android.os.Parcelable
    public final void writeToParcel(Parcel parcel, int i5) {
        super.writeToParcel(parcel, i5);
        parcel.writeInt(this.f14509i);
    }

    public d(SideSheetBehavior sideSheetBehavior) {
        super(AbsSavedState.EMPTY_STATE);
        this.f14509i = sideSheetBehavior.f6093h;
    }
}
