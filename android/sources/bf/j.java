package bf;

import android.os.Parcel;
import android.os.Parcelable;
import androidx.annotation.NonNull;
import java.util.List;

/* loaded from: classes3.dex */
public final class j extends cf.a {

    @NonNull
    public static final Parcelable.Creator<j> CREATOR = new android.support.v4.media.a(12);

    /* renamed from: d, reason: collision with root package name */
    public final int f2894d;

    /* renamed from: e, reason: collision with root package name */
    public List f2895e;

    public j(int i5, List list) {
        this.f2894d = i5;
        this.f2895e = list;
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel parcel, int i5) {
        int I = ys.l.I(20293, parcel);
        ys.l.H(parcel, 1, 4);
        parcel.writeInt(this.f2894d);
        ys.l.G(parcel, 2, this.f2895e);
        ys.l.J(I, parcel);
    }
}
