package sd;

import android.os.Parcel;
import android.os.Parcelable;

/* loaded from: classes3.dex */
public final class u implements Parcelable.Creator {
    public final /* synthetic */ int a;

    @Override // android.os.Parcelable.Creator
    public final Object createFromParcel(Parcel parcel) {
        switch (this.a) {
            case 0:
                return new w(parcel);
            default:
                return new v(parcel);
        }
    }

    @Override // android.os.Parcelable.Creator
    public final Object[] newArray(int i5) {
        switch (this.a) {
            case 0:
                return new w[i5];
            default:
                return new v[i5];
        }
    }
}
