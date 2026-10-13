package ch;

import android.os.Parcel;
import android.os.Parcelable;
import android.util.SparseArray;
import androidx.appcompat.widget.c3;

/* loaded from: classes3.dex */
public final class g extends SparseArray implements Parcelable {
    public static final Parcelable.Creator<g> CREATOR = new c3(4);

    public g(Parcel parcel, ClassLoader classLoader) {
        int readInt = parcel.readInt();
        int[] iArr = new int[readInt];
        parcel.readIntArray(iArr);
        Parcelable[] readParcelableArray = parcel.readParcelableArray(classLoader);
        for (int i5 = 0; i5 < readInt; i5++) {
            put(iArr[i5], readParcelableArray[i5]);
        }
    }

    @Override // android.os.Parcelable
    public final int describeContents() {
        return 0;
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel parcel, int i5) {
        int size = size();
        int[] iArr = new int[size];
        Parcelable[] parcelableArr = new Parcelable[size];
        for (int i6 = 0; i6 < size; i6++) {
            iArr[i6] = keyAt(i6);
            parcelableArr[i6] = (Parcelable) valueAt(i6);
        }
        parcel.writeInt(size);
        parcel.writeIntArray(iArr);
        parcel.writeParcelableArray(parcelableArr, i5);
    }
}
