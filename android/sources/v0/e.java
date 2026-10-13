package v0;

import android.os.Parcel;
import android.os.Parcelable;
import android.util.SparseArray;
import androidx.appcompat.widget.c3;

/* loaded from: classes.dex */
public final class e extends d2.b {
    public static final Parcelable.Creator<e> CREATOR = new c3(12);

    /* renamed from: i, reason: collision with root package name */
    public SparseArray f19146i;

    public e(Parcel parcel, ClassLoader classLoader) {
        super(parcel, classLoader);
        int readInt = parcel.readInt();
        int[] iArr = new int[readInt];
        parcel.readIntArray(iArr);
        Parcelable[] readParcelableArray = parcel.readParcelableArray(classLoader);
        this.f19146i = new SparseArray(readInt);
        for (int i5 = 0; i5 < readInt; i5++) {
            this.f19146i.append(iArr[i5], readParcelableArray[i5]);
        }
    }

    @Override // d2.b, android.os.Parcelable
    public final void writeToParcel(Parcel parcel, int i5) {
        super.writeToParcel(parcel, i5);
        SparseArray sparseArray = this.f19146i;
        int size = sparseArray != null ? sparseArray.size() : 0;
        parcel.writeInt(size);
        int[] iArr = new int[size];
        Parcelable[] parcelableArr = new Parcelable[size];
        for (int i6 = 0; i6 < size; i6++) {
            iArr[i6] = this.f19146i.keyAt(i6);
            parcelableArr[i6] = (Parcelable) this.f19146i.valueAt(i6);
        }
        parcel.writeIntArray(iArr);
        parcel.writeParcelableArray(parcelableArr, i5);
    }
}
