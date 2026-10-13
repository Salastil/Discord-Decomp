package androidx.recyclerview.widget;

import android.os.Parcel;
import android.os.Parcelable;
import androidx.recyclerview.widget.LinearLayoutManager;

/* loaded from: classes.dex */
public final class l0 implements Parcelable.Creator {
    @Override // android.os.Parcelable.Creator
    public final Object createFromParcel(Parcel parcel) {
        LinearLayoutManager.SavedState savedState = new LinearLayoutManager.SavedState();
        savedState.f2297d = parcel.readInt();
        savedState.f2298e = parcel.readInt();
        savedState.f2299i = parcel.readInt() == 1;
        return savedState;
    }

    @Override // android.os.Parcelable.Creator
    public final Object[] newArray(int i5) {
        return new LinearLayoutManager.SavedState[i5];
    }
}
