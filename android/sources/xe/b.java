package xe;

import android.content.Intent;
import android.os.Parcel;
import android.os.Parcelable;

/* loaded from: classes3.dex */
public final class b implements Parcelable.Creator {
    public final /* synthetic */ int a;

    @Override // android.os.Parcelable.Creator
    public final Object createFromParcel(Parcel parcel) {
        switch (this.a) {
            case 0:
                int g02 = ys.d.g0(parcel);
                Intent intent = null;
                while (parcel.dataPosition() < g02) {
                    int readInt = parcel.readInt();
                    if (((char) readInt) != 1) {
                        ys.d.e0(readInt, parcel);
                    } else {
                        intent = (Intent) ys.d.A(parcel, readInt, Intent.CREATOR);
                    }
                }
                ys.d.G(g02, parcel);
                return new a(intent);
            default:
                return new f(parcel.readStrongBinder());
        }
    }

    @Override // android.os.Parcelable.Creator
    public final /* synthetic */ Object[] newArray(int i5) {
        switch (this.a) {
            case 0:
                return new a[i5];
            default:
                return new f[i5];
        }
    }
}
